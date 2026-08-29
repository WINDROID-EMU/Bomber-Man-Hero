#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_endol_80332CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332CD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332CD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332CDC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332CE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332CE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332CE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332CF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332CF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332CF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332CFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332D00: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332D04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D08: nop

    // 0x80332D0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332D10: nop

    // 0x80332D14: bne         $t1, $zero, L_80332E1C
    if (ctx->r9 != 0) {
        // 0x80332D18: nop
    
            goto L_80332E1C;
    }
    // 0x80332D18: nop

    // 0x80332D1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D20: nop

    // 0x80332D24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332D28: nop

    // 0x80332D2C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332D30: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332D34: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D38: nop

    // 0x80332D3C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332D40: nop

    // 0x80332D44: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332D48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D4C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332D50: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332D54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D58: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D60: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x80332D64: jal         0x8001C0EC
    // 0x80332D68: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332D68: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80332D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D74: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332D78: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80332D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D80: jal         0x8001ABF4
    // 0x80332D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332D88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D8C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332D90: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80332D94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D98: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80332D9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332DA0: jal         0x8001ABF4
    // 0x80332DA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80332DA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80332DA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332DB0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80332DB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DB8: addiu       $a3, $a3, 0xC4
    ctx->r7 = ADD32(ctx->r7, 0XC4);
    // 0x80332DBC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80332DC0: jal         0x8001ABF4
    // 0x80332DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80332DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80332DC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DCC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332DD0: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80332DD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DD8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80332DDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332DE0: jal         0x8001ABF4
    // 0x80332DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80332DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80332DE8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332DEC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DF0: nop

    // 0x80332DF4: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x80332DF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DFC: nop

    // 0x80332E00: lwc1        $f6, 0x2C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80332E04: nop

    // 0x80332E08: swc1        $f6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f6.u32l;
    // 0x80332E0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332E10: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E14: nop

    // 0x80332E18: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
L_80332E1C:
    // 0x80332E1C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E24: lh          $t3, 0xBA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBA);
    // 0x80332E28: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332E2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332E30: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332E34: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332E38: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332E3C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332E40: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332E44: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x80332E48: jal         0x80015538
    // 0x80332E4C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80332E4C: nop

    after_5:
    // 0x80332E50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E54: nop

    // 0x80332E58: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80332E5C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E60: nop

    // 0x80332E64: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332E68: nop

    // 0x80332E6C: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
    // 0x80332E70: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E74: nop

    // 0x80332E78: lh          $t7, 0xBA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBA);
    // 0x80332E7C: nop

    // 0x80332E80: beq         $t7, $zero, L_80332EE4
    if (ctx->r15 == 0) {
        // 0x80332E84: nop
    
            goto L_80332EE4;
    }
    // 0x80332E84: nop

    // 0x80332E88: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E8C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80332E90: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x80332E94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80332E98: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332E9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332EA0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332EA4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332EA8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332EAC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332EB0: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x80332EB4: nop

    // 0x80332EB8: bne         $t1, $at, L_80332EDC
    if (ctx->r9 != ctx->r1) {
        // 0x80332EBC: nop
    
            goto L_80332EDC;
    }
    // 0x80332EBC: nop

    // 0x80332EC0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332EC4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80332EC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332ECC: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80332ED0: nop

    // 0x80332ED4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80332ED8: swc1        $f4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f4.u32l;
L_80332EDC:
    // 0x80332EDC: b           L_80332F34
    // 0x80332EE0: nop

        goto L_80332F34;
    // 0x80332EE0: nop

L_80332EE4:
    // 0x80332EE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332EE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332EEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EF4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80332EF8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80332EFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332F00: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332F04: jal         0x800295C0
    // 0x80332F08: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80332F08: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80332F0C: beq         $v0, $zero, L_80332F24
    if (ctx->r2 == 0) {
        // 0x80332F10: nop
    
            goto L_80332F24;
    }
    // 0x80332F10: nop

    // 0x80332F14: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F18: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F1C: b           L_80332F34
    // 0x80332F20: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
        goto L_80332F34;
    // 0x80332F20: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
L_80332F24:
    // 0x80332F24: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332F28: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F2C: nop

    // 0x80332F30: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
L_80332F34:
    // 0x80332F34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F3C: jal         0x8001B4AC
    // 0x80332F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80332F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80332F44: beq         $v0, $zero, L_80332F64
    if (ctx->r2 == 0) {
        // 0x80332F48: nop
    
            goto L_80332F64;
    }
    // 0x80332F48: nop

    // 0x80332F4C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F50: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x80332F54: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80332F58: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F5C: nop

    // 0x80332F60: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80332F64:
    // 0x80332F64: b           L_80332F6C
    // 0x80332F68: nop

        goto L_80332F6C;
    // 0x80332F68: nop

L_80332F6C:
    // 0x80332F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332F70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332F74: jr          $ra
    // 0x80332F78: nop

    return;
    // 0x80332F78: nop

;}
RECOMP_FUNC void func_endol_803317EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803317EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803317F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803317F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803317F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803317FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331800: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331804: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331808: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033180C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331810: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331814: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331818: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033181C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331820: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331824: nop

    // 0x80331828: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033182C: nop

    // 0x80331830: bne         $t1, $zero, L_80331888
    if (ctx->r9 != 0) {
        // 0x80331834: nop
    
            goto L_80331888;
    }
    // 0x80331834: nop

    // 0x80331838: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033183C: nop

    // 0x80331840: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331844: nop

    // 0x80331848: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033184C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331850: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331854: nop

    // 0x80331858: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033185C: nop

    // 0x80331860: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331868: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033186C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331874: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033187C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80331880: jal         0x8001C0EC
    // 0x80331884: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331884: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331888:
    // 0x80331888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033188C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331890: jal         0x8001B4AC
    // 0x80331894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331898: beq         $v0, $zero, L_803318B8
    if (ctx->r2 == 0) {
        // 0x8033189C: nop
    
            goto L_803318B8;
    }
    // 0x8033189C: nop

    // 0x803318A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803318A4: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x803318A8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803318AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803318B0: nop

    // 0x803318B4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803318B8:
    // 0x803318B8: b           L_803318C0
    // 0x803318BC: nop

        goto L_803318C0;
    // 0x803318BC: nop

L_803318C0:
    // 0x803318C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803318C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803318C8: jr          $ra
    // 0x803318CC: nop

    return;
    // 0x803318CC: nop

;}
RECOMP_FUNC void func_endol_8033461C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033461C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334624: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334628: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033462C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334630: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334634: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334638: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033463C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334640: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334644: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334648: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033464C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334650: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334654: nop

    // 0x80334658: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033465C: nop

    // 0x80334660: bne         $t1, $zero, L_803346B8
    if (ctx->r9 != 0) {
        // 0x80334664: nop
    
            goto L_803346B8;
    }
    // 0x80334664: nop

    // 0x80334668: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033466C: nop

    // 0x80334670: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334674: nop

    // 0x80334678: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033467C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334680: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334684: nop

    // 0x80334688: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033468C: nop

    // 0x80334690: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334694: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334698: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033469C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803346A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803346A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803346AC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x803346B0: jal         0x8001C0EC
    // 0x803346B4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803346B4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803346B8:
    // 0x803346B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803346BC: nop

    // 0x803346C0: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803346C4: lwc1        $f14, 0xDC($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XDC);
    // 0x803346C8: jal         0x80015538
    // 0x803346CC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803346CC: nop

    after_1:
    // 0x803346D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803346D4: nop

    // 0x803346D8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x803346DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803346E0: nop

    // 0x803346E4: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803346E8: nop

    // 0x803346EC: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
    // 0x803346F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803346F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346F8: jal         0x8001B4AC
    // 0x803346FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803346FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334700: beq         $v0, $zero, L_80334720
    if (ctx->r2 == 0) {
        // 0x80334704: nop
    
            goto L_80334720;
    }
    // 0x80334704: nop

    // 0x80334708: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033470C: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x80334710: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80334714: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334718: nop

    // 0x8033471C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80334720:
    // 0x80334720: b           L_80334728
    // 0x80334724: nop

        goto L_80334728;
    // 0x80334724: nop

L_80334728:
    // 0x80334728: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033472C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334730: jr          $ra
    // 0x80334734: nop

    return;
    // 0x80334734: nop

;}
RECOMP_FUNC void func_endol_80335D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80335D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335D74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335D94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335D98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335D9C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80335DA0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80335DA4: nop

    // 0x80335DA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335DAC: nop

    // 0x80335DB0: bne         $t1, $zero, L_80335E04
    if (ctx->r9 != 0) {
        // 0x80335DB4: nop
    
            goto L_80335E04;
    }
    // 0x80335DB4: nop

    // 0x80335DB8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80335DBC: nop

    // 0x80335DC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335DC4: nop

    // 0x80335DC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335DCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335DD0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80335DD4: nop

    // 0x80335DD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335DDC: nop

    // 0x80335DE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335DE4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80335DE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335DEC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80335DF0: nop

    // 0x80335DF4: swc1        $f4, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f4.u32l;
    // 0x80335DF8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80335DFC: addiu       $t8, $zero, 0xB3
    ctx->r24 = ADD32(0, 0XB3);
    // 0x80335E00: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80335E04:
    // 0x80335E04: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E08: nop

    // 0x80335E0C: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80335E10: lwc1        $f14, 0xD4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80335E14: jal         0x80015538
    // 0x80335E18: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80335E18: nop

    after_0:
    // 0x80335E1C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E20: nop

    // 0x80335E24: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x80335E28: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E2C: nop

    // 0x80335E30: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80335E34: nop

    // 0x80335E38: bne         $t4, $zero, L_80335E58
    if (ctx->r12 != 0) {
        // 0x80335E3C: nop
    
            goto L_80335E58;
    }
    // 0x80335E3C: nop

    // 0x80335E40: jal         0x80330000
    // 0x80335E44: nop

    func_endol_80330000(rdram, ctx);
        goto after_1;
    // 0x80335E44: nop

    after_1:
    // 0x80335E48: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E4C: addiu       $t2, $zero, 0xB4
    ctx->r10 = ADD32(0, 0XB4);
    // 0x80335E50: b           L_80335E70
    // 0x80335E54: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
        goto L_80335E70;
    // 0x80335E54: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
L_80335E58:
    // 0x80335E58: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80335E5C: nop

    // 0x80335E60: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x80335E64: nop

    // 0x80335E68: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80335E6C: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_80335E70:
    // 0x80335E70: b           L_80335E78
    // 0x80335E74: nop

        goto L_80335E78;
    // 0x80335E74: nop

L_80335E78:
    // 0x80335E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335E7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335E80: jr          $ra
    // 0x80335E84: nop

    return;
    // 0x80335E84: nop

;}
RECOMP_FUNC void func_endol_80331FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331FD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331FDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331FE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331FE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331FE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331FEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331FF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331FF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331FFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332000: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332004: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332008: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033200C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332010: nop

    // 0x80332014: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332018: nop

    // 0x8033201C: bne         $t1, $zero, L_80332074
    if (ctx->r9 != 0) {
        // 0x80332020: nop
    
            goto L_80332074;
    }
    // 0x80332020: nop

    // 0x80332024: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332028: nop

    // 0x8033202C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332030: nop

    // 0x80332034: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332038: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033203C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332040: nop

    // 0x80332044: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332048: nop

    // 0x8033204C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332054: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332058: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x8033205C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332060: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332068: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8033206C: jal         0x8001C0EC
    // 0x80332070: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332070: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80332074:
    // 0x80332074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033207C: jal         0x8002A8B4
    // 0x80332080: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332080: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80332084: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332088: nop

    // 0x8033208C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332090: nop

    // 0x80332094: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033209C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803320A0: jal         0x8001B4AC
    // 0x803320A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803320A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803320A8: beq         $v0, $zero, L_803320C8
    if (ctx->r2 == 0) {
        // 0x803320AC: nop
    
            goto L_803320C8;
    }
    // 0x803320AC: nop

    // 0x803320B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803320B4: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x803320B8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803320BC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803320C0: nop

    // 0x803320C4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803320C8:
    // 0x803320C8: b           L_803320D0
    // 0x803320CC: nop

        goto L_803320D0;
    // 0x803320CC: nop

L_803320D0:
    // 0x803320D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803320D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803320D8: jr          $ra
    // 0x803320DC: nop

    return;
    // 0x803320DC: nop

;}
RECOMP_FUNC void func_endol_803331F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803331F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803331FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333200: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333204: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333208: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033320C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333214: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033321C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333220: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333224: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333228: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033322C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333230: nop

    // 0x80333234: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333238: nop

    // 0x8033323C: bne         $t1, $zero, L_80333294
    if (ctx->r9 != 0) {
        // 0x80333240: nop
    
            goto L_80333294;
    }
    // 0x80333240: nop

    // 0x80333244: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333248: nop

    // 0x8033324C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333250: nop

    // 0x80333254: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333258: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033325C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333260: nop

    // 0x80333264: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333268: nop

    // 0x8033326C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333274: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333278: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x8033327C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333280: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333288: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033328C: jal         0x8001C0EC
    // 0x80333290: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333290: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80333294:
    // 0x80333294: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033329C: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x803332A0: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803332A4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803332A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803332AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803332B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803332B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803332B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803332BC: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x803332C0: jal         0x80015538
    // 0x803332C4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803332C4: nop

    after_1:
    // 0x803332C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803332CC: nop

    // 0x803332D0: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803332D4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803332D8: nop

    // 0x803332DC: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803332E0: nop

    // 0x803332E4: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x803332E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803332EC: nop

    // 0x803332F0: lh          $t2, 0xBA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBA);
    // 0x803332F4: nop

    // 0x803332F8: beq         $t2, $zero, L_8033335C
    if (ctx->r10 == 0) {
        // 0x803332FC: nop
    
            goto L_8033335C;
    }
    // 0x803332FC: nop

    // 0x80333300: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333304: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333308: lh          $t5, 0xBA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBA);
    // 0x8033330C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80333310: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333314: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333318: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033331C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333320: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333324: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333328: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8033332C: nop

    // 0x80333330: bne         $t8, $at, L_80333354
    if (ctx->r24 != ctx->r1) {
        // 0x80333334: nop
    
            goto L_80333354;
    }
    // 0x80333334: nop

    // 0x80333338: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033333C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80333340: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333344: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333348: nop

    // 0x8033334C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80333350: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_80333354:
    // 0x80333354: b           L_803333AC
    // 0x80333358: nop

        goto L_803333AC;
    // 0x80333358: nop

L_8033335C:
    // 0x8033335C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333360: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033336C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80333370: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80333374: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333378: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033337C: jal         0x800295C0
    // 0x80333380: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80333380: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80333384: beq         $v0, $zero, L_8033339C
    if (ctx->r2 == 0) {
        // 0x80333388: nop
    
            goto L_8033339C;
    }
    // 0x80333388: nop

    // 0x8033338C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333390: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333394: b           L_803333AC
    // 0x80333398: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
        goto L_803333AC;
    // 0x80333398: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_8033339C:
    // 0x8033339C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803333A0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803333A4: nop

    // 0x803333A8: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
L_803333AC:
    // 0x803333AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333B4: jal         0x8001B4AC
    // 0x803333B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803333B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803333BC: beq         $v0, $zero, L_803333DC
    if (ctx->r2 == 0) {
        // 0x803333C0: nop
    
            goto L_803333DC;
    }
    // 0x803333C0: nop

    // 0x803333C4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803333C8: addiu       $t3, $zero, 0x1C
    ctx->r11 = ADD32(0, 0X1C);
    // 0x803333CC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803333D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803333D4: nop

    // 0x803333D8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803333DC:
    // 0x803333DC: b           L_803333E4
    // 0x803333E0: nop

        goto L_803333E4;
    // 0x803333E0: nop

L_803333E4:
    // 0x803333E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803333E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803333EC: jr          $ra
    // 0x803333F0: nop

    return;
    // 0x803333F0: nop

;}
RECOMP_FUNC void func_endol_80334DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334DE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334DF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334DF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334DF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334DFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334E00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334E08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334E10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334E14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334E18: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334E1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334E20: nop

    // 0x80334E24: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334E28: nop

    // 0x80334E2C: bne         $t1, $zero, L_80334E84
    if (ctx->r9 != 0) {
        // 0x80334E30: nop
    
            goto L_80334E84;
    }
    // 0x80334E30: nop

    // 0x80334E34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334E38: nop

    // 0x80334E3C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334E40: nop

    // 0x80334E44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334E48: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334E4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334E50: nop

    // 0x80334E54: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334E58: nop

    // 0x80334E5C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334E60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334E64: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334E68: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80334E6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334E70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334E78: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x80334E7C: jal         0x8001C0EC
    // 0x80334E80: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334E80: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80334E84:
    // 0x80334E84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334E88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334E8C: jal         0x8001B4AC
    // 0x80334E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334E94: beq         $v0, $zero, L_80334ED4
    if (ctx->r2 == 0) {
        // 0x80334E98: nop
    
            goto L_80334ED4;
    }
    // 0x80334E98: nop

    // 0x80334E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334EA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334EA4: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x80334EA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334EAC: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80334EB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334EB4: jal         0x8001ABF4
    // 0x80334EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334EB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80334EBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334EC0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80334EC4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334EC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334ECC: nop

    // 0x80334ED0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80334ED4:
    // 0x80334ED4: b           L_80334EDC
    // 0x80334ED8: nop

        goto L_80334EDC;
    // 0x80334ED8: nop

L_80334EDC:
    // 0x80334EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334EE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334EE4: jr          $ra
    // 0x80334EE8: nop

    return;
    // 0x80334EE8: nop

;}
RECOMP_FUNC void func_endol_80334174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334174: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334178: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033417C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334180: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334184: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334188: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033418C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334190: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334194: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334198: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033419C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803341A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803341A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803341A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803341AC: nop

    // 0x803341B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803341B4: nop

    // 0x803341B8: bne         $t1, $zero, L_80334210
    if (ctx->r9 != 0) {
        // 0x803341BC: nop
    
            goto L_80334210;
    }
    // 0x803341BC: nop

    // 0x803341C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803341C4: nop

    // 0x803341C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803341CC: nop

    // 0x803341D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803341D4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803341D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803341DC: nop

    // 0x803341E0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803341E4: nop

    // 0x803341E8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803341EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803341F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803341F4: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803341F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803341FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334204: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80334208: jal         0x8001C0EC
    // 0x8033420C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033420C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80334210:
    // 0x80334210: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334214: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334218: jal         0x8001B4AC
    // 0x8033421C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033421C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334220: beq         $v0, $zero, L_80334240
    if (ctx->r2 == 0) {
        // 0x80334224: nop
    
            goto L_80334240;
    }
    // 0x80334224: nop

    // 0x80334228: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033422C: addiu       $t8, $zero, 0x25
    ctx->r24 = ADD32(0, 0X25);
    // 0x80334230: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334234: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334238: nop

    // 0x8033423C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80334240:
    // 0x80334240: b           L_80334248
    // 0x80334244: nop

        goto L_80334248;
    // 0x80334244: nop

L_80334248:
    // 0x80334248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033424C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334250: jr          $ra
    // 0x80334254: nop

    return;
    // 0x80334254: nop

;}
RECOMP_FUNC void func_endol_8033381C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033381C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333820: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333824: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333828: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033382C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333830: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033383C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333840: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333844: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333848: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033384C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333850: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333854: nop

    // 0x80333858: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033385C: nop

    // 0x80333860: bne         $t1, $zero, L_803338B8
    if (ctx->r9 != 0) {
        // 0x80333864: nop
    
            goto L_803338B8;
    }
    // 0x80333864: nop

    // 0x80333868: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033386C: nop

    // 0x80333870: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333874: nop

    // 0x80333878: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033387C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333880: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333884: nop

    // 0x80333888: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033388C: nop

    // 0x80333890: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333898: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033389C: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x803338A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803338A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803338AC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x803338B0: jal         0x8001C0EC
    // 0x803338B4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803338B4: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_803338B8:
    // 0x803338B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803338BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803338C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803338C4: nop

    // 0x803338C8: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x803338CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338D4: jal         0x8002A8B4
    // 0x803338D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803338D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x803338DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803338E0: nop

    // 0x803338E4: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x803338E8: nop

    // 0x803338EC: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x803338F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803338F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803338F8: jal         0x80029C40
    // 0x803338FC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803338FC: nop

    after_2:
    // 0x80333900: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333904: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333908: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033390C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333914: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x80333918: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033391C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80333920: jal         0x80029018
    // 0x80333924: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x80333924: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80333928: beq         $v0, $zero, L_80333964
    if (ctx->r2 == 0) {
        // 0x8033392C: nop
    
            goto L_80333964;
    }
    // 0x8033392C: nop

    // 0x80333930: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80333934: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333938: nop

    // 0x8033393C: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
    // 0x80333940: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333944: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333948: nop

    // 0x8033394C: swc1        $f18, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f18.u32l;
    // 0x80333950: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333954: nop

    // 0x80333958: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8033395C: nop

    // 0x80333960: swc1        $f4, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f4.u32l;
L_80333964:
    // 0x80333964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333968: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033396C: jal         0x8001B4AC
    // 0x80333970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80333970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333974: beq         $v0, $zero, L_80333994
    if (ctx->r2 == 0) {
        // 0x80333978: nop
    
            goto L_80333994;
    }
    // 0x80333978: nop

    // 0x8033397C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333980: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x80333984: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80333988: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033398C: nop

    // 0x80333990: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80333994:
    // 0x80333994: b           L_8033399C
    // 0x80333998: nop

        goto L_8033399C;
    // 0x80333998: nop

L_8033399C:
    // 0x8033399C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803339A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803339A4: jr          $ra
    // 0x803339A8: nop

    return;
    // 0x803339A8: nop

;}
RECOMP_FUNC void func_endol_80332294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033229C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803322A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803322A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803322A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803322AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803322B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803322B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803322B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803322BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803322C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803322C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803322C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803322CC: nop

    // 0x803322D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803322D4: nop

    // 0x803322D8: bne         $t1, $zero, L_803323B0
    if (ctx->r9 != 0) {
        // 0x803322DC: nop
    
            goto L_803323B0;
    }
    // 0x803322DC: nop

    // 0x803322E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803322E4: nop

    // 0x803322E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803322EC: nop

    // 0x803322F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803322F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803322F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803322FC: nop

    // 0x80332300: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332304: nop

    // 0x80332308: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033230C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332310: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332314: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80332318: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033231C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332324: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80332328: jal         0x8001C0EC
    // 0x8033232C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033232C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80332330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332334: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332338: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033233C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332340: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80332344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332348: jal         0x8001ABF4
    // 0x8033234C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033234C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332354: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332358: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033235C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332360: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80332364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332368: jal         0x8001ABF4
    // 0x8033236C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033236C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80332370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332374: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332378: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033237C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332380: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80332384: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80332388: jal         0x8001ABF4
    // 0x8033238C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033238C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80332390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332394: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332398: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x8033239C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323A0: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x803323A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803323A8: jal         0x8001ABF4
    // 0x803323AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803323AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803323B0:
    // 0x803323B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803323B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803323B8: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x803323BC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803323C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803323C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803323C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803323CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803323D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803323D4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803323D8: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x803323DC: jal         0x80015538
    // 0x803323E0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803323E0: nop

    after_5:
    // 0x803323E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803323E8: nop

    // 0x803323EC: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803323F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803323F4: nop

    // 0x803323F8: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803323FC: nop

    // 0x80332400: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x80332404: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332408: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033240C: jal         0x8001B4AC
    // 0x80332410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80332410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80332414: beq         $v0, $zero, L_80332434
    if (ctx->r2 == 0) {
        // 0x80332418: nop
    
            goto L_80332434;
    }
    // 0x80332418: nop

    // 0x8033241C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332420: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x80332424: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80332428: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033242C: nop

    // 0x80332430: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332434:
    // 0x80332434: b           L_8033243C
    // 0x80332438: nop

        goto L_8033243C;
    // 0x80332438: nop

L_8033243C:
    // 0x8033243C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332440: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332444: jr          $ra
    // 0x80332448: nop

    return;
    // 0x80332448: nop

;}
RECOMP_FUNC void func_endol_803367D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803367D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803367D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803367D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803367DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803367E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803367E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803367E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803367F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803367F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803367FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336800: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336804: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336808: nop

    // 0x8033680C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336810: nop

    // 0x80336814: bne         $t1, $zero, L_803368B0
    if (ctx->r9 != 0) {
        // 0x80336818: nop
    
            goto L_803368B0;
    }
    // 0x80336818: nop

    // 0x8033681C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336820: nop

    // 0x80336824: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336828: nop

    // 0x8033682C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336830: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336834: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336838: nop

    // 0x8033683C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336840: nop

    // 0x80336844: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336848: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033684C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80336850: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x80336854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336858: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8033685C: addiu       $t9, $t9, -0x6040
    ctx->r25 = ADD32(ctx->r25, -0X6040);
    // 0x80336860: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336864: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80336868: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033686C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336870: jal         0x8001C0EC
    // 0x80336874: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336874: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    after_0:
    // 0x80336878: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033687C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336880: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336884: nop

    // 0x80336888: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x8033688C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336890: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336894: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336898: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033689C: jal         0x80015538
    // 0x803368A0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803368A0: nop

    after_1:
    // 0x803368A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803368A8: nop

    // 0x803368AC: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
L_803368B0:
    // 0x803368B0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803368B4: nop

    // 0x803368B8: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x803368BC: nop

    // 0x803368C0: bne         $t2, $zero, L_803368E8
    if (ctx->r10 != 0) {
        // 0x803368C4: nop
    
            goto L_803368E8;
    }
    // 0x803368C4: nop

    // 0x803368C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368D0: jal         0x8002B114
    // 0x803368D4: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803368D4: nop

    after_2:
    // 0x803368D8: b           L_80336918
    // 0x803368DC: nop

        goto L_80336918;
    // 0x803368DC: nop

    // 0x803368E0: b           L_80336910
    // 0x803368E4: nop

        goto L_80336910;
    // 0x803368E4: nop

L_803368E8:
    // 0x803368E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368F0: jal         0x80029C40
    // 0x803368F4: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803368F4: nop

    after_3:
    // 0x803368F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803368FC: nop

    // 0x80336900: lh          $t5, 0xA8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA8);
    // 0x80336904: nop

    // 0x80336908: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x8033690C: sh          $t7, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r15;
L_80336910:
    // 0x80336910: b           L_80336918
    // 0x80336914: nop

        goto L_80336918;
    // 0x80336914: nop

L_80336918:
    // 0x80336918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033691C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336920: jr          $ra
    // 0x80336924: nop

    return;
    // 0x80336924: nop

;}
RECOMP_FUNC void func_endol_803363A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803363A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803363AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803363B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803363B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803363B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803363BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803363C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803363C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803363D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803363D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803363D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803363DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803363E0: nop

    // 0x803363E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803363E8: nop

    // 0x803363EC: bne         $t1, $zero, L_80336478
    if (ctx->r9 != 0) {
        // 0x803363F0: nop
    
            goto L_80336478;
    }
    // 0x803363F0: nop

    // 0x803363F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803363F8: nop

    // 0x803363FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336400: nop

    // 0x80336404: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336408: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033640C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336410: nop

    // 0x80336414: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336418: nop

    // 0x8033641C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336420: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336424: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336428: addiu       $t7, $t7, -0x6040
    ctx->r15 = ADD32(ctx->r15, -0X6040);
    // 0x8033642C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336430: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336438: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033643C: jal         0x8001C0EC
    // 0x80336440: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336440: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    after_0:
    // 0x80336444: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80336448: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033644C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336450: nop

    // 0x80336454: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80336458: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033645C: nop

    // 0x80336460: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80336464: nop

    // 0x80336468: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x8033646C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336470: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80336474: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_80336478:
    // 0x80336478: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033647C: nop

    // 0x80336480: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80336484: nop

    // 0x80336488: bne         $t4, $zero, L_803364DC
    if (ctx->r12 != 0) {
        // 0x8033648C: nop
    
            goto L_803364DC;
    }
    // 0x8033648C: nop

    // 0x80336490: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336494: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336498: nop

    // 0x8033649C: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x803364A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803364A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803364A8: nop

    // 0x803364AC: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x803364B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803364B4: nop

    // 0x803364B8: lwc1        $f16, 0x2C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x803364BC: nop

    // 0x803364C0: swc1        $f16, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f16.u32l;
    // 0x803364C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803364C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803364CC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803364D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803364D4: b           L_80336504
    // 0x803364D8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80336504;
    // 0x803364D8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803364DC:
    // 0x803364DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803364E0: nop

    // 0x803364E4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803364E8: nop

    // 0x803364EC: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803364F0: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x803364F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364FC: jal         0x80029C40
    // 0x80336500: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80336500: nop

    after_1:
L_80336504:
    // 0x80336504: b           L_8033650C
    // 0x80336508: nop

        goto L_8033650C;
    // 0x80336508: nop

L_8033650C:
    // 0x8033650C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336510: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336514: jr          $ra
    // 0x80336518: nop

    return;
    // 0x80336518: nop

;}
RECOMP_FUNC void func_endol_803343F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803343F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803343FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334400: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334404: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334408: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033440C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334414: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334418: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033441C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334420: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334424: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334428: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033442C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334430: nop

    // 0x80334434: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334438: nop

    // 0x8033443C: bne         $t1, $zero, L_80334494
    if (ctx->r9 != 0) {
        // 0x80334440: nop
    
            goto L_80334494;
    }
    // 0x80334440: nop

    // 0x80334444: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334448: nop

    // 0x8033444C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334450: nop

    // 0x80334454: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334458: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033445C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334460: nop

    // 0x80334464: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334468: nop

    // 0x8033446C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334474: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334478: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x8033447C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334480: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334488: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8033448C: jal         0x8001C0EC
    // 0x80334490: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334490: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80334494:
    // 0x80334494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033449C: jal         0x8001B62C
    // 0x803344A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x803344A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803344A4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803344A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803344AC: nop

    // 0x803344B0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x803344B4: nop

    // 0x803344B8: bc1f        L_80334588
    if (!c1cs) {
        // 0x803344BC: nop
    
            goto L_80334588;
    }
    // 0x803344BC: nop

    // 0x803344C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344C8: jal         0x8002A46C
    // 0x803344CC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x803344CC: nop

    after_2:
    // 0x803344D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803344D4: nop

    // 0x803344D8: swc1        $f0, 0xDC($t8)
    MEM_W(0XDC, ctx->r24) = ctx->f0.u32l;
    // 0x803344DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803344E0: nop

    // 0x803344E4: lwc1        $f6, 0xDC($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0XDC);
    // 0x803344E8: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803344EC: nop

    // 0x803344F0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803344F4: swc1        $f10, 0xDC($t9)
    MEM_W(0XDC, ctx->r25) = ctx->f10.u32l;
    // 0x803344F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803344FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334500: lwc1        $f16, 0xDC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XDC);
    // 0x80334504: nop

    // 0x80334508: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8033450C: nop

    // 0x80334510: bc1f        L_80334534
    if (!c1cs) {
        // 0x80334514: nop
    
            goto L_80334534;
    }
    // 0x80334514: nop

    // 0x80334518: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033451C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80334520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334524: lwc1        $f4, 0xDC($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XDC);
    // 0x80334528: nop

    // 0x8033452C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334530: swc1        $f8, 0xDC($t1)
    MEM_W(0XDC, ctx->r9) = ctx->f8.u32l;
L_80334534:
    // 0x80334534: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334538: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x8033453C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334540: lwc1        $f10, 0xDC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XDC);
    // 0x80334544: nop

    // 0x80334548: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8033454C: swc1        $f18, 0xDC($t3)
    MEM_W(0XDC, ctx->r11) = ctx->f18.u32l;
    // 0x80334550: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334554: nop

    // 0x80334558: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033455C: lwc1        $f14, 0xDC($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XDC);
    // 0x80334560: jal         0x80015538
    // 0x80334564: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334564: nop

    after_3:
    // 0x80334568: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033456C: nop

    // 0x80334570: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80334574: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334578: nop

    // 0x8033457C: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80334580: nop

    // 0x80334584: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
L_80334588:
    // 0x80334588: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033458C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334590: jal         0x8001B62C
    // 0x80334594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x80334594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80334598: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033459C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803345A0: nop

    // 0x803345A4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x803345A8: nop

    // 0x803345AC: bc1f        L_803345D4
    if (!c1cs) {
        // 0x803345B0: nop
    
            goto L_803345D4;
    }
    // 0x803345B0: nop

    // 0x803345B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803345B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803345BC: addiu       $a3, $a3, -0x61F4
    ctx->r7 = ADD32(ctx->r7, -0X61F4);
    // 0x803345C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803345C4: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803345C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803345CC: jal         0x8001ABF4
    // 0x803345D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x803345D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_803345D4:
    // 0x803345D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803345D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803345DC: jal         0x8001B4AC
    // 0x803345E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803345E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803345E4: beq         $v0, $zero, L_80334604
    if (ctx->r2 == 0) {
        // 0x803345E8: nop
    
            goto L_80334604;
    }
    // 0x803345E8: nop

    // 0x803345EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803345F0: addiu       $t5, $zero, 0x27
    ctx->r13 = ADD32(0, 0X27);
    // 0x803345F4: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803345F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803345FC: nop

    // 0x80334600: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80334604:
    // 0x80334604: b           L_8033460C
    // 0x80334608: nop

        goto L_8033460C;
    // 0x80334608: nop

L_8033460C:
    // 0x8033460C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334614: jr          $ra
    // 0x80334618: nop

    return;
    // 0x80334618: nop

;}
RECOMP_FUNC void func_endol_80335E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335E88: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335E8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335E90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335E94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335E98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335E9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335EA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335EAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335EB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335EB4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335EB8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80335EBC: nop

    // 0x80335EC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335EC4: nop

    // 0x80335EC8: bne         $t1, $zero, L_80335F08
    if (ctx->r9 != 0) {
        // 0x80335ECC: nop
    
            goto L_80335F08;
    }
    // 0x80335ECC: nop

    // 0x80335ED0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80335ED4: nop

    // 0x80335ED8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335EDC: nop

    // 0x80335EE0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335EE4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335EE8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80335EEC: nop

    // 0x80335EF0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335EF4: nop

    // 0x80335EF8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335EFC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80335F00: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80335F04: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_80335F08:
    // 0x80335F08: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80335F0C: nop

    // 0x80335F10: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80335F14: nop

    // 0x80335F18: bne         $t0, $zero, L_80335FE8
    if (ctx->r8 != 0) {
        // 0x80335F1C: nop
    
            goto L_80335FE8;
    }
    // 0x80335F1C: nop

    // 0x80335F20: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80335F24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335F28: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335F2C: nop

    // 0x80335F30: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335F34: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335F38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335F3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335F40: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335F44: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335F48: sh          $zero, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = 0;
    // 0x80335F4C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80335F50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335F54: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80335F58: nop

    // 0x80335F5C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80335F60: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335F64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80335F68: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80335F6C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335F70: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335F74: sh          $zero, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = 0;
    // 0x80335F78: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80335F7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335F80: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80335F84: nop

    // 0x80335F88: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80335F8C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80335F90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335F94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80335F98: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335F9C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80335FA0: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80335FA4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80335FA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335FAC: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80335FB0: nop

    // 0x80335FB4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80335FB8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80335FBC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335FC0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80335FC4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335FC8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335FCC: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x80335FD0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80335FD4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80335FD8: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80335FDC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80335FE0: b           L_80336000
    // 0x80335FE4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80336000;
    // 0x80335FE4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80335FE8:
    // 0x80335FE8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80335FEC: nop

    // 0x80335FF0: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x80335FF4: nop

    // 0x80335FF8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80335FFC: sh          $t8, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r24;
L_80336000:
    // 0x80336000: b           L_80336008
    // 0x80336004: nop

        goto L_80336008;
    // 0x80336004: nop

L_80336008:
    // 0x80336008: jr          $ra
    // 0x8033600C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033600C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_endol_803333F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803333F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803333F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803333FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333400: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333404: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033340C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033341C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333420: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333424: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333428: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033342C: nop

    // 0x80333430: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333434: nop

    // 0x80333438: bne         $t1, $zero, L_80333490
    if (ctx->r9 != 0) {
        // 0x8033343C: nop
    
            goto L_80333490;
    }
    // 0x8033343C: nop

    // 0x80333440: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333444: nop

    // 0x80333448: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033344C: nop

    // 0x80333450: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333454: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333458: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033345C: nop

    // 0x80333460: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333464: nop

    // 0x80333468: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033346C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333470: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333474: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033347C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333484: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80333488: jal         0x8001C0EC
    // 0x8033348C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033348C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80333490:
    // 0x80333490: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333494: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333498: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x8033349C: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803334A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803334A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803334A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803334AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803334B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803334B4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803334B8: lwc1        $f14, 0x4224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4224);
    // 0x803334BC: jal         0x80015538
    // 0x803334C0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803334C0: nop

    after_1:
    // 0x803334C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803334C8: nop

    // 0x803334CC: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x803334D0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803334D4: nop

    // 0x803334D8: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803334DC: nop

    // 0x803334E0: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x803334E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803334E8: nop

    // 0x803334EC: lh          $t2, 0xBA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBA);
    // 0x803334F0: nop

    // 0x803334F4: beq         $t2, $zero, L_80333558
    if (ctx->r10 == 0) {
        // 0x803334F8: nop
    
            goto L_80333558;
    }
    // 0x803334F8: nop

    // 0x803334FC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333500: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333504: lh          $t5, 0xBA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XBA);
    // 0x80333508: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033350C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333510: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333514: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333518: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033351C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333520: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333524: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80333528: nop

    // 0x8033352C: bne         $t8, $at, L_80333550
    if (ctx->r24 != ctx->r1) {
        // 0x80333530: nop
    
            goto L_80333550;
    }
    // 0x80333530: nop

    // 0x80333534: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333538: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8033353C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333540: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333544: nop

    // 0x80333548: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8033354C: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
L_80333550:
    // 0x80333550: b           L_803335A8
    // 0x80333554: nop

        goto L_803335A8;
    // 0x80333554: nop

L_80333558:
    // 0x80333558: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033355C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333568: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033356C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80333570: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333574: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333578: jal         0x800295C0
    // 0x8033357C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x8033357C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80333580: beq         $v0, $zero, L_80333598
    if (ctx->r2 == 0) {
        // 0x80333584: nop
    
            goto L_80333598;
    }
    // 0x80333584: nop

    // 0x80333588: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033358C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333590: b           L_803335A8
    // 0x80333594: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
        goto L_803335A8;
    // 0x80333594: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_80333598:
    // 0x80333598: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033359C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803335A0: nop

    // 0x803335A4: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
L_803335A8:
    // 0x803335A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335B0: jal         0x8001B4AC
    // 0x803335B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803335B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803335B8: beq         $v0, $zero, L_803335D8
    if (ctx->r2 == 0) {
        // 0x803335BC: nop
    
            goto L_803335D8;
    }
    // 0x803335BC: nop

    // 0x803335C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803335C4: addiu       $t3, $zero, 0x1D
    ctx->r11 = ADD32(0, 0X1D);
    // 0x803335C8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803335CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803335D0: nop

    // 0x803335D4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803335D8:
    // 0x803335D8: b           L_803335E0
    // 0x803335DC: nop

        goto L_803335E0;
    // 0x803335DC: nop

L_803335E0:
    // 0x803335E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803335E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803335E8: jr          $ra
    // 0x803335EC: nop

    return;
    // 0x803335EC: nop

;}
RECOMP_FUNC void func_endol_80336F84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336F84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336F88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336F8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336F90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336F94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336F98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336FA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336FAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336FB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336FB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336FB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336FBC: nop

    // 0x80336FC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336FC4: nop

    // 0x80336FC8: bne         $t1, $zero, L_80337040
    if (ctx->r9 != 0) {
        // 0x80336FCC: nop
    
            goto L_80337040;
    }
    // 0x80336FCC: nop

    // 0x80336FD0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336FD4: nop

    // 0x80336FD8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336FDC: nop

    // 0x80336FE0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336FE4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336FE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336FEC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80336FF0: addiu       $t5, $t5, -0x602C
    ctx->r13 = ADD32(ctx->r13, -0X602C);
    // 0x80336FF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336FF8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80336FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337000: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80337004: jal         0x8001C0EC
    // 0x80337008: addiu       $a3, $zero, 0xFE
    ctx->r7 = ADD32(0, 0XFE);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337008: addiu       $a3, $zero, 0xFE
    ctx->r7 = ADD32(0, 0XFE);
    after_0:
    // 0x8033700C: jal         0x80014E80
    // 0x80337010: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80337010: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x80337014: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80337018: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8033701C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337020: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80337024: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80337028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033702C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80337030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337034: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80337038: jal         0x8001B6BC
    // 0x8033703C: nop

    func_8001B6BC(rdram, ctx);
        goto after_2;
    // 0x8033703C: nop

    after_2:
L_80337040:
    // 0x80337040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337048: jal         0x8001B4AC
    // 0x8033704C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033704C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80337050: beq         $v0, $zero, L_803370A8
    if (ctx->r2 == 0) {
        // 0x80337054: nop
    
            goto L_803370A8;
    }
    // 0x80337054: nop

    // 0x80337058: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033705C: lui         $at, 0x43BE
    ctx->r1 = S32(0X43BE << 16);
    // 0x80337060: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337064: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80337068: nop

    // 0x8033706C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80337070: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x80337074: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337078: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8033707C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337080: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80337084: nop

    // 0x80337088: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8033708C: nop

    // 0x80337090: bc1f        L_803370A8
    if (!c1cs) {
        // 0x80337094: nop
    
            goto L_803370A8;
    }
    // 0x80337094: nop

    // 0x80337098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033709C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803370A0: jal         0x8002B114
    // 0x803370A4: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x803370A4: nop

    after_4:
L_803370A8:
    // 0x803370A8: b           L_803370B0
    // 0x803370AC: nop

        goto L_803370B0;
    // 0x803370AC: nop

L_803370B0:
    // 0x803370B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803370B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803370B8: jr          $ra
    // 0x803370BC: nop

    return;
    // 0x803370BC: nop

;}
RECOMP_FUNC void func_endol_80333CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333CD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333CDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333CE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333CE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333CE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333CEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333CF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333CF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333CF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333CFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333D00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333D04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333D08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333D0C: nop

    // 0x80333D10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333D14: nop

    // 0x80333D18: bne         $t1, $zero, L_80333D80
    if (ctx->r9 != 0) {
        // 0x80333D1C: nop
    
            goto L_80333D80;
    }
    // 0x80333D1C: nop

    // 0x80333D20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333D24: nop

    // 0x80333D28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333D2C: nop

    // 0x80333D30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333D34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333D38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333D3C: nop

    // 0x80333D40: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333D44: nop

    // 0x80333D48: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333D4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333D54: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80333D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80333D68: jal         0x8001C0EC
    // 0x80333D6C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333D6C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x80333D70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333D74: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333D78: nop

    // 0x80333D7C: swc1        $f4, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f4.u32l;
L_80333D80:
    // 0x80333D80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D88: jal         0x8001B62C
    // 0x80333D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80333D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333D90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80333D94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333D98: nop

    // 0x80333D9C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80333DA0: nop

    // 0x80333DA4: bc1f        L_80333E7C
    if (!c1cs) {
        // 0x80333DA8: nop
    
            goto L_80333E7C;
    }
    // 0x80333DA8: nop

    // 0x80333DAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333DB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DB4: jal         0x8002A46C
    // 0x80333DB8: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_2;
    // 0x80333DB8: nop

    after_2:
    // 0x80333DBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333DC0: nop

    // 0x80333DC4: swc1        $f0, 0xDC($t9)
    MEM_W(0XDC, ctx->r25) = ctx->f0.u32l;
    // 0x80333DC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333DCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80333DD0: lwc1        $f8, 0xDC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XDC);
    // 0x80333DD4: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80333DD8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333DDC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80333DE0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80333DE4: swc1        $f4, 0xDC($t0)
    MEM_W(0XDC, ctx->r8) = ctx->f4.u32l;
    // 0x80333DE8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333DEC: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x80333DF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333DF4: lwc1        $f6, 0xDC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XDC);
    // 0x80333DF8: nop

    // 0x80333DFC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80333E00: nop

    // 0x80333E04: bc1f        L_80333E28
    if (!c1cs) {
        // 0x80333E08: nop
    
            goto L_80333E28;
    }
    // 0x80333E08: nop

    // 0x80333E0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333E10: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333E14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333E18: lwc1        $f10, 0xDC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XDC);
    // 0x80333E1C: nop

    // 0x80333E20: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80333E24: swc1        $f18, 0xDC($t3)
    MEM_W(0XDC, ctx->r11) = ctx->f18.u32l;
L_80333E28:
    // 0x80333E28: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333E2C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80333E30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333E34: lwc1        $f4, 0xDC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XDC);
    // 0x80333E38: nop

    // 0x80333E3C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80333E40: swc1        $f8, 0xDC($t4)
    MEM_W(0XDC, ctx->r12) = ctx->f8.u32l;
    // 0x80333E44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333E48: nop

    // 0x80333E4C: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80333E50: lwc1        $f14, 0xDC($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0XDC);
    // 0x80333E54: jal         0x80015538
    // 0x80333E58: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80333E58: nop

    after_3:
    // 0x80333E5C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333E60: nop

    // 0x80333E64: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80333E68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333E6C: nop

    // 0x80333E70: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333E74: nop

    // 0x80333E78: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
L_80333E7C:
    // 0x80333E7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E84: jal         0x8001B4AC
    // 0x80333E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80333E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333E8C: beq         $v0, $zero, L_80333EAC
    if (ctx->r2 == 0) {
        // 0x80333E90: nop
    
            goto L_80333EAC;
    }
    // 0x80333E90: nop

    // 0x80333E94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333E98: addiu       $t7, $zero, 0x22
    ctx->r15 = ADD32(0, 0X22);
    // 0x80333E9C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80333EA0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333EA4: nop

    // 0x80333EA8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80333EAC:
    // 0x80333EAC: b           L_80333EB4
    // 0x80333EB0: nop

        goto L_80333EB4;
    // 0x80333EB0: nop

L_80333EB4:
    // 0x80333EB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333EB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333EBC: jr          $ra
    // 0x80333EC0: nop

    return;
    // 0x80333EC0: nop

;}
RECOMP_FUNC void func_endol_803314D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803314D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803314D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803314DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803314E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803314E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803314E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803314EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803314F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803314FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331500: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331504: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331508: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033150C: nop

    // 0x80331510: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331514: nop

    // 0x80331518: bne         $t1, $zero, L_80331570
    if (ctx->r9 != 0) {
        // 0x8033151C: nop
    
            goto L_80331570;
    }
    // 0x8033151C: nop

    // 0x80331520: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331524: nop

    // 0x80331528: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033152C: nop

    // 0x80331530: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331534: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331538: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033153C: nop

    // 0x80331540: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331544: nop

    // 0x80331548: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033154C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331550: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331554: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80331558: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033155C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331564: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80331568: jal         0x8001C0EC
    // 0x8033156C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033156C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80331570:
    // 0x80331570: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331574: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331578: jal         0x8001B4AC
    // 0x8033157C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033157C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331580: beq         $v0, $zero, L_803315A0
    if (ctx->r2 == 0) {
        // 0x80331584: nop
    
            goto L_803315A0;
    }
    // 0x80331584: nop

    // 0x80331588: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033158C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80331590: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331594: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331598: nop

    // 0x8033159C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803315A0:
    // 0x803315A0: b           L_803315A8
    // 0x803315A4: nop

        goto L_803315A8;
    // 0x803315A4: nop

L_803315A8:
    // 0x803315A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803315AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803315B0: jr          $ra
    // 0x803315B4: nop

    return;
    // 0x803315B4: nop

;}
RECOMP_FUNC void func_endol_80330E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330E8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330E98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330E9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330EB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330EB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330EB8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330EBC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330EC0: nop

    // 0x80330EC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330EC8: nop

    // 0x80330ECC: bne         $t1, $zero, L_80330F24
    if (ctx->r9 != 0) {
        // 0x80330ED0: nop
    
            goto L_80330F24;
    }
    // 0x80330ED0: nop

    // 0x80330ED4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330ED8: nop

    // 0x80330EDC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330EE0: nop

    // 0x80330EE4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330EE8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330EEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330EF0: nop

    // 0x80330EF4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330EF8: nop

    // 0x80330EFC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F04: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330F08: addiu       $t7, $t7, -0x6380
    ctx->r15 = ADD32(ctx->r15, -0X6380);
    // 0x80330F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F10: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F18: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80330F1C: jal         0x8001C0EC
    // 0x80330F20: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330F20: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
L_80330F24:
    // 0x80330F24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F2C: jal         0x8001B4AC
    // 0x80330F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330F34: beq         $v0, $zero, L_80331118
    if (ctx->r2 == 0) {
        // 0x80330F38: nop
    
            goto L_80331118;
    }
    // 0x80330F38: nop

    // 0x80330F3C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330F40: nop

    // 0x80330F44: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80330F48: nop

    // 0x80330F4C: bne         $t9, $zero, L_803310E8
    if (ctx->r25 != 0) {
        // 0x80330F50: nop
    
            goto L_803310E8;
    }
    // 0x80330F50: nop

    // 0x80330F54: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330F58: nop

    // 0x80330F5C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80330F60: nop

    // 0x80330F64: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80330F68: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x80330F6C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330F70: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330F74: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330F78: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330F7C: nop

    // 0x80330F80: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80330F84: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330F88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F8C: lh          $t8, 0xBC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBC);
    // 0x80330F90: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80330F94: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330F98: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330F9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330FA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330FA4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330FA8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330FAC: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x80330FB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330FB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FB8: lh          $t3, 0xBC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBC);
    // 0x80330FBC: nop

    // 0x80330FC0: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80330FC4: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80330FC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330FCC: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80330FD0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330FD4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330FD8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80330FDC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330FE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FE4: lh          $t6, 0xBE($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XBE);
    // 0x80330FE8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80330FEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330FF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330FF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331000: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331004: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x80331008: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033100C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331010: lh          $t5, 0xBE($t8)
    ctx->r13 = MEM_H(ctx->r24, 0XBE);
    // 0x80331014: nop

    // 0x80331018: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x8033101C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80331020: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331024: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80331028: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033102C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331030: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80331034: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331038: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033103C: lh          $t0, 0xC0($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XC0);
    // 0x80331040: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80331044: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80331048: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8033104C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331050: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331054: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331058: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033105C: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x80331060: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331064: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331068: lh          $t4, 0xC0($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XC0);
    // 0x8033106C: nop

    // 0x80331070: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80331074: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80331078: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033107C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x80331080: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331084: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331088: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033108C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331094: lh          $t9, 0xC2($t5)
    ctx->r25 = MEM_H(ctx->r13, 0XC2);
    // 0x80331098: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033109C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x803310A0: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x803310A4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803310A8: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x803310AC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803310B0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803310B4: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803310B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803310BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310C0: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803310C4: nop

    // 0x803310C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803310CC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803310D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803310D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803310D8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803310DC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803310E0: b           L_80331118
    // 0x803310E4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_80331118;
    // 0x803310E4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803310E8:
    // 0x803310E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803310EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803310F0: lh          $t4, 0xA6($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XA6);
    // 0x803310F4: nop

    // 0x803310F8: bne         $t4, $at, L_80331118
    if (ctx->r12 != ctx->r1) {
        // 0x803310FC: nop
    
            goto L_80331118;
    }
    // 0x803310FC: nop

    // 0x80331100: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331104: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80331108: sh          $t7, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r15;
    // 0x8033110C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331110: nop

    // 0x80331114: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80331118:
    // 0x80331118: b           L_80331120
    // 0x8033111C: nop

        goto L_80331120;
    // 0x8033111C: nop

L_80331120:
    // 0x80331120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331128: jr          $ra
    // 0x8033112C: nop

    return;
    // 0x8033112C: nop

;}
RECOMP_FUNC void func_803358E4_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803358E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803358E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803358EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803358F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803358F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803358F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803358FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335900: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335904: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335908: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033590C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335910: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335914: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335918: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033591C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335920: nop

    // 0x80335924: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335928: nop

    // 0x8033592C: bne         $t1, $zero, L_8033597C
    if (ctx->r9 != 0) {
        // 0x80335930: nop
    
            goto L_8033597C;
    }
    // 0x80335930: nop

    // 0x80335934: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80335938: nop

    // 0x8033593C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335940: nop

    // 0x80335944: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335948: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033594C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335950: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80335954: addiu       $t5, $t5, -0x5E00
    ctx->r13 = ADD32(ctx->r13, -0X5E00);
    // 0x80335958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033595C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80335960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335968: jal         0x8001C0EC
    // 0x8033596C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033596C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x80335970: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80335974: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80335978: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_8033597C:
    // 0x8033597C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80335980: nop

    // 0x80335984: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80335988: nop

    // 0x8033598C: bne         $t9, $zero, L_803359AC
    if (ctx->r25 != 0) {
        // 0x80335990: nop
    
            goto L_803359AC;
    }
    // 0x80335990: nop

    // 0x80335994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033599C: jal         0x8002B114
    // 0x803359A0: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x803359A0: nop

    after_1:
    // 0x803359A4: b           L_80335A24
    // 0x803359A8: nop

        goto L_80335A24;
    // 0x803359A8: nop

L_803359AC:
    // 0x803359AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803359B0: nop

    // 0x803359B4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803359B8: nop

    // 0x803359BC: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x803359C0: beq         $at, $zero, L_80335A0C
    if (ctx->r1 == 0) {
        // 0x803359C4: nop
    
            goto L_80335A0C;
    }
    // 0x803359C4: nop

    // 0x803359C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803359CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359D0: lh          $s0, 0xA6($t3)
    ctx->r16 = MEM_H(ctx->r11, 0XA6);
    // 0x803359D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359D8: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x803359DC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803359E0: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803359E4: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x803359E8: jal         0x8001BB34
    // 0x803359EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x803359EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x803359F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803359F4: nop

    // 0x803359F8: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x803359FC: nop

    // 0x80335A00: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80335A04: b           L_80335A24
    // 0x80335A08: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
        goto L_80335A24;
    // 0x80335A08: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_80335A0C:
    // 0x80335A0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80335A10: nop

    // 0x80335A14: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80335A18: nop

    // 0x80335A1C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80335A20: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_80335A24:
    // 0x80335A24: b           L_80335A2C
    // 0x80335A28: nop

        goto L_80335A2C;
    // 0x80335A28: nop

L_80335A2C:
    // 0x80335A2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335A30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80335A34: jr          $ra
    // 0x80335A38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80335A38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80333458_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033345C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333460: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333464: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333468: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033346C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333470: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333474: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333478: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033347C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333480: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333484: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333488: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033348C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333490: nop

    // 0x80333494: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333498: nop

    // 0x8033349C: bne         $t1, $zero, L_80333518
    if (ctx->r9 != 0) {
        // 0x803334A0: nop
    
            goto L_80333518;
    }
    // 0x803334A0: nop

    // 0x803334A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803334A8: nop

    // 0x803334AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803334B0: nop

    // 0x803334B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803334B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803334BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803334C0: nop

    // 0x803334C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803334C8: nop

    // 0x803334CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803334D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803334D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803334D8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803334DC: nop

    // 0x803334E0: bne         $t8, $at, L_803334F4
    if (ctx->r24 != ctx->r1) {
        // 0x803334E4: nop
    
            goto L_803334F4;
    }
    // 0x803334E4: nop

    // 0x803334E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803334EC: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x803334F0: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_803334F4:
    // 0x803334F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334F8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803334FC: addiu       $t1, $t1, -0x6020
    ctx->r9 = ADD32(ctx->r9, -0X6020);
    // 0x80333500: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333504: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033350C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80333510: jal         0x8001C0EC
    // 0x80333514: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333514: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333518:
    // 0x80333518: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033351C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333520: jal         0x8002A8B4
    // 0x80333524: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80333524: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80333528: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033352C: nop

    // 0x80333530: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80333534: nop

    // 0x80333538: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033353C: jal         0x80334770
    // 0x80333540: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80333540: nop

    after_2:
    // 0x80333544: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333548: nop

    // 0x8033354C: lh          $t2, 0xB8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB8);
    // 0x80333550: nop

    // 0x80333554: bne         $t2, $zero, L_803335A4
    if (ctx->r10 != 0) {
        // 0x80333558: nop
    
            goto L_803335A4;
    }
    // 0x80333558: nop

    // 0x8033355C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333560: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333564: lwc1        $f8, 0x5C48($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C48);
    // 0x80333568: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8033356C: nop

    // 0x80333570: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80333574: nop

    // 0x80333578: bc1f        L_80333590
    if (!c1cs) {
        // 0x8033357C: nop
    
            goto L_80333590;
    }
    // 0x8033357C: nop

    // 0x80333580: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333584: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80333588: b           L_803335A4
    // 0x8033358C: sh          $t5, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r13;
        goto L_803335A4;
    // 0x8033358C: sh          $t5, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r13;
L_80333590:
    // 0x80333590: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80333594: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333598: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033359C: nop

    // 0x803335A0: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
L_803335A4:
    // 0x803335A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335AC: jal         0x8001B4AC
    // 0x803335B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803335B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803335B4: beq         $v0, $zero, L_8033362C
    if (ctx->r2 == 0) {
        // 0x803335B8: nop
    
            goto L_8033362C;
    }
    // 0x803335B8: nop

    // 0x803335BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803335C0: nop

    // 0x803335C4: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803335C8: nop

    // 0x803335CC: bne         $t0, $zero, L_803335FC
    if (ctx->r8 != 0) {
        // 0x803335D0: nop
    
            goto L_803335FC;
    }
    // 0x803335D0: nop

    // 0x803335D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803335D8: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x803335DC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803335E0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803335E4: nop

    // 0x803335E8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x803335EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803335F0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x803335F4: b           L_8033362C
    // 0x803335F8: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
        goto L_8033362C;
    // 0x803335F8: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
L_803335FC:
    // 0x803335FC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333600: addiu       $t5, $zero, 0x1B
    ctx->r13 = ADD32(0, 0X1B);
    // 0x80333604: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80333608: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033360C: nop

    // 0x80333610: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80333614: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333618: nop

    // 0x8033361C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80333620: nop

    // 0x80333624: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80333628: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_8033362C:
    // 0x8033362C: b           L_80333634
    // 0x80333630: nop

        goto L_80333634;
    // 0x80333630: nop

L_80333634:
    // 0x80333634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333638: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033363C: jr          $ra
    // 0x80333640: nop

    return;
    // 0x80333640: nop

;}
RECOMP_FUNC void func_80333644_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333644: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80333648: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033364C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333650: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333654: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333658: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033365C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333660: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333664: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333668: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033366C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333670: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333674: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80333678: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033367C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80333680: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80333684: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80333688: nop

    // 0x8033368C: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80333690: nop

    // 0x80333694: bne         $t2, $zero, L_80333734
    if (ctx->r10 != 0) {
        // 0x80333698: nop
    
            goto L_80333734;
    }
    // 0x80333698: nop

    // 0x8033369C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803336A0: nop

    // 0x803336A4: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x803336A8: nop

    // 0x803336AC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x803336B0: sb          $t5, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r13;
    // 0x803336B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803336B8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803336BC: nop

    // 0x803336C0: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x803336C4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803336C8: nop

    // 0x803336CC: lwc1        $f6, 0x2C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x803336D0: nop

    // 0x803336D4: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
    // 0x803336D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803336DC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803336E0: nop

    // 0x803336E4: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x803336E8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803336EC: nop

    // 0x803336F0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x803336F4: nop

    // 0x803336F8: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x803336FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333700: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80333704: addiu       $t1, $t1, -0x6020
    ctx->r9 = ADD32(ctx->r9, -0X6020);
    // 0x80333708: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033370C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333714: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80333718: jal         0x8001C0EC
    // 0x8033371C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033371C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80333720: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80333724: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333728: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033372C: nop

    // 0x80333730: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
L_80333734:
    // 0x80333734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033373C: jal         0x8002A8B4
    // 0x80333740: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80333740: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_1:
    // 0x80333744: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80333748: nop

    // 0x8033374C: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80333750: nop

    // 0x80333754: swc1        $f16, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f16.u32l;
    // 0x80333758: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8033375C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80333760: lwc1        $f18, 0x0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80333764: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80333768: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033376C: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80333770: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80333774: jal         0x800156C4
    // 0x80333778: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_2;
    // 0x80333778: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_2:
    // 0x8033377C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80333780: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333784: jal         0x80015744
    // 0x80333788: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_3;
    // 0x80333788: nop

    after_3:
    // 0x8033378C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80333790: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80333794: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333798: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x8033379C: jal         0x8002A800
    // 0x803337A0: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    func_8002A800(rdram, ctx);
        goto after_4;
    // 0x803337A0: lui         $a2, 0x4110
    ctx->r6 = S32(0X4110 << 16);
    after_4:
    // 0x803337A4: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x803337A8: nop

    // 0x803337AC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x803337B0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x803337B4: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803337B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803337BC: nop

    // 0x803337C0: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x803337C4: nop

    // 0x803337C8: bc1t        L_803337FC
    if (c1cs) {
        // 0x803337CC: nop
    
            goto L_803337FC;
    }
    // 0x803337CC: nop

    // 0x803337D0: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x803337D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803337D8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803337DC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803337E0: lwc1        $f12, 0x40($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X40);
    // 0x803337E4: mul.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803337E8: jal         0x80015538
    // 0x803337EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803337EC: nop

    after_5:
    // 0x803337F0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803337F4: nop

    // 0x803337F8: swc1        $f0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f0.u32l;
L_803337FC:
    // 0x803337FC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80333800: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80333804: lwc1        $f14, 0x40($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80333808: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033380C: jal         0x80015538
    // 0x80333810: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80333810: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_6:
    // 0x80333814: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80333818: nop

    // 0x8033381C: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x80333820: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80333824: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333828: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033382C: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80333830: nop

    // 0x80333834: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80333838: nop

    // 0x8033383C: bc1f        L_80333868
    if (!c1cs) {
        // 0x80333840: nop
    
            goto L_80333868;
    }
    // 0x80333840: nop

    // 0x80333844: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333848: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033384C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80333850: nop

    // 0x80333854: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
    // 0x80333858: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033385C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80333860: nop

    // 0x80333864: swc1        $f4, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f4.u32l;
L_80333868:
    // 0x80333868: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033386C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333870: jal         0x8001B4AC
    // 0x80333874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80333874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80333878: beq         $v0, $zero, L_803338C8
    if (ctx->r2 == 0) {
        // 0x8033387C: nop
    
            goto L_803338C8;
    }
    // 0x8033387C: nop

    // 0x80333880: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80333884: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80333888: sh          $t5, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r13;
    // 0x8033388C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80333890: nop

    // 0x80333894: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80333898: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033389C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803338A0: nop

    // 0x803338A4: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x803338A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803338AC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803338B0: nop

    // 0x803338B4: swc1        $f8, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f8.u32l;
    // 0x803338B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803338BC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803338C0: nop

    // 0x803338C4: swc1        $f10, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->f10.u32l;
L_803338C8:
    // 0x803338C8: b           L_803338D0
    // 0x803338CC: nop

        goto L_803338D0;
    // 0x803338CC: nop

L_803338D0:
    // 0x803338D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803338D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803338D8: jr          $ra
    // 0x803338DC: nop

    return;
    // 0x803338DC: nop

;}
RECOMP_FUNC void func_80330F94_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330F98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330FA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330FA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330FA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330FAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330FB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330FB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330FBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330FC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330FC4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330FC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330FCC: nop

    // 0x80330FD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330FD4: nop

    // 0x80330FD8: bne         $t1, $zero, L_80331030
    if (ctx->r9 != 0) {
        // 0x80330FDC: nop
    
            goto L_80331030;
    }
    // 0x80330FDC: nop

    // 0x80330FE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330FE4: nop

    // 0x80330FE8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330FEC: nop

    // 0x80330FF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330FF4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330FF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330FFC: nop

    // 0x80331000: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331004: nop

    // 0x80331008: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033100C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331010: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331014: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033101C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80331028: jal         0x8001C0EC
    // 0x8033102C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033102C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331030:
    // 0x80331030: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331034: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331038: jal         0x8002A8B4
    // 0x8033103C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033103C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331040: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331044: nop

    // 0x80331048: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033104C: nop

    // 0x80331050: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033105C: jal         0x8001B4AC
    // 0x80331060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331064: beq         $v0, $zero, L_80331084
    if (ctx->r2 == 0) {
        // 0x80331068: nop
    
            goto L_80331084;
    }
    // 0x80331068: nop

    // 0x8033106C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331070: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80331074: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331078: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033107C: nop

    // 0x80331080: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331084:
    // 0x80331084: b           L_8033108C
    // 0x80331088: nop

        goto L_8033108C;
    // 0x80331088: nop

L_8033108C:
    // 0x8033108C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331094: jr          $ra
    // 0x80331098: nop

    return;
    // 0x80331098: nop

;}
RECOMP_FUNC void func_80334EB4_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334EB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334EBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334EC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334EC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334EC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334ECC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ED0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334ED4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ED8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334EDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334EE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334EE4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334EE8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334EEC: nop

    // 0x80334EF0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334EF4: nop

    // 0x80334EF8: bne         $t1, $zero, L_80334F24
    if (ctx->r9 != 0) {
        // 0x80334EFC: nop
    
            goto L_80334F24;
    }
    // 0x80334EFC: nop

    // 0x80334F00: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334F04: nop

    // 0x80334F08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334F0C: nop

    // 0x80334F10: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334F14: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334F18: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80334F1C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80334F20: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_80334F24:
    // 0x80334F24: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80334F28: nop

    // 0x80334F2C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80334F30: nop

    // 0x80334F34: bne         $t8, $zero, L_80334F54
    if (ctx->r24 != 0) {
        // 0x80334F38: nop
    
            goto L_80334F54;
    }
    // 0x80334F38: nop

    // 0x80334F3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F44: jal         0x8002B114
    // 0x80334F48: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80334F48: nop

    after_0:
    // 0x80334F4C: b           L_80334F6C
    // 0x80334F50: nop

        goto L_80334F6C;
    // 0x80334F50: nop

L_80334F54:
    // 0x80334F54: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80334F58: nop

    // 0x80334F5C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80334F60: nop

    // 0x80334F64: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80334F68: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_80334F6C:
    // 0x80334F6C: b           L_80334F74
    // 0x80334F70: nop

        goto L_80334F74;
    // 0x80334F70: nop

L_80334F74:
    // 0x80334F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334F78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334F7C: jr          $ra
    // 0x80334F80: nop

    return;
    // 0x80334F80: nop

;}
RECOMP_FUNC void func_80330D84_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330D88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330D98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330DA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330DA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330DAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330DB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330DB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330DB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330DBC: nop

    // 0x80330DC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330DC4: nop

    // 0x80330DC8: bne         $t1, $zero, L_80330E20
    if (ctx->r9 != 0) {
        // 0x80330DCC: nop
    
            goto L_80330E20;
    }
    // 0x80330DCC: nop

    // 0x80330DD0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330DD4: nop

    // 0x80330DD8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330DDC: nop

    // 0x80330DE0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330DE4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330DE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330DEC: nop

    // 0x80330DF0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330DF4: nop

    // 0x80330DF8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330DFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E00: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330E04: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E14: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80330E18: jal         0x8001C0EC
    // 0x80330E1C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330E1C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330E20:
    // 0x80330E20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E28: jal         0x8002A8B4
    // 0x80330E2C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330E2C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330E30: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330E34: nop

    // 0x80330E38: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330E3C: nop

    // 0x80330E40: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E4C: jal         0x8001B4AC
    // 0x80330E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330E54: beq         $v0, $zero, L_80330E74
    if (ctx->r2 == 0) {
        // 0x80330E58: nop
    
            goto L_80330E74;
    }
    // 0x80330E58: nop

    // 0x80330E5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330E60: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80330E64: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330E68: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330E6C: nop

    // 0x80330E70: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330E74:
    // 0x80330E74: b           L_80330E7C
    // 0x80330E78: nop

        goto L_80330E7C;
    // 0x80330E78: nop

L_80330E7C:
    // 0x80330E7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330E84: jr          $ra
    // 0x80330E88: nop

    return;
    // 0x80330E88: nop

;}
RECOMP_FUNC void func_80331A78_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331A7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331AA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331AA8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331AAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331AB0: nop

    // 0x80331AB4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331AB8: nop

    // 0x80331ABC: bne         $t1, $zero, L_80331B14
    if (ctx->r9 != 0) {
        // 0x80331AC0: nop
    
            goto L_80331B14;
    }
    // 0x80331AC0: nop

    // 0x80331AC4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331AC8: nop

    // 0x80331ACC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331AD0: nop

    // 0x80331AD4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331AD8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331ADC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331AE0: nop

    // 0x80331AE4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331AE8: nop

    // 0x80331AEC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331AF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AF4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331AF8: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80331AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B08: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80331B0C: jal         0x8001C0EC
    // 0x80331B10: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331B10: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331B14:
    // 0x80331B14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B1C: jal         0x8002A8B4
    // 0x80331B20: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331B20: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331B24: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331B28: nop

    // 0x80331B2C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331B30: nop

    // 0x80331B34: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B40: jal         0x8001B4AC
    // 0x80331B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331B44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331B48: beq         $v0, $zero, L_80331C80
    if (ctx->r2 == 0) {
        // 0x80331B4C: nop
    
            goto L_80331C80;
    }
    // 0x80331B4C: nop

    // 0x80331B50: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331B54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331B58: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x80331B5C: nop

    // 0x80331B60: bne         $t0, $at, L_80331C68
    if (ctx->r8 != ctx->r1) {
        // 0x80331B64: nop
    
            goto L_80331C68;
    }
    // 0x80331B64: nop

    // 0x80331B68: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80331B6C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80331B70: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80331B74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331B78: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331B7C: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80331B80: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80331B84: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331B88: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80331B8C: nop

    // 0x80331B90: bc1f        L_80331C48
    if (!c1cs) {
        // 0x80331B94: nop
    
            goto L_80331C48;
    }
    // 0x80331B94: nop

    // 0x80331B98: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80331B9C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80331BA0: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80331BA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331BA8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331BAC: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80331BB0: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80331BB4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80331BB8: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80331BBC: nop

    // 0x80331BC0: bc1f        L_80331BE0
    if (!c1cs) {
        // 0x80331BC4: nop
    
            goto L_80331BE0;
    }
    // 0x80331BC4: nop

    // 0x80331BC8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331BCC: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x80331BD0: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80331BD4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331BD8: b           L_80331C40
    // 0x80331BDC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_80331C40;
    // 0x80331BDC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80331BE0:
    // 0x80331BE0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80331BE4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80331BE8: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331BEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331BF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331BF4: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331BF8: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331BFC: sub.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80331C00: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80331C04: nop

    // 0x80331C08: bc1f        L_80331C28
    if (!c1cs) {
        // 0x80331C0C: nop
    
            goto L_80331C28;
    }
    // 0x80331C0C: nop

    // 0x80331C10: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331C14: addiu       $t0, $zero, 0x1D
    ctx->r8 = ADD32(0, 0X1D);
    // 0x80331C18: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80331C1C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331C20: b           L_80331C40
    // 0x80331C24: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_80331C40;
    // 0x80331C24: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80331C28:
    // 0x80331C28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331C2C: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x80331C30: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80331C34: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331C38: nop

    // 0x80331C3C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80331C40:
    // 0x80331C40: b           L_80331C60
    // 0x80331C44: nop

        goto L_80331C60;
    // 0x80331C44: nop

L_80331C48:
    // 0x80331C48: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331C4C: addiu       $t5, $zero, 0x1D
    ctx->r13 = ADD32(0, 0X1D);
    // 0x80331C50: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80331C54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331C58: nop

    // 0x80331C5C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331C60:
    // 0x80331C60: b           L_80331C80
    // 0x80331C64: nop

        goto L_80331C80;
    // 0x80331C64: nop

L_80331C68:
    // 0x80331C68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C6C: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x80331C70: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331C74: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331C78: nop

    // 0x80331C7C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331C80:
    // 0x80331C80: b           L_80331C88
    // 0x80331C84: nop

        goto L_80331C88;
    // 0x80331C84: nop

L_80331C88:
    // 0x80331C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331C90: jr          $ra
    // 0x80331C94: nop

    return;
    // 0x80331C94: nop

;}
RECOMP_FUNC void func_80334D44_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334D44: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334D4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334D50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334D54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334D58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334D5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334D60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334D64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334D68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334D6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334D70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334D74: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334D78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334D7C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80334D80: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80334D84: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80334D88: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80334D8C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334D90: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334D94: addiu       $a1, $a1, 0x5B08
    ctx->r5 = ADD32(ctx->r5, 0X5B08);
    // 0x80334D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334D9C: jal         0x80027464
    // 0x80334DA0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334DA0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80334DA4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334DA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80334DAC: jal         0x80026F10
    // 0x80334DB0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80334DB0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_1:
    // 0x80334DB4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80334DB8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334DBC: addiu       $a3, $a3, -0x5E24
    ctx->r7 = ADD32(ctx->r7, -0X5E24);
    // 0x80334DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334DC4: jal         0x8001ABF4
    // 0x80334DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334DC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80334DCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334DD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334DD4: jal         0x8002B114
    // 0x80334DD8: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80334DD8: nop

    after_3:
    // 0x80334DDC: b           L_80334DE4
    // 0x80334DE0: nop

        goto L_80334DE4;
    // 0x80334DE0: nop

L_80334DE4:
    // 0x80334DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334DE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80334DEC: jr          $ra
    // 0x80334DF0: nop

    return;
    // 0x80334DF0: nop

;}
RECOMP_FUNC void func_80335008_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033500C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335010: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335014: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335018: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033501C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033502C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335030: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335034: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335038: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033503C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80335040: nop

    // 0x80335044: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335048: nop

    // 0x8033504C: bne         $t1, $zero, L_803350E0
    if (ctx->r9 != 0) {
        // 0x80335050: nop
    
            goto L_803350E0;
    }
    // 0x80335050: nop

    // 0x80335054: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80335058: nop

    // 0x8033505C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335060: nop

    // 0x80335064: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335068: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033506C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80335070: nop

    // 0x80335074: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335078: nop

    // 0x8033507C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335080: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80335084: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80335088: lwc1        $f4, 0x127C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X127C);
    // 0x8033508C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80335090: nop

    // 0x80335094: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335098: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033509C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803350A0: lwc1        $f6, 0x129C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X129C);
    // 0x803350A4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803350A8: nop

    // 0x803350AC: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x803350B0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803350B4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803350B8: lwc1        $f8, 0x1278($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1278);
    // 0x803350BC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803350C0: nop

    // 0x803350C4: swc1        $f8, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f8.u32l;
    // 0x803350C8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803350CC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803350D0: lwc1        $f10, 0x12A0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X12A0);
    // 0x803350D4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803350D8: nop

    // 0x803350DC: swc1        $f10, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f10.u32l;
L_803350E0:
    // 0x803350E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803350E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803350E8: jal         0x8001B4AC
    // 0x803350EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_0;
    // 0x803350EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803350F0: beq         $v0, $zero, L_80335110
    if (ctx->r2 == 0) {
        // 0x803350F4: nop
    
            goto L_80335110;
    }
    // 0x803350F4: nop

    // 0x803350F8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803350FC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80335100: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80335104: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80335108: nop

    // 0x8033510C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80335110:
    // 0x80335110: b           L_80335118
    // 0x80335114: nop

        goto L_80335118;
    // 0x80335114: nop

L_80335118:
    // 0x80335118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033511C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335120: jr          $ra
    // 0x80335124: nop

    return;
    // 0x80335124: nop

;}
RECOMP_FUNC void func_803349F4_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803349F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803349F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803349FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334A00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334A04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334A08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334A0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334A14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334A1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334A20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334A24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334A28: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A2C: nop

    // 0x80334A30: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334A34: nop

    // 0x80334A38: bne         $t1, $zero, L_80334ADC
    if (ctx->r9 != 0) {
        // 0x80334A3C: nop
    
            goto L_80334ADC;
    }
    // 0x80334A3C: nop

    // 0x80334A40: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A44: nop

    // 0x80334A48: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334A4C: nop

    // 0x80334A50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334A54: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334A58: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A5C: nop

    // 0x80334A60: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334A64: nop

    // 0x80334A68: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334A6C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80334A70: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80334A74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334A78: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80334A7C: lwc1        $f12, 0x127C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X127C);
    // 0x80334A80: jal         0x80015538
    // 0x80334A84: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80334A84: nop

    after_0:
    // 0x80334A88: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A8C: nop

    // 0x80334A90: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80334A94: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80334A98: nop

    // 0x80334A9C: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80334AA0: nop

    // 0x80334AA4: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x80334AA8: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x80334AAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334AB0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AB4: nop

    // 0x80334AB8: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
    // 0x80334ABC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80334AC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334AC4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AC8: nop

    // 0x80334ACC: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x80334AD0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AD4: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x80334AD8: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_80334ADC:
    // 0x80334ADC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AE0: nop

    // 0x80334AE4: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80334AE8: nop

    // 0x80334AEC: bne         $t6, $zero, L_80334B0C
    if (ctx->r14 != 0) {
        // 0x80334AF0: nop
    
            goto L_80334B0C;
    }
    // 0x80334AF0: nop

    // 0x80334AF4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AF8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80334AFC: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80334B00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80334B04: b           L_80334B40
    // 0x80334B08: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80334B40;
    // 0x80334B08: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80334B0C:
    // 0x80334B0C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80334B10: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80334B14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334B18: lwc1        $f10, 0x44($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80334B1C: nop

    // 0x80334B20: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80334B24: swc1        $f18, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f18.u32l;
    // 0x80334B28: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334B2C: nop

    // 0x80334B30: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80334B34: nop

    // 0x80334B38: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80334B3C: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_80334B40:
    // 0x80334B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334B44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334B48: jal         0x80029C40
    // 0x80334B4C: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x80334B4C: nop

    after_1:
    // 0x80334B50: b           L_80334B58
    // 0x80334B54: nop

        goto L_80334B58;
    // 0x80334B54: nop

L_80334B58:
    // 0x80334B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334B5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334B60: jr          $ra
    // 0x80334B64: nop

    return;
    // 0x80334B64: nop

;}
RECOMP_FUNC void func_8033520C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033520C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335214: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335218: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033521C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335220: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335224: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335228: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033522C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335230: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335234: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335238: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033523C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335240: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335244: nop

    // 0x80335248: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033524C: nop

    // 0x80335250: bne         $t1, $zero, L_803352C4
    if (ctx->r9 != 0) {
        // 0x80335254: nop
    
            goto L_803352C4;
    }
    // 0x80335254: nop

    // 0x80335258: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033525C: nop

    // 0x80335260: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335264: nop

    // 0x80335268: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033526C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335270: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335274: nop

    // 0x80335278: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033527C: nop

    // 0x80335280: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335288: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033528C: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x80335290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335294: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033529C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803352A0: jal         0x8001C0EC
    // 0x803352A4: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803352A4: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
    // 0x803352A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803352B4: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x803352B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803352BC: jal         0x800175F0
    // 0x803352C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803352C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803352C4:
    // 0x803352C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352CC: jal         0x8001B4AC
    // 0x803352D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803352D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803352D4: beq         $v0, $zero, L_803352F4
    if (ctx->r2 == 0) {
        // 0x803352D8: nop
    
            goto L_803352F4;
    }
    // 0x803352D8: nop

    // 0x803352DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803352E0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803352E4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803352E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803352EC: nop

    // 0x803352F0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803352F4:
    // 0x803352F4: b           L_803352FC
    // 0x803352F8: nop

        goto L_803352FC;
    // 0x803352F8: nop

L_803352FC:
    // 0x803352FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335300: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335304: jr          $ra
    // 0x80335308: nop

    return;
    // 0x80335308: nop

;}
RECOMP_FUNC void func_80332F7C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332F7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
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
    // 0x80332FAC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332FB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332FB4: nop

    // 0x80332FB8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332FBC: nop

    // 0x80332FC0: bne         $t1, $zero, L_80333018
    if (ctx->r9 != 0) {
        // 0x80332FC4: nop
    
            goto L_80333018;
    }
    // 0x80332FC4: nop

    // 0x80332FC8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332FCC: nop

    // 0x80332FD0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332FD4: nop

    // 0x80332FD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332FDC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332FE0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
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
    // 0x80332FFC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80333000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333004: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033300C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80333010: jal         0x8001C0EC
    // 0x80333014: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333014: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333018:
    // 0x80333018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033301C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333020: jal         0x8002A8B4
    // 0x80333024: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80333024: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80333028: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033302C: nop

    // 0x80333030: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80333034: nop

    // 0x80333038: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033303C: jal         0x80334770
    // 0x80333040: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80333040: nop

    after_2:
    // 0x80333044: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333048: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033304C: lwc1        $f8, 0x5C40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C40);
    // 0x80333050: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333054: nop

    // 0x80333058: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8033305C: nop

    // 0x80333060: bc1f        L_80333074
    if (!c1cs) {
        // 0x80333064: nop
    
            goto L_80333074;
    }
    // 0x80333064: nop

    // 0x80333068: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033306C: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x80333070: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_80333074:
    // 0x80333074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033307C: jal         0x8001B4AC
    // 0x80333080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80333080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333084: beq         $v0, $zero, L_803330B4
    if (ctx->r2 == 0) {
        // 0x80333088: nop
    
            goto L_803330B4;
    }
    // 0x80333088: nop

    // 0x8033308C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333090: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80333094: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333098: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033309C: nop

    // 0x803330A0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803330A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803330A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803330AC: nop

    // 0x803330B0: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
L_803330B4:
    // 0x803330B4: b           L_803330BC
    // 0x803330B8: nop

        goto L_803330BC;
    // 0x803330B8: nop

L_803330BC:
    // 0x803330BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803330C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803330C4: jr          $ra
    // 0x803330C8: nop

    return;
    // 0x803330C8: nop

;}
RECOMP_FUNC void func_803330CC_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803330CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803330D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803330D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803330D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803330DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803330E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803330E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803330EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803330F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803330F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803330FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333100: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333104: nop

    // 0x80333108: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033310C: nop

    // 0x80333110: bne         $t1, $zero, L_8033318C
    if (ctx->r9 != 0) {
        // 0x80333114: nop
    
            goto L_8033318C;
    }
    // 0x80333114: nop

    // 0x80333118: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033311C: nop

    // 0x80333120: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333124: nop

    // 0x80333128: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033312C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333130: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333134: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333138: nop

    // 0x8033313C: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80333140: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333144: nop

    // 0x80333148: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033314C: nop

    // 0x80333150: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80333154: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333158: nop

    // 0x8033315C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80333160: nop

    // 0x80333164: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x80333168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033316C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80333170: addiu       $t9, $t9, -0x6020
    ctx->r25 = ADD32(ctx->r25, -0X6020);
    // 0x80333174: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333178: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8033317C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333180: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80333184: jal         0x8001C0EC
    // 0x80333188: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333188: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_8033318C:
    // 0x8033318C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333190: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333194: jal         0x8001B4AC
    // 0x80333198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80333198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033319C: beq         $v0, $zero, L_803331CC
    if (ctx->r2 == 0) {
        // 0x803331A0: nop
    
            goto L_803331CC;
    }
    // 0x803331A0: nop

    // 0x803331A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803331A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803331AC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803331B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803331B4: nop

    // 0x803331B8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x803331BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803331C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803331C4: nop

    // 0x803331C8: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
L_803331CC:
    // 0x803331CC: b           L_803331D4
    // 0x803331D0: nop

        goto L_803331D4;
    // 0x803331D0: nop

L_803331D4:
    // 0x803331D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803331D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803331DC: jr          $ra
    // 0x803331E0: nop

    return;
    // 0x803331E0: nop

;}
RECOMP_FUNC void func_803338E0_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803338E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803338E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803338E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803338EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803338F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803338F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803338F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333900: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333904: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333908: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033390C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333910: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80333914: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80333918: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033391C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80333920: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333924: nop

    // 0x80333928: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x8033392C: nop

    // 0x80333930: bne         $t2, $zero, L_80333988
    if (ctx->r10 != 0) {
        // 0x80333934: nop
    
            goto L_80333988;
    }
    // 0x80333934: nop

    // 0x80333938: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033393C: nop

    // 0x80333940: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80333944: nop

    // 0x80333948: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8033394C: sb          $t5, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r13;
    // 0x80333950: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333954: nop

    // 0x80333958: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8033395C: nop

    // 0x80333960: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
    // 0x80333964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333968: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8033396C: addiu       $t8, $t8, -0x6020
    ctx->r24 = ADD32(ctx->r24, -0X6020);
    // 0x80333970: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333974: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80333978: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033397C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80333980: jal         0x8001C0EC
    // 0x80333984: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333984: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333988:
    // 0x80333988: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033398C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333990: jal         0x8001B62C
    // 0x80333994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80333994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333998: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8033399C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803339A0: nop

    // 0x803339A4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x803339A8: nop

    // 0x803339AC: bc1f        L_80333A3C
    if (!c1cs) {
        // 0x803339B0: nop
    
            goto L_80333A3C;
    }
    // 0x803339B0: nop

    // 0x803339B4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803339B8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803339BC: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803339C0: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x803339C4: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803339C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803339CC: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803339D0: addiu       $a1, $a1, 0x5AFC
    ctx->r5 = ADD32(ctx->r5, 0X5AFC);
    // 0x803339D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803339D8: jal         0x80027464
    // 0x803339DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803339DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x803339E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803339E4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803339E8: addiu       $t0, $t0, -0x5E88
    ctx->r8 = ADD32(ctx->r8, -0X5E88);
    // 0x803339EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803339F0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803339F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803339F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803339FC: jal         0x8001C0EC
    // 0x80333A00: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80333A00: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_3:
    // 0x80333A04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333A08: jal         0x80026F10
    // 0x80333A0C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x80333A0C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x80333A10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333A14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80333A18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333A1C: jal         0x80019448
    // 0x80333A20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x80333A20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80333A24: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333A28: nop

    // 0x80333A2C: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80333A30: nop

    // 0x80333A34: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80333A38: sb          $t4, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r12;
L_80333A3C:
    // 0x80333A3C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333A40: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333A44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333A48: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80333A4C: nop

    // 0x80333A50: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80333A54: nop

    // 0x80333A58: bc1f        L_80333A84
    if (!c1cs) {
        // 0x80333A5C: nop
    
            goto L_80333A84;
    }
    // 0x80333A5C: nop

    // 0x80333A60: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333A64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333A68: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333A6C: nop

    // 0x80333A70: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
    // 0x80333A74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333A78: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80333A7C: b           L_80333A98
    // 0x80333A80: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
        goto L_80333A98;
    // 0x80333A80: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_80333A84:
    // 0x80333A84: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80333A88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333A8C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333A90: nop

    // 0x80333A94: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
L_80333A98:
    // 0x80333A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AA0: jal         0x8001B4AC
    // 0x80333AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80333AA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80333AA8: beq         $v0, $zero, L_80333AD8
    if (ctx->r2 == 0) {
        // 0x80333AAC: nop
    
            goto L_80333AD8;
    }
    // 0x80333AAC: nop

    // 0x80333AB0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80333AB4: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x80333AB8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80333ABC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80333AC0: nop

    // 0x80333AC4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80333AC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333ACC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333AD0: nop

    // 0x80333AD4: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
L_80333AD8:
    // 0x80333AD8: b           L_80333AE0
    // 0x80333ADC: nop

        goto L_80333AE0;
    // 0x80333ADC: nop

L_80333AE0:
    // 0x80333AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333AE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80333AE8: jr          $ra
    // 0x80333AEC: nop

    return;
    // 0x80333AEC: nop

;}
RECOMP_FUNC void func_803353F0_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803353F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803353F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803353F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803353FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335400: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335404: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033540C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335410: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335414: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335418: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033541C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335420: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335424: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335428: nop

    // 0x8033542C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335430: nop

    // 0x80335434: bne         $t1, $zero, L_803354AC
    if (ctx->r9 != 0) {
        // 0x80335438: nop
    
            goto L_803354AC;
    }
    // 0x80335438: nop

    // 0x8033543C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335440: nop

    // 0x80335444: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335448: nop

    // 0x8033544C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335450: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335454: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335458: nop

    // 0x8033545C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335460: nop

    // 0x80335464: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335468: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033546C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335470: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335474: nop

    // 0x80335478: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x8033547C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335480: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80335484: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x80335488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033548C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80335490: addiu       $t0, $t0, -0x5E88
    ctx->r8 = ADD32(ctx->r8, -0X5E88);
    // 0x80335494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335498: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8033549C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803354A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803354A4: jal         0x8001C0EC
    // 0x803354A8: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803354A8: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_803354AC:
    // 0x803354AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803354B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803354B4: jal         0x80029D8C
    // 0x803354B8: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x803354B8: nop

    after_1:
    // 0x803354BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803354C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803354C4: jal         0x8001B4AC
    // 0x803354C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803354C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803354CC: beq         $v0, $zero, L_8033551C
    if (ctx->r2 == 0) {
        // 0x803354D0: nop
    
            goto L_8033551C;
    }
    // 0x803354D0: nop

    // 0x803354D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803354D8: nop

    // 0x803354DC: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x803354E0: nop

    // 0x803354E4: bne         $t3, $zero, L_80335504
    if (ctx->r11 != 0) {
        // 0x803354E8: nop
    
            goto L_80335504;
    }
    // 0x803354E8: nop

    // 0x803354EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803354F0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x803354F4: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x803354F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803354FC: b           L_8033551C
    // 0x80335500: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_8033551C;
    // 0x80335500: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80335504:
    // 0x80335504: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335508: nop

    // 0x8033550C: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x80335510: nop

    // 0x80335514: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80335518: sh          $t8, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r24;
L_8033551C:
    // 0x8033551C: b           L_80335524
    // 0x80335520: nop

        goto L_80335524;
    // 0x80335520: nop

L_80335524:
    // 0x80335524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335528: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033552C: jr          $ra
    // 0x80335530: nop

    return;
    // 0x80335530: nop

;}
RECOMP_FUNC void func_803324D8_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803324D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803324DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803324E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803324E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803324E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803324EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803324F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803324F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803324F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803324FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332500: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332504: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332508: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033250C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332510: nop

    // 0x80332514: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332518: nop

    // 0x8033251C: bne         $t1, $zero, L_80332594
    if (ctx->r9 != 0) {
        // 0x80332520: nop
    
            goto L_80332594;
    }
    // 0x80332520: nop

    // 0x80332524: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332528: nop

    // 0x8033252C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332530: nop

    // 0x80332534: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332538: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033253C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332540: nop

    // 0x80332544: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332548: nop

    // 0x8033254C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332550: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332554: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332558: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8033255C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332560: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332564: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332568: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x8033256C: jal         0x8001C0EC
    // 0x80332570: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332570: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80332574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332578: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033257C: addiu       $a3, $a3, -0x5F64
    ctx->r7 = ADD32(ctx->r7, -0X5F64);
    // 0x80332580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332584: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80332588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033258C: jal         0x8001ABF4
    // 0x80332590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80332594:
    // 0x80332594: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332598: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033259C: jal         0x8002A8B4
    // 0x803325A0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803325A0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x803325A4: jal         0x80334770
    // 0x803325A8: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x803325A8: nop

    after_3:
    // 0x803325AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803325B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803325B4: lwc1        $f6, 0x5C2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C2C);
    // 0x803325B8: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803325BC: nop

    // 0x803325C0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x803325C4: nop

    // 0x803325C8: bc1f        L_803325E0
    if (!c1cs) {
        // 0x803325CC: nop
    
            goto L_803325E0;
    }
    // 0x803325CC: nop

    // 0x803325D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803325D4: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x803325D8: b           L_80332628
    // 0x803325DC: sh          $t9, 0xB8($t0)
    MEM_H(0XB8, ctx->r8) = ctx->r25;
        goto L_80332628;
    // 0x803325DC: sh          $t9, 0xB8($t0)
    MEM_H(0XB8, ctx->r8) = ctx->r25;
L_803325E0:
    // 0x803325E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803325E4: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x803325E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803325EC: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x803325F0: nop

    // 0x803325F4: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x803325F8: nop

    // 0x803325FC: bc1f        L_80332614
    if (!c1cs) {
        // 0x80332600: nop
    
            goto L_80332614;
    }
    // 0x80332600: nop

    // 0x80332604: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332608: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033260C: b           L_80332628
    // 0x80332610: swc1        $f16, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f16.u32l;
        goto L_80332628;
    // 0x80332610: swc1        $f16, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f16.u32l;
L_80332614:
    // 0x80332614: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80332618: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033261C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332620: nop

    // 0x80332624: swc1        $f18, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f18.u32l;
L_80332628:
    // 0x80332628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033262C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332630: jal         0x8001B4AC
    // 0x80332634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332638: beq         $v0, $zero, L_80332674
    if (ctx->r2 == 0) {
        // 0x8033263C: nop
    
            goto L_80332674;
    }
    // 0x8033263C: nop

    // 0x80332640: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332644: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x80332648: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033264C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332650: nop

    // 0x80332654: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80332658: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033265C: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80332660: sh          $t7, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r15;
    // 0x80332664: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332668: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033266C: nop

    // 0x80332670: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
L_80332674:
    // 0x80332674: b           L_8033267C
    // 0x80332678: nop

        goto L_8033267C;
    // 0x80332678: nop

L_8033267C:
    // 0x8033267C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332680: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332684: jr          $ra
    // 0x80332688: nop

    return;
    // 0x80332688: nop

;}
RECOMP_FUNC void func_80335534_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335538: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033553C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335540: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335544: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335548: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033554C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335550: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335558: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033555C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335560: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335564: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335568: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033556C: nop

    // 0x80335570: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335574: nop

    // 0x80335578: bne         $t1, $zero, L_803355D0
    if (ctx->r9 != 0) {
        // 0x8033557C: nop
    
            goto L_803355D0;
    }
    // 0x8033557C: nop

    // 0x80335580: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335584: nop

    // 0x80335588: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033558C: nop

    // 0x80335590: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335594: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335598: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033559C: nop

    // 0x803355A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803355A4: nop

    // 0x803355A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803355AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803355B4: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x803355B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803355C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803355C4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x803355C8: jal         0x8001C0EC
    // 0x803355CC: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803355CC: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_803355D0:
    // 0x803355D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355D8: jal         0x80029D8C
    // 0x803355DC: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x803355DC: nop

    after_1:
    // 0x803355E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803355E8: jal         0x8001B4AC
    // 0x803355EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803355EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803355F0: beq         $v0, $zero, L_80335608
    if (ctx->r2 == 0) {
        // 0x803355F4: nop
    
            goto L_80335608;
    }
    // 0x803355F4: nop

    // 0x803355F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803355FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335600: jal         0x8002B114
    // 0x80335604: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x80335604: nop

    after_3:
L_80335608:
    // 0x80335608: b           L_80335610
    // 0x8033560C: nop

        goto L_80335610;
    // 0x8033560C: nop

L_80335610:
    // 0x80335610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335618: jr          $ra
    // 0x8033561C: nop

    return;
    // 0x8033561C: nop

;}
RECOMP_FUNC void func_80332E2C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332E30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332E34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332E60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332E64: nop

    // 0x80332E68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332E6C: nop

    // 0x80332E70: bne         $t1, $zero, L_80332EC8
    if (ctx->r9 != 0) {
        // 0x80332E74: nop
    
            goto L_80332EC8;
    }
    // 0x80332E74: nop

    // 0x80332E78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332E7C: nop

    // 0x80332E80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332E84: nop

    // 0x80332E88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332E8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332E90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332E94: nop

    // 0x80332E98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332E9C: nop

    // 0x80332EA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332EA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332EAC: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80332EB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332EBC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80332EC0: jal         0x8001C0EC
    // 0x80332EC4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332EC4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80332EC8:
    // 0x80332EC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332ECC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332ED0: jal         0x8002A8B4
    // 0x80332ED4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80332ED4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80332ED8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332EDC: nop

    // 0x80332EE0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80332EE4: nop

    // 0x80332EE8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80332EEC: jal         0x80334770
    // 0x80332EF0: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80332EF0: nop

    after_2:
    // 0x80332EF4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332EF8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332EFC: lwc1        $f8, 0x5C3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C3C);
    // 0x80332F00: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332F04: nop

    // 0x80332F08: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80332F0C: nop

    // 0x80332F10: bc1f        L_80332F24
    if (!c1cs) {
        // 0x80332F14: nop
    
            goto L_80332F24;
    }
    // 0x80332F14: nop

    // 0x80332F18: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332F1C: addiu       $t0, $zero, 0x5A
    ctx->r8 = ADD32(0, 0X5A);
    // 0x80332F20: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_80332F24:
    // 0x80332F24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F2C: jal         0x8001B4AC
    // 0x80332F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80332F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80332F34: beq         $v0, $zero, L_80332F64
    if (ctx->r2 == 0) {
        // 0x80332F38: nop
    
            goto L_80332F64;
    }
    // 0x80332F38: nop

    // 0x80332F3C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332F40: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x80332F44: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332F48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332F4C: nop

    // 0x80332F50: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80332F54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332F58: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332F5C: nop

    // 0x80332F60: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
L_80332F64:
    // 0x80332F64: b           L_80332F6C
    // 0x80332F68: nop

        goto L_80332F6C;
    // 0x80332F68: nop

L_80332F6C:
    // 0x80332F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332F70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332F74: jr          $ra
    // 0x80332F78: nop

    return;
    // 0x80332F78: nop

;}
RECOMP_FUNC void func_80333AF0_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333AF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333AF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333AF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333AFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333B00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333B04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333B08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333B14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333B1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333B20: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333B24: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333B28: nop

    // 0x80333B2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333B30: nop

    // 0x80333B34: bne         $t1, $zero, L_80333B8C
    if (ctx->r9 != 0) {
        // 0x80333B38: nop
    
            goto L_80333B8C;
    }
    // 0x80333B38: nop

    // 0x80333B3C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333B40: nop

    // 0x80333B44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333B48: nop

    // 0x80333B4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333B50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333B54: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333B58: nop

    // 0x80333B5C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333B60: nop

    // 0x80333B64: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333B68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B6C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333B70: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80333B74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333B80: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80333B84: jal         0x8001C0EC
    // 0x80333B88: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333B88: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333B8C:
    // 0x80333B8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333B90: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333B94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333B98: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80333B9C: nop

    // 0x80333BA0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80333BA4: nop

    // 0x80333BA8: bc1f        L_80333BD4
    if (!c1cs) {
        // 0x80333BAC: nop
    
            goto L_80333BD4;
    }
    // 0x80333BAC: nop

    // 0x80333BB0: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80333BB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333BB8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333BBC: nop

    // 0x80333BC0: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x80333BC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80333BC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333BCC: b           L_80333BE8
    // 0x80333BD0: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
        goto L_80333BE8;
    // 0x80333BD0: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
L_80333BD4:
    // 0x80333BD4: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80333BD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80333BDC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333BE0: nop

    // 0x80333BE4: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
L_80333BE8:
    // 0x80333BE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BF0: jal         0x8001B4AC
    // 0x80333BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80333BF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333BF8: beq         $v0, $zero, L_80333C28
    if (ctx->r2 == 0) {
        // 0x80333BFC: nop
    
            goto L_80333C28;
    }
    // 0x80333BFC: nop

    // 0x80333C00: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333C04: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x80333C08: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333C0C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333C10: nop

    // 0x80333C14: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80333C18: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80333C1C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333C20: nop

    // 0x80333C24: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
L_80333C28:
    // 0x80333C28: b           L_80333C30
    // 0x80333C2C: nop

        goto L_80333C30;
    // 0x80333C2C: nop

L_80333C30:
    // 0x80333C30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333C34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333C38: jr          $ra
    // 0x80333C3C: nop

    return;
    // 0x80333C3C: nop

;}
RECOMP_FUNC void func_803314A4_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803314A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803314A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803314AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803314B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803314B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803314B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803314BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803314C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803314C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803314CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803314D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803314D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803314D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803314DC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803314E0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803314E4: nop

    // 0x803314E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803314EC: nop

    // 0x803314F0: bne         $t1, $zero, L_80331530
    if (ctx->r9 != 0) {
        // 0x803314F4: nop
    
            goto L_80331530;
    }
    // 0x803314F4: nop

    // 0x803314F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803314FC: nop

    // 0x80331500: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331504: nop

    // 0x80331508: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033150C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331510: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331514: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80331518: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x8033151C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331520: nop

    // 0x80331524: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80331528: nop

    // 0x8033152C: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
L_80331530:
    // 0x80331530: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331534: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331538: jal         0x80029C40
    // 0x8033153C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x8033153C: nop

    after_0:
    // 0x80331540: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331544: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033154C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331550: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80331554: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x80331558: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033155C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80331560: jal         0x80029018
    // 0x80331564: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_1;
    // 0x80331564: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80331568: beq         $v0, $zero, L_803315A0
    if (ctx->r2 == 0) {
        // 0x8033156C: nop
    
            goto L_803315A0;
    }
    // 0x8033156C: nop

    // 0x80331570: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331574: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331578: nop

    // 0x8033157C: swc1        $f8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f8.u32l;
    // 0x80331580: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331584: nop

    // 0x80331588: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8033158C: nop

    // 0x80331590: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80331594: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331598: nop

    // 0x8033159C: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
L_803315A0:
    // 0x803315A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803315A4: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x803315A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803315AC: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803315B0: nop

    // 0x803315B4: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x803315B8: nop

    // 0x803315BC: bc1f        L_803315E8
    if (!c1cs) {
        // 0x803315C0: nop
    
            goto L_803315E8;
    }
    // 0x803315C0: nop

    // 0x803315C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803315C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803315CC: nop

    // 0x803315D0: swc1        $f18, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f18.u32l;
    // 0x803315D4: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x803315D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803315DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803315E0: nop

    // 0x803315E4: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
L_803315E8:
    // 0x803315E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803315EC: nop

    // 0x803315F0: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803315F4: nop

    // 0x803315F8: bne         $t6, $zero, L_8033164C
    if (ctx->r14 != 0) {
        // 0x803315FC: nop
    
            goto L_8033164C;
    }
    // 0x803315FC: nop

    // 0x80331600: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331604: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x80331608: sh          $t8, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r24;
    // 0x8033160C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331610: nop

    // 0x80331614: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80331618: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033161C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331620: nop

    // 0x80331624: swc1        $f6, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f6.u32l;
    // 0x80331628: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033162C: nop

    // 0x80331630: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80331634: nop

    // 0x80331638: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
    // 0x8033163C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331640: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331644: b           L_80331664
    // 0x80331648: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
        goto L_80331664;
    // 0x80331648: swc1        $f10, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f10.u32l;
L_8033164C:
    // 0x8033164C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331650: nop

    // 0x80331654: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x80331658: nop

    // 0x8033165C: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x80331660: sh          $t5, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r13;
L_80331664:
    // 0x80331664: b           L_8033166C
    // 0x80331668: nop

        goto L_8033166C;
    // 0x80331668: nop

L_8033166C:
    // 0x8033166C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331670: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331674: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331678: jr          $ra
    // 0x8033167C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033167C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80334DF4_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334DF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334E00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334E04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334E08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334E0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334E10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334E18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334E20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334E24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334E28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334E2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334E30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334E34: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80334E38: nop

    // 0x80334E3C: beq         $s0, $at, L_80334E64
    if (ctx->r16 == ctx->r1) {
        // 0x80334E40: nop
    
            goto L_80334E64;
    }
    // 0x80334E40: nop

    // 0x80334E44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334E48: beq         $s0, $at, L_80334E74
    if (ctx->r16 == ctx->r1) {
        // 0x80334E4C: nop
    
            goto L_80334E74;
    }
    // 0x80334E4C: nop

    // 0x80334E50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80334E54: beq         $s0, $at, L_80334E84
    if (ctx->r16 == ctx->r1) {
        // 0x80334E58: nop
    
            goto L_80334E84;
    }
    // 0x80334E58: nop

    // 0x80334E5C: b           L_80334E94
    // 0x80334E60: nop

        goto L_80334E94;
    // 0x80334E60: nop

L_80334E64:
    // 0x80334E64: jal         0x803349F4
    // 0x80334E68: nop

    func_803349F4_unk_bin_12(rdram, ctx);
        goto after_0;
    // 0x80334E68: nop

    after_0:
    // 0x80334E6C: b           L_80334E9C
    // 0x80334E70: nop

        goto L_80334E9C;
    // 0x80334E70: nop

L_80334E74:
    // 0x80334E74: jal         0x80334B68
    // 0x80334E78: nop

    func_80334B68_unk_bin_12(rdram, ctx);
        goto after_1;
    // 0x80334E78: nop

    after_1:
    // 0x80334E7C: b           L_80334E9C
    // 0x80334E80: nop

        goto L_80334E9C;
    // 0x80334E80: nop

L_80334E84:
    // 0x80334E84: jal         0x80334D44
    // 0x80334E88: nop

    func_80334D44_unk_bin_12(rdram, ctx);
        goto after_2;
    // 0x80334E88: nop

    after_2:
    // 0x80334E8C: b           L_80334E9C
    // 0x80334E90: nop

        goto L_80334E9C;
    // 0x80334E90: nop

L_80334E94:
    // 0x80334E94: b           L_80334E9C
    // 0x80334E98: nop

        goto L_80334E9C;
    // 0x80334E98: nop

L_80334E9C:
    // 0x80334E9C: b           L_80334EA4
    // 0x80334EA0: nop

        goto L_80334EA4;
    // 0x80334EA0: nop

L_80334EA4:
    // 0x80334EA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334EA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334EAC: jr          $ra
    // 0x80334EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334EB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80331680_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331680: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331684: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331688: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033168C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331690: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331694: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331698: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033169C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803316A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803316B8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803316BC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803316C0: nop

    // 0x803316C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803316C8: nop

    // 0x803316CC: bne         $t1, $zero, L_80331724
    if (ctx->r9 != 0) {
        // 0x803316D0: nop
    
            goto L_80331724;
    }
    // 0x803316D0: nop

    // 0x803316D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803316D8: nop

    // 0x803316DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803316E0: nop

    // 0x803316E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803316E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803316EC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803316F0: nop

    // 0x803316F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803316F8: nop

    // 0x803316FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331700: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331704: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331708: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x8033170C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331710: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331714: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331718: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8033171C: jal         0x8001C0EC
    // 0x80331720: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331720: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331724:
    // 0x80331724: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331728: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033172C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331730: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80331734: nop

    // 0x80331738: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033173C: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x80331740: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331744: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331748: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033174C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331750: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80331754: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x80331758: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033175C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331760: jal         0x80029018
    // 0x80331764: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_1;
    // 0x80331764: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80331768: beq         $v0, $zero, L_803317A0
    if (ctx->r2 == 0) {
        // 0x8033176C: nop
    
            goto L_803317A0;
    }
    // 0x8033176C: nop

    // 0x80331770: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331774: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331778: nop

    // 0x8033177C: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x80331780: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331784: nop

    // 0x80331788: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8033178C: nop

    // 0x80331790: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80331794: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331798: nop

    // 0x8033179C: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
L_803317A0:
    // 0x803317A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803317A4: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x803317A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803317AC: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803317B0: nop

    // 0x803317B4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x803317B8: nop

    // 0x803317BC: bc1f        L_803317E8
    if (!c1cs) {
        // 0x803317C0: nop
    
            goto L_803317E8;
    }
    // 0x803317C0: nop

    // 0x803317C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803317C8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803317CC: nop

    // 0x803317D0: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x803317D4: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x803317D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803317DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803317E0: nop

    // 0x803317E4: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
L_803317E8:
    // 0x803317E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317F0: jal         0x8001B4AC
    // 0x803317F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803317F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803317F8: beq         $v0, $zero, L_80331828
    if (ctx->r2 == 0) {
        // 0x803317FC: nop
    
            goto L_80331828;
    }
    // 0x803317FC: nop

    // 0x80331800: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331804: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331808: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x8033180C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331810: nop

    // 0x80331814: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80331818: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033181C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331820: nop

    // 0x80331824: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
L_80331828:
    // 0x80331828: b           L_80331830
    // 0x8033182C: nop

        goto L_80331830;
    // 0x8033182C: nop

L_80331830:
    // 0x80331830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331834: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331838: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033183C: jr          $ra
    // 0x80331840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331840: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033268C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033268C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332694: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332698: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033269C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803326A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803326A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803326AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803326B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803326B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803326B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803326BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803326C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803326C4: nop

    // 0x803326C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803326CC: nop

    // 0x803326D0: bne         $t1, $zero, L_80332758
    if (ctx->r9 != 0) {
        // 0x803326D4: nop
    
            goto L_80332758;
    }
    // 0x803326D4: nop

    // 0x803326D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803326DC: nop

    // 0x803326E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803326E4: nop

    // 0x803326E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803326EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803326F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803326F4: nop

    // 0x803326F8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803326FC: nop

    // 0x80332700: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332704: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332708: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033270C: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80332710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332714: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332718: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033271C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80332720: jal         0x8001C0EC
    // 0x80332724: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332724: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80332728: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033272C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332730: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332734: addiu       $a3, $a3, -0x5F64
    ctx->r7 = ADD32(ctx->r7, -0X5F64);
    // 0x80332738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033273C: jal         0x8001ABF4
    // 0x80332740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80332744: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332748: nop

    // 0x8033274C: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332750: nop

    // 0x80332754: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
L_80332758:
    // 0x80332758: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033275C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332760: lwc1        $f6, 0x18($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X18);
    // 0x80332764: nop

    // 0x80332768: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x8033276C: nop

    // 0x80332770: bc1t        L_803327F0
    if (c1cs) {
        // 0x80332774: nop
    
            goto L_803327F0;
    }
    // 0x80332774: nop

    // 0x80332778: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033277C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332780: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332784: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80332788: nop

    // 0x8033278C: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80332790: nop

    // 0x80332794: bc1f        L_803327C8
    if (!c1cs) {
        // 0x80332798: nop
    
            goto L_803327C8;
    }
    // 0x80332798: nop

    // 0x8033279C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803327A0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803327A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803327A8: lwc1        $f4, 0x18($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X18);
    // 0x803327AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803327B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803327B4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803327B8: nop

    // 0x803327BC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803327C0: b           L_803327F0
    // 0x803327C4: swc1        $f10, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f10.u32l;
        goto L_803327F0;
    // 0x803327C4: swc1        $f10, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f10.u32l;
L_803327C8:
    // 0x803327C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803327CC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803327D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803327D4: lwc1        $f16, 0x18($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X18);
    // 0x803327D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803327DC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x803327E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803327E4: nop

    // 0x803327E8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x803327EC: swc1        $f8, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f8.u32l;
L_803327F0:
    // 0x803327F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803327F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803327F8: jal         0x8001B62C
    // 0x803327FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x803327FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332800: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80332804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332808: nop

    // 0x8033280C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80332810: nop

    // 0x80332814: bc1f        L_8033283C
    if (!c1cs) {
        // 0x80332818: nop
    
            goto L_8033283C;
    }
    // 0x80332818: nop

    // 0x8033281C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332820: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332824: nop

    // 0x80332828: swc1        $f16, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->f16.u32l;
    // 0x8033282C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332830: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332834: nop

    // 0x80332838: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
L_8033283C:
    // 0x8033283C: jal         0x80334770
    // 0x80332840: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_3;
    // 0x80332840: nop

    after_3:
    // 0x80332844: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332848: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033284C: lwc1        $f6, 0x5C30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C30);
    // 0x80332850: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80332854: nop

    // 0x80332858: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8033285C: nop

    // 0x80332860: bc1f        L_80332874
    if (!c1cs) {
        // 0x80332864: nop
    
            goto L_80332874;
    }
    // 0x80332864: nop

    // 0x80332868: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033286C: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80332870: sh          $t5, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r13;
L_80332874:
    // 0x80332874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033287C: jal         0x8001B4AC
    // 0x80332880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80332880: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80332884: beq         $v0, $zero, L_803328A4
    if (ctx->r2 == 0) {
        // 0x80332888: nop
    
            goto L_803328A4;
    }
    // 0x80332888: nop

    // 0x8033288C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332890: addiu       $t8, $zero, 0x15
    ctx->r24 = ADD32(0, 0X15);
    // 0x80332894: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80332898: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033289C: nop

    // 0x803328A0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803328A4:
    // 0x803328A4: b           L_803328AC
    // 0x803328A8: nop

        goto L_803328AC;
    // 0x803328A8: nop

L_803328AC:
    // 0x803328AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803328B4: jr          $ra
    // 0x803328B8: nop

    return;
    // 0x803328B8: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x5B38
    ctx->r5 = ADD32(ctx->r5, 0X5B38);
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
    // 0x80330068: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033006C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330070: jal         0x80019448
    // 0x80330074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80330074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80330078: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033007C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330080: addiu       $a3, $a3, -0x5F64
    ctx->r7 = ADD32(ctx->r7, -0X5F64);
    // 0x80330084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330088: jal         0x8001ABF4
    // 0x8033008C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033008C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330090: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330094: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330098: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033009C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803300A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803300A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803300A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803300AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803300B0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x803300B4: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
    // 0x803300B8: b           L_803300C0
    // 0x803300BC: nop

        goto L_803300C0;
    // 0x803300BC: nop

L_803300C0:
    // 0x803300C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300C8: jr          $ra
    // 0x803300CC: nop

    return;
    // 0x803300CC: nop

;}
RECOMP_FUNC void func_80334770_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334770: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334774: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334778: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033477C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334780: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334784: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334788: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033478C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334790: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334794: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334798: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033479C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803347A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803347A4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803347A8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803347AC: nop

    // 0x803347B0: lh          $t1, 0xB8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB8);
    // 0x803347B4: nop

    // 0x803347B8: beq         $t1, $zero, L_803347EC
    if (ctx->r9 == 0) {
        // 0x803347BC: nop
    
            goto L_803347EC;
    }
    // 0x803347BC: nop

    // 0x803347C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803347C4: nop

    // 0x803347C8: lh          $t3, 0xB8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB8);
    // 0x803347CC: nop

    // 0x803347D0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803347D4: sh          $t4, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = ctx->r12;
    // 0x803347D8: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x803347DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803347E0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803347E4: b           L_803347FC
    // 0x803347E8: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
        goto L_803347FC;
    // 0x803347E8: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
L_803347EC:
    // 0x803347EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803347F0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803347F4: nop

    // 0x803347F8: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
L_803347FC:
    // 0x803347FC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80334800: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80334804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334808: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033480C: nop

    // 0x80334810: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80334814: nop

    // 0x80334818: bc1f        L_80334850
    if (!c1cs) {
        // 0x8033481C: nop
    
            goto L_80334850;
    }
    // 0x8033481C: nop

    // 0x80334820: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80334824: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334828: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033482C: nop

    // 0x80334830: swc1        $f16, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f16.u32l;
    // 0x80334834: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334838: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033483C: nop

    // 0x80334840: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
    // 0x80334844: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334848: nop

    // 0x8033484C: sh          $zero, 0xB8($t0)
    MEM_H(0XB8, ctx->r8) = 0;
L_80334850:
    // 0x80334850: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334854: nop

    // 0x80334858: lh          $t3, 0xBA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBA);
    // 0x8033485C: nop

    // 0x80334860: bne         $t3, $zero, L_803348B4
    if (ctx->r11 != 0) {
        // 0x80334864: nop
    
            goto L_803348B4;
    }
    // 0x80334864: nop

    // 0x80334868: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033486C: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x80334870: sh          $t4, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = ctx->r12;
    // 0x80334874: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80334878: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033487C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80334880: nop

    // 0x80334884: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80334888: jal         0x80014E80
    // 0x8033488C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8033488C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80334890: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334894: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80334898: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x8033489C: lwc1        $f12, 0xE0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XE0);
    // 0x803348A0: jal         0x80015538
    // 0x803348A4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803348A4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x803348A8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803348AC: b           L_803348CC
    // 0x803348B0: swc1        $f0, 0xE0($t7)
    MEM_W(0XE0, ctx->r15) = ctx->f0.u32l;
        goto L_803348CC;
    // 0x803348B0: swc1        $f0, 0xE0($t7)
    MEM_W(0XE0, ctx->r15) = ctx->f0.u32l;
L_803348B4:
    // 0x803348B4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803348B8: nop

    // 0x803348BC: lh          $t9, 0xBA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBA);
    // 0x803348C0: nop

    // 0x803348C4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x803348C8: sh          $t0, 0xBA($t8)
    MEM_H(0XBA, ctx->r24) = ctx->r8;
L_803348CC:
    // 0x803348CC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803348D0: nop

    // 0x803348D4: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803348D8: nop

    // 0x803348DC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x803348E0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803348E4: nop

    // 0x803348E8: lwc1        $f10, 0xE0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XE0);
    // 0x803348EC: nop

    // 0x803348F0: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
    // 0x803348F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803348F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803348FC: jal         0x80029C40
    // 0x80334900: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80334900: nop

    after_2:
    // 0x80334904: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334908: nop

    // 0x8033490C: lwc1        $f16, 0x28($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80334910: nop

    // 0x80334914: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80334918: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033491C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334920: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334924: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334928: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8033492C: lui         $a2, 0x43F0
    ctx->r6 = S32(0X43F0 << 16);
    // 0x80334930: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334934: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80334938: jal         0x80029018
    // 0x8033493C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x8033493C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80334940: beq         $v0, $zero, L_80334964
    if (ctx->r2 == 0) {
        // 0x80334944: nop
    
            goto L_80334964;
    }
    // 0x80334944: nop

    // 0x80334948: jal         0x800297DC
    // 0x8033494C: nop

    func_800297DC(rdram, ctx);
        goto after_4;
    // 0x8033494C: nop

    after_4:
    // 0x80334950: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334954: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334958: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8033495C: jal         0x80029824
    // 0x80334960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_5;
    // 0x80334960: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_80334964:
    // 0x80334964: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80334968: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033496C: nop

    // 0x80334970: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x80334974: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334978: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033497C: nop

    // 0x80334980: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
    // 0x80334984: b           L_8033498C
    // 0x80334988: nop

        goto L_8033498C;
    // 0x80334988: nop

L_8033498C:
    // 0x8033498C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334990: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80334994: jr          $ra
    // 0x80334998: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80334998: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80334B68_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334B68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334B70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334B74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334B78: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334B7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334B80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334B84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334B88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334B8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334B90: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334B94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334B98: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334B9C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334BA0: nop

    // 0x80334BA4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334BA8: nop

    // 0x80334BAC: bne         $t1, $zero, L_80334C74
    if (ctx->r9 != 0) {
        // 0x80334BB0: nop
    
            goto L_80334C74;
    }
    // 0x80334BB0: nop

    // 0x80334BB4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334BB8: nop

    // 0x80334BBC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334BC0: nop

    // 0x80334BC4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334BC8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334BCC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80334BD0: nop

    // 0x80334BD4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334BD8: nop

    // 0x80334BDC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334BE0: jal         0x80014E80
    // 0x80334BE4: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80334BE4: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_0:
    // 0x80334BE8: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80334BEC: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x80334BF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80334BF4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80334BF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334BFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334C00: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80334C04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334C08: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80334C0C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C10: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80334C14: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
    // 0x80334C18: jal         0x80014E80
    // 0x80334C1C: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80334C1C: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_1:
    // 0x80334C20: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80334C24: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334C2C: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80334C30: jal         0x80014E80
    // 0x80334C34: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80334C34: addiu       $a0, $zero, -0x14
    ctx->r4 = ADD32(0, -0X14);
    after_2:
    // 0x80334C38: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80334C3C: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x80334C40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80334C44: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80334C48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334C4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334C50: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80334C54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334C58: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80334C5C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C60: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80334C64: swc1        $f6, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f6.u32l;
    // 0x80334C68: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C6C: addiu       $t3, $zero, 0xA5
    ctx->r11 = ADD32(0, 0XA5);
    // 0x80334C70: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_80334C74:
    // 0x80334C74: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C78: nop

    // 0x80334C7C: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80334C80: nop

    // 0x80334C84: bne         $t6, $zero, L_80334C9C
    if (ctx->r14 != 0) {
        // 0x80334C88: nop
    
            goto L_80334C9C;
    }
    // 0x80334C88: nop

    // 0x80334C8C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80334C90: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80334C94: b           L_80334D1C
    // 0x80334C98: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
        goto L_80334D1C;
    // 0x80334C98: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
L_80334C9C:
    // 0x80334C9C: jal         0x80014E80
    // 0x80334CA0: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80334CA0: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_3:
    // 0x80334CA4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80334CA8: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x80334CAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80334CB0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80334CB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334CB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334CBC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80334CC0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80334CC4: lwc1        $f4, 0x44($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80334CC8: nop

    // 0x80334CCC: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80334CD0: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x80334CD4: jal         0x80014E80
    // 0x80334CD8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80334CD8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_4:
    // 0x80334CDC: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80334CE0: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80334CE4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334CE8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80334CEC: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80334CF0: jal         0x80015538
    // 0x80334CF4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80334CF4: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x80334CF8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80334CFC: nop

    // 0x80334D00: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x80334D04: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80334D08: nop

    // 0x80334D0C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80334D10: nop

    // 0x80334D14: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80334D18: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_80334D1C:
    // 0x80334D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334D24: jal         0x80029C40
    // 0x80334D28: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80334D28: nop

    after_6:
    // 0x80334D2C: b           L_80334D34
    // 0x80334D30: nop

        goto L_80334D34;
    // 0x80334D30: nop

L_80334D34:
    // 0x80334D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334D38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334D3C: jr          $ra
    // 0x80334D40: nop

    return;
    // 0x80334D40: nop

;}
RECOMP_FUNC void func_80331970_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331970: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331978: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033197C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331980: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331984: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033198C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331994: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331998: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033199C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803319A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803319A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803319A8: nop

    // 0x803319AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803319B0: nop

    // 0x803319B4: bne         $t1, $zero, L_80331A0C
    if (ctx->r9 != 0) {
        // 0x803319B8: nop
    
            goto L_80331A0C;
    }
    // 0x803319B8: nop

    // 0x803319BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803319C0: nop

    // 0x803319C4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803319C8: nop

    // 0x803319CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803319D0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803319D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803319D8: nop

    // 0x803319DC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803319E0: nop

    // 0x803319E4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803319E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803319EC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803319F0: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x803319F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803319F8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803319FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A00: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80331A04: jal         0x8001C0EC
    // 0x80331A08: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331A08: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80331A0C:
    // 0x80331A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A14: jal         0x8002A8B4
    // 0x80331A18: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331A18: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331A1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331A20: nop

    // 0x80331A24: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80331A28: nop

    // 0x80331A2C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80331A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A38: jal         0x8001B4AC
    // 0x80331A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331A40: beq         $v0, $zero, L_80331A60
    if (ctx->r2 == 0) {
        // 0x80331A44: nop
    
            goto L_80331A60;
    }
    // 0x80331A44: nop

    // 0x80331A48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A4C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80331A50: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331A54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331A58: nop

    // 0x80331A5C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331A60:
    // 0x80331A60: b           L_80331A68
    // 0x80331A64: nop

        goto L_80331A68;
    // 0x80331A64: nop

L_80331A68:
    // 0x80331A68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331A6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331A70: jr          $ra
    // 0x80331A74: nop

    return;
    // 0x80331A74: nop

;}
RECOMP_FUNC void func_80335128_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335128: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033512C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335130: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335134: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335138: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033513C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335140: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335144: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335148: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033514C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335150: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335154: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335158: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033515C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335160: nop

    // 0x80335164: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335168: nop

    // 0x8033516C: bne         $t1, $zero, L_803351C4
    if (ctx->r9 != 0) {
        // 0x80335170: nop
    
            goto L_803351C4;
    }
    // 0x80335170: nop

    // 0x80335174: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335178: nop

    // 0x8033517C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335180: nop

    // 0x80335184: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335188: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033518C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335190: nop

    // 0x80335194: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335198: nop

    // 0x8033519C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803351A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351A4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803351A8: addiu       $t7, $t7, -0x5E88
    ctx->r15 = ADD32(ctx->r15, -0X5E88);
    // 0x803351AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351B0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803351B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803351B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803351BC: jal         0x8001C0EC
    // 0x803351C0: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803351C0: addiu       $a3, $zero, 0xCF
    ctx->r7 = ADD32(0, 0XCF);
    after_0:
L_803351C4:
    // 0x803351C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351CC: jal         0x8001B4AC
    // 0x803351D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803351D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803351D4: beq         $v0, $zero, L_803351F4
    if (ctx->r2 == 0) {
        // 0x803351D8: nop
    
            goto L_803351F4;
    }
    // 0x803351D8: nop

    // 0x803351DC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803351E0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x803351E4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803351E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803351EC: nop

    // 0x803351F0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803351F4:
    // 0x803351F4: b           L_803351FC
    // 0x803351F8: nop

        goto L_803351FC;
    // 0x803351F8: nop

L_803351FC:
    // 0x803351FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335204: jr          $ra
    // 0x80335208: nop

    return;
    // 0x80335208: nop

;}
RECOMP_FUNC void func_80331F38_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331F40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331F44: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F48: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F5C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F60: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F64: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F68: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331F6C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331F70: nop

    // 0x80331F74: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F78: nop

    // 0x80331F7C: bne         $t1, $zero, L_80332008
    if (ctx->r9 != 0) {
        // 0x80331F80: nop
    
            goto L_80332008;
    }
    // 0x80331F80: nop

    // 0x80331F84: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331F88: nop

    // 0x80331F8C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331F90: nop

    // 0x80331F94: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331F98: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331F9C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331FA0: nop

    // 0x80331FA4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331FA8: nop

    // 0x80331FAC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331FB0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80331FB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331FB8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331FBC: nop

    // 0x80331FC0: swc1        $f4, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->f4.u32l;
    // 0x80331FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FC8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80331FCC: addiu       $t8, $t8, -0x6020
    ctx->r24 = ADD32(ctx->r24, -0X6020);
    // 0x80331FD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FD4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331FDC: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80331FE0: jal         0x8001C0EC
    // 0x80331FE4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331FE4: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
    // 0x80331FE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FEC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331FF0: addiu       $a3, $a3, -0x5F64
    ctx->r7 = ADD32(ctx->r7, -0X5F64);
    // 0x80331FF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FF8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80331FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332000: jal         0x8001ABF4
    // 0x80332004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80332004: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80332008:
    // 0x80332008: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033200C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332010: jal         0x8001B62C
    // 0x80332014: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80332014: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332018: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033201C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332020: nop

    // 0x80332024: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80332028: nop

    // 0x8033202C: bc1f        L_8033215C
    if (!c1cs) {
        // 0x80332030: nop
    
            goto L_8033215C;
    }
    // 0x80332030: nop

    // 0x80332034: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332038: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033203C: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332040: lwc1        $f17, 0x5BF8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5BF8);
    // 0x80332044: lwc1        $f16, 0x5BFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5BFC);
    // 0x80332048: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033204C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80332050: jal         0x80034970
    // 0x80332054: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80332054: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80332058: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x8033205C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332060: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332064: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332068: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033206C: nop

    // 0x80332070: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332074: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80332078: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033207C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332080: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332084: lwc1        $f5, 0x5C00($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5C00);
    // 0x80332088: lwc1        $f4, 0x5C04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C04);
    // 0x8033208C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80332090: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80332094: jal         0x80036570
    // 0x80332098: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80332098: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_4:
    // 0x8033209C: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x803320A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803320A4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803320A8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x803320AC: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803320B0: nop

    // 0x803320B4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803320B8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x803320BC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803320C0: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x803320C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803320C8: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803320CC: nop

    // 0x803320D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803320D4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x803320D8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803320DC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803320E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803320E4: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803320E8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803320EC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x803320F0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803320F4: addiu       $a1, $a1, 0x5AF0
    ctx->r5 = ADD32(ctx->r5, 0X5AF0);
    // 0x803320F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803320FC: jal         0x80027464
    // 0x80332100: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80332100: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80332104: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332108: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033210C: nop

    // 0x80332110: lbu         $t5, 0x132($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X132);
    // 0x80332114: nop

    // 0x80332118: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8033211C: sb          $t7, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r15;
    // 0x80332120: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332124: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332128: addiu       $a3, $a3, -0x5EC0
    ctx->r7 = ADD32(ctx->r7, -0X5EC0);
    // 0x8033212C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332130: jal         0x8001ABF4
    // 0x80332134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80332134: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80332138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033213C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332144: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    // 0x80332148: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033214C: jal         0x800175F0
    // 0x80332150: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x80332150: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80332154: b           L_8033240C
    // 0x80332158: nop

        goto L_8033240C;
    // 0x80332158: nop

L_8033215C:
    // 0x8033215C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332160: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332164: jal         0x8001B62C
    // 0x80332168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_8;
    // 0x80332168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8033216C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80332170: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332174: nop

    // 0x80332178: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x8033217C: nop

    // 0x80332180: bc1f        L_803322B0
    if (!c1cs) {
        // 0x80332184: nop
    
            goto L_803322B0;
    }
    // 0x80332184: nop

    // 0x80332188: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033218C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332190: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332194: lwc1        $f9, 0x5C08($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5C08);
    // 0x80332198: lwc1        $f8, 0x5C0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C0C);
    // 0x8033219C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803321A0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803321A4: jal         0x80034970
    // 0x803321A8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_9;
    // 0x803321A8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_9:
    // 0x803321AC: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x803321B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803321B4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803321B8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x803321BC: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803321C0: nop

    // 0x803321C4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803321C8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x803321CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803321D0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803321D4: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803321D8: lwc1        $f17, 0x5C10($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5C10);
    // 0x803321DC: lwc1        $f16, 0x5C14($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5C14);
    // 0x803321E0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803321E4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803321E8: jal         0x80036570
    // 0x803321EC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_10;
    // 0x803321EC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_10:
    // 0x803321F0: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x803321F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803321F8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803321FC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332200: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332204: nop

    // 0x80332208: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033220C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80332210: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332214: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80332218: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033221C: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80332220: nop

    // 0x80332224: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332228: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8033222C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332230: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332234: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332238: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033223C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332240: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80332244: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80332248: addiu       $a1, $a1, 0x5AF0
    ctx->r5 = ADD32(ctx->r5, 0X5AF0);
    // 0x8033224C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332250: jal         0x80027464
    // 0x80332254: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80332254: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x80332258: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033225C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332260: nop

    // 0x80332264: lbu         $t5, 0x132($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X132);
    // 0x80332268: nop

    // 0x8033226C: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80332270: sb          $t7, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r15;
    // 0x80332274: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80332278: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033227C: addiu       $a3, $a3, -0x5EC0
    ctx->r7 = ADD32(ctx->r7, -0X5EC0);
    // 0x80332280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332284: jal         0x8001ABF4
    // 0x80332288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x80332288: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x8033228C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332298: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    // 0x8033229C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803322A0: jal         0x800175F0
    // 0x803322A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_13;
    // 0x803322A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x803322A8: b           L_8033240C
    // 0x803322AC: nop

        goto L_8033240C;
    // 0x803322AC: nop

L_803322B0:
    // 0x803322B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322B8: jal         0x8001B62C
    // 0x803322BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_14;
    // 0x803322BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x803322C0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803322C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803322C8: nop

    // 0x803322CC: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x803322D0: nop

    // 0x803322D4: bc1f        L_8033240C
    if (!c1cs) {
        // 0x803322D8: nop
    
            goto L_8033240C;
    }
    // 0x803322D8: nop

    // 0x803322DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803322E0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803322E4: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803322E8: lwc1        $f5, 0x5C18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5C18);
    // 0x803322EC: lwc1        $f4, 0x5C1C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C1C);
    // 0x803322F0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803322F4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x803322F8: jal         0x80034970
    // 0x803322FC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_15;
    // 0x803322FC: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_15:
    // 0x80332300: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x80332304: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332308: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033230C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80332310: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80332314: nop

    // 0x80332318: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033231C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80332320: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332324: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80332328: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033232C: lwc1        $f9, 0x5C20($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5C20);
    // 0x80332330: lwc1        $f8, 0x5C24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5C24);
    // 0x80332334: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332338: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033233C: jal         0x80036570
    // 0x80332340: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_16;
    // 0x80332340: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_16:
    // 0x80332344: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x80332348: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033234C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332350: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80332354: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80332358: nop

    // 0x8033235C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332360: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80332364: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332368: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x8033236C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332370: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332374: nop

    // 0x80332378: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033237C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80332380: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332384: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332388: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033238C: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80332390: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332394: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80332398: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8033239C: addiu       $a1, $a1, 0x5AF0
    ctx->r5 = ADD32(ctx->r5, 0X5AF0);
    // 0x803323A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803323A4: jal         0x80027464
    // 0x803323A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_17;
    // 0x803323A8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_17:
    // 0x803323AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803323B0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803323B4: nop

    // 0x803323B8: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803323BC: nop

    // 0x803323C0: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x803323C4: sb          $t7, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r15;
    // 0x803323C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803323CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803323D0: addiu       $a3, $a3, -0x5EC0
    ctx->r7 = ADD32(ctx->r7, -0X5EC0);
    // 0x803323D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323D8: jal         0x8001ABF4
    // 0x803323DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_18;
    // 0x803323DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x803323E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803323E4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803323E8: nop

    // 0x803323EC: swc1        $f6, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->f6.u32l;
    // 0x803323F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323FC: addiu       $a2, $zero, 0x4B
    ctx->r6 = ADD32(0, 0X4B);
    // 0x80332400: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332404: jal         0x800175F0
    // 0x80332408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_19;
    // 0x80332408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
L_8033240C:
    // 0x8033240C: jal         0x80334770
    // 0x80332410: nop

    func_80334770_unk_bin_12(rdram, ctx);
        goto after_20;
    // 0x80332410: nop

    after_20:
    // 0x80332414: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332418: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033241C: lwc1        $f10, 0x5C28($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5C28);
    // 0x80332420: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80332424: nop

    // 0x80332428: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8033242C: nop

    // 0x80332430: bc1f        L_80332448
    if (!c1cs) {
        // 0x80332434: nop
    
            goto L_80332448;
    }
    // 0x80332434: nop

    // 0x80332438: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033243C: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x80332440: b           L_80332490
    // 0x80332444: sh          $t8, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r24;
        goto L_80332490;
    // 0x80332444: sh          $t8, 0xB8($t9)
    MEM_H(0XB8, ctx->r25) = ctx->r24;
L_80332448:
    // 0x80332448: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033244C: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x80332450: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332454: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332458: nop

    // 0x8033245C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80332460: nop

    // 0x80332464: bc1f        L_8033247C
    if (!c1cs) {
        // 0x80332468: nop
    
            goto L_8033247C;
    }
    // 0x80332468: nop

    // 0x8033246C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332470: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332474: b           L_80332490
    // 0x80332478: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
        goto L_80332490;
    // 0x80332478: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
L_8033247C:
    // 0x8033247C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80332480: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332484: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332488: nop

    // 0x8033248C: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
L_80332490:
    // 0x80332490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332498: jal         0x8001B4AC
    // 0x8033249C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_21;
    // 0x8033249C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x803324A0: beq         $v0, $zero, L_803324C0
    if (ctx->r2 == 0) {
        // 0x803324A4: nop
    
            goto L_803324C0;
    }
    // 0x803324A4: nop

    // 0x803324A8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803324AC: addiu       $t5, $zero, 0x13
    ctx->r13 = ADD32(0, 0X13);
    // 0x803324B0: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x803324B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803324B8: nop

    // 0x803324BC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803324C0:
    // 0x803324C0: b           L_803324C8
    // 0x803324C4: nop

        goto L_803324C8;
    // 0x803324C4: nop

L_803324C8:
    // 0x803324C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803324CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803324D0: jr          $ra
    // 0x803324D4: nop

    return;
    // 0x803324D4: nop

;}
RECOMP_FUNC void func_80330E8C_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330E90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330E94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330E9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330EA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330EA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330EAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330EB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330EB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330EBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330EC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330EC4: nop

    // 0x80330EC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330ECC: nop

    // 0x80330ED0: bne         $t1, $zero, L_80330F28
    if (ctx->r9 != 0) {
        // 0x80330ED4: nop
    
            goto L_80330F28;
    }
    // 0x80330ED4: nop

    // 0x80330ED8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330EDC: nop

    // 0x80330EE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330EE4: nop

    // 0x80330EE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330EEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330EF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330EF4: nop

    // 0x80330EF8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330EFC: nop

    // 0x80330F00: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330F04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F08: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330F0C: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80330F10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F1C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330F20: jal         0x8001C0EC
    // 0x80330F24: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330F24: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80330F28:
    // 0x80330F28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F30: jal         0x8002A8B4
    // 0x80330F34: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80330F34: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80330F38: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330F3C: nop

    // 0x80330F40: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330F44: nop

    // 0x80330F48: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F54: jal         0x8001B4AC
    // 0x80330F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330F5C: beq         $v0, $zero, L_80330F7C
    if (ctx->r2 == 0) {
        // 0x80330F60: nop
    
            goto L_80330F7C;
    }
    // 0x80330F60: nop

    // 0x80330F64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330F68: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x80330F6C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80330F70: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330F74: nop

    // 0x80330F78: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330F7C:
    // 0x80330F7C: b           L_80330F84
    // 0x80330F80: nop

        goto L_80330F84;
    // 0x80330F80: nop

L_80330F84:
    // 0x80330F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330F8C: jr          $ra
    // 0x80330F90: nop

    return;
    // 0x80330F90: nop

;}
RECOMP_FUNC void func_803331E4_unk_bin_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803331E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803331E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803331EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803331F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803331F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803331F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803331FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333200: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333208: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033320C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333210: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333214: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333218: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033321C: nop

    // 0x80333220: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333224: nop

    // 0x80333228: bne         $t1, $zero, L_80333280
    if (ctx->r9 != 0) {
        // 0x8033322C: nop
    
            goto L_80333280;
    }
    // 0x8033322C: nop

    // 0x80333230: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333234: nop

    // 0x80333238: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033323C: nop

    // 0x80333240: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333244: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333248: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033324C: nop

    // 0x80333250: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333254: nop

    // 0x80333258: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033325C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333260: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333264: addiu       $t7, $t7, -0x6020
    ctx->r15 = ADD32(ctx->r15, -0X6020);
    // 0x80333268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033326C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333274: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x80333278: jal         0x8001C0EC
    // 0x8033327C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033327C: addiu       $a3, $zero, 0xCD
    ctx->r7 = ADD32(0, 0XCD);
    after_0:
L_80333280:
    // 0x80333280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333288: jal         0x8001B4AC
    // 0x8033328C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033328C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333290: beq         $v0, $zero, L_803332C0
    if (ctx->r2 == 0) {
        // 0x80333294: nop
    
            goto L_803332C0;
    }
    // 0x80333294: nop

    // 0x80333298: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033329C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x803332A0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803332A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803332A8: nop

    // 0x803332AC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x803332B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803332B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803332B8: nop

    // 0x803332BC: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
L_803332C0:
    // 0x803332C0: b           L_803332C8
    // 0x803332C4: nop

        goto L_803332C8;
    // 0x803332C4: nop

L_803332C8:
    // 0x803332C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803332CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803332D0: jr          $ra
    // 0x803332D4: nop

    return;
    // 0x803332D4: nop

;}
