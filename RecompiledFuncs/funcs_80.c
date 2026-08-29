#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80334E48_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334E48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334E50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334E54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334E58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334E5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334E68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334E70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334E74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334E78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80334E7C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334E80: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80334E84: nop

    // 0x80334E88: bne         $t0, $zero, L_80334EC4
    if (ctx->r8 != 0) {
        // 0x80334E8C: nop
    
            goto L_80334EC4;
    }
    // 0x80334E8C: nop

    // 0x80334E90: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80334E94: nop

    // 0x80334E98: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80334E9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334EA4: jal         0x8001BBDC
    // 0x80334EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80334EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334EAC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80334EB0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80334EB4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80334EB8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80334EBC: nop

    // 0x80334EC0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80334EC4:
    // 0x80334EC4: b           L_80334ECC
    // 0x80334EC8: nop

        goto L_80334ECC;
    // 0x80334EC8: nop

L_80334ECC:
    // 0x80334ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334ED4: jr          $ra
    // 0x80334ED8: nop

    return;
    // 0x80334ED8: nop

;}
RECOMP_FUNC void func_80330CD8_unk_bin_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330CD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330CDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80330CE0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80330CE4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80330CE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330CEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330CF0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330CF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330CF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330D0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D10: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330D14: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D18: nop

    // 0x80330D1C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330D20: nop

    // 0x80330D24: bne         $t1, $zero, L_80330DB8
    if (ctx->r9 != 0) {
        // 0x80330D28: nop
    
            goto L_80330DB8;
    }
    // 0x80330D28: nop

    // 0x80330D2C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D30: nop

    // 0x80330D34: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330D38: nop

    // 0x80330D3C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330D40: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330D44: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D48: nop

    // 0x80330D4C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330D50: nop

    // 0x80330D54: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330D58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D5C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330D60: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x80330D64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D68: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330D6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D70: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80330D74: jal         0x8001C0EC
    // 0x80330D78: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330D78: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80330D7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D84: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330D88: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330D8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D90: jal         0x8001ABF4
    // 0x80330D94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330D94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80330D98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D9C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330DA0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80330DA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DA8: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x80330DAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330DB0: jal         0x8001ABF4
    // 0x80330DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80330DB8:
    // 0x80330DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DC0: jal         0x8002A8B4
    // 0x80330DC4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80330DC4: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x80330DC8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DCC: nop

    // 0x80330DD0: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80330DD4: nop

    // 0x80330DD8: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80330DDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DE4: jal         0x80029C40
    // 0x80330DE8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80330DE8: nop

    after_4:
    // 0x80330DEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330DF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330DF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330DF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330DFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330E00: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80330E04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330E08: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80330E0C: jal         0x80029018
    // 0x80330E10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80330E10: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80330E14: beq         $v0, $zero, L_80330E7C
    if (ctx->r2 == 0) {
        // 0x80330E18: nop
    
            goto L_80330E7C;
    }
    // 0x80330E18: nop

    // 0x80330E1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330E20: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E24: nop

    // 0x80330E28: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x80330E2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E30: nop

    // 0x80330E34: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80330E38: nop

    // 0x80330E3C: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80330E40: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E44: nop

    // 0x80330E48: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x80330E4C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330E50: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E54: nop

    // 0x80330E58: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x80330E5C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E60: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330E64: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330E68: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E6C: nop

    // 0x80330E70: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80330E74: b           L_8033100C
    // 0x80330E78: nop

        goto L_8033100C;
    // 0x80330E78: nop

L_80330E7C:
    // 0x80330E7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E84: jal         0x8001B4AC
    // 0x80330E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80330E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80330E8C: beq         $v0, $zero, L_80331004
    if (ctx->r2 == 0) {
        // 0x80330E90: nop
    
            goto L_80331004;
    }
    // 0x80330E90: nop

    // 0x80330E94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330E98: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E9C: nop

    // 0x80330EA0: swc1        $f18, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f18.u32l;
    // 0x80330EA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330EA8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EAC: nop

    // 0x80330EB0: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x80330EB4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EB8: nop

    // 0x80330EBC: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80330EC0: nop

    // 0x80330EC4: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x80330EC8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330ECC: nop

    // 0x80330ED0: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
    // 0x80330ED4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330ED8: nop

    // 0x80330EDC: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80330EE0: nop

    // 0x80330EE4: bne         $t1, $zero, L_80330F54
    if (ctx->r9 != 0) {
        // 0x80330EE8: nop
    
            goto L_80330F54;
    }
    // 0x80330EE8: nop

    // 0x80330EEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EF4: jal         0x8002A1FC
    // 0x80330EF8: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x80330EF8: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_7:
    // 0x80330EFC: beq         $v0, $zero, L_80330F2C
    if (ctx->r2 == 0) {
        // 0x80330F00: nop
    
            goto L_80330F2C;
    }
    // 0x80330F00: nop

    // 0x80330F04: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F08: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x80330F0C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330F10: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F14: nop

    // 0x80330F18: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80330F1C: b           L_8033100C
    // 0x80330F20: nop

        goto L_8033100C;
    // 0x80330F20: nop

    // 0x80330F24: b           L_80330F4C
    // 0x80330F28: nop

        goto L_80330F4C;
    // 0x80330F28: nop

L_80330F2C:
    // 0x80330F2C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F30: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80330F34: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80330F38: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F3C: nop

    // 0x80330F40: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330F44: b           L_8033100C
    // 0x80330F48: nop

        goto L_8033100C;
    // 0x80330F48: nop

L_80330F4C:
    // 0x80330F4C: b           L_80330FB4
    // 0x80330F50: nop

        goto L_80330FB4;
    // 0x80330F50: nop

L_80330F54:
    // 0x80330F54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F5C: jal         0x8002A1FC
    // 0x80330F60: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x80330F60: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_8:
    // 0x80330F64: beq         $v0, $zero, L_80330F94
    if (ctx->r2 == 0) {
        // 0x80330F68: nop
    
            goto L_80330F94;
    }
    // 0x80330F68: nop

    // 0x80330F6C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F70: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x80330F74: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80330F78: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F7C: nop

    // 0x80330F80: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80330F84: b           L_8033100C
    // 0x80330F88: nop

        goto L_8033100C;
    // 0x80330F88: nop

    // 0x80330F8C: b           L_80330FB4
    // 0x80330F90: nop

        goto L_80330FB4;
    // 0x80330F90: nop

L_80330F94:
    // 0x80330F94: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F98: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80330F9C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80330FA0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FA4: nop

    // 0x80330FA8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80330FAC: b           L_8033100C
    // 0x80330FB0: nop

        goto L_8033100C;
    // 0x80330FB0: nop

L_80330FB4:
    // 0x80330FB4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80330FB8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330FBC: jal         0x80333D24
    // 0x80330FC0: nop

    func_80333D24_unk_bin_24(rdram, ctx);
        goto after_9;
    // 0x80330FC0: nop

    after_9:
    // 0x80330FC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330FC8: beq         $v0, $at, L_80330FEC
    if (ctx->r2 == ctx->r1) {
        // 0x80330FCC: nop
    
            goto L_80330FEC;
    }
    // 0x80330FCC: nop

    // 0x80330FD0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80330FD4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80330FD8: jal         0x80333E64
    // 0x80330FDC: nop

    func_80333E64_unk_bin_24(rdram, ctx);
        goto after_10;
    // 0x80330FDC: nop

    after_10:
    // 0x80330FE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330FE4: bne         $v0, $at, L_80331004
    if (ctx->r2 != ctx->r1) {
        // 0x80330FE8: nop
    
            goto L_80331004;
    }
    // 0x80330FE8: nop

L_80330FEC:
    // 0x80330FEC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FF0: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80330FF4: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80330FF8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330FFC: nop

    // 0x80331000: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331004:
    // 0x80331004: b           L_8033100C
    // 0x80331008: nop

        goto L_8033100C;
    // 0x80331008: nop

L_8033100C:
    // 0x8033100C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331010: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331014: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331018: jr          $ra
    // 0x8033101C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033101C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033A564_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A564: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A568: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A56C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A570: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A574: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A578: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A57C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A580: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A588: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A58C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A590: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A594: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A598: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A59C: nop

    // 0x8033A5A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A5A4: nop

    // 0x8033A5A8: bne         $t1, $zero, L_8033A600
    if (ctx->r9 != 0) {
        // 0x8033A5AC: nop
    
            goto L_8033A600;
    }
    // 0x8033A5AC: nop

    // 0x8033A5B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A5B4: nop

    // 0x8033A5B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A5BC: nop

    // 0x8033A5C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A5C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A5C8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A5CC: nop

    // 0x8033A5D0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A5D4: nop

    // 0x8033A5D8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A5DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A5E0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A5E4: addiu       $t7, $t7, -0x3E2C
    ctx->r15 = ADD32(ctx->r15, -0X3E2C);
    // 0x8033A5E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A5EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A5F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A5F4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8033A5F8: jal         0x8001C0EC
    // 0x8033A5FC: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A5FC: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_0:
L_8033A600:
    // 0x8033A600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A604: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A608: jal         0x8001B4AC
    // 0x8033A60C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A60C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A610: beq         $v0, $zero, L_8033A630
    if (ctx->r2 == 0) {
        // 0x8033A614: nop
    
            goto L_8033A630;
    }
    // 0x8033A614: nop

    // 0x8033A618: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A61C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A620: jal         0x8002B114
    // 0x8033A624: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033A624: nop

    after_2:
    // 0x8033A628: b           L_8033A638
    // 0x8033A62C: nop

        goto L_8033A638;
    // 0x8033A62C: nop

L_8033A630:
    // 0x8033A630: b           L_8033A638
    // 0x8033A634: nop

        goto L_8033A638;
    // 0x8033A634: nop

L_8033A638:
    // 0x8033A638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A63C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A640: jr          $ra
    // 0x8033A644: nop

    return;
    // 0x8033A644: nop

;}
RECOMP_FUNC void func_803372D8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803372D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803372DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803372E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803372E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803372E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803372EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803372F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803372F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803372F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803372FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337300: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337304: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337308: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033730C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337310: nop

    // 0x80337314: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337318: nop

    // 0x8033731C: bne         $t1, $zero, L_803373E0
    if (ctx->r9 != 0) {
        // 0x80337320: nop
    
            goto L_803373E0;
    }
    // 0x80337320: nop

    // 0x80337324: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337328: nop

    // 0x8033732C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337330: nop

    // 0x80337334: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337338: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033733C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337340: nop

    // 0x80337344: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337348: nop

    // 0x8033734C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337354: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337358: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x8033735C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337360: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337368: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8033736C: jal         0x8001C0EC
    // 0x80337370: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337370: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80337374: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337378: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033737C: jal         0x8001BBDC
    // 0x80337380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80337380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033738C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337390: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80337394: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337398: jal         0x8001ABF4
    // 0x8033739C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033739C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803373A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803373A8: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803373AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373B0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803373B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803373B8: jal         0x8001ABF4
    // 0x803373BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803373BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803373C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803373C8: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803373CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373D0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803373D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803373D8: jal         0x8001ABF4
    // 0x803373DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803373DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803373E0:
    // 0x803373E0: jal         0x80334D5C
    // 0x803373E4: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803373E4: nop

    after_5:
    // 0x803373E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373F0: jal         0x8001B4AC
    // 0x803373F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803373F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x803373F8: beq         $v0, $zero, L_80337418
    if (ctx->r2 == 0) {
        // 0x803373FC: nop
    
            goto L_80337418;
    }
    // 0x803373FC: nop

    // 0x80337400: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337404: addiu       $t8, $zero, 0x24
    ctx->r24 = ADD32(0, 0X24);
    // 0x80337408: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033740C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337410: nop

    // 0x80337414: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337418:
    // 0x80337418: b           L_80337420
    // 0x8033741C: nop

        goto L_80337420;
    // 0x8033741C: nop

L_80337420:
    // 0x80337420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337424: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337428: jr          $ra
    // 0x8033742C: nop

    return;
    // 0x8033742C: nop

;}
RECOMP_FUNC void func_803360E0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803360E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803360E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803360E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803360EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803360F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803360F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803360F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803360FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336104: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336108: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033610C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336110: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336114: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336118: nop

    // 0x8033611C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336120: nop

    // 0x80336124: bne         $t1, $zero, L_8033618C
    if (ctx->r9 != 0) {
        // 0x80336128: nop
    
            goto L_8033618C;
    }
    // 0x80336128: nop

    // 0x8033612C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336130: nop

    // 0x80336134: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336138: nop

    // 0x8033613C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336140: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336144: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336148: nop

    // 0x8033614C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336150: nop

    // 0x80336154: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336158: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033615C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336160: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336164: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336168: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033616C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336170: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80336174: jal         0x8001C0EC
    // 0x80336178: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336178: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x8033617C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336184: jal         0x8001BBDC
    // 0x80336188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033618C:
    // 0x8033618C: jal         0x80334D5C
    // 0x80336190: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80336190: nop

    after_2:
    // 0x80336194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033619C: jal         0x8001B4AC
    // 0x803361A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803361A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803361A4: beq         $v0, $zero, L_803361C4
    if (ctx->r2 == 0) {
        // 0x803361A8: nop
    
            goto L_803361C4;
    }
    // 0x803361A8: nop

    // 0x803361AC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803361B0: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x803361B4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803361B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803361BC: nop

    // 0x803361C0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803361C4:
    // 0x803361C4: b           L_803361CC
    // 0x803361C8: nop

        goto L_803361CC;
    // 0x803361C8: nop

L_803361CC:
    // 0x803361CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803361D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803361D4: jr          $ra
    // 0x803361D8: nop

    return;
    // 0x803361D8: nop

;}
RECOMP_FUNC void func_80339C18_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339C18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339C1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339C20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80339C24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339C28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339C2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339C30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339C34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339C38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339C3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339C40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339C44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339C48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339C4C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339C50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339C54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339C58: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80339C5C: nop

    // 0x80339C60: beq         $s0, $at, L_80339C7C
    if (ctx->r16 == ctx->r1) {
        // 0x80339C64: nop
    
            goto L_80339C7C;
    }
    // 0x80339C64: nop

    // 0x80339C68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339C6C: beq         $s0, $at, L_80339C8C
    if (ctx->r16 == ctx->r1) {
        // 0x80339C70: nop
    
            goto L_80339C8C;
    }
    // 0x80339C70: nop

    // 0x80339C74: b           L_80339C9C
    // 0x80339C78: nop

        goto L_80339C9C;
    // 0x80339C78: nop

L_80339C7C:
    // 0x80339C7C: jal         0x80339850
    // 0x80339C80: nop

    func_80339850_unk_bin_25(rdram, ctx);
        goto after_0;
    // 0x80339C80: nop

    after_0:
    // 0x80339C84: b           L_80339CA4
    // 0x80339C88: nop

        goto L_80339CA4;
    // 0x80339C88: nop

L_80339C8C:
    // 0x80339C8C: jal         0x803399E4
    // 0x80339C90: nop

    func_803399E4_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x80339C90: nop

    after_1:
    // 0x80339C94: b           L_80339CA4
    // 0x80339C98: nop

        goto L_80339CA4;
    // 0x80339C98: nop

L_80339C9C:
    // 0x80339C9C: b           L_80339CA4
    // 0x80339CA0: nop

        goto L_80339CA4;
    // 0x80339CA0: nop

L_80339CA4:
    // 0x80339CA4: b           L_80339CAC
    // 0x80339CA8: nop

        goto L_80339CAC;
    // 0x80339CA8: nop

L_80339CAC:
    // 0x80339CAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339CB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80339CB4: jr          $ra
    // 0x80339CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80339CB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80337724_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337724: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033772C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337730: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337734: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337738: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033773C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337740: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337744: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337748: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033774C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337750: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337754: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337758: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033775C: nop

    // 0x80337760: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337764: nop

    // 0x80337768: bne         $t1, $zero, L_803377D0
    if (ctx->r9 != 0) {
        // 0x8033776C: nop
    
            goto L_803377D0;
    }
    // 0x8033776C: nop

    // 0x80337770: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337774: nop

    // 0x80337778: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033777C: nop

    // 0x80337780: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337784: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337788: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033778C: nop

    // 0x80337790: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337794: nop

    // 0x80337798: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033779C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377A0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803377A4: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803377A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377AC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803377B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803377B4: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x803377B8: jal         0x8001C0EC
    // 0x803377BC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803377BC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803377C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377C8: jal         0x8001BBDC
    // 0x803377CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803377CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803377D0:
    // 0x803377D0: jal         0x80334D5C
    // 0x803377D4: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803377D4: nop

    after_2:
    // 0x803377D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377E0: jal         0x8001B4AC
    // 0x803377E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803377E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803377E8: beq         $v0, $zero, L_80337808
    if (ctx->r2 == 0) {
        // 0x803377EC: nop
    
            goto L_80337808;
    }
    // 0x803377EC: nop

    // 0x803377F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803377F4: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x803377F8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803377FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337800: nop

    // 0x80337804: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337808:
    // 0x80337808: b           L_80337810
    // 0x8033780C: nop

        goto L_80337810;
    // 0x8033780C: nop

L_80337810:
    // 0x80337810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337818: jr          $ra
    // 0x8033781C: nop

    return;
    // 0x8033781C: nop

;}
RECOMP_FUNC void func_8033752C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033752C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033753C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033754C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033755C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337560: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337564: nop

    // 0x80337568: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033756C: nop

    // 0x80337570: bne         $t1, $zero, L_803375D8
    if (ctx->r9 != 0) {
        // 0x80337574: nop
    
            goto L_803375D8;
    }
    // 0x80337574: nop

    // 0x80337578: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033757C: nop

    // 0x80337580: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337584: nop

    // 0x80337588: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033758C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337590: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337594: nop

    // 0x80337598: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033759C: nop

    // 0x803375A0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803375A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803375A8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803375AC: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803375B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803375B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803375B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803375BC: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x803375C0: jal         0x8001C0EC
    // 0x803375C4: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803375C4: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803375C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803375CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803375D0: jal         0x8001BBDC
    // 0x803375D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803375D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803375D8:
    // 0x803375D8: jal         0x80334D5C
    // 0x803375DC: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803375DC: nop

    after_2:
    // 0x803375E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803375E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803375E8: jal         0x8001B4AC
    // 0x803375EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803375EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803375F0: beq         $v0, $zero, L_80337610
    if (ctx->r2 == 0) {
        // 0x803375F4: nop
    
            goto L_80337610;
    }
    // 0x803375F4: nop

    // 0x803375F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803375FC: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x80337600: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337604: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337608: nop

    // 0x8033760C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337610:
    // 0x80337610: b           L_80337618
    // 0x80337614: nop

        goto L_80337618;
    // 0x80337614: nop

L_80337618:
    // 0x80337618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033761C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337620: jr          $ra
    // 0x80337624: nop

    return;
    // 0x80337624: nop

;}
RECOMP_FUNC void func_80331EC0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331EC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331EC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331EC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331ECC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331ED0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331ED4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331EE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331EE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331EEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331EF0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331EF4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331EF8: nop

    // 0x80331EFC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F00: nop

    // 0x80331F04: bne         $t1, $zero, L_80332038
    if (ctx->r9 != 0) {
        // 0x80331F08: nop
    
            goto L_80332038;
    }
    // 0x80331F08: nop

    // 0x80331F0C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F10: nop

    // 0x80331F14: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331F18: nop

    // 0x80331F1C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331F20: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331F24: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F28: nop

    // 0x80331F2C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331F30: nop

    // 0x80331F34: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331F38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331F40: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80331F44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331F4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331F50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80331F54: jal         0x8001C0EC
    // 0x80331F58: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331F58: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80331F5C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80331F64: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x80331F68: lui         $at, 0x4228
    ctx->r1 = S32(0X4228 << 16);
    // 0x80331F6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331F70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F74: nop

    // 0x80331F78: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x80331F7C: jal         0x80014E80
    // 0x80331F80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80331F80: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80331F84: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80331F88: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80331F8C: nop

    // 0x80331F90: bne         $t1, $zero, L_80331FBC
    if (ctx->r9 != 0) {
        // 0x80331F94: nop
    
            goto L_80331FBC;
    }
    // 0x80331F94: nop

    // 0x80331F98: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F9C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80331FA0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FA4: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80331FA8: jal         0x80015538
    // 0x80331FAC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80331FAC: nop

    after_2:
    // 0x80331FB0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331FB4: b           L_80331FE0
    // 0x80331FB8: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
        goto L_80331FE0;
    // 0x80331FB8: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
L_80331FBC:
    // 0x80331FBC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331FC0: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x80331FC4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331FC8: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80331FCC: jal         0x80015538
    // 0x80331FD0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80331FD0: nop

    after_3:
    // 0x80331FD4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331FD8: nop

    // 0x80331FDC: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
L_80331FE0:
    // 0x80331FE0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331FE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FE8: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80331FEC: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80331FF0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331FF4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331FF8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331FFC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332000: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332004: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332008: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x8033200C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332010: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332014: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80332018: nop

    // 0x8033201C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332020: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332024: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332028: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033202C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332030: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332034: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80332038:
    // 0x80332038: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033203C: nop

    // 0x80332040: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332044: nop

    // 0x80332048: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8033204C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332050: nop

    // 0x80332054: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332058: nop

    // 0x8033205C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
    // 0x80332060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332064: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332068: jal         0x8002A8B4
    // 0x8033206C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x8033206C: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x80332070: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332074: nop

    // 0x80332078: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033207C: nop

    // 0x80332080: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
    // 0x80332084: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332088: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033208C: nop

    // 0x80332090: swc1        $f16, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f16.u32l;
    // 0x80332094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033209C: jal         0x80029C40
    // 0x803320A0: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x803320A0: nop

    after_5:
    // 0x803320A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803320A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803320AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803320B0: lwc1        $f18, 0x44($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X44);
    // 0x803320B4: nop

    // 0x803320B8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803320BC: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x803320C0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803320C4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803320C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803320CC: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803320D0: nop

    // 0x803320D4: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x803320D8: nop

    // 0x803320DC: bc1f        L_80332108
    if (!c1cs) {
        // 0x803320E0: nop
    
            goto L_80332108;
    }
    // 0x803320E0: nop

    // 0x803320E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803320E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803320EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803320F0: nop

    // 0x803320F4: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x803320F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803320FC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332100: b           L_8033211C
    // 0x80332104: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
        goto L_8033211C;
    // 0x80332104: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
L_80332108:
    // 0x80332108: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033210C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332110: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332114: nop

    // 0x80332118: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
L_8033211C:
    // 0x8033211C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332124: jal         0x8001B62C
    // 0x80332128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x80332128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033212C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80332130: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332134: nop

    // 0x80332138: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8033213C: nop

    // 0x80332140: bc1f        L_80332164
    if (!c1cs) {
        // 0x80332144: nop
    
            goto L_80332164;
    }
    // 0x80332144: nop

    // 0x80332148: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033214C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332154: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80332158: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033215C: jal         0x800175F0
    // 0x80332160: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x80332160: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_80332164:
    // 0x80332164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033216C: jal         0x8001B4AC
    // 0x80332170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80332170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80332174: beq         $v0, $zero, L_803321D0
    if (ctx->r2 == 0) {
        // 0x80332178: nop
    
            goto L_803321D0;
    }
    // 0x80332178: nop

    // 0x8033217C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332180: nop

    // 0x80332184: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80332188: nop

    // 0x8033218C: bne         $t4, $zero, L_803321B8
    if (ctx->r12 != 0) {
        // 0x80332190: nop
    
            goto L_803321B8;
    }
    // 0x80332190: nop

    // 0x80332194: jal         0x80330434
    // 0x80332198: nop

    func_80330434_unk_bin_25(rdram, ctx);
        goto after_9;
    // 0x80332198: nop

    after_9:
    // 0x8033219C: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x803321A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x803321A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803321A8: jal         0x80330B3C
    // 0x803321AC: nop

    func_80330B3C_unk_bin_25(rdram, ctx);
        goto after_10;
    // 0x803321AC: nop

    after_10:
    // 0x803321B0: b           L_803321D0
    // 0x803321B4: nop

        goto L_803321D0;
    // 0x803321B4: nop

L_803321B8:
    // 0x803321B8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803321BC: nop

    // 0x803321C0: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x803321C4: nop

    // 0x803321C8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803321CC: sh          $t7, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r15;
L_803321D0:
    // 0x803321D0: b           L_803321D8
    // 0x803321D4: nop

        goto L_803321D8;
    // 0x803321D4: nop

L_803321D8:
    // 0x803321D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803321DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803321E0: jr          $ra
    // 0x803321E4: nop

    return;
    // 0x803321E4: nop

;}
RECOMP_FUNC void func_8033880C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033880C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338810: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338814: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338818: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033881C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338820: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033882C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338830: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338834: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338838: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033883C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338840: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338844: nop

    // 0x80338848: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033884C: nop

    // 0x80338850: bne         $t1, $zero, L_803388A8
    if (ctx->r9 != 0) {
        // 0x80338854: nop
    
            goto L_803388A8;
    }
    // 0x80338854: nop

    // 0x80338858: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033885C: nop

    // 0x80338860: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338864: nop

    // 0x80338868: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033886C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338870: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338874: nop

    // 0x80338878: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033887C: nop

    // 0x80338880: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338888: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033888C: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338890: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338894: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033889C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803388A0: jal         0x8001C0EC
    // 0x803388A4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803388A4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_803388A8:
    // 0x803388A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803388AC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803388B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803388B4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803388B8: jal         0x80015538
    // 0x803388BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803388BC: nop

    after_1:
    // 0x803388C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803388C4: nop

    // 0x803388C8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x803388CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803388D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803388D4: jal         0x8001B4AC
    // 0x803388D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803388D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803388DC: beq         $v0, $zero, L_803388FC
    if (ctx->r2 == 0) {
        // 0x803388E0: nop
    
            goto L_803388FC;
    }
    // 0x803388E0: nop

    // 0x803388E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803388E8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x803388EC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803388F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803388F4: nop

    // 0x803388F8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_803388FC:
    // 0x803388FC: b           L_80338904
    // 0x80338900: nop

        goto L_80338904;
    // 0x80338900: nop

L_80338904:
    // 0x80338904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033890C: jr          $ra
    // 0x80338910: nop

    return;
    // 0x80338910: nop

;}
RECOMP_FUNC void func_80332580_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332580: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80332584: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332588: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033258C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80332590: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332594: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332598: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033259C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803325A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803325A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803325AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803325B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803325B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803325B8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803325BC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803325C0: nop

    // 0x803325C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803325C8: nop

    // 0x803325CC: bne         $t1, $zero, L_8033268C
    if (ctx->r9 != 0) {
        // 0x803325D0: nop
    
            goto L_8033268C;
    }
    // 0x803325D0: nop

    // 0x803325D4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803325D8: nop

    // 0x803325DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803325E0: nop

    // 0x803325E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803325E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803325EC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803325F0: nop

    // 0x803325F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803325F8: nop

    // 0x803325FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332604: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332608: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x8033260C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332610: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332618: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033261C: jal         0x8001C0EC
    // 0x80332620: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332620: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80332624: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033262C: jal         0x8001BBDC
    // 0x80332630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80332630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332634: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332638: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033263C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80332640: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x80332644: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332648: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033264C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332650: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332654: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332658: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033265C: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80332660: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332664: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332668: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033266C: nop

    // 0x80332670: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332674: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332678: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033267C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332680: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332684: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332688: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033268C:
    // 0x8033268C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332694: jal         0x8002A8B4
    // 0x80332698: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80332698: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x8033269C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803326A0: nop

    // 0x803326A4: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803326A8: nop

    // 0x803326AC: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x803326B0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803326B4: nop

    // 0x803326B8: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x803326BC: nop

    // 0x803326C0: bne         $t7, $zero, L_80332720
    if (ctx->r15 != 0) {
        // 0x803326C4: nop
    
            goto L_80332720;
    }
    // 0x803326C4: nop

    // 0x803326C8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803326CC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803326D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803326D4: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x803326D8: jal         0x80015538
    // 0x803326DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803326DC: nop

    after_3:
    // 0x803326E0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803326E4: nop

    // 0x803326E8: swc1        $f0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f0.u32l;
    // 0x803326EC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803326F0: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x803326F4: lwc1        $f6, 0x44($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X44);
    // 0x803326F8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x803326FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332700: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80332704: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80332708: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8033270C: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
    // 0x80332710: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332714: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332718: jal         0x80029D8C
    // 0x8033271C: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x8033271C: nop

    after_4:
L_80332720:
    // 0x80332720: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332724: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332728: jal         0x8001B62C
    // 0x8033272C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x8033272C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80332730: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332734: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332738: nop

    // 0x8033273C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80332740: nop

    // 0x80332744: bc1f        L_803328B4
    if (!c1cs) {
        // 0x80332748: nop
    
            goto L_803328B4;
    }
    // 0x80332748: nop

    // 0x8033274C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332750: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332754: nop

    // 0x80332758: swc1        $f6, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f6.u32l;
    // 0x8033275C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332760: nop

    // 0x80332764: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80332768: nop

    // 0x8033276C: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x80332770: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332774: nop

    // 0x80332778: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x8033277C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332780: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332784: nop

    // 0x80332788: swc1        $f8, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f8.u32l;
    // 0x8033278C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332790: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80332794: nop

    // 0x80332798: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
    // 0x8033279C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803327A0: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x803327A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803327A8: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x803327AC: nop

    // 0x803327B0: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x803327B4: nop

    // 0x803327B8: bc1t        L_80332818
    if (c1cs) {
        // 0x803327BC: nop
    
            goto L_80332818;
    }
    // 0x803327BC: nop

    // 0x803327C0: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x803327C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803327C8: nop

    // 0x803327CC: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x803327D0: nop

    // 0x803327D4: bc1t        L_80332818
    if (c1cs) {
        // 0x803327D8: nop
    
            goto L_80332818;
    }
    // 0x803327D8: nop

    // 0x803327DC: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x803327E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803327E4: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803327E8: nop

    // 0x803327EC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x803327F0: nop

    // 0x803327F4: bc1t        L_80332818
    if (c1cs) {
        // 0x803327F8: nop
    
            goto L_80332818;
    }
    // 0x803327F8: nop

    // 0x803327FC: lui         $at, 0xC407
    ctx->r1 = S32(0XC407 << 16);
    // 0x80332800: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332804: nop

    // 0x80332808: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8033280C: nop

    // 0x80332810: bc1f        L_80332830
    if (!c1cs) {
        // 0x80332814: nop
    
            goto L_80332830;
    }
    // 0x80332814: nop

L_80332818:
    // 0x80332818: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033281C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80332820: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x80332824: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332828: b           L_803328B4
    // 0x8033282C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_803328B4;
    // 0x8033282C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80332830:
    // 0x80332830: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80332834: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80332838: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033283C: jal         0x80330B3C
    // 0x80332840: nop

    func_80330B3C_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x80332840: nop

    after_6:
    // 0x80332844: beq         $v0, $zero, L_80332854
    if (ctx->r2 == 0) {
        // 0x80332848: nop
    
            goto L_80332854;
    }
    // 0x80332848: nop

    // 0x8033284C: b           L_803329AC
    // 0x80332850: nop

        goto L_803329AC;
    // 0x80332850: nop

L_80332854:
    // 0x80332854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033285C: jal         0x8002A1FC
    // 0x80332860: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x80332860: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_7:
    // 0x80332864: beq         $v0, $zero, L_8033288C
    if (ctx->r2 == 0) {
        // 0x80332868: nop
    
            goto L_8033288C;
    }
    // 0x80332868: nop

    // 0x8033286C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332870: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80332874: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x80332878: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033287C: nop

    // 0x80332880: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80332884: b           L_803329AC
    // 0x80332888: nop

        goto L_803329AC;
    // 0x80332888: nop

L_8033288C:
    // 0x8033288C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332890: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332894: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
    // 0x80332898: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033289C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x803328A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803328A4: lwc1        $f18, 0x28($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X28);
    // 0x803328A8: nop

    // 0x803328AC: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x803328B0: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
L_803328B4:
    // 0x803328B4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803328B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803328BC: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x803328C0: nop

    // 0x803328C4: bne         $t7, $at, L_80332954
    if (ctx->r15 != ctx->r1) {
        // 0x803328C8: nop
    
            goto L_80332954;
    }
    // 0x803328C8: nop

    // 0x803328CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803328D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803328D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803328D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803328DC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x803328E0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x803328E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803328E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803328EC: jal         0x800295C0
    // 0x803328F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x803328F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x803328F4: beq         $v0, $zero, L_80332908
    if (ctx->r2 == 0) {
        // 0x803328F8: nop
    
            goto L_80332908;
    }
    // 0x803328F8: nop

    // 0x803328FC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80332900: b           L_80332914
    // 0x80332904: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
        goto L_80332914;
    // 0x80332904: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_80332908:
    // 0x80332908: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8033290C: nop

    // 0x80332910: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
L_80332914:
    // 0x80332914: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332918: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8033291C: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80332920: nop

    // 0x80332924: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x80332928: nop

    // 0x8033292C: bc1f        L_80332954
    if (!c1cs) {
        // 0x80332930: nop
    
            goto L_80332954;
    }
    // 0x80332930: nop

    // 0x80332934: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80332938: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033293C: nop

    // 0x80332940: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
    // 0x80332944: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332948: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033294C: nop

    // 0x80332950: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
L_80332954:
    // 0x80332954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033295C: jal         0x8001B4AC
    // 0x80332960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x80332960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80332964: beq         $v0, $zero, L_803329A4
    if (ctx->r2 == 0) {
        // 0x80332968: nop
    
            goto L_803329A4;
    }
    // 0x80332968: nop

    // 0x8033296C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332970: nop

    // 0x80332974: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
    // 0x80332978: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033297C: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x80332980: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80332984: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332988: nop

    // 0x8033298C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80332990: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80332994: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80332998: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033299C: jal         0x80330B3C
    // 0x803329A0: nop

    func_80330B3C_unk_bin_25(rdram, ctx);
        goto after_10;
    // 0x803329A0: nop

    after_10:
L_803329A4:
    // 0x803329A4: b           L_803329AC
    // 0x803329A8: nop

        goto L_803329AC;
    // 0x803329A8: nop

L_803329AC:
    // 0x803329AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803329B0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803329B4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803329B8: jr          $ra
    // 0x803329BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803329BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80335DEC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335DEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335DF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335DF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335DF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335DFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335E00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335E04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335E14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335E18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335E1C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335E20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335E24: nop

    // 0x80335E28: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335E2C: nop

    // 0x80335E30: bne         $t1, $zero, L_80335E98
    if (ctx->r9 != 0) {
        // 0x80335E34: nop
    
            goto L_80335E98;
    }
    // 0x80335E34: nop

    // 0x80335E38: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335E3C: nop

    // 0x80335E40: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335E44: nop

    // 0x80335E48: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335E4C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335E50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335E54: nop

    // 0x80335E58: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335E5C: nop

    // 0x80335E60: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335E64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E68: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335E6C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335E70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335E78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335E7C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80335E80: jal         0x8001C0EC
    // 0x80335E84: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335E84: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335E88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E90: jal         0x8001BBDC
    // 0x80335E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335E98:
    // 0x80335E98: jal         0x80334D5C
    // 0x80335E9C: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335E9C: nop

    after_2:
    // 0x80335EA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335EA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335EA8: jal         0x8001B4AC
    // 0x80335EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335EB0: beq         $v0, $zero, L_80335ED0
    if (ctx->r2 == 0) {
        // 0x80335EB4: nop
    
            goto L_80335ED0;
    }
    // 0x80335EB4: nop

    // 0x80335EB8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335EBC: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x80335EC0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335EC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335EC8: nop

    // 0x80335ECC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335ED0:
    // 0x80335ED0: b           L_80335ED8
    // 0x80335ED4: nop

        goto L_80335ED8;
    // 0x80335ED4: nop

L_80335ED8:
    // 0x80335ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335EDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335EE0: jr          $ra
    // 0x80335EE4: nop

    return;
    // 0x80335EE4: nop

;}
RECOMP_FUNC void func_80338914_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338914: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338918: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033891C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338920: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338924: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338928: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033892C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338930: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338938: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033893C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338940: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338944: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338948: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033894C: nop

    // 0x80338950: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338954: nop

    // 0x80338958: bne         $t1, $zero, L_803389B0
    if (ctx->r9 != 0) {
        // 0x8033895C: nop
    
            goto L_803389B0;
    }
    // 0x8033895C: nop

    // 0x80338960: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338964: nop

    // 0x80338968: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033896C: nop

    // 0x80338970: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338974: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338978: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033897C: nop

    // 0x80338980: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338984: nop

    // 0x80338988: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033898C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338990: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338994: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338998: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033899C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803389A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803389A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803389A8: jal         0x8001C0EC
    // 0x803389AC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803389AC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_803389B0:
    // 0x803389B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803389B4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x803389B8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803389BC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803389C0: jal         0x80015538
    // 0x803389C4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803389C4: nop

    after_1:
    // 0x803389C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803389CC: nop

    // 0x803389D0: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x803389D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389DC: jal         0x8001B4AC
    // 0x803389E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803389E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803389E4: beq         $v0, $zero, L_80338A04
    if (ctx->r2 == 0) {
        // 0x803389E8: nop
    
            goto L_80338A04;
    }
    // 0x803389E8: nop

    // 0x803389EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803389F0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x803389F4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x803389F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803389FC: nop

    // 0x80338A00: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338A04:
    // 0x80338A04: b           L_80338A0C
    // 0x80338A08: nop

        goto L_80338A0C;
    // 0x80338A08: nop

L_80338A0C:
    // 0x80338A0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338A10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338A14: jr          $ra
    // 0x80338A18: nop

    return;
    // 0x80338A18: nop

;}
RECOMP_FUNC void func_80338F44_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338F44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338F48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338F4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338F50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338F54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338F5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338F60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338F64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338F68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338F6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338F70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338F74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338F78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338F7C: nop

    // 0x80338F80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338F84: nop

    // 0x80338F88: bne         $t1, $zero, L_80338FE0
    if (ctx->r9 != 0) {
        // 0x80338F8C: nop
    
            goto L_80338FE0;
    }
    // 0x80338F8C: nop

    // 0x80338F90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338F94: nop

    // 0x80338F98: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338F9C: nop

    // 0x80338FA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338FA4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338FA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338FAC: nop

    // 0x80338FB0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338FB4: nop

    // 0x80338FB8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338FBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338FC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338FC4: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338FCC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338FD4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80338FD8: jal         0x8001C0EC
    // 0x80338FDC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338FDC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_80338FE0:
    // 0x80338FE0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338FE4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338FE8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338FEC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80338FF0: jal         0x80015538
    // 0x80338FF4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338FF4: nop

    after_1:
    // 0x80338FF8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338FFC: nop

    // 0x80339000: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80339004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033900C: jal         0x8001B4AC
    // 0x80339010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80339010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80339014: beq         $v0, $zero, L_80339034
    if (ctx->r2 == 0) {
        // 0x80339018: nop
    
            goto L_80339034;
    }
    // 0x80339018: nop

    // 0x8033901C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339020: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x80339024: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80339028: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033902C: nop

    // 0x80339030: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80339034:
    // 0x80339034: b           L_8033903C
    // 0x80339038: nop

        goto L_8033903C;
    // 0x80339038: nop

L_8033903C:
    // 0x8033903C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339044: jr          $ra
    // 0x80339048: nop

    return;
    // 0x80339048: nop

;}
RECOMP_FUNC void func_803329C0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803329C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803329C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803329C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803329CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803329D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803329D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803329D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803329E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803329E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803329EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803329F0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803329F4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803329F8: nop

    // 0x803329FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332A00: nop

    // 0x80332A04: bne         $t1, $zero, L_80332AB4
    if (ctx->r9 != 0) {
        // 0x80332A08: nop
    
            goto L_80332AB4;
    }
    // 0x80332A08: nop

    // 0x80332A0C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A10: nop

    // 0x80332A14: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332A18: nop

    // 0x80332A1C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332A20: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332A24: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A28: nop

    // 0x80332A2C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332A30: nop

    // 0x80332A34: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80332A40: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80332A44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332A50: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80332A54: jal         0x8001C0EC
    // 0x80332A58: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332A58: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80332A5C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A64: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80332A68: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x80332A6C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332A70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332A74: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332A78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332A7C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332A80: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332A84: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80332A88: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A90: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80332A94: nop

    // 0x80332A98: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332A9C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332AA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332AA4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332AA8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332AAC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332AB0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80332AB4:
    // 0x80332AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332ABC: jal         0x8001B62C
    // 0x80332AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80332AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332AC4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80332AC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332ACC: nop

    // 0x80332AD0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80332AD4: nop

    // 0x80332AD8: bc1f        L_80332AF0
    if (!c1cs) {
        // 0x80332ADC: nop
    
            goto L_80332AF0;
    }
    // 0x80332ADC: nop

    // 0x80332AE0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80332AE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80332AE8: b           L_80333004
    // 0x80332AEC: sh          $t6, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r14;
        goto L_80333004;
    // 0x80332AEC: sh          $t6, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r14;
L_80332AF0:
    // 0x80332AF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AF8: jal         0x8001B62C
    // 0x80332AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80332AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80332B00: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80332B04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332B08: nop

    // 0x80332B0C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80332B10: nop

    // 0x80332B14: bc1f        L_80332D8C
    if (!c1cs) {
        // 0x80332B18: nop
    
            goto L_80332D8C;
    }
    // 0x80332B18: nop

    // 0x80332B1C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B20: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332B24: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80332B28: lwc1        $f17, -0x52D0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X52D0);
    // 0x80332B2C: lwc1        $f16, -0x52CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X52CC);
    // 0x80332B30: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80332B34: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80332B38: jal         0x80034970
    // 0x80332B3C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80332B3C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x80332B40: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80332B44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332B48: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B4C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332B50: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80332B54: nop

    // 0x80332B58: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332B5C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80332B60: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B64: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80332B68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332B6C: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332B70: nop

    // 0x80332B74: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332B78: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80332B7C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332B80: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332B84: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332B88: lwc1        $f11, -0x52C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X52C8);
    // 0x80332B8C: lwc1        $f10, -0x52C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X52C4);
    // 0x80332B90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80332B94: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80332B98: jal         0x80036570
    // 0x80332B9C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80332B9C: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_4:
    // 0x80332BA0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80332BA4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332BA8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332BAC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80332BB0: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332BB4: nop

    // 0x80332BB8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80332BBC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80332BC0: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332BC4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332BC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80332BCC: lwc1        $f16, 0x1C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332BD0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332BD4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80332BD8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80332BDC: addiu       $a1, $a1, -0x5514
    ctx->r5 = ADD32(ctx->r5, -0X5514);
    // 0x80332BE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332BE4: jal         0x80027464
    // 0x80332BE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80332BE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80332BEC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332BF0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80332BF4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80332BF8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332BFC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332C00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332C04: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332C08: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80332C0C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332C10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C14: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332C18: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80332C1C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80332C20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C24: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332C28: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332C2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C30: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332C34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C38: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332C3C: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80332C40: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C44: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332C48: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332C4C: lwc1        $f7, -0x52C0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X52C0);
    // 0x80332C50: lwc1        $f6, -0x52BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X52BC);
    // 0x80332C54: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80332C58: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80332C5C: jal         0x80034970
    // 0x80332C60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x80332C60: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_6:
    // 0x80332C64: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80332C68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332C6C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C70: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80332C74: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80332C78: nop

    // 0x80332C7C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332C80: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80332C84: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332C88: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80332C8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332C90: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80332C94: nop

    // 0x80332C98: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332C9C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80332CA0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332CA4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332CA8: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332CAC: lwc1        $f5, -0x52B8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X52B8);
    // 0x80332CB0: lwc1        $f4, -0x52B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X52B4);
    // 0x80332CB4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80332CB8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80332CBC: jal         0x80036570
    // 0x80332CC0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_7;
    // 0x80332CC0: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_7:
    // 0x80332CC4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80332CC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332CCC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332CD0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80332CD4: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80332CD8: nop

    // 0x80332CDC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80332CE0: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80332CE4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332CE8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332CEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332CF0: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332CF4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332CF8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80332CFC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80332D00: addiu       $a1, $a1, -0x5514
    ctx->r5 = ADD32(ctx->r5, -0X5514);
    // 0x80332D04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332D08: jal         0x80027464
    // 0x80332D0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80332D0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80332D10: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332D14: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80332D18: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80332D1C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332D20: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332D24: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332D28: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332D2C: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80332D30: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332D34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D38: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332D3C: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80332D40: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80332D44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D48: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332D4C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332D50: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332D54: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332D58: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332D5C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332D60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80332D64: sh          $t7, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r15;
    // 0x80332D68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D74: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x80332D78: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80332D7C: jal         0x800175F0
    // 0x80332D80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x80332D80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80332D84: b           L_80333004
    // 0x80332D88: nop

        goto L_80333004;
    // 0x80332D88: nop

L_80332D8C:
    // 0x80332D8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332D90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332D94: jal         0x8001B62C
    // 0x80332D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_10;
    // 0x80332D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80332D9C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80332DA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332DA4: nop

    // 0x80332DA8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80332DAC: nop

    // 0x80332DB0: bc1f        L_80333004
    if (!c1cs) {
        // 0x80332DB4: nop
    
            goto L_80333004;
    }
    // 0x80332DB4: nop

    // 0x80332DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80332DC4: jal         0x80029EF8
    // 0x80332DC8: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    func_80029EF8(rdram, ctx);
        goto after_11;
    // 0x80332DC8: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_11:
    // 0x80332DCC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332DD0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332DD4: lwc1        $f14, -0x52B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X52B0);
    // 0x80332DD8: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332DDC: jal         0x80015538
    // 0x80332DE0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x80332DE0: nop

    after_12:
    // 0x80332DE4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80332DE8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332DEC: lwc1        $f12, -0x52AC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X52AC);
    // 0x80332DF0: jal         0x800366E0
    // 0x80332DF4: nop

    sqrtf_recomp(rdram, ctx);
        goto after_13;
    // 0x80332DF4: nop

    after_13:
    // 0x80332DF8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332DFC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332E00: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332E04: lwc1        $f19, -0x52A8($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X52A8);
    // 0x80332E08: lwc1        $f18, -0x52A4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X52A4);
    // 0x80332E0C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80332E10: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x80332E14: jal         0x80034970
    // 0x80332E18: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_14;
    // 0x80332E18: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_14:
    // 0x80332E1C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332E20: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E24: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80332E28: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80332E2C: nop

    // 0x80332E30: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332E34: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x80332E38: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E3C: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x80332E40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332E44: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80332E48: nop

    // 0x80332E4C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332E50: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80332E54: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332E58: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332E5C: lwc1        $f17, -0x52A0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X52A0);
    // 0x80332E60: lwc1        $f16, -0x529C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X529C);
    // 0x80332E64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80332E68: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80332E6C: jal         0x80036570
    // 0x80332E70: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_15;
    // 0x80332E70: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_15:
    // 0x80332E74: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332E78: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332E7C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80332E80: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80332E84: nop

    // 0x80332E88: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80332E8C: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80332E90: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332E94: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332E98: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332E9C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80332EA0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80332EA4: addiu       $a1, $a1, -0x5538
    ctx->r5 = ADD32(ctx->r5, -0X5538);
    // 0x80332EA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332EAC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332EB0: jal         0x80027464
    // 0x80332EB4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x80332EB4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x80332EB8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332EBC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80332EC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332EC4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332EC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332ECC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332ED0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332ED4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332ED8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332EDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332EE0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332EE4: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80332EE8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332EEC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332EF0: lwc1        $f14, -0x5298($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5298);
    // 0x80332EF4: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332EF8: jal         0x80015538
    // 0x80332EFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x80332EFC: nop

    after_17:
    // 0x80332F00: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80332F04: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332F08: lwc1        $f12, -0x5294($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5294);
    // 0x80332F0C: jal         0x800366E0
    // 0x80332F10: nop

    sqrtf_recomp(rdram, ctx);
        goto after_18;
    // 0x80332F10: nop

    after_18:
    // 0x80332F14: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80332F18: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332F1C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332F20: lwc1        $f9, -0x5290($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5290);
    // 0x80332F24: lwc1        $f8, -0x528C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X528C);
    // 0x80332F28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332F2C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80332F30: jal         0x80034970
    // 0x80332F34: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_19;
    // 0x80332F34: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_19:
    // 0x80332F38: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F3C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F40: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80332F44: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80332F48: nop

    // 0x80332F4C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80332F50: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80332F54: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F58: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x80332F5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332F60: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80332F64: nop

    // 0x80332F68: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80332F6C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80332F70: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332F74: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332F78: lwc1        $f7, -0x5288($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5288);
    // 0x80332F7C: lwc1        $f6, -0x5284($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5284);
    // 0x80332F80: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80332F84: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80332F88: jal         0x80036570
    // 0x80332F8C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_20;
    // 0x80332F8C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_20:
    // 0x80332F90: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80332F94: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332F98: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80332F9C: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332FA0: nop

    // 0x80332FA4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80332FA8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80332FAC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80332FB0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332FB4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332FB8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80332FBC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80332FC0: addiu       $a1, $a1, -0x552C
    ctx->r5 = ADD32(ctx->r5, -0X552C);
    // 0x80332FC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332FC8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332FCC: jal         0x80027464
    // 0x80332FD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_21;
    // 0x80332FD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_21:
    // 0x80332FD4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80332FD8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80332FDC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80332FE0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80332FE4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80332FE8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332FEC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80332FF0: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80332FF4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332FF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FFC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333000: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
L_80333004:
    // 0x80333004: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80333008: nop

    // 0x8033300C: lh          $t6, 0xA8($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XA8);
    // 0x80333010: nop

    // 0x80333014: bne         $t6, $zero, L_80333040
    if (ctx->r14 != 0) {
        // 0x80333018: nop
    
            goto L_80333040;
    }
    // 0x80333018: nop

    // 0x8033301C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333024: jal         0x8002A8B4
    // 0x80333028: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_22;
    // 0x80333028: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_22:
    // 0x8033302C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80333030: nop

    // 0x80333034: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80333038: b           L_80333070
    // 0x8033303C: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
        goto L_80333070;
    // 0x8033303C: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
L_80333040:
    // 0x80333040: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80333044: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333048: lh          $t7, 0xA8($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA8);
    // 0x8033304C: nop

    // 0x80333050: bne         $t7, $at, L_80333070
    if (ctx->r15 != ctx->r1) {
        // 0x80333054: nop
    
            goto L_80333070;
    }
    // 0x80333054: nop

    // 0x80333058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033305C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333060: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80333064: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80333068: jal         0x8002A0D0
    // 0x8033306C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_23;
    // 0x8033306C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_23:
L_80333070:
    // 0x80333070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333078: jal         0x8001B4AC
    // 0x8033307C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_24;
    // 0x8033307C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x80333080: beq         $v0, $zero, L_803330AC
    if (ctx->r2 == 0) {
        // 0x80333084: nop
    
            goto L_803330AC;
    }
    // 0x80333084: nop

    // 0x80333088: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033308C: nop

    // 0x80333090: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x80333094: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80333098: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8033309C: sh          $t8, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r24;
    // 0x803330A0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803330A4: nop

    // 0x803330A8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_803330AC:
    // 0x803330AC: b           L_803330B4
    // 0x803330B0: nop

        goto L_803330B4;
    // 0x803330B0: nop

L_803330B4:
    // 0x803330B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803330B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x803330BC: jr          $ra
    // 0x803330C0: nop

    return;
    // 0x803330C0: nop

;}
RECOMP_FUNC void func_80334EEC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
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

    // 0x80334F30: bne         $t1, $zero, L_80334FF4
    if (ctx->r9 != 0) {
        // 0x80334F34: nop
    
            goto L_80334FF4;
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
    // 0x80334F6C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80334F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334F78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334F80: jal         0x8001C0EC
    // 0x80334F84: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334F84: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80334F88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F90: jal         0x8001BBDC
    // 0x80334F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80334F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334F98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334FA4: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80334FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334FAC: jal         0x8001ABF4
    // 0x80334FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80334FB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FB8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334FBC: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80334FC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FC4: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80334FC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334FCC: jal         0x8001ABF4
    // 0x80334FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80334FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80334FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334FD8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334FDC: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80334FE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334FE4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80334FE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334FEC: jal         0x8001ABF4
    // 0x80334FF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80334FF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80334FF4:
    // 0x80334FF4: jal         0x80334D5C
    // 0x80334FF8: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80334FF8: nop

    after_5:
    // 0x80334FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335004: jal         0x8001B4AC
    // 0x80335008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80335008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033500C: beq         $v0, $zero, L_8033502C
    if (ctx->r2 == 0) {
        // 0x80335010: nop
    
            goto L_8033502C;
    }
    // 0x80335010: nop

    // 0x80335014: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335018: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033501C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335020: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335024: nop

    // 0x80335028: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033502C:
    // 0x8033502C: b           L_80335034
    // 0x80335030: nop

        goto L_80335034;
    // 0x80335030: nop

L_80335034:
    // 0x80335034: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335038: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033503C: jr          $ra
    // 0x80335040: nop

    return;
    // 0x80335040: nop

;}
RECOMP_FUNC void func_803319F8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803319F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803319FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331A2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331A30: nop

    // 0x80331A34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331A38: nop

    // 0x80331A3C: bne         $t1, $zero, L_80331B24
    if (ctx->r9 != 0) {
        // 0x80331A40: nop
    
            goto L_80331B24;
    }
    // 0x80331A40: nop

    // 0x80331A44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331A48: nop

    // 0x80331A4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331A50: nop

    // 0x80331A54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331A58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331A5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A60: nop

    // 0x80331A64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80331A68: nop

    // 0x80331A6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331A70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331A78: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80331A7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331A8C: jal         0x8001C0EC
    // 0x80331A90: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331A90: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80331A94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331A98: nop

    // 0x80331A9C: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x80331AA0: nop

    // 0x80331AA4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80331AA8: bne         $at, $zero, L_80331AC0
    if (ctx->r1 != 0) {
        // 0x80331AAC: nop
    
            goto L_80331AC0;
    }
    // 0x80331AAC: nop

    // 0x80331AB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331AB4: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80331AB8: b           L_80331ACC
    // 0x80331ABC: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
        goto L_80331ACC;
    // 0x80331ABC: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_80331AC0:
    // 0x80331AC0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331AC4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80331AC8: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_80331ACC:
    // 0x80331ACC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331AD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331AD4: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x80331AD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80331ADC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331AE0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331AE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331AE8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331AEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AF0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331AF4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80331AF8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331AFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331B00: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80331B04: nop

    // 0x80331B08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331B0C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331B10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331B14: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331B18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331B1C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331B20: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331B24:
    // 0x80331B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B2C: jal         0x8002A8B4
    // 0x80331B30: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331B30: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331B34: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331B38: nop

    // 0x80331B3C: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80331B40: nop

    // 0x80331B44: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x80331B48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B50: jal         0x8001B62C
    // 0x80331B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80331B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331B58: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80331B5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331B60: nop

    // 0x80331B64: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80331B68: nop

    // 0x80331B6C: bc1f        L_80331B88
    if (!c1cs) {
        // 0x80331B70: nop
    
            goto L_80331B88;
    }
    // 0x80331B70: nop

    // 0x80331B74: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331B78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331B7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331B80: b           L_80331BC4
    // 0x80331B84: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
        goto L_80331BC4;
    // 0x80331B84: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
L_80331B88:
    // 0x80331B88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B90: jal         0x8001B62C
    // 0x80331B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80331B94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80331B98: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331B9C: nop

    // 0x80331BA0: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80331BA4: nop

    // 0x80331BA8: bc1f        L_80331BC4
    if (!c1cs) {
        // 0x80331BAC: nop
    
            goto L_80331BC4;
    }
    // 0x80331BAC: nop

    // 0x80331BB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80331BB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331BB8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331BBC: nop

    // 0x80331BC0: swc1        $f16, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f16.u32l;
L_80331BC4:
    // 0x80331BC4: jal         0x8033065C
    // 0x80331BC8: nop

    func_8033065C_unk_bin_25(rdram, ctx);
        goto after_4;
    // 0x80331BC8: nop

    after_4:
    // 0x80331BCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331BD4: jal         0x8001B62C
    // 0x80331BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x80331BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80331BDC: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80331BE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331BE4: nop

    // 0x80331BE8: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80331BEC: nop

    // 0x80331BF0: bc1f        L_80331C14
    if (!c1cs) {
        // 0x80331BF4: nop
    
            goto L_80331C14;
    }
    // 0x80331BF4: nop

    // 0x80331BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331C04: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x80331C08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331C0C: jal         0x800175F0
    // 0x80331C10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x80331C10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_80331C14:
    // 0x80331C14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C1C: jal         0x8001B4AC
    // 0x80331C20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80331C20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80331C24: beq         $v0, $zero, L_80331C98
    if (ctx->r2 == 0) {
        // 0x80331C28: nop
    
            goto L_80331C98;
    }
    // 0x80331C28: nop

    // 0x80331C2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331C30: nop

    // 0x80331C34: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80331C38: nop

    // 0x80331C3C: bne         $t5, $zero, L_80331C6C
    if (ctx->r13 != 0) {
        // 0x80331C40: nop
    
            goto L_80331C6C;
    }
    // 0x80331C40: nop

    // 0x80331C44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331C48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331C4C: nop

    // 0x80331C50: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80331C54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331C58: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80331C5C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80331C60: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331C64: b           L_80331C84
    // 0x80331C68: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80331C84;
    // 0x80331C68: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80331C6C:
    // 0x80331C6C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331C70: nop

    // 0x80331C74: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80331C78: nop

    // 0x80331C7C: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x80331C80: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_80331C84:
    // 0x80331C84: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80331C88: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80331C8C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331C90: jal         0x80330B3C
    // 0x80331C94: nop

    func_80330B3C_unk_bin_25(rdram, ctx);
        goto after_8;
    // 0x80331C94: nop

    after_8:
L_80331C98:
    // 0x80331C98: b           L_80331CA0
    // 0x80331C9C: nop

        goto L_80331CA0;
    // 0x80331C9C: nop

L_80331CA0:
    // 0x80331CA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331CA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331CA8: jr          $ra
    // 0x80331CAC: nop

    return;
    // 0x80331CAC: nop

;}
RECOMP_FUNC void func_8033A00C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A00C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A014: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A018: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A01C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A020: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A024: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A028: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A02C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A030: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A034: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A038: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A03C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A040: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A044: nop

    // 0x8033A048: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A04C: nop

    // 0x8033A050: bne         $t1, $zero, L_8033A0A8
    if (ctx->r9 != 0) {
        // 0x8033A054: nop
    
            goto L_8033A0A8;
    }
    // 0x8033A054: nop

    // 0x8033A058: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A05C: nop

    // 0x8033A060: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A064: nop

    // 0x8033A068: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A06C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A070: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A074: nop

    // 0x8033A078: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A07C: nop

    // 0x8033A080: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A084: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A088: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A08C: addiu       $t7, $t7, -0x3E30
    ctx->r15 = ADD32(ctx->r15, -0X3E30);
    // 0x8033A090: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A094: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A098: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A09C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A0A0: jal         0x8001C0EC
    // 0x8033A0A4: addiu       $a3, $zero, 0x181
    ctx->r7 = ADD32(0, 0X181);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A0A4: addiu       $a3, $zero, 0x181
    ctx->r7 = ADD32(0, 0X181);
    after_0:
L_8033A0A8:
    // 0x8033A0A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A0AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A0B0: jal         0x8001B4AC
    // 0x8033A0B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A0B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033A0B8: beq         $v0, $zero, L_8033A0D8
    if (ctx->r2 == 0) {
        // 0x8033A0BC: nop
    
            goto L_8033A0D8;
    }
    // 0x8033A0BC: nop

    // 0x8033A0C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A0C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A0C8: jal         0x8002B114
    // 0x8033A0CC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033A0CC: nop

    after_2:
    // 0x8033A0D0: b           L_8033A0E0
    // 0x8033A0D4: nop

        goto L_8033A0E0;
    // 0x8033A0D4: nop

L_8033A0D8:
    // 0x8033A0D8: b           L_8033A0E0
    // 0x8033A0DC: nop

        goto L_8033A0E0;
    // 0x8033A0DC: nop

L_8033A0E0:
    // 0x8033A0E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A0E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A0E8: jr          $ra
    // 0x8033A0EC: nop

    return;
    // 0x8033A0EC: nop

;}
RECOMP_FUNC void func_80337E30_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337E30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337E34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337E38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337E3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337E40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337E44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337E48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337E4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337E50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337E54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337E58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337E5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337E60: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337E64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337E68: nop

    // 0x80337E6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337E70: nop

    // 0x80337E74: bne         $t1, $zero, L_80337F08
    if (ctx->r9 != 0) {
        // 0x80337E78: nop
    
            goto L_80337F08;
    }
    // 0x80337E78: nop

    // 0x80337E7C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337E80: nop

    // 0x80337E84: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337E88: nop

    // 0x80337E8C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337E90: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337E94: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337E98: nop

    // 0x80337E9C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337EA0: nop

    // 0x80337EA4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337EAC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337EB0: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x80337EB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EB8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80337EC4: jal         0x8001C0EC
    // 0x80337EC8: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337EC8: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
    // 0x80337ECC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337ED0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337ED4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337ED8: addiu       $a3, $a3, -0x4204
    ctx->r7 = ADD32(ctx->r7, -0X4204);
    // 0x80337EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337EE0: jal         0x8001ABF4
    // 0x80337EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80337EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80337EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337EEC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80337EF0: addiu       $a3, $a3, -0x4204
    ctx->r7 = ADD32(ctx->r7, -0X4204);
    // 0x80337EF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EF8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80337EFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337F00: jal         0x8001ABF4
    // 0x80337F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80337F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80337F08:
    // 0x80337F08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337F0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337F10: jal         0x8001B4AC
    // 0x80337F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80337F14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80337F18: beq         $v0, $zero, L_80337F38
    if (ctx->r2 == 0) {
        // 0x80337F1C: nop
    
            goto L_80337F38;
    }
    // 0x80337F1C: nop

    // 0x80337F20: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80337F24: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80337F28: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337F2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337F30: nop

    // 0x80337F34: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337F38:
    // 0x80337F38: b           L_80337F40
    // 0x80337F3C: nop

        goto L_80337F40;
    // 0x80337F3C: nop

L_80337F40:
    // 0x80337F40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337F48: jr          $ra
    // 0x80337F4C: nop

    return;
    // 0x80337F4C: nop

;}
RECOMP_FUNC void func_80335ACC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335ACC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335AD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335AD8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335ADC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335AE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335AE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335AE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335AEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335AF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335AF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335AF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335AFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335B00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335B04: nop

    // 0x80335B08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335B0C: nop

    // 0x80335B10: bne         $t1, $zero, L_80335B78
    if (ctx->r9 != 0) {
        // 0x80335B14: nop
    
            goto L_80335B78;
    }
    // 0x80335B14: nop

    // 0x80335B18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335B1C: nop

    // 0x80335B20: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335B24: nop

    // 0x80335B28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335B2C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335B30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335B34: nop

    // 0x80335B38: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335B3C: nop

    // 0x80335B40: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335B44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B48: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335B4C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335B50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B54: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335B58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335B5C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80335B60: jal         0x8001C0EC
    // 0x80335B64: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335B64: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335B68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B70: jal         0x8001BBDC
    // 0x80335B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335B78:
    // 0x80335B78: jal         0x80334D5C
    // 0x80335B7C: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335B7C: nop

    after_2:
    // 0x80335B80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B88: jal         0x8001B4AC
    // 0x80335B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335B8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335B90: beq         $v0, $zero, L_80335BB0
    if (ctx->r2 == 0) {
        // 0x80335B94: nop
    
            goto L_80335BB0;
    }
    // 0x80335B94: nop

    // 0x80335B98: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335B9C: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x80335BA0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335BA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335BA8: nop

    // 0x80335BAC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335BB0:
    // 0x80335BB0: b           L_80335BB8
    // 0x80335BB4: nop

        goto L_80335BB8;
    // 0x80335BB4: nop

L_80335BB8:
    // 0x80335BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335BBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335BC0: jr          $ra
    // 0x80335BC4: nop

    return;
    // 0x80335BC4: nop

;}
RECOMP_FUNC void func_80338D34_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338D34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338D38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338D3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338D40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338D44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338D48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338D4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338D50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338D54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338D58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338D5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338D60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338D64: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338D68: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338D6C: nop

    // 0x80338D70: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338D74: nop

    // 0x80338D78: bne         $t1, $zero, L_80338DD0
    if (ctx->r9 != 0) {
        // 0x80338D7C: nop
    
            goto L_80338DD0;
    }
    // 0x80338D7C: nop

    // 0x80338D80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338D84: nop

    // 0x80338D88: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338D8C: nop

    // 0x80338D90: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338D94: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338D98: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338D9C: nop

    // 0x80338DA0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338DA4: nop

    // 0x80338DA8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338DAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338DB0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338DB4: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338DB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338DBC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338DC4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80338DC8: jal         0x8001C0EC
    // 0x80338DCC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338DCC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_80338DD0:
    // 0x80338DD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338DD4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338DD8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338DDC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80338DE0: jal         0x80015538
    // 0x80338DE4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338DE4: nop

    after_1:
    // 0x80338DE8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338DEC: nop

    // 0x80338DF0: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80338DF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338DF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338DFC: jal         0x8001B4AC
    // 0x80338E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80338E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80338E04: beq         $v0, $zero, L_80338E24
    if (ctx->r2 == 0) {
        // 0x80338E08: nop
    
            goto L_80338E24;
    }
    // 0x80338E08: nop

    // 0x80338E0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338E10: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80338E14: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80338E18: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338E1C: nop

    // 0x80338E20: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338E24:
    // 0x80338E24: b           L_80338E2C
    // 0x80338E28: nop

        goto L_80338E2C;
    // 0x80338E28: nop

L_80338E2C:
    // 0x80338E2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338E34: jr          $ra
    // 0x80338E38: nop

    return;
    // 0x80338E38: nop

;}
RECOMP_FUNC void func_8033185C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033185C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331860: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331864: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331868: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033186C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331870: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331874: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331878: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033187C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331880: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331888: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033188C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331890: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331894: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331898: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033189C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x803318A0: nop

    // 0x803318A4: bne         $t0, $zero, L_80331984
    if (ctx->r8 != 0) {
        // 0x803318A8: nop
    
            goto L_80331984;
    }
    // 0x803318A8: nop

    // 0x803318AC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803318B0: nop

    // 0x803318B4: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x803318B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803318BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803318C0: jal         0x80069E60
    // 0x803318C4: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x803318C4: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x803318C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803318CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318D0: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x803318D4: nop

    // 0x803318D8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803318DC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803318E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803318E4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803318E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803318EC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803318F0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803318F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803318F8: nop

    // 0x803318FC: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x80331900: nop

    // 0x80331904: beq         $t6, $zero, L_8033192C
    if (ctx->r14 == 0) {
        // 0x80331908: nop
    
            goto L_8033192C;
    }
    // 0x80331908: nop

    // 0x8033190C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331910: nop

    // 0x80331914: lh          $a0, 0xC0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC0);
    // 0x80331918: jal         0x8002B114
    // 0x8033191C: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x8033191C: nop

    after_1:
    // 0x80331920: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331924: nop

    // 0x80331928: sh          $zero, 0xC0($t8)
    MEM_H(0XC0, ctx->r24) = 0;
L_8033192C:
    // 0x8033192C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331930: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80331934: nop

    // 0x80331938: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x8033193C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80331940: nop

    // 0x80331944: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80331948: nop

    // 0x8033194C: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x80331950: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80331954: nop

    // 0x80331958: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x8033195C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331960: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80331964: nop

    // 0x80331968: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
    // 0x8033196C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80331970: addiu       $t3, $zero, 0x13
    ctx->r11 = ADD32(0, 0X13);
    // 0x80331974: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331978: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033197C: b           L_803319DC
    // 0x80331980: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_803319DC;
    // 0x80331980: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331984:
    // 0x80331984: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331988: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033198C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331990: bne         $t6, $at, L_803319DC
    if (ctx->r14 != ctx->r1) {
        // 0x80331994: nop
    
            goto L_803319DC;
    }
    // 0x80331994: nop

    // 0x80331998: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033199C: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x803319A0: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x803319A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803319A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319AC: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803319B0: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x803319B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803319B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803319BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803319C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803319C4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803319C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803319CC: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x803319D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803319D4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803319D8: sh          $t3, 0xB4($t4)
    MEM_H(0XB4, ctx->r12) = ctx->r11;
L_803319DC:
    // 0x803319DC: b           L_803319E4
    // 0x803319E0: nop

        goto L_803319E4;
    // 0x803319E0: nop

L_803319E4:
    // 0x803319E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803319E8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x803319EC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x803319F0: jr          $ra
    // 0x803319F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803319F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803366F0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803366F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803366F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803366F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803366FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336700: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336704: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033670C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336710: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336714: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336718: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033671C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336720: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336724: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336728: nop

    // 0x8033672C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336730: nop

    // 0x80336734: bne         $t1, $zero, L_803367F8
    if (ctx->r9 != 0) {
        // 0x80336738: nop
    
            goto L_803367F8;
    }
    // 0x80336738: nop

    // 0x8033673C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336740: nop

    // 0x80336744: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336748: nop

    // 0x8033674C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336750: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336754: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336758: nop

    // 0x8033675C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336760: nop

    // 0x80336764: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336768: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033676C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336770: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336774: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336778: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033677C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336780: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80336784: jal         0x8001C0EC
    // 0x80336788: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336788: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x8033678C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336790: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336794: jal         0x8001BBDC
    // 0x80336798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033679C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803367A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803367A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803367A8: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803367AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803367B0: jal         0x8001ABF4
    // 0x803367B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803367B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803367B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803367BC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803367C0: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803367C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803367C8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803367CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803367D0: jal         0x8001ABF4
    // 0x803367D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803367D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803367D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803367DC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803367E0: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803367E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803367E8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803367EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803367F0: jal         0x8001ABF4
    // 0x803367F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803367F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803367F8:
    // 0x803367F8: jal         0x80334D5C
    // 0x803367FC: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803367FC: nop

    after_5:
    // 0x80336800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336804: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336808: jal         0x8001B4AC
    // 0x8033680C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x8033680C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80336810: beq         $v0, $zero, L_80336830
    if (ctx->r2 == 0) {
        // 0x80336814: nop
    
            goto L_80336830;
    }
    // 0x80336814: nop

    // 0x80336818: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033681C: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x80336820: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80336824: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336828: nop

    // 0x8033682C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80336830:
    // 0x80336830: b           L_80336838
    // 0x80336834: nop

        goto L_80336838;
    // 0x80336834: nop

L_80336838:
    // 0x80336838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033683C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336840: jr          $ra
    // 0x80336844: nop

    return;
    // 0x80336844: nop

;}
RECOMP_FUNC void func_80338218_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033821C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338220: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338224: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338228: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033822C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338230: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338234: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338238: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033823C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338240: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338244: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338248: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033824C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338250: nop

    // 0x80338254: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338258: nop

    // 0x8033825C: bne         $t1, $zero, L_803382B4
    if (ctx->r9 != 0) {
        // 0x80338260: nop
    
            goto L_803382B4;
    }
    // 0x80338260: nop

    // 0x80338264: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338268: nop

    // 0x8033826C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338270: nop

    // 0x80338274: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338278: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033827C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338280: nop

    // 0x80338284: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338288: nop

    // 0x8033828C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338290: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338294: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338298: addiu       $t7, $t7, -0x4288
    ctx->r15 = ADD32(ctx->r15, -0X4288);
    // 0x8033829C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803382A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803382A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803382A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x803382AC: jal         0x8001C0EC
    // 0x803382B0: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803382B0: addiu       $a3, $zero, 0x178
    ctx->r7 = ADD32(0, 0X178);
    after_0:
L_803382B4:
    // 0x803382B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803382B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803382BC: jal         0x8001B4AC
    // 0x803382C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803382C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803382C4: beq         $v0, $zero, L_803382E4
    if (ctx->r2 == 0) {
        // 0x803382C8: nop
    
            goto L_803382E4;
    }
    // 0x803382C8: nop

    // 0x803382CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803382D0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x803382D4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803382D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803382DC: nop

    // 0x803382E0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803382E4:
    // 0x803382E4: b           L_803382EC
    // 0x803382E8: nop

        goto L_803382EC;
    // 0x803382E8: nop

L_803382EC:
    // 0x803382EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803382F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803382F4: jr          $ra
    // 0x803382F8: nop

    return;
    // 0x803382F8: nop

;}
RECOMP_FUNC void func_803338D4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803338D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803338D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803338DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803338E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803338E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803338E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803338EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803338F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803338F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803338FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333900: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333904: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333908: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033390C: nop

    // 0x80333910: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333914: nop

    // 0x80333918: bne         $t1, $zero, L_803339F0
    if (ctx->r9 != 0) {
        // 0x8033391C: nop
    
            goto L_803339F0;
    }
    // 0x8033391C: nop

    // 0x80333920: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333924: nop

    // 0x80333928: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033392C: nop

    // 0x80333930: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333934: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333938: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033393C: nop

    // 0x80333940: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333944: nop

    // 0x80333948: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033394C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333950: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333954: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80333958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033395C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333964: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80333968: jal         0x8001C0EC
    // 0x8033396C: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033396C: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80333970: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333974: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80333978: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x8033397C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333980: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333984: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80333988: addiu       $t0, $zero, 0x1B
    ctx->r8 = ADD32(0, 0X1B);
    // 0x8033398C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80333990: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80333994: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333998: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033399C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803339A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803339A4: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x803339A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803339AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339B0: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x803339B4: nop

    // 0x803339B8: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803339BC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803339C0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803339C4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803339C8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803339CC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803339D0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803339D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803339D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803339DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803339E0: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x803339E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803339E8: jal         0x800175F0
    // 0x803339EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803339EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803339F0:
    // 0x803339F0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803339F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803339F8: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x803339FC: nop

    // 0x80333A00: bne         $t8, $at, L_80333A14
    if (ctx->r24 != ctx->r1) {
        // 0x80333A04: nop
    
            goto L_80333A14;
    }
    // 0x80333A04: nop

    // 0x80333A08: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A0C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80333A10: sh          $t9, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r25;
L_80333A14:
    // 0x80333A14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80333A18: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A24: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80333A28: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80333A2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333A30: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80333A34: jal         0x800295C0
    // 0x80333A38: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x80333A38: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80333A3C: beq         $v0, $zero, L_80333A54
    if (ctx->r2 == 0) {
        // 0x80333A40: nop
    
            goto L_80333A54;
    }
    // 0x80333A40: nop

    // 0x80333A44: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333A48: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A4C: b           L_80333A64
    // 0x80333A50: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
        goto L_80333A64;
    // 0x80333A50: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
L_80333A54:
    // 0x80333A54: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80333A58: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A5C: nop

    // 0x80333A60: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
L_80333A64:
    // 0x80333A64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A68: nop

    // 0x80333A6C: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80333A70: nop

    // 0x80333A74: beq         $t2, $zero, L_80333A94
    if (ctx->r10 == 0) {
        // 0x80333A78: nop
    
            goto L_80333A94;
    }
    // 0x80333A78: nop

    // 0x80333A7C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333A80: nop

    // 0x80333A84: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80333A88: nop

    // 0x80333A8C: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x80333A90: sh          $t7, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r15;
L_80333A94:
    // 0x80333A94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A9C: jal         0x8001B44C
    // 0x80333AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80333AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333AA4: beq         $v0, $zero, L_80333ABC
    if (ctx->r2 == 0) {
        // 0x80333AA8: nop
    
            goto L_80333ABC;
    }
    // 0x80333AA8: nop

    // 0x80333AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333AB4: jal         0x8001BBDC
    // 0x80333AB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80333AB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_80333ABC:
    // 0x80333ABC: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80333AC0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333AC4: jal         0x8033079C
    // 0x80333AC8: nop

    func_8033079C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80333AC8: nop

    after_5:
    // 0x80333ACC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333AD0: beq         $v0, $at, L_80333AF4
    if (ctx->r2 == ctx->r1) {
        // 0x80333AD4: nop
    
            goto L_80333AF4;
    }
    // 0x80333AD4: nop

    // 0x80333AD8: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80333ADC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333AE0: jal         0x8033096C
    // 0x80333AE4: nop

    func_8033096C_unk_bin_25(rdram, ctx);
        goto after_6;
    // 0x80333AE4: nop

    after_6:
    // 0x80333AE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333AEC: bne         $v0, $at, L_80333BBC
    if (ctx->r2 != ctx->r1) {
        // 0x80333AF0: nop
    
            goto L_80333BBC;
    }
    // 0x80333AF0: nop

L_80333AF4:
    // 0x80333AF4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333AF8: nop

    // 0x80333AFC: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80333B00: nop

    // 0x80333B04: bne         $t9, $zero, L_80333BB4
    if (ctx->r25 != 0) {
        // 0x80333B08: nop
    
            goto L_80333BB4;
    }
    // 0x80333B08: nop

    // 0x80333B0C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B10: nop

    // 0x80333B14: lh          $t3, 0x108($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X108);
    // 0x80333B18: nop

    // 0x80333B1C: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x80333B20: bne         $at, $zero, L_80333B9C
    if (ctx->r1 != 0) {
        // 0x80333B24: nop
    
            goto L_80333B9C;
    }
    // 0x80333B24: nop

    // 0x80333B28: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333B30: lh          $t4, 0xB4($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XB4);
    // 0x80333B34: nop

    // 0x80333B38: bne         $t4, $at, L_80333B64
    if (ctx->r12 != ctx->r1) {
        // 0x80333B3C: nop
    
            goto L_80333B64;
    }
    // 0x80333B3C: nop

    // 0x80333B40: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B44: nop

    // 0x80333B48: sh          $zero, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = 0;
    // 0x80333B4C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B50: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80333B54: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80333B58: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B5C: b           L_80333B94
    // 0x80333B60: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80333B94;
    // 0x80333B60: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80333B64:
    // 0x80333B64: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B68: nop

    // 0x80333B6C: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
    // 0x80333B70: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B74: nop

    // 0x80333B78: sh          $zero, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = 0;
    // 0x80333B7C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B80: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x80333B84: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80333B88: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333B8C: nop

    // 0x80333B90: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333B94:
    // 0x80333B94: b           L_80333BB4
    // 0x80333B98: nop

        goto L_80333BB4;
    // 0x80333B98: nop

L_80333B9C:
    // 0x80333B9C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BA0: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x80333BA4: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80333BA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BAC: nop

    // 0x80333BB0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80333BB4:
    // 0x80333BB4: b           L_80333D04
    // 0x80333BB8: nop

        goto L_80333D04;
    // 0x80333BB8: nop

L_80333BBC:
    // 0x80333BBC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BC0: nop

    // 0x80333BC4: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x80333BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BD0: jal         0x8002A2EC
    // 0x80333BD4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x80333BD4: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_7:
    // 0x80333BD8: beq         $v0, $zero, L_80333C04
    if (ctx->r2 == 0) {
        // 0x80333BDC: nop
    
            goto L_80333C04;
    }
    // 0x80333BDC: nop

    // 0x80333BE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80333BE8: sh          $t6, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r14;
    // 0x80333BEC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BF0: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x80333BF4: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x80333BF8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333BFC: b           L_80333D04
    // 0x80333C00: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_80333D04;
    // 0x80333C00: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80333C04:
    // 0x80333C04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333C08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333C0C: jal         0x8002A2EC
    // 0x80333C10: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_8;
    // 0x80333C10: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_8:
    // 0x80333C14: beq         $v0, $zero, L_80333CE0
    if (ctx->r2 == 0) {
        // 0x80333C18: nop
    
            goto L_80333CE0;
    }
    // 0x80333C18: nop

    // 0x80333C1C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C20: nop

    // 0x80333C24: lh          $t4, 0xAC($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XAC);
    // 0x80333C28: nop

    // 0x80333C2C: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x80333C30: beq         $at, $zero, L_80333C4C
    if (ctx->r1 == 0) {
        // 0x80333C34: nop
    
            goto L_80333C4C;
    }
    // 0x80333C34: nop

    // 0x80333C38: lh          $t2, 0x108($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X108);
    // 0x80333C3C: nop

    // 0x80333C40: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80333C44: bne         $at, $zero, L_80333CC0
    if (ctx->r1 != 0) {
        // 0x80333C48: nop
    
            goto L_80333CC0;
    }
    // 0x80333C48: nop

L_80333C4C:
    // 0x80333C4C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333C54: lh          $t7, 0xB4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB4);
    // 0x80333C58: nop

    // 0x80333C5C: bne         $t7, $at, L_80333C88
    if (ctx->r15 != ctx->r1) {
        // 0x80333C60: nop
    
            goto L_80333C88;
    }
    // 0x80333C60: nop

    // 0x80333C64: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C68: nop

    // 0x80333C6C: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
    // 0x80333C70: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C74: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80333C78: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80333C7C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C80: b           L_80333CB8
    // 0x80333C84: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_80333CB8;
    // 0x80333C84: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80333C88:
    // 0x80333C88: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C8C: nop

    // 0x80333C90: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
    // 0x80333C94: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333C98: nop

    // 0x80333C9C: sh          $zero, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = 0;
    // 0x80333CA0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CA4: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x80333CA8: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
    // 0x80333CAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CB0: nop

    // 0x80333CB4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80333CB8:
    // 0x80333CB8: b           L_80333CD8
    // 0x80333CBC: nop

        goto L_80333CD8;
    // 0x80333CBC: nop

L_80333CC0:
    // 0x80333CC0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CC4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80333CC8: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
    // 0x80333CCC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CD0: nop

    // 0x80333CD4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80333CD8:
    // 0x80333CD8: b           L_80333D04
    // 0x80333CDC: nop

        goto L_80333D04;
    // 0x80333CDC: nop

L_80333CE0:
    // 0x80333CE0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CE4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80333CE8: sh          $t9, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r25;
    // 0x80333CEC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CF0: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x80333CF4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333CF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333CFC: nop

    // 0x80333D00: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333D04:
    // 0x80333D04: b           L_80333D0C
    // 0x80333D08: nop

        goto L_80333D0C;
    // 0x80333D08: nop

L_80333D0C:
    // 0x80333D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333D10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333D14: jr          $ra
    // 0x80333D18: nop

    return;
    // 0x80333D18: nop

;}
RECOMP_FUNC void func_80336944_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336944: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033694C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336950: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336954: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336958: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033695C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336964: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336968: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033696C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336970: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336974: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336978: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033697C: nop

    // 0x80336980: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336984: nop

    // 0x80336988: bne         $t1, $zero, L_803369F0
    if (ctx->r9 != 0) {
        // 0x8033698C: nop
    
            goto L_803369F0;
    }
    // 0x8033698C: nop

    // 0x80336990: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336994: nop

    // 0x80336998: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033699C: nop

    // 0x803369A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803369A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803369A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803369AC: nop

    // 0x803369B0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803369B4: nop

    // 0x803369B8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803369BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803369C0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803369C4: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x803369C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803369D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803369D4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x803369D8: jal         0x8001C0EC
    // 0x803369DC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803369DC: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x803369E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803369E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369E8: jal         0x8001BBDC
    // 0x803369EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803369EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803369F0:
    // 0x803369F0: jal         0x80334D5C
    // 0x803369F4: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803369F4: nop

    after_2:
    // 0x803369F8: b           L_80336A00
    // 0x803369FC: nop

        goto L_80336A00;
    // 0x803369FC: nop

L_80336A00:
    // 0x80336A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336A08: jr          $ra
    // 0x80336A0C: nop

    return;
    // 0x80336A0C: nop

;}
RECOMP_FUNC void func_80339CBC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339CBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339CC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339CC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339CC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339CCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339CD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339CD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339CD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339CDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339CE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339CE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339CE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339CEC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339CF0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339CF4: nop

    // 0x80339CF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339CFC: nop

    // 0x80339D00: bne         $t1, $zero, L_80339D5C
    if (ctx->r9 != 0) {
        // 0x80339D04: nop
    
            goto L_80339D5C;
    }
    // 0x80339D04: nop

    // 0x80339D08: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D0C: nop

    // 0x80339D10: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339D14: nop

    // 0x80339D18: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339D1C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339D20: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D24: nop

    // 0x80339D28: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339D2C: nop

    // 0x80339D30: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339D34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339D38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339D3C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339D40: addiu       $a3, $a3, -0x3E50
    ctx->r7 = ADD32(ctx->r7, -0X3E50);
    // 0x80339D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339D48: jal         0x8001ABF4
    // 0x80339D4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80339D4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80339D50: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D54: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x80339D58: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_80339D5C:
    // 0x80339D5C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D60: nop

    // 0x80339D64: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80339D68: nop

    // 0x80339D6C: bne         $t0, $zero, L_80339D8C
    if (ctx->r8 != 0) {
        // 0x80339D70: nop
    
            goto L_80339D8C;
    }
    // 0x80339D70: nop

    // 0x80339D74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339D78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339D7C: jal         0x8002B114
    // 0x80339D80: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80339D80: nop

    after_1:
    // 0x80339D84: b           L_80339DA4
    // 0x80339D88: nop

        goto L_80339DA4;
    // 0x80339D88: nop

L_80339D8C:
    // 0x80339D8C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80339D90: nop

    // 0x80339D94: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80339D98: nop

    // 0x80339D9C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80339DA0: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_80339DA4:
    // 0x80339DA4: b           L_80339DAC
    // 0x80339DA8: nop

        goto L_80339DAC;
    // 0x80339DA8: nop

L_80339DAC:
    // 0x80339DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339DB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80339DB4: jr          $ra
    // 0x80339DB8: nop

    return;
    // 0x80339DB8: nop

;}
RECOMP_FUNC void func_8033977C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033977C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339784: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80339788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033978C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339790: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339794: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033979C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803397A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803397A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803397A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803397AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803397B0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803397B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803397B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803397BC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803397C0: nop

    // 0x803397C4: beq         $s0, $at, L_803397E0
    if (ctx->r16 == ctx->r1) {
        // 0x803397C8: nop
    
            goto L_803397E0;
    }
    // 0x803397C8: nop

    // 0x803397CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803397D0: beq         $s0, $at, L_803397F0
    if (ctx->r16 == ctx->r1) {
        // 0x803397D4: nop
    
            goto L_803397F0;
    }
    // 0x803397D4: nop

    // 0x803397D8: b           L_80339800
    // 0x803397DC: nop

        goto L_80339800;
    // 0x803397DC: nop

L_803397E0:
    // 0x803397E0: jal         0x803393B4
    // 0x803397E4: nop

    func_803393B4_unk_bin_25(rdram, ctx);
        goto after_0;
    // 0x803397E4: nop

    after_0:
    // 0x803397E8: b           L_80339808
    // 0x803397EC: nop

        goto L_80339808;
    // 0x803397EC: nop

L_803397F0:
    // 0x803397F0: jal         0x80339548
    // 0x803397F4: nop

    func_80339548_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x803397F4: nop

    after_1:
    // 0x803397F8: b           L_80339808
    // 0x803397FC: nop

        goto L_80339808;
    // 0x803397FC: nop

L_80339800:
    // 0x80339800: b           L_80339808
    // 0x80339804: nop

        goto L_80339808;
    // 0x80339804: nop

L_80339808:
    // 0x80339808: b           L_80339810
    // 0x8033980C: nop

        goto L_80339810;
    // 0x8033980C: nop

L_80339810:
    // 0x80339810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339814: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80339818: jr          $ra
    // 0x8033981C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033981C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80336C90_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336C90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336C94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336C98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336C9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336CA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336CA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336CA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336CAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336CB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336CB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336CB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336CBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336CC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336CC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336CC8: nop

    // 0x80336CCC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336CD0: nop

    // 0x80336CD4: bne         $t1, $zero, L_80336D9C
    if (ctx->r9 != 0) {
        // 0x80336CD8: nop
    
            goto L_80336D9C;
    }
    // 0x80336CD8: nop

    // 0x80336CDC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336CE0: nop

    // 0x80336CE4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336CE8: nop

    // 0x80336CEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336CF0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336CF4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336CF8: nop

    // 0x80336CFC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336D00: nop

    // 0x80336D04: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336D08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D0C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336D10: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336D14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D20: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80336D24: jal         0x8001C0EC
    // 0x80336D28: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336D28: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336D2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D34: jal         0x8001BBDC
    // 0x80336D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D40: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336D44: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D4C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80336D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336D54: jal         0x8001ABF4
    // 0x80336D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80336D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80336D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D60: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336D64: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336D68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D6C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80336D70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336D74: jal         0x8001ABF4
    // 0x80336D78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80336D78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80336D7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336D80: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336D84: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336D8C: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80336D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80336D94: jal         0x8001ABF4
    // 0x80336D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80336D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80336D9C:
    // 0x80336D9C: jal         0x80334D5C
    // 0x80336DA0: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80336DA0: nop

    after_5:
    // 0x80336DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DAC: jal         0x8001B4AC
    // 0x80336DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80336DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80336DB4: beq         $v0, $zero, L_80336DD4
    if (ctx->r2 == 0) {
        // 0x80336DB8: nop
    
            goto L_80336DD4;
    }
    // 0x80336DB8: nop

    // 0x80336DBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336DC0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80336DC4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80336DC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336DCC: nop

    // 0x80336DD0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80336DD4:
    // 0x80336DD4: b           L_80336DDC
    // 0x80336DD8: nop

        goto L_80336DDC;
    // 0x80336DD8: nop

L_80336DDC:
    // 0x80336DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336DE4: jr          $ra
    // 0x80336DE8: nop

    return;
    // 0x80336DE8: nop

;}
RECOMP_FUNC void func_80335C94_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335C94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335C9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335CA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335CA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335CA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335CAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335CB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335CB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335CB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335CBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335CC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335CC4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335CC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335CCC: nop

    // 0x80335CD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335CD4: nop

    // 0x80335CD8: bne         $t1, $zero, L_80335D9C
    if (ctx->r9 != 0) {
        // 0x80335CDC: nop
    
            goto L_80335D9C;
    }
    // 0x80335CDC: nop

    // 0x80335CE0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335CE4: nop

    // 0x80335CE8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335CEC: nop

    // 0x80335CF0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335CF4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335CF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335CFC: nop

    // 0x80335D00: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335D04: nop

    // 0x80335D08: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335D0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D10: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335D14: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335D18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335D24: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80335D28: jal         0x8001C0EC
    // 0x80335D2C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335D2C: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335D30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D38: jal         0x8001BBDC
    // 0x80335D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335D40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335D4C: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335D54: jal         0x8001ABF4
    // 0x80335D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80335D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80335D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D60: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335D64: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335D68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D6C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80335D70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80335D74: jal         0x8001ABF4
    // 0x80335D78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80335D78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80335D7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D80: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335D84: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80335D88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D8C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80335D90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80335D94: jal         0x8001ABF4
    // 0x80335D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80335D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80335D9C:
    // 0x80335D9C: jal         0x80334D5C
    // 0x80335DA0: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80335DA0: nop

    after_5:
    // 0x80335DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335DAC: jal         0x8001B4AC
    // 0x80335DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80335DB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80335DB4: beq         $v0, $zero, L_80335DD4
    if (ctx->r2 == 0) {
        // 0x80335DB8: nop
    
            goto L_80335DD4;
    }
    // 0x80335DB8: nop

    // 0x80335DBC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335DC0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80335DC4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335DC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335DCC: nop

    // 0x80335DD0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335DD4:
    // 0x80335DD4: b           L_80335DDC
    // 0x80335DD8: nop

        goto L_80335DDC;
    // 0x80335DD8: nop

L_80335DDC:
    // 0x80335DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335DE4: jr          $ra
    // 0x80335DE8: nop

    return;
    // 0x80335DE8: nop

;}
RECOMP_FUNC void func_80336A10_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336A18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336A1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336A20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336A24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336A28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336A44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336A48: nop

    // 0x80336A4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336A50: nop

    // 0x80336A54: bne         $t1, $zero, L_80336B1C
    if (ctx->r9 != 0) {
        // 0x80336A58: nop
    
            goto L_80336B1C;
    }
    // 0x80336A58: nop

    // 0x80336A5C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336A60: nop

    // 0x80336A64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336A68: nop

    // 0x80336A6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336A70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336A74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336A78: nop

    // 0x80336A7C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336A80: nop

    // 0x80336A84: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336A88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336A8C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336A90: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336A94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336A98: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336A9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336AA0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x80336AA4: jal         0x8001C0EC
    // 0x80336AA8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336AA8: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336AAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AB4: jal         0x8001BBDC
    // 0x80336AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336ABC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AC0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336AC4: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336AC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336ACC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80336AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336AD4: jal         0x8001ABF4
    // 0x80336AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80336AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80336ADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336AE4: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336AE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AEC: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80336AF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336AF4: jal         0x8001ABF4
    // 0x80336AF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80336AF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80336AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336B00: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336B04: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336B08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336B0C: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80336B10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80336B14: jal         0x8001ABF4
    // 0x80336B18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80336B18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80336B1C:
    // 0x80336B1C: jal         0x80334D5C
    // 0x80336B20: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x80336B20: nop

    after_5:
    // 0x80336B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336B2C: jal         0x8001B44C
    // 0x80336B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x80336B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80336B34: beq         $v0, $zero, L_80336B4C
    if (ctx->r2 == 0) {
        // 0x80336B38: nop
    
            goto L_80336B4C;
    }
    // 0x80336B38: nop

    // 0x80336B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336B40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336B44: jal         0x8001BBDC
    // 0x80336B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x80336B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_80336B4C:
    // 0x80336B4C: b           L_80336B54
    // 0x80336B50: nop

        goto L_80336B54;
    // 0x80336B50: nop

L_80336B54:
    // 0x80336B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336B58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336B5C: jr          $ra
    // 0x80336B60: nop

    return;
    // 0x80336B60: nop

;}
RECOMP_FUNC void func_803359D8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803359D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803359DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803359E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803359E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803359E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803359EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803359F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803359F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803359F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803359FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335A00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335A04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335A08: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335A0C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335A10: nop

    // 0x80335A14: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335A18: nop

    // 0x80335A1C: bne         $t1, $zero, L_80335A84
    if (ctx->r9 != 0) {
        // 0x80335A20: nop
    
            goto L_80335A84;
    }
    // 0x80335A20: nop

    // 0x80335A24: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335A28: nop

    // 0x80335A2C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335A30: nop

    // 0x80335A34: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335A38: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335A3C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335A40: nop

    // 0x80335A44: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335A48: nop

    // 0x80335A4C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A54: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335A58: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335A5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335A68: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80335A6C: jal         0x8001C0EC
    // 0x80335A70: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335A70: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335A74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A7C: jal         0x8001BBDC
    // 0x80335A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335A84:
    // 0x80335A84: jal         0x80334D5C
    // 0x80335A88: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335A88: nop

    after_2:
    // 0x80335A8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A94: jal         0x8001B4AC
    // 0x80335A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335A9C: beq         $v0, $zero, L_80335AB4
    if (ctx->r2 == 0) {
        // 0x80335AA0: nop
    
            goto L_80335AB4;
    }
    // 0x80335AA0: nop

    // 0x80335AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335AA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335AAC: jal         0x8001BBDC
    // 0x80335AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80335AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_80335AB4:
    // 0x80335AB4: b           L_80335ABC
    // 0x80335AB8: nop

        goto L_80335ABC;
    // 0x80335AB8: nop

L_80335ABC:
    // 0x80335ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335AC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335AC4: jr          $ra
    // 0x80335AC8: nop

    return;
    // 0x80335AC8: nop

;}
RECOMP_FUNC void func_803345AC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803345AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803345B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803345B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803345B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803345BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803345C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803345C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803345C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803345CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803345D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803345D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803345D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803345DC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803345E0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803345E4: nop

    // 0x803345E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803345EC: nop

    // 0x803345F0: bne         $t1, $zero, L_803346A0
    if (ctx->r9 != 0) {
        // 0x803345F4: nop
    
            goto L_803346A0;
    }
    // 0x803345F4: nop

    // 0x803345F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803345FC: nop

    // 0x80334600: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334604: nop

    // 0x80334608: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033460C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334610: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334614: nop

    // 0x80334618: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033461C: nop

    // 0x80334620: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334624: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334628: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033462C: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80334630: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334634: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80334638: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033463C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80334640: jal         0x8001C0EC
    // 0x80334644: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334644: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80334648: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033464C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334650: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334654: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x80334658: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033465C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334660: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334664: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334668: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033466C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334670: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80334674: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334678: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033467C: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80334680: nop

    // 0x80334684: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80334688: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033468C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334690: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334694: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334698: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033469C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803346A0:
    // 0x803346A0: jal         0x80330000
    // 0x803346A4: nop

    func_80330000_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x803346A4: nop

    after_1:
    // 0x803346A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803346AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803346B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803346B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346B8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x803346BC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x803346C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803346C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803346C8: jal         0x800295C0
    // 0x803346CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_2;
    // 0x803346CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x803346D0: beq         $v0, $zero, L_803346E4
    if (ctx->r2 == 0) {
        // 0x803346D4: nop
    
            goto L_803346E4;
    }
    // 0x803346D4: nop

    // 0x803346D8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803346DC: b           L_803346F0
    // 0x803346E0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
        goto L_803346F0;
    // 0x803346E0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_803346E4:
    // 0x803346E4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803346E8: nop

    // 0x803346EC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_803346F0:
    // 0x803346F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803346F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346F8: jal         0x8001B4AC
    // 0x803346FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x803346FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80334700: beq         $v0, $zero, L_80334738
    if (ctx->r2 == 0) {
        // 0x80334704: nop
    
            goto L_80334738;
    }
    // 0x80334704: nop

    // 0x80334708: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033470C: nop

    // 0x80334710: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x80334714: nop

    // 0x80334718: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x8033471C: sh          $t7, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r15;
    // 0x80334720: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334724: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80334728: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033472C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334730: nop

    // 0x80334734: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80334738:
    // 0x80334738: b           L_80334740
    // 0x8033473C: nop

        goto L_80334740;
    // 0x8033473C: nop

L_80334740:
    // 0x80334740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334744: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80334748: jr          $ra
    // 0x8033474C: nop

    return;
    // 0x8033474C: nop

;}
RECOMP_FUNC void func_8033A2B8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A2B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A2BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A2C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A2C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A2C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A2CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A2D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A2D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A2D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A2DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A2E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A2E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A2E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A2EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A2F0: nop

    // 0x8033A2F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A2F8: nop

    // 0x8033A2FC: bne         $t1, $zero, L_8033A354
    if (ctx->r9 != 0) {
        // 0x8033A300: nop
    
            goto L_8033A354;
    }
    // 0x8033A300: nop

    // 0x8033A304: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A308: nop

    // 0x8033A30C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A310: nop

    // 0x8033A314: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A318: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A31C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A320: nop

    // 0x8033A324: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A328: nop

    // 0x8033A32C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A334: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A338: addiu       $t7, $t7, -0x3E2C
    ctx->r15 = ADD32(ctx->r15, -0X3E2C);
    // 0x8033A33C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A340: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A344: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A348: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033A34C: jal         0x8001C0EC
    // 0x8033A350: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A350: addiu       $a3, $zero, 0x182
    ctx->r7 = ADD32(0, 0X182);
    after_0:
L_8033A354:
    // 0x8033A354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A35C: jal         0x8001B4AC
    // 0x8033A360: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A360: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A364: beq         $v0, $zero, L_8033A384
    if (ctx->r2 == 0) {
        // 0x8033A368: nop
    
            goto L_8033A384;
    }
    // 0x8033A368: nop

    // 0x8033A36C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A370: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8033A374: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033A378: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A37C: nop

    // 0x8033A380: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033A384:
    // 0x8033A384: b           L_8033A38C
    // 0x8033A388: nop

        goto L_8033A38C;
    // 0x8033A388: nop

L_8033A38C:
    // 0x8033A38C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A390: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A394: jr          $ra
    // 0x8033A398: nop

    return;
    // 0x8033A398: nop

;}
RECOMP_FUNC void func_80333D1C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333D20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333D24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333D28: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333D2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333D30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333D44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333D48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333D4C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333D50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D54: nop

    // 0x80333D58: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333D5C: nop

    // 0x80333D60: bne         $t1, $zero, L_80333E20
    if (ctx->r9 != 0) {
        // 0x80333D64: nop
    
            goto L_80333E20;
    }
    // 0x80333D64: nop

    // 0x80333D68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D6C: nop

    // 0x80333D70: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333D74: nop

    // 0x80333D78: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333D7C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333D80: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D84: nop

    // 0x80333D88: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333D8C: nop

    // 0x80333D90: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333D98: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333D9C: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80333DA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DA4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333DA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333DAC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80333DB0: jal         0x8001C0EC
    // 0x80333DB4: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333DB4: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80333DB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333DBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333DC0: jal         0x8001BBDC
    // 0x80333DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80333DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333DC8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DD0: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80333DD4: addiu       $t8, $zero, 0x1C
    ctx->r24 = ADD32(0, 0X1C);
    // 0x80333DD8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333DDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333DE0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333DE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333DE8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333DEC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333DF0: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80333DF4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333DFC: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80333E00: nop

    // 0x80333E04: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333E08: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333E0C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333E10: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333E14: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333E18: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333E1C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80333E20:
    // 0x80333E20: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333E28: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x80333E2C: nop

    // 0x80333E30: bne         $t5, $at, L_80333E44
    if (ctx->r13 != ctx->r1) {
        // 0x80333E34: nop
    
            goto L_80333E44;
    }
    // 0x80333E34: nop

    // 0x80333E38: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E3C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80333E40: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_80333E44:
    // 0x80333E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E4C: jal         0x8002A8B4
    // 0x80333E50: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80333E50: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x80333E54: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333E58: nop

    // 0x80333E5C: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80333E60: nop

    // 0x80333E64: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x80333E68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333E6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333E70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E78: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80333E7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80333E80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333E84: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80333E88: jal         0x800295C0
    // 0x80333E8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80333E8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80333E90: beq         $v0, $zero, L_80333EA4
    if (ctx->r2 == 0) {
        // 0x80333E94: nop
    
            goto L_80333EA4;
    }
    // 0x80333E94: nop

    // 0x80333E98: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333E9C: b           L_80333EB0
    // 0x80333EA0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_80333EB0;
    // 0x80333EA0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_80333EA4:
    // 0x80333EA4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333EA8: nop

    // 0x80333EAC: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_80333EB0:
    // 0x80333EB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333EB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333EB8: jal         0x8001B4AC
    // 0x80333EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80333EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80333EC0: beq         $v0, $zero, L_80333FD8
    if (ctx->r2 == 0) {
        // 0x80333EC4: nop
    
            goto L_80333FD8;
    }
    // 0x80333EC4: nop

    // 0x80333EC8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333ECC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333ED0: lh          $t1, 0xAA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAA);
    // 0x80333ED4: nop

    // 0x80333ED8: bne         $t1, $at, L_80333F90
    if (ctx->r9 != ctx->r1) {
        // 0x80333EDC: nop
    
            goto L_80333F90;
    }
    // 0x80333EDC: nop

    // 0x80333EE0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EE4: nop

    // 0x80333EE8: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80333EEC: nop

    // 0x80333EF0: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x80333EF4: bne         $at, $zero, L_80333F70
    if (ctx->r1 != 0) {
        // 0x80333EF8: nop
    
            goto L_80333F70;
    }
    // 0x80333EF8: nop

    // 0x80333EFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333F04: lh          $t6, 0xB4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XB4);
    // 0x80333F08: nop

    // 0x80333F0C: bne         $t6, $at, L_80333F38
    if (ctx->r14 != ctx->r1) {
        // 0x80333F10: nop
    
            goto L_80333F38;
    }
    // 0x80333F10: nop

    // 0x80333F14: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F18: nop

    // 0x80333F1C: sh          $zero, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = 0;
    // 0x80333F20: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F24: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x80333F28: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x80333F2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F30: b           L_80333F68
    // 0x80333F34: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_80333F68;
    // 0x80333F34: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333F38:
    // 0x80333F38: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F3C: nop

    // 0x80333F40: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
    // 0x80333F44: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F48: nop

    // 0x80333F4C: sh          $zero, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = 0;
    // 0x80333F50: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F54: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x80333F58: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333F5C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F60: nop

    // 0x80333F64: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80333F68:
    // 0x80333F68: b           L_80333F88
    // 0x80333F6C: nop

        goto L_80333F88;
    // 0x80333F6C: nop

L_80333F70:
    // 0x80333F70: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F74: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80333F78: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80333F7C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F80: nop

    // 0x80333F84: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80333F88:
    // 0x80333F88: b           L_80333FD8
    // 0x80333F8C: nop

        goto L_80333FD8;
    // 0x80333F8C: nop

L_80333F90:
    // 0x80333F90: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333F94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333F98: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x80333F9C: nop

    // 0x80333FA0: bne         $t0, $at, L_80333FD8
    if (ctx->r8 != ctx->r1) {
        // 0x80333FA4: nop
    
            goto L_80333FD8;
    }
    // 0x80333FA4: nop

    // 0x80333FA8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FAC: nop

    // 0x80333FB0: sh          $zero, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = 0;
    // 0x80333FB4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FB8: nop

    // 0x80333FBC: sh          $zero, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = 0;
    // 0x80333FC0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FC4: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x80333FC8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333FCC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FD0: nop

    // 0x80333FD4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80333FD8:
    // 0x80333FD8: b           L_80333FE0
    // 0x80333FDC: nop

        goto L_80333FE0;
    // 0x80333FDC: nop

L_80333FE0:
    // 0x80333FE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333FE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333FE8: jr          $ra
    // 0x80333FEC: nop

    return;
    // 0x80333FEC: nop

;}
RECOMP_FUNC void func_80336DEC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336DEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336DF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336DF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336DF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336DFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336E00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336E04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336E14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336E18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336E1C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336E20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336E24: nop

    // 0x80336E28: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336E2C: nop

    // 0x80336E30: bne         $t1, $zero, L_80336E98
    if (ctx->r9 != 0) {
        // 0x80336E34: nop
    
            goto L_80336E98;
    }
    // 0x80336E34: nop

    // 0x80336E38: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336E3C: nop

    // 0x80336E40: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336E44: nop

    // 0x80336E48: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336E4C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336E50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336E54: nop

    // 0x80336E58: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336E5C: nop

    // 0x80336E60: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336E64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336E68: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336E6C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336E70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336E74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336E78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336E7C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x80336E80: jal         0x8001C0EC
    // 0x80336E84: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336E84: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336E88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336E8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336E90: jal         0x8001BBDC
    // 0x80336E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80336E98:
    // 0x80336E98: jal         0x80334D5C
    // 0x80336E9C: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80336E9C: nop

    after_2:
    // 0x80336EA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336EA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336EA8: jal         0x8001B4AC
    // 0x80336EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80336EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80336EB0: beq         $v0, $zero, L_80336ED0
    if (ctx->r2 == 0) {
        // 0x80336EB4: nop
    
            goto L_80336ED0;
    }
    // 0x80336EB4: nop

    // 0x80336EB8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336EBC: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x80336EC0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80336EC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336EC8: nop

    // 0x80336ECC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80336ED0:
    // 0x80336ED0: b           L_80336ED8
    // 0x80336ED4: nop

        goto L_80336ED8;
    // 0x80336ED4: nop

L_80336ED8:
    // 0x80336ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336EDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336EE0: jr          $ra
    // 0x80336EE4: nop

    return;
    // 0x80336EE4: nop

;}
RECOMP_FUNC void func_80335490_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335490: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335494: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335498: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033549C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803354A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803354A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803354A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803354AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803354B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803354B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803354B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803354BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803354C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803354C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803354C8: nop

    // 0x803354CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803354D0: nop

    // 0x803354D4: bne         $t1, $zero, L_8033553C
    if (ctx->r9 != 0) {
        // 0x803354D8: nop
    
            goto L_8033553C;
    }
    // 0x803354D8: nop

    // 0x803354DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803354E0: nop

    // 0x803354E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803354E8: nop

    // 0x803354EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803354F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803354F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803354F8: nop

    // 0x803354FC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335500: nop

    // 0x80335504: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033550C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335510: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335518: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033551C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335520: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80335524: jal         0x8001C0EC
    // 0x80335528: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335528: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x8033552C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335534: jal         0x8001BBDC
    // 0x80335538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335538: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033553C:
    // 0x8033553C: jal         0x80334D5C
    // 0x80335540: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335540: nop

    after_2:
    // 0x80335544: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033554C: jal         0x8001B4AC
    // 0x80335550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335554: beq         $v0, $zero, L_80335574
    if (ctx->r2 == 0) {
        // 0x80335558: nop
    
            goto L_80335574;
    }
    // 0x80335558: nop

    // 0x8033555C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335560: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80335564: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335568: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033556C: nop

    // 0x80335570: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335574:
    // 0x80335574: b           L_8033557C
    // 0x80335578: nop

        goto L_8033557C;
    // 0x80335578: nop

L_8033557C:
    // 0x8033557C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335580: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335584: jr          $ra
    // 0x80335588: nop

    return;
    // 0x80335588: nop

;}
RECOMP_FUNC void func_80337C40_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337C40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80337C44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337C48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337C4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337C50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337C54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337C58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337C5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337C60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337C64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337C68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337C6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337C70: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80337C74: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337C7C: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80337C80: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x80337C84: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80337C88: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337C8C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80337C90: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337C94: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80337C98: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80337C9C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337CA0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337CA4: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80337CA8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337CAC: lwc1        $f14, -0x54D8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X54D8);
    // 0x80337CB0: jal         0x80015538
    // 0x80337CB4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80337CB4: nop

    after_0:
    // 0x80337CB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80337CBC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CC0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337CC4: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80337CC8: nop

    // 0x80337CCC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80337CD0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80337CD4: lwc1        $f4, -0x54E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X54E4);
    // 0x80337CD8: nop

    // 0x80337CDC: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80337CE0: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80337CE4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CE8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337CEC: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80337CF0: nop

    // 0x80337CF4: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x80337CF8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80337CFC: lwc1        $f8, -0x54DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X54DC);
    // 0x80337D00: nop

    // 0x80337D04: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80337D08: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80337D0C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80337D10: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80337D14: jal         0x800366E0
    // 0x80337D18: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80337D18: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_1:
    // 0x80337D1C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80337D20: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337D24: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80337D28: lwc1        $f9, -0x5190($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5190);
    // 0x80337D2C: lwc1        $f8, -0x518C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X518C);
    // 0x80337D30: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80337D34: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80337D38: jal         0x80034970
    // 0x80337D3C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80337D3C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x80337D40: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80337D44: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D48: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80337D4C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80337D50: nop

    // 0x80337D54: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80337D58: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80337D5C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D60: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337D64: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x80337D68: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80337D6C: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80337D70: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337D74: lwc1        $f8, -0x54E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X54E0);
    // 0x80337D78: nop

    // 0x80337D7C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80337D80: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80337D84: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337D88: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80337D8C: lwc1        $f7, -0x5188($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5188);
    // 0x80337D90: lwc1        $f6, -0x5184($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5184);
    // 0x80337D94: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80337D98: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80337D9C: jal         0x80036570
    // 0x80337DA0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80337DA0: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_3:
    // 0x80337DA4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80337DA8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DAC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80337DB0: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80337DB4: nop

    // 0x80337DB8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80337DBC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80337DC0: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80337DC4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80337DC8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80337DCC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80337DD0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80337DD4: addiu       $a1, $a1, -0x5520
    ctx->r5 = ADD32(ctx->r5, -0X5520);
    // 0x80337DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80337DDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80337DE0: jal         0x80027464
    // 0x80337DE4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80337DE4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80337DE8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80337DEC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80337DF0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DF4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80337DF8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80337DFC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80337E00: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80337E04: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80337E08: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80337E0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337E10: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80337E14: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80337E18: b           L_80337E20
    // 0x80337E1C: nop

        goto L_80337E20;
    // 0x80337E1C: nop

L_80337E20:
    // 0x80337E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337E24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80337E28: jr          $ra
    // 0x80337E2C: nop

    return;
    // 0x80337E2C: nop

;}
RECOMP_FUNC void func_80338C2C_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338C2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338C30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338C34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338C38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338C3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338C40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338C44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338C48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338C4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338C50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338C54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338C58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338C5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338C60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338C64: nop

    // 0x80338C68: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338C6C: nop

    // 0x80338C70: bne         $t1, $zero, L_80338CC8
    if (ctx->r9 != 0) {
        // 0x80338C74: nop
    
            goto L_80338CC8;
    }
    // 0x80338C74: nop

    // 0x80338C78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338C7C: nop

    // 0x80338C80: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338C84: nop

    // 0x80338C88: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338C8C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338C90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338C94: nop

    // 0x80338C98: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338C9C: nop

    // 0x80338CA0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338CA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338CA8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338CAC: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338CB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338CB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338CBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80338CC0: jal         0x8001C0EC
    // 0x80338CC4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338CC4: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_80338CC8:
    // 0x80338CC8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338CCC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338CD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338CD4: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80338CD8: jal         0x80015538
    // 0x80338CDC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338CDC: nop

    after_1:
    // 0x80338CE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338CE4: nop

    // 0x80338CE8: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80338CEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338CF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338CF4: jal         0x8001B4AC
    // 0x80338CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80338CF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80338CFC: beq         $v0, $zero, L_80338D1C
    if (ctx->r2 == 0) {
        // 0x80338D00: nop
    
            goto L_80338D1C;
    }
    // 0x80338D00: nop

    // 0x80338D04: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338D08: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80338D0C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80338D10: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338D14: nop

    // 0x80338D18: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338D1C:
    // 0x80338D1C: b           L_80338D24
    // 0x80338D20: nop

        goto L_80338D24;
    // 0x80338D20: nop

L_80338D24:
    // 0x80338D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338D28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338D2C: jr          $ra
    // 0x80338D30: nop

    return;
    // 0x80338D30: nop

;}
RECOMP_FUNC void func_803364FC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803364FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336504: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336508: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033650C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336510: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336514: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033651C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336520: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336524: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336528: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033652C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336530: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336534: nop

    // 0x80336538: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033653C: nop

    // 0x80336540: bne         $t1, $zero, L_803365A8
    if (ctx->r9 != 0) {
        // 0x80336544: nop
    
            goto L_803365A8;
    }
    // 0x80336544: nop

    // 0x80336548: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033654C: nop

    // 0x80336550: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336554: nop

    // 0x80336558: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033655C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336560: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336564: nop

    // 0x80336568: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033656C: nop

    // 0x80336570: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336578: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033657C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336584: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336588: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033658C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x80336590: jal         0x8001C0EC
    // 0x80336594: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336594: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336598: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033659C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803365A0: jal         0x8001BBDC
    // 0x803365A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803365A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_803365A8:
    // 0x803365A8: jal         0x80334D5C
    // 0x803365AC: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x803365AC: nop

    after_2:
    // 0x803365B0: b           L_803365B8
    // 0x803365B4: nop

        goto L_803365B8;
    // 0x803365B4: nop

L_803365B8:
    // 0x803365B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803365BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803365C0: jr          $ra
    // 0x803365C4: nop

    return;
    // 0x803365C4: nop

;}
RECOMP_FUNC void func_803361DC_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803361DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803361E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803361E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803361E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803361EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803361F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803361F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803361FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336200: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336204: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336208: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033620C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336210: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336214: nop

    // 0x80336218: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033621C: nop

    // 0x80336220: bne         $t1, $zero, L_80336288
    if (ctx->r9 != 0) {
        // 0x80336224: nop
    
            goto L_80336288;
    }
    // 0x80336224: nop

    // 0x80336228: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033622C: nop

    // 0x80336230: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336234: nop

    // 0x80336238: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033623C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336240: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336244: nop

    // 0x80336248: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033624C: nop

    // 0x80336250: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336258: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033625C: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336260: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336264: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033626C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x80336270: jal         0x8001C0EC
    // 0x80336274: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336274: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336278: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033627C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336280: jal         0x8001BBDC
    // 0x80336284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336284: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80336288:
    // 0x80336288: jal         0x80334D5C
    // 0x8033628C: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x8033628C: nop

    after_2:
    // 0x80336290: b           L_80336298
    // 0x80336294: nop

        goto L_80336298;
    // 0x80336294: nop

L_80336298:
    // 0x80336298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033629C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803362A0: jr          $ra
    // 0x803362A4: nop

    return;
    // 0x803362A4: nop

;}
RECOMP_FUNC void func_803330C4_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803330C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803330C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803330CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803330D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803330D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803330D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803330DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803330E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803330E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803330EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803330F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803330F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803330F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803330FC: nop

    // 0x80333100: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333104: nop

    // 0x80333108: bne         $t1, $zero, L_803331B8
    if (ctx->r9 != 0) {
        // 0x8033310C: nop
    
            goto L_803331B8;
    }
    // 0x8033310C: nop

    // 0x80333110: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333114: nop

    // 0x80333118: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033311C: nop

    // 0x80333120: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333124: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333128: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033312C: nop

    // 0x80333130: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333134: nop

    // 0x80333138: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033313C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333140: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80333144: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80333148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033314C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80333150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333154: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80333158: jal         0x8001C0EC
    // 0x8033315C: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033315C: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x80333160: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333164: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333168: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033316C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80333170: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333174: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333178: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033317C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333180: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333184: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333188: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x8033318C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333190: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333194: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80333198: nop

    // 0x8033319C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803331A0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803331A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803331A8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803331AC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803331B0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803331B4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803331B8:
    // 0x803331B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331C0: jal         0x8002A8B4
    // 0x803331C4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x803331C4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x803331C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803331CC: nop

    // 0x803331D0: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803331D4: nop

    // 0x803331D8: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x803331DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331E4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803331E8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803331EC: jal         0x8002A0D0
    // 0x803331F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_2;
    // 0x803331F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x803331F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803331F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803331FC: jal         0x8001B4AC
    // 0x80333200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80333200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80333204: beq         $v0, $zero, L_80333230
    if (ctx->r2 == 0) {
        // 0x80333208: nop
    
            goto L_80333230;
    }
    // 0x80333208: nop

    // 0x8033320C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333210: nop

    // 0x80333214: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x80333218: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033321C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x80333220: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x80333224: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333228: nop

    // 0x8033322C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80333230:
    // 0x80333230: b           L_80333238
    // 0x80333234: nop

        goto L_80333238;
    // 0x80333234: nop

L_80333238:
    // 0x80333238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033323C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333240: jr          $ra
    // 0x80333244: nop

    return;
    // 0x80333244: nop

;}
RECOMP_FUNC void func_803365C8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803365C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803365CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803365D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803365D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803365D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803365DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803365E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803365E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803365E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803365EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803365F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803365F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803365F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803365FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336600: nop

    // 0x80336604: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336608: nop

    // 0x8033660C: bne         $t1, $zero, L_803366D0
    if (ctx->r9 != 0) {
        // 0x80336610: nop
    
            goto L_803366D0;
    }
    // 0x80336610: nop

    // 0x80336614: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336618: nop

    // 0x8033661C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336620: nop

    // 0x80336624: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336628: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033662C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336630: nop

    // 0x80336634: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336638: nop

    // 0x8033663C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336644: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336648: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x8033664C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336650: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336658: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x8033665C: jal         0x8001C0EC
    // 0x80336660: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336660: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033666C: jal         0x8001BBDC
    // 0x80336670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033667C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336680: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x80336684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336688: jal         0x8001ABF4
    // 0x8033668C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033668C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80336690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336694: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336698: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x8033669C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366A0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x803366A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803366A8: jal         0x8001ABF4
    // 0x803366AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803366AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803366B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803366B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803366B8: addiu       $a3, $a3, -0x3FA0
    ctx->r7 = ADD32(ctx->r7, -0X3FA0);
    // 0x803366BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803366C0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x803366C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803366C8: jal         0x8001ABF4
    // 0x803366CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803366CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803366D0:
    // 0x803366D0: jal         0x80334D5C
    // 0x803366D4: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x803366D4: nop

    after_5:
    // 0x803366D8: b           L_803366E0
    // 0x803366DC: nop

        goto L_803366E0;
    // 0x803366DC: nop

L_803366E0:
    // 0x803366E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803366E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803366E8: jr          $ra
    // 0x803366EC: nop

    return;
    // 0x803366EC: nop

;}
RECOMP_FUNC void func_8033A648_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A648: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033A64C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033A650: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A654: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A658: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A65C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A660: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A664: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A668: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A66C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A670: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A674: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A678: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033A67C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A680: nop

    // 0x8033A684: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033A688: nop

    // 0x8033A68C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033A690: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x8033A694: beq         $at, $zero, L_8033A718
    if (ctx->r1 == 0) {
        // 0x8033A698: nop
    
            goto L_8033A718;
    }
    // 0x8033A698: nop

    // 0x8033A69C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A6A0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A6A4: addu        $at, $at, $t2
    gpr jr_addend_8033A6B0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033A6A8: lw          $t2, -0x5134($at)
    ctx->r10 = ADD32(ctx->r1, -0X5134);
    // 0x8033A6AC: nop

    // 0x8033A6B0: jr          $t2
    // 0x8033A6B4: nop

    switch (jr_addend_8033A6B0 >> 2) {
        case 0: goto L_8033A6B8; break;
        case 1: goto L_8033A6C8; break;
        case 2: goto L_8033A6D8; break;
        case 3: goto L_8033A6E8; break;
        case 4: goto L_8033A6F8; break;
        case 5: goto L_8033A708; break;
        default: switch_error(__func__, 0x8033A6B0, 0x8033AECC);
    }
    // 0x8033A6B4: nop

L_8033A6B8:
    // 0x8033A6B8: jal         0x8033A0F0
    // 0x8033A6BC: nop

    func_8033A0F0_unk_bin_25(rdram, ctx);
        goto after_0;
    // 0x8033A6BC: nop

    after_0:
    // 0x8033A6C0: b           L_8033A720
    // 0x8033A6C4: nop

        goto L_8033A720;
    // 0x8033A6C4: nop

L_8033A6C8:
    // 0x8033A6C8: jal         0x8033A1D4
    // 0x8033A6CC: nop

    func_8033A1D4_unk_bin_25(rdram, ctx);
        goto after_1;
    // 0x8033A6CC: nop

    after_1:
    // 0x8033A6D0: b           L_8033A720
    // 0x8033A6D4: nop

        goto L_8033A720;
    // 0x8033A6D4: nop

L_8033A6D8:
    // 0x8033A6D8: jal         0x8033A2B8
    // 0x8033A6DC: nop

    func_8033A2B8_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x8033A6DC: nop

    after_2:
    // 0x8033A6E0: b           L_8033A720
    // 0x8033A6E4: nop

        goto L_8033A720;
    // 0x8033A6E4: nop

L_8033A6E8:
    // 0x8033A6E8: jal         0x8033A39C
    // 0x8033A6EC: nop

    func_8033A39C_unk_bin_25(rdram, ctx);
        goto after_3;
    // 0x8033A6EC: nop

    after_3:
    // 0x8033A6F0: b           L_8033A720
    // 0x8033A6F4: nop

        goto L_8033A720;
    // 0x8033A6F4: nop

L_8033A6F8:
    // 0x8033A6F8: jal         0x8033A480
    // 0x8033A6FC: nop

    func_8033A480_unk_bin_25(rdram, ctx);
        goto after_4;
    // 0x8033A6FC: nop

    after_4:
    // 0x8033A700: b           L_8033A720
    // 0x8033A704: nop

        goto L_8033A720;
    // 0x8033A704: nop

L_8033A708:
    // 0x8033A708: jal         0x8033A564
    // 0x8033A70C: nop

    func_8033A564_unk_bin_25(rdram, ctx);
        goto after_5;
    // 0x8033A70C: nop

    after_5:
    // 0x8033A710: b           L_8033A720
    // 0x8033A714: nop

        goto L_8033A720;
    // 0x8033A714: nop

L_8033A718:
    // 0x8033A718: b           L_8033A720
    // 0x8033A71C: nop

        goto L_8033A720;
    // 0x8033A71C: nop

L_8033A720:
    // 0x8033A720: b           L_8033A728
    // 0x8033A724: nop

        goto L_8033A728;
    // 0x8033A724: nop

L_8033A728:
    // 0x8033A728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033A72C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033A730: jr          $ra
    // 0x8033A734: nop

    return;
    // 0x8033A734: nop

;}
RECOMP_FUNC void func_80333FF0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333FF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80333FF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333FF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333FFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334000: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334004: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334008: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033400C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334010: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334014: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334018: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033401C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334020: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80334024: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334028: nop

    // 0x8033402C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334030: nop

    // 0x80334034: bne         $t1, $zero, L_803340E4
    if (ctx->r9 != 0) {
        // 0x80334038: nop
    
            goto L_803340E4;
    }
    // 0x80334038: nop

    // 0x8033403C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334040: nop

    // 0x80334044: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334048: nop

    // 0x8033404C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334050: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334054: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80334058: nop

    // 0x8033405C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334060: nop

    // 0x80334064: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033406C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334070: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x80334074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334078: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033407C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334080: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80334084: jal         0x8001C0EC
    // 0x80334088: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334088: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x8033408C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334094: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334098: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x8033409C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803340A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803340A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803340A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803340AC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803340B0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803340B4: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x803340B8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803340BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803340C0: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803340C4: nop

    // 0x803340C8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803340CC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803340D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803340D4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803340D8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803340DC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803340E0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803340E4:
    // 0x803340E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803340E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803340EC: lh          $t5, 0x108($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X108);
    // 0x803340F0: nop

    // 0x803340F4: bne         $t5, $at, L_80334108
    if (ctx->r13 != ctx->r1) {
        // 0x803340F8: nop
    
            goto L_80334108;
    }
    // 0x803340F8: nop

    // 0x803340FC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334100: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80334104: sh          $t7, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r15;
L_80334108:
    // 0x80334108: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033410C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334110: jal         0x8001B62C
    // 0x80334114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80334114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334118: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8033411C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334120: nop

    // 0x80334124: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80334128: nop

    // 0x8033412C: bc1f        L_803341A0
    if (!c1cs) {
        // 0x80334130: nop
    
            goto L_803341A0;
    }
    // 0x80334130: nop

    // 0x80334134: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334138: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033413C: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80334140: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80334144: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80334148: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033414C: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334150: addiu       $a1, $a1, -0x5550
    ctx->r5 = ADD32(ctx->r5, -0X5550);
    // 0x80334154: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334158: jal         0x80027464
    // 0x8033415C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x8033415C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80334160: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334164: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334168: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033416C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80334170: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80334174: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334178: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033417C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80334180: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334184: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334188: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033418C: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x80334190: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334194: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80334198: nop

    // 0x8033419C: sh          $t4, 0xC0($t2)
    MEM_H(0XC0, ctx->r10) = ctx->r12;
L_803341A0:
    // 0x803341A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803341A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803341A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803341AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803341B0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x803341B4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x803341B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803341BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803341C0: jal         0x800295C0
    // 0x803341C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x803341C4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x803341C8: beq         $v0, $zero, L_803341DC
    if (ctx->r2 == 0) {
        // 0x803341CC: nop
    
            goto L_803341DC;
    }
    // 0x803341CC: nop

    // 0x803341D0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803341D4: b           L_803341E8
    // 0x803341D8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
        goto L_803341E8;
    // 0x803341D8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
L_803341DC:
    // 0x803341DC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803341E0: nop

    // 0x803341E4: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_803341E8:
    // 0x803341E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803341EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803341F0: jal         0x8001B4AC
    // 0x803341F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803341F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803341F8: beq         $v0, $zero, L_80334230
    if (ctx->r2 == 0) {
        // 0x803341FC: nop
    
            goto L_80334230;
    }
    // 0x803341FC: nop

    // 0x80334200: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334204: nop

    // 0x80334208: lh          $t5, 0xAE($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAE);
    // 0x8033420C: nop

    // 0x80334210: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80334214: sh          $t7, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r15;
    // 0x80334218: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033421C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80334220: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80334224: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334228: nop

    // 0x8033422C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80334230:
    // 0x80334230: b           L_80334238
    // 0x80334234: nop

        goto L_80334238;
    // 0x80334234: nop

L_80334238:
    // 0x80334238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033423C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80334240: jr          $ra
    // 0x80334244: nop

    return;
    // 0x80334244: nop

;}
RECOMP_FUNC void func_803370E0_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803370E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803370E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803370E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803370EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803370F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803370F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803370F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803370FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337104: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337108: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033710C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337110: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337114: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337118: nop

    // 0x8033711C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337120: nop

    // 0x80337124: bne         $t1, $zero, L_8033718C
    if (ctx->r9 != 0) {
        // 0x80337128: nop
    
            goto L_8033718C;
    }
    // 0x80337128: nop

    // 0x8033712C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337130: nop

    // 0x80337134: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337138: nop

    // 0x8033713C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337140: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337144: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337148: nop

    // 0x8033714C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337150: nop

    // 0x80337154: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337158: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033715C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337160: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80337164: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337168: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033716C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337170: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80337174: jal         0x8001C0EC
    // 0x80337178: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337178: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x8033717C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337184: jal         0x8001BBDC
    // 0x80337188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80337188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033718C:
    // 0x8033718C: jal         0x80334D5C
    // 0x80337190: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80337190: nop

    after_2:
    // 0x80337194: b           L_8033719C
    // 0x80337198: nop

        goto L_8033719C;
    // 0x80337198: nop

L_8033719C:
    // 0x8033719C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803371A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803371A4: jr          $ra
    // 0x803371A8: nop

    return;
    // 0x803371A8: nop

;}
RECOMP_FUNC void func_80338B24_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338B2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338B30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338B34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338B38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338B3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338B44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338B4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338B50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338B54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338B58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338B5C: nop

    // 0x80338B60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338B64: nop

    // 0x80338B68: bne         $t1, $zero, L_80338BC0
    if (ctx->r9 != 0) {
        // 0x80338B6C: nop
    
            goto L_80338BC0;
    }
    // 0x80338B6C: nop

    // 0x80338B70: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338B74: nop

    // 0x80338B78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80338B7C: nop

    // 0x80338B80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338B84: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338B88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338B8C: nop

    // 0x80338B90: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338B94: nop

    // 0x80338B98: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80338B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338BA0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338BA4: addiu       $t7, $t7, -0x42B8
    ctx->r15 = ADD32(ctx->r15, -0X42B8);
    // 0x80338BA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338BAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338BB4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80338BB8: jal         0x8001C0EC
    // 0x80338BBC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338BBC: addiu       $a3, $zero, 0x175
    ctx->r7 = ADD32(0, 0X175);
    after_0:
L_80338BC0:
    // 0x80338BC0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338BC4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338BC8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338BCC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80338BD0: jal         0x80015538
    // 0x80338BD4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80338BD4: nop

    after_1:
    // 0x80338BD8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338BDC: nop

    // 0x80338BE0: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x80338BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338BEC: jal         0x8001B4AC
    // 0x80338BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80338BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80338BF4: beq         $v0, $zero, L_80338C14
    if (ctx->r2 == 0) {
        // 0x80338BF8: nop
    
            goto L_80338C14;
    }
    // 0x80338BF8: nop

    // 0x80338BFC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338C00: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80338C04: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80338C08: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338C0C: nop

    // 0x80338C10: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338C14:
    // 0x80338C14: b           L_80338C1C
    // 0x80338C18: nop

        goto L_80338C1C;
    // 0x80338C18: nop

L_80338C1C:
    // 0x80338C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338C20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338C24: jr          $ra
    // 0x80338C28: nop

    return;
    // 0x80338C28: nop

;}
RECOMP_FUNC void func_80336EE8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336EE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336EEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336EF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336EF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336EF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336EFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336F00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336F04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336F08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336F0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336F10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336F14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336F18: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336F1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336F20: nop

    // 0x80336F24: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336F28: nop

    // 0x80336F2C: bne         $t1, $zero, L_80336F94
    if (ctx->r9 != 0) {
        // 0x80336F30: nop
    
            goto L_80336F94;
    }
    // 0x80336F30: nop

    // 0x80336F34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336F38: nop

    // 0x80336F3C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336F40: nop

    // 0x80336F44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336F48: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336F4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336F50: nop

    // 0x80336F54: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336F58: nop

    // 0x80336F5C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336F60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F64: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336F68: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80336F6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336F74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336F78: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x80336F7C: jal         0x8001C0EC
    // 0x80336F80: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336F80: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80336F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F8C: jal         0x8001BBDC
    // 0x80336F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80336F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80336F94:
    // 0x80336F94: jal         0x80334D5C
    // 0x80336F98: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80336F98: nop

    after_2:
    // 0x80336F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336FA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336FA4: jal         0x8001B4AC
    // 0x80336FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80336FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80336FAC: beq         $v0, $zero, L_80336FCC
    if (ctx->r2 == 0) {
        // 0x80336FB0: nop
    
            goto L_80336FCC;
    }
    // 0x80336FB0: nop

    // 0x80336FB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336FB8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80336FBC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80336FC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336FC4: nop

    // 0x80336FC8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80336FCC:
    // 0x80336FCC: b           L_80336FD4
    // 0x80336FD0: nop

        goto L_80336FD4;
    // 0x80336FD0: nop

L_80336FD4:
    // 0x80336FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336FD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336FDC: jr          $ra
    // 0x80336FE0: nop

    return;
    // 0x80336FE0: nop

;}
RECOMP_FUNC void func_80335EE8_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335EE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335EEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335EF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335EF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335EF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335EFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335F00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335F08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335F10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335F14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335F18: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335F1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335F20: nop

    // 0x80335F24: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335F28: nop

    // 0x80335F2C: bne         $t1, $zero, L_80335F94
    if (ctx->r9 != 0) {
        // 0x80335F30: nop
    
            goto L_80335F94;
    }
    // 0x80335F30: nop

    // 0x80335F34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335F38: nop

    // 0x80335F3C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335F40: nop

    // 0x80335F44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335F48: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335F4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335F50: nop

    // 0x80335F54: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335F58: nop

    // 0x80335F5C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335F60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F64: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335F68: addiu       $t7, $t7, -0x41CC
    ctx->r15 = ADD32(ctx->r15, -0X41CC);
    // 0x80335F6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335F74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335F78: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80335F7C: jal         0x8001C0EC
    // 0x80335F80: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335F80: addiu       $a3, $zero, 0x179
    ctx->r7 = ADD32(0, 0X179);
    after_0:
    // 0x80335F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F8C: jal         0x8001BBDC
    // 0x80335F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80335F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80335F94:
    // 0x80335F94: jal         0x80334D5C
    // 0x80335F98: nop

    func_80334D5C_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80335F98: nop

    after_2:
    // 0x80335F9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335FA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335FA4: jal         0x8001B4AC
    // 0x80335FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80335FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80335FAC: beq         $v0, $zero, L_80335FCC
    if (ctx->r2 == 0) {
        // 0x80335FB0: nop
    
            goto L_80335FCC;
    }
    // 0x80335FB0: nop

    // 0x80335FB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80335FB8: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x80335FBC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80335FC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335FC4: nop

    // 0x80335FC8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80335FCC:
    // 0x80335FCC: b           L_80335FD4
    // 0x80335FD0: nop

        goto L_80335FD4;
    // 0x80335FD0: nop

L_80335FD4:
    // 0x80335FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335FD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335FDC: jr          $ra
    // 0x80335FE0: nop

    return;
    // 0x80335FE0: nop

;}
RECOMP_FUNC void func_80334248_unk_bin_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334248: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033424C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334250: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334254: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334258: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033425C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334260: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334264: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334268: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033426C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334270: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334274: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334278: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033427C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334280: nop

    // 0x80334284: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334288: nop

    // 0x8033428C: bne         $t1, $zero, L_8033434C
    if (ctx->r9 != 0) {
        // 0x80334290: nop
    
            goto L_8033434C;
    }
    // 0x80334290: nop

    // 0x80334294: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334298: nop

    // 0x8033429C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803342A0: nop

    // 0x803342A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803342A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803342AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803342B0: nop

    // 0x803342B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803342B8: nop

    // 0x803342BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803342C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342C4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803342C8: addiu       $t7, $t7, -0x42F0
    ctx->r15 = ADD32(ctx->r15, -0X42F0);
    // 0x803342CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803342D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803342D8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x803342DC: jal         0x8001C0EC
    // 0x803342E0: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803342E0: addiu       $a3, $zero, 0x174
    ctx->r7 = ADD32(0, 0X174);
    after_0:
    // 0x803342E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342EC: jal         0x8001BBDC
    // 0x803342F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803342F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803342F4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803342F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803342FC: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334300: addiu       $t8, $zero, 0x22
    ctx->r24 = ADD32(0, 0X22);
    // 0x80334304: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334308: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033430C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334310: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334314: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334318: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033431C: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80334320: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334328: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033432C: nop

    // 0x80334330: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80334334: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334338: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033433C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334340: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334344: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334348: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033434C:
    // 0x8033434C: jal         0x80330000
    // 0x80334350: nop

    func_80330000_unk_bin_25(rdram, ctx);
        goto after_2;
    // 0x80334350: nop

    after_2:
    // 0x80334354: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334358: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033435C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334364: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80334368: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8033436C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334370: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334374: jal         0x800295C0
    // 0x80334378: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80334378: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8033437C: beq         $v0, $zero, L_80334390
    if (ctx->r2 == 0) {
        // 0x80334380: nop
    
            goto L_80334390;
    }
    // 0x80334380: nop

    // 0x80334384: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80334388: b           L_8033439C
    // 0x8033438C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
        goto L_8033439C;
    // 0x8033438C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_80334390:
    // 0x80334390: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80334394: nop

    // 0x80334398: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8033439C:
    // 0x8033439C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343A4: jal         0x8001B4AC
    // 0x803343A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x803343A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x803343AC: beq         $v0, $zero, L_803343E4
    if (ctx->r2 == 0) {
        // 0x803343B0: nop
    
            goto L_803343E4;
    }
    // 0x803343B0: nop

    // 0x803343B4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803343B8: nop

    // 0x803343BC: lh          $t5, 0xAC($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAC);
    // 0x803343C0: nop

    // 0x803343C4: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x803343C8: sh          $t7, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r15;
    // 0x803343CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803343D0: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x803343D4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803343D8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803343DC: nop

    // 0x803343E0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803343E4:
    // 0x803343E4: b           L_803343EC
    // 0x803343E8: nop

        goto L_803343EC;
    // 0x803343E8: nop

L_803343EC:
    // 0x803343EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803343F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803343F4: jr          $ra
    // 0x803343F8: nop

    return;
    // 0x803343F8: nop

;}
