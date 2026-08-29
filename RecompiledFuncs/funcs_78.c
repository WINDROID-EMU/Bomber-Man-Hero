#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330CC8_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330CC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330CCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330CD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330CD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330CD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330CDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330CE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330CE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330CF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330CF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330CF8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80330CFC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330D00: nop

    // 0x80330D04: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330D08: nop

    // 0x80330D0C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80330D10: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330D14: nop

    // 0x80330D18: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330D1C: nop

    // 0x80330D20: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80330D24: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330D28: nop

    // 0x80330D2C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80330D30: nop

    // 0x80330D34: bne         $t5, $zero, L_80330DD0
    if (ctx->r13 != 0) {
        // 0x80330D38: nop
    
            goto L_80330DD0;
    }
    // 0x80330D38: nop

    // 0x80330D3C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330D40: nop

    // 0x80330D44: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330D48: nop

    // 0x80330D4C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330D50: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330D54: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330D58: nop

    // 0x80330D5C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80330D60: nop

    // 0x80330D64: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80330D68: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330D6C: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80330D70: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D74: addiu       $a3, $a3, 0xE0
    ctx->r7 = ADD32(ctx->r7, 0XE0);
    // 0x80330D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D7C: jal         0x8001ABF4
    // 0x80330D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80330D80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80330D84: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330D88: nop

    // 0x80330D8C: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
    // 0x80330D90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330D94: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330D98: nop

    // 0x80330D9C: swc1        $f4, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f4.u32l;
    // 0x80330DA0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330DA4: nop

    // 0x80330DA8: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
    // 0x80330DAC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330DB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330DB4: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80330DB8: nop

    // 0x80330DBC: bne         $t5, $at, L_80330DD0
    if (ctx->r13 != ctx->r1) {
        // 0x80330DC0: nop
    
            goto L_80330DD0;
    }
    // 0x80330DC0: nop

    // 0x80330DC4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330DC8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330DCC: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_80330DD0:
    // 0x80330DD0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330DD4: nop

    // 0x80330DD8: lh          $t0, 0xAA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XAA);
    // 0x80330DDC: nop

    // 0x80330DE0: bne         $t0, $zero, L_80330E28
    if (ctx->r8 != 0) {
        // 0x80330DE4: nop
    
            goto L_80330E28;
    }
    // 0x80330DE4: nop

    // 0x80330DE8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330DEC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330DF0: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330DF4: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80330DF8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330DFC: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330E00: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80330E04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330E08: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    // 0x80330E0C: jal         0x80027464
    // 0x80330E10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80330E10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80330E14: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330E18: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330E1C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80330E20: b           L_80330E40
    // 0x80330E24: sh          $t1, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r9;
        goto L_80330E40;
    // 0x80330E24: sh          $t1, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r9;
L_80330E28:
    // 0x80330E28: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80330E2C: nop

    // 0x80330E30: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80330E34: nop

    // 0x80330E38: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80330E3C: sh          $t5, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r13;
L_80330E40:
    // 0x80330E40: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330E44: nop

    // 0x80330E48: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80330E4C: nop

    // 0x80330E50: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x80330E54: beq         $at, $zero, L_80330E80
    if (ctx->r1 == 0) {
        // 0x80330E58: nop
    
            goto L_80330E80;
    }
    // 0x80330E58: nop

    // 0x80330E5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E64: jal         0x8002A8B4
    // 0x80330E68: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80330E68: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x80330E6C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330E70: nop

    // 0x80330E74: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80330E78: nop

    // 0x80330E7C: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
L_80330E80:
    // 0x80330E80: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330E84: nop

    // 0x80330E88: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330E8C: lwc1        $f14, 0xD4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80330E90: jal         0x80015538
    // 0x80330E94: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80330E94: nop

    after_3:
    // 0x80330E98: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330E9C: nop

    // 0x80330EA0: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80330EA4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330EA8: nop

    // 0x80330EAC: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80330EB0: nop

    // 0x80330EB4: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
    // 0x80330EB8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330EBC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80330EC0: lh          $t4, 0xA8($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA8);
    // 0x80330EC4: nop

    // 0x80330EC8: bne         $t4, $at, L_80330F68
    if (ctx->r12 != ctx->r1) {
        // 0x80330ECC: nop
    
            goto L_80330F68;
    }
    // 0x80330ECC: nop

    // 0x80330ED0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330ED4: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80330ED8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330EDC: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330EE0: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80330EE4: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x80330EE8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330EEC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80330EF0: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80330EF4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330EF8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330EFC: addiu       $a1, $a1, 0x4B00
    ctx->r5 = ADD32(ctx->r5, 0X4B00);
    // 0x80330F00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330F04: jal         0x80027464
    // 0x80330F08: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80330F08: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80330F0C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80330F10: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80330F14: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80330F18: nop

    // 0x80330F1C: sh          $t3, 0xC2($t7)
    MEM_H(0XC2, ctx->r15) = ctx->r11;
    // 0x80330F20: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80330F24: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330F28: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80330F2C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330F30: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330F34: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330F38: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80330F3C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330F40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F44: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330F48: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x80330F4C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80330F50: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80330F54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330F58: jal         0x80026F10
    // 0x80330F5C: nop

    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x80330F5C: nop

    after_5:
    // 0x80330F60: b           L_803310CC
    // 0x80330F64: nop

        goto L_803310CC;
    // 0x80330F64: nop

L_80330F68:
    // 0x80330F68: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80330F6C: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80330F70: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x80330F74: nop

    // 0x80330F78: bne         $t1, $at, L_80330FFC
    if (ctx->r9 != ctx->r1) {
        // 0x80330F7C: nop
    
            goto L_80330FFC;
    }
    // 0x80330F7C: nop

    // 0x80330F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F88: jal         0x8002A46C
    // 0x80330F8C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_6;
    // 0x80330F8C: nop

    after_6:
    // 0x80330F90: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330F94: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80330F98: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330F9C: lwc1        $f14, 0x1C($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80330FA0: jal         0x80015538
    // 0x80330FA4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80330FA4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x80330FA8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80330FAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330FB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330FB4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330FB8: nop

    // 0x80330FBC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80330FC0: nop

    // 0x80330FC4: bc1f        L_80330FE0
    if (!c1cs) {
        // 0x80330FC8: nop
    
            goto L_80330FE0;
    }
    // 0x80330FC8: nop

    // 0x80330FCC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80330FD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330FD4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330FD8: b           L_80330FF4
    // 0x80330FDC: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
        goto L_80330FF4;
    // 0x80330FDC: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
L_80330FE0:
    // 0x80330FE0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80330FE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330FE8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80330FEC: nop

    // 0x80330FF0: swc1        $f6, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f6.u32l;
L_80330FF4:
    // 0x80330FF4: b           L_803310CC
    // 0x80330FF8: nop

        goto L_803310CC;
    // 0x80330FF8: nop

L_80330FFC:
    // 0x80330FFC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331000: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80331004: lh          $t7, 0xA8($t3)
    ctx->r15 = MEM_H(ctx->r11, 0XA8);
    // 0x80331008: nop

    // 0x8033100C: bne         $t7, $at, L_8033109C
    if (ctx->r15 != ctx->r1) {
        // 0x80331010: nop
    
            goto L_8033109C;
    }
    // 0x80331010: nop

    // 0x80331014: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331018: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033101C: nop

    // 0x80331020: swc1        $f8, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f8.u32l;
    // 0x80331024: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331028: nop

    // 0x8033102C: lh          $t0, 0xC2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC2);
    // 0x80331030: nop

    // 0x80331034: beq         $t0, $zero, L_80331094
    if (ctx->r8 == 0) {
        // 0x80331038: nop
    
            goto L_80331094;
    }
    // 0x80331038: nop

    // 0x8033103C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331040: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331044: lh          $t2, 0xC2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC2);
    // 0x80331048: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8033104C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80331050: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80331054: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331058: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033105C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331060: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331064: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80331068: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033106C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331070: lh          $t3, 0xC2($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XC2);
    // 0x80331074: nop

    // 0x80331078: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8033107C: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80331080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331084: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x80331088: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033108C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331090: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331094:
    // 0x80331094: b           L_803310CC
    // 0x80331098: nop

        goto L_803310CC;
    // 0x80331098: nop

L_8033109C:
    // 0x8033109C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803310A0: addiu       $at, $zero, 0x9E
    ctx->r1 = ADD32(0, 0X9E);
    // 0x803310A4: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x803310A8: nop

    // 0x803310AC: bne         $t8, $at, L_803310CC
    if (ctx->r24 != ctx->r1) {
        // 0x803310B0: nop
    
            goto L_803310CC;
    }
    // 0x803310B0: nop

    // 0x803310B4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803310B8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x803310BC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803310C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803310C4: nop

    // 0x803310C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803310CC:
    // 0x803310CC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803310D0: nop

    // 0x803310D4: lh          $t4, 0xA8($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XA8);
    // 0x803310D8: nop

    // 0x803310DC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x803310E0: sh          $t5, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r13;
    // 0x803310E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310EC: jal         0x803332F8
    // 0x803310F0: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_8;
    // 0x803310F0: nop

    after_8:
    // 0x803310F4: b           L_803310FC
    // 0x803310F8: nop

        goto L_803310FC;
    // 0x803310F8: nop

L_803310FC:
    // 0x803310FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80331104: jr          $ra
    // 0x80331108: nop

    return;
    // 0x80331108: nop

;}
RECOMP_FUNC void func_8033166C_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033166C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80331670: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331674: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331678: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033167C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331680: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331684: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331688: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033168C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331690: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331694: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331698: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033169C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x803316A0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803316A4: nop

    // 0x803316A8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803316AC: nop

    // 0x803316B0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x803316B4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803316B8: nop

    // 0x803316BC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803316C0: nop

    // 0x803316C4: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x803316C8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803316CC: nop

    // 0x803316D0: lh          $t5, 0xB4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB4);
    // 0x803316D4: nop

    // 0x803316D8: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x803316DC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803316E0: nop

    // 0x803316E4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803316E8: nop

    // 0x803316EC: bne         $t7, $zero, L_80331778
    if (ctx->r15 != 0) {
        // 0x803316F0: nop
    
            goto L_80331778;
    }
    // 0x803316F0: nop

    // 0x803316F4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803316F8: nop

    // 0x803316FC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80331700: nop

    // 0x80331704: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80331708: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8033170C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331710: nop

    // 0x80331714: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x80331718: nop

    // 0x8033171C: sh          $t2, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r10;
    // 0x80331720: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331724: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331728: addiu       $t3, $t3, -0x57BC
    ctx->r11 = ADD32(ctx->r11, -0X57BC);
    // 0x8033172C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331730: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331734: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331738: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8033173C: jal         0x8001C0EC
    // 0x80331740: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331740: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80331744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033174C: jal         0x8001BBDC
    // 0x80331750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80331750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331754: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80331758: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033175C: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80331760: nop

    // 0x80331764: bne         $t5, $at, L_80331778
    if (ctx->r13 != ctx->r1) {
        // 0x80331768: nop
    
            goto L_80331778;
    }
    // 0x80331768: nop

    // 0x8033176C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331770: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80331774: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
L_80331778:
    // 0x80331778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033177C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331780: jal         0x8001B62C
    // 0x80331784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80331784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331788: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x8033178C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331790: nop

    // 0x80331794: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80331798: nop

    // 0x8033179C: bc1f        L_80332138
    if (!c1cs) {
        // 0x803317A0: nop
    
            goto L_80332138;
    }
    // 0x803317A0: nop

    // 0x803317A4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803317A8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803317AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803317B0: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803317B4: jal         0x80015538
    // 0x803317B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803317B8: nop

    after_3:
    // 0x803317BC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803317C0: nop

    // 0x803317C4: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x803317C8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803317CC: nop

    // 0x803317D0: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803317D4: nop

    // 0x803317D8: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x803317DC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803317E0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803317E4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803317E8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803317EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803317F0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803317F4: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803317F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803317FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331800: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331804: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80331808: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033180C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80331810: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80331814: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331818: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033181C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80331820: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80331824: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331828: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033182C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331830: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80331834: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80331838: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033183C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331840: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331844: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331848: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033184C: lwc1        $f16, 0x1C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331850: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331854: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331858: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033185C: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x80331860: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331864: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331868: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8033186C: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80331870: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331874: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80331878: lwc1        $f18, 0x1C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033187C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331880: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331884: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331888: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x8033188C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331890: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331894: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80331898: nop

    // 0x8033189C: bne         $t4, $at, L_803318DC
    if (ctx->r12 != ctx->r1) {
        // 0x803318A0: nop
    
            goto L_803318DC;
    }
    // 0x803318A0: nop

    // 0x803318A4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803318A8: nop

    // 0x803318AC: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x803318B0: nop

    // 0x803318B4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803318B8: sb          $t7, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r15;
    // 0x803318BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803318C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803318C4: jal         0x8001BBDC
    // 0x803318C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803318C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x803318CC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803318D0: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x803318D4: b           L_80332138
    // 0x803318D8: sh          $t9, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r25;
        goto L_80332138;
    // 0x803318D8: sh          $t9, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r25;
L_803318DC:
    // 0x803318DC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803318E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803318E4: lbu         $t2, 0x132($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X132);
    // 0x803318E8: nop

    // 0x803318EC: bne         $t2, $at, L_80331B30
    if (ctx->r10 != ctx->r1) {
        // 0x803318F0: nop
    
            goto L_80331B30;
    }
    // 0x803318F0: nop

    // 0x803318F4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803318F8: nop

    // 0x803318FC: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x80331900: nop

    // 0x80331904: bne         $t3, $zero, L_80331B10
    if (ctx->r11 != 0) {
        // 0x80331908: nop
    
            goto L_80331B10;
    }
    // 0x80331908: nop

    // 0x8033190C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80331910: nop

    // 0x80331914: lbu         $t6, 0x132($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X132);
    // 0x80331918: nop

    // 0x8033191C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80331920: sb          $t7, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r15;
    // 0x80331924: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331928: lwc1        $f12, 0x4B9C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4B9C);
    // 0x8033192C: jal         0x800366E0
    // 0x80331930: nop

    sqrtf_recomp(rdram, ctx);
        goto after_5;
    // 0x80331930: nop

    after_5:
    // 0x80331934: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80331938: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033193C: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x80331940: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331944: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80331948: jal         0x80015538
    // 0x8033194C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8033194C: nop

    after_6:
    // 0x80331950: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80331954: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331958: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033195C: lwc1        $f9, 0x4BA0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4BA0);
    // 0x80331960: lwc1        $f8, 0x4BA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4BA4);
    // 0x80331964: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331968: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033196C: jal         0x80034970
    // 0x80331970: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_7;
    // 0x80331970: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_7:
    // 0x80331974: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331978: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033197C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331980: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80331984: nop

    // 0x80331988: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033198C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80331990: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331994: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331998: lwc1        $f17, 0x4BA8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4BA8);
    // 0x8033199C: lwc1        $f16, 0x4BAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BAC);
    // 0x803319A0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803319A4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803319A8: jal         0x80036570
    // 0x803319AC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_8;
    // 0x803319AC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_8:
    // 0x803319B0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803319B4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803319B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803319BC: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803319C0: nop

    // 0x803319C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803319C8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x803319CC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803319D0: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x803319D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803319D8: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803319DC: nop

    // 0x803319E0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803319E4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x803319E8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803319EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803319F0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803319F4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803319F8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803319FC: addiu       $a1, $a1, 0x4B0C
    ctx->r5 = ADD32(ctx->r5, 0X4B0C);
    // 0x80331A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331A04: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331A08: jal         0x80027464
    // 0x80331A0C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x80331A0C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80331A10: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331A14: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80331A18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331A20: jal         0x80019448
    // 0x80331A24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_10;
    // 0x80331A24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x80331A28: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331A2C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80331A30: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331A34: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331A38: jal         0x80015538
    // 0x80331A3C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80331A3C: nop

    after_11:
    // 0x80331A40: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A48: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331A4C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331A50: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331A54: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331A58: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331A5C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331A60: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80331A64: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331A68: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80331A6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A80: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80331A84: addu        $t5, $t7, $t4
    ctx->r13 = ADD32(ctx->r15, ctx->r12);
    // 0x80331A88: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80331A8C: nop

    // 0x80331A90: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x80331A94: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331A98: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331A9C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331AA0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331AA4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331AA8: lwc1        $f16, 0x4BB0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BB0);
    // 0x80331AAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331AB0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331AB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331AB8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331ABC: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x80331AC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331AC4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331AC8: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x80331ACC: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80331AD0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331AD4: lwc1        $f18, 0x4BB4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4BB4);
    // 0x80331AD8: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80331ADC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331AE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331AE4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331AE8: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80331AEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AF8: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80331AFC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331B00: jal         0x800175F0
    // 0x80331B04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x80331B04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80331B08: b           L_80331B28
    // 0x80331B0C: nop

        goto L_80331B28;
    // 0x80331B0C: nop

L_80331B10:
    // 0x80331B10: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331B14: nop

    // 0x80331B18: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x80331B1C: nop

    // 0x80331B20: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x80331B24: sh          $t6, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r14;
L_80331B28:
    // 0x80331B28: b           L_80332138
    // 0x80331B2C: nop

        goto L_80332138;
    // 0x80331B2C: nop

L_80331B30:
    // 0x80331B30: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331B34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331B38: lbu         $t4, 0x132($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X132);
    // 0x80331B3C: nop

    // 0x80331B40: bne         $t4, $at, L_80331D2C
    if (ctx->r12 != ctx->r1) {
        // 0x80331B44: nop
    
            goto L_80331D2C;
    }
    // 0x80331B44: nop

    // 0x80331B48: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331B4C: nop

    // 0x80331B50: lbu         $t9, 0x132($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X132);
    // 0x80331B54: nop

    // 0x80331B58: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80331B5C: sb          $t0, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r8;
    // 0x80331B60: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B64: lwc1        $f12, 0x4BB8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4BB8);
    // 0x80331B68: jal         0x800366E0
    // 0x80331B6C: nop

    sqrtf_recomp(rdram, ctx);
        goto after_13;
    // 0x80331B6C: nop

    after_13:
    // 0x80331B70: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80331B74: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331B78: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B7C: lwc1        $f14, 0x4BBC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BBC);
    // 0x80331B80: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331B84: jal         0x80015538
    // 0x80331B88: nop

    Math_WrapAngle(rdram, ctx);
        goto after_14;
    // 0x80331B88: nop

    after_14:
    // 0x80331B8C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80331B90: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331B94: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331B98: lwc1        $f9, 0x4BC0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4BC0);
    // 0x80331B9C: lwc1        $f8, 0x4BC4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4BC4);
    // 0x80331BA0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331BA4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80331BA8: jal         0x80034970
    // 0x80331BAC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_15;
    // 0x80331BAC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_15:
    // 0x80331BB0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331BB4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331BB8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331BBC: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80331BC0: nop

    // 0x80331BC4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331BC8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80331BCC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331BD0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331BD4: lwc1        $f17, 0x4BC8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4BC8);
    // 0x80331BD8: lwc1        $f16, 0x4BCC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BCC);
    // 0x80331BDC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331BE0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331BE4: jal         0x80036570
    // 0x80331BE8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_16;
    // 0x80331BE8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_16:
    // 0x80331BEC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331BF0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331BF4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331BF8: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331BFC: nop

    // 0x80331C00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331C04: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80331C08: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331C0C: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80331C10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331C14: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331C18: nop

    // 0x80331C1C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331C20: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80331C24: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331C28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331C2C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331C30: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C34: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80331C38: addiu       $a1, $a1, 0x4B0C
    ctx->r5 = ADD32(ctx->r5, 0X4B0C);
    // 0x80331C3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331C40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331C44: jal         0x80027464
    // 0x80331C48: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_17;
    // 0x80331C48: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x80331C4C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331C50: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80331C54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331C5C: jal         0x80019448
    // 0x80331C60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_18;
    // 0x80331C60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x80331C64: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331C68: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x80331C6C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331C70: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80331C74: jal         0x80015538
    // 0x80331C78: nop

    Math_WrapAngle(rdram, ctx);
        goto after_19;
    // 0x80331C78: nop

    after_19:
    // 0x80331C7C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331C80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C84: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80331C88: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80331C8C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C90: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80331C94: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C98: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331C9C: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80331CA0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331CA4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331CA8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331CAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331CB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331CB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331CB8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331CBC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331CC0: addu        $t8, $t0, $t5
    ctx->r24 = ADD32(ctx->r8, ctx->r13);
    // 0x80331CC4: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331CC8: nop

    // 0x80331CCC: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x80331CD0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331CD4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331CD8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331CDC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331CE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331CE4: lwc1        $f16, 0x4BD0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BD0);
    // 0x80331CE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331CEC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331CF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CF4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331CF8: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x80331CFC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331D00: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D04: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80331D08: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80331D0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331D10: lwc1        $f18, 0x4BD4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4BD4);
    // 0x80331D14: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80331D18: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331D1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331D20: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331D24: b           L_80332138
    // 0x80331D28: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
        goto L_80332138;
    // 0x80331D28: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
L_80331D2C:
    // 0x80331D2C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331D30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80331D34: lbu         $t4, 0x132($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X132);
    // 0x80331D38: nop

    // 0x80331D3C: bne         $t4, $at, L_80331F28
    if (ctx->r12 != ctx->r1) {
        // 0x80331D40: nop
    
            goto L_80331F28;
    }
    // 0x80331D40: nop

    // 0x80331D44: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80331D48: nop

    // 0x80331D4C: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x80331D50: nop

    // 0x80331D54: addiu       $t5, $t0, 0x1
    ctx->r13 = ADD32(ctx->r8, 0X1);
    // 0x80331D58: sb          $t5, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r13;
    // 0x80331D5C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D60: lwc1        $f12, 0x4BD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4BD8);
    // 0x80331D64: jal         0x800366E0
    // 0x80331D68: nop

    sqrtf_recomp(rdram, ctx);
        goto after_20;
    // 0x80331D68: nop

    after_20:
    // 0x80331D6C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80331D70: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331D74: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x80331D78: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331D7C: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331D80: jal         0x80015538
    // 0x80331D84: nop

    Math_WrapAngle(rdram, ctx);
        goto after_21;
    // 0x80331D84: nop

    after_21:
    // 0x80331D88: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80331D8C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331D90: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331D94: lwc1        $f9, 0x4BE0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4BE0);
    // 0x80331D98: lwc1        $f8, 0x4BE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4BE4);
    // 0x80331D9C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331DA0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80331DA4: jal         0x80034970
    // 0x80331DA8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_22;
    // 0x80331DA8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_22:
    // 0x80331DAC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331DB0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331DB4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331DB8: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80331DBC: nop

    // 0x80331DC0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331DC4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80331DC8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331DCC: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331DD0: lwc1        $f17, 0x4BE8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4BE8);
    // 0x80331DD4: lwc1        $f16, 0x4BEC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BEC);
    // 0x80331DD8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331DDC: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331DE0: jal         0x80036570
    // 0x80331DE4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_23;
    // 0x80331DE4: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_23:
    // 0x80331DE8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331DEC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331DF0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331DF4: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331DF8: nop

    // 0x80331DFC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331E00: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80331E04: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331E08: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80331E0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331E10: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331E14: nop

    // 0x80331E18: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80331E1C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80331E20: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80331E24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331E28: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331E2C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E30: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80331E34: addiu       $a1, $a1, 0x4B0C
    ctx->r5 = ADD32(ctx->r5, 0X4B0C);
    // 0x80331E38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331E3C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331E40: jal         0x80027464
    // 0x80331E44: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_24;
    // 0x80331E44: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_24:
    // 0x80331E48: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80331E4C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80331E50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331E54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E58: jal         0x80019448
    // 0x80331E5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_25;
    // 0x80331E5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x80331E60: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331E64: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80331E68: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331E6C: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80331E70: jal         0x80015538
    // 0x80331E74: nop

    Math_WrapAngle(rdram, ctx);
        goto after_26;
    // 0x80331E74: nop

    after_26:
    // 0x80331E78: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331E7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E80: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80331E84: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80331E88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331E8C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80331E90: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331E94: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331E98: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80331E9C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331EA0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331EA4: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80331EA8: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x80331EAC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331EB0: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x80331EB4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331EB8: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331EBC: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x80331EC0: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331EC4: nop

    // 0x80331EC8: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x80331ECC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331ED0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331ED4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331ED8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331EDC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331EE0: lwc1        $f16, 0x4BF0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4BF0);
    // 0x80331EE4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331EE8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331EEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331EF0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331EF4: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x80331EF8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331EFC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331F00: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80331F04: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80331F08: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331F0C: lwc1        $f18, 0x4BF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4BF4);
    // 0x80331F10: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80331F14: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331F18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F1C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331F20: b           L_80332138
    // 0x80331F24: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
        goto L_80332138;
    // 0x80331F24: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
L_80331F28:
    // 0x80331F28: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80331F2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80331F30: lbu         $t4, 0x132($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X132);
    // 0x80331F34: nop

    // 0x80331F38: bne         $t4, $at, L_80332138
    if (ctx->r12 != ctx->r1) {
        // 0x80331F3C: nop
    
            goto L_80332138;
    }
    // 0x80331F3C: nop

    // 0x80331F40: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331F44: nop

    // 0x80331F48: lbu         $t5, 0x132($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F4C: nop

    // 0x80331F50: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x80331F54: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
    // 0x80331F58: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331F5C: lwc1        $f12, 0x4BF8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4BF8);
    // 0x80331F60: jal         0x800366E0
    // 0x80331F64: nop

    sqrtf_recomp(rdram, ctx);
        goto after_27;
    // 0x80331F64: nop

    after_27:
    // 0x80331F68: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80331F6C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331F70: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331F74: lwc1        $f14, 0x4BFC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X4BFC);
    // 0x80331F78: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331F7C: jal         0x80015538
    // 0x80331F80: nop

    Math_WrapAngle(rdram, ctx);
        goto after_28;
    // 0x80331F80: nop

    after_28:
    // 0x80331F84: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80331F88: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331F8C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331F90: lwc1        $f9, 0x4C00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4C00);
    // 0x80331F94: lwc1        $f8, 0x4C04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4C04);
    // 0x80331F98: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331F9C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80331FA0: jal         0x80034970
    // 0x80331FA4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_29;
    // 0x80331FA4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_29:
    // 0x80331FA8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331FAC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331FB0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80331FB4: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80331FB8: nop

    // 0x80331FBC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331FC0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80331FC4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331FC8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331FCC: lwc1        $f17, 0x4C08($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4C08);
    // 0x80331FD0: lwc1        $f16, 0x4C0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4C0C);
    // 0x80331FD4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331FD8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80331FDC: jal         0x80036570
    // 0x80331FE0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_30;
    // 0x80331FE0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_30:
    // 0x80331FE4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80331FE8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331FEC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80331FF0: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80331FF4: nop

    // 0x80331FF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331FFC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80332000: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80332004: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80332008: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033200C: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80332010: nop

    // 0x80332014: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80332018: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8033201C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332020: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332024: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332028: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8033202C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80332030: addiu       $a1, $a1, 0x4B0C
    ctx->r5 = ADD32(ctx->r5, 0X4B0C);
    // 0x80332034: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332038: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033203C: jal         0x80027464
    // 0x80332040: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_31;
    // 0x80332040: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_31:
    // 0x80332044: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80332048: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8033204C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80332050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332054: jal         0x80019448
    // 0x80332058: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_32;
    // 0x80332058: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_32:
    // 0x8033205C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80332060: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x80332064: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332068: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033206C: jal         0x80015538
    // 0x80332070: nop

    Math_WrapAngle(rdram, ctx);
        goto after_33;
    // 0x80332070: nop

    after_33:
    // 0x80332074: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332078: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033207C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80332080: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80332084: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332088: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x8033208C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332090: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332094: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80332098: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033209C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803320A0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x803320A4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x803320A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803320AC: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x803320B0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803320B4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803320B8: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x803320BC: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803320C0: nop

    // 0x803320C4: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x803320C8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803320CC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803320D0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803320D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803320D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803320DC: lwc1        $f16, 0x4C10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4C10);
    // 0x803320E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803320E4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803320E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803320EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803320F0: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x803320F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803320F8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803320FC: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x80332100: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80332104: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332108: lwc1        $f18, 0x4C14($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4C14);
    // 0x8033210C: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x80332110: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332114: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332118: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033211C: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80332120: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80332124: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80332128: sh          $t7, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r15;
    // 0x8033212C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80332130: nop

    // 0x80332134: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332138:
    // 0x80332138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033213C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332140: jal         0x803332F8
    // 0x80332144: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_34;
    // 0x80332144: nop

    after_34:
    // 0x80332148: b           L_80332150
    // 0x8033214C: nop

        goto L_80332150;
    // 0x8033214C: nop

L_80332150:
    // 0x80332150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332154: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80332158: jr          $ra
    // 0x8033215C: nop

    return;
    // 0x8033215C: nop

;}
RECOMP_FUNC void func_8033396C_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033396C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333974: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333978: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033397C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333980: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333984: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333988: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033398C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333990: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333994: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333998: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033399C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803339A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803339A4: nop

    // 0x803339A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803339AC: nop

    // 0x803339B0: bne         $t1, $zero, L_80333A08
    if (ctx->r9 != 0) {
        // 0x803339B4: nop
    
            goto L_80333A08;
    }
    // 0x803339B4: nop

    // 0x803339B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803339BC: nop

    // 0x803339C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803339C4: nop

    // 0x803339C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803339CC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803339D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803339D4: nop

    // 0x803339D8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803339DC: nop

    // 0x803339E0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803339E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803339E8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803339EC: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x803339F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803339F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803339F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803339FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80333A00: jal         0x8001C0EC
    // 0x80333A04: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333A04: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
L_80333A08:
    // 0x80333A08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333A0C: nop

    // 0x80333A10: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80333A14: nop

    // 0x80333A18: bne         $t9, $zero, L_80333A50
    if (ctx->r25 != 0) {
        // 0x80333A1C: nop
    
            goto L_80333A50;
    }
    // 0x80333A1C: nop

    // 0x80333A20: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333A24: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80333A28: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x80333A2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333A38: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80333A3C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333A40: jal         0x800175F0
    // 0x80333A44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80333A44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80333A48: b           L_80333A68
    // 0x80333A4C: nop

        goto L_80333A68;
    // 0x80333A4C: nop

L_80333A50:
    // 0x80333A50: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333A54: nop

    // 0x80333A58: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80333A5C: nop

    // 0x80333A60: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80333A64: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_80333A68:
    // 0x80333A68: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333A6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A70: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x80333A74: nop

    // 0x80333A78: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333A7C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333A80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A84: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333A88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A8C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333A90: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333A94: nop

    // 0x80333A98: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80333A9C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333AA0: nop

    // 0x80333AA4: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333AA8: nop

    // 0x80333AAC: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80333AB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AB8: jal         0x8001B4AC
    // 0x80333ABC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333ABC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80333AC0: beq         $v0, $zero, L_80333AE0
    if (ctx->r2 == 0) {
        // 0x80333AC4: nop
    
            goto L_80333AE0;
    }
    // 0x80333AC4: nop

    // 0x80333AC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333ACC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80333AD0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80333AD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333AD8: nop

    // 0x80333ADC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333AE0:
    // 0x80333AE0: b           L_80333AE8
    // 0x80333AE4: nop

        goto L_80333AE8;
    // 0x80333AE4: nop

L_80333AE8:
    // 0x80333AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333AEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333AF0: jr          $ra
    // 0x80333AF4: nop

    return;
    // 0x80333AF4: nop

;}
RECOMP_FUNC void func_80334234_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334234: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80334238: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033423C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80334240: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80334244: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334248: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033424C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334250: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334254: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334258: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033425C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334260: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334264: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334268: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033426C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334270: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334274: nop

    // 0x80334278: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033427C: nop

    // 0x80334280: bne         $t1, $zero, L_8033430C
    if (ctx->r9 != 0) {
        // 0x80334284: nop
    
            goto L_8033430C;
    }
    // 0x80334284: nop

    // 0x80334288: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033428C: nop

    // 0x80334290: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334294: nop

    // 0x80334298: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033429C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803342A0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803342A4: nop

    // 0x803342A8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803342AC: nop

    // 0x803342B0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803342B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342B8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803342BC: addiu       $t7, $t7, -0x576C
    ctx->r15 = ADD32(ctx->r15, -0X576C);
    // 0x803342C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803342C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803342CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803342D0: jal         0x8001C0EC
    // 0x803342D4: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803342D4: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    after_0:
    // 0x803342D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x803342DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803342E0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803342E4: nop

    // 0x803342E8: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x803342EC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803342F0: nop

    // 0x803342F4: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803342F8: nop

    // 0x803342FC: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80334300: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334304: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x80334308: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_8033430C:
    // 0x8033430C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334314: jal         0x80028FA0
    // 0x80334318: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80334318: nop

    after_1:
    // 0x8033431C: beq         $v0, $zero, L_8033433C
    if (ctx->r2 == 0) {
        // 0x80334320: nop
    
            goto L_8033433C;
    }
    // 0x80334320: nop

    // 0x80334324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334328: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033432C: jal         0x8002B0E4
    // 0x80334330: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x80334330: nop

    after_2:
    // 0x80334334: b           L_8033447C
    // 0x80334338: nop

        goto L_8033447C;
    // 0x80334338: nop

L_8033433C:
    // 0x8033433C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80334340: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80334344: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80334348: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x8033434C: jal         0x80015538
    // 0x80334350: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80334350: nop

    after_3:
    // 0x80334354: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334358: nop

    // 0x8033435C: swc1        $f0, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f0.u32l;
    // 0x80334360: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334364: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334368: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033436C: lwc1        $f8, 0x40($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80334370: nop

    // 0x80334374: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80334378: nop

    // 0x8033437C: bc1t        L_803343A0
    if (c1cs) {
        // 0x80334380: nop
    
            goto L_803343A0;
    }
    // 0x80334380: nop

    // 0x80334384: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334388: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033438C: nop

    // 0x80334390: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80334394: nop

    // 0x80334398: bc1f        L_803343C4
    if (!c1cs) {
        // 0x8033439C: nop
    
            goto L_803343C4;
    }
    // 0x8033439C: nop

L_803343A0:
    // 0x803343A0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803343A4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x803343A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803343AC: lwc1        $f12, 0x18($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X18);
    // 0x803343B0: jal         0x80015538
    // 0x803343B4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803343B4: nop

    after_4:
    // 0x803343B8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803343BC: b           L_803343EC
    // 0x803343C0: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
        goto L_803343EC;
    // 0x803343C0: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
L_803343C4:
    // 0x803343C4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803343C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803343CC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803343D0: nop

    // 0x803343D4: swc1        $f18, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f18.u32l;
    // 0x803343D8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803343DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803343E0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803343E4: nop

    // 0x803343E8: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
L_803343EC:
    // 0x803343EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343F4: jal         0x80029D8C
    // 0x803343F8: nop

    func_80029D8C(rdram, ctx);
        goto after_5;
    // 0x803343F8: nop

    after_5:
    // 0x803343FC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334400: nop

    // 0x80334404: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80334408: nop

    // 0x8033440C: bne         $t0, $zero, L_8033445C
    if (ctx->r8 != 0) {
        // 0x80334410: nop
    
            goto L_8033445C;
    }
    // 0x80334410: nop

    // 0x80334414: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80334418: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033441C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80334420: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334424: nop

    // 0x80334428: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8033442C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80334430: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334434: nop

    // 0x80334438: swc1        $f6, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f6.u32l;
    // 0x8033443C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334440: nop

    // 0x80334444: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80334448: nop

    // 0x8033444C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80334450: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80334454: b           L_80334474
    // 0x80334458: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
        goto L_80334474;
    // 0x80334458: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
L_8033445C:
    // 0x8033445C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80334460: nop

    // 0x80334464: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80334468: nop

    // 0x8033446C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80334470: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_80334474:
    // 0x80334474: b           L_8033447C
    // 0x80334478: nop

        goto L_8033447C;
    // 0x80334478: nop

L_8033447C:
    // 0x8033447C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334480: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80334484: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80334488: jr          $ra
    // 0x8033448C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033448C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80330000_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x4B68
    ctx->r5 = ADD32(ctx->r5, 0X4B68);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
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
    // 0x80330064: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330068: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8033006C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330070: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330074: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330078: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033007C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330080: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80330084: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x80330088: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033008C: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80330090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330094: jal         0x8001ABF4
    // 0x80330098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033009C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803300A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803300A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803300B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803300B8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803300BC: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x803300C0: b           L_803300C8
    // 0x803300C4: nop

        goto L_803300C8;
    // 0x803300C4: nop

L_803300C8:
    // 0x803300C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803300D0: jr          $ra
    // 0x803300D4: nop

    return;
    // 0x803300D4: nop

;}
RECOMP_FUNC void func_80333540_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333548: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033354C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333550: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333554: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033355C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333564: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333568: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033356C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333570: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333574: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333578: nop

    // 0x8033357C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333580: nop

    // 0x80333584: bne         $t1, $zero, L_803335DC
    if (ctx->r9 != 0) {
        // 0x80333588: nop
    
            goto L_803335DC;
    }
    // 0x80333588: nop

    // 0x8033358C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333590: nop

    // 0x80333594: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333598: nop

    // 0x8033359C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803335A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803335A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803335A8: nop

    // 0x803335AC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803335B0: nop

    // 0x803335B4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803335B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803335C0: addiu       $t7, $t7, -0x52DC
    ctx->r15 = ADD32(ctx->r15, -0X52DC);
    // 0x803335C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803335CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803335D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803335D4: jal         0x8001C0EC
    // 0x803335D8: addiu       $a3, $zero, 0x15F
    ctx->r7 = ADD32(0, 0X15F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803335D8: addiu       $a3, $zero, 0x15F
    ctx->r7 = ADD32(0, 0X15F);
    after_0:
L_803335DC:
    // 0x803335DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335E4: jal         0x8001B4AC
    // 0x803335E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803335E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803335EC: beq         $v0, $zero, L_80333604
    if (ctx->r2 == 0) {
        // 0x803335F0: nop
    
            goto L_80333604;
    }
    // 0x803335F0: nop

    // 0x803335F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335FC: jal         0x8002B114
    // 0x80333600: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80333600: nop

    after_2:
L_80333604:
    // 0x80333604: b           L_8033360C
    // 0x80333608: nop

        goto L_8033360C;
    // 0x80333608: nop

L_8033360C:
    // 0x8033360C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333614: jr          $ra
    // 0x80333618: nop

    return;
    // 0x80333618: nop

;}
RECOMP_FUNC void func_803300D8_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803300DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803300E0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803300E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803300E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803300FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330104: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330108: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033010C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330110: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330114: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330118: nop

    // 0x8033011C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330120: nop

    // 0x80330124: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80330128: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033012C: nop

    // 0x80330130: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330134: nop

    // 0x80330138: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8033013C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330140: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x80330144: nop

    // 0x80330148: bne         $t4, $zero, L_80330300
    if (ctx->r12 != 0) {
        // 0x8033014C: nop
    
            goto L_80330300;
    }
    // 0x8033014C: nop

    // 0x80330150: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330154: nop

    // 0x80330158: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x8033015C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80330160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330164: jal         0x80069E60
    // 0x80330168: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80330168: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x8033016C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80330170: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033017C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330184: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330188: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033018C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330190: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330194: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330198: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033019C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803301A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803301A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803301A8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803301AC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803301B0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803301B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803301B8: nop

    // 0x803301BC: lh          $t1, 0xBE($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBE);
    // 0x803301C0: nop

    // 0x803301C4: beq         $t1, $zero, L_803301F8
    if (ctx->r9 == 0) {
        // 0x803301C8: nop
    
            goto L_803301F8;
    }
    // 0x803301C8: nop

    // 0x803301CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803301D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301D4: lh          $t4, 0xBE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBE);
    // 0x803301D8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x803301DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803301E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803301E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803301E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803301EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803301F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803301F4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
L_803301F8:
    // 0x803301F8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803301FC: nop

    // 0x80330200: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x80330204: nop

    // 0x80330208: beq         $t7, $zero, L_8033023C
    if (ctx->r15 == 0) {
        // 0x8033020C: nop
    
            goto L_8033023C;
    }
    // 0x8033020C: nop

    // 0x80330210: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330214: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330218: lh          $t0, 0xC0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC0);
    // 0x8033021C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80330220: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330224: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330228: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033022C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330230: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330234: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330238: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
L_8033023C:
    // 0x8033023C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330240: nop

    // 0x80330244: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80330248: nop

    // 0x8033024C: beq         $t4, $zero, L_80330280
    if (ctx->r12 == 0) {
        // 0x80330250: nop
    
            goto L_80330280;
    }
    // 0x80330250: nop

    // 0x80330254: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330258: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033025C: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x80330260: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80330264: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033026C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330270: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330274: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330278: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033027C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
L_80330280:
    // 0x80330280: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330284: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330288: jal         0x8001BBDC
    // 0x8033028C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033028C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80330290: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330294: jal         0x8001BBDC
    // 0x80330298: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80330298: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8033029C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803302A0: jal         0x8001BBDC
    // 0x803302A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803302A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803302A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803302AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803302B0: nop

    // 0x803302B4: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x803302B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803302BC: nop

    // 0x803302C0: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803302C4: nop

    // 0x803302C8: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x803302CC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803302D0: nop

    // 0x803302D4: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x803302D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803302DC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803302E0: nop

    // 0x803302E4: swc1        $f6, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f6.u32l;
    // 0x803302E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803302EC: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x803302F0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803302F4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803302F8: b           L_80330370
    // 0x803302FC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80330370;
    // 0x803302FC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330300:
    // 0x80330300: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330304: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033030C: bne         $t6, $at, L_80330370
    if (ctx->r14 != ctx->r1) {
        // 0x80330310: nop
    
            goto L_80330370;
    }
    // 0x80330310: nop

    // 0x80330314: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330318: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x8033031C: sh          $t2, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r10;
    // 0x80330320: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80330324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330328: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8033032C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80330330: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330334: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80330338: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033033C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330340: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x80330344: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x80330348: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033034C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330350: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330354: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330358: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033035C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330360: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330364: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330368: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x8033036C: sh          $t1, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r9;
L_80330370:
    // 0x80330370: b           L_80330378
    // 0x80330374: nop

        goto L_80330378;
    // 0x80330374: nop

L_80330378:
    // 0x80330378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033037C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80330380: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80330384: jr          $ra
    // 0x80330388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332160_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332160: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033216C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332170: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033217C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332184: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332188: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033218C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332190: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332194: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332198: nop

    // 0x8033219C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803321A0: nop

    // 0x803321A4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803321A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803321AC: nop

    // 0x803321B0: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803321B4: nop

    // 0x803321B8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803321BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803321C0: nop

    // 0x803321C4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803321C8: nop

    // 0x803321CC: bne         $t5, $zero, L_803322C0
    if (ctx->r13 != 0) {
        // 0x803321D0: nop
    
            goto L_803322C0;
    }
    // 0x803321D0: nop

    // 0x803321D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803321D8: nop

    // 0x803321DC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803321E0: nop

    // 0x803321E4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803321E8: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x803321EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803321F0: nop

    // 0x803321F4: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x803321F8: nop

    // 0x803321FC: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80332200: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80332204: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80332208: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033220C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80332210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332214: jal         0x8001ABF4
    // 0x80332218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80332218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8033221C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332220: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332224: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332228: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8033222C: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x80332230: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332234: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332238: addiu       $a1, $a1, 0x4B48
    ctx->r5 = ADD32(ctx->r5, 0X4B48);
    // 0x8033223C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332240: jal         0x80027464
    // 0x80332244: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80332244: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80332248: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033224C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80332250: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80332254: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332258: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033225C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332260: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332264: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80332268: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033226C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332270: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332274: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80332278: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8033227C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332280: nop

    // 0x80332284: sh          $t5, 0xBE($t7)
    MEM_H(0XBE, ctx->r15) = ctx->r13;
    // 0x80332288: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x8033228C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332290: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332294: nop

    // 0x80332298: swc1        $f8, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f8.u32l;
    // 0x8033229C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803322A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803322A4: lh          $t0, 0x108($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X108);
    // 0x803322A8: nop

    // 0x803322AC: bne         $t0, $at, L_803322C0
    if (ctx->r8 != ctx->r1) {
        // 0x803322B0: nop
    
            goto L_803322C0;
    }
    // 0x803322B0: nop

    // 0x803322B4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803322B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803322BC: sh          $t9, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r25;
L_803322C0:
    // 0x803322C0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803322C4: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803322C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803322CC: lwc1        $f10, 0xD4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x803322D0: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x803322D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803322D8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803322DC: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x803322E0: nop

    // 0x803322E4: bc1f        L_80332304
    if (!c1cs) {
        // 0x803322E8: nop
    
            goto L_80332304;
    }
    // 0x803322E8: nop

    // 0x803322EC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803322F0: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x803322F4: sh          $t2, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r10;
    // 0x803322F8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803322FC: b           L_80332350
    // 0x80332300: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80332350;
    // 0x80332300: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332304:
    // 0x80332304: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332308: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033230C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332310: lwc1        $f6, 0xD4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XD4);
    // 0x80332314: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80332318: jal         0x80015538
    // 0x8033231C: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033231C: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x80332320: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332324: nop

    // 0x80332328: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x8033232C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332330: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80332334: lwc1        $f10, 0xD4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80332338: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8033233C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332340: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332344: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80332348: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8033234C: swc1        $f6, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f6.u32l;
L_80332350:
    // 0x80332350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332358: jal         0x803332F8
    // 0x8033235C: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_3;
    // 0x8033235C: nop

    after_3:
    // 0x80332360: b           L_80332368
    // 0x80332364: nop

        goto L_80332368;
    // 0x80332364: nop

L_80332368:
    // 0x80332368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033236C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332370: jr          $ra
    // 0x80332374: nop

    return;
    // 0x80332374: nop

;}
RECOMP_FUNC void func_803346FC_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803346FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334700: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334704: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334708: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033470C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334710: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334714: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334718: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033471C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334720: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334724: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334728: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033472C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334730: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334734: nop

    // 0x80334738: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033473C: nop

    // 0x80334740: bne         $t1, $zero, L_80334798
    if (ctx->r9 != 0) {
        // 0x80334744: nop
    
            goto L_80334798;
    }
    // 0x80334744: nop

    // 0x80334748: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033474C: nop

    // 0x80334750: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334754: nop

    // 0x80334758: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033475C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334760: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334764: nop

    // 0x80334768: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033476C: nop

    // 0x80334770: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334778: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033477C: addiu       $t7, $t7, -0x52D0
    ctx->r15 = ADD32(ctx->r15, -0X52D0);
    // 0x80334780: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334784: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334788: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033478C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334790: jal         0x8001C0EC
    // 0x80334794: addiu       $a3, $zero, 0x15E
    ctx->r7 = ADD32(0, 0X15E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334794: addiu       $a3, $zero, 0x15E
    ctx->r7 = ADD32(0, 0X15E);
    after_0:
L_80334798:
    // 0x80334798: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033479C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803347A0: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
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
    // 0x803347C0: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803347C4: nop

    // 0x803347C8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803347CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347D4: jal         0x8001B4AC
    // 0x803347D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803347D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803347DC: beq         $v0, $zero, L_803347FC
    if (ctx->r2 == 0) {
        // 0x803347E0: nop
    
            goto L_803347FC;
    }
    // 0x803347E0: nop

    // 0x803347E4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803347E8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803347EC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803347F0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803347F4: nop

    // 0x803347F8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803347FC:
    // 0x803347FC: b           L_80334804
    // 0x80334800: nop

        goto L_80334804;
    // 0x80334800: nop

L_80334804:
    // 0x80334804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334808: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033480C: jr          $ra
    // 0x80334810: nop

    return;
    // 0x80334810: nop

;}
RECOMP_FUNC void func_803349B0_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803349B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803349B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803349B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803349BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803349C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803349C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803349C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803349D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803349D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803349D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803349DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803349E0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803349E4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803349E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349EC: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803349F0: nop

    // 0x803349F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803349F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803349FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334A00: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334A04: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334A08: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334A0C: sh          $zero, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = 0;
    // 0x80334A10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334A18: jal         0x8002B114
    // 0x80334A1C: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80334A1C: nop

    after_0:
    // 0x80334A20: b           L_80334A28
    // 0x80334A24: nop

        goto L_80334A28;
    // 0x80334A24: nop

L_80334A28:
    // 0x80334A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334A30: jr          $ra
    // 0x80334A34: nop

    return;
    // 0x80334A34: nop

;}
RECOMP_FUNC void func_80334A38_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334A3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334A40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334A44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334A48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334A4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334A50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334A54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334A5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334A60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334A64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334A68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334A6C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334A70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334A74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334A78: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80334A7C: nop

    // 0x80334A80: beq         $s0, $at, L_80334AA8
    if (ctx->r16 == ctx->r1) {
        // 0x80334A84: nop
    
            goto L_80334AA8;
    }
    // 0x80334A84: nop

    // 0x80334A88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334A8C: beq         $s0, $at, L_80334AB8
    if (ctx->r16 == ctx->r1) {
        // 0x80334A90: nop
    
            goto L_80334AB8;
    }
    // 0x80334A90: nop

    // 0x80334A94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80334A98: beq         $s0, $at, L_80334AC8
    if (ctx->r16 == ctx->r1) {
        // 0x80334A9C: nop
    
            goto L_80334AC8;
    }
    // 0x80334A9C: nop

    // 0x80334AA0: b           L_80334AD8
    // 0x80334AA4: nop

        goto L_80334AD8;
    // 0x80334AA4: nop

L_80334AA8:
    // 0x80334AA8: jal         0x803346FC
    // 0x80334AAC: nop

    func_803346FC_unk_bin_22(rdram, ctx);
        goto after_0;
    // 0x80334AAC: nop

    after_0:
    // 0x80334AB0: b           L_80334AE0
    // 0x80334AB4: nop

        goto L_80334AE0;
    // 0x80334AB4: nop

L_80334AB8:
    // 0x80334AB8: jal         0x80334814
    // 0x80334ABC: nop

    func_80334814_unk_bin_22(rdram, ctx);
        goto after_1;
    // 0x80334ABC: nop

    after_1:
    // 0x80334AC0: b           L_80334AE0
    // 0x80334AC4: nop

        goto L_80334AE0;
    // 0x80334AC4: nop

L_80334AC8:
    // 0x80334AC8: jal         0x803349B0
    // 0x80334ACC: nop

    func_803349B0_unk_bin_22(rdram, ctx);
        goto after_2;
    // 0x80334ACC: nop

    after_2:
    // 0x80334AD0: b           L_80334AE0
    // 0x80334AD4: nop

        goto L_80334AE0;
    // 0x80334AD4: nop

L_80334AD8:
    // 0x80334AD8: b           L_80334AE0
    // 0x80334ADC: nop

        goto L_80334AE0;
    // 0x80334ADC: nop

L_80334AE0:
    // 0x80334AE0: b           L_80334AE8
    // 0x80334AE4: nop

        goto L_80334AE8;
    // 0x80334AE4: nop

L_80334AE8:
    // 0x80334AE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334AEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334AF0: jr          $ra
    // 0x80334AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334AF8: nop

    // 0x80334AFC: nop

;}
RECOMP_FUNC void func_80334490_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334490: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334498: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033449C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803344A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803344A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803344A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803344B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803344B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803344B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803344BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803344C0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803344C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803344C8: nop

    // 0x803344CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803344D0: nop

    // 0x803344D4: bne         $t1, $zero, L_80334544
    if (ctx->r9 != 0) {
        // 0x803344D8: nop
    
            goto L_80334544;
    }
    // 0x803344D8: nop

    // 0x803344DC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803344E0: nop

    // 0x803344E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803344E8: nop

    // 0x803344EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803344F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803344F4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803344F8: nop

    // 0x803344FC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334500: nop

    // 0x80334504: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334508: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033450C: nop

    // 0x80334510: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80334514: nop

    // 0x80334518: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x8033451C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80334520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334524: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334528: nop

    // 0x8033452C: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x80334530: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x80334534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334538: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033453C: nop

    // 0x80334540: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
L_80334544:
    // 0x80334544: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033454C: jal         0x80028FA0
    // 0x80334550: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80334550: nop

    after_0:
    // 0x80334554: beq         $v0, $zero, L_80334574
    if (ctx->r2 == 0) {
        // 0x80334558: nop
    
            goto L_80334574;
    }
    // 0x80334558: nop

    // 0x8033455C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334564: jal         0x8002B0E4
    // 0x80334568: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80334568: nop

    after_1:
    // 0x8033456C: b           L_80334648
    // 0x80334570: nop

        goto L_80334648;
    // 0x80334570: nop

L_80334574:
    // 0x80334574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033457C: jal         0x8002A8B4
    // 0x80334580: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80334580: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x80334584: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334588: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033458C: jal         0x80029D8C
    // 0x80334590: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x80334590: nop

    after_3:
    // 0x80334594: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334598: nop

    // 0x8033459C: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x803345A0: nop

    // 0x803345A4: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x803345A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803345AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803345B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803345B4: lwc1        $f18, 0x40($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X40);
    // 0x803345B8: nop

    // 0x803345BC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803345C0: swc1        $f4, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f4.u32l;
    // 0x803345C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803345C8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803345CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803345D0: lwc1        $f6, 0x18($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X18);
    // 0x803345D4: nop

    // 0x803345D8: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x803345DC: nop

    // 0x803345E0: bc1f        L_80334604
    if (!c1cs) {
        // 0x803345E4: nop
    
            goto L_80334604;
    }
    // 0x803345E4: nop

    // 0x803345E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803345EC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803345F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803345F4: lwc1        $f10, 0x18($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X18);
    // 0x803345F8: nop

    // 0x803345FC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80334600: swc1        $f18, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f18.u32l;
L_80334604:
    // 0x80334604: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334608: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8033460C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334610: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80334614: nop

    // 0x80334618: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8033461C: nop

    // 0x80334620: bc1f        L_80334640
    if (!c1cs) {
        // 0x80334624: nop
    
            goto L_80334640;
    }
    // 0x80334624: nop

    // 0x80334628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033462C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334630: jal         0x8002B0E4
    // 0x80334634: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x80334634: nop

    after_4:
    // 0x80334638: b           L_80334648
    // 0x8033463C: nop

        goto L_80334648;
    // 0x8033463C: nop

L_80334640:
    // 0x80334640: b           L_80334648
    // 0x80334644: nop

        goto L_80334648;
    // 0x80334644: nop

L_80334648:
    // 0x80334648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033464C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334650: jr          $ra
    // 0x80334654: nop

    return;
    // 0x80334654: nop

;}
RECOMP_FUNC void func_8033038C_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033038C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330390: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330394: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330398: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033039C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803303A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803303B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803303BC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803303C0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803303C4: nop

    // 0x803303C8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803303CC: nop

    // 0x803303D0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803303D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803303D8: nop

    // 0x803303DC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803303E0: nop

    // 0x803303E4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803303E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803303EC: nop

    // 0x803303F0: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803303F4: nop

    // 0x803303F8: bne         $t5, $zero, L_803304E0
    if (ctx->r13 != 0) {
        // 0x803303FC: nop
    
            goto L_803304E0;
    }
    // 0x803303FC: nop

    // 0x80330400: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330404: nop

    // 0x80330408: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033040C: nop

    // 0x80330410: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330414: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330418: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033041C: nop

    // 0x80330420: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80330424: nop

    // 0x80330428: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x8033042C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330430: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330434: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80330438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033043C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330444: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80330448: jal         0x8001C0EC
    // 0x8033044C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033044C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80330450: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80330454: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x80330458: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8033045C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80330460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330464: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330468: jal         0x8001C0EC
    // 0x8033046C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033046C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x80330470: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330474: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x80330478: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033047C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330484: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330488: jal         0x8001C0EC
    // 0x8033048C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8033048C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x80330490: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330494: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80330498: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033049C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803304A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803304A4: jal         0x8001ABF4
    // 0x803304A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803304A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803304AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304B4: jal         0x8001BBDC
    // 0x803304B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x803304B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803304BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803304C0: jal         0x8001BBDC
    // 0x803304C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x803304C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x803304C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803304CC: jal         0x8001BBDC
    // 0x803304D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x803304D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803304D4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803304D8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x803304DC: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
L_803304E0:
    // 0x803304E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803304E8: jal         0x8001B4AC
    // 0x803304EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x803304EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803304F0: beq         $v0, $zero, L_8033056C
    if (ctx->r2 == 0) {
        // 0x803304F4: nop
    
            goto L_8033056C;
    }
    // 0x803304F4: nop

    // 0x803304F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330500: jal         0x8001BBDC
    // 0x80330504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x80330504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80330508: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8033050C: jal         0x8001BBDC
    // 0x80330510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x80330510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80330514: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330518: jal         0x8001BBDC
    // 0x8033051C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x8033051C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x80330520: jal         0x80014E80
    // 0x80330524: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x80330524: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_11:
    // 0x80330528: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033052C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330530: nop

    // 0x80330534: bne         $t7, $zero, L_80330554
    if (ctx->r15 != 0) {
        // 0x80330538: nop
    
            goto L_80330554;
    }
    // 0x80330538: nop

    // 0x8033053C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330540: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x80330544: sh          $t8, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r24;
    // 0x80330548: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033054C: b           L_8033056C
    // 0x80330550: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_8033056C;
    // 0x80330550: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330554:
    // 0x80330554: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330558: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033055C: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x80330560: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330564: nop

    // 0x80330568: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8033056C:
    // 0x8033056C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330570: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330574: jal         0x803332F8
    // 0x80330578: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_12;
    // 0x80330578: nop

    after_12:
    // 0x8033057C: b           L_80330584
    // 0x80330580: nop

        goto L_80330584;
    // 0x80330580: nop

L_80330584:
    // 0x80330584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330588: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033058C: jr          $ra
    // 0x80330590: nop

    return;
    // 0x80330590: nop

;}
RECOMP_FUNC void func_803327AC_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803327AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803327B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803327B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803327B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803327BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803327C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803327C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803327CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803327D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803327D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803327D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803327DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803327E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803327E4: nop

    // 0x803327E8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803327EC: nop

    // 0x803327F0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x803327F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803327F8: nop

    // 0x803327FC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80332800: nop

    // 0x80332804: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80332808: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033280C: nop

    // 0x80332810: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80332814: nop

    // 0x80332818: bne         $t5, $zero, L_803328D8
    if (ctx->r13 != 0) {
        // 0x8033281C: nop
    
            goto L_803328D8;
    }
    // 0x8033281C: nop

    // 0x80332820: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332824: nop

    // 0x80332828: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033282C: nop

    // 0x80332830: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80332834: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80332838: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033283C: nop

    // 0x80332840: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80332844: nop

    // 0x80332848: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x8033284C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332850: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332854: jal         0x8001BBDC
    // 0x80332858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80332858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8033285C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80332860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332864: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332868: nop

    // 0x8033286C: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x80332870: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332874: nop

    // 0x80332878: lh          $t3, 0xC0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC0);
    // 0x8033287C: nop

    // 0x80332880: beq         $t3, $zero, L_803328B4
    if (ctx->r11 == 0) {
        // 0x80332884: nop
    
            goto L_803328B4;
    }
    // 0x80332884: nop

    // 0x80332888: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033288C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332890: lh          $t7, 0xC0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC0);
    // 0x80332894: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80332898: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033289C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803328A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803328A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803328A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803328AC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803328B0: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_803328B4:
    // 0x803328B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803328B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803328BC: lh          $t0, 0x108($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X108);
    // 0x803328C0: nop

    // 0x803328C4: bne         $t0, $at, L_803328D8
    if (ctx->r8 != ctx->r1) {
        // 0x803328C8: nop
    
            goto L_803328D8;
    }
    // 0x803328C8: nop

    // 0x803328CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803328D0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x803328D4: sh          $t9, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r25;
L_803328D8:
    // 0x803328D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803328DC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x803328E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803328E4: lwc1        $f6, 0x4($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803328E8: nop

    // 0x803328EC: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x803328F0: nop

    // 0x803328F4: bc1f        L_80332924
    if (!c1cs) {
        // 0x803328F8: nop
    
            goto L_80332924;
    }
    // 0x803328F8: nop

    // 0x803328FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332900: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332904: nop

    // 0x80332908: swc1        $f10, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f10.u32l;
    // 0x8033290C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332910: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80332914: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332918: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033291C: nop

    // 0x80332920: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332924:
    // 0x80332924: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332928: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033292C: jal         0x803332F8
    // 0x80332930: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_1;
    // 0x80332930: nop

    after_1:
    // 0x80332934: b           L_8033293C
    // 0x80332938: nop

        goto L_8033293C;
    // 0x80332938: nop

L_8033293C:
    // 0x8033293C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332940: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332944: jr          $ra
    // 0x80332948: nop

    return;
    // 0x80332948: nop

;}
RECOMP_FUNC void func_803330CC_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803330CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803330D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803330D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803330D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803330DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803330E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803330E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803330E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803330F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803330F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803330FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333100: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333104: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333108: nop

    // 0x8033310C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333110: nop

    // 0x80333114: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80333118: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033311C: nop

    // 0x80333120: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80333124: nop

    // 0x80333128: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8033312C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333130: nop

    // 0x80333134: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80333138: nop

    // 0x8033313C: bne         $t5, $zero, L_80333174
    if (ctx->r13 != 0) {
        // 0x80333140: nop
    
            goto L_80333174;
    }
    // 0x80333140: nop

    // 0x80333144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033314C: jal         0x8001BB34
    // 0x80333150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80333150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333154: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80333158: jal         0x8001BB34
    // 0x8033315C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033315C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333160: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333164: jal         0x8001BB34
    // 0x80333168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80333168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033316C: b           L_803331EC
    // 0x80333170: nop

        goto L_803331EC;
    // 0x80333170: nop

L_80333174:
    // 0x80333174: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333178: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033317C: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x80333180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333184: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x80333188: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8033318C: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333190: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80333194: jal         0x8001BB34
    // 0x80333198: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80333198: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8033319C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803331A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803331A4: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x803331A8: nop

    // 0x803331AC: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x803331B0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803331B4: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803331B8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803331BC: jal         0x8001BB34
    // 0x803331C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x803331C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x803331C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803331C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803331CC: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x803331D0: nop

    // 0x803331D4: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x803331D8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803331DC: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803331E0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803331E4: jal         0x8001BB34
    // 0x803331E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x803331E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_803331EC:
    // 0x803331EC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803331F0: nop

    // 0x803331F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803331F8: nop

    // 0x803331FC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80333200: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x80333204: beq         $at, $zero, L_803332D8
    if (ctx->r1 == 0) {
        // 0x80333208: nop
    
            goto L_803332D8;
    }
    // 0x80333208: nop

    // 0x8033320C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333210: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80333214: addu        $at, $at, $t7
    gpr jr_addend_80333220 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333218: lw          $t7, 0x4C18($at)
    ctx->r15 = ADD32(ctx->r1, 0X4C18);
    // 0x8033321C: nop

    // 0x80333220: jr          $t7
    // 0x80333224: nop

    switch (jr_addend_80333220 >> 2) {
        case 0: goto L_80333228; break;
        case 1: goto L_80333238; break;
        case 2: goto L_80333248; break;
        case 3: goto L_80333258; break;
        case 4: goto L_80333268; break;
        case 5: goto L_80333278; break;
        case 6: goto L_80333288; break;
        case 7: goto L_80333298; break;
        case 8: goto L_803332A8; break;
        case 9: goto L_803332B8; break;
        case 10: goto L_803332C8; break;
        default: switch_error(__func__, 0x80333220, 0x80334C18);
    }
    // 0x80333224: nop

L_80333228:
    // 0x80333228: jal         0x8033038C
    // 0x8033322C: nop

    func_8033038C_unk_bin_22(rdram, ctx);
        goto after_6;
    // 0x8033322C: nop

    after_6:
    // 0x80333230: b           L_803332E0
    // 0x80333234: nop

        goto L_803332E0;
    // 0x80333234: nop

L_80333238:
    // 0x80333238: jal         0x80330594
    // 0x8033323C: nop

    func_80330594_unk_bin_22(rdram, ctx);
        goto after_7;
    // 0x8033323C: nop

    after_7:
    // 0x80333240: b           L_803332E0
    // 0x80333244: nop

        goto L_803332E0;
    // 0x80333244: nop

L_80333248:
    // 0x80333248: jal         0x80330CC8
    // 0x8033324C: nop

    func_80330CC8_unk_bin_22(rdram, ctx);
        goto after_8;
    // 0x8033324C: nop

    after_8:
    // 0x80333250: b           L_803332E0
    // 0x80333254: nop

        goto L_803332E0;
    // 0x80333254: nop

L_80333258:
    // 0x80333258: jal         0x8033110C
    // 0x8033325C: nop

    func_8033110C_unk_bin_22(rdram, ctx);
        goto after_9;
    // 0x8033325C: nop

    after_9:
    // 0x80333260: b           L_803332E0
    // 0x80333264: nop

        goto L_803332E0;
    // 0x80333264: nop

L_80333268:
    // 0x80333268: jal         0x8033166C
    // 0x8033326C: nop

    func_8033166C_unk_bin_22(rdram, ctx);
        goto after_10;
    // 0x8033326C: nop

    after_10:
    // 0x80333270: b           L_803332E0
    // 0x80333274: nop

        goto L_803332E0;
    // 0x80333274: nop

L_80333278:
    // 0x80333278: jal         0x80332160
    // 0x8033327C: nop

    func_80332160_unk_bin_22(rdram, ctx);
        goto after_11;
    // 0x8033327C: nop

    after_11:
    // 0x80333280: b           L_803332E0
    // 0x80333284: nop

        goto L_803332E0;
    // 0x80333284: nop

L_80333288:
    // 0x80333288: jal         0x80332378
    // 0x8033328C: nop

    func_80332378_unk_bin_22(rdram, ctx);
        goto after_12;
    // 0x8033328C: nop

    after_12:
    // 0x80333290: b           L_803332E0
    // 0x80333294: nop

        goto L_803332E0;
    // 0x80333294: nop

L_80333298:
    // 0x80333298: jal         0x803325B0
    // 0x8033329C: nop

    func_803325B0_unk_bin_22(rdram, ctx);
        goto after_13;
    // 0x8033329C: nop

    after_13:
    // 0x803332A0: b           L_803332E0
    // 0x803332A4: nop

        goto L_803332E0;
    // 0x803332A4: nop

L_803332A8:
    // 0x803332A8: jal         0x803327AC
    // 0x803332AC: nop

    func_803327AC_unk_bin_22(rdram, ctx);
        goto after_14;
    // 0x803332AC: nop

    after_14:
    // 0x803332B0: b           L_803332E0
    // 0x803332B4: nop

        goto L_803332E0;
    // 0x803332B4: nop

L_803332B8:
    // 0x803332B8: jal         0x8033294C
    // 0x803332BC: nop

    func_8033294C_unk_bin_22(rdram, ctx);
        goto after_15;
    // 0x803332BC: nop

    after_15:
    // 0x803332C0: b           L_803332E0
    // 0x803332C4: nop

        goto L_803332E0;
    // 0x803332C4: nop

L_803332C8:
    // 0x803332C8: jal         0x80332B08
    // 0x803332CC: nop

    func_80332B08_unk_bin_22(rdram, ctx);
        goto after_16;
    // 0x803332CC: nop

    after_16:
    // 0x803332D0: b           L_803332E0
    // 0x803332D4: nop

        goto L_803332E0;
    // 0x803332D4: nop

L_803332D8:
    // 0x803332D8: b           L_803332E0
    // 0x803332DC: nop

        goto L_803332E0;
    // 0x803332DC: nop

L_803332E0:
    // 0x803332E0: b           L_803332E8
    // 0x803332E4: nop

        goto L_803332E8;
    // 0x803332E4: nop

L_803332E8:
    // 0x803332E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803332EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803332F0: jr          $ra
    // 0x803332F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803332F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80332378_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332378: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033237C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332380: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332384: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332388: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033238C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332390: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332394: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332398: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033239C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803323A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803323A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803323A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803323AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803323B0: nop

    // 0x803323B4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803323B8: nop

    // 0x803323BC: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x803323C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803323C4: nop

    // 0x803323C8: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803323CC: nop

    // 0x803323D0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x803323D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803323D8: nop

    // 0x803323DC: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803323E0: nop

    // 0x803323E4: bne         $t5, $zero, L_80332488
    if (ctx->r13 != 0) {
        // 0x803323E8: nop
    
            goto L_80332488;
    }
    // 0x803323E8: nop

    // 0x803323EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803323F0: nop

    // 0x803323F4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803323F8: nop

    // 0x803323FC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80332400: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80332404: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332408: nop

    // 0x8033240C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80332410: nop

    // 0x80332414: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80332418: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033241C: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80332420: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80332424: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80332428: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033242C: jal         0x8001ABF4
    // 0x80332430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80332430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80332434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033243C: jal         0x8002A46C
    // 0x80332440: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x80332440: nop

    after_1:
    // 0x80332444: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332448: nop

    // 0x8033244C: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x80332450: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332458: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033245C: nop

    // 0x80332460: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80332464: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332468: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033246C: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80332470: nop

    // 0x80332474: bne         $t4, $at, L_80332488
    if (ctx->r12 != ctx->r1) {
        // 0x80332478: nop
    
            goto L_80332488;
    }
    // 0x80332478: nop

    // 0x8033247C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332480: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80332484: sh          $t5, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r13;
L_80332488:
    // 0x80332488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033248C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332490: jal         0x80029C40
    // 0x80332494: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80332494: nop

    after_2:
    // 0x80332498: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033249C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803324A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803324A4: lwc1        $f6, 0xD4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x803324A8: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803324AC: jal         0x80015538
    // 0x803324B0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803324B0: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x803324B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803324B8: nop

    // 0x803324BC: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x803324C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803324C4: lui         $at, 0x4487
    ctx->r1 = S32(0X4487 << 16);
    // 0x803324C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803324CC: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803324D0: nop

    // 0x803324D4: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x803324D8: nop

    // 0x803324DC: bc1t        L_8033253C
    if (c1cs) {
        // 0x803324E0: nop
    
            goto L_8033253C;
    }
    // 0x803324E0: nop

    // 0x803324E4: lui         $at, 0xC487
    ctx->r1 = S32(0XC487 << 16);
    // 0x803324E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803324EC: nop

    // 0x803324F0: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x803324F4: nop

    // 0x803324F8: bc1t        L_8033253C
    if (c1cs) {
        // 0x803324FC: nop
    
            goto L_8033253C;
    }
    // 0x803324FC: nop

    // 0x80332500: lui         $at, 0x4487
    ctx->r1 = S32(0X4487 << 16);
    // 0x80332504: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332508: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033250C: nop

    // 0x80332510: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80332514: nop

    // 0x80332518: bc1t        L_8033253C
    if (c1cs) {
        // 0x8033251C: nop
    
            goto L_8033253C;
    }
    // 0x8033251C: nop

    // 0x80332520: lui         $at, 0xC487
    ctx->r1 = S32(0XC487 << 16);
    // 0x80332524: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332528: nop

    // 0x8033252C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80332530: nop

    // 0x80332534: bc1f        L_80332588
    if (!c1cs) {
        // 0x80332538: nop
    
            goto L_80332588;
    }
    // 0x80332538: nop

L_8033253C:
    // 0x8033253C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332540: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332544: nop

    // 0x80332548: swc1        $f16, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f16.u32l;
    // 0x8033254C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332550: nop

    // 0x80332554: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80332558: nop

    // 0x8033255C: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
    // 0x80332560: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332564: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332568: nop

    // 0x8033256C: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
    // 0x80332570: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332574: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80332578: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033257C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332580: nop

    // 0x80332584: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80332588:
    // 0x80332588: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033258C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332590: jal         0x803332F8
    // 0x80332594: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_4;
    // 0x80332594: nop

    after_4:
    // 0x80332598: b           L_803325A0
    // 0x8033259C: nop

        goto L_803325A0;
    // 0x8033259C: nop

L_803325A0:
    // 0x803325A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803325A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803325A8: jr          $ra
    // 0x803325AC: nop

    return;
    // 0x803325AC: nop

;}
RECOMP_FUNC void func_803325B0_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803325B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803325B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803325B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803325BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803325C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803325C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803325C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803325D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803325D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803325DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803325E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803325E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803325E8: nop

    // 0x803325EC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803325F0: nop

    // 0x803325F4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x803325F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803325FC: nop

    // 0x80332600: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80332604: nop

    // 0x80332608: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8033260C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332610: nop

    // 0x80332614: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80332618: nop

    // 0x8033261C: bne         $t5, $zero, L_803326D4
    if (ctx->r13 != 0) {
        // 0x80332620: nop
    
            goto L_803326D4;
    }
    // 0x80332620: nop

    // 0x80332624: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332628: nop

    // 0x8033262C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332630: nop

    // 0x80332634: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80332638: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x8033263C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332640: nop

    // 0x80332644: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80332648: nop

    // 0x8033264C: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80332650: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332654: nop

    // 0x80332658: lh          $t2, 0xBE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XBE);
    // 0x8033265C: nop

    // 0x80332660: beq         $t2, $zero, L_80332694
    if (ctx->r10 == 0) {
        // 0x80332664: nop
    
            goto L_80332694;
    }
    // 0x80332664: nop

    // 0x80332668: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033266C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332670: lh          $t5, 0xBE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBE);
    // 0x80332674: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80332678: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033267C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332680: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332684: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332688: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033268C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332690: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
L_80332694:
    // 0x80332694: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332698: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033269C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803326A0: lwc1        $f4, 0xD4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x803326A4: nop

    // 0x803326A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803326AC: swc1        $f8, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f8.u32l;
    // 0x803326B0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803326B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803326B8: lh          $t0, 0x108($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X108);
    // 0x803326BC: nop

    // 0x803326C0: bne         $t0, $at, L_803326D4
    if (ctx->r8 != ctx->r1) {
        // 0x803326C4: nop
    
            goto L_803326D4;
    }
    // 0x803326C4: nop

    // 0x803326C8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803326CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803326D0: sh          $t9, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r25;
L_803326D4:
    // 0x803326D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803326D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803326DC: lwc1        $f10, 0xD4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x803326E0: nop

    // 0x803326E4: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x803326E8: nop

    // 0x803326EC: bc1f        L_8033270C
    if (!c1cs) {
        // 0x803326F0: nop
    
            goto L_8033270C;
    }
    // 0x803326F0: nop

    // 0x803326F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326FC: jal         0x8001BBDC
    // 0x80332700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80332700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80332704: b           L_80332754
    // 0x80332708: nop

        goto L_80332754;
    // 0x80332708: nop

L_8033270C:
    // 0x8033270C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332710: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80332714: lwc1        $f18, 0xD4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x80332718: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8033271C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332720: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80332724: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80332728: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8033272C: swc1        $f10, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f10.u32l;
    // 0x80332730: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332734: nop

    // 0x80332738: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033273C: lwc1        $f14, 0xD4($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0XD4);
    // 0x80332740: jal         0x80015538
    // 0x80332744: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80332744: nop

    after_1:
    // 0x80332748: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033274C: nop

    // 0x80332750: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
L_80332754:
    // 0x80332754: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332758: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033275C: jal         0x8001B4AC
    // 0x80332760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80332760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332764: beq         $v0, $zero, L_80332784
    if (ctx->r2 == 0) {
        // 0x80332768: nop
    
            goto L_80332784;
    }
    // 0x80332768: nop

    // 0x8033276C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332770: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80332774: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80332778: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033277C: nop

    // 0x80332780: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332784:
    // 0x80332784: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332788: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033278C: jal         0x803332F8
    // 0x80332790: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_3;
    // 0x80332790: nop

    after_3:
    // 0x80332794: b           L_8033279C
    // 0x80332798: nop

        goto L_8033279C;
    // 0x80332798: nop

L_8033279C:
    // 0x8033279C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803327A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803327A4: jr          $ra
    // 0x803327A8: nop

    return;
    // 0x803327A8: nop

;}
RECOMP_FUNC void func_80333E08_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333E08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333E10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333E14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333E18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333E1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333E20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333E28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333E2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333E30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333E34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333E38: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80333E3C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333E40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E44: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80333E48: nop

    // 0x80333E4C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333E50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333E54: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333E58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333E5C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333E60: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333E64: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x80333E68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E70: jal         0x8002B114
    // 0x80333E74: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80333E74: nop

    after_0:
    // 0x80333E78: b           L_80333E80
    // 0x80333E7C: nop

        goto L_80333E80;
    // 0x80333E7C: nop

L_80333E80:
    // 0x80333E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80333E88: jr          $ra
    // 0x80333E8C: nop

    return;
    // 0x80333E8C: nop

;}
RECOMP_FUNC void func_80333C84_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333C84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333C88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333C8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333C90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333C94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333C98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333C9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333CA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333CA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333CA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333CAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333CB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333CB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333CB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333CBC: nop

    // 0x80333CC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333CC4: nop

    // 0x80333CC8: bne         $t1, $zero, L_80333D20
    if (ctx->r9 != 0) {
        // 0x80333CCC: nop
    
            goto L_80333D20;
    }
    // 0x80333CCC: nop

    // 0x80333CD0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333CD4: nop

    // 0x80333CD8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333CDC: nop

    // 0x80333CE0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333CE4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333CE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333CEC: nop

    // 0x80333CF0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333CF4: nop

    // 0x80333CF8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333CFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D00: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333D04: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x80333D08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333D10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333D14: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80333D18: jal         0x8001C0EC
    // 0x80333D1C: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333D1C: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
L_80333D20:
    // 0x80333D20: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333D24: nop

    // 0x80333D28: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80333D2C: nop

    // 0x80333D30: bne         $t9, $zero, L_80333D68
    if (ctx->r25 != 0) {
        // 0x80333D34: nop
    
            goto L_80333D68;
    }
    // 0x80333D34: nop

    // 0x80333D38: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333D3C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80333D40: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x80333D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333D50: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80333D54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333D58: jal         0x800175F0
    // 0x80333D5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80333D5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80333D60: b           L_80333D80
    // 0x80333D64: nop

        goto L_80333D80;
    // 0x80333D64: nop

L_80333D68:
    // 0x80333D68: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333D6C: nop

    // 0x80333D70: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80333D74: nop

    // 0x80333D78: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80333D7C: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_80333D80:
    // 0x80333D80: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333D84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D88: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x80333D8C: nop

    // 0x80333D90: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333D94: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333D98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D9C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333DA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333DA4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333DA8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333DAC: nop

    // 0x80333DB0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80333DB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333DB8: nop

    // 0x80333DBC: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333DC0: nop

    // 0x80333DC4: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80333DC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DD0: jal         0x8001B4AC
    // 0x80333DD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80333DD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80333DD8: beq         $v0, $zero, L_80333DF0
    if (ctx->r2 == 0) {
        // 0x80333DDC: nop
    
            goto L_80333DF0;
    }
    // 0x80333DDC: nop

    // 0x80333DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333DE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DE8: jal         0x8001BBDC
    // 0x80333DEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80333DEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80333DF0:
    // 0x80333DF0: b           L_80333DF8
    // 0x80333DF4: nop

        goto L_80333DF8;
    // 0x80333DF4: nop

L_80333DF8:
    // 0x80333DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333DFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333E00: jr          $ra
    // 0x80333E04: nop

    return;
    // 0x80333E04: nop

;}
RECOMP_FUNC void func_8033361C_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033361C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333624: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333628: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033362C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333630: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333634: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333638: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033363C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333640: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333644: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333648: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033364C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333650: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333654: nop

    // 0x80333658: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033365C: nop

    // 0x80333660: bne         $t1, $zero, L_803336B8
    if (ctx->r9 != 0) {
        // 0x80333664: nop
    
            goto L_803336B8;
    }
    // 0x80333664: nop

    // 0x80333668: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033366C: nop

    // 0x80333670: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333674: nop

    // 0x80333678: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033367C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333680: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333684: nop

    // 0x80333688: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033368C: nop

    // 0x80333690: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333694: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333698: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033369C: addiu       $t7, $t7, -0x52D8
    ctx->r15 = ADD32(ctx->r15, -0X52D8);
    // 0x803336A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803336A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803336AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803336B0: jal         0x8001C0EC
    // 0x803336B4: addiu       $a3, $zero, 0x160
    ctx->r7 = ADD32(0, 0X160);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803336B4: addiu       $a3, $zero, 0x160
    ctx->r7 = ADD32(0, 0X160);
    after_0:
L_803336B8:
    // 0x803336B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336C0: jal         0x8001B4AC
    // 0x803336C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803336C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803336C8: beq         $v0, $zero, L_803336E0
    if (ctx->r2 == 0) {
        // 0x803336CC: nop
    
            goto L_803336E0;
    }
    // 0x803336CC: nop

    // 0x803336D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336D8: jal         0x8002B114
    // 0x803336DC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803336DC: nop

    after_2:
L_803336E0:
    // 0x803336E0: b           L_803336E8
    // 0x803336E4: nop

        goto L_803336E8;
    // 0x803336E4: nop

L_803336E8:
    // 0x803336E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803336EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803336F0: jr          $ra
    // 0x803336F4: nop

    return;
    // 0x803336F4: nop

;}
RECOMP_FUNC void func_80330594_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330594: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330598: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033059C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803305A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803305A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803305A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803305B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305C8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803305CC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803305D0: nop

    // 0x803305D4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803305D8: nop

    // 0x803305DC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x803305E0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803305E4: nop

    // 0x803305E8: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803305EC: nop

    // 0x803305F0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x803305F4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803305F8: nop

    // 0x803305FC: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80330600: nop

    // 0x80330604: bne         $t5, $zero, L_803308A8
    if (ctx->r13 != 0) {
        // 0x80330608: nop
    
            goto L_803308A8;
    }
    // 0x80330608: nop

    // 0x8033060C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330610: nop

    // 0x80330614: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330618: nop

    // 0x8033061C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330620: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330624: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330628: nop

    // 0x8033062C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80330630: nop

    // 0x80330634: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80330638: jal         0x80014E80
    // 0x8033063C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8033063C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80330640: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80330644: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80330648: nop

    // 0x8033064C: beq         $s0, $zero, L_80330668
    if (ctx->r16 == 0) {
        // 0x80330650: nop
    
            goto L_80330668;
    }
    // 0x80330650: nop

    // 0x80330654: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330658: beq         $s0, $at, L_803306B0
    if (ctx->r16 == ctx->r1) {
        // 0x8033065C: nop
    
            goto L_803306B0;
    }
    // 0x8033065C: nop

    // 0x80330660: b           L_803306F8
    // 0x80330664: nop

        goto L_803306F8;
    // 0x80330664: nop

L_80330668:
    // 0x80330668: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x8033066C: addiu       $t1, $t1, 0x4B54
    ctx->r9 = ADD32(ctx->r9, 0X4B54);
    // 0x80330670: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80330674: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330678: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8033067C: nop

    // 0x80330680: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330684: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x80330688: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x8033068C: addiu       $t4, $t4, 0x4B54
    ctx->r12 = ADD32(ctx->r12, 0X4B54);
    // 0x80330690: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x80330694: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330698: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8033069C: nop

    // 0x803306A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803306A4: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x803306A8: b           L_80330740
    // 0x803306AC: nop

        goto L_80330740;
    // 0x803306AC: nop

L_803306B0:
    // 0x803306B0: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x803306B4: addiu       $t8, $t8, 0x4B54
    ctx->r24 = ADD32(ctx->r24, 0X4B54);
    // 0x803306B8: lh          $t6, 0x4($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X4);
    // 0x803306BC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803306C0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x803306C4: nop

    // 0x803306C8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803306CC: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    // 0x803306D0: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803306D4: addiu       $t9, $t9, 0x4B54
    ctx->r25 = ADD32(ctx->r25, 0X4B54);
    // 0x803306D8: lh          $t1, 0x6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X6);
    // 0x803306DC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803306E0: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x803306E4: nop

    // 0x803306E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803306EC: swc1        $f6, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f6.u32l;
    // 0x803306F0: b           L_80330740
    // 0x803306F4: nop

        goto L_80330740;
    // 0x803306F4: nop

L_803306F8:
    // 0x803306F8: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x803306FC: addiu       $t3, $t3, 0x4B54
    ctx->r11 = ADD32(ctx->r11, 0X4B54);
    // 0x80330700: lh          $t4, 0x8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8);
    // 0x80330704: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330708: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8033070C: nop

    // 0x80330710: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330714: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80330718: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x8033071C: addiu       $t7, $t7, 0x4B54
    ctx->r15 = ADD32(ctx->r15, 0X4B54);
    // 0x80330720: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x80330724: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330728: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8033072C: nop

    // 0x80330730: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330734: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x80330738: b           L_80330740
    // 0x8033073C: nop

        goto L_80330740;
    // 0x8033073C: nop

L_80330740:
    // 0x80330740: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330744: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330748: jal         0x8002A46C
    // 0x8033074C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x8033074C: nop

    after_1:
    // 0x80330750: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330754: nop

    // 0x80330758: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x8033075C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330760: nop

    // 0x80330764: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330768: nop

    // 0x8033076C: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x80330770: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330774: nop

    // 0x80330778: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8033077C: nop

    // 0x80330780: beq         $t2, $zero, L_8033079C
    if (ctx->r10 == 0) {
        // 0x80330784: nop
    
            goto L_8033079C;
    }
    // 0x80330784: nop

    // 0x80330788: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033078C: lwc1        $f6, 0x4B90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4B90);
    // 0x80330790: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330794: b           L_803307B0
    // 0x80330798: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
        goto L_803307B0;
    // 0x80330798: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
L_8033079C:
    // 0x8033079C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307A0: lwc1        $f8, 0x4B94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4B94);
    // 0x803307A4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803307A8: nop

    // 0x803307AC: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
L_803307B0:
    // 0x803307B0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803307B4: nop

    // 0x803307B8: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x803307BC: nop

    // 0x803307C0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x803307C4: sh          $t8, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r24;
    // 0x803307C8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803307CC: nop

    // 0x803307D0: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x803307D4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803307D8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803307DC: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803307E0: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x803307E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803307E8: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803307EC: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x803307F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803307F4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803307F8: jal         0x80027464
    // 0x803307FC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x803307FC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80330800: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330804: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330808: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033080C: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330810: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x80330814: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x80330818: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033081C: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330820: addiu       $a1, $a1, 0x4B18
    ctx->r5 = ADD32(ctx->r5, 0X4B18);
    // 0x80330824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330828: jal         0x80027464
    // 0x8033082C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x8033082C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80330830: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330838: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033083C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80330840: jal         0x80026F10
    // 0x80330844: nop

    func_80026F10(rdram, ctx);
        goto after_4;
    // 0x80330844: nop

    after_4:
    // 0x80330848: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033084C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330850: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330854: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330858: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033085C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330860: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80330864: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330868: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033086C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330870: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80330874: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80330878: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033087C: nop

    // 0x80330880: sh          $t4, 0xC0($t7)
    MEM_H(0XC0, ctx->r15) = ctx->r12;
    // 0x80330884: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330888: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033088C: lh          $t5, 0x108($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X108);
    // 0x80330890: nop

    // 0x80330894: bne         $t5, $at, L_803308A8
    if (ctx->r13 != ctx->r1) {
        // 0x80330898: nop
    
            goto L_803308A8;
    }
    // 0x80330898: nop

    // 0x8033089C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803308A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x803308A4: sh          $t6, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r14;
L_803308A8:
    // 0x803308A8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803308AC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x803308B0: lh          $t2, 0xA8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA8);
    // 0x803308B4: nop

    // 0x803308B8: bne         $t2, $at, L_8033090C
    if (ctx->r10 != ctx->r1) {
        // 0x803308BC: nop
    
            goto L_8033090C;
    }
    // 0x803308BC: nop

    // 0x803308C0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803308C4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803308C8: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803308CC: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x803308D0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803308D4: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803308D8: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x803308DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803308E0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803308E4: jal         0x80027464
    // 0x803308E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x803308E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x803308EC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803308F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803308F4: nop

    // 0x803308F8: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x803308FC: nop

    // 0x80330900: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80330904: b           L_80330B48
    // 0x80330908: sh          $t7, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r15;
        goto L_80330B48;
    // 0x80330908: sh          $t7, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r15;
L_8033090C:
    // 0x8033090C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330910: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80330914: lh          $t5, 0xA8($t8)
    ctx->r13 = MEM_H(ctx->r24, 0XA8);
    // 0x80330918: nop

    // 0x8033091C: bne         $t5, $at, L_803309A0
    if (ctx->r13 != ctx->r1) {
        // 0x80330920: nop
    
            goto L_803309A0;
    }
    // 0x80330920: nop

    // 0x80330924: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330928: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033092C: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330930: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80330934: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330938: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033093C: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x80330940: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330944: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80330948: jal         0x80027464
    // 0x8033094C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x8033094C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x80330950: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330954: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330958: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033095C: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330960: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80330964: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330968: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033096C: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80330970: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330974: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80330978: jal         0x80027464
    // 0x8033097C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x8033097C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80330980: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330984: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330988: nop

    // 0x8033098C: lh          $t2, 0xA8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA8);
    // 0x80330990: nop

    // 0x80330994: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80330998: b           L_80330B48
    // 0x8033099C: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
        goto L_80330B48;
    // 0x8033099C: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
L_803309A0:
    // 0x803309A0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803309A4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x803309A8: lh          $t7, 0xA8($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA8);
    // 0x803309AC: nop

    // 0x803309B0: bne         $t7, $at, L_80330A04
    if (ctx->r15 != ctx->r1) {
        // 0x803309B4: nop
    
            goto L_80330A04;
    }
    // 0x803309B4: nop

    // 0x803309B8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803309BC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803309C0: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803309C4: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x803309C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803309CC: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803309D0: addiu       $a1, $a1, 0x4B3C
    ctx->r5 = ADD32(ctx->r5, 0X4B3C);
    // 0x803309D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803309D8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x803309DC: jal         0x80027464
    // 0x803309E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x803309E0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x803309E4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803309E8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803309EC: nop

    // 0x803309F0: lh          $t5, 0xA8($t8)
    ctx->r13 = MEM_H(ctx->r24, 0XA8);
    // 0x803309F4: nop

    // 0x803309F8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x803309FC: b           L_80330B48
    // 0x80330A00: sh          $t6, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r14;
        goto L_80330B48;
    // 0x80330A00: sh          $t6, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r14;
L_80330A04:
    // 0x80330A04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A08: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80330A0C: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x80330A10: nop

    // 0x80330A14: bne         $t2, $at, L_80330A68
    if (ctx->r10 != ctx->r1) {
        // 0x80330A18: nop
    
            goto L_80330A68;
    }
    // 0x80330A18: nop

    // 0x80330A1C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A20: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330A24: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330A28: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80330A2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330A30: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80330A34: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80330A38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330A3C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80330A40: jal         0x80027464
    // 0x80330A44: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x80330A44: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x80330A48: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330A4C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A50: nop

    // 0x80330A54: lh          $t4, 0xA8($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XA8);
    // 0x80330A58: nop

    // 0x80330A5C: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80330A60: b           L_80330B48
    // 0x80330A64: sh          $t7, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r15;
        goto L_80330B48;
    // 0x80330A64: sh          $t7, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r15;
L_80330A68:
    // 0x80330A68: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A6C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x80330A70: lh          $t5, 0xA8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA8);
    // 0x80330A74: nop

    // 0x80330A78: bne         $t5, $at, L_80330ACC
    if (ctx->r13 != ctx->r1) {
        // 0x80330A7C: nop
    
            goto L_80330ACC;
    }
    // 0x80330A7C: nop

    // 0x80330A80: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A84: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330A88: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80330A8C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80330A90: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330A94: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80330A98: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80330A9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330AA0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80330AA4: jal         0x80027464
    // 0x80330AA8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80330AA8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x80330AAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330AB0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330AB4: nop

    // 0x80330AB8: lh          $t0, 0xA8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA8);
    // 0x80330ABC: nop

    // 0x80330AC0: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80330AC4: b           L_80330B48
    // 0x80330AC8: sh          $t2, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r10;
        goto L_80330B48;
    // 0x80330AC8: sh          $t2, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r10;
L_80330ACC:
    // 0x80330ACC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330AD0: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80330AD4: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x80330AD8: nop

    // 0x80330ADC: bne         $t4, $at, L_80330B30
    if (ctx->r12 != ctx->r1) {
        // 0x80330AE0: nop
    
            goto L_80330B30;
    }
    // 0x80330AE0: nop

    // 0x80330AE4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330AE8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330AEC: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330AF0: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80330AF4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330AF8: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80330AFC: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80330B00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330B04: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80330B08: jal         0x80027464
    // 0x80330B0C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80330B0C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x80330B10: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330B14: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B18: nop

    // 0x80330B1C: lh          $t3, 0xA8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XA8);
    // 0x80330B20: nop

    // 0x80330B24: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80330B28: b           L_80330B48
    // 0x80330B2C: sh          $t5, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r13;
        goto L_80330B48;
    // 0x80330B2C: sh          $t5, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r13;
L_80330B30:
    // 0x80330B30: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B34: nop

    // 0x80330B38: lh          $t0, 0xA8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA8);
    // 0x80330B3C: nop

    // 0x80330B40: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80330B44: sh          $t2, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r10;
L_80330B48:
    // 0x80330B48: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B4C: nop

    // 0x80330B50: lh          $t1, 0xA8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA8);
    // 0x80330B54: nop

    // 0x80330B58: slti        $at, $t1, 0x28
    ctx->r1 = SIGNED(ctx->r9) < 0X28 ? 1 : 0;
    // 0x80330B5C: bne         $at, $zero, L_80330B88
    if (ctx->r1 != 0) {
        // 0x80330B60: nop
    
            goto L_80330B88;
    }
    // 0x80330B60: nop

    // 0x80330B64: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330B6C: lh          $t7, 0x108($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X108);
    // 0x80330B70: nop

    // 0x80330B74: bne         $t7, $at, L_80330B88
    if (ctx->r15 != ctx->r1) {
        // 0x80330B78: nop
    
            goto L_80330B88;
    }
    // 0x80330B78: nop

    // 0x80330B7C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B80: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330B84: sh          $t3, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r11;
L_80330B88:
    // 0x80330B88: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B8C: nop

    // 0x80330B90: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80330B94: nop

    // 0x80330B98: beq         $t0, $zero, L_80330C14
    if (ctx->r8 == 0) {
        // 0x80330B9C: nop
    
            goto L_80330C14;
    }
    // 0x80330B9C: nop

    // 0x80330BA0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BA4: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x80330BA8: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80330BAC: nop

    // 0x80330BB0: bne         $t6, $at, L_80330C0C
    if (ctx->r14 != ctx->r1) {
        // 0x80330BB4: nop
    
            goto L_80330C0C;
    }
    // 0x80330BB4: nop

    // 0x80330BB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330BBC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BC0: nop

    // 0x80330BC4: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
    // 0x80330BC8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80330BCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330BD0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BD4: nop

    // 0x80330BD8: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x80330BDC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BE0: nop

    // 0x80330BE4: lh          $t7, 0xA6($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA6);
    // 0x80330BE8: nop

    // 0x80330BEC: addiu       $t3, $t7, -0x1
    ctx->r11 = ADD32(ctx->r15, -0X1);
    // 0x80330BF0: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x80330BF4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BF8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80330BFC: sh          $t5, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r13;
    // 0x80330C00: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C04: nop

    // 0x80330C08: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330C0C:
    // 0x80330C0C: b           L_80330CA0
    // 0x80330C10: nop

        goto L_80330CA0;
    // 0x80330C10: nop

L_80330C14:
    // 0x80330C14: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C18: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x80330C1C: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80330C20: nop

    // 0x80330C24: bne         $t6, $at, L_80330CA0
    if (ctx->r14 != ctx->r1) {
        // 0x80330C28: nop
    
            goto L_80330CA0;
    }
    // 0x80330C28: nop

    // 0x80330C2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330C30: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C34: nop

    // 0x80330C38: swc1        $f18, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f18.u32l;
    // 0x80330C3C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80330C40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330C44: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C48: nop

    // 0x80330C4C: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x80330C50: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C54: nop

    // 0x80330C58: lh          $t3, 0x100($t7)
    ctx->r11 = MEM_H(ctx->r15, 0X100);
    // 0x80330C5C: nop

    // 0x80330C60: slti        $at, $t3, 0x7
    ctx->r1 = SIGNED(ctx->r11) < 0X7 ? 1 : 0;
    // 0x80330C64: bne         $at, $zero, L_80330C7C
    if (ctx->r1 != 0) {
        // 0x80330C68: nop
    
            goto L_80330C7C;
    }
    // 0x80330C68: nop

    // 0x80330C6C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C70: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80330C74: b           L_80330C88
    // 0x80330C78: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
        goto L_80330C88;
    // 0x80330C78: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
L_80330C7C:
    // 0x80330C7C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C80: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330C84: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80330C88:
    // 0x80330C88: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C8C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80330C90: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330C94: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C98: nop

    // 0x80330C9C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330CA0:
    // 0x80330CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CA8: jal         0x803332F8
    // 0x80330CAC: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_12;
    // 0x80330CAC: nop

    after_12:
    // 0x80330CB0: b           L_80330CB8
    // 0x80330CB4: nop

        goto L_80330CB8;
    // 0x80330CB4: nop

L_80330CB8:
    // 0x80330CB8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330CBC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80330CC0: jr          $ra
    // 0x80330CC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80330CC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803336F8_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803336F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803336FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333700: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333704: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333708: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033370C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333710: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333714: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333718: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033371C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333720: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333724: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333728: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033372C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333730: nop

    // 0x80333734: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333738: nop

    // 0x8033373C: bne         $t1, $zero, L_80333794
    if (ctx->r9 != 0) {
        // 0x80333740: nop
    
            goto L_80333794;
    }
    // 0x80333740: nop

    // 0x80333744: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333748: nop

    // 0x8033374C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333750: nop

    // 0x80333754: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333758: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033375C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333760: nop

    // 0x80333764: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333768: nop

    // 0x8033376C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333770: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333774: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333778: addiu       $t7, $t7, -0x52D4
    ctx->r15 = ADD32(ctx->r15, -0X52D4);
    // 0x8033377C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333780: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333784: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80333788: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033378C: jal         0x8001C0EC
    // 0x80333790: addiu       $a3, $zero, 0x161
    ctx->r7 = ADD32(0, 0X161);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333790: addiu       $a3, $zero, 0x161
    ctx->r7 = ADD32(0, 0X161);
    after_0:
L_80333794:
    // 0x80333794: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033379C: jal         0x8001B4AC
    // 0x803337A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803337A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803337A4: beq         $v0, $zero, L_803337BC
    if (ctx->r2 == 0) {
        // 0x803337A8: nop
    
            goto L_803337BC;
    }
    // 0x803337A8: nop

    // 0x803337AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337B4: jal         0x8002B114
    // 0x803337B8: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803337B8: nop

    after_2:
L_803337BC:
    // 0x803337BC: b           L_803337C4
    // 0x803337C0: nop

        goto L_803337C4;
    // 0x803337C0: nop

L_803337C4:
    // 0x803337C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803337C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803337CC: jr          $ra
    // 0x803337D0: nop

    return;
    // 0x803337D0: nop

;}
RECOMP_FUNC void func_803332F8_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803332F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803332FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80333300: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80333304: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333308: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8033330C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80333310: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80333314: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333318: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8033331C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80333320: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333324: nop

    // 0x80333328: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8033332C: nop

    // 0x80333330: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80333334: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333338: nop

    // 0x8033333C: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x80333340: nop

    // 0x80333344: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80333348: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033334C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333350: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333354: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333358: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033335C: lwc1        $f6, 0x24($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80333360: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333364: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333368: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033336C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333370: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333374: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333378: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x8033337C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80333380: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333384: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80333388: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033338C: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80333390: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80333394: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333398: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033339C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803333A0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803333A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803333A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803333AC: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x803333B0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x803333B4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803333B8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803333BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803333C0: lwc1        $f4, 0x8($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803333C4: lwc1        $f6, 0x2C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803333C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803333CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803333D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803333D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803333D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803333DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803333E0: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x803333E4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x803333E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803333EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803333F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803333F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803333F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803333FC: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80333400: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333404: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333408: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033340C: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x80333410: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80333414: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333418: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033341C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333420: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333428: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x8033342C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333430: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333434: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333438: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x8033343C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80333440: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333444: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333448: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033344C: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80333450: lwc1        $f4, 0x24($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X24);
    // 0x80333454: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333458: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033345C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80333460: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333464: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333468: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033346C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80333470: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333474: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333478: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033347C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333480: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80333484: lwc1        $f10, 0x28($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X28);
    // 0x80333488: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033348C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333490: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80333494: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333498: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033349C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803334A0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x803334A4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803334A8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803334AC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803334B0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803334B4: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x803334B8: lwc1        $f4, 0x2C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x803334BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803334C0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803334C4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803334C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803334CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803334D4: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x803334D8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x803334DC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803334E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803334E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803334E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803334EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803334F0: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803334F4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803334F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333500: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80333504: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80333508: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033350C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333510: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333514: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333518: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033351C: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80333520: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333524: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333528: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033352C: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80333530: b           L_80333538
    // 0x80333534: nop

        goto L_80333538;
    // 0x80333534: nop

L_80333538:
    // 0x80333538: jr          $ra
    // 0x8033353C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033353C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332B08_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B08: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332B0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332B10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80332B14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B3C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80332B40: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B44: nop

    // 0x80332B48: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332B4C: nop

    // 0x80332B50: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80332B54: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B58: nop

    // 0x80332B5C: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80332B60: nop

    // 0x80332B64: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80332B68: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B6C: nop

    // 0x80332B70: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80332B74: nop

    // 0x80332B78: bne         $t5, $zero, L_80332DD4
    if (ctx->r13 != 0) {
        // 0x80332B7C: nop
    
            goto L_80332DD4;
    }
    // 0x80332B7C: nop

    // 0x80332B80: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B84: nop

    // 0x80332B88: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332B8C: nop

    // 0x80332B90: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80332B94: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80332B98: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B9C: nop

    // 0x80332BA0: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80332BA4: nop

    // 0x80332BA8: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80332BAC: jal         0x80014E80
    // 0x80332BB0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80332BB0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x80332BB4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80332BB8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BBC: nop

    // 0x80332BC0: beq         $s0, $zero, L_80332BF4
    if (ctx->r16 == 0) {
        // 0x80332BC4: nop
    
            goto L_80332BF4;
    }
    // 0x80332BC4: nop

    // 0x80332BC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332BCC: beq         $s0, $at, L_80332C3C
    if (ctx->r16 == ctx->r1) {
        // 0x80332BD0: nop
    
            goto L_80332C3C;
    }
    // 0x80332BD0: nop

    // 0x80332BD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332BD8: beq         $s0, $at, L_80332C84
    if (ctx->r16 == ctx->r1) {
        // 0x80332BDC: nop
    
            goto L_80332C84;
    }
    // 0x80332BDC: nop

    // 0x80332BE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80332BE4: beq         $s0, $at, L_80332CCC
    if (ctx->r16 == ctx->r1) {
        // 0x80332BE8: nop
    
            goto L_80332CCC;
    }
    // 0x80332BE8: nop

    // 0x80332BEC: b           L_80332D14
    // 0x80332BF0: nop

        goto L_80332D14;
    // 0x80332BF0: nop

L_80332BF4:
    // 0x80332BF4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80332BF8: addiu       $t1, $t1, 0x4B54
    ctx->r9 = ADD32(ctx->r9, 0X4B54);
    // 0x80332BFC: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80332C00: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C04: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80332C08: nop

    // 0x80332C0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332C10: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x80332C14: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80332C18: addiu       $t4, $t4, 0x4B54
    ctx->r12 = ADD32(ctx->r12, 0X4B54);
    // 0x80332C1C: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x80332C20: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C24: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80332C28: nop

    // 0x80332C2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332C30: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x80332C34: b           L_80332D5C
    // 0x80332C38: nop

        goto L_80332D5C;
    // 0x80332C38: nop

L_80332C3C:
    // 0x80332C3C: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80332C40: addiu       $t8, $t8, 0x4B54
    ctx->r24 = ADD32(ctx->r24, 0X4B54);
    // 0x80332C44: lh          $t6, 0x4($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X4);
    // 0x80332C48: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C4C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80332C50: nop

    // 0x80332C54: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332C58: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    // 0x80332C5C: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x80332C60: addiu       $t9, $t9, 0x4B54
    ctx->r25 = ADD32(ctx->r25, 0X4B54);
    // 0x80332C64: lh          $t1, 0x6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X6);
    // 0x80332C68: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C6C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80332C70: nop

    // 0x80332C74: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332C78: swc1        $f6, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f6.u32l;
    // 0x80332C7C: b           L_80332D5C
    // 0x80332C80: nop

        goto L_80332D5C;
    // 0x80332C80: nop

L_80332C84:
    // 0x80332C84: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80332C88: addiu       $t3, $t3, 0x4B54
    ctx->r11 = ADD32(ctx->r11, 0X4B54);
    // 0x80332C8C: lh          $t4, 0x8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8);
    // 0x80332C90: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C94: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80332C98: nop

    // 0x80332C9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332CA0: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
    // 0x80332CA4: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80332CA8: addiu       $t7, $t7, 0x4B54
    ctx->r15 = ADD32(ctx->r15, 0X4B54);
    // 0x80332CAC: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x80332CB0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332CB4: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80332CB8: nop

    // 0x80332CBC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332CC0: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x80332CC4: b           L_80332D5C
    // 0x80332CC8: nop

        goto L_80332D5C;
    // 0x80332CC8: nop

L_80332CCC:
    // 0x80332CCC: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80332CD0: addiu       $t0, $t0, 0x4B54
    ctx->r8 = ADD32(ctx->r8, 0X4B54);
    // 0x80332CD4: lh          $t9, 0xC($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XC);
    // 0x80332CD8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332CDC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80332CE0: nop

    // 0x80332CE4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332CE8: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x80332CEC: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80332CF0: addiu       $t2, $t2, 0x4B54
    ctx->r10 = ADD32(ctx->r10, 0X4B54);
    // 0x80332CF4: lh          $t3, 0xE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE);
    // 0x80332CF8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332CFC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80332D00: nop

    // 0x80332D04: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332D08: swc1        $f10, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f10.u32l;
    // 0x80332D0C: b           L_80332D5C
    // 0x80332D10: nop

        goto L_80332D5C;
    // 0x80332D10: nop

L_80332D14:
    // 0x80332D14: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80332D18: addiu       $t5, $t5, 0x4B54
    ctx->r13 = ADD32(ctx->r13, 0X4B54);
    // 0x80332D1C: lh          $t7, 0x10($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X10);
    // 0x80332D20: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332D24: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80332D28: nop

    // 0x80332D2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332D30: swc1        $f18, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f18.u32l;
    // 0x80332D34: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80332D38: addiu       $t6, $t6, 0x4B54
    ctx->r14 = ADD32(ctx->r14, 0X4B54);
    // 0x80332D3C: lh          $t0, 0x12($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X12);
    // 0x80332D40: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332D44: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80332D48: nop

    // 0x80332D4C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332D50: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
    // 0x80332D54: b           L_80332D5C
    // 0x80332D58: nop

        goto L_80332D5C;
    // 0x80332D58: nop

L_80332D5C:
    // 0x80332D5C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332D60: nop

    // 0x80332D64: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80332D68: nop

    // 0x80332D6C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80332D70: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
    // 0x80332D74: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332D78: nop

    // 0x80332D7C: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x80332D80: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332D84: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332D88: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80332D8C: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x80332D90: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332D94: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80332D98: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x80332D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332DA0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332DA4: jal         0x80027464
    // 0x80332DA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80332DA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80332DAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332DB0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332DB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332DB8: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80332DBC: nop

    // 0x80332DC0: bne         $t8, $at, L_80332DD4
    if (ctx->r24 != ctx->r1) {
        // 0x80332DC4: nop
    
            goto L_80332DD4;
    }
    // 0x80332DC4: nop

    // 0x80332DC8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332DCC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80332DD0: sh          $t6, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r14;
L_80332DD4:
    // 0x80332DD4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332DD8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80332DDC: lh          $t2, 0xA8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA8);
    // 0x80332DE0: nop

    // 0x80332DE4: bne         $t2, $at, L_80332E38
    if (ctx->r10 != ctx->r1) {
        // 0x80332DE8: nop
    
            goto L_80332E38;
    }
    // 0x80332DE8: nop

    // 0x80332DEC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332DF0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332DF4: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80332DF8: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80332DFC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332E00: lwc1        $f18, 0x1C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332E04: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x80332E08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E0C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332E10: jal         0x80027464
    // 0x80332E14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80332E14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80332E18: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332E1C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E20: nop

    // 0x80332E24: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x80332E28: nop

    // 0x80332E2C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80332E30: b           L_80333074
    // 0x80332E34: sh          $t5, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r13;
        goto L_80333074;
    // 0x80332E34: sh          $t5, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r13;
L_80332E38:
    // 0x80332E38: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E3C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80332E40: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80332E44: nop

    // 0x80332E48: bne         $t8, $at, L_80332ECC
    if (ctx->r24 != ctx->r1) {
        // 0x80332E4C: nop
    
            goto L_80332ECC;
    }
    // 0x80332E4C: nop

    // 0x80332E50: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E54: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332E58: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332E5C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80332E60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332E64: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332E68: addiu       $a1, $a1, 0x4B24
    ctx->r5 = ADD32(ctx->r5, 0X4B24);
    // 0x80332E6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332E70: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332E74: jal         0x80027464
    // 0x80332E78: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80332E78: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80332E7C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332E80: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E84: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332E88: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80332E8C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80332E90: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332E94: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332E98: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80332E9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332EA0: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332EA4: jal         0x80027464
    // 0x80332EA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80332EA8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80332EAC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332EB0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332EB4: nop

    // 0x80332EB8: lh          $t2, 0xA8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA8);
    // 0x80332EBC: nop

    // 0x80332EC0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80332EC4: b           L_80333074
    // 0x80332EC8: sh          $t3, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r11;
        goto L_80333074;
    // 0x80332EC8: sh          $t3, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r11;
L_80332ECC:
    // 0x80332ECC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332ED0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80332ED4: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x80332ED8: nop

    // 0x80332EDC: bne         $t5, $at, L_80332F30
    if (ctx->r13 != ctx->r1) {
        // 0x80332EE0: nop
    
            goto L_80332F30;
    }
    // 0x80332EE0: nop

    // 0x80332EE4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332EE8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332EEC: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332EF0: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80332EF4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332EF8: lwc1        $f18, 0x1C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332EFC: addiu       $a1, $a1, 0x4B3C
    ctx->r5 = ADD32(ctx->r5, 0X4B3C);
    // 0x80332F00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332F04: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332F08: jal         0x80027464
    // 0x80332F0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80332F0C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80332F10: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332F14: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F18: nop

    // 0x80332F1C: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80332F20: nop

    // 0x80332F24: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x80332F28: b           L_80333074
    // 0x80332F2C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
        goto L_80333074;
    // 0x80332F2C: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
L_80332F30:
    // 0x80332F30: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F34: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80332F38: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x80332F3C: nop

    // 0x80332F40: bne         $t2, $at, L_80332F94
    if (ctx->r10 != ctx->r1) {
        // 0x80332F44: nop
    
            goto L_80332F94;
    }
    // 0x80332F44: nop

    // 0x80332F48: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F4C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332F50: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80332F54: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80332F58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332F5C: lwc1        $f6, 0x1C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332F60: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80332F64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332F68: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332F6C: jal         0x80027464
    // 0x80332F70: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80332F70: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80332F74: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332F78: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F7C: nop

    // 0x80332F80: lh          $t4, 0xA8($t9)
    ctx->r12 = MEM_H(ctx->r25, 0XA8);
    // 0x80332F84: nop

    // 0x80332F88: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80332F8C: b           L_80333074
    // 0x80332F90: sh          $t5, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r13;
        goto L_80333074;
    // 0x80332F90: sh          $t5, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r13;
L_80332F94:
    // 0x80332F94: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F98: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x80332F9C: lh          $t8, 0xA8($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XA8);
    // 0x80332FA0: nop

    // 0x80332FA4: bne         $t8, $at, L_80332FF8
    if (ctx->r24 != ctx->r1) {
        // 0x80332FA8: nop
    
            goto L_80332FF8;
    }
    // 0x80332FA8: nop

    // 0x80332FAC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FB0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80332FB4: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332FB8: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80332FBC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332FC0: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332FC4: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x80332FC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332FCC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80332FD0: jal         0x80027464
    // 0x80332FD4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80332FD4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80332FD8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80332FDC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FE0: nop

    // 0x80332FE4: lh          $t0, 0xA8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA8);
    // 0x80332FE8: nop

    // 0x80332FEC: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80332FF0: b           L_80333074
    // 0x80332FF4: sh          $t2, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r10;
        goto L_80333074;
    // 0x80332FF4: sh          $t2, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r10;
L_80332FF8:
    // 0x80332FF8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FFC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80333000: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80333004: nop

    // 0x80333008: bne         $t4, $at, L_8033305C
    if (ctx->r12 != ctx->r1) {
        // 0x8033300C: nop
    
            goto L_8033305C;
    }
    // 0x8033300C: nop

    // 0x80333010: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80333014: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80333018: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033301C: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x80333020: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80333024: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333028: addiu       $a1, $a1, 0x4B30
    ctx->r5 = ADD32(ctx->r5, 0X4B30);
    // 0x8033302C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333030: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80333034: jal         0x80027464
    // 0x80333038: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80333038: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x8033303C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80333040: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80333044: nop

    // 0x80333048: lh          $t1, 0xA8($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA8);
    // 0x8033304C: nop

    // 0x80333050: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x80333054: b           L_80333074
    // 0x80333058: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
        goto L_80333074;
    // 0x80333058: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
L_8033305C:
    // 0x8033305C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80333060: nop

    // 0x80333064: lh          $t0, 0xA8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA8);
    // 0x80333068: nop

    // 0x8033306C: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x80333070: sh          $t2, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r10;
L_80333074:
    // 0x80333074: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80333078: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x8033307C: lh          $t3, 0xA8($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XA8);
    // 0x80333080: nop

    // 0x80333084: bne         $t3, $at, L_803330A4
    if (ctx->r11 != ctx->r1) {
        // 0x80333088: nop
    
            goto L_803330A4;
    }
    // 0x80333088: nop

    // 0x8033308C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80333090: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80333094: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80333098: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033309C: nop

    // 0x803330A0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803330A4:
    // 0x803330A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330AC: jal         0x803332F8
    // 0x803330B0: nop

    func_803332F8_unk_bin_22(rdram, ctx);
        goto after_9;
    // 0x803330B0: nop

    after_9:
    // 0x803330B4: b           L_803330BC
    // 0x803330B8: nop

        goto L_803330BC;
    // 0x803330B8: nop

L_803330BC:
    // 0x803330BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803330C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803330C4: jr          $ra
    // 0x803330C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803330C8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80334160_unk_bin_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334160: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334168: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033416C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334170: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334174: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334178: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033417C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334180: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334188: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033418C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334190: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334194: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80334198: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033419C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803341A0: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803341A4: nop

    // 0x803341A8: beq         $s0, $at, L_803341C4
    if (ctx->r16 == ctx->r1) {
        // 0x803341AC: nop
    
            goto L_803341C4;
    }
    // 0x803341AC: nop

    // 0x803341B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803341B4: beq         $s0, $at, L_803341D4
    if (ctx->r16 == ctx->r1) {
        // 0x803341B8: nop
    
            goto L_803341D4;
    }
    // 0x803341B8: nop

    // 0x803341BC: b           L_803341E4
    // 0x803341C0: nop

        goto L_803341E4;
    // 0x803341C0: nop

L_803341C4:
    // 0x803341C4: jal         0x80333F70
    // 0x803341C8: nop

    func_80333F70_unk_bin_22(rdram, ctx);
        goto after_0;
    // 0x803341C8: nop

    after_0:
    // 0x803341CC: b           L_803341EC
    // 0x803341D0: nop

        goto L_803341EC;
    // 0x803341D0: nop

L_803341D4:
    // 0x803341D4: jal         0x803340D8
    // 0x803341D8: nop

    func_803340D8_unk_bin_22(rdram, ctx);
        goto after_1;
    // 0x803341D8: nop

    after_1:
    // 0x803341DC: b           L_803341EC
    // 0x803341E0: nop

        goto L_803341EC;
    // 0x803341E0: nop

L_803341E4:
    // 0x803341E4: b           L_803341EC
    // 0x803341E8: nop

        goto L_803341EC;
    // 0x803341E8: nop

L_803341EC:
    // 0x803341EC: b           L_803341F4
    // 0x803341F0: nop

        goto L_803341F4;
    // 0x803341F0: nop

L_803341F4:
    // 0x803341F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803341F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803341FC: jr          $ra
    // 0x80334200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334200: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80333188_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033318C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333194: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333198: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033319C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803331A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803331A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803331A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803331AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803331B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803331B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803331B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803331BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803331C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803331C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803331C8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803331CC: nop

    // 0x803331D0: beq         $s0, $at, L_80333204
    if (ctx->r16 == ctx->r1) {
        // 0x803331D4: nop
    
            goto L_80333204;
    }
    // 0x803331D4: nop

    // 0x803331D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803331DC: beq         $s0, $at, L_80333214
    if (ctx->r16 == ctx->r1) {
        // 0x803331E0: nop
    
            goto L_80333214;
    }
    // 0x803331E0: nop

    // 0x803331E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803331E8: beq         $s0, $at, L_80333224
    if (ctx->r16 == ctx->r1) {
        // 0x803331EC: nop
    
            goto L_80333224;
    }
    // 0x803331EC: nop

    // 0x803331F0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803331F4: beq         $s0, $at, L_80333234
    if (ctx->r16 == ctx->r1) {
        // 0x803331F8: nop
    
            goto L_80333234;
    }
    // 0x803331F8: nop

    // 0x803331FC: b           L_80333244
    // 0x80333200: nop

        goto L_80333244;
    // 0x80333200: nop

L_80333204:
    // 0x80333204: jal         0x803324FC
    // 0x80333208: nop

    func_803324FC_unk_bin_23(rdram, ctx);
        goto after_0;
    // 0x80333208: nop

    after_0:
    // 0x8033320C: b           L_8033324C
    // 0x80333210: nop

        goto L_8033324C;
    // 0x80333210: nop

L_80333214:
    // 0x80333214: jal         0x80332810
    // 0x80333218: nop

    func_80332810_unk_bin_23(rdram, ctx);
        goto after_1;
    // 0x80333218: nop

    after_1:
    // 0x8033321C: b           L_8033324C
    // 0x80333220: nop

        goto L_8033324C;
    // 0x80333220: nop

L_80333224:
    // 0x80333224: jal         0x80332B20
    // 0x80333228: nop

    func_80332B20_unk_bin_23(rdram, ctx);
        goto after_2;
    // 0x80333228: nop

    after_2:
    // 0x8033322C: b           L_8033324C
    // 0x80333230: nop

        goto L_8033324C;
    // 0x80333230: nop

L_80333234:
    // 0x80333234: jal         0x80332E54
    // 0x80333238: nop

    func_80332E54_unk_bin_23(rdram, ctx);
        goto after_3;
    // 0x80333238: nop

    after_3:
    // 0x8033323C: b           L_8033324C
    // 0x80333240: nop

        goto L_8033324C;
    // 0x80333240: nop

L_80333244:
    // 0x80333244: b           L_8033324C
    // 0x80333248: nop

        goto L_8033324C;
    // 0x80333248: nop

L_8033324C:
    // 0x8033324C: b           L_80333254
    // 0x80333250: nop

        goto L_80333254;
    // 0x80333250: nop

L_80333254:
    // 0x80333254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333258: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033325C: jr          $ra
    // 0x80333260: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80333260: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803324CC_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803324CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803324D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803324D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803324D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803324DC: jal         0x8002B0E4
    // 0x803324E0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803324E0: nop

    after_0:
    // 0x803324E4: b           L_803324EC
    // 0x803324E8: nop

        goto L_803324EC;
    // 0x803324E8: nop

L_803324EC:
    // 0x803324EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803324F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803324F4: jr          $ra
    // 0x803324F8: nop

    return;
    // 0x803324F8: nop

;}
RECOMP_FUNC void func_8033029C_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033029C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803302A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803302A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803302B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803302C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803302CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803302D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302D4: nop

    // 0x803302D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803302DC: nop

    // 0x803302E0: bne         $t1, $zero, L_80330370
    if (ctx->r9 != 0) {
        // 0x803302E4: nop
    
            goto L_80330370;
    }
    // 0x803302E4: nop

    // 0x803302E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803302EC: nop

    // 0x803302F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803302F4: nop

    // 0x803302F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803302FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330300: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330304: nop

    // 0x80330308: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033030C: nop

    // 0x80330310: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330314: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330318: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033031C: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330324: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033032C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80330330: jal         0x8001C0EC
    // 0x80330334: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330334: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80330338: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033033C: nop

    // 0x80330340: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x80330344: nop

    // 0x80330348: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x8033034C: bne         $at, $zero, L_80330364
    if (ctx->r1 != 0) {
        // 0x80330350: nop
    
            goto L_80330364;
    }
    // 0x80330350: nop

    // 0x80330354: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330358: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8033035C: b           L_80330370
    // 0x80330360: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
        goto L_80330370;
    // 0x80330360: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_80330364:
    // 0x80330364: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330368: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033036C: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_80330370:
    // 0x80330370: jal         0x803316CC
    // 0x80330374: nop

    func_803316CC_unk_bin_23(rdram, ctx);
        goto after_1;
    // 0x80330374: nop

    after_1:
    // 0x80330378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033037C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330380: jal         0x8001B4AC
    // 0x80330384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330388: beq         $v0, $zero, L_80330468
    if (ctx->r2 == 0) {
        // 0x8033038C: nop
    
            goto L_80330468;
    }
    // 0x8033038C: nop

    // 0x80330390: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330394: nop

    // 0x80330398: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x8033039C: nop

    // 0x803303A0: bne         $t6, $zero, L_80330450
    if (ctx->r14 != 0) {
        // 0x803303A4: nop
    
            goto L_80330450;
    }
    // 0x803303A4: nop

    // 0x803303A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803303AC: nop

    // 0x803303B0: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x803303B4: nop

    // 0x803303B8: bne         $t7, $zero, L_80330418
    if (ctx->r15 != 0) {
        // 0x803303BC: nop
    
            goto L_80330418;
    }
    // 0x803303BC: nop

    // 0x803303C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803303C4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803303C8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803303CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803303D0: nop

    // 0x803303D4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x803303D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303DC: nop

    // 0x803303E0: lh          $t3, 0x100($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X100);
    // 0x803303E4: nop

    // 0x803303E8: slti        $at, $t3, 0x7
    ctx->r1 = SIGNED(ctx->r11) < 0X7 ? 1 : 0;
    // 0x803303EC: bne         $at, $zero, L_80330404
    if (ctx->r1 != 0) {
        // 0x803303F0: nop
    
            goto L_80330404;
    }
    // 0x803303F0: nop

    // 0x803303F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803303F8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x803303FC: b           L_80330410
    // 0x80330400: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
        goto L_80330410;
    // 0x80330400: sh          $t4, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r12;
L_80330404:
    // 0x80330404: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330408: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8033040C: sh          $t6, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r14;
L_80330410:
    // 0x80330410: b           L_80330448
    // 0x80330414: nop

        goto L_80330448;
    // 0x80330414: nop

L_80330418:
    // 0x80330418: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033041C: nop

    // 0x80330420: lh          $t8, 0xAA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAA);
    // 0x80330424: nop

    // 0x80330428: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033042C: sh          $t9, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r25;
    // 0x80330430: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330434: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80330438: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033043C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330440: nop

    // 0x80330444: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80330448:
    // 0x80330448: b           L_80330468
    // 0x8033044C: nop

        goto L_80330468;
    // 0x8033044C: nop

L_80330450:
    // 0x80330450: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330454: nop

    // 0x80330458: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x8033045C: nop

    // 0x80330460: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80330464: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
L_80330468:
    // 0x80330468: b           L_80330470
    // 0x8033046C: nop

        goto L_80330470;
    // 0x8033046C: nop

L_80330470:
    // 0x80330470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330478: jr          $ra
    // 0x8033047C: nop

    return;
    // 0x8033047C: nop

;}
RECOMP_FUNC void func_80332448_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033244C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332450: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332454: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332458: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033245C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332460: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332464: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332468: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033246C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332470: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332474: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332478: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033247C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80332480: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332484: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80332488: nop

    // 0x8033248C: bne         $t1, $at, L_803324AC
    if (ctx->r9 != ctx->r1) {
        // 0x80332490: nop
    
            goto L_803324AC;
    }
    // 0x80332490: nop

    // 0x80332494: b           L_8033249C
    // 0x80332498: nop

        goto L_8033249C;
    // 0x80332498: nop

L_8033249C:
    // 0x8033249C: jal         0x80331E10
    // 0x803324A0: nop

    func_80331E10_unk_bin_23(rdram, ctx);
        goto after_0;
    // 0x803324A0: nop

    after_0:
    // 0x803324A4: b           L_803324B4
    // 0x803324A8: nop

        goto L_803324B4;
    // 0x803324A8: nop

L_803324AC:
    // 0x803324AC: b           L_803324B4
    // 0x803324B0: nop

        goto L_803324B4;
    // 0x803324B0: nop

L_803324B4:
    // 0x803324B4: b           L_803324BC
    // 0x803324B8: nop

        goto L_803324BC;
    // 0x803324B8: nop

L_803324BC:
    // 0x803324BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803324C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803324C4: jr          $ra
    // 0x803324C8: nop

    return;
    // 0x803324C8: nop

;}
RECOMP_FUNC void func_80330480_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330484: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330488: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033048C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330490: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330494: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330498: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033049C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803304A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803304A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803304A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803304AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803304B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803304B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803304B8: nop

    // 0x803304BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803304C0: nop

    // 0x803304C4: bne         $t1, $zero, L_80330540
    if (ctx->r9 != 0) {
        // 0x803304C8: nop
    
            goto L_80330540;
    }
    // 0x803304C8: nop

    // 0x803304CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803304D0: nop

    // 0x803304D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803304D8: nop

    // 0x803304DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803304E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803304E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803304E8: nop

    // 0x803304EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803304F0: nop

    // 0x803304F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803304F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803304FC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330500: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330508: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033050C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330510: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330514: jal         0x8001C0EC
    // 0x80330518: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330518: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x8033051C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330520: nop

    // 0x80330524: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80330528: nop

    // 0x8033052C: bne         $t9, $zero, L_80330540
    if (ctx->r25 != 0) {
        // 0x80330530: nop
    
            goto L_80330540;
    }
    // 0x80330530: nop

    // 0x80330534: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330538: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8033053C: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
L_80330540:
    // 0x80330540: jal         0x803316CC
    // 0x80330544: nop

    func_803316CC_unk_bin_23(rdram, ctx);
        goto after_1;
    // 0x80330544: nop

    after_1:
    // 0x80330548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033054C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330550: jal         0x8001B4AC
    // 0x80330554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80330554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80330558: beq         $v0, $zero, L_80330578
    if (ctx->r2 == 0) {
        // 0x8033055C: nop
    
            goto L_80330578;
    }
    // 0x8033055C: nop

    // 0x80330560: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330564: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80330568: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033056C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330570: nop

    // 0x80330574: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330578:
    // 0x80330578: b           L_80330580
    // 0x8033057C: nop

        goto L_80330580;
    // 0x8033057C: nop

L_80330580:
    // 0x80330580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330584: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330588: jr          $ra
    // 0x8033058C: nop

    return;
    // 0x8033058C: nop

;}
RECOMP_FUNC void func_8033153C_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033153C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80331548: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033154C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331550: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331554: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331558: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033155C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331564: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331568: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033156C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331570: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331574: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331578: nop

    // 0x8033157C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80331580: nop

    // 0x80331584: bne         $t1, $zero, L_803315A4
    if (ctx->r9 != 0) {
        // 0x80331588: nop
    
            goto L_803315A4;
    }
    // 0x80331588: nop

    // 0x8033158C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331590: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331594: jal         0x8001BB34
    // 0x80331598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80331598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033159C: b           L_80331600
    // 0x803315A0: nop

        goto L_80331600;
    // 0x803315A0: nop

L_803315A4:
    // 0x803315A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803315A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315AC: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x803315B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315B4: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x803315B8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803315BC: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803315C0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803315C4: jal         0x8001BB34
    // 0x803315C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803315C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x803315CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803315D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803315D4: lh          $t6, 0x108($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X108);
    // 0x803315D8: nop

    // 0x803315DC: bne         $t6, $at, L_80331600
    if (ctx->r14 != ctx->r1) {
        // 0x803315E0: nop
    
            goto L_80331600;
    }
    // 0x803315E0: nop

    // 0x803315E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803315F0: addiu       $a3, $a3, -0x5D68
    ctx->r7 = ADD32(ctx->r7, -0X5D68);
    // 0x803315F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803315F8: jal         0x8001ABF4
    // 0x803315FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803315FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80331600:
    // 0x80331600: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331604: nop

    // 0x80331608: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x8033160C: nop

    // 0x80331610: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331614: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x80331618: beq         $at, $zero, L_803316AC
    if (ctx->r1 == 0) {
        // 0x8033161C: nop
    
            goto L_803316AC;
    }
    // 0x8033161C: nop

    // 0x80331620: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331624: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331628: addu        $at, $at, $t9
    gpr jr_addend_80331634 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033162C: lw          $t9, 0x32D0($at)
    ctx->r25 = ADD32(ctx->r1, 0X32D0);
    // 0x80331630: nop

    // 0x80331634: jr          $t9
    // 0x80331638: nop

    switch (jr_addend_80331634 >> 2) {
        case 0: goto L_8033163C; break;
        case 1: goto L_8033164C; break;
        case 2: goto L_8033165C; break;
        case 3: goto L_8033166C; break;
        case 4: goto L_8033167C; break;
        case 5: goto L_8033168C; break;
        case 6: goto L_8033169C; break;
        default: switch_error(__func__, 0x80331634, 0x803332D0);
    }
    // 0x80331638: nop

L_8033163C:
    // 0x8033163C: jal         0x8033029C
    // 0x80331640: nop

    func_8033029C_unk_bin_23(rdram, ctx);
        goto after_3;
    // 0x80331640: nop

    after_3:
    // 0x80331644: b           L_803316B4
    // 0x80331648: nop

        goto L_803316B4;
    // 0x80331648: nop

L_8033164C:
    // 0x8033164C: jal         0x80330480
    // 0x80331650: nop

    func_80330480_unk_bin_23(rdram, ctx);
        goto after_4;
    // 0x80331650: nop

    after_4:
    // 0x80331654: b           L_803316B4
    // 0x80331658: nop

        goto L_803316B4;
    // 0x80331658: nop

L_8033165C:
    // 0x8033165C: jal         0x80330590
    // 0x80331660: nop

    func_80330590_unk_bin_23(rdram, ctx);
        goto after_5;
    // 0x80331660: nop

    after_5:
    // 0x80331664: b           L_803316B4
    // 0x80331668: nop

        goto L_803316B4;
    // 0x80331668: nop

L_8033166C:
    // 0x8033166C: jal         0x80330940
    // 0x80331670: nop

    func_80330940_unk_bin_23(rdram, ctx);
        goto after_6;
    // 0x80331670: nop

    after_6:
    // 0x80331674: b           L_803316B4
    // 0x80331678: nop

        goto L_803316B4;
    // 0x80331678: nop

L_8033167C:
    // 0x8033167C: jal         0x80330A2C
    // 0x80331680: nop

    func_80330A2C_unk_bin_23(rdram, ctx);
        goto after_7;
    // 0x80331680: nop

    after_7:
    // 0x80331684: b           L_803316B4
    // 0x80331688: nop

        goto L_803316B4;
    // 0x80331688: nop

L_8033168C:
    // 0x8033168C: jal         0x803312A8
    // 0x80331690: nop

    func_803312A8_unk_bin_23(rdram, ctx);
        goto after_8;
    // 0x80331690: nop

    after_8:
    // 0x80331694: b           L_803316B4
    // 0x80331698: nop

        goto L_803316B4;
    // 0x80331698: nop

L_8033169C:
    // 0x8033169C: jal         0x80331394
    // 0x803316A0: nop

    func_80331394_unk_bin_23(rdram, ctx);
        goto after_9;
    // 0x803316A0: nop

    after_9:
    // 0x803316A4: b           L_803316B4
    // 0x803316A8: nop

        goto L_803316B4;
    // 0x803316A8: nop

L_803316AC:
    // 0x803316AC: b           L_803316B4
    // 0x803316B0: nop

        goto L_803316B4;
    // 0x803316B0: nop

L_803316B4:
    // 0x803316B4: b           L_803316BC
    // 0x803316B8: nop

        goto L_803316BC;
    // 0x803316B8: nop

L_803316BC:
    // 0x803316BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803316C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803316C4: jr          $ra
    // 0x803316C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803316C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80332E54_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332E58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332E5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E84: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80332E88: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332E8C: nop

    // 0x80332E90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332E94: nop

    // 0x80332E98: bne         $t1, $zero, L_80332EFC
    if (ctx->r9 != 0) {
        // 0x80332E9C: nop
    
            goto L_80332EFC;
    }
    // 0x80332E9C: nop

    // 0x80332EA0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332EA4: nop

    // 0x80332EA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332EAC: nop

    // 0x80332EB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332EB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332EB8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332EBC: nop

    // 0x80332EC0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332EC4: nop

    // 0x80332EC8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332ECC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332ED0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332ED4: addiu       $t7, $t7, -0x4310
    ctx->r15 = ADD32(ctx->r15, -0X4310);
    // 0x80332ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332EDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332EE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332EE4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332EE8: jal         0x8001C0EC
    // 0x80332EEC: addiu       $a3, $zero, 0x162
    ctx->r7 = ADD32(0, 0X162);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332EEC: addiu       $a3, $zero, 0x162
    ctx->r7 = ADD32(0, 0X162);
    after_0:
    // 0x80332EF0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332EF4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80332EF8: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80332EFC:
    // 0x80332EFC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332F00: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80332F04: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332F08: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332F0C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332F10: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80332F14: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332F18: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332F1C: jal         0x800156C4
    // 0x80332F20: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_1;
    // 0x80332F20: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x80332F24: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332F28: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F2C: jal         0x80015744
    // 0x80332F30: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_2;
    // 0x80332F30: nop

    after_2:
    // 0x80332F34: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332F38: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332F3C: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F40: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80332F44: jal         0x8002A800
    // 0x80332F48: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_3;
    // 0x80332F48: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_3:
    // 0x80332F4C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80332F50: nop

    // 0x80332F54: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332F58: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80332F5C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332F60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332F64: nop

    // 0x80332F68: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80332F6C: nop

    // 0x80332F70: bc1t        L_80332FA4
    if (c1cs) {
        // 0x80332F74: nop
    
            goto L_80332FA4;
    }
    // 0x80332F74: nop

    // 0x80332F78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332F7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332F80: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332F84: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332F88: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80332F8C: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332F90: jal         0x80015538
    // 0x80332F94: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80332F94: nop

    after_4:
    // 0x80332F98: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332F9C: nop

    // 0x80332FA0: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
L_80332FA4:
    // 0x80332FA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332FAC: jal         0x8002A8B4
    // 0x80332FB0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x80332FB0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_5:
    // 0x80332FB4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332FB8: nop

    // 0x80332FBC: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332FC0: nop

    // 0x80332FC4: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    // 0x80332FC8: jal         0x80014E80
    // 0x80332FCC: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x80332FCC: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_6:
    // 0x80332FD0: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80332FD4: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x80332FD8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80332FDC: addiu       $t7, $t5, 0x14
    ctx->r15 = ADD32(ctx->r13, 0X14);
    // 0x80332FE0: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80332FE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332FE8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80332FEC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332FF0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80332FF4: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x80332FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333000: jal         0x80028FA0
    // 0x80333004: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x80333004: nop

    after_7:
    // 0x80333008: beq         $v0, $zero, L_80333020
    if (ctx->r2 == 0) {
        // 0x8033300C: nop
    
            goto L_80333020;
    }
    // 0x8033300C: nop

    // 0x80333010: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333014: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333018: jal         0x80029B60
    // 0x8033301C: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x8033301C: nop

    after_8:
L_80333020:
    // 0x80333020: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80333024: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80333028: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033302C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333030: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333034: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80333038: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8033303C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333040: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333044: jal         0x800295C0
    // 0x80333048: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x80333048: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x8033304C: beq         $v0, $zero, L_8033306C
    if (ctx->r2 == 0) {
        // 0x80333050: nop
    
            goto L_8033306C;
    }
    // 0x80333050: nop

    // 0x80333054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033305C: jal         0x8002B0E4
    // 0x80333060: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x80333060: nop

    after_10:
    // 0x80333064: b           L_80333178
    // 0x80333068: nop

        goto L_80333178;
    // 0x80333068: nop

L_8033306C:
    // 0x8033306C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80333070: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333074: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333078: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033307C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333080: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80333084: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80333088: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033308C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80333090: jal         0x800295C0
    // 0x80333094: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x80333094: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x80333098: beq         $v0, $zero, L_803330B8
    if (ctx->r2 == 0) {
        // 0x8033309C: nop
    
            goto L_803330B8;
    }
    // 0x8033309C: nop

    // 0x803330A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330A8: jal         0x8002B0E4
    // 0x803330AC: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x803330AC: nop

    after_12:
    // 0x803330B0: b           L_80333178
    // 0x803330B4: nop

        goto L_80333178;
    // 0x803330B4: nop

L_803330B8:
    // 0x803330B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330C0: jal         0x80029D8C
    // 0x803330C4: nop

    func_80029D8C(rdram, ctx);
        goto after_13;
    // 0x803330C4: nop

    after_13:
    // 0x803330C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803330CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803330D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803330DC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x803330E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803330E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803330E8: jal         0x80029018
    // 0x803330EC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_14;
    // 0x803330EC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x803330F0: beq         $v0, $zero, L_80333110
    if (ctx->r2 == 0) {
        // 0x803330F4: nop
    
            goto L_80333110;
    }
    // 0x803330F4: nop

    // 0x803330F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333100: jal         0x8002B0E4
    // 0x80333104: nop

    func_8002B0E4(rdram, ctx);
        goto after_15;
    // 0x80333104: nop

    after_15:
    // 0x80333108: b           L_80333178
    // 0x8033310C: nop

        goto L_80333178;
    // 0x8033310C: nop

L_80333110:
    // 0x80333110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333118: jal         0x8001B4AC
    // 0x8033311C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_16;
    // 0x8033311C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80333120: beq         $v0, $zero, L_80333170
    if (ctx->r2 == 0) {
        // 0x80333124: nop
    
            goto L_80333170;
    }
    // 0x80333124: nop

    // 0x80333128: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033312C: nop

    // 0x80333130: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80333134: nop

    // 0x80333138: bne         $t0, $zero, L_80333158
    if (ctx->r8 != 0) {
        // 0x8033313C: nop
    
            goto L_80333158;
    }
    // 0x8033313C: nop

    // 0x80333140: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333144: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333148: jal         0x8002B0E4
    // 0x8033314C: nop

    func_8002B0E4(rdram, ctx);
        goto after_17;
    // 0x8033314C: nop

    after_17:
    // 0x80333150: b           L_80333170
    // 0x80333154: nop

        goto L_80333170;
    // 0x80333154: nop

L_80333158:
    // 0x80333158: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033315C: nop

    // 0x80333160: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80333164: nop

    // 0x80333168: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8033316C: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_80333170:
    // 0x80333170: b           L_80333178
    // 0x80333174: nop

        goto L_80333178;
    // 0x80333174: nop

L_80333178:
    // 0x80333178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033317C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80333180: jr          $ra
    // 0x80333184: nop

    return;
    // 0x80333184: nop

;}
RECOMP_FUNC void func_803300E4_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803300E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803300E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803300EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803300F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803300F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803300F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803300FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330100: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330108: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033010C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330110: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330114: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80330118: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033011C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80330120: nop

    // 0x80330124: bne         $t0, $zero, L_80330264
    if (ctx->r8 != 0) {
        // 0x80330128: nop
    
            goto L_80330264;
    }
    // 0x80330128: nop

    // 0x8033012C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80330130: nop

    // 0x80330134: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80330138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330140: jal         0x80069E60
    // 0x80330144: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80330144: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x80330148: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033014C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330150: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x80330154: nop

    // 0x80330158: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033015C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330160: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330164: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330168: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033016C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330170: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80330174: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80330178: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x8033017C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80330180: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80330184: nop

    // 0x80330188: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x8033018C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330190: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80330194: nop

    // 0x80330198: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x8033019C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803301A0: nop

    // 0x803301A4: lwc1        $f6, 0x2C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803301A8: nop

    // 0x803301AC: swc1        $f6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f6.u32l;
    // 0x803301B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803301B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803301B8: nop

    // 0x803301BC: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x803301C0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x803301C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803301C8: lh          $t2, 0xE8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE8);
    // 0x803301CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301D0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803301D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803301D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803301DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803301E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803301E4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803301E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803301EC: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x803301F0: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x803301F4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803301F8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803301FC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330200: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330204: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330208: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033020C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80330210: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80330214: lwc1        $f16, 0x2C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330218: nop

    // 0x8033021C: swc1        $f16, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f16.u32l;
    // 0x80330220: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330224: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330228: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8033022C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330230: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330234: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330238: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033023C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330240: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330244: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330248: swc1        $f18, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f18.u32l;
    // 0x8033024C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330250: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330254: jal         0x8001BBDC
    // 0x80330258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80330258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8033025C: b           L_80330284
    // 0x80330260: nop

        goto L_80330284;
    // 0x80330260: nop

L_80330264:
    // 0x80330264: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330268: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x8033026C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330270: bne         $t2, $at, L_80330284
    if (ctx->r10 != ctx->r1) {
        // 0x80330274: nop
    
            goto L_80330284;
    }
    // 0x80330274: nop

    // 0x80330278: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033027C: addiu       $t3, $zero, 0x78
    ctx->r11 = ADD32(0, 0X78);
    // 0x80330280: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_80330284:
    // 0x80330284: b           L_8033028C
    // 0x80330288: nop

        goto L_8033028C;
    // 0x80330288: nop

L_8033028C:
    // 0x8033028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80330294: jr          $ra
    // 0x80330298: nop

    return;
    // 0x80330298: nop

;}
RECOMP_FUNC void func_80331394_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331394: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033139C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803313A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803313A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803313A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803313AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803313B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803313BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803313C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803313C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803313C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803313CC: nop

    // 0x803313D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803313D4: nop

    // 0x803313D8: bne         $t1, $zero, L_80331428
    if (ctx->r9 != 0) {
        // 0x803313DC: nop
    
            goto L_80331428;
    }
    // 0x803313DC: nop

    // 0x803313E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803313E4: nop

    // 0x803313E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803313EC: nop

    // 0x803313F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803313F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803313F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803313FC: nop

    // 0x80331400: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331404: nop

    // 0x80331408: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033140C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331410: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80331414: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80331418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033141C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331420: jal         0x80069E60
    // 0x80331424: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80331424: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_0:
L_80331428:
    // 0x80331428: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033142C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80331430: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80331434: nop

    // 0x80331438: bne         $t0, $at, L_8033147C
    if (ctx->r8 != ctx->r1) {
        // 0x8033143C: nop
    
            goto L_8033147C;
    }
    // 0x8033143C: nop

    // 0x80331440: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331444: nop

    // 0x80331448: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033144C: nop

    // 0x80331450: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80331454: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
    // 0x80331458: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033145C: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80331460: lwc1        $f12, 0x0($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80331464: lwc1        $f14, 0x4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80331468: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x8033146C: jal         0x8007F070
    // 0x80331470: nop

    func_8007F070(rdram, ctx);
        goto after_1;
    // 0x80331470: nop

    after_1:
    // 0x80331474: b           L_80331524
    // 0x80331478: nop

        goto L_80331524;
    // 0x80331478: nop

L_8033147C:
    // 0x8033147C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331480: nop

    // 0x80331484: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80331488: nop

    // 0x8033148C: bne         $t5, $zero, L_8033150C
    if (ctx->r13 != 0) {
        // 0x80331490: nop
    
            goto L_8033150C;
    }
    // 0x80331490: nop

    // 0x80331494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033149C: jal         0x8001BB34
    // 0x803314A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x803314A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x803314A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803314A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803314AC: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x803314B0: jal         0x8001BB34
    // 0x803314B4: nop

    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x803314B4: nop

    after_3:
    // 0x803314B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803314BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803314C0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803314C4: nop

    // 0x803314C8: bne         $t9, $at, L_80331504
    if (ctx->r25 != ctx->r1) {
        // 0x803314CC: nop
    
            goto L_80331504;
    }
    // 0x803314CC: nop

    // 0x803314D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314DC: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x803314E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803314E4: jal         0x800175F0
    // 0x803314E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x803314E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x803314EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803314F0: nop

    // 0x803314F4: lbu         $t3, 0x132($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X132);
    // 0x803314F8: nop

    // 0x803314FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331500: sb          $t4, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r12;
L_80331504:
    // 0x80331504: b           L_80331524
    // 0x80331508: nop

        goto L_80331524;
    // 0x80331508: nop

L_8033150C:
    // 0x8033150C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331510: nop

    // 0x80331514: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x80331518: nop

    // 0x8033151C: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80331520: sh          $t6, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r14;
L_80331524:
    // 0x80331524: b           L_8033152C
    // 0x80331528: nop

        goto L_8033152C;
    // 0x80331528: nop

L_8033152C:
    // 0x8033152C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331534: jr          $ra
    // 0x80331538: nop

    return;
    // 0x80331538: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x3294
    ctx->r5 = ADD32(ctx->r5, 0X3294);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
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
    // 0x8033006C: addiu       $a3, $a3, -0x5D68
    ctx->r7 = ADD32(ctx->r7, -0X5D68);
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
    // 0x8033007C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330080: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330084: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330088: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033008C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330090: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330094: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330098: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033009C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x803300A0: sh          $t1, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r9;
    // 0x803300A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803300A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300AC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803300B0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300B8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300C0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803300C4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x803300C8: sh          $t4, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r12;
    // 0x803300CC: b           L_803300D4
    // 0x803300D0: nop

        goto L_803300D4;
    // 0x803300D0: nop

L_803300D4:
    // 0x803300D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300DC: jr          $ra
    // 0x803300E0: nop

    return;
    // 0x803300E0: nop

;}
RECOMP_FUNC void func_80331D04_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331D08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331D14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331D18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331D1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331D24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331D28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331D2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331D30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331D34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331D38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D3C: nop

    // 0x80331D40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331D44: nop

    // 0x80331D48: bne         $t1, $zero, L_80331DA0
    if (ctx->r9 != 0) {
        // 0x80331D4C: nop
    
            goto L_80331DA0;
    }
    // 0x80331D4C: nop

    // 0x80331D50: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331D54: nop

    // 0x80331D58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D5C: nop

    // 0x80331D60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331D64: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331D68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331D6C: nop

    // 0x80331D70: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331D74: nop

    // 0x80331D78: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331D7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D80: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331D84: addiu       $t7, $t7, -0x4304
    ctx->r15 = ADD32(ctx->r15, -0X4304);
    // 0x80331D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331D98: jal         0x8001C0EC
    // 0x80331D9C: addiu       $a3, $zero, 0x163
    ctx->r7 = ADD32(0, 0X163);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331D9C: addiu       $a3, $zero, 0x163
    ctx->r7 = ADD32(0, 0X163);
    after_0:
L_80331DA0:
    // 0x80331DA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DA8: jal         0x8001B4AC
    // 0x80331DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80331DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331DB0: beq         $v0, $zero, L_80331DC8
    if (ctx->r2 == 0) {
        // 0x80331DB4: nop
    
            goto L_80331DC8;
    }
    // 0x80331DB4: nop

    // 0x80331DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DC0: jal         0x8002B114
    // 0x80331DC4: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80331DC4: nop

    after_2:
L_80331DC8:
    // 0x80331DC8: b           L_80331DD0
    // 0x80331DCC: nop

        goto L_80331DD0;
    // 0x80331DCC: nop

L_80331DD0:
    // 0x80331DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331DD8: jr          $ra
    // 0x80331DDC: nop

    return;
    // 0x80331DDC: nop

;}
RECOMP_FUNC void func_80332810_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332810: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332814: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332818: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033281C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332820: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332824: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332828: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033282C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332830: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332834: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332838: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033283C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332840: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80332844: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332848: nop

    // 0x8033284C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332850: nop

    // 0x80332854: bne         $t1, $zero, L_80332894
    if (ctx->r9 != 0) {
        // 0x80332858: nop
    
            goto L_80332894;
    }
    // 0x80332858: nop

    // 0x8033285C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332860: nop

    // 0x80332864: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332868: nop

    // 0x8033286C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332870: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332874: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332878: nop

    // 0x8033287C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332880: nop

    // 0x80332884: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332888: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033288C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80332890: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80332894:
    // 0x80332894: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80332898: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8033289C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803328A0: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803328A4: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803328A8: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803328AC: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803328B0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803328B4: jal         0x800156C4
    // 0x803328B8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_0;
    // 0x803328B8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x803328BC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803328C0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803328C4: jal         0x80015744
    // 0x803328C8: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_1;
    // 0x803328C8: nop

    after_1:
    // 0x803328CC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x803328D0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803328D4: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803328D8: lwc1        $f12, 0x40($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X40);
    // 0x803328DC: jal         0x8002A800
    // 0x803328E0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_2;
    // 0x803328E0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_2:
    // 0x803328E4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x803328E8: nop

    // 0x803328EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803328F0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x803328F4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803328F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803328FC: nop

    // 0x80332900: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80332904: nop

    // 0x80332908: bc1t        L_8033293C
    if (c1cs) {
        // 0x8033290C: nop
    
            goto L_8033293C;
    }
    // 0x8033290C: nop

    // 0x80332910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332918: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033291C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332920: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80332924: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332928: jal         0x80015538
    // 0x8033292C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033292C: nop

    after_3:
    // 0x80332930: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332934: nop

    // 0x80332938: swc1        $f0, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f0.u32l;
L_8033293C:
    // 0x8033293C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332944: jal         0x8002A8B4
    // 0x80332948: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80332948: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x8033294C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332950: nop

    // 0x80332954: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80332958: nop

    // 0x8033295C: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
    // 0x80332960: jal         0x80014E80
    // 0x80332964: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x80332964: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_5:
    // 0x80332968: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8033296C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x80332970: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80332974: addiu       $t5, $t6, 0x14
    ctx->r13 = ADD32(ctx->r14, 0X14);
    // 0x80332978: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8033297C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332980: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80332984: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332988: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8033298C: swc1        $f8, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f8.u32l;
    // 0x80332990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332998: jal         0x80028FA0
    // 0x8033299C: nop

    func_80028FA0(rdram, ctx);
        goto after_6;
    // 0x8033299C: nop

    after_6:
    // 0x803329A0: beq         $v0, $zero, L_803329B8
    if (ctx->r2 == 0) {
        // 0x803329A4: nop
    
            goto L_803329B8;
    }
    // 0x803329A4: nop

    // 0x803329A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329B0: jal         0x80029B60
    // 0x803329B4: nop

    func_80029B60(rdram, ctx);
        goto after_7;
    // 0x803329B4: nop

    after_7:
L_803329B8:
    // 0x803329B8: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x803329BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803329C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803329C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329CC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803329D0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803329D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803329D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803329DC: jal         0x800295C0
    // 0x803329E0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x803329E0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x803329E4: beq         $v0, $zero, L_80332A04
    if (ctx->r2 == 0) {
        // 0x803329E8: nop
    
            goto L_80332A04;
    }
    // 0x803329E8: nop

    // 0x803329EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803329F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329F4: jal         0x8002B0E4
    // 0x803329F8: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x803329F8: nop

    after_9:
    // 0x803329FC: b           L_80332B10
    // 0x80332A00: nop

        goto L_80332B10;
    // 0x80332A00: nop

L_80332A04:
    // 0x80332A04: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332A08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332A0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332A10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A18: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80332A1C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80332A20: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332A24: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80332A28: jal         0x800295C0
    // 0x80332A2C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x80332A2C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x80332A30: beq         $v0, $zero, L_80332A50
    if (ctx->r2 == 0) {
        // 0x80332A34: nop
    
            goto L_80332A50;
    }
    // 0x80332A34: nop

    // 0x80332A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A40: jal         0x8002B0E4
    // 0x80332A44: nop

    func_8002B0E4(rdram, ctx);
        goto after_11;
    // 0x80332A44: nop

    after_11:
    // 0x80332A48: b           L_80332B10
    // 0x80332A4C: nop

        goto L_80332B10;
    // 0x80332A4C: nop

L_80332A50:
    // 0x80332A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A58: jal         0x80029D8C
    // 0x80332A5C: nop

    func_80029D8C(rdram, ctx);
        goto after_12;
    // 0x80332A5C: nop

    after_12:
    // 0x80332A60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332A64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332A68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332A74: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80332A78: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332A7C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332A80: jal         0x80029018
    // 0x80332A84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_13;
    // 0x80332A84: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x80332A88: beq         $v0, $zero, L_80332AA8
    if (ctx->r2 == 0) {
        // 0x80332A8C: nop
    
            goto L_80332AA8;
    }
    // 0x80332A8C: nop

    // 0x80332A90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A98: jal         0x8002B0E4
    // 0x80332A9C: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x80332A9C: nop

    after_14:
    // 0x80332AA0: b           L_80332B10
    // 0x80332AA4: nop

        goto L_80332B10;
    // 0x80332AA4: nop

L_80332AA8:
    // 0x80332AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AB0: jal         0x8001B4AC
    // 0x80332AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_15;
    // 0x80332AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80332AB8: beq         $v0, $zero, L_80332B08
    if (ctx->r2 == 0) {
        // 0x80332ABC: nop
    
            goto L_80332B08;
    }
    // 0x80332ABC: nop

    // 0x80332AC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332AC4: nop

    // 0x80332AC8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80332ACC: nop

    // 0x80332AD0: bne         $t9, $zero, L_80332AF0
    if (ctx->r25 != 0) {
        // 0x80332AD4: nop
    
            goto L_80332AF0;
    }
    // 0x80332AD4: nop

    // 0x80332AD8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332ADC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80332AE0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80332AE4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332AE8: b           L_80332B08
    // 0x80332AEC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_80332B08;
    // 0x80332AEC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80332AF0:
    // 0x80332AF0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332AF4: nop

    // 0x80332AF8: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80332AFC: nop

    // 0x80332B00: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x80332B04: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_80332B08:
    // 0x80332B08: b           L_80332B10
    // 0x80332B0C: nop

        goto L_80332B10;
    // 0x80332B0C: nop

L_80332B10:
    // 0x80332B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332B14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80332B18: jr          $ra
    // 0x80332B1C: nop

    return;
    // 0x80332B1C: nop

;}
RECOMP_FUNC void func_80330590_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330590: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80330594: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330598: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033059C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803305A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803305A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305C0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803305C4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803305C8: nop

    // 0x803305CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803305D0: nop

    // 0x803305D4: bne         $t1, $zero, L_80330898
    if (ctx->r9 != 0) {
        // 0x803305D8: nop
    
            goto L_80330898;
    }
    // 0x803305D8: nop

    // 0x803305DC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803305E0: nop

    // 0x803305E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803305E8: nop

    // 0x803305EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803305F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803305F4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803305F8: nop

    // 0x803305FC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330600: nop

    // 0x80330604: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330608: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033060C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330610: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330618: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033061C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330620: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80330624: jal         0x8001C0EC
    // 0x80330628: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330628: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x8033062C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80330630: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80330634: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330638: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8033063C: nop

    // 0x80330640: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330644: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x80330648: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033064C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80330650: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330654: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80330658: jal         0x80015538
    // 0x8033065C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033065C: nop

    after_1:
    // 0x80330660: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80330664: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330668: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033066C: lwc1        $f19, 0x32B0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X32B0);
    // 0x80330670: lwc1        $f18, 0x32B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X32B4);
    // 0x80330674: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330678: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033067C: jal         0x80034970
    // 0x80330680: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80330680: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_2:
    // 0x80330684: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x80330688: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033068C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80330690: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80330694: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330698: nop

    // 0x8033069C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803306A0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x803306A4: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803306A8: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803306AC: lwc1        $f7, 0x32B8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X32B8);
    // 0x803306B0: lwc1        $f6, 0x32BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X32BC);
    // 0x803306B4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803306B8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803306BC: jal         0x80036570
    // 0x803306C0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x803306C0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x803306C4: lui         $at, 0x43C9
    ctx->r1 = S32(0X43C9 << 16);
    // 0x803306C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803306CC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803306D0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x803306D4: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803306D8: nop

    // 0x803306DC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803306E0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x803306E4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803306E8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803306EC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803306F0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803306F4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803306F8: addiu       $a1, $a1, 0x327C
    ctx->r5 = ADD32(ctx->r5, 0X327C);
    // 0x803306FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330700: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330704: jal         0x80027464
    // 0x80330708: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80330708: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8033070C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330710: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330718: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033071C: jal         0x80019448
    // 0x80330720: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x80330720: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80330724: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80330728: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033072C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80330730: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80330734: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330738: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033073C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80330740: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330744: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330748: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033074C: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80330750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330754: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330758: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8033075C: jal         0x80026F10
    // 0x80330760: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80330760: nop

    after_6:
    // 0x80330764: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80330768: lui         $at, 0xC190
    ctx->r1 = S32(0XC190 << 16);
    // 0x8033076C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330770: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80330774: jal         0x80015538
    // 0x80330778: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80330778: nop

    after_7:
    // 0x8033077C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80330780: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330784: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330788: lwc1        $f19, 0x32C0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X32C0);
    // 0x8033078C: lwc1        $f18, 0x32C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X32C4);
    // 0x80330790: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80330794: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80330798: jal         0x80034970
    // 0x8033079C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_8;
    // 0x8033079C: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_8:
    // 0x803307A0: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x803307A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803307A8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803307AC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x803307B0: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x803307B4: nop

    // 0x803307B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803307BC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x803307C0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803307C4: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803307C8: lwc1        $f7, 0x32C8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X32C8);
    // 0x803307CC: lwc1        $f6, 0x32CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X32CC);
    // 0x803307D0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803307D4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x803307D8: jal         0x80036570
    // 0x803307DC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_9;
    // 0x803307DC: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_9:
    // 0x803307E0: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x803307E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803307E8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803307EC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x803307F0: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x803307F4: nop

    // 0x803307F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803307FC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80330800: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330804: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330808: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033080C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80330810: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80330814: addiu       $a1, $a1, 0x327C
    ctx->r5 = ADD32(ctx->r5, 0X327C);
    // 0x80330818: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033081C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330820: jal         0x80027464
    // 0x80330824: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x80330824: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x80330828: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033082C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330830: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330834: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330838: jal         0x80019448
    // 0x8033083C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_11;
    // 0x8033083C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x80330840: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80330844: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330848: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033084C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330850: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330854: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330858: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8033085C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330860: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330864: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330868: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x8033086C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330874: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80330878: jal         0x80026F10
    // 0x8033087C: nop

    func_80026F10(rdram, ctx);
        goto after_12;
    // 0x8033087C: nop

    after_12:
    // 0x80330880: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80330884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330888: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x8033088C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330890: jal         0x800175F0
    // 0x80330894: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_13;
    // 0x80330894: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
L_80330898:
    // 0x80330898: jal         0x803316CC
    // 0x8033089C: nop

    func_803316CC_unk_bin_23(rdram, ctx);
        goto after_14;
    // 0x8033089C: nop

    after_14:
    // 0x803308A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803308A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803308A8: jal         0x8001B4AC
    // 0x803308AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_15;
    // 0x803308AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x803308B0: beq         $v0, $zero, L_80330928
    if (ctx->r2 == 0) {
        // 0x803308B4: nop
    
            goto L_80330928;
    }
    // 0x803308B4: nop

    // 0x803308B8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803308BC: nop

    // 0x803308C0: lh          $t4, 0xB6($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XB6);
    // 0x803308C4: nop

    // 0x803308C8: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x803308CC: beq         $at, $zero, L_803308F8
    if (ctx->r1 == 0) {
        // 0x803308D0: nop
    
            goto L_803308F8;
    }
    // 0x803308D0: nop

    // 0x803308D4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803308D8: nop

    // 0x803308DC: sh          $zero, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = 0;
    // 0x803308E0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803308E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803308E8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803308EC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803308F0: b           L_80330928
    // 0x803308F4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80330928;
    // 0x803308F4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803308F8:
    // 0x803308F8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803308FC: nop

    // 0x80330900: lh          $t9, 0xB6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XB6);
    // 0x80330904: nop

    // 0x80330908: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8033090C: sh          $t8, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r24;
    // 0x80330910: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80330914: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80330918: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033091C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80330920: nop

    // 0x80330924: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80330928:
    // 0x80330928: b           L_80330930
    // 0x8033092C: nop

        goto L_80330930;
    // 0x8033092C: nop

L_80330930:
    // 0x80330930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330934: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80330938: jr          $ra
    // 0x8033093C: nop

    return;
    // 0x8033093C: nop

;}
RECOMP_FUNC void func_80332B20_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332B28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B50: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80332B54: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332B58: nop

    // 0x80332B5C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332B60: nop

    // 0x80332B64: bne         $t1, $zero, L_80332BC8
    if (ctx->r9 != 0) {
        // 0x80332B68: nop
    
            goto L_80332BC8;
    }
    // 0x80332B68: nop

    // 0x80332B6C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332B70: nop

    // 0x80332B74: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332B78: nop

    // 0x80332B7C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332B80: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332B84: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332B88: nop

    // 0x80332B8C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332B90: nop

    // 0x80332B94: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332B98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B9C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332BA0: addiu       $t7, $t7, -0x4310
    ctx->r15 = ADD32(ctx->r15, -0X4310);
    // 0x80332BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BA8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332BB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80332BB4: jal         0x8001C0EC
    // 0x80332BB8: addiu       $a3, $zero, 0x162
    ctx->r7 = ADD32(0, 0X162);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332BB8: addiu       $a3, $zero, 0x162
    ctx->r7 = ADD32(0, 0X162);
    after_0:
    // 0x80332BBC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332BC0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80332BC4: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_80332BC8:
    // 0x80332BC8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80332BCC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80332BD0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332BD4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332BD8: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332BDC: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80332BE0: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332BE4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332BE8: jal         0x800156C4
    // 0x80332BEC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_1;
    // 0x80332BEC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x80332BF0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332BF4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332BF8: jal         0x80015744
    // 0x80332BFC: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_2;
    // 0x80332BFC: nop

    after_2:
    // 0x80332C00: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332C04: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332C08: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332C0C: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80332C10: jal         0x8002A800
    // 0x80332C14: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8002A800(rdram, ctx);
        goto after_3;
    // 0x80332C14: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_3:
    // 0x80332C18: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80332C1C: nop

    // 0x80332C20: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332C24: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x80332C28: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332C2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332C30: nop

    // 0x80332C34: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80332C38: nop

    // 0x80332C3C: bc1t        L_80332C70
    if (c1cs) {
        // 0x80332C40: nop
    
            goto L_80332C70;
    }
    // 0x80332C40: nop

    // 0x80332C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80332C48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332C4C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332C50: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80332C54: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80332C58: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332C5C: jal         0x80015538
    // 0x80332C60: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80332C60: nop

    after_4:
    // 0x80332C64: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332C68: nop

    // 0x80332C6C: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
L_80332C70:
    // 0x80332C70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C78: jal         0x8002A8B4
    // 0x80332C7C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x80332C7C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_5:
    // 0x80332C80: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332C84: nop

    // 0x80332C88: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332C8C: nop

    // 0x80332C90: swc1        $f16, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f16.u32l;
    // 0x80332C94: jal         0x80014E80
    // 0x80332C98: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x80332C98: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_6:
    // 0x80332C9C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80332CA0: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x80332CA4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80332CA8: addiu       $t7, $t5, 0x14
    ctx->r15 = ADD32(ctx->r13, 0X14);
    // 0x80332CAC: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80332CB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332CB4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80332CB8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332CBC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80332CC0: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x80332CC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CCC: jal         0x80028FA0
    // 0x80332CD0: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x80332CD0: nop

    after_7:
    // 0x80332CD4: beq         $v0, $zero, L_80332CEC
    if (ctx->r2 == 0) {
        // 0x80332CD8: nop
    
            goto L_80332CEC;
    }
    // 0x80332CD8: nop

    // 0x80332CDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CE4: jal         0x80029B60
    // 0x80332CE8: nop

    func_80029B60(rdram, ctx);
        goto after_8;
    // 0x80332CE8: nop

    after_8:
L_80332CEC:
    // 0x80332CEC: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80332CF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332CF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D00: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80332D04: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80332D08: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332D0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332D10: jal         0x800295C0
    // 0x80332D14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x80332D14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x80332D18: beq         $v0, $zero, L_80332D38
    if (ctx->r2 == 0) {
        // 0x80332D1C: nop
    
            goto L_80332D38;
    }
    // 0x80332D1C: nop

    // 0x80332D20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D28: jal         0x8002B0E4
    // 0x80332D2C: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x80332D2C: nop

    after_10:
    // 0x80332D30: b           L_80332E44
    // 0x80332D34: nop

        goto L_80332E44;
    // 0x80332D34: nop

L_80332D38:
    // 0x80332D38: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332D3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332D40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D4C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80332D50: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80332D54: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332D58: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80332D5C: jal         0x800295C0
    // 0x80332D60: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x80332D60: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x80332D64: beq         $v0, $zero, L_80332D84
    if (ctx->r2 == 0) {
        // 0x80332D68: nop
    
            goto L_80332D84;
    }
    // 0x80332D68: nop

    // 0x80332D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D74: jal         0x8002B0E4
    // 0x80332D78: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x80332D78: nop

    after_12:
    // 0x80332D7C: b           L_80332E44
    // 0x80332D80: nop

        goto L_80332E44;
    // 0x80332D80: nop

L_80332D84:
    // 0x80332D84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D8C: jal         0x80029D8C
    // 0x80332D90: nop

    func_80029D8C(rdram, ctx);
        goto after_13;
    // 0x80332D90: nop

    after_13:
    // 0x80332D94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332D98: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332D9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332DA8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80332DAC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332DB0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332DB4: jal         0x80029018
    // 0x80332DB8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_14;
    // 0x80332DB8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x80332DBC: beq         $v0, $zero, L_80332DDC
    if (ctx->r2 == 0) {
        // 0x80332DC0: nop
    
            goto L_80332DDC;
    }
    // 0x80332DC0: nop

    // 0x80332DC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DCC: jal         0x8002B0E4
    // 0x80332DD0: nop

    func_8002B0E4(rdram, ctx);
        goto after_15;
    // 0x80332DD0: nop

    after_15:
    // 0x80332DD4: b           L_80332E44
    // 0x80332DD8: nop

        goto L_80332E44;
    // 0x80332DD8: nop

L_80332DDC:
    // 0x80332DDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DE4: jal         0x8001B4AC
    // 0x80332DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_16;
    // 0x80332DE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80332DEC: beq         $v0, $zero, L_80332E3C
    if (ctx->r2 == 0) {
        // 0x80332DF0: nop
    
            goto L_80332E3C;
    }
    // 0x80332DF0: nop

    // 0x80332DF4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332DF8: nop

    // 0x80332DFC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80332E00: nop

    // 0x80332E04: bne         $t0, $zero, L_80332E24
    if (ctx->r8 != 0) {
        // 0x80332E08: nop
    
            goto L_80332E24;
    }
    // 0x80332E08: nop

    // 0x80332E0C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332E10: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80332E14: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80332E18: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332E1C: b           L_80332E3C
    // 0x80332E20: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_80332E3C;
    // 0x80332E20: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80332E24:
    // 0x80332E24: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332E28: nop

    // 0x80332E2C: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80332E30: nop

    // 0x80332E34: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80332E38: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
L_80332E3C:
    // 0x80332E3C: b           L_80332E44
    // 0x80332E40: nop

        goto L_80332E44;
    // 0x80332E40: nop

L_80332E44:
    // 0x80332E44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80332E4C: jr          $ra
    // 0x80332E50: nop

    return;
    // 0x80332E50: nop

;}
RECOMP_FUNC void func_80330A2C_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80330A30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330A34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330A38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330A3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330A40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330A44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330A4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330A50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330A54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330A58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330A5C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80330A60: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A64: nop

    // 0x80330A68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330A6C: nop

    // 0x80330A70: bne         $t1, $zero, L_80331258
    if (ctx->r9 != 0) {
        // 0x80330A74: nop
    
            goto L_80331258;
    }
    // 0x80330A74: nop

    // 0x80330A78: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A7C: nop

    // 0x80330A80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330A84: nop

    // 0x80330A88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330A8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330A90: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330A94: nop

    // 0x80330A98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330A9C: nop

    // 0x80330AA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330AA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330AAC: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x80330AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330AB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330ABC: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80330AC0: jal         0x8001C0EC
    // 0x80330AC4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330AC4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80330AC8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330ACC: nop

    // 0x80330AD0: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x80330AD4: nop

    // 0x80330AD8: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80330ADC: bne         $at, $zero, L_80330D5C
    if (ctx->r1 != 0) {
        // 0x80330AE0: nop
    
            goto L_80330D5C;
    }
    // 0x80330AE0: nop

    // 0x80330AE4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330AE8: nop

    // 0x80330AEC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80330AF0: nop

    // 0x80330AF4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80330AF8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330AFC: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80330B00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330B04: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80330B08: nop

    // 0x80330B0C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330B10: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80330B14: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B18: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330B1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330B20: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80330B24: nop

    // 0x80330B28: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330B2C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80330B30: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330B34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330B38: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330B3C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80330B40: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B44: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80330B48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330B4C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330B50: jal         0x80027464
    // 0x80330B54: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80330B54: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80330B58: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330B5C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330B60: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330B64: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80330B68: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330B6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330B70: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80330B74: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80330B78: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330B7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B80: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330B84: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80330B88: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80330B8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B90: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330B94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330B98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330B9C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330BA0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330BA4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330BA8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80330BAC: sh          $t5, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r13;
    // 0x80330BB0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BB4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330BB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330BBC: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80330BC0: nop

    // 0x80330BC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330BC8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80330BCC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BD0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330BD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330BD8: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80330BDC: nop

    // 0x80330BE0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330BE4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80330BE8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BEC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330BF0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330BF4: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330BF8: nop

    // 0x80330BFC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330C00: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80330C04: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330C08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330C0C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330C10: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80330C14: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C18: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80330C1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330C20: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330C24: jal         0x80027464
    // 0x80330C28: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80330C28: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80330C2C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330C30: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330C34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330C38: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80330C3C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330C40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330C44: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330C48: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80330C4C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330C50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C54: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330C58: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80330C5C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80330C60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C64: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80330C68: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80330C6C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330C70: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80330C74: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330C78: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330C7C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80330C80: sh          $t6, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r14;
    // 0x80330C84: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330C88: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330C8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330C90: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80330C94: nop

    // 0x80330C98: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80330C9C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80330CA0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330CA4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330CA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330CAC: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80330CB0: nop

    // 0x80330CB4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330CB8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80330CBC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330CC0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330CC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330CC8: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80330CCC: nop

    // 0x80330CD0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330CD4: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80330CD8: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330CDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330CE0: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330CE4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80330CE8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CEC: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80330CF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330CF4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330CF8: jal         0x80027464
    // 0x80330CFC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80330CFC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80330D00: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330D04: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330D08: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330D0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330D10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D14: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330D18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330D1C: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80330D20: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330D24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D28: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330D2C: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x80330D30: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80330D34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D38: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80330D3C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80330D40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330D44: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80330D48: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330D4C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330D50: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80330D54: b           L_8033123C
    // 0x80330D58: sh          $t4, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r12;
        goto L_8033123C;
    // 0x80330D58: sh          $t4, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r12;
L_80330D5C:
    // 0x80330D5C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D60: nop

    // 0x80330D64: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80330D68: nop

    // 0x80330D6C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80330D70: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D74: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80330D78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330D7C: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80330D80: nop

    // 0x80330D84: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330D88: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80330D8C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80330D90: nop

    // 0x80330D94: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330D98: nop

    // 0x80330D9C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80330DA0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330DA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330DA8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330DAC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80330DB0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DB4: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80330DB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330DBC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330DC0: jal         0x80027464
    // 0x80330DC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80330DC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80330DC8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330DCC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330DD0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330DD4: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80330DD8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330DDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330DE0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330DE4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330DE8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330DEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DF0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330DF4: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x80330DF8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80330DFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E00: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80330E04: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80330E08: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330E0C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80330E10: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330E14: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330E18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330E1C: sh          $t3, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r11;
    // 0x80330E20: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330E24: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330E28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330E2C: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80330E30: nop

    // 0x80330E34: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330E38: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80330E3C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330E40: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330E44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330E48: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80330E4C: nop

    // 0x80330E50: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80330E54: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80330E58: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330E5C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330E60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330E64: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330E68: nop

    // 0x80330E6C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80330E70: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x80330E74: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330E78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330E7C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330E80: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80330E84: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E88: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80330E8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330E90: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80330E94: jal         0x80027464
    // 0x80330E98: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80330E98: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80330E9C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330EA0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330EA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80330EA8: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80330EAC: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80330EB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330EB4: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80330EB8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80330EBC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330EC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EC4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330EC8: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
    // 0x80330ECC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80330ED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330ED4: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80330ED8: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80330EDC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330EE0: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80330EE4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330EE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330EEC: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80330EF0: sh          $t1, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r9;
    // 0x80330EF4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330EF8: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330EFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330F00: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80330F04: nop

    // 0x80330F08: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330F0C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80330F10: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80330F14: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330F18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330F1C: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330F20: nop

    // 0x80330F24: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80330F28: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80330F2C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80330F30: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330F34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330F38: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80330F3C: nop

    // 0x80330F40: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330F44: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80330F48: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330F4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330F50: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330F54: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80330F58: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F5C: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80330F60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330F64: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80330F68: jal         0x80027464
    // 0x80330F6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80330F6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80330F70: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80330F74: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80330F78: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330F7C: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80330F80: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80330F84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330F88: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80330F8C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80330F90: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330F94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330F98: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330F9C: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x80330FA0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80330FA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FA8: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x80330FAC: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80330FB0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330FB4: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80330FB8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330FBC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330FC0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80330FC4: sh          $t0, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r8;
    // 0x80330FC8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330FCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80330FD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330FD4: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80330FD8: nop

    // 0x80330FDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330FE0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80330FE4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330FE8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80330FEC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330FF0: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80330FF4: nop

    // 0x80330FF8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330FFC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80331000: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331004: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80331008: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033100C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331010: nop

    // 0x80331014: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331018: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x8033101C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80331020: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80331024: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331028: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8033102C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80331030: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80331034: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331038: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033103C: jal         0x80027464
    // 0x80331040: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80331040: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80331044: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80331048: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8033104C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80331050: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x80331054: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x80331058: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033105C: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x80331060: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80331064: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331068: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033106C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331070: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x80331074: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80331078: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033107C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80331080: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80331084: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331088: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8033108C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331090: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331094: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80331098: sh          $t9, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r25;
    // 0x8033109C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803310A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803310A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803310A8: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803310AC: nop

    // 0x803310B0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803310B4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x803310B8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803310BC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803310C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803310C4: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803310C8: nop

    // 0x803310CC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803310D0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x803310D4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803310D8: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803310DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803310E0: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x803310E4: nop

    // 0x803310E8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803310EC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x803310F0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803310F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803310F8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803310FC: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80331100: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80331104: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x80331108: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033110C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331110: jal         0x80027464
    // 0x80331114: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80331114: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x80331118: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8033111C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80331120: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331124: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80331128: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033112C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331130: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80331134: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331138: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033113C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331140: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331144: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80331148: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8033114C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331150: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80331154: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331158: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033115C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80331160: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331164: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331168: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8033116C: sh          $t8, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r24;
    // 0x80331170: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331174: nop

    // 0x80331178: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033117C: nop

    // 0x80331180: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80331184: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331188: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8033118C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331190: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80331194: nop

    // 0x80331198: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033119C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x803311A0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803311A4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803311A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803311AC: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x803311B0: nop

    // 0x803311B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803311B8: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x803311BC: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803311C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803311C4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x803311C8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x803311CC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x803311D0: addiu       $a1, $a1, 0x3288
    ctx->r5 = ADD32(ctx->r5, 0X3288);
    // 0x803311D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803311D8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803311DC: jal         0x80027464
    // 0x803311E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x803311E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x803311E4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x803311E8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x803311EC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803311F0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803311F4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803311F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803311FC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80331200: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80331204: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331208: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033120C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331210: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80331214: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80331218: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033121C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331220: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331224: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331228: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033122C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331230: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331234: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80331238: sh          $t5, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r13;
L_8033123C:
    // 0x8033123C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331240: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331248: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x8033124C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331250: jal         0x800175F0
    // 0x80331254: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_10;
    // 0x80331254: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
L_80331258:
    // 0x80331258: jal         0x803316CC
    // 0x8033125C: nop

    func_803316CC_unk_bin_23(rdram, ctx);
        goto after_11;
    // 0x8033125C: nop

    after_11:
    // 0x80331260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331268: jal         0x8001B4AC
    // 0x8033126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_12;
    // 0x8033126C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80331270: beq         $v0, $zero, L_80331290
    if (ctx->r2 == 0) {
        // 0x80331274: nop
    
            goto L_80331290;
    }
    // 0x80331274: nop

    // 0x80331278: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033127C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80331280: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331284: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80331288: nop

    // 0x8033128C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331290:
    // 0x80331290: b           L_80331298
    // 0x80331294: nop

        goto L_80331298;
    // 0x80331294: nop

L_80331298:
    // 0x80331298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033129C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803312A0: jr          $ra
    // 0x803312A4: nop

    return;
    // 0x803312A4: nop

;}
RECOMP_FUNC void func_80331E10_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80331E14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331E18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E40: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80331E44: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331E48: nop

    // 0x80331E4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E50: nop

    // 0x80331E54: bne         $t1, $zero, L_80331F7C
    if (ctx->r9 != 0) {
        // 0x80331E58: nop
    
            goto L_80331F7C;
    }
    // 0x80331E58: nop

    // 0x80331E5C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331E60: nop

    // 0x80331E64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331E68: nop

    // 0x80331E6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331E70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331E74: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331E78: nop

    // 0x80331E7C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331E80: nop

    // 0x80331E84: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331E88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331E8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E90: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80331E94: nop

    // 0x80331E98: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331E9C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331EA0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331EA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331EA8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331EAC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331EB0: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80331EB4: nop

    // 0x80331EB8: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80331EBC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331EC0: nop

    // 0x80331EC4: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80331EC8: nop

    // 0x80331ECC: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80331ED0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331ED4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331ED8: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80331EDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331EE0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331EE4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331EE8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331EEC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331EF0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331EF4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331EF8: lwc1        $f8, 0x4194($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x80331EFC: nop

    // 0x80331F00: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80331F04: nop

    // 0x80331F08: bc1f        L_80331F3C
    if (!c1cs) {
        // 0x80331F0C: nop
    
            goto L_80331F3C;
    }
    // 0x80331F0C: nop

    // 0x80331F10: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80331F14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331F18: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331F1C: nop

    // 0x80331F20: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x80331F24: jal         0x80014E80
    // 0x80331F28: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80331F28: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x80331F2C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331F30: addiu       $t6, $v0, 0x3
    ctx->r14 = ADD32(ctx->r2, 0X3);
    // 0x80331F34: b           L_80331F5C
    // 0x80331F38: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
        goto L_80331F5C;
    // 0x80331F38: sh          $t6, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r14;
L_80331F3C:
    // 0x80331F3C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80331F40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331F44: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331F48: nop

    // 0x80331F4C: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
    // 0x80331F50: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331F54: nop

    // 0x80331F58: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
L_80331F5C:
    // 0x80331F5C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80331F60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331F64: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80331F68: nop

    // 0x80331F6C: swc1        $f4, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f4.u32l;
    // 0x80331F70: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331F74: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80331F78: sh          $t0, 0xB4($t1)
    MEM_H(0XB4, ctx->r9) = ctx->r8;
L_80331F7C:
    // 0x80331F7C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331F80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331F84: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80331F88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331F8C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80331F90: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331F94: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331F98: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80331F9C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331FA0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331FA4: lwc1        $f6, 0x4194($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x80331FA8: nop

    // 0x80331FAC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80331FB0: nop

    // 0x80331FB4: bc1f        L_80332000
    if (!c1cs) {
        // 0x80331FB8: nop
    
            goto L_80332000;
    }
    // 0x80331FB8: nop

    // 0x80331FBC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80331FC0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80331FC4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331FC8: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80331FCC: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331FD0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80331FD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331FD8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331FDC: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80331FE0: nop

    // 0x80331FE4: bc1f        L_80332000
    if (!c1cs) {
        // 0x80331FE8: nop
    
            goto L_80332000;
    }
    // 0x80331FE8: nop

    // 0x80331FEC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80331FF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331FF4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331FF8: nop

    // 0x80331FFC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
L_80332000:
    // 0x80332000: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332004: nop

    // 0x80332008: lh          $t7, 0xA6($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA6);
    // 0x8033200C: nop

    // 0x80332010: bne         $t7, $zero, L_803321AC
    if (ctx->r15 != 0) {
        // 0x80332014: nop
    
            goto L_803321AC;
    }
    // 0x80332014: nop

    // 0x80332018: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033201C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80332020: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332024: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332028: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033202C: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80332030: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80332034: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332038: jal         0x800156C4
    // 0x8033203C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_1;
    // 0x8033203C: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_1:
    // 0x80332040: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80332044: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80332048: jal         0x80015744
    // 0x8033204C: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_2;
    // 0x8033204C: nop

    after_2:
    // 0x80332050: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80332054: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332058: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033205C: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x80332060: jal         0x8002A800
    // 0x80332064: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8002A800(rdram, ctx);
        goto after_3;
    // 0x80332064: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x80332068: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8033206C: nop

    // 0x80332070: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332074: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80332078: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033207C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332080: nop

    // 0x80332084: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80332088: nop

    // 0x8033208C: bc1t        L_803320C0
    if (c1cs) {
        // 0x80332090: nop
    
            goto L_803320C0;
    }
    // 0x80332090: nop

    // 0x80332094: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80332098: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033209C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803320A0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803320A4: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x803320A8: mul.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x803320AC: jal         0x80015538
    // 0x803320B0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803320B0: nop

    after_4:
    // 0x803320B4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803320B8: nop

    // 0x803320BC: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
L_803320C0:
    // 0x803320C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803320C4: nop

    // 0x803320C8: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803320CC: nop

    // 0x803320D0: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x803320D4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803320D8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803320DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803320E0: lwc1        $f8, 0x40($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X40);
    // 0x803320E4: nop

    // 0x803320E8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803320EC: swc1        $f10, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f10.u32l;
    // 0x803320F0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803320F4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803320F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803320FC: lwc1        $f16, 0x18($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X18);
    // 0x80332100: nop

    // 0x80332104: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80332108: nop

    // 0x8033210C: bc1f        L_80332130
    if (!c1cs) {
        // 0x80332110: nop
    
            goto L_80332130;
    }
    // 0x80332110: nop

    // 0x80332114: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332118: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033211C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332120: lwc1        $f4, 0x18($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X18);
    // 0x80332124: nop

    // 0x80332128: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033212C: swc1        $f8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f8.u32l;
L_80332130:
    // 0x80332130: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332134: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332138: lh          $t0, 0xC2($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XC2);
    // 0x8033213C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332140: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332144: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332148: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033214C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332150: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332154: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332158: lwc1        $f10, 0x4194($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4194);
    // 0x8033215C: nop

    // 0x80332160: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80332164: nop

    // 0x80332168: bc1f        L_80332188
    if (!c1cs) {
        // 0x8033216C: nop
    
            goto L_80332188;
    }
    // 0x8033216C: nop

    // 0x80332170: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332174: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332178: jal         0x8002A8B4
    // 0x8033217C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x8033217C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x80332180: b           L_80332198
    // 0x80332184: nop

        goto L_80332198;
    // 0x80332184: nop

L_80332188:
    // 0x80332188: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033218C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332190: jal         0x8002A8B4
    // 0x80332194: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x80332194: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
L_80332198:
    // 0x80332198: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033219C: nop

    // 0x803321A0: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803321A4: b           L_803321C4
    // 0x803321A8: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
        goto L_803321C4;
    // 0x803321A8: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
L_803321AC:
    // 0x803321AC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803321B0: nop

    // 0x803321B4: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x803321B8: nop

    // 0x803321BC: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x803321C0: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_803321C4:
    // 0x803321C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803321CC: jal         0x80028FA0
    // 0x803321D0: nop

    func_80028FA0(rdram, ctx);
        goto after_7;
    // 0x803321D0: nop

    after_7:
    // 0x803321D4: beq         $v0, $zero, L_80332210
    if (ctx->r2 == 0) {
        // 0x803321D8: nop
    
            goto L_80332210;
    }
    // 0x803321D8: nop

    // 0x803321DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803321E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x803321E4: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x803321E8: lwc1        $f14, 0x4($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803321EC: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x803321F0: jal         0x8007EDF4
    // 0x803321F4: nop

    func_8007EDF4(rdram, ctx);
        goto after_8;
    // 0x803321F4: nop

    after_8:
    // 0x803321F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803321FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332200: jal         0x8002B114
    // 0x80332204: nop

    func_8002B114(rdram, ctx);
        goto after_9;
    // 0x80332204: nop

    after_9:
    // 0x80332208: b           L_80332438
    // 0x8033220C: nop

        goto L_80332438;
    // 0x8033220C: nop

L_80332210:
    // 0x80332210: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80332214: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332218: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033221C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332220: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332224: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80332228: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8033222C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332230: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332234: jal         0x800295C0
    // 0x80332238: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x80332238: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x8033223C: beq         $v0, $zero, L_80332294
    if (ctx->r2 == 0) {
        // 0x80332240: nop
    
            goto L_80332294;
    }
    // 0x80332240: nop

    // 0x80332244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033224C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332250: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80332254: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332258: jal         0x800175F0
    // 0x8033225C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x8033225C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80332260: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332264: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80332268: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033226C: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80332270: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x80332274: jal         0x8007EDF4
    // 0x80332278: nop

    func_8007EDF4(rdram, ctx);
        goto after_12;
    // 0x80332278: nop

    after_12:
    // 0x8033227C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332284: jal         0x8002B114
    // 0x80332288: nop

    func_8002B114(rdram, ctx);
        goto after_13;
    // 0x80332288: nop

    after_13:
    // 0x8033228C: b           L_80332438
    // 0x80332290: nop

        goto L_80332438;
    // 0x80332290: nop

L_80332294:
    // 0x80332294: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332298: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033229C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803322A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803322AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x803322B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803322B4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803322B8: jal         0x800295C0
    // 0x803322BC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_14;
    // 0x803322BC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x803322C0: beq         $v0, $zero, L_80332318
    if (ctx->r2 == 0) {
        // 0x803322C4: nop
    
            goto L_80332318;
    }
    // 0x803322C4: nop

    // 0x803322C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803322D4: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x803322D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803322DC: jal         0x800175F0
    // 0x803322E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x803322E0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x803322E4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803322E8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x803322EC: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803322F0: lwc1        $f14, 0x4($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803322F4: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x803322F8: jal         0x8007EDF4
    // 0x803322FC: nop

    func_8007EDF4(rdram, ctx);
        goto after_16;
    // 0x803322FC: nop

    after_16:
    // 0x80332300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332308: jal         0x8002B114
    // 0x8033230C: nop

    func_8002B114(rdram, ctx);
        goto after_17;
    // 0x8033230C: nop

    after_17:
    // 0x80332310: b           L_80332438
    // 0x80332314: nop

        goto L_80332438;
    // 0x80332314: nop

L_80332318:
    // 0x80332318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033231C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332320: jal         0x80029D8C
    // 0x80332324: nop

    func_80029D8C(rdram, ctx);
        goto after_18;
    // 0x80332324: nop

    after_18:
    // 0x80332328: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033232C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332338: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033233C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80332340: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332344: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332348: jal         0x80029018
    // 0x8033234C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_19;
    // 0x8033234C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_19:
    // 0x80332350: beq         $v0, $zero, L_803323A8
    if (ctx->r2 == 0) {
        // 0x80332354: nop
    
            goto L_803323A8;
    }
    // 0x80332354: nop

    // 0x80332358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033235C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332360: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332364: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80332368: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033236C: jal         0x800175F0
    // 0x80332370: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_20;
    // 0x80332370: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_20:
    // 0x80332374: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332378: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8033237C: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80332380: lwc1        $f14, 0x4($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80332384: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x80332388: jal         0x8007EDF4
    // 0x8033238C: nop

    func_8007EDF4(rdram, ctx);
        goto after_21;
    // 0x8033238C: nop

    after_21:
    // 0x80332390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332394: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332398: jal         0x8002B114
    // 0x8033239C: nop

    func_8002B114(rdram, ctx);
        goto after_22;
    // 0x8033239C: nop

    after_22:
    // 0x803323A0: b           L_80332438
    // 0x803323A4: nop

        goto L_80332438;
    // 0x803323A4: nop

L_803323A8:
    // 0x803323A8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803323AC: nop

    // 0x803323B0: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x803323B4: nop

    // 0x803323B8: bne         $t1, $zero, L_80332418
    if (ctx->r9 != 0) {
        // 0x803323BC: nop
    
            goto L_80332418;
    }
    // 0x803323BC: nop

    // 0x803323C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803323CC: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x803323D0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803323D4: jal         0x800175F0
    // 0x803323D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_23;
    // 0x803323D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x803323DC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803323E0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x803323E4: lwc1        $f12, 0x0($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X0);
    // 0x803323E8: lwc1        $f14, 0x4($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X4);
    // 0x803323EC: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x803323F0: jal         0x8007EDF4
    // 0x803323F4: nop

    func_8007EDF4(rdram, ctx);
        goto after_24;
    // 0x803323F4: nop

    after_24:
    // 0x803323F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332400: jal         0x8002B114
    // 0x80332404: nop

    func_8002B114(rdram, ctx);
        goto after_25;
    // 0x80332404: nop

    after_25:
    // 0x80332408: b           L_80332438
    // 0x8033240C: nop

        goto L_80332438;
    // 0x8033240C: nop

    // 0x80332410: b           L_80332430
    // 0x80332414: nop

        goto L_80332430;
    // 0x80332414: nop

L_80332418:
    // 0x80332418: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033241C: nop

    // 0x80332420: lh          $t6, 0xB4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XB4);
    // 0x80332424: nop

    // 0x80332428: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x8033242C: sh          $t4, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r12;
L_80332430:
    // 0x80332430: b           L_80332438
    // 0x80332434: nop

        goto L_80332438;
    // 0x80332434: nop

L_80332438:
    // 0x80332438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033243C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80332440: jr          $ra
    // 0x80332444: nop

    return;
    // 0x80332444: nop

;}
RECOMP_FUNC void func_80330940_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330948: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033094C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330950: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330954: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330958: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033095C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330960: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330964: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330968: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033096C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330970: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330974: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330978: nop

    // 0x8033097C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330980: nop

    // 0x80330984: bne         $t1, $zero, L_803309DC
    if (ctx->r9 != 0) {
        // 0x80330988: nop
    
            goto L_803309DC;
    }
    // 0x80330988: nop

    // 0x8033098C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330990: nop

    // 0x80330994: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330998: nop

    // 0x8033099C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803309A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803309A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803309A8: nop

    // 0x803309AC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803309B0: nop

    // 0x803309B4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803309B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803309C0: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x803309C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803309CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309D0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803309D4: jal         0x8001C0EC
    // 0x803309D8: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803309D8: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_803309DC:
    // 0x803309DC: jal         0x803316CC
    // 0x803309E0: nop

    func_803316CC_unk_bin_23(rdram, ctx);
        goto after_1;
    // 0x803309E0: nop

    after_1:
    // 0x803309E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309EC: jal         0x8001B4AC
    // 0x803309F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803309F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803309F4: beq         $v0, $zero, L_80330A14
    if (ctx->r2 == 0) {
        // 0x803309F8: nop
    
            goto L_80330A14;
    }
    // 0x803309F8: nop

    // 0x803309FC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330A00: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80330A04: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330A08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330A0C: nop

    // 0x80330A10: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330A14:
    // 0x80330A14: b           L_80330A1C
    // 0x80330A18: nop

        goto L_80330A1C;
    // 0x80330A18: nop

L_80330A1C:
    // 0x80330A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330A24: jr          $ra
    // 0x80330A28: nop

    return;
    // 0x80330A28: nop

;}
RECOMP_FUNC void func_80331DE0_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331DE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DF0: jal         0x8002B0E4
    // 0x80331DF4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80331DF4: nop

    after_0:
    // 0x80331DF8: b           L_80331E00
    // 0x80331DFC: nop

        goto L_80331E00;
    // 0x80331DFC: nop

L_80331E00:
    // 0x80331E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331E08: jr          $ra
    // 0x80331E0C: nop

    return;
    // 0x80331E0C: nop

;}
RECOMP_FUNC void func_803316CC_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803316D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803316D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803316DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803316E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803316E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803316FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331700: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331704: lui         $at, 0xC596
    ctx->r1 = S32(0XC596 << 16);
    // 0x80331708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033170C: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331710: nop

    // 0x80331714: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80331718: nop

    // 0x8033171C: bc1f        L_803318BC
    if (!c1cs) {
        // 0x80331720: nop
    
            goto L_803318BC;
    }
    // 0x80331720: nop

    // 0x80331724: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80331728: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033172C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331730: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80331734: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80331738: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x8033173C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331740: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331744: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80331748: nop

    // 0x8033174C: bc1f        L_80331770
    if (!c1cs) {
        // 0x80331750: nop
    
            goto L_80331770;
    }
    // 0x80331750: nop

    // 0x80331754: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331758: nop

    // 0x8033175C: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x80331760: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331764: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331768: b           L_803318B4
    // 0x8033176C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
        goto L_803318B4;
    // 0x8033176C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
L_80331770:
    // 0x80331770: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80331774: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80331778: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033177C: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80331780: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331784: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x80331788: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033178C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80331790: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80331794: nop

    // 0x80331798: bc1f        L_80331858
    if (!c1cs) {
        // 0x8033179C: nop
    
            goto L_80331858;
    }
    // 0x8033179C: nop

    // 0x803317A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803317A4: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x803317A8: lwc1        $f18, 0x44($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X44);
    // 0x803317AC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x803317B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803317B4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803317B8: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x803317BC: nop

    // 0x803317C0: bc1f        L_803317F0
    if (!c1cs) {
        // 0x803317C4: nop
    
            goto L_803317F0;
    }
    // 0x803317C4: nop

    // 0x803317C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803317CC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x803317D0: lwc1        $f8, 0x44($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X44);
    // 0x803317D4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x803317D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803317DC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803317E0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x803317E4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x803317E8: b           L_80331850
    // 0x803317EC: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
        goto L_80331850;
    // 0x803317EC: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
L_803317F0:
    // 0x803317F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803317F4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x803317F8: lwc1        $f6, 0x44($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X44);
    // 0x803317FC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80331800: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331804: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331808: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x8033180C: nop

    // 0x80331810: bc1f        L_80331840
    if (!c1cs) {
        // 0x80331814: nop
    
            goto L_80331840;
    }
    // 0x80331814: nop

    // 0x80331818: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033181C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331820: lwc1        $f16, 0x44($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80331824: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80331828: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033182C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331830: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80331834: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80331838: b           L_80331850
    // 0x8033183C: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
        goto L_80331850;
    // 0x8033183C: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
L_80331840:
    // 0x80331840: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331844: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331848: nop

    // 0x8033184C: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
L_80331850:
    // 0x80331850: b           L_803318B4
    // 0x80331854: nop

        goto L_803318B4;
    // 0x80331854: nop

L_80331858:
    // 0x80331858: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033185C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331860: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331864: lwc1        $f16, 0x44($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80331868: nop

    // 0x8033186C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80331870: nop

    // 0x80331874: bc1f        L_80331890
    if (!c1cs) {
        // 0x80331878: nop
    
            goto L_80331890;
    }
    // 0x80331878: nop

    // 0x8033187C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331880: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331884: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331888: b           L_803318B4
    // 0x8033188C: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
        goto L_803318B4;
    // 0x8033188C: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
L_80331890:
    // 0x80331890: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331894: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331898: lwc1        $f6, 0x44($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X44);
    // 0x8033189C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803318A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803318A4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803318A8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x803318AC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x803318B0: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_803318B4:
    // 0x803318B4: b           L_80331C58
    // 0x803318B8: nop

        goto L_80331C58;
    // 0x803318B8: nop

L_803318BC:
    // 0x803318BC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x803318C0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x803318C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803318C8: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803318CC: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803318D0: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x803318D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803318D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x803318DC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x803318E0: nop

    // 0x803318E4: bc1f        L_80331B14
    if (!c1cs) {
        // 0x803318E8: nop
    
            goto L_80331B14;
    }
    // 0x803318E8: nop

    // 0x803318EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803318F0: nop

    // 0x803318F4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803318F8: nop

    // 0x803318FC: bne         $t8, $zero, L_803319BC
    if (ctx->r24 != 0) {
        // 0x80331900: nop
    
            goto L_803319BC;
    }
    // 0x80331900: nop

    // 0x80331904: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331908: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8033190C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331910: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80331914: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331918: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033191C: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80331920: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80331924: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331928: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033192C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331930: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80331934: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331938: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x8033193C: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    // 0x80331940: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331944: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80331948: jal         0x80027464
    // 0x8033194C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033194C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80331950: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331954: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331958: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8033195C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331960: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80331964: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331968: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033196C: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331970: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331974: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331978: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033197C: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331980: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331984: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80331988: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033198C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80331990: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331994: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    // 0x80331998: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033199C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803319A0: jal         0x80027464
    // 0x803319A4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803319A4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x803319A8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803319AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803319B0: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x803319B4: b           L_80331AB0
    // 0x803319B8: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
        goto L_80331AB0;
    // 0x803319B8: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
L_803319BC:
    // 0x803319BC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803319C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803319C4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803319C8: nop

    // 0x803319CC: bne         $t4, $at, L_80331A98
    if (ctx->r12 != ctx->r1) {
        // 0x803319D0: nop
    
            goto L_80331A98;
    }
    // 0x803319D0: nop

    // 0x803319D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803319D8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x803319DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803319E0: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x803319E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803319E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803319EC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803319F0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803319F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803319F8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803319FC: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80331A00: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80331A04: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331A08: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331A0C: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    // 0x80331A10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331A14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80331A18: jal         0x80027464
    // 0x80331A1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80331A1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80331A20: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331A24: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331A28: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x80331A2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331A30: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80331A34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331A38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331A3C: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331A40: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331A44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331A48: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80331A4C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331A50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331A54: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80331A58: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80331A5C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80331A60: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331A64: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    // 0x80331A68: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80331A6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331A70: jal         0x80027464
    // 0x80331A74: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80331A74: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80331A78: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80331A7C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331A80: nop

    // 0x80331A84: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80331A88: nop

    // 0x80331A8C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331A90: b           L_80331AB0
    // 0x80331A94: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
        goto L_80331AB0;
    // 0x80331A94: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_80331A98:
    // 0x80331A98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A9C: nop

    // 0x80331AA0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80331AA4: nop

    // 0x80331AA8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80331AAC: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
L_80331AB0:
    // 0x80331AB0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331AB4: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80331AB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331ABC: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80331AC0: nop

    // 0x80331AC4: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80331AC8: nop

    // 0x80331ACC: bc1f        L_80331AE8
    if (!c1cs) {
        // 0x80331AD0: nop
    
            goto L_80331AE8;
    }
    // 0x80331AD0: nop

    // 0x80331AD4: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80331AD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331ADC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331AE0: b           L_80331B0C
    // 0x80331AE4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
        goto L_80331B0C;
    // 0x80331AE4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
L_80331AE8:
    // 0x80331AE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331AEC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331AF0: lwc1        $f6, 0x44($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80331AF4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80331AF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331AFC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331B00: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80331B04: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80331B08: swc1        $f18, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f18.u32l;
L_80331B0C:
    // 0x80331B0C: b           L_80331C58
    // 0x80331B10: nop

        goto L_80331C58;
    // 0x80331B10: nop

L_80331B14:
    // 0x80331B14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B18: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80331B1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331B20: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80331B24: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80331B28: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x80331B2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331B30: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80331B34: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80331B38: nop

    // 0x80331B3C: bc1f        L_80331BFC
    if (!c1cs) {
        // 0x80331B40: nop
    
            goto L_80331BFC;
    }
    // 0x80331B40: nop

    // 0x80331B44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331B48: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x80331B4C: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80331B50: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80331B54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331B58: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331B5C: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x80331B60: nop

    // 0x80331B64: bc1f        L_80331B94
    if (!c1cs) {
        // 0x80331B68: nop
    
            goto L_80331B94;
    }
    // 0x80331B68: nop

    // 0x80331B6C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331B70: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331B74: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80331B78: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80331B7C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331B80: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80331B84: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80331B88: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80331B8C: b           L_80331BF4
    // 0x80331B90: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
        goto L_80331BF4;
    // 0x80331B90: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
L_80331B94:
    // 0x80331B94: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331B98: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331B9C: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80331BA0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80331BA4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331BA8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331BAC: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x80331BB0: nop

    // 0x80331BB4: bc1f        L_80331BE4
    if (!c1cs) {
        // 0x80331BB8: nop
    
            goto L_80331BE4;
    }
    // 0x80331BB8: nop

    // 0x80331BBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331BC0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331BC4: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80331BC8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80331BCC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331BD0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80331BD4: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80331BD8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80331BDC: b           L_80331BF4
    // 0x80331BE0: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
        goto L_80331BF4;
    // 0x80331BE0: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
L_80331BE4:
    // 0x80331BE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331BE8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331BEC: nop

    // 0x80331BF0: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
L_80331BF4:
    // 0x80331BF4: b           L_80331C58
    // 0x80331BF8: nop

        goto L_80331C58;
    // 0x80331BF8: nop

L_80331BFC:
    // 0x80331BFC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331C00: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331C04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331C08: lwc1        $f10, 0x44($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80331C0C: nop

    // 0x80331C10: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80331C14: nop

    // 0x80331C18: bc1f        L_80331C34
    if (!c1cs) {
        // 0x80331C1C: nop
    
            goto L_80331C34;
    }
    // 0x80331C1C: nop

    // 0x80331C20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80331C24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331C28: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331C2C: b           L_80331C58
    // 0x80331C30: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
        goto L_80331C58;
    // 0x80331C30: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_80331C34:
    // 0x80331C34: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331C38: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80331C3C: lwc1        $f4, 0x44($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80331C40: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80331C44: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331C48: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80331C4C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80331C50: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80331C54: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
L_80331C58:
    // 0x80331C58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C60: jal         0x80029C40
    // 0x80331C64: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80331C64: nop

    after_4:
    // 0x80331C68: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331C6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C70: lh          $t8, 0xE8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XE8);
    // 0x80331C74: lwc1        $f18, 0x24($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80331C78: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331C7C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331C80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331C84: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331C88: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331C8C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331C90: swc1        $f18, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f18.u32l;
    // 0x80331C94: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331C98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331C9C: lh          $t1, 0xE8($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XE8);
    // 0x80331CA0: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x80331CA4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331CA8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331CAC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331CB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331CB4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331CB8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331CBC: swc1        $f4, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f4.u32l;
    // 0x80331CC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331CC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CC8: lh          $t3, 0xE8($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XE8);
    // 0x80331CCC: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80331CD0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331CD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331CD8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331CDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331CE0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331CE4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331CE8: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80331CEC: b           L_80331CF4
    // 0x80331CF0: nop

        goto L_80331CF4;
    // 0x80331CF0: nop

L_80331CF4:
    // 0x80331CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331CF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331CFC: jr          $ra
    // 0x80331D00: nop

    return;
    // 0x80331D00: nop

;}
RECOMP_FUNC void func_803324FC_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803324FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332504: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332508: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033250C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332510: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332514: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033251C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332520: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332524: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332528: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033252C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332530: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332534: nop

    // 0x80332538: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033253C: nop

    // 0x80332540: bne         $t1, $zero, L_80332694
    if (ctx->r9 != 0) {
        // 0x80332544: nop
    
            goto L_80332694;
    }
    // 0x80332544: nop

    // 0x80332548: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033254C: nop

    // 0x80332550: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332554: nop

    // 0x80332558: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033255C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332560: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332564: nop

    // 0x80332568: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033256C: nop

    // 0x80332570: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332578: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033257C: addiu       $t7, $t7, -0x4310
    ctx->r15 = ADD32(ctx->r15, -0X4310);
    // 0x80332580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332584: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033258C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332590: jal         0x8001C0EC
    // 0x80332594: addiu       $a3, $zero, 0x162
    ctx->r7 = ADD32(0, 0X162);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332594: addiu       $a3, $zero, 0x162
    ctx->r7 = ADD32(0, 0X162);
    after_0:
    // 0x80332598: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8033259C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803325A0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803325A4: nop

    // 0x803325A8: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x803325AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803325B0: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x803325B4: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x803325B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803325BC: nop

    // 0x803325C0: lh          $t3, 0xC0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC0);
    // 0x803325C4: nop

    // 0x803325C8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x803325CC: sltiu       $at, $t4, 0x5
    ctx->r1 = ctx->r12 < 0X5 ? 1 : 0;
    // 0x803325D0: beq         $at, $zero, L_8033267C
    if (ctx->r1 == 0) {
        // 0x803325D4: nop
    
            goto L_8033267C;
    }
    // 0x803325D4: nop

    // 0x803325D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803325DC: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803325E0: addu        $at, $at, $t4
    gpr jr_addend_803325EC = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803325E4: lw          $t4, 0x32EC($at)
    ctx->r12 = ADD32(ctx->r1, 0X32EC);
    // 0x803325E8: nop

    // 0x803325EC: jr          $t4
    // 0x803325F0: nop

    switch (jr_addend_803325EC >> 2) {
        case 0: goto L_80332664; break;
        case 1: goto L_80332648; break;
        case 2: goto L_8033262C; break;
        case 3: goto L_80332610; break;
        case 4: goto L_803325F4; break;
        default: switch_error(__func__, 0x803325EC, 0x803332EC);
    }
    // 0x803325F0: nop

L_803325F4:
    // 0x803325F4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803325F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803325FC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332600: nop

    // 0x80332604: swc1        $f6, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f6.u32l;
    // 0x80332608: b           L_80332694
    // 0x8033260C: nop

        goto L_80332694;
    // 0x8033260C: nop

L_80332610:
    // 0x80332610: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332614: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332618: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033261C: nop

    // 0x80332620: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
    // 0x80332624: b           L_80332694
    // 0x80332628: nop

        goto L_80332694;
    // 0x80332628: nop

L_8033262C:
    // 0x8033262C: lui         $at, 0x43A5
    ctx->r1 = S32(0X43A5 << 16);
    // 0x80332630: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332634: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332638: nop

    // 0x8033263C: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x80332640: b           L_80332694
    // 0x80332644: nop

        goto L_80332694;
    // 0x80332644: nop

L_80332648:
    // 0x80332648: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033264C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332650: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332654: nop

    // 0x80332658: swc1        $f16, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f16.u32l;
    // 0x8033265C: b           L_80332694
    // 0x80332660: nop

        goto L_80332694;
    // 0x80332660: nop

L_80332664:
    // 0x80332664: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332668: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033266C: nop

    // 0x80332670: swc1        $f18, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f18.u32l;
    // 0x80332674: b           L_80332694
    // 0x80332678: nop

        goto L_80332694;
    // 0x80332678: nop

L_8033267C:
    // 0x8033267C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332680: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332684: nop

    // 0x80332688: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x8033268C: b           L_80332694
    // 0x80332690: nop

        goto L_80332694;
    // 0x80332690: nop

L_80332694:
    // 0x80332694: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80332698: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033269C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803326A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326A8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803326AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x803326B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803326B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803326B8: jal         0x800295C0
    // 0x803326BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x803326BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x803326C0: beq         $v0, $zero, L_803326E0
    if (ctx->r2 == 0) {
        // 0x803326C4: nop
    
            goto L_803326E0;
    }
    // 0x803326C4: nop

    // 0x803326C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326D0: jal         0x8002B0E4
    // 0x803326D4: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803326D4: nop

    after_2:
    // 0x803326D8: b           L_80332800
    // 0x803326DC: nop

        goto L_80332800;
    // 0x803326DC: nop

L_803326E0:
    // 0x803326E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803326E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803326E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803326EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326F4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803326F8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x803326FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332700: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332704: jal         0x800295C0
    // 0x80332708: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80332708: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x8033270C: beq         $v0, $zero, L_8033272C
    if (ctx->r2 == 0) {
        // 0x80332710: nop
    
            goto L_8033272C;
    }
    // 0x80332710: nop

    // 0x80332714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033271C: jal         0x8002B0E4
    // 0x80332720: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x80332720: nop

    after_4:
    // 0x80332724: b           L_80332800
    // 0x80332728: nop

        goto L_80332800;
    // 0x80332728: nop

L_8033272C:
    // 0x8033272C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332730: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332734: jal         0x80029C40
    // 0x80332738: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80332738: nop

    after_5:
    // 0x8033273C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332740: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033274C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80332750: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80332754: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332758: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033275C: jal         0x80029018
    // 0x80332760: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x80332760: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80332764: beq         $v0, $zero, L_80332784
    if (ctx->r2 == 0) {
        // 0x80332768: nop
    
            goto L_80332784;
    }
    // 0x80332768: nop

    // 0x8033276C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332770: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332774: jal         0x8002B0E4
    // 0x80332778: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x80332778: nop

    after_7:
    // 0x8033277C: b           L_80332800
    // 0x80332780: nop

        goto L_80332800;
    // 0x80332780: nop

L_80332784:
    // 0x80332784: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332788: nop

    // 0x8033278C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332790: nop

    // 0x80332794: bne         $t1, $zero, L_803327C4
    if (ctx->r9 != 0) {
        // 0x80332798: nop
    
            goto L_803327C4;
    }
    // 0x80332798: nop

    // 0x8033279C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803327A0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x803327A4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803327A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803327AC: nop

    // 0x803327B0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x803327B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803327B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803327BC: b           L_803327F8
    // 0x803327C0: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
        goto L_803327F8;
    // 0x803327C0: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
L_803327C4:
    // 0x803327C4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803327C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803327CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803327D0: lwc1        $f8, 0x44($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X44);
    // 0x803327D4: nop

    // 0x803327D8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x803327DC: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
    // 0x803327E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803327E4: nop

    // 0x803327E8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803327EC: nop

    // 0x803327F0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803327F4: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_803327F8:
    // 0x803327F8: b           L_80332800
    // 0x803327FC: nop

        goto L_80332800;
    // 0x803327FC: nop

L_80332800:
    // 0x80332800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332804: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332808: jr          $ra
    // 0x8033280C: nop

    return;
    // 0x8033280C: nop

;}
RECOMP_FUNC void func_803312A8_unk_bin_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803312A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803312AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803312B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803312B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803312B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803312BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803312C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803312C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803312D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803312D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803312DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803312E0: nop

    // 0x803312E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803312E8: nop

    // 0x803312EC: bne         $t1, $zero, L_80331344
    if (ctx->r9 != 0) {
        // 0x803312F0: nop
    
            goto L_80331344;
    }
    // 0x803312F0: nop

    // 0x803312F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803312F8: nop

    // 0x803312FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331300: nop

    // 0x80331304: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331308: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033130C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331310: nop

    // 0x80331314: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331318: nop

    // 0x8033131C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331324: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331328: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x8033132C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331330: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331338: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8033133C: jal         0x8001C0EC
    // 0x80331340: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331340: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80331344:
    // 0x80331344: jal         0x803316CC
    // 0x80331348: nop

    func_803316CC_unk_bin_23(rdram, ctx);
        goto after_1;
    // 0x80331348: nop

    after_1:
    // 0x8033134C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331354: jal         0x8001B4AC
    // 0x80331358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033135C: beq         $v0, $zero, L_8033137C
    if (ctx->r2 == 0) {
        // 0x80331360: nop
    
            goto L_8033137C;
    }
    // 0x80331360: nop

    // 0x80331364: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331368: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033136C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80331370: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331374: nop

    // 0x80331378: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033137C:
    // 0x8033137C: b           L_80331384
    // 0x80331380: nop

        goto L_80331384;
    // 0x80331380: nop

L_80331384:
    // 0x80331384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033138C: jr          $ra
    // 0x80331390: nop

    return;
    // 0x80331390: nop

;}
RECOMP_FUNC void func_803343A0_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803343A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803343A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803343A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803343AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803343B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803343B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803343B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803343BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803343C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803343C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803343C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803343CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803343D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803343D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803343D8: nop

    // 0x803343DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803343E0: nop

    // 0x803343E4: bne         $t1, $zero, L_8033443C
    if (ctx->r9 != 0) {
        // 0x803343E8: nop
    
            goto L_8033443C;
    }
    // 0x803343E8: nop

    // 0x803343EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803343F0: nop

    // 0x803343F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803343F8: nop

    // 0x803343FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334400: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334404: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334408: nop

    // 0x8033440C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334410: nop

    // 0x80334414: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334418: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033441C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334420: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x80334424: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334428: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033442C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334430: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80334434: jal         0x8001C0EC
    // 0x80334438: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334438: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_8033443C:
    // 0x8033443C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334440: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334444: jal         0x8002A8B4
    // 0x80334448: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80334448: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033444C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334450: nop

    // 0x80334454: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80334458: nop

    // 0x8033445C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80334460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334468: jal         0x8001B4AC
    // 0x8033446C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033446C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80334470: beq         $v0, $zero, L_80334490
    if (ctx->r2 == 0) {
        // 0x80334474: nop
    
            goto L_80334490;
    }
    // 0x80334474: nop

    // 0x80334478: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033447C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80334480: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334484: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334488: nop

    // 0x8033448C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80334490:
    // 0x80334490: b           L_80334498
    // 0x80334494: nop

        goto L_80334498;
    // 0x80334494: nop

L_80334498:
    // 0x80334498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033449C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803344A0: jr          $ra
    // 0x803344A4: nop

    return;
    // 0x803344A4: nop

;}
RECOMP_FUNC void func_80331548_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033154C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331550: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331554: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331558: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033155C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331564: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331568: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033156C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331570: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331574: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331578: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033157C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331580: nop

    // 0x80331584: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331588: nop

    // 0x8033158C: bne         $t1, $zero, L_803316A4
    if (ctx->r9 != 0) {
        // 0x80331590: nop
    
            goto L_803316A4;
    }
    // 0x80331590: nop

    // 0x80331594: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331598: nop

    // 0x8033159C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803315A0: nop

    // 0x803315A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803315A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803315AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803315B0: nop

    // 0x803315B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803315B8: nop

    // 0x803315BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803315C0: jal         0x80014E80
    // 0x803315C4: addiu       $a0, $zero, -0x21D
    ctx->r4 = ADD32(0, -0X21D);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x803315C4: addiu       $a0, $zero, -0x21D
    ctx->r4 = ADD32(0, -0X21D);
    after_0:
    // 0x803315C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803315CC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803315D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803315D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803315D8: nop

    // 0x803315DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803315E0: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    // 0x803315E4: jal         0x80014E80
    // 0x803315E8: addiu       $a0, $zero, -0x21D
    ctx->r4 = ADD32(0, -0X21D);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x803315E8: addiu       $a0, $zero, -0x21D
    ctx->r4 = ADD32(0, -0X21D);
    after_1:
    // 0x803315EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803315F0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x803315F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803315F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803315FC: nop

    // 0x80331600: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331604: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x80331608: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8033160C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331610: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331614: nop

    // 0x80331618: swc1        $f16, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f16.u32l;
    // 0x8033161C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331620: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331624: jal         0x8001BBDC
    // 0x80331628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80331628: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033162C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331630: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331634: addiu       $t3, $t3, -0x5720
    ctx->r11 = ADD32(ctx->r11, -0X5720);
    // 0x80331638: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033163C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80331648: jal         0x8001C0EC
    // 0x8033164C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8033164C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_3:
    // 0x80331650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331654: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331658: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8033165C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80331660: jal         0x80029EF8
    // 0x80331664: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x80331664: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80331668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033166C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331670: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331674: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033167C: jal         0x8001ABF4
    // 0x80331680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x80331680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80331684: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331688: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033168C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331694: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331698: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033169C: jal         0x8001ABF4
    // 0x803316A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x803316A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_803316A4:
    // 0x803316A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316AC: jal         0x8002A8B4
    // 0x803316B0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x803316B0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_7:
    // 0x803316B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803316B8: nop

    // 0x803316BC: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803316C0: nop

    // 0x803316C4: swc1        $f18, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f18.u32l;
    // 0x803316C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316D0: jal         0x8001B4AC
    // 0x803316D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x803316D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x803316D8: beq         $v0, $zero, L_803316F8
    if (ctx->r2 == 0) {
        // 0x803316DC: nop
    
            goto L_803316F8;
    }
    // 0x803316DC: nop

    // 0x803316E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803316E4: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x803316E8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803316EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803316F0: nop

    // 0x803316F4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803316F8:
    // 0x803316F8: b           L_80331700
    // 0x803316FC: nop

        goto L_80331700;
    // 0x803316FC: nop

L_80331700:
    // 0x80331700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331704: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331708: jr          $ra
    // 0x8033170C: nop

    return;
    // 0x8033170C: nop

;}
RECOMP_FUNC void func_80331C4C_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331C58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331C5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331C74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331C78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331C7C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331C80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C84: nop

    // 0x80331C88: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331C8C: nop

    // 0x80331C90: bne         $t1, $zero, L_80331D78
    if (ctx->r9 != 0) {
        // 0x80331C94: nop
    
            goto L_80331D78;
    }
    // 0x80331C94: nop

    // 0x80331C98: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331C9C: nop

    // 0x80331CA0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331CA4: nop

    // 0x80331CA8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331CAC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331CB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331CB4: nop

    // 0x80331CB8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331CBC: nop

    // 0x80331CC0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331CC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CC8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331CCC: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80331CD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CD4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331CD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331CDC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80331CE0: jal         0x8001C0EC
    // 0x80331CE4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331CE4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80331CE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331CEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331CF0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331CF4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331CFC: jal         0x8001ABF4
    // 0x80331D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80331D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331D04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D08: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331D0C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80331D10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D14: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80331D18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331D1C: jal         0x8001ABF4
    // 0x80331D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80331D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80331D24: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80331D28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D2C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331D30: nop

    // 0x80331D34: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80331D38: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331D3C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80331D40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331D44: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80331D48: jal         0x80015538
    // 0x80331D4C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80331D4C: nop

    after_3:
    // 0x80331D50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331D54: nop

    // 0x80331D58: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x80331D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D68: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x80331D6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331D70: jal         0x800175F0
    // 0x80331D74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x80331D74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_80331D78:
    // 0x80331D78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D80: jal         0x80029C40
    // 0x80331D84: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80331D84: nop

    after_5:
    // 0x80331D88: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331D8C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331D90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331D9C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80331DA0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80331DA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80331DA8: jal         0x80029018
    // 0x80331DAC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x80331DAC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x80331DB0: beq         $v0, $zero, L_80331DF8
    if (ctx->r2 == 0) {
        // 0x80331DB4: nop
    
            goto L_80331DF8;
    }
    // 0x80331DB4: nop

    // 0x80331DB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331DBC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331DC0: nop

    // 0x80331DC4: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x80331DC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331DCC: nop

    // 0x80331DD0: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80331DD4: nop

    // 0x80331DD8: swc1        $f16, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f16.u32l;
    // 0x80331DDC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80331DE0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331DE4: nop

    // 0x80331DE8: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x80331DEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331DF0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331DF4: sh          $t2, 0xBE($t6)
    MEM_H(0XBE, ctx->r14) = ctx->r10;
L_80331DF8:
    // 0x80331DF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331E00: jal         0x8001B4AC
    // 0x80331E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80331E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331E08: beq         $v0, $zero, L_80331E28
    if (ctx->r2 == 0) {
        // 0x80331E0C: nop
    
            goto L_80331E28;
    }
    // 0x80331E0C: nop

    // 0x80331E10: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331E14: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80331E18: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80331E1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331E20: nop

    // 0x80331E24: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80331E28:
    // 0x80331E28: b           L_80331E30
    // 0x80331E2C: nop

        goto L_80331E30;
    // 0x80331E2C: nop

L_80331E30:
    // 0x80331E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331E34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331E38: jr          $ra
    // 0x80331E3C: nop

    return;
    // 0x80331E3C: nop

;}
RECOMP_FUNC void func_80333FA4_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333FA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80333FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80333FAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333FB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333FB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333FB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333FBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333FC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333FCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333FD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333FD4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80333FD8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80333FDC: nop

    // 0x80333FE0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333FE4: nop

    // 0x80333FE8: bne         $t1, $zero, L_8033401C
    if (ctx->r9 != 0) {
        // 0x80333FEC: nop
    
            goto L_8033401C;
    }
    // 0x80333FEC: nop

    // 0x80333FF0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80333FF4: nop

    // 0x80333FF8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333FFC: nop

    // 0x80334000: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334004: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334008: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033400C: nop

    // 0x80334010: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334014: nop

    // 0x80334018: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033401C:
    // 0x8033401C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334024: jal         0x8002A8B4
    // 0x80334028: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80334028: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_0:
    // 0x8033402C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80334030: nop

    // 0x80334034: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80334038: nop

    // 0x8033403C: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80334040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334048: jal         0x8001B4AC
    // 0x8033404C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033404C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334050: beq         $v0, $zero, L_80334070
    if (ctx->r2 == 0) {
        // 0x80334054: nop
    
            goto L_80334070;
    }
    // 0x80334054: nop

    // 0x80334058: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033405C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80334060: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80334064: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80334068: nop

    // 0x8033406C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80334070:
    // 0x80334070: b           L_80334078
    // 0x80334074: nop

        goto L_80334078;
    // 0x80334074: nop

L_80334078:
    // 0x80334078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033407C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334080: jr          $ra
    // 0x80334084: nop

    return;
    // 0x80334084: nop

;}
