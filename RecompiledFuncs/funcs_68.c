#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330ED4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330ED4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330EDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330EE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330EE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330EE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330EF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330EFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330F08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330F0C: nop

    // 0x80330F10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330F14: nop

    // 0x80330F18: bne         $t1, $zero, L_80330F94
    if (ctx->r9 != 0) {
        // 0x80330F1C: nop
    
            goto L_80330F94;
    }
    // 0x80330F1C: nop

    // 0x80330F20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330F24: nop

    // 0x80330F28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330F2C: nop

    // 0x80330F30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330F34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330F38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330F3C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330F40: nop

    // 0x80330F44: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80330F48: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330F4C: nop

    // 0x80330F50: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80330F54: nop

    // 0x80330F58: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80330F5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330F60: nop

    // 0x80330F64: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80330F68: nop

    // 0x80330F6C: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x80330F70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F74: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80330F78: addiu       $t9, $t9, -0x5DF0
    ctx->r25 = ADD32(ctx->r25, -0X5DF0);
    // 0x80330F7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F80: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330F84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330F88: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80330F8C: jal         0x8001C0EC
    // 0x80330F90: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330F90: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
L_80330F94:
    // 0x80330F94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330F98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330F9C: jal         0x8001B4AC
    // 0x80330FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80330FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80330FA4: beq         $v0, $zero, L_80330FD0
    if (ctx->r2 == 0) {
        // 0x80330FA8: nop
    
            goto L_80330FD0;
    }
    // 0x80330FA8: nop

    // 0x80330FAC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330FB0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80330FB4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80330FB8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330FBC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80330FC0: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
    // 0x80330FC4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330FC8: nop

    // 0x80330FCC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80330FD0:
    // 0x80330FD0: b           L_80330FD8
    // 0x80330FD4: nop

        goto L_80330FD8;
    // 0x80330FD4: nop

L_80330FD8:
    // 0x80330FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330FDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330FE0: jr          $ra
    // 0x80330FE4: nop

    return;
    // 0x80330FE4: nop

;}
RECOMP_FUNC void func_80335E2C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335E2C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335E30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335E34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335E38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335E3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335E40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335E48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335E4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335E50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335E54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335E58: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335E5C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335E60: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80335E64: nop

    // 0x80335E68: bne         $t0, $zero, L_80335E78
    if (ctx->r8 != 0) {
        // 0x80335E6C: nop
    
            goto L_80335E78;
    }
    // 0x80335E6C: nop

    // 0x80335E70: b           L_80335E78
    // 0x80335E74: nop

        goto L_80335E78;
    // 0x80335E74: nop

L_80335E78:
    // 0x80335E78: b           L_80335E80
    // 0x80335E7C: nop

        goto L_80335E80;
    // 0x80335E7C: nop

L_80335E80:
    // 0x80335E80: jr          $ra
    // 0x80335E84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80335E84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80335AA4_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335AA4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335AA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335AAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335AB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335AB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335AB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335ABC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335AC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335AC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335AC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335ACC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335AD0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335AD4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80335AD8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80335ADC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80335AE0: b           L_80335AE8
    // 0x80335AE4: nop

        goto L_80335AE8;
    // 0x80335AE4: nop

L_80335AE8:
    // 0x80335AE8: jr          $ra
    // 0x80335AEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80335AEC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80336D74_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336D74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336D7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336D80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336D84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336D88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336D9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336DA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336DA4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336DA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336DAC: nop

    // 0x80336DB0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336DB4: nop

    // 0x80336DB8: bne         $t1, $zero, L_80336E10
    if (ctx->r9 != 0) {
        // 0x80336DBC: nop
    
            goto L_80336E10;
    }
    // 0x80336DBC: nop

    // 0x80336DC0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336DC4: nop

    // 0x80336DC8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336DCC: nop

    // 0x80336DD0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336DD4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336DD8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336DDC: nop

    // 0x80336DE0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336DE4: nop

    // 0x80336DE8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336DEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336DF0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336DF4: addiu       $t7, $t7, -0x5BA0
    ctx->r15 = ADD32(ctx->r15, -0X5BA0);
    // 0x80336DF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336DFC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336E08: jal         0x8001C0EC
    // 0x80336E0C: addiu       $a3, $zero, 0xD8
    ctx->r7 = ADD32(0, 0XD8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336E0C: addiu       $a3, $zero, 0xD8
    ctx->r7 = ADD32(0, 0XD8);
    after_0:
L_80336E10:
    // 0x80336E10: jal         0x80014E80
    // 0x80336E14: addiu       $a0, $zero, -0x1A4
    ctx->r4 = ADD32(0, -0X1A4);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80336E14: addiu       $a0, $zero, -0x1A4
    ctx->r4 = ADD32(0, -0X1A4);
    after_1:
    // 0x80336E18: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80336E1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336E20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80336E24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336E28: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80336E2C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336E30: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80336E34: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x80336E38: jal         0x80014E80
    // 0x80336E3C: addiu       $a0, $zero, -0x1A4
    ctx->r4 = ADD32(0, -0X1A4);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80336E3C: addiu       $a0, $zero, -0x1A4
    ctx->r4 = ADD32(0, -0X1A4);
    after_2:
    // 0x80336E40: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80336E44: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80336E48: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80336E4C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80336E50: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80336E54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336E58: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80336E5C: swc1        $f6, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f6.u32l;
    // 0x80336E60: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336E64: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80336E68: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80336E6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336E70: lwc1        $f8, 0x1264($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1264);
    // 0x80336E74: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336E78: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80336E7C: swc1        $f16, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f16.u32l;
    // 0x80336E80: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336E84: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80336E88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336E8C: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80336E90: nop

    // 0x80336E94: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80336E98: nop

    // 0x80336E9C: bc1f        L_80336EB8
    if (!c1cs) {
        // 0x80336EA0: nop
    
            goto L_80336EB8;
    }
    // 0x80336EA0: nop

    // 0x80336EA4: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80336EA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336EAC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336EB0: b           L_80336F60
    // 0x80336EB4: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
        goto L_80336F60;
    // 0x80336EB4: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
L_80336EB8:
    // 0x80336EB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336EBC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80336EC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336EC4: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80336EC8: nop

    // 0x80336ECC: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80336ED0: nop

    // 0x80336ED4: bc1f        L_80336EF0
    if (!c1cs) {
        // 0x80336ED8: nop
    
            goto L_80336EF0;
    }
    // 0x80336ED8: nop

    // 0x80336EDC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80336EE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336EE4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336EE8: b           L_80336F60
    // 0x80336EEC: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
        goto L_80336F60;
    // 0x80336EEC: swc1        $f16, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f16.u32l;
L_80336EF0:
    // 0x80336EF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336EF4: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80336EF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336EFC: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80336F00: nop

    // 0x80336F04: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80336F08: nop

    // 0x80336F0C: bc1f        L_80336F28
    if (!c1cs) {
        // 0x80336F10: nop
    
            goto L_80336F28;
    }
    // 0x80336F10: nop

    // 0x80336F14: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80336F18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336F1C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336F20: b           L_80336F60
    // 0x80336F24: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
        goto L_80336F60;
    // 0x80336F24: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
L_80336F28:
    // 0x80336F28: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336F2C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80336F30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336F34: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80336F38: nop

    // 0x80336F3C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80336F40: nop

    // 0x80336F44: bc1f        L_80336F60
    if (!c1cs) {
        // 0x80336F48: nop
    
            goto L_80336F60;
    }
    // 0x80336F48: nop

    // 0x80336F4C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80336F50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336F54: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336F58: nop

    // 0x80336F5C: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
L_80336F60:
    // 0x80336F60: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336F64: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80336F68: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80336F6C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336F70: nop

    // 0x80336F74: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80336F78: b           L_80336F80
    // 0x80336F7C: nop

        goto L_80336F80;
    // 0x80336F7C: nop

L_80336F80:
    // 0x80336F80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336F84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336F88: jr          $ra
    // 0x80336F8C: nop

    return;
    // 0x80336F8C: nop

;}
RECOMP_FUNC void func_8033253C_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033253C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332540: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332548: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033254C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332550: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033255C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332560: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332564: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332568: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033256C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332570: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332574: nop

    // 0x80332578: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033257C: nop

    // 0x80332580: bne         $t1, $zero, L_80332630
    if (ctx->r9 != 0) {
        // 0x80332584: nop
    
            goto L_80332630;
    }
    // 0x80332584: nop

    // 0x80332588: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033258C: nop

    // 0x80332590: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332594: nop

    // 0x80332598: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033259C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803325A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803325A4: nop

    // 0x803325A8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803325AC: nop

    // 0x803325B0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803325B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325B8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803325BC: addiu       $t7, $t7, -0x5DF0
    ctx->r15 = ADD32(ctx->r15, -0X5DF0);
    // 0x803325C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803325C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803325CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x803325D0: jal         0x8001C0EC
    // 0x803325D4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803325D4: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x803325D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803325DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803325E0: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x803325E4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x803325E8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803325EC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803325F0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803325F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803325F8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803325FC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332600: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
    // 0x80332604: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332608: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033260C: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80332610: nop

    // 0x80332614: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332618: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033261C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332620: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332624: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332628: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033262C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80332630:
    // 0x80332630: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332634: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332638: jal         0x8001B4AC
    // 0x8033263C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033263C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332640: beq         $v0, $zero, L_8033266C
    if (ctx->r2 == 0) {
        // 0x80332644: nop
    
            goto L_8033266C;
    }
    // 0x80332644: nop

    // 0x80332648: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033264C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80332650: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x80332654: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332658: nop

    // 0x8033265C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80332660: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332664: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80332668: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_8033266C:
    // 0x8033266C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332670: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332674: lh          $t1, 0xAC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XAC);
    // 0x80332678: lwc1        $f4, 0x24($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8033267C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332680: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332684: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332688: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033268C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332690: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332694: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80332698: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033269C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326A0: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x803326A4: lwc1        $f6, 0x2C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x803326A8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803326AC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803326B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803326B4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803326B8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803326BC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803326C0: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x803326C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803326C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326CC: lh          $t7, 0xAC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAC);
    // 0x803326D0: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803326D4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803326D8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803326DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803326E0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803326E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803326E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803326EC: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x803326F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803326F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803326F8: lh          $t8, 0xAC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XAC);
    // 0x803326FC: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80332700: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80332704: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332708: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033270C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80332710: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332714: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332718: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x8033271C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80332720: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332724: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80332728: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x8033272C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80332730: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332734: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332738: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033273C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332740: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332744: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80332748: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033274C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332750: lh          $t5, 0xAA($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XAA);
    // 0x80332754: lwc1        $f18, 0x24($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80332758: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033275C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332764: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332768: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033276C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332770: swc1        $f18, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f18.u32l;
    // 0x80332774: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332778: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033277C: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x80332780: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80332784: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80332788: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x8033278C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332790: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x80332794: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332798: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033279C: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x803327A0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803327A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327A8: lh          $t3, 0xAA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAA);
    // 0x803327AC: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803327B0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803327B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803327B8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803327BC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803327C0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803327C4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803327C8: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x803327CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803327D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327D4: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x803327D8: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803327DC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803327E0: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803327E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803327E8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803327EC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803327F0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803327F4: swc1        $f8, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f8.u32l;
    // 0x803327F8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803327FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332800: lh          $t9, 0xAA($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAA);
    // 0x80332804: lwc1        $f10, 0x44($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80332808: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033280C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332810: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332814: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332818: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033281C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332820: swc1        $f10, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f10.u32l;
    // 0x80332824: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332828: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033282C: lh          $t1, 0xBC($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XBC);
    // 0x80332830: lwc1        $f16, 0x24($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X24);
    // 0x80332834: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332838: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033283C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332840: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332844: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332848: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033284C: swc1        $f16, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f16.u32l;
    // 0x80332850: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80332854: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332858: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x8033285C: lwc1        $f18, 0x2C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80332860: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332864: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332868: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033286C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332870: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332874: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332878: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x8033287C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332880: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332884: lh          $t7, 0xBC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBC);
    // 0x80332888: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033288C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80332890: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80332894: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332898: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033289C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803328A0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803328A4: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x803328A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803328AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328B0: lh          $t8, 0xBC($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XBC);
    // 0x803328B4: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x803328B8: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x803328BC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803328C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803328C4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x803328C8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803328CC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803328D0: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x803328D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803328D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328DC: lh          $t4, 0xBC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBC);
    // 0x803328E0: lwc1        $f8, 0x44($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X44);
    // 0x803328E4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803328E8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803328EC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803328F0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803328F4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803328F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803328FC: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x80332900: b           L_80332908
    // 0x80332904: nop

        goto L_80332908;
    // 0x80332904: nop

L_80332908:
    // 0x80332908: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033290C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332910: jr          $ra
    // 0x80332914: nop

    return;
    // 0x80332914: nop

;}
RECOMP_FUNC void func_80333738_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333738: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033373C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333740: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333744: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333748: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033374C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333754: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333758: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033375C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333760: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333764: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333768: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033376C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333770: nop

    // 0x80333774: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333778: nop

    // 0x8033377C: bne         $t1, $zero, L_80333BA0
    if (ctx->r9 != 0) {
        // 0x80333780: nop
    
            goto L_80333BA0;
    }
    // 0x80333780: nop

    // 0x80333784: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333788: nop

    // 0x8033378C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333790: nop

    // 0x80333794: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333798: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033379C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803337A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803337A4: nop

    // 0x803337A8: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803337AC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803337B0: nop

    // 0x803337B4: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803337B8: nop

    // 0x803337BC: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x803337C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803337C4: nop

    // 0x803337C8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x803337CC: nop

    // 0x803337D0: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x803337D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803337D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803337DC: sh          $t9, 0xAE($t0)
    MEM_H(0XAE, ctx->r8) = ctx->r25;
    // 0x803337E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337E4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803337E8: addiu       $t1, $t1, -0x5DF0
    ctx->r9 = ADD32(ctx->r9, -0X5DF0);
    // 0x803337EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337F0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803337F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803337F8: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x803337FC: jal         0x8001C0EC
    // 0x80333800: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333800: addiu       $a3, $zero, 0xD3
    ctx->r7 = ADD32(0, 0XD3);
    after_0:
    // 0x80333804: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333808: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033380C: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80333810: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x80333814: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80333818: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033381C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333820: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333824: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333828: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033382C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80333830: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333834: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333838: lh          $t8, 0xAC($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAC);
    // 0x8033383C: nop

    // 0x80333840: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80333844: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333848: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033384C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333850: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333854: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333858: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033385C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333860: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333864: lh          $t0, 0xAC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAC);
    // 0x80333868: lwc1        $f8, 0x24($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8033386C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333870: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333874: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333878: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033387C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333880: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333884: swc1        $f8, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f8.u32l;
    // 0x80333888: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033388C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333890: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80333894: lwc1        $f10, 0x2C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80333898: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033389C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803338A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803338A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803338A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803338AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803338B0: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x803338B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803338B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803338BC: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x803338C0: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x803338C4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803338C8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803338CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803338D0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803338D4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803338D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803338DC: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x803338E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803338E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803338E8: lh          $t9, 0xAC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAC);
    // 0x803338EC: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x803338F0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803338F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803338F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803338FC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333900: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333904: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333908: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x8033390C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333910: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333914: lh          $t4, 0xAC($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XAC);
    // 0x80333918: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x8033391C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80333920: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80333924: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333928: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033392C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333930: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333934: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80333938: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033393C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333940: lh          $t5, 0xAA($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XAA);
    // 0x80333944: lwc1        $f6, 0x24($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80333948: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033394C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333950: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333954: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80333958: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033395C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333960: swc1        $f6, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f6.u32l;
    // 0x80333964: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333968: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033396C: lh          $t7, 0xAA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XAA);
    // 0x80333970: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80333974: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333978: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8033397C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333980: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333984: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333988: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033398C: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80333990: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333994: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333998: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x8033399C: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803339A0: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x803339A4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803339A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803339AC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x803339B0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803339B4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803339B8: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x803339BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803339C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339C4: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x803339C8: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803339CC: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803339D0: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803339D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803339D8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803339DC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803339E0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803339E4: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x803339E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803339EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339F0: lh          $t8, 0xAA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAA);
    // 0x803339F4: lwc1        $f18, 0x44($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X44);
    // 0x803339F8: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x803339FC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333A00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A04: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333A08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A0C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333A10: swc1        $f18, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f18.u32l;
    // 0x80333A14: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333A18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A1C: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80333A20: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80333A24: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80333A28: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80333A2C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333A30: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80333A34: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333A38: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333A3C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80333A40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A48: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x80333A4C: nop

    // 0x80333A50: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80333A54: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333A58: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333A5C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333A60: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333A64: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333A68: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80333A6C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333A70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A74: lh          $t8, 0xBC($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XBC);
    // 0x80333A78: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80333A7C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80333A80: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333A84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333A88: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80333A8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333A90: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333A94: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80333A98: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333A9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333AA0: lh          $t1, 0xBC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBC);
    // 0x80333AA4: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80333AA8: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80333AAC: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80333AB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333AB4: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80333AB8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333ABC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333AC0: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80333AC4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333AC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333ACC: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x80333AD0: lwc1        $f8, 0x1C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333AD4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333AD8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333ADC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333AE0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333AE4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333AE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333AEC: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80333AF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333AF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333AF8: lh          $t6, 0xBC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBC);
    // 0x80333AFC: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80333B00: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80333B04: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333B08: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333B0C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333B10: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333B14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333B18: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80333B1C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333B20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B24: lh          $t0, 0xBC($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XBC);
    // 0x80333B28: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80333B2C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333B30: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333B34: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333B38: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333B3C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333B40: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333B44: swc1        $f16, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f16.u32l;
    // 0x80333B48: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333B4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B50: lh          $t2, 0xBC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XBC);
    // 0x80333B54: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80333B58: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333B5C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333B60: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333B64: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333B68: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333B6C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333B70: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80333B74: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333B78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B7C: lh          $t6, 0xBC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XBC);
    // 0x80333B80: nop

    // 0x80333B84: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80333B88: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333B8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333B90: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333B94: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333B98: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333B9C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80333BA0:
    // 0x80333BA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333BA8: jal         0x8001B4AC
    // 0x80333BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80333BAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333BB0: beq         $v0, $zero, L_80333BDC
    if (ctx->r2 == 0) {
        // 0x80333BB4: nop
    
            goto L_80333BDC;
    }
    // 0x80333BB4: nop

    // 0x80333BB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333BBC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80333BC0: sh          $t7, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r15;
    // 0x80333BC4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333BC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80333BCC: sh          $t1, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r9;
    // 0x80333BD0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333BD4: nop

    // 0x80333BD8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80333BDC:
    // 0x80333BDC: b           L_80333BE4
    // 0x80333BE0: nop

        goto L_80333BE4;
    // 0x80333BE0: nop

L_80333BE4:
    // 0x80333BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333BE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333BEC: jr          $ra
    // 0x80333BF0: nop

    return;
    // 0x80333BF0: nop

;}
RECOMP_FUNC void func_803352A0_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803352A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803352A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803352A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803352AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803352B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803352B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803352B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803352BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803352C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803352C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803352C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803352CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803352D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803352D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803352D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803352DC: nop

    // 0x803352E0: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x803352E4: nop

    // 0x803352E8: bne         $t1, $zero, L_80335308
    if (ctx->r9 != 0) {
        // 0x803352EC: nop
    
            goto L_80335308;
    }
    // 0x803352EC: nop

    // 0x803352F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352F8: jal         0x8001BB34
    // 0x803352FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803352FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80335300: b           L_80335368
    // 0x80335304: nop

        goto L_80335368;
    // 0x80335304: nop

L_80335308:
    // 0x80335308: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033530C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80335310: lh          $t3, 0x1368($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X1368);
    // 0x80335314: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335318: bne         $t3, $at, L_80335338
    if (ctx->r11 != ctx->r1) {
        // 0x8033531C: nop
    
            goto L_80335338;
    }
    // 0x8033531C: nop

    // 0x80335320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335328: jal         0x8001BB34
    // 0x8033532C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033532C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335330: b           L_80335368
    // 0x80335334: nop

        goto L_80335368;
    // 0x80335334: nop

L_80335338:
    // 0x80335338: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033533C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80335340: lh          $s0, 0x1368($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X1368);
    // 0x80335344: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335348: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8033534C: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x80335350: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80335354: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80335358: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8033535C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335360: jal         0x8001BB34
    // 0x80335364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80335364: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_80335368:
    // 0x80335368: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033536C: nop

    // 0x80335370: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80335374: nop

    // 0x80335378: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033537C: sltiu       $at, $t9, 0xC
    ctx->r1 = ctx->r25 < 0XC ? 1 : 0;
    // 0x80335380: beq         $at, $zero, L_80335464
    if (ctx->r1 == 0) {
        // 0x80335384: nop
    
            goto L_80335464;
    }
    // 0x80335384: nop

    // 0x80335388: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033538C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80335390: addu        $at, $at, $t9
    gpr jr_addend_8033539C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80335394: lw          $t9, 0x7D8C($at)
    ctx->r25 = ADD32(ctx->r1, 0X7D8C);
    // 0x80335398: nop

    // 0x8033539C: jr          $t9
    // 0x803353A0: nop

    switch (jr_addend_8033539C >> 2) {
        case 0: goto L_803353A4; break;
        case 1: goto L_803353B4; break;
        case 2: goto L_803353C4; break;
        case 3: goto L_803353D4; break;
        case 4: goto L_803353E4; break;
        case 5: goto L_803353F4; break;
        case 6: goto L_80335404; break;
        case 7: goto L_80335414; break;
        case 8: goto L_80335424; break;
        case 9: goto L_80335434; break;
        case 10: goto L_80335444; break;
        case 11: goto L_80335454; break;
        default: switch_error(__func__, 0x8033539C, 0x80337D8C);
    }
    // 0x803353A0: nop

L_803353A4:
    // 0x803353A4: jal         0x80334748
    // 0x803353A8: nop

    func_80334748_unk_bin_13(rdram, ctx);
        goto after_3;
    // 0x803353A8: nop

    after_3:
    // 0x803353AC: b           L_8033546C
    // 0x803353B0: nop

        goto L_8033546C;
    // 0x803353B0: nop

L_803353B4:
    // 0x803353B4: jal         0x8033482C
    // 0x803353B8: nop

    func_8033482C_unk_bin_13(rdram, ctx);
        goto after_4;
    // 0x803353B8: nop

    after_4:
    // 0x803353BC: b           L_8033546C
    // 0x803353C0: nop

        goto L_8033546C;
    // 0x803353C0: nop

L_803353C4:
    // 0x803353C4: jal         0x80334910
    // 0x803353C8: nop

    func_80334910_unk_bin_13(rdram, ctx);
        goto after_5;
    // 0x803353C8: nop

    after_5:
    // 0x803353CC: b           L_8033546C
    // 0x803353D0: nop

        goto L_8033546C;
    // 0x803353D0: nop

L_803353D4:
    // 0x803353D4: jal         0x80334ABC
    // 0x803353D8: nop

    func_80334ABC_unk_bin_13(rdram, ctx);
        goto after_6;
    // 0x803353D8: nop

    after_6:
    // 0x803353DC: b           L_8033546C
    // 0x803353E0: nop

        goto L_8033546C;
    // 0x803353E0: nop

L_803353E4:
    // 0x803353E4: jal         0x80334B94
    // 0x803353E8: nop

    func_80334B94_unk_bin_13(rdram, ctx);
        goto after_7;
    // 0x803353E8: nop

    after_7:
    // 0x803353EC: b           L_8033546C
    // 0x803353F0: nop

        goto L_8033546C;
    // 0x803353F0: nop

L_803353F4:
    // 0x803353F4: jal         0x80334CC4
    // 0x803353F8: nop

    func_80334CC4_unk_bin_13(rdram, ctx);
        goto after_8;
    // 0x803353F8: nop

    after_8:
    // 0x803353FC: b           L_8033546C
    // 0x80335400: nop

        goto L_8033546C;
    // 0x80335400: nop

L_80335404:
    // 0x80335404: jal         0x80334D9C
    // 0x80335408: nop

    func_80334D9C_unk_bin_13(rdram, ctx);
        goto after_9;
    // 0x80335408: nop

    after_9:
    // 0x8033540C: b           L_8033546C
    // 0x80335410: nop

        goto L_8033546C;
    // 0x80335410: nop

L_80335414:
    // 0x80335414: jal         0x80334ECC
    // 0x80335418: nop

    func_80334ECC_unk_bin_13(rdram, ctx);
        goto after_10;
    // 0x80335418: nop

    after_10:
    // 0x8033541C: b           L_8033546C
    // 0x80335420: nop

        goto L_8033546C;
    // 0x80335420: nop

L_80335424:
    // 0x80335424: jal         0x80334F80
    // 0x80335428: nop

    func_80334F80_unk_bin_13(rdram, ctx);
        goto after_11;
    // 0x80335428: nop

    after_11:
    // 0x8033542C: b           L_8033546C
    // 0x80335430: nop

        goto L_8033546C;
    // 0x80335430: nop

L_80335434:
    // 0x80335434: jal         0x80335034
    // 0x80335438: nop

    func_80335034_unk_bin_13(rdram, ctx);
        goto after_12;
    // 0x80335438: nop

    after_12:
    // 0x8033543C: b           L_8033546C
    // 0x80335440: nop

        goto L_8033546C;
    // 0x80335440: nop

L_80335444:
    // 0x80335444: jal         0x803350E8
    // 0x80335448: nop

    func_803350E8_unk_bin_13(rdram, ctx);
        goto after_13;
    // 0x80335448: nop

    after_13:
    // 0x8033544C: b           L_8033546C
    // 0x80335450: nop

        goto L_8033546C;
    // 0x80335450: nop

L_80335454:
    // 0x80335454: jal         0x803351C4
    // 0x80335458: nop

    func_803351C4_unk_bin_13(rdram, ctx);
        goto after_14;
    // 0x80335458: nop

    after_14:
    // 0x8033545C: b           L_8033546C
    // 0x80335460: nop

        goto L_8033546C;
    // 0x80335460: nop

L_80335464:
    // 0x80335464: b           L_8033546C
    // 0x80335468: nop

        goto L_8033546C;
    // 0x80335468: nop

L_8033546C:
    // 0x8033546C: b           L_80335474
    // 0x80335470: nop

        goto L_80335474;
    // 0x80335470: nop

L_80335474:
    // 0x80335474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335478: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033547C: jr          $ra
    // 0x80335480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803372E8_unk_bin_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803372E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803372EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803372F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803372F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803372F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803372FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337300: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337304: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337308: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033730C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337310: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337314: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337318: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033731C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337320: nop

    // 0x80337324: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337328: nop

    // 0x8033732C: bne         $t1, $zero, L_803373A0
    if (ctx->r9 != 0) {
        // 0x80337330: nop
    
            goto L_803373A0;
    }
    // 0x80337330: nop

    // 0x80337334: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337338: nop

    // 0x8033733C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337340: nop

    // 0x80337344: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337348: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033734C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337350: nop

    // 0x80337354: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337358: nop

    // 0x8033735C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337360: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337364: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337368: addiu       $t7, $t7, -0x5B9C
    ctx->r15 = ADD32(ctx->r15, -0X5B9C);
    // 0x8033736C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337370: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337374: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80337378: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033737C: jal         0x8001C0EC
    // 0x80337380: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337380: addiu       $a3, $zero, 0xD9
    ctx->r7 = ADD32(0, 0XD9);
    after_0:
    // 0x80337384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033738C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337390: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80337394: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80337398: jal         0x800175F0
    // 0x8033739C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033739C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_803373A0:
    // 0x803373A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373A8: jal         0x8001B4AC
    // 0x803373AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803373AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x803373B0: beq         $v0, $zero, L_803373D0
    if (ctx->r2 == 0) {
        // 0x803373B4: nop
    
            goto L_803373D0;
    }
    // 0x803373B4: nop

    // 0x803373B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803373BC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x803373C0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803373C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803373C8: nop

    // 0x803373CC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803373D0:
    // 0x803373D0: b           L_803373D8
    // 0x803373D4: nop

        goto L_803373D8;
    // 0x803373D4: nop

L_803373D8:
    // 0x803373D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803373DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803373E0: jr          $ra
    // 0x803373E4: nop

    return;
    // 0x803373E4: nop

;}
RECOMP_FUNC void func_80336D80_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336D80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80336D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336D88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336D8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336D90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336D94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336D98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336D9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336DA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336DA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336DA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336DAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336DB0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80336DB4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80336DB8: nop

    // 0x80336DBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336DC0: nop

    // 0x80336DC4: bne         $t1, $zero, L_80336E20
    if (ctx->r9 != 0) {
        // 0x80336DC8: nop
    
            goto L_80336E20;
    }
    // 0x80336DC8: nop

    // 0x80336DCC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80336DD0: nop

    // 0x80336DD4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336DD8: nop

    // 0x80336DDC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336DE0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336DE4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80336DE8: nop

    // 0x80336DEC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336DF0: nop

    // 0x80336DF4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336DF8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80336DFC: nop

    // 0x80336E00: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80336E04: nop

    // 0x80336E08: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x80336E0C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80336E10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336E14: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80336E18: nop

    // 0x80336E1C: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
L_80336E20:
    // 0x80336E20: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80336E24: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80336E28: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80336E2C: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80336E30: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80336E34: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80336E38: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80336E3C: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80336E40: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80336E44: lwc1        $f8, 0x8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80336E48: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80336E4C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80336E50: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80336E54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336E58: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80336E5C: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x80336E60: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80336E64: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x80336E68: jal         0x800158B4
    // 0x80336E6C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    func_800158B4(rdram, ctx);
        goto after_0;
    // 0x80336E6C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80336E70: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80336E74: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80336E78: nop

    // 0x80336E7C: swc1        $f18, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f18.u32l;
    // 0x80336E80: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336E84: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80336E88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336E8C: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x80336E90: nop

    // 0x80336E94: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80336E98: nop

    // 0x80336E9C: bc1f        L_80336EE0
    if (!c1cs) {
        // 0x80336EA0: nop
    
            goto L_80336EE0;
    }
    // 0x80336EA0: nop

    // 0x80336EA4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336EA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336EAC: nop

    // 0x80336EB0: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80336EB4: nop

    // 0x80336EB8: bc1f        L_80336EE0
    if (!c1cs) {
        // 0x80336EBC: nop
    
            goto L_80336EE0;
    }
    // 0x80336EBC: nop

    // 0x80336EC0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80336EC4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336EC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336ECC: lwc1        $f16, 0x40($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X40);
    // 0x80336ED0: nop

    // 0x80336ED4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80336ED8: b           L_80336F3C
    // 0x80336EDC: swc1        $f18, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f18.u32l;
        goto L_80336F3C;
    // 0x80336EDC: swc1        $f18, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f18.u32l;
L_80336EE0:
    // 0x80336EE0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80336EE4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336EE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336EEC: lwc1        $f6, 0x40($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80336EF0: nop

    // 0x80336EF4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80336EF8: nop

    // 0x80336EFC: bc1f        L_80336F3C
    if (!c1cs) {
        // 0x80336F00: nop
    
            goto L_80336F3C;
    }
    // 0x80336F00: nop

    // 0x80336F04: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80336F08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336F0C: nop

    // 0x80336F10: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80336F14: nop

    // 0x80336F18: bc1f        L_80336F3C
    if (!c1cs) {
        // 0x80336F1C: nop
    
            goto L_80336F3C;
    }
    // 0x80336F1C: nop

    // 0x80336F20: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80336F24: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80336F28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336F2C: lwc1        $f16, 0x40($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80336F30: nop

    // 0x80336F34: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80336F38: swc1        $f18, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f18.u32l;
L_80336F3C:
    // 0x80336F3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F44: jal         0x80028FA0
    // 0x80336F48: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80336F48: nop

    after_1:
    // 0x80336F4C: beq         $v0, $zero, L_80336F84
    if (ctx->r2 == 0) {
        // 0x80336F50: nop
    
            goto L_80336F84;
    }
    // 0x80336F50: nop

    // 0x80336F54: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80336F58: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80336F5C: lh          $t8, 0x1316($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1316);
    // 0x80336F60: nop

    // 0x80336F64: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80336F68: sh          $t9, 0x1316($t7)
    MEM_H(0X1316, ctx->r15) = ctx->r25;
    // 0x80336F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F74: jal         0x8002B0E4
    // 0x80336F78: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x80336F78: nop

    after_2:
    // 0x80336F7C: b           L_8033715C
    // 0x80336F80: nop

        goto L_8033715C;
    // 0x80336F80: nop

L_80336F84:
    // 0x80336F84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F8C: jal         0x8002A8B4
    // 0x80336F90: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x80336F90: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_3:
    // 0x80336F94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F9C: jal         0x80029D8C
    // 0x80336FA0: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x80336FA0: nop

    after_4:
    // 0x80336FA4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FA8: nop

    // 0x80336FAC: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80336FB0: nop

    // 0x80336FB4: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x80336FB8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FBC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80336FC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336FC4: lwc1        $f8, 0x40($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X40);
    // 0x80336FC8: nop

    // 0x80336FCC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80336FD0: swc1        $f10, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f10.u32l;
    // 0x80336FD4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FD8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80336FDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336FE0: lwc1        $f16, 0x18($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X18);
    // 0x80336FE4: nop

    // 0x80336FE8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80336FEC: nop

    // 0x80336FF0: bc1f        L_80337014
    if (!c1cs) {
        // 0x80336FF4: nop
    
            goto L_80337014;
    }
    // 0x80336FF4: nop

    // 0x80336FF8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80336FFC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80337000: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80337004: lwc1        $f4, 0x18($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X18);
    // 0x80337008: nop

    // 0x8033700C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80337010: swc1        $f8, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f8.u32l;
L_80337014:
    // 0x80337014: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337018: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x8033701C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80337020: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80337024: nop

    // 0x80337028: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033702C: nop

    // 0x80337030: bc1t        L_80337088
    if (c1cs) {
        // 0x80337034: nop
    
            goto L_80337088;
    }
    // 0x80337034: nop

    // 0x80337038: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x8033703C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337040: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x80337044: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80337048: nop

    // 0x8033704C: bc1f        L_80337058
    if (!c1cs) {
        // 0x80337050: nop
    
            goto L_80337058;
    }
    // 0x80337050: nop

    // 0x80337054: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_80337058:
    // 0x80337058: bne         $t6, $zero, L_80337088
    if (ctx->r14 != 0) {
        // 0x8033705C: nop
    
            goto L_80337088;
    }
    // 0x8033705C: nop

    // 0x80337060: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x80337064: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80337068: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033706C: nop

    // 0x80337070: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80337074: nop

    // 0x80337078: bc1t        L_80337088
    if (c1cs) {
        // 0x8033707C: nop
    
            goto L_80337088;
    }
    // 0x8033707C: nop

    // 0x80337080: beq         $t6, $zero, L_80337090
    if (ctx->r14 == 0) {
        // 0x80337084: nop
    
            goto L_80337090;
    }
    // 0x80337084: nop

L_80337088:
    // 0x80337088: b           L_80337154
    // 0x8033708C: nop

        goto L_80337154;
    // 0x8033708C: nop

L_80337090:
    // 0x80337090: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80337094: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337098: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033709C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803370A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803370A4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803370A8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x803370AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803370B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803370B4: jal         0x800295C0
    // 0x803370B8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x803370B8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x803370BC: beq         $v0, $zero, L_803370F4
    if (ctx->r2 == 0) {
        // 0x803370C0: nop
    
            goto L_803370F4;
    }
    // 0x803370C0: nop

    // 0x803370C4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803370C8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803370CC: lh          $t8, 0x1316($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X1316);
    // 0x803370D0: nop

    // 0x803370D4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803370D8: sh          $t9, 0x1316($t5)
    MEM_H(0X1316, ctx->r13) = ctx->r25;
    // 0x803370DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803370E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803370E4: jal         0x8002B0E4
    // 0x803370E8: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x803370E8: nop

    after_6:
    // 0x803370EC: b           L_8033715C
    // 0x803370F0: nop

        goto L_8033715C;
    // 0x803370F0: nop

L_803370F4:
    // 0x803370F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803370F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803370FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337104: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80337108: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033710C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80337110: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80337114: jal         0x80029018
    // 0x80337118: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x80337118: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x8033711C: beq         $v0, $zero, L_80337154
    if (ctx->r2 == 0) {
        // 0x80337120: nop
    
            goto L_80337154;
    }
    // 0x80337120: nop

    // 0x80337124: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80337128: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033712C: lh          $t0, 0x1316($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X1316);
    // 0x80337130: nop

    // 0x80337134: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80337138: sh          $t1, 0x1316($t7)
    MEM_H(0X1316, ctx->r15) = ctx->r9;
    // 0x8033713C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337140: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337144: jal         0x8002B0E4
    // 0x80337148: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x80337148: nop

    after_8:
    // 0x8033714C: b           L_8033715C
    // 0x80337150: nop

        goto L_8033715C;
    // 0x80337150: nop

L_80337154:
    // 0x80337154: b           L_8033715C
    // 0x80337158: nop

        goto L_8033715C;
    // 0x80337158: nop

L_8033715C:
    // 0x8033715C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337160: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80337164: jr          $ra
    // 0x80337168: nop

    return;
    // 0x80337168: nop

;}
RECOMP_FUNC void func_80339EB8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339EB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339EC0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339EC4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339EC8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339ECC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339ED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339ED4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339EDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339EE0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339EE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339EE8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339EEC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339EF0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80339EF4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80339EF8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80339EFC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80339F00: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339F04: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339F08: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339F0C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339F10: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80339F14: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80339F18: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339F1C: nop

    // 0x80339F20: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339F24: nop

    // 0x80339F28: bne         $t6, $zero, L_80339FC0
    if (ctx->r14 != 0) {
        // 0x80339F2C: nop
    
            goto L_80339FC0;
    }
    // 0x80339F2C: nop

    // 0x80339F30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80339F34: nop

    // 0x80339F38: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80339F3C: nop

    // 0x80339F40: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80339F44: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80339F48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339F4C: nop

    // 0x80339F50: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80339F54: nop

    // 0x80339F58: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80339F5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339F60: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80339F64: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80339F68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F6C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80339F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339F74: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80339F78: jal         0x8001C0EC
    // 0x80339F7C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339F7C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80339F80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339F84: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339F88: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339F8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F90: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80339F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339F98: jal         0x8001ABF4
    // 0x80339F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80339F9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80339FA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339FA4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339FA8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339FAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339FB0: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80339FB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80339FB8: jal         0x8001ABF4
    // 0x80339FBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80339FBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80339FC0:
    // 0x80339FC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339FC8: jal         0x8001B62C
    // 0x80339FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x80339FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80339FD0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80339FD4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339FD8: nop

    // 0x80339FDC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80339FE0: nop

    // 0x80339FE4: bc1f        L_8033A004
    if (!c1cs) {
        // 0x80339FE8: nop
    
            goto L_8033A004;
    }
    // 0x80339FE8: nop

    // 0x80339FEC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339FF0: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x80339FF4: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80339FF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339FFC: nop

    // 0x8033A000: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A004:
    // 0x8033A004: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8033A008: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A00C: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033A010: nop

    // 0x8033A014: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x8033A018: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033A01C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033A020: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033A024: nop

    // 0x8033A028: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x8033A02C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8033A030: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A034: lwc1        $f10, 0x24($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X24);
    // 0x8033A038: nop

    // 0x8033A03C: swc1        $f10, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f10.u32l;
    // 0x8033A040: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8033A044: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033A048: lwc1        $f16, 0x2C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033A04C: nop

    // 0x8033A050: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x8033A054: b           L_8033A05C
    // 0x8033A058: nop

        goto L_8033A05C;
    // 0x8033A058: nop

L_8033A05C:
    // 0x8033A05C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A064: jr          $ra
    // 0x8033A068: nop

    return;
    // 0x8033A068: nop

;}
RECOMP_FUNC void func_8033B27C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B27C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B280: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B284: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B288: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B28C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B290: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B294: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B298: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B29C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B2A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B2A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B2A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B2AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B2B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2B4: nop

    // 0x8033B2B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B2BC: nop

    // 0x8033B2C0: bne         $t1, $zero, L_8033B370
    if (ctx->r9 != 0) {
        // 0x8033B2C4: nop
    
            goto L_8033B370;
    }
    // 0x8033B2C4: nop

    // 0x8033B2C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2CC: nop

    // 0x8033B2D0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B2D4: nop

    // 0x8033B2D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B2DC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B2E0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2E4: nop

    // 0x8033B2E8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B2EC: nop

    // 0x8033B2F0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B2F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B2F8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B2FC: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033B300: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B304: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B30C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x8033B310: jal         0x8001C0EC
    // 0x8033B314: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B314: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033B318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B31C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B320: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B324: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B328: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B32C: jal         0x8001ABF4
    // 0x8033B330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033B330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033B334: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B338: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B33C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B340: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B344: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033B348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033B34C: jal         0x8001ABF4
    // 0x8033B350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033B350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033B354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B35C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B360: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x8033B364: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B368: jal         0x800175F0
    // 0x8033B36C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x8033B36C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_8033B370:
    // 0x8033B370: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033B374: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B378: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B37C: nop

    // 0x8033B380: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x8033B384: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B38C: jal         0x8002A8B4
    // 0x8033B390: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x8033B390: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x8033B394: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B398: nop

    // 0x8033B39C: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x8033B3A0: nop

    // 0x8033B3A4: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x8033B3A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B3AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B3B0: jal         0x80029C40
    // 0x8033B3B4: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x8033B3B4: nop

    after_5:
    // 0x8033B3B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B3BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B3C0: jal         0x8033E904
    // 0x8033B3C4: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x8033B3C4: nop

    after_6:
    // 0x8033B3C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B3CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B3D0: jal         0x8001B4AC
    // 0x8033B3D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x8033B3D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8033B3D8: beq         $v0, $zero, L_8033B3F8
    if (ctx->r2 == 0) {
        // 0x8033B3DC: nop
    
            goto L_8033B3F8;
    }
    // 0x8033B3DC: nop

    // 0x8033B3E0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B3E4: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x8033B3E8: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033B3EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B3F0: nop

    // 0x8033B3F4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033B3F8:
    // 0x8033B3F8: b           L_8033B400
    // 0x8033B3FC: nop

        goto L_8033B400;
    // 0x8033B3FC: nop

L_8033B400:
    // 0x8033B400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B408: jr          $ra
    // 0x8033B40C: nop

    return;
    // 0x8033B40C: nop

;}
RECOMP_FUNC void func_80338DC8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338DC8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80338DCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338DD0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338DD4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338DD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338DDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338DE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338DE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338DE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338DEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338DF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338DF4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80338DF8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80338DFC: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_80338E00:
    // 0x80338E00: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80338E04: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80338E08: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80338E0C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338E10: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338E14: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338E18: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338E1C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80338E20: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x80338E24: nop

    // 0x80338E28: beq         $t3, $zero, L_80338ED8
    if (ctx->r11 == 0) {
        // 0x80338E2C: nop
    
            goto L_80338ED8;
    }
    // 0x80338E2C: nop

    // 0x80338E30: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80338E34: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x80338E38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80338E3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338E40: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338E44: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338E48: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338E4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338E50: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80338E54: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80338E58: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80338E5C: nop

    // 0x80338E60: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80338E64: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80338E68: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80338E6C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80338E70: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338E74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338E78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338E7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338E80: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338E84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338E88: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338E8C: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80338E90: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80338E94: nop

    // 0x80338E98: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80338E9C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80338EA0: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80338EA4: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80338EA8: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80338EAC: nop

    // 0x80338EB0: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80338EB4: nop

    // 0x80338EB8: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80338EBC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80338EC0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80338EC4: nop

    // 0x80338EC8: bc1f        L_80338ED8
    if (!c1cs) {
        // 0x80338ECC: nop
    
            goto L_80338ED8;
    }
    // 0x80338ECC: nop

    // 0x80338ED0: b           L_80338F00
    // 0x80338ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80338F00;
    // 0x80338ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80338ED8:
    // 0x80338ED8: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80338EDC: nop

    // 0x80338EE0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80338EE4: slti        $at, $t1, 0xE
    ctx->r1 = SIGNED(ctx->r9) < 0XE ? 1 : 0;
    // 0x80338EE8: bne         $at, $zero, L_80338E00
    if (ctx->r1 != 0) {
        // 0x80338EEC: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_80338E00;
    }
    // 0x80338EEC: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x80338EF0: b           L_80338F00
    // 0x80338EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80338F00;
    // 0x80338EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80338EF8: b           L_80338F00
    // 0x80338EFC: nop

        goto L_80338F00;
    // 0x80338EFC: nop

L_80338F00:
    // 0x80338F00: jr          $ra
    // 0x80338F04: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80338F04: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80335530_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335530: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033553C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033554C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033555C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335560: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80335564: nop

    // 0x80335568: lh          $t1, 0x104($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X104);
    // 0x8033556C: nop

    // 0x80335570: bne         $t1, $zero, L_80335650
    if (ctx->r9 != 0) {
        // 0x80335574: nop
    
            goto L_80335650;
    }
    // 0x80335574: nop

    // 0x80335578: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033557C: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x80335580: nop

    // 0x80335584: bne         $t2, $zero, L_80335594
    if (ctx->r10 != 0) {
        // 0x80335588: nop
    
            goto L_80335594;
    }
    // 0x80335588: nop

    // 0x8033558C: b           L_80335650
    // 0x80335590: nop

        goto L_80335650;
    // 0x80335590: nop

L_80335594:
    // 0x80335594: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80335598: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x8033559C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803355A0: bne         $t3, $at, L_803355B0
    if (ctx->r11 != ctx->r1) {
        // 0x803355A4: nop
    
            goto L_803355B0;
    }
    // 0x803355A4: nop

    // 0x803355A8: b           L_80335650
    // 0x803355AC: nop

        goto L_80335650;
    // 0x803355AC: nop

L_803355B0:
    // 0x803355B0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803355B4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803355B8: lh          $t5, 0x1322($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X1322);
    // 0x803355BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803355C0: beq         $t5, $at, L_80335650
    if (ctx->r13 == ctx->r1) {
        // 0x803355C4: nop
    
            goto L_80335650;
    }
    // 0x803355C4: nop

    // 0x803355C8: lh          $t6, 0x1306($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X1306);
    // 0x803355CC: nop

    // 0x803355D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803355D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803355DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803355E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803355E4: addu        $t8, $t7, $t4
    ctx->r24 = ADD32(ctx->r15, ctx->r12);
    // 0x803355E8: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x803355EC: nop

    // 0x803355F0: beq         $t9, $zero, L_80335650
    if (ctx->r25 == 0) {
        // 0x803355F4: nop
    
            goto L_80335650;
    }
    // 0x803355F4: nop

    // 0x803355F8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803355FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335600: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x80335604: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x80335608: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033560C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335610: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335614: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335618: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033561C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335620: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80335624: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80335628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033562C: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x80335630: nop

    // 0x80335634: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033563C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335644: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335648: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033564C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80335650:
    // 0x80335650: b           L_80335658
    // 0x80335654: nop

        goto L_80335658;
    // 0x80335654: nop

L_80335658:
    // 0x80335658: jr          $ra
    // 0x8033565C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033565C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033EAAC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EAAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033EAB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033EAB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033EAB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033EABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033EAC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033EAC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EAC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033EACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EAD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033EAD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033EAD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033EADC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033EAE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033EAE4: nop

    // 0x8033EAE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033EAEC: nop

    // 0x8033EAF0: bne         $t1, $zero, L_8033EB5C
    if (ctx->r9 != 0) {
        // 0x8033EAF4: nop
    
            goto L_8033EB5C;
    }
    // 0x8033EAF4: nop

    // 0x8033EAF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033EAFC: nop

    // 0x8033EB00: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033EB04: nop

    // 0x8033EB08: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033EB0C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033EB10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EB14: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8033EB18: addiu       $t5, $t5, -0x5428
    ctx->r13 = ADD32(ctx->r13, -0X5428);
    // 0x8033EB1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EB20: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033EB24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033EB28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033EB2C: jal         0x8001C0EC
    // 0x8033EB30: addiu       $a3, $zero, 0xEB
    ctx->r7 = ADD32(0, 0XEB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033EB30: addiu       $a3, $zero, 0xEB
    ctx->r7 = ADD32(0, 0XEB);
    after_0:
    // 0x8033EB34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EB38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EB3C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033EB40: addiu       $a3, $a3, -0x53F8
    ctx->r7 = ADD32(ctx->r7, -0X53F8);
    // 0x8033EB44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033EB48: jal         0x8001ABF4
    // 0x8033EB4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033EB4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033EB50: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033EB54: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8033EB58: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_8033EB5C:
    // 0x8033EB5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033EB60: nop

    // 0x8033EB64: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x8033EB68: nop

    // 0x8033EB6C: bne         $t9, $zero, L_8033EB8C
    if (ctx->r25 != 0) {
        // 0x8033EB70: nop
    
            goto L_8033EB8C;
    }
    // 0x8033EB70: nop

    // 0x8033EB74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EB78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EB7C: jal         0x8002B114
    // 0x8033EB80: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033EB80: nop

    after_2:
    // 0x8033EB84: b           L_8033EBA4
    // 0x8033EB88: nop

        goto L_8033EBA4;
    // 0x8033EB88: nop

L_8033EB8C:
    // 0x8033EB8C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033EB90: nop

    // 0x8033EB94: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033EB98: nop

    // 0x8033EB9C: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8033EBA0: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_8033EBA4:
    // 0x8033EBA4: b           L_8033EBAC
    // 0x8033EBA8: nop

        goto L_8033EBAC;
    // 0x8033EBA8: nop

L_8033EBAC:
    // 0x8033EBAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EBB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033EBB4: jr          $ra
    // 0x8033EBB8: nop

    return;
    // 0x8033EBB8: nop

;}
RECOMP_FUNC void func_803313A8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803313AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803313B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803313B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803313B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803313BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803313C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803313C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803313C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803313D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803313D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803313D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803313DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803313E0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803313E4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803313E8: nop

    // 0x803313EC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803313F0: nop

    // 0x803313F4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x803313F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803313FC: nop

    // 0x80331400: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331404: nop

    // 0x80331408: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8033140C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331410: nop

    // 0x80331414: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331418: nop

    // 0x8033141C: bne         $t5, $zero, L_803314C0
    if (ctx->r13 != 0) {
        // 0x80331420: nop
    
            goto L_803314C0;
    }
    // 0x80331420: nop

    // 0x80331424: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331428: nop

    // 0x8033142C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331430: nop

    // 0x80331434: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331438: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x8033143C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331440: nop

    // 0x80331444: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331448: nop

    // 0x8033144C: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80331450: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80331454: nop

    // 0x80331458: sh          $zero, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = 0;
    // 0x8033145C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331460: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80331464: addiu       $t2, $t2, -0x57BC
    ctx->r10 = ADD32(ctx->r10, -0X57BC);
    // 0x80331468: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033146C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331474: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80331478: jal         0x8001C0EC
    // 0x8033147C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033147C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80331480: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331484: addiu       $t3, $t3, -0x5A70
    ctx->r11 = ADD32(ctx->r11, -0X5A70);
    // 0x80331488: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033148C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331494: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80331498: jal         0x8001C0EC
    // 0x8033149C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033149C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x803314A0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803314A4: addiu       $t4, $t4, -0x5A10
    ctx->r12 = ADD32(ctx->r12, -0X5A10);
    // 0x803314A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803314AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803314B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314B4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803314B8: jal         0x8001C0EC
    // 0x803314BC: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803314BC: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
L_803314C0:
    // 0x803314C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314C8: jal         0x80334F08
    // 0x803314CC: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x803314CC: nop

    after_3:
    // 0x803314D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314D8: jal         0x803350CC
    // 0x803314DC: nop

    func_803350CC_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x803314DC: nop

    after_4:
    // 0x803314E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314E8: jal         0x80334798
    // 0x803314EC: nop

    func_80334798_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x803314EC: nop

    after_5:
    // 0x803314F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803314F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803314F8: jal         0x8001B4AC
    // 0x803314FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x803314FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80331500: beq         $v0, $zero, L_80331684
    if (ctx->r2 == 0) {
        // 0x80331504: nop
    
            goto L_80331684;
    }
    // 0x80331504: nop

    // 0x80331508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033150C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331510: jal         0x8002A2EC
    // 0x80331514: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x80331514: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_7:
    // 0x80331518: beq         $v0, $zero, L_803315B8
    if (ctx->r2 == 0) {
        // 0x8033151C: nop
    
            goto L_803315B8;
    }
    // 0x8033151C: nop

    // 0x80331520: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331524: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80331528: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033152C: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80331530: nop

    // 0x80331534: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80331538: nop

    // 0x8033153C: bc1f        L_8033155C
    if (!c1cs) {
        // 0x80331540: nop
    
            goto L_8033155C;
    }
    // 0x80331540: nop

    // 0x80331544: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331548: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8033154C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80331550: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80331554: b           L_803315B0
    // 0x80331558: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_803315B0;
    // 0x80331558: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033155C:
    // 0x8033155C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80331560: nop

    // 0x80331564: lh          $t9, 0xB6($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XB6);
    // 0x80331568: nop

    // 0x8033156C: bne         $t9, $zero, L_80331598
    if (ctx->r25 != 0) {
        // 0x80331570: nop
    
            goto L_80331598;
    }
    // 0x80331570: nop

    // 0x80331574: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80331578: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8033157C: sh          $t1, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r9;
    // 0x80331580: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80331584: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x80331588: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033158C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331590: b           L_803315B0
    // 0x80331594: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_803315B0;
    // 0x80331594: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80331598:
    // 0x80331598: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033159C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x803315A0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x803315A4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803315A8: nop

    // 0x803315AC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803315B0:
    // 0x803315B0: b           L_80331644
    // 0x803315B4: nop

        goto L_80331644;
    // 0x803315B4: nop

L_803315B8:
    // 0x803315B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803315BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803315C0: jal         0x8002A2EC
    // 0x803315C4: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_8;
    // 0x803315C4: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_8:
    // 0x803315C8: beq         $v0, $zero, L_8033162C
    if (ctx->r2 == 0) {
        // 0x803315CC: nop
    
            goto L_8033162C;
    }
    // 0x803315CC: nop

    // 0x803315D0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803315D4: nop

    // 0x803315D8: lh          $t9, 0xB6($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XB6);
    // 0x803315DC: nop

    // 0x803315E0: bne         $t9, $zero, L_8033160C
    if (ctx->r25 != 0) {
        // 0x803315E4: nop
    
            goto L_8033160C;
    }
    // 0x803315E4: nop

    // 0x803315E8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803315EC: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x803315F0: sh          $t1, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r9;
    // 0x803315F4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803315F8: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x803315FC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80331600: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80331604: b           L_80331624
    // 0x80331608: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80331624;
    // 0x80331608: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033160C:
    // 0x8033160C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80331610: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80331614: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80331618: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033161C: nop

    // 0x80331620: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80331624:
    // 0x80331624: b           L_80331644
    // 0x80331628: nop

        goto L_80331644;
    // 0x80331628: nop

L_8033162C:
    // 0x8033162C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80331630: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80331634: sh          $t0, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r8;
    // 0x80331638: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033163C: nop

    // 0x80331640: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331644:
    // 0x80331644: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80331648: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033164C: nop

    // 0x80331650: swc1        $f8, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f8.u32l;
    // 0x80331654: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80331658: nop

    // 0x8033165C: lwc1        $f20, 0x44($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80331660: nop

    // 0x80331664: swc1        $f20, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f20.u32l;
    // 0x80331668: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033166C: nop

    // 0x80331670: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
    // 0x80331674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033167C: jal         0x80335498
    // 0x80331680: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x80331680: nop

    after_9:
L_80331684:
    // 0x80331684: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331688: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033168C: jal         0x80334B78
    // 0x80331690: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x80331690: nop

    after_10:
    // 0x80331694: b           L_8033169C
    // 0x80331698: nop

        goto L_8033169C;
    // 0x80331698: nop

L_8033169C:
    // 0x8033169C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803316A0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803316A4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803316A8: jr          $ra
    // 0x803316AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803316AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80339D18_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339D18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339D1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339D20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339D24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339D28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339D2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339D30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339D34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339D38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339D3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339D40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339D44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339D48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339D4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339D50: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80339D54: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80339D58: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80339D5C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80339D60: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339D64: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339D68: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339D6C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339D70: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80339D74: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80339D78: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339D7C: nop

    // 0x80339D80: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339D84: nop

    // 0x80339D88: bne         $t6, $zero, L_80339E20
    if (ctx->r14 != 0) {
        // 0x80339D8C: nop
    
            goto L_80339E20;
    }
    // 0x80339D8C: nop

    // 0x80339D90: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80339D94: nop

    // 0x80339D98: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80339D9C: nop

    // 0x80339DA0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80339DA4: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80339DA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339DAC: nop

    // 0x80339DB0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80339DB4: nop

    // 0x80339DB8: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80339DBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339DC0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80339DC4: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80339DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339DCC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80339DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339DD4: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80339DD8: jal         0x8001C0EC
    // 0x80339DDC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339DDC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80339DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339DE4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339DE8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339DEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339DF0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80339DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339DF8: jal         0x8001ABF4
    // 0x80339DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80339DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80339E00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339E04: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339E08: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339E0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E10: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x80339E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80339E18: jal         0x8001ABF4
    // 0x80339E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80339E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_80339E20:
    // 0x80339E20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339E24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339E28: jal         0x8001B4AC
    // 0x80339E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x80339E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80339E30: beq         $v0, $zero, L_80339E50
    if (ctx->r2 == 0) {
        // 0x80339E34: nop
    
            goto L_80339E50;
    }
    // 0x80339E34: nop

    // 0x80339E38: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339E3C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80339E40: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80339E44: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339E48: nop

    // 0x80339E4C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80339E50:
    // 0x80339E50: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80339E54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339E58: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80339E5C: nop

    // 0x80339E60: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339E64: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80339E68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80339E6C: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80339E70: nop

    // 0x80339E74: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80339E78: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80339E7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339E80: lwc1        $f8, 0x24($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X24);
    // 0x80339E84: nop

    // 0x80339E88: swc1        $f8, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f8.u32l;
    // 0x80339E8C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80339E90: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80339E94: lwc1        $f10, 0x2C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80339E98: nop

    // 0x80339E9C: swc1        $f10, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f10.u32l;
    // 0x80339EA0: b           L_80339EA8
    // 0x80339EA4: nop

        goto L_80339EA8;
    // 0x80339EA4: nop

L_80339EA8:
    // 0x80339EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339EAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339EB0: jr          $ra
    // 0x80339EB4: nop

    return;
    // 0x80339EB4: nop

;}
RECOMP_FUNC void func_8033A1C4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A1C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033A1C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033A1CC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033A1D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033A1D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A1D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A1DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A1E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A1E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A1E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A1EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A1F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A1F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A1F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A1FC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033A200: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A204: nop

    // 0x8033A208: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A20C: nop

    // 0x8033A210: bne         $t1, $zero, L_8033A30C
    if (ctx->r9 != 0) {
        // 0x8033A214: nop
    
            goto L_8033A30C;
    }
    // 0x8033A214: nop

    // 0x8033A218: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A21C: nop

    // 0x8033A220: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A224: nop

    // 0x8033A228: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A22C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A230: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A234: nop

    // 0x8033A238: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A23C: nop

    // 0x8033A240: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A248: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A24C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033A250: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A254: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A258: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A25C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A260: jal         0x8001C0EC
    // 0x8033A264: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A264: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033A268: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x8033A26C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A270: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A274: nop

    // 0x8033A278: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x8033A27C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A280: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A284: nop

    // 0x8033A288: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
    // 0x8033A28C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033A290: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A294: nop

    // 0x8033A298: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x8033A29C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033A2A0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A2A4: nop

    // 0x8033A2A8: swc1        $f10, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f10.u32l;
    // 0x8033A2AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033A2B0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A2B4: nop

    // 0x8033A2B8: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x8033A2BC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A2C0: nop

    // 0x8033A2C4: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033A2C8: nop

    // 0x8033A2CC: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x8033A2D0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A2D4: nop

    // 0x8033A2D8: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x8033A2DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A2E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A2E4: nop

    // 0x8033A2E8: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
    // 0x8033A2EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033A2F0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A2F4: nop

    // 0x8033A2F8: swc1        $f4, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f4.u32l;
    // 0x8033A2FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A300: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A304: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033A308: sh          $t7, 0x1322($t8)
    MEM_H(0X1322, ctx->r24) = ctx->r15;
L_8033A30C:
    // 0x8033A30C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A314: jal         0x8001B4AC
    // 0x8033A318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033A31C: beq         $v0, $zero, L_8033A334
    if (ctx->r2 == 0) {
        // 0x8033A320: nop
    
            goto L_8033A334;
    }
    // 0x8033A320: nop

    // 0x8033A324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A328: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A32C: jal         0x8001BBDC
    // 0x8033A330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033A330: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_8033A334:
    // 0x8033A334: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A338: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A33C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033A340: nop

    // 0x8033A344: bne         $t0, $at, L_8033A374
    if (ctx->r8 != ctx->r1) {
        // 0x8033A348: nop
    
            goto L_8033A374;
    }
    // 0x8033A348: nop

    // 0x8033A34C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A350: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x8033A354: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033A358: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033A35C: nop

    // 0x8033A360: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8033A364: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A368: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A36C: jal         0x8001BBDC
    // 0x8033A370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x8033A370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_8033A374:
    // 0x8033A374: b           L_8033A37C
    // 0x8033A378: nop

        goto L_8033A37C;
    // 0x8033A378: nop

L_8033A37C:
    // 0x8033A37C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033A380: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033A384: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033A388: jr          $ra
    // 0x8033A38C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033A38C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033E904_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033E904: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033E908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033E90C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8033E910: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8033E914: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033E918: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033E91C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E920: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E924: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E928: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E92C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033E930: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033E934: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033E938: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033E93C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033E940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E948: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033E94C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033E950: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033E954: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033E958: jal         0x80029018
    // 0x8033E95C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_0;
    // 0x8033E95C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8033E960: beq         $v0, $zero, L_8033E9AC
    if (ctx->r2 == 0) {
        // 0x8033E964: nop
    
            goto L_8033E9AC;
    }
    // 0x8033E964: nop

    // 0x8033E968: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033E96C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E970: nop

    // 0x8033E974: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
    // 0x8033E978: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E97C: nop

    // 0x8033E980: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8033E984: nop

    // 0x8033E988: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
    // 0x8033E98C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033E990: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E994: nop

    // 0x8033E998: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x8033E99C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E9A0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033E9A4: b           L_8033E9FC
    // 0x8033E9A8: sh          $t3, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = ctx->r11;
        goto L_8033E9FC;
    // 0x8033E9A8: sh          $t3, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = ctx->r11;
L_8033E9AC:
    // 0x8033E9AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033E9B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033E9B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E9B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E9BC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033E9C0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033E9C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033E9C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033E9CC: jal         0x800295C0
    // 0x8033E9D0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x8033E9D0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8033E9D4: beq         $v0, $zero, L_8033E9EC
    if (ctx->r2 == 0) {
        // 0x8033E9D8: nop
    
            goto L_8033E9EC;
    }
    // 0x8033E9D8: nop

    // 0x8033E9DC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033E9E0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E9E4: b           L_8033E9FC
    // 0x8033E9E8: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
        goto L_8033E9FC;
    // 0x8033E9E8: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
L_8033E9EC:
    // 0x8033E9EC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033E9F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E9F4: nop

    // 0x8033E9F8: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
L_8033E9FC:
    // 0x8033E9FC: b           L_8033EA04
    // 0x8033EA00: nop

        goto L_8033EA04;
    // 0x8033EA00: nop

L_8033EA04:
    // 0x8033EA04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EA08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033EA0C: jr          $ra
    // 0x8033EA10: nop

    return;
    // 0x8033EA10: nop

;}
RECOMP_FUNC void func_8033ABAC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ABAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033ABB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033ABB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ABB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ABBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033ABC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ABC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ABC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ABCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ABD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ABD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033ABD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033ABDC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033ABE0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ABE4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033ABE8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033ABEC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033ABF0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033ABF4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033ABF8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033ABFC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033AC00: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033AC04: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033AC08: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033AC0C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC10: nop

    // 0x8033AC14: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033AC18: nop

    // 0x8033AC1C: bne         $t6, $zero, L_8033ACE0
    if (ctx->r14 != 0) {
        // 0x8033AC20: nop
    
            goto L_8033ACE0;
    }
    // 0x8033AC20: nop

    // 0x8033AC24: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC28: nop

    // 0x8033AC2C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033AC30: nop

    // 0x8033AC34: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033AC38: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033AC3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AC40: nop

    // 0x8033AC44: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033AC48: nop

    // 0x8033AC4C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033AC50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC58: jal         0x8001BBDC
    // 0x8033AC5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8033AC5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033AC60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC64: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033AC68: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033AC6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC70: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033AC74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AC78: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8033AC7C: jal         0x8001C0EC
    // 0x8033AC80: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033AC80: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_1:
    // 0x8033AC84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC88: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033AC8C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033AC90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC94: addiu       $a3, $a3, 0x150
    ctx->r7 = ADD32(ctx->r7, 0X150);
    // 0x8033AC98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AC9C: jal         0x8001ABF4
    // 0x8033ACA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033ACA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033ACA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ACA8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033ACAC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033ACB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ACB4: addiu       $a3, $a3, 0x16C
    ctx->r7 = ADD32(ctx->r7, 0X16C);
    // 0x8033ACB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033ACBC: jal         0x8001ABF4
    // 0x8033ACC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033ACC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8033ACC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ACC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ACCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033ACD0: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8033ACD4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033ACD8: jal         0x800175F0
    // 0x8033ACDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8033ACDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_8033ACE0:
    // 0x8033ACE0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033ACE4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ACE8: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033ACEC: nop

    // 0x8033ACF0: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x8033ACF4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8033ACF8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ACFC: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8033AD00: nop

    // 0x8033AD04: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8033AD08: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033AD0C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AD10: lwc1        $f8, 0x24($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8033AD14: nop

    // 0x8033AD18: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
    // 0x8033AD1C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8033AD20: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AD24: lwc1        $f10, 0x2C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033AD28: nop

    // 0x8033AD2C: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x8033AD30: b           L_8033AD38
    // 0x8033AD34: nop

        goto L_8033AD38;
    // 0x8033AD34: nop

L_8033AD38:
    // 0x8033AD38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AD3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033AD40: jr          $ra
    // 0x8033AD44: nop

    return;
    // 0x8033AD44: nop

;}
RECOMP_FUNC void func_80335498_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335498: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033549C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x803354A0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x803354A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803354A8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x803354AC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803354B0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x803354B4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803354B8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x803354BC: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x803354C0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x803354C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803354C8: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x803354CC: nop

    // 0x803354D0: bne         $t0, $at, L_80335520
    if (ctx->r8 != ctx->r1) {
        // 0x803354D4: nop
    
            goto L_80335520;
    }
    // 0x803354D4: nop

    // 0x803354D8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803354DC: addiu       $t1, $zero, 0x12
    ctx->r9 = ADD32(0, 0X12);
    // 0x803354E0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x803354E4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x803354E8: nop

    // 0x803354EC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x803354F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803354F4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803354F8: nop

    // 0x803354FC: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x80335500: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80335504: nop

    // 0x80335508: lwc1        $f12, 0x2C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8033550C: nop

    // 0x80335510: swc1        $f12, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f12.u32l;
    // 0x80335514: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80335518: nop

    // 0x8033551C: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
L_80335520:
    // 0x80335520: b           L_80335528
    // 0x80335524: nop

        goto L_80335528;
    // 0x80335524: nop

L_80335528:
    // 0x80335528: jr          $ra
    // 0x8033552C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033552C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80331AC0_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331AC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331AC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331AC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331ACC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331AD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331AD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331AD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331ADC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331AE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331AE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331AE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331AEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331AF0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331AF4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331AF8: nop

    // 0x80331AFC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331B00: nop

    // 0x80331B04: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80331B08: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B0C: nop

    // 0x80331B10: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331B14: nop

    // 0x80331B18: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80331B1C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B20: nop

    // 0x80331B24: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331B28: nop

    // 0x80331B2C: bne         $t5, $zero, L_80331B84
    if (ctx->r13 != 0) {
        // 0x80331B30: nop
    
            goto L_80331B84;
    }
    // 0x80331B30: nop

    // 0x80331B34: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B38: nop

    // 0x80331B3C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331B40: nop

    // 0x80331B44: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331B48: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80331B4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B50: nop

    // 0x80331B54: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331B58: nop

    // 0x80331B5C: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80331B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B64: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331B68: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80331B6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331B78: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80331B7C: jal         0x8001C0EC
    // 0x80331B80: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331B80: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
L_80331B84:
    // 0x80331B84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B8C: jal         0x8002A8B4
    // 0x80331B90: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80331B90: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x80331B94: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331B98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331B9C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331BA0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331BA4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331BA8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331BAC: lwc1        $f4, 0x3C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80331BB0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331BB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BB8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331BBC: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80331BC0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331BC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331BC8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331BCC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331BD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331BD4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331BD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331BDC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331BE0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80331BE4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331BE8: nop

    // 0x80331BEC: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80331BF0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331BF4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331BF8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80331BFC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331C00: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331C04: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331C08: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331C0C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80331C10: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x80331C14: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80331C18: nop

    // 0x80331C1C: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x80331C20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C28: jal         0x8001B4AC
    // 0x80331C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x80331C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80331C30: beq         $v0, $zero, L_80331C50
    if (ctx->r2 == 0) {
        // 0x80331C34: nop
    
            goto L_80331C50;
    }
    // 0x80331C34: nop

    // 0x80331C38: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C3C: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80331C40: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80331C44: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331C48: nop

    // 0x80331C4C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80331C50:
    // 0x80331C50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331C54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331C58: jal         0x80334B78
    // 0x80331C5C: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x80331C5C: nop

    after_3:
    // 0x80331C60: b           L_80331C68
    // 0x80331C64: nop

        goto L_80331C68;
    // 0x80331C64: nop

L_80331C68:
    // 0x80331C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331C6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331C70: jr          $ra
    // 0x80331C74: nop

    return;
    // 0x80331C74: nop

;}
RECOMP_FUNC void func_8033716C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033716C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337178: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033717C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337180: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337184: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033718C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337194: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337198: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033719C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803371A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803371A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803371A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803371AC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x803371B0: nop

    // 0x803371B4: beq         $s0, $at, L_803371D0
    if (ctx->r16 == ctx->r1) {
        // 0x803371B8: nop
    
            goto L_803371D0;
    }
    // 0x803371B8: nop

    // 0x803371BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803371C0: beq         $s0, $at, L_803371E0
    if (ctx->r16 == ctx->r1) {
        // 0x803371C4: nop
    
            goto L_803371E0;
    }
    // 0x803371C4: nop

    // 0x803371C8: b           L_803371F0
    // 0x803371CC: nop

        goto L_803371F0;
    // 0x803371CC: nop

L_803371D0:
    // 0x803371D0: jal         0x803369CC
    // 0x803371D4: nop

    func_803369CC_unk_bin_14(rdram, ctx);
        goto after_0;
    // 0x803371D4: nop

    after_0:
    // 0x803371D8: b           L_803371F8
    // 0x803371DC: nop

        goto L_803371F8;
    // 0x803371DC: nop

L_803371E0:
    // 0x803371E0: jal         0x80336D80
    // 0x803371E4: nop

    func_80336D80_unk_bin_14(rdram, ctx);
        goto after_1;
    // 0x803371E4: nop

    after_1:
    // 0x803371E8: b           L_803371F8
    // 0x803371EC: nop

        goto L_803371F8;
    // 0x803371EC: nop

L_803371F0:
    // 0x803371F0: b           L_803371F8
    // 0x803371F4: nop

        goto L_803371F8;
    // 0x803371F4: nop

L_803371F8:
    // 0x803371F8: b           L_80337200
    // 0x803371FC: nop

        goto L_80337200;
    // 0x803371FC: nop

L_80337200:
    // 0x80337200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337204: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337208: jr          $ra
    // 0x8033720C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033720C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803344FC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803344FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334508: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033450C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334510: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334514: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334518: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033451C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334520: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334524: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334528: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033452C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334530: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334534: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334538: nop

    // 0x8033453C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80334540: nop

    // 0x80334544: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80334548: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033454C: nop

    // 0x80334550: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80334554: nop

    // 0x80334558: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8033455C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334560: nop

    // 0x80334564: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80334568: nop

    // 0x8033456C: bne         $t5, $zero, L_803345A4
    if (ctx->r13 != 0) {
        // 0x80334570: nop
    
            goto L_803345A4;
    }
    // 0x80334570: nop

    // 0x80334574: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033457C: jal         0x8001BB34
    // 0x80334580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80334580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80334584: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334588: jal         0x8001BB34
    // 0x8033458C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033458C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334590: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80334594: jal         0x8001BB34
    // 0x80334598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80334598: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033459C: b           L_8033461C
    // 0x803345A0: nop

        goto L_8033461C;
    // 0x803345A0: nop

L_803345A4:
    // 0x803345A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803345A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803345AC: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x803345B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803345B4: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x803345B8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x803345BC: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803345C0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x803345C4: jal         0x8001BB34
    // 0x803345C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x803345C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x803345CC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803345D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803345D4: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x803345D8: nop

    // 0x803345DC: andi        $t0, $s0, 0x1
    ctx->r8 = ctx->r16 & 0X1;
    // 0x803345E0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803345E4: sltiu       $t1, $s0, 0x1
    ctx->r9 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803345E8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x803345EC: jal         0x8001BB34
    // 0x803345F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x803345F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x803345F4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803345F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803345FC: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80334600: nop

    // 0x80334604: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80334608: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8033460C: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80334610: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80334614: jal         0x8001BB34
    // 0x80334618: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80334618: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
L_8033461C:
    // 0x8033461C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334620: nop

    // 0x80334624: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334628: nop

    // 0x8033462C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80334630: sltiu       $at, $t7, 0x12
    ctx->r1 = ctx->r15 < 0X12 ? 1 : 0;
    // 0x80334634: beq         $at, $zero, L_80334778
    if (ctx->r1 == 0) {
        // 0x80334638: nop
    
            goto L_80334778;
    }
    // 0x80334638: nop

    // 0x8033463C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334640: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334644: addu        $at, $at, $t7
    gpr jr_addend_80334650 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334648: lw          $t7, -0x6C8($at)
    ctx->r15 = ADD32(ctx->r1, -0X6C8);
    // 0x8033464C: nop

    // 0x80334650: jr          $t7
    // 0x80334654: nop

    switch (jr_addend_80334650 >> 2) {
        case 0: goto L_80334658; break;
        case 1: goto L_80334668; break;
        case 2: goto L_80334678; break;
        case 3: goto L_80334688; break;
        case 4: goto L_80334698; break;
        case 5: goto L_803346A8; break;
        case 6: goto L_803346B8; break;
        case 7: goto L_803346C8; break;
        case 8: goto L_803346D8; break;
        case 9: goto L_803346E8; break;
        case 10: goto L_803346F8; break;
        case 11: goto L_80334708; break;
        case 12: goto L_80334718; break;
        case 13: goto L_80334728; break;
        case 14: goto L_80334738; break;
        case 15: goto L_80334748; break;
        case 16: goto L_80334758; break;
        case 17: goto L_80334768; break;
        default: switch_error(__func__, 0x80334650, 0x8033F938);
    }
    // 0x80334654: nop

L_80334658:
    // 0x80334658: jal         0x803305A0
    // 0x8033465C: nop

    func_803305A0_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x8033465C: nop

    after_6:
    // 0x80334660: b           L_80334780
    // 0x80334664: nop

        goto L_80334780;
    // 0x80334664: nop

L_80334668:
    // 0x80334668: jal         0x8033078C
    // 0x8033466C: nop

    func_8033078C_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x8033466C: nop

    after_7:
    // 0x80334670: b           L_80334780
    // 0x80334674: nop

        goto L_80334780;
    // 0x80334674: nop

L_80334678:
    // 0x80334678: jal         0x80330904
    // 0x8033467C: nop

    func_80330904_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x8033467C: nop

    after_8:
    // 0x80334680: b           L_80334780
    // 0x80334684: nop

        goto L_80334780;
    // 0x80334684: nop

L_80334688:
    // 0x80334688: jal         0x80330A9C
    // 0x8033468C: nop

    func_80330A9C_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x8033468C: nop

    after_9:
    // 0x80334690: b           L_80334780
    // 0x80334694: nop

        goto L_80334780;
    // 0x80334694: nop

L_80334698:
    // 0x80334698: jal         0x80330C44
    // 0x8033469C: nop

    func_80330C44_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x8033469C: nop

    after_10:
    // 0x803346A0: b           L_80334780
    // 0x803346A4: nop

        goto L_80334780;
    // 0x803346A4: nop

L_803346A8:
    // 0x803346A8: jal         0x80330F08
    // 0x803346AC: nop

    func_80330F08_unk_bin_14(rdram, ctx);
        goto after_11;
    // 0x803346AC: nop

    after_11:
    // 0x803346B0: b           L_80334780
    // 0x803346B4: nop

        goto L_80334780;
    // 0x803346B4: nop

L_803346B8:
    // 0x803346B8: jal         0x80331080
    // 0x803346BC: nop

    func_80331080_unk_bin_14(rdram, ctx);
        goto after_12;
    // 0x803346BC: nop

    after_12:
    // 0x803346C0: b           L_80334780
    // 0x803346C4: nop

        goto L_80334780;
    // 0x803346C4: nop

L_803346C8:
    // 0x803346C8: jal         0x803311DC
    // 0x803346CC: nop

    func_803311DC_unk_bin_14(rdram, ctx);
        goto after_13;
    // 0x803346CC: nop

    after_13:
    // 0x803346D0: b           L_80334780
    // 0x803346D4: nop

        goto L_80334780;
    // 0x803346D4: nop

L_803346D8:
    // 0x803346D8: jal         0x803313A8
    // 0x803346DC: nop

    func_803313A8_unk_bin_14(rdram, ctx);
        goto after_14;
    // 0x803346DC: nop

    after_14:
    // 0x803346E0: b           L_80334780
    // 0x803346E4: nop

        goto L_80334780;
    // 0x803346E4: nop

L_803346E8:
    // 0x803346E8: jal         0x803316B0
    // 0x803346EC: nop

    func_803316B0_unk_bin_14(rdram, ctx);
        goto after_15;
    // 0x803346EC: nop

    after_15:
    // 0x803346F0: b           L_80334780
    // 0x803346F4: nop

        goto L_80334780;
    // 0x803346F4: nop

L_803346F8:
    // 0x803346F8: jal         0x80331AC0
    // 0x803346FC: nop

    func_80331AC0_unk_bin_14(rdram, ctx);
        goto after_16;
    // 0x803346FC: nop

    after_16:
    // 0x80334700: b           L_80334780
    // 0x80334704: nop

        goto L_80334780;
    // 0x80334704: nop

L_80334708:
    // 0x80334708: jal         0x80331C78
    // 0x8033470C: nop

    func_80331C78_unk_bin_14(rdram, ctx);
        goto after_17;
    // 0x8033470C: nop

    after_17:
    // 0x80334710: b           L_80334780
    // 0x80334714: nop

        goto L_80334780;
    // 0x80334714: nop

L_80334718:
    // 0x80334718: jal         0x80332094
    // 0x8033471C: nop

    func_80332094_unk_bin_14(rdram, ctx);
        goto after_18;
    // 0x8033471C: nop

    after_18:
    // 0x80334720: b           L_80334780
    // 0x80334724: nop

        goto L_80334780;
    // 0x80334724: nop

L_80334728:
    // 0x80334728: jal         0x803323E8
    // 0x8033472C: nop

    func_803323E8_unk_bin_14(rdram, ctx);
        goto after_19;
    // 0x8033472C: nop

    after_19:
    // 0x80334730: b           L_80334780
    // 0x80334734: nop

        goto L_80334780;
    // 0x80334734: nop

L_80334738:
    // 0x80334738: jal         0x80332E60
    // 0x8033473C: nop

    func_80332E60_unk_bin_14(rdram, ctx);
        goto after_20;
    // 0x8033473C: nop

    after_20:
    // 0x80334740: b           L_80334780
    // 0x80334744: nop

        goto L_80334780;
    // 0x80334744: nop

L_80334748:
    // 0x80334748: jal         0x80333B9C
    // 0x8033474C: nop

    func_80333B9C_unk_bin_14(rdram, ctx);
        goto after_21;
    // 0x8033474C: nop

    after_21:
    // 0x80334750: b           L_80334780
    // 0x80334754: nop

        goto L_80334780;
    // 0x80334754: nop

L_80334758:
    // 0x80334758: jal         0x80333D60
    // 0x8033475C: nop

    func_80333D60_unk_bin_14(rdram, ctx);
        goto after_22;
    // 0x8033475C: nop

    after_22:
    // 0x80334760: b           L_80334780
    // 0x80334764: nop

        goto L_80334780;
    // 0x80334764: nop

L_80334768:
    // 0x80334768: jal         0x80333EFC
    // 0x8033476C: nop

    func_80333EFC_unk_bin_14(rdram, ctx);
        goto after_23;
    // 0x8033476C: nop

    after_23:
    // 0x80334770: b           L_80334780
    // 0x80334774: nop

        goto L_80334780;
    // 0x80334774: nop

L_80334778:
    // 0x80334778: b           L_80334780
    // 0x8033477C: nop

        goto L_80334780;
    // 0x8033477C: nop

L_80334780:
    // 0x80334780: b           L_80334788
    // 0x80334784: nop

        goto L_80334788;
    // 0x80334784: nop

L_80334788:
    // 0x80334788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033478C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334790: jr          $ra
    // 0x80334794: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80334794: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331C78_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331C7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331C80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331C84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331C88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331C8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331C90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331C98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331C9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331CA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331CA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331CA8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331CAC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CB0: nop

    // 0x80331CB4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80331CB8: nop

    // 0x80331CBC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80331CC0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CC4: nop

    // 0x80331CC8: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331CCC: nop

    // 0x80331CD0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80331CD4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CD8: nop

    // 0x80331CDC: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331CE0: nop

    // 0x80331CE4: bne         $t5, $zero, L_80331D3C
    if (ctx->r13 != 0) {
        // 0x80331CE8: nop
    
            goto L_80331D3C;
    }
    // 0x80331CE8: nop

    // 0x80331CEC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331CF0: nop

    // 0x80331CF4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331CF8: nop

    // 0x80331CFC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331D00: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80331D04: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D08: nop

    // 0x80331D0C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331D10: nop

    // 0x80331D14: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80331D18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D1C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331D20: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80331D24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D28: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331D30: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80331D34: jal         0x8001C0EC
    // 0x80331D38: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331D38: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
L_80331D3C:
    // 0x80331D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331D40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331D44: jal         0x8001B62C
    // 0x80331D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80331D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80331D4C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80331D50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331D54: nop

    // 0x80331D58: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80331D5C: nop

    // 0x80331D60: bc1f        L_8033203C
    if (!c1cs) {
        // 0x80331D64: nop
    
            goto L_8033203C;
    }
    // 0x80331D64: nop

    // 0x80331D68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80331D70: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331D74: nop

    // 0x80331D78: bne         $t3, $at, L_80331EB0
    if (ctx->r11 != ctx->r1) {
        // 0x80331D7C: nop
    
            goto L_80331EB0;
    }
    // 0x80331D7C: nop

    // 0x80331D80: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D84: nop

    // 0x80331D88: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331D8C: nop

    // 0x80331D90: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80331D94: sb          $t7, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r15;
    // 0x80331D98: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331D9C: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x80331DA0: sh          $t8, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r24;
    // 0x80331DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331DAC: jal         0x8001BBDC
    // 0x80331DB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80331DB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80331DB4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80331DB8: jal         0x8001BBDC
    // 0x80331DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80331DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80331DC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331DC4: jal         0x8001BBDC
    // 0x80331DC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80331DC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80331DCC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80331DD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331DD4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80331DD8: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80331DDC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80331DE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331DE4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331DE8: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80331DEC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80331DF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331DF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80331DFC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331E00: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80331E04: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80331E08: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80331E0C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80331E10: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80331E14: addiu       $a1, $a1, -0x820
    ctx->r5 = ADD32(ctx->r5, -0X820);
    // 0x80331E18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331E1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80331E20: jal         0x80027464
    // 0x80331E24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80331E24: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80331E28: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80331E2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80331E30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331E34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331E38: jal         0x80019448
    // 0x80331E3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_6;
    // 0x80331E3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80331E40: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80331E44: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x80331E48: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80331E4C: jal         0x80026F10
    // 0x80331E50: nop

    func_80026F10(rdram, ctx);
        goto after_7;
    // 0x80331E50: nop

    after_7:
    // 0x80331E54: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80331E58: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80331E5C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80331E60: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80331E64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331E68: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80331E6C: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80331E70: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331E74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331E78: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331E7C: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80331E80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80331E84: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E88: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80331E8C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331E90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331E94: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331E98: lh          $t4, 0xA6($t7)
    ctx->r12 = MEM_H(ctx->r15, 0XA6);
    // 0x80331E9C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331EA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331EA4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331EA8: b           L_8033203C
    // 0x80331EAC: sh          $t4, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r12;
        goto L_8033203C;
    // 0x80331EAC: sh          $t4, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r12;
L_80331EB0:
    // 0x80331EB0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331EB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331EB8: lbu         $t9, 0x132($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X132);
    // 0x80331EBC: nop

    // 0x80331EC0: bne         $t9, $at, L_80331F28
    if (ctx->r25 != ctx->r1) {
        // 0x80331EC4: nop
    
            goto L_80331F28;
    }
    // 0x80331EC4: nop

    // 0x80331EC8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331ECC: nop

    // 0x80331ED0: lh          $t3, 0xAE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAE);
    // 0x80331ED4: nop

    // 0x80331ED8: bne         $t3, $zero, L_80331F08
    if (ctx->r11 != 0) {
        // 0x80331EDC: nop
    
            goto L_80331F08;
    }
    // 0x80331EDC: nop

    // 0x80331EE0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331EE4: nop

    // 0x80331EE8: lbu         $t5, 0x132($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X132);
    // 0x80331EEC: nop

    // 0x80331EF0: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80331EF4: sb          $t7, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r15;
    // 0x80331EF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331EFC: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80331F00: b           L_80331F20
    // 0x80331F04: sh          $t8, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = ctx->r24;
        goto L_80331F20;
    // 0x80331F04: sh          $t8, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = ctx->r24;
L_80331F08:
    // 0x80331F08: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F0C: nop

    // 0x80331F10: lh          $t0, 0xAE($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XAE);
    // 0x80331F14: nop

    // 0x80331F18: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x80331F1C: sh          $t9, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r25;
L_80331F20:
    // 0x80331F20: b           L_8033203C
    // 0x80331F24: nop

        goto L_8033203C;
    // 0x80331F24: nop

L_80331F28:
    // 0x80331F28: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331F30: lbu         $t3, 0x132($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X132);
    // 0x80331F34: nop

    // 0x80331F38: bne         $t3, $at, L_8033203C
    if (ctx->r11 != ctx->r1) {
        // 0x80331F3C: nop
    
            goto L_8033203C;
    }
    // 0x80331F3C: nop

    // 0x80331F40: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F44: nop

    // 0x80331F48: lh          $t7, 0xAE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAE);
    // 0x80331F4C: nop

    // 0x80331F50: bne         $t7, $zero, L_80331F88
    if (ctx->r15 != 0) {
        // 0x80331F54: nop
    
            goto L_80331F88;
    }
    // 0x80331F54: nop

    // 0x80331F58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331F5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331F60: jal         0x8001BBDC
    // 0x80331F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x80331F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80331F68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80331F6C: jal         0x8001BBDC
    // 0x80331F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x80331F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80331F74: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331F78: jal         0x8001BBDC
    // 0x80331F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x80331F7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80331F80: b           L_8033203C
    // 0x80331F84: nop

        goto L_8033203C;
    // 0x80331F84: nop

L_80331F88:
    // 0x80331F88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F8C: nop

    // 0x80331F90: lh          $t8, 0xAE($t2)
    ctx->r24 = MEM_H(ctx->r10, 0XAE);
    // 0x80331F94: nop

    // 0x80331F98: addiu       $t4, $t8, -0x1
    ctx->r12 = ADD32(ctx->r24, -0X1);
    // 0x80331F9C: sh          $t4, 0xAE($t2)
    MEM_H(0XAE, ctx->r10) = ctx->r12;
    // 0x80331FA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331FA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331FA8: jal         0x8002A8B4
    // 0x80331FAC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_11;
    // 0x80331FAC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_11:
    // 0x80331FB0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80331FB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331FB8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80331FBC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331FC0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331FC4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331FC8: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80331FCC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331FD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FD4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331FD8: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80331FDC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80331FE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331FE4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80331FE8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331FEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331FF0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80331FF4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331FF8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331FFC: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80332000: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332004: nop

    // 0x80332008: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x8033200C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80332010: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332014: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332018: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033201C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332020: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332024: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332028: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8033202C: addu        $t2, $t8, $t4
    ctx->r10 = ADD32(ctx->r24, ctx->r12);
    // 0x80332030: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332034: nop

    // 0x80332038: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
L_8033203C:
    // 0x8033203C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332040: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332044: jal         0x8001B4AC
    // 0x80332048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_12;
    // 0x80332048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x8033204C: beq         $v0, $zero, L_8033206C
    if (ctx->r2 == 0) {
        // 0x80332050: nop
    
            goto L_8033206C;
    }
    // 0x80332050: nop

    // 0x80332054: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332058: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x8033205C: sh          $t0, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r8;
    // 0x80332060: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332064: nop

    // 0x80332068: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033206C:
    // 0x8033206C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332070: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332074: jal         0x80334B78
    // 0x80332078: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_13;
    // 0x80332078: nop

    after_13:
    // 0x8033207C: b           L_80332084
    // 0x80332080: nop

        goto L_80332084;
    // 0x80332080: nop

L_80332084:
    // 0x80332084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332088: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033208C: jr          $ra
    // 0x80332090: nop

    return;
    // 0x80332090: nop

;}
RECOMP_FUNC void func_80338B0C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338B10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338B14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338B18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338B1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338B20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338B24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338B28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338B30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338B38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338B3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338B40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338B44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338B48: nop

    // 0x80338B4C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80338B50: nop

    // 0x80338B54: bne         $t1, $zero, L_80338B74
    if (ctx->r9 != 0) {
        // 0x80338B58: nop
    
            goto L_80338B74;
    }
    // 0x80338B58: nop

    // 0x80338B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B64: jal         0x8001BB34
    // 0x80338B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80338B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80338B6C: b           L_80338B9C
    // 0x80338B70: nop

        goto L_80338B9C;
    // 0x80338B70: nop

L_80338B74:
    // 0x80338B74: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338B78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B7C: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80338B80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B84: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80338B88: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80338B8C: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80338B90: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80338B94: jal         0x8001BB34
    // 0x80338B98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80338B98: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80338B9C:
    // 0x80338B9C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338BA0: nop

    // 0x80338BA4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338BA8: nop

    // 0x80338BAC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80338BB0: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80338BB4: beq         $at, $zero, L_80338C68
    if (ctx->r1 == 0) {
        // 0x80338BB8: nop
    
            goto L_80338C68;
    }
    // 0x80338BB8: nop

    // 0x80338BBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338BC0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338BC4: addu        $at, $at, $t7
    gpr jr_addend_80338BD0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80338BC8: lw          $t7, -0x660($at)
    ctx->r15 = ADD32(ctx->r1, -0X660);
    // 0x80338BCC: nop

    // 0x80338BD0: jr          $t7
    // 0x80338BD4: nop

    switch (jr_addend_80338BD0 >> 2) {
        case 0: goto L_80338BD8; break;
        case 1: goto L_80338BE8; break;
        case 2: goto L_80338BF8; break;
        case 3: goto L_80338C08; break;
        case 4: goto L_80338C18; break;
        case 5: goto L_80338C28; break;
        case 6: goto L_80338C38; break;
        case 7: goto L_80338C48; break;
        case 8: goto L_80338C58; break;
        default: switch_error(__func__, 0x80338BD0, 0x8033F9A0);
    }
    // 0x80338BD4: nop

L_80338BD8:
    // 0x80338BD8: jal         0x80337380
    // 0x80338BDC: nop

    func_80337380_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80338BDC: nop

    after_2:
    // 0x80338BE0: b           L_80338C70
    // 0x80338BE4: nop

        goto L_80338C70;
    // 0x80338BE4: nop

L_80338BE8:
    // 0x80338BE8: jal         0x803373D8
    // 0x80338BEC: nop

    func_803373D8_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x80338BEC: nop

    after_3:
    // 0x80338BF0: b           L_80338C70
    // 0x80338BF4: nop

        goto L_80338C70;
    // 0x80338BF4: nop

L_80338BF8:
    // 0x80338BF8: jal         0x80337748
    // 0x80338BFC: nop

    func_80337748_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80338BFC: nop

    after_4:
    // 0x80338C00: b           L_80338C70
    // 0x80338C04: nop

        goto L_80338C70;
    // 0x80338C04: nop

L_80338C08:
    // 0x80338C08: jal         0x80337AF4
    // 0x80338C0C: nop

    func_80337AF4_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x80338C0C: nop

    after_5:
    // 0x80338C10: b           L_80338C70
    // 0x80338C14: nop

        goto L_80338C70;
    // 0x80338C14: nop

L_80338C18:
    // 0x80338C18: jal         0x80337F58
    // 0x80338C1C: nop

    func_80337F58_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80338C1C: nop

    after_6:
    // 0x80338C20: b           L_80338C70
    // 0x80338C24: nop

        goto L_80338C70;
    // 0x80338C24: nop

L_80338C28:
    // 0x80338C28: jal         0x803381B8
    // 0x80338C2C: nop

    func_803381B8_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80338C2C: nop

    after_7:
    // 0x80338C30: b           L_80338C70
    // 0x80338C34: nop

        goto L_80338C70;
    // 0x80338C34: nop

L_80338C38:
    // 0x80338C38: jal         0x803382FC
    // 0x80338C3C: nop

    func_803382FC_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x80338C3C: nop

    after_8:
    // 0x80338C40: b           L_80338C70
    // 0x80338C44: nop

        goto L_80338C70;
    // 0x80338C44: nop

L_80338C48:
    // 0x80338C48: jal         0x80338504
    // 0x80338C4C: nop

    func_80338504_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x80338C4C: nop

    after_9:
    // 0x80338C50: b           L_80338C70
    // 0x80338C54: nop

        goto L_80338C70;
    // 0x80338C54: nop

L_80338C58:
    // 0x80338C58: jal         0x803386BC
    // 0x80338C5C: nop

    func_803386BC_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x80338C5C: nop

    after_10:
    // 0x80338C60: b           L_80338C70
    // 0x80338C64: nop

        goto L_80338C70;
    // 0x80338C64: nop

L_80338C68:
    // 0x80338C68: b           L_80338C70
    // 0x80338C6C: nop

        goto L_80338C70;
    // 0x80338C6C: nop

L_80338C70:
    // 0x80338C70: b           L_80338C78
    // 0x80338C74: nop

        goto L_80338C78;
    // 0x80338C74: nop

L_80338C78:
    // 0x80338C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338C7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338C80: jr          $ra
    // 0x80338C84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80338C84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803382FC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803382FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
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
    // 0x8033832C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80338330: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80338334: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80338338: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033833C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80338340: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80338344: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338348: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033834C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338350: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338354: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80338358: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033835C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80338360: nop

    // 0x80338364: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80338368: nop

    // 0x8033836C: bne         $t6, $zero, L_80338408
    if (ctx->r14 != 0) {
        // 0x80338370: nop
    
            goto L_80338408;
    }
    // 0x80338370: nop

    // 0x80338374: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338378: nop

    // 0x8033837C: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80338380: nop

    // 0x80338384: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80338388: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033838C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80338390: nop

    // 0x80338394: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80338398: nop

    // 0x8033839C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x803383A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803383A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803383A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803383AC: nop

    // 0x803383B0: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x803383B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803383B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803383BC: jal         0x8002A46C
    // 0x803383C0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x803383C0: nop

    after_0:
    // 0x803383C4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803383C8: nop

    // 0x803383CC: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x803383D0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803383D4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803383D8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803383DC: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803383E0: jal         0x80015538
    // 0x803383E4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803383E4: nop

    after_1:
    // 0x803383E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803383EC: nop

    // 0x803383F0: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x803383F4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803383F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803383FC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80338400: nop

    // 0x80338404: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
L_80338408:
    // 0x80338408: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033840C: nop

    // 0x80338410: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80338414: nop

    // 0x80338418: bne         $t9, $zero, L_80338478
    if (ctx->r25 != 0) {
        // 0x8033841C: nop
    
            goto L_80338478;
    }
    // 0x8033841C: nop

    // 0x80338420: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338424: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80338428: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033842C: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80338430: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80338434: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80338438: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033843C: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80338440: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80338444: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80338448: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033844C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80338450: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80338454: addiu       $a1, $a1, -0x7D8
    ctx->r5 = ADD32(ctx->r5, -0X7D8);
    // 0x80338458: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033845C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338460: jal         0x80027464
    // 0x80338464: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80338464: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80338468: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033846C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80338470: b           L_80338490
    // 0x80338474: sh          $t1, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r9;
        goto L_80338490;
    // 0x80338474: sh          $t1, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r9;
L_80338478:
    // 0x80338478: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033847C: nop

    // 0x80338480: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x80338484: nop

    // 0x80338488: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8033848C: sh          $t4, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r12;
L_80338490:
    // 0x80338490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338498: jal         0x80029C40
    // 0x8033849C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x8033849C: nop

    after_3:
    // 0x803384A0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803384A4: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x803384A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803384AC: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803384B0: nop

    // 0x803384B4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x803384B8: nop

    // 0x803384BC: bc1f        L_803384EC
    if (!c1cs) {
        // 0x803384C0: nop
    
            goto L_803384EC;
    }
    // 0x803384C0: nop

    // 0x803384C4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x803384C8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x803384CC: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x803384D0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x803384D4: nop

    // 0x803384D8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x803384DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803384E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803384E4: jal         0x8002B114
    // 0x803384E8: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x803384E8: nop

    after_4:
L_803384EC:
    // 0x803384EC: b           L_803384F4
    // 0x803384F0: nop

        goto L_803384F4;
    // 0x803384F0: nop

L_803384F4:
    // 0x803384F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803384F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803384FC: jr          $ra
    // 0x80338500: nop

    return;
    // 0x80338500: nop

;}
RECOMP_FUNC void func_80338F08_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338F08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338F0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338F10: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80338F14: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80338F18: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80338F1C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80338F20: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80338F24: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338F28: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80338F2C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338F30: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80338F34: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338F38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338F3C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338F40: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338F44: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80338F48: addiu       $a1, $a1, -0x7FC
    ctx->r5 = ADD32(ctx->r5, -0X7FC);
    // 0x80338F4C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338F50: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80338F54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80338F58: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80338F5C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80338F60: jal         0x80027464
    // 0x80338F64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80338F64: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80338F68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80338F6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338F70: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80338F74: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80338F78: sh          $t1, 0x1308($t2)
    MEM_H(0X1308, ctx->r10) = ctx->r9;
    // 0x80338F7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80338F80: jal         0x80026F10
    // 0x80338F84: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80338F84: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_1:
    // 0x80338F88: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80338F8C: addiu       $t3, $t3, -0x5720
    ctx->r11 = ADD32(ctx->r11, -0X5720);
    // 0x80338F90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80338F94: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80338F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338F9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80338FA0: jal         0x8001C0EC
    // 0x80338FA4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80338FA4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_2:
    // 0x80338FA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80338FAC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80338FB0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80338FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338FB8: jal         0x8001ABF4
    // 0x80338FBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80338FBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80338FC0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80338FC4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80338FC8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80338FCC: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80338FD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80338FD4: jal         0x8001ABF4
    // 0x80338FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80338FD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80338FDC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80338FE0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80338FE4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80338FE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338FEC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338FF0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338FF4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338FF8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80338FFC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80339000: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80339004: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80339008: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x8033900C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80339010: lwc1        $f6, 0x3C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80339014: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80339018: addiu       $a1, $a1, -0x7E4
    ctx->r5 = ADD32(ctx->r5, -0X7E4);
    // 0x8033901C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80339020: jal         0x80027464
    // 0x80339024: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x80339024: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80339028: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033902C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80339030: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80339034: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80339038: sh          $t9, 0x1306($t6)
    MEM_H(0X1306, ctx->r14) = ctx->r25;
    // 0x8033903C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80339040: jal         0x80026F10
    // 0x80339044: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x80339044: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_6:
    // 0x80339048: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8033904C: jal         0x8001BBDC
    // 0x80339050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x80339050: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80339054: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80339058: addiu       $t0, $t0, -0x5430
    ctx->r8 = ADD32(ctx->r8, -0X5430);
    // 0x8033905C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80339060: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80339064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339068: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033906C: jal         0x8001C0EC
    // 0x80339070: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x80339070: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    after_8:
    // 0x80339074: b           L_8033907C
    // 0x80339078: nop

        goto L_8033907C;
    // 0x80339078: nop

L_8033907C:
    // 0x8033907C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339084: jr          $ra
    // 0x80339088: nop

    return;
    // 0x80339088: nop

;}
RECOMP_FUNC void func_80336868_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033686C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336870: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336874: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336878: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033687C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336880: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336884: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336888: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033688C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336890: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336894: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336898: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033689C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803368A0: nop

    // 0x803368A4: lh          $t1, 0x104($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X104);
    // 0x803368A8: nop

    // 0x803368AC: bne         $t1, $zero, L_8033698C
    if (ctx->r9 != 0) {
        // 0x803368B0: nop
    
            goto L_8033698C;
    }
    // 0x803368B0: nop

    // 0x803368B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803368B8: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x803368BC: nop

    // 0x803368C0: bne         $t2, $zero, L_803368D0
    if (ctx->r10 != 0) {
        // 0x803368C4: nop
    
            goto L_803368D0;
    }
    // 0x803368C4: nop

    // 0x803368C8: b           L_8033698C
    // 0x803368CC: nop

        goto L_8033698C;
    // 0x803368CC: nop

L_803368D0:
    // 0x803368D0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803368D4: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x803368D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803368DC: bne         $t3, $at, L_803368EC
    if (ctx->r11 != ctx->r1) {
        // 0x803368E0: nop
    
            goto L_803368EC;
    }
    // 0x803368E0: nop

    // 0x803368E4: b           L_8033698C
    // 0x803368E8: nop

        goto L_8033698C;
    // 0x803368E8: nop

L_803368EC:
    // 0x803368EC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803368F0: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803368F4: lh          $t5, 0x1322($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X1322);
    // 0x803368F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803368FC: beq         $t5, $at, L_8033698C
    if (ctx->r13 == ctx->r1) {
        // 0x80336900: nop
    
            goto L_8033698C;
    }
    // 0x80336900: nop

    // 0x80336904: lh          $t6, 0x1306($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X1306);
    // 0x80336908: nop

    // 0x8033690C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336910: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336914: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033691C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336920: addu        $t8, $t7, $t4
    ctx->r24 = ADD32(ctx->r15, ctx->r12);
    // 0x80336924: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x80336928: nop

    // 0x8033692C: beq         $t9, $zero, L_8033698C
    if (ctx->r25 == 0) {
        // 0x80336930: nop
    
            goto L_8033698C;
    }
    // 0x80336930: nop

    // 0x80336934: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80336938: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033693C: lh          $t2, 0xC0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XC0);
    // 0x80336940: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x80336944: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80336948: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033694C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336950: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80336954: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80336958: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033695C: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80336960: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80336964: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336968: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x8033696C: nop

    // 0x80336970: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336974: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336978: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033697C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336980: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336984: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80336988: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033698C:
    // 0x8033698C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80336990: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80336994: lh          $t8, 0x1316($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X1316);
    // 0x80336998: nop

    // 0x8033699C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803369A0: sh          $t9, 0x1316($t4)
    MEM_H(0X1316, ctx->r12) = ctx->r25;
    // 0x803369A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803369A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803369AC: jal         0x8002B0E4
    // 0x803369B0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803369B0: nop

    after_0:
    // 0x803369B4: b           L_803369BC
    // 0x803369B8: nop

        goto L_803369BC;
    // 0x803369B8: nop

L_803369BC:
    // 0x803369BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803369C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803369C4: jr          $ra
    // 0x803369C8: nop

    return;
    // 0x803369C8: nop

;}
RECOMP_FUNC void func_80330A9C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330A9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330AA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330AA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330AA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330AAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330AB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330AB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330AC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330AC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330AC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330ACC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330AD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AD4: nop

    // 0x80330AD8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330ADC: nop

    // 0x80330AE0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80330AE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AE8: nop

    // 0x80330AEC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330AF0: nop

    // 0x80330AF4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80330AF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330AFC: nop

    // 0x80330B00: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80330B04: nop

    // 0x80330B08: bne         $t5, $zero, L_80330BBC
    if (ctx->r13 != 0) {
        // 0x80330B0C: nop
    
            goto L_80330BBC;
    }
    // 0x80330B0C: nop

    // 0x80330B10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B14: nop

    // 0x80330B18: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330B1C: nop

    // 0x80330B20: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330B24: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330B28: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B2C: nop

    // 0x80330B30: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80330B34: nop

    // 0x80330B38: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80330B3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330B40: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330B44: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80330B48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330B4C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330B50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B54: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330B58: jal         0x8001C0EC
    // 0x80330B5C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330B5C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80330B60: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80330B64: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x80330B68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330B6C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80330B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B74: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330B78: jal         0x8001C0EC
    // 0x80330B7C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330B7C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x80330B80: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80330B84: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x80330B88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330B8C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330B90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330B94: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330B98: jal         0x8001C0EC
    // 0x80330B9C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330B9C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x80330BA0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330BA4: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80330BA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330BAC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80330BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330BB4: jal         0x8001ABF4
    // 0x80330BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330BB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80330BBC:
    // 0x80330BBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BC4: jal         0x80334F08
    // 0x80330BC8: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80330BC8: nop

    after_4:
    // 0x80330BCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BD4: jal         0x803350CC
    // 0x80330BD8: nop

    func_803350CC_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x80330BD8: nop

    after_5:
    // 0x80330BDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BE4: jal         0x8001B4AC
    // 0x80330BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80330BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80330BEC: beq         $v0, $zero, L_80330C1C
    if (ctx->r2 == 0) {
        // 0x80330BF0: nop
    
            goto L_80330C1C;
    }
    // 0x80330BF0: nop

    // 0x80330BF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BF8: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x80330BFC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80330C00: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C04: nop

    // 0x80330C08: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C14: jal         0x80335498
    // 0x80330C18: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80330C18: nop

    after_7:
L_80330C1C:
    // 0x80330C1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C24: jal         0x80334B78
    // 0x80330C28: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x80330C28: nop

    after_8:
    // 0x80330C2C: b           L_80330C34
    // 0x80330C30: nop

        goto L_80330C34;
    // 0x80330C30: nop

L_80330C34:
    // 0x80330C34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330C38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330C3C: jr          $ra
    // 0x80330C40: nop

    return;
    // 0x80330C40: nop

;}
RECOMP_FUNC void func_80331080_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331080: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331084: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331088: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033108C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331090: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331094: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331098: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033109C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803310A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803310A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803310A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803310AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803310B0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803310B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803310B8: nop

    // 0x803310BC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803310C0: nop

    // 0x803310C4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803310C8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803310CC: nop

    // 0x803310D0: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803310D4: nop

    // 0x803310D8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x803310DC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803310E0: nop

    // 0x803310E4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x803310E8: nop

    // 0x803310EC: bne         $t5, $zero, L_80331144
    if (ctx->r13 != 0) {
        // 0x803310F0: nop
    
            goto L_80331144;
    }
    // 0x803310F0: nop

    // 0x803310F4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803310F8: nop

    // 0x803310FC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331100: nop

    // 0x80331104: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331108: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x8033110C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331110: nop

    // 0x80331114: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331118: nop

    // 0x8033111C: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80331120: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331124: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331128: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x8033112C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331130: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331138: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033113C: jal         0x8001C0EC
    // 0x80331140: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331140: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
L_80331144:
    // 0x80331144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033114C: jal         0x80334F08
    // 0x80331150: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_1;
    // 0x80331150: nop

    after_1:
    // 0x80331154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033115C: jal         0x803350CC
    // 0x80331160: nop

    func_803350CC_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80331160: nop

    after_2:
    // 0x80331164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033116C: jal         0x80334798
    // 0x80331170: nop

    func_80334798_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x80331170: nop

    after_3:
    // 0x80331174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033117C: jal         0x8001B4AC
    // 0x80331180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80331184: beq         $v0, $zero, L_803311B4
    if (ctx->r2 == 0) {
        // 0x80331188: nop
    
            goto L_803311B4;
    }
    // 0x80331188: nop

    // 0x8033118C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331190: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80331194: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80331198: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033119C: nop

    // 0x803311A0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x803311A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311AC: jal         0x80335498
    // 0x803311B0: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x803311B0: nop

    after_5:
L_803311B4:
    // 0x803311B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803311B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803311BC: jal         0x80334B78
    // 0x803311C0: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x803311C0: nop

    after_6:
    // 0x803311C4: b           L_803311CC
    // 0x803311C8: nop

        goto L_803311CC;
    // 0x803311C8: nop

L_803311CC:
    // 0x803311CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803311D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803311D4: jr          $ra
    // 0x803311D8: nop

    return;
    // 0x803311D8: nop

;}
RECOMP_FUNC void func_80337F58_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337F58: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80337F5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80337F60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80337F64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337F68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337F6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337F70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337F74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337F7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337F80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337F84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337F88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337F8C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80337F90: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337F94: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80337F98: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80337F9C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80337FA0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80337FA4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337FA8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80337FAC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337FB0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80337FB4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80337FB8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80337FBC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337FC0: nop

    // 0x80337FC4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80337FC8: nop

    // 0x80337FCC: bne         $t6, $zero, L_80338034
    if (ctx->r14 != 0) {
        // 0x80337FD0: nop
    
            goto L_80338034;
    }
    // 0x80337FD0: nop

    // 0x80337FD4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337FD8: nop

    // 0x80337FDC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80337FE0: nop

    // 0x80337FE4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80337FE8: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80337FEC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337FF0: nop

    // 0x80337FF4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80337FF8: nop

    // 0x80337FFC: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80338000: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338004: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338008: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033800C: nop

    // 0x80338010: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80338014: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80338018: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x8033801C: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
    // 0x80338020: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80338024: nop

    // 0x80338028: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033802C: nop

    // 0x80338030: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
L_80338034:
    // 0x80338034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033803C: jal         0x80028FA0
    // 0x80338040: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80338040: nop

    after_0:
    // 0x80338044: beq         $v0, $zero, L_8033805C
    if (ctx->r2 == 0) {
        // 0x80338048: nop
    
            goto L_8033805C;
    }
    // 0x80338048: nop

    // 0x8033804C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338050: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338054: jal         0x80029B60
    // 0x80338058: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x80338058: nop

    after_1:
L_8033805C:
    // 0x8033805C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338060: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338064: jal         0x8002A8B4
    // 0x80338068: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80338068: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x8033806C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80338070: nop

    // 0x80338074: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80338078: nop

    // 0x8033807C: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x80338080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338088: jal         0x80029C40
    // 0x8033808C: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x8033808C: nop

    after_3:
    // 0x80338090: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80338094: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80338098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033809C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803380A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803380A4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x803380A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803380AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803380B0: jal         0x80029018
    // 0x803380B4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x803380B4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x803380B8: beq         $v0, $zero, L_803380DC
    if (ctx->r2 == 0) {
        // 0x803380BC: nop
    
            goto L_803380DC;
    }
    // 0x803380BC: nop

    // 0x803380C0: jal         0x800297DC
    // 0x803380C4: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x803380C4: nop

    after_5:
    // 0x803380C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803380CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803380D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803380D4: jal         0x80029824
    // 0x803380D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x803380D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_803380DC:
    // 0x803380DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803380E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803380E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803380E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803380EC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x803380F0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x803380F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803380F8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803380FC: jal         0x800295C0
    // 0x80338100: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x80338100: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80338104: beq         $v0, $zero, L_8033811C
    if (ctx->r2 == 0) {
        // 0x80338108: nop
    
            goto L_8033811C;
    }
    // 0x80338108: nop

    // 0x8033810C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80338110: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80338114: b           L_8033812C
    // 0x80338118: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
        goto L_8033812C;
    // 0x80338118: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
L_8033811C:
    // 0x8033811C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80338120: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80338124: nop

    // 0x80338128: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
L_8033812C:
    // 0x8033812C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80338130: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80338134: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338138: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033813C: nop

    // 0x80338140: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80338144: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
    // 0x80338148: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033814C: nop

    // 0x80338150: lh          $t0, 0xAA($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XAA);
    // 0x80338154: nop

    // 0x80338158: bne         $t0, $zero, L_80338188
    if (ctx->r8 != 0) {
        // 0x8033815C: nop
    
            goto L_80338188;
    }
    // 0x8033815C: nop

    // 0x80338160: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80338164: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80338168: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8033816C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80338170: nop

    // 0x80338174: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80338178: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033817C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80338180: b           L_803381A0
    // 0x80338184: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
        goto L_803381A0;
    // 0x80338184: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_80338188:
    // 0x80338188: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033818C: nop

    // 0x80338190: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x80338194: nop

    // 0x80338198: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8033819C: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
L_803381A0:
    // 0x803381A0: b           L_803381A8
    // 0x803381A4: nop

        goto L_803381A8;
    // 0x803381A4: nop

L_803381A8:
    // 0x803381A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803381AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803381B0: jr          $ra
    // 0x803381B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803381B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8033C928_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C928: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033C92C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C930: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C934: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C938: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C93C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C948: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C94C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C950: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C954: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C958: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033C95C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C960: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033C964: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033C968: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033C96C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033C970: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033C974: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033C978: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033C97C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033C980: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033C984: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033C988: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C98C: nop

    // 0x8033C990: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033C994: nop

    // 0x8033C998: bne         $t6, $zero, L_8033CA2C
    if (ctx->r14 != 0) {
        // 0x8033C99C: nop
    
            goto L_8033CA2C;
    }
    // 0x8033C99C: nop

    // 0x8033C9A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C9A4: nop

    // 0x8033C9A8: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033C9AC: nop

    // 0x8033C9B0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033C9B4: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033C9B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C9BC: nop

    // 0x8033C9C0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033C9C4: nop

    // 0x8033C9C8: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033C9CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C9D0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033C9D4: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033C9D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C9DC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033C9E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C9E4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x8033C9E8: jal         0x8001C0EC
    // 0x8033C9EC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033C9EC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033C9F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C9F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C9F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C9FC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CA00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CA04: jal         0x8001ABF4
    // 0x8033CA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033CA08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033CA0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CA10: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CA14: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CA18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CA1C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033CA20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033CA24: jal         0x8001ABF4
    // 0x8033CA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033CA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033CA2C:
    // 0x8033CA2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CA30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CA34: jal         0x8002A8B4
    // 0x8033CA38: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033CA38: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033CA3C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CA40: nop

    // 0x8033CA44: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033CA48: nop

    // 0x8033CA4C: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033CA50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CA54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CA58: jal         0x8001B4AC
    // 0x8033CA5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033CA5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033CA60: beq         $v0, $zero, L_8033CA80
    if (ctx->r2 == 0) {
        // 0x8033CA64: nop
    
            goto L_8033CA80;
    }
    // 0x8033CA64: nop

    // 0x8033CA68: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CA6C: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x8033CA70: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033CA74: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CA78: nop

    // 0x8033CA7C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033CA80:
    // 0x8033CA80: b           L_8033CA88
    // 0x8033CA84: nop

        goto L_8033CA88;
    // 0x8033CA84: nop

L_8033CA88:
    // 0x8033CA88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CA8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033CA90: jr          $ra
    // 0x8033CA94: nop

    return;
    // 0x8033CA94: nop

;}
RECOMP_FUNC void func_80334798_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334798: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033479C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803347A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803347A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803347A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803347AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803347B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803347B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803347B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803347BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803347C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803347C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803347C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803347CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803347D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803347D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803347E0: lui         $a2, 0x43B4
    ctx->r6 = S32(0X43B4 << 16);
    // 0x803347E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803347E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803347EC: jal         0x80029018
    // 0x803347F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_0;
    // 0x803347F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x803347F4: beq         $v0, $zero, L_8033483C
    if (ctx->r2 == 0) {
        // 0x803347F8: nop
    
            goto L_8033483C;
    }
    // 0x803347F8: nop

    // 0x803347FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334800: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334804: nop

    // 0x80334808: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
    // 0x8033480C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334810: nop

    // 0x80334814: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80334818: nop

    // 0x8033481C: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
    // 0x80334820: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334824: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334828: nop

    // 0x8033482C: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
    // 0x80334830: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334834: nop

    // 0x80334838: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
L_8033483C:
    // 0x8033483C: b           L_80334844
    // 0x80334840: nop

        goto L_80334844;
    // 0x80334840: nop

L_80334844:
    // 0x80334844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334848: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033484C: jr          $ra
    // 0x80334850: nop

    return;
    // 0x80334850: nop

;}
RECOMP_FUNC void func_8033A390_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A390: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A398: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A39C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A3A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A3A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A3A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A3B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A3B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A3BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A3C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A3C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3C8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033A3CC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033A3D0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033A3D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A3D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A3DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A3E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A3E4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A3E8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033A3EC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8033A3F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A3F4: nop

    // 0x8033A3F8: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033A3FC: nop

    // 0x8033A400: bne         $t6, $zero, L_8033A498
    if (ctx->r14 != 0) {
        // 0x8033A404: nop
    
            goto L_8033A498;
    }
    // 0x8033A404: nop

    // 0x8033A408: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033A40C: nop

    // 0x8033A410: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033A414: nop

    // 0x8033A418: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033A41C: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033A420: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A424: nop

    // 0x8033A428: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033A42C: nop

    // 0x8033A430: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033A434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A438: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033A43C: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033A440: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A444: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033A448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A44C: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x8033A450: jal         0x8001C0EC
    // 0x8033A454: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A454: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033A458: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A45C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A460: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033A464: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A468: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8033A46C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A470: jal         0x8001ABF4
    // 0x8033A474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033A474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033A478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A47C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A480: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033A484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A488: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x8033A48C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A490: jal         0x8001ABF4
    // 0x8033A494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033A494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033A498:
    // 0x8033A498: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A49C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A4A0: jal         0x8001B62C
    // 0x8033A4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x8033A4A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033A4A8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8033A4AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A4B0: nop

    // 0x8033A4B4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8033A4B8: nop

    // 0x8033A4BC: bc1f        L_8033A4DC
    if (!c1cs) {
        // 0x8033A4C0: nop
    
            goto L_8033A4DC;
    }
    // 0x8033A4C0: nop

    // 0x8033A4C4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4C8: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x8033A4CC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033A4D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4D4: nop

    // 0x8033A4D8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A4DC:
    // 0x8033A4DC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8033A4E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4E4: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033A4E8: nop

    // 0x8033A4EC: swc1        $f6, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f6.u32l;
    // 0x8033A4F0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033A4F4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033A4F8: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8033A4FC: nop

    // 0x8033A500: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x8033A504: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8033A508: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A50C: lwc1        $f10, 0x24($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X24);
    // 0x8033A510: nop

    // 0x8033A514: swc1        $f10, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f10.u32l;
    // 0x8033A518: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8033A51C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033A520: lwc1        $f16, 0x2C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033A524: nop

    // 0x8033A528: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x8033A52C: b           L_8033A534
    // 0x8033A530: nop

        goto L_8033A534;
    // 0x8033A530: nop

L_8033A534:
    // 0x8033A534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A53C: jr          $ra
    // 0x8033A540: nop

    return;
    // 0x8033A540: nop

;}
RECOMP_FUNC void func_80334F08_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334F08: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80334F0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334F10: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80334F14: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80334F18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334F1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334F20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334F28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334F2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334F30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334F34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334F38: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80334F3C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80334F40: nop

    // 0x80334F44: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80334F48: nop

    // 0x80334F4C: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x80334F50: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80334F54: nop

    // 0x80334F58: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80334F5C: nop

    // 0x80334F60: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x80334F64: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80334F68: addiu       $t5, $sp, 0x34
    ctx->r13 = ADD32(ctx->r29, 0X34);
    // 0x80334F6C: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80334F70: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80334F74: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x80334F78: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x80334F7C: addiu       $t7, $sp, 0x2C
    ctx->r15 = ADD32(ctx->r29, 0X2C);
    // 0x80334F80: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80334F84: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80334F88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80334F8C: jal         0x80016C54
    // 0x80334F90: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_80016C54(rdram, ctx);
        goto after_0;
    // 0x80334F90: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80334F94: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334F98: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80334F9C: nop

    // 0x80334FA0: swc1        $f4, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f4.u32l;
    // 0x80334FA4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334FA8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334FAC: nop

    // 0x80334FB0: swc1        $f6, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f6.u32l;
    // 0x80334FB4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334FB8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80334FBC: lwc1        $f17, -0x680($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X680);
    // 0x80334FC0: lwc1        $f16, -0x67C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X67C);
    // 0x80334FC4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80334FC8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80334FCC: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80334FD0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334FD4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334FD8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334FDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334FE0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80334FE4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334FE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334FEC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334FF0: swc1        $f4, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f4.u32l;
    // 0x80334FF4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80334FF8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334FFC: lwc1        $f11, -0x678($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X678);
    // 0x80335000: lwc1        $f10, -0x674($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X674);
    // 0x80335004: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80335008: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033500C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80335010: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80335014: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335018: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033501C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80335020: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80335024: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80335028: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033502C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335030: swc1        $f18, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f18.u32l;
    // 0x80335034: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335038: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033503C: lwc1        $f9, -0x670($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X670);
    // 0x80335040: lwc1        $f8, -0x66C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X66C);
    // 0x80335044: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80335048: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033504C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80335050: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80335054: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335058: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033505C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80335060: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80335064: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80335068: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033506C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80335070: swc1        $f16, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f16.u32l;
    // 0x80335074: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80335078: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8033507C: lwc1        $f7, -0x668($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X668);
    // 0x80335080: lwc1        $f6, -0x664($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X664);
    // 0x80335084: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80335088: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033508C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80335090: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335094: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335098: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033509C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350A0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803350A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803350AC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803350B0: swc1        $f10, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f10.u32l;
    // 0x803350B4: b           L_803350BC
    // 0x803350B8: nop

        goto L_803350BC;
    // 0x803350B8: nop

L_803350BC:
    // 0x803350BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803350C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x803350C4: jr          $ra
    // 0x803350C8: nop

    return;
    // 0x803350C8: nop

;}
RECOMP_FUNC void func_8033D03C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D03C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033D040: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033D044: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033D048: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D04C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D050: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D054: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D05C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D060: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D064: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D068: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D06C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D070: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033D074: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D078: nop

    // 0x8033D07C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D080: nop

    // 0x8033D084: bne         $t1, $zero, L_8033D0F8
    if (ctx->r9 != 0) {
        // 0x8033D088: nop
    
            goto L_8033D0F8;
    }
    // 0x8033D088: nop

    // 0x8033D08C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D090: nop

    // 0x8033D094: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D098: nop

    // 0x8033D09C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D0A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D0A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D0A8: nop

    // 0x8033D0AC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033D0B0: nop

    // 0x8033D0B4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033D0B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D0BC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D0C0: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033D0C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D0C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D0CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D0D0: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x8033D0D4: jal         0x8001C0EC
    // 0x8033D0D8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033D0D8: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033D0DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033D0E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D0E4: jal         0x80069E60
    // 0x8033D0E8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_1;
    // 0x8033D0E8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x8033D0EC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D0F0: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x8033D0F4: sh          $t8, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = ctx->r24;
L_8033D0F8:
    // 0x8033D0F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D0FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D100: jal         0x8001B62C
    // 0x8033D104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x8033D104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033D108: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033D10C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033D110: nop

    // 0x8033D114: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8033D118: nop

    // 0x8033D11C: bc1f        L_8033D1DC
    if (!c1cs) {
        // 0x8033D120: nop
    
            goto L_8033D1DC;
    }
    // 0x8033D120: nop

    // 0x8033D124: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D128: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033D12C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D130: nop

    // 0x8033D134: bne         $t1, $at, L_8033D16C
    if (ctx->r9 != ctx->r1) {
        // 0x8033D138: nop
    
            goto L_8033D16C;
    }
    // 0x8033D138: nop

    // 0x8033D13C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D140: nop

    // 0x8033D144: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x8033D148: nop

    // 0x8033D14C: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x8033D150: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033D154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D15C: jal         0x8001BBDC
    // 0x8033D160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x8033D160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8033D164: b           L_8033D1DC
    // 0x8033D168: nop

        goto L_8033D1DC;
    // 0x8033D168: nop

L_8033D16C:
    // 0x8033D16C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D170: nop

    // 0x8033D174: lh          $t5, 0xC0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC0);
    // 0x8033D178: nop

    // 0x8033D17C: bne         $t5, $zero, L_8033D19C
    if (ctx->r13 != 0) {
        // 0x8033D180: nop
    
            goto L_8033D19C;
    }
    // 0x8033D180: nop

    // 0x8033D184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D18C: jal         0x8002B114
    // 0x8033D190: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x8033D190: nop

    after_4:
    // 0x8033D194: b           L_8033D1DC
    // 0x8033D198: nop

        goto L_8033D1DC;
    // 0x8033D198: nop

L_8033D19C:
    // 0x8033D19C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D1A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D1A4: lh          $s0, 0xC0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0XC0);
    // 0x8033D1A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D1AC: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8033D1B0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8033D1B4: sltiu       $t9, $s0, 0x1
    ctx->r25 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033D1B8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8033D1BC: jal         0x8001BB34
    // 0x8033D1C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x8033D1C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x8033D1C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D1C8: nop

    // 0x8033D1CC: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x8033D1D0: nop

    // 0x8033D1D4: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x8033D1D8: sh          $t4, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = ctx->r12;
L_8033D1DC:
    // 0x8033D1DC: b           L_8033D1E4
    // 0x8033D1E0: nop

        goto L_8033D1E4;
    // 0x8033D1E0: nop

L_8033D1E4:
    // 0x8033D1E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033D1E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033D1EC: jr          $ra
    // 0x8033D1F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033D1F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033EDA8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EDA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033EDAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033EDB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033EDB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033EDB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033EDBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033EDC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EDC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033EDC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EDCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033EDD0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033EDD4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033EDD8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033EDDC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033EDE0: nop

    // 0x8033EDE4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033EDE8: nop

    // 0x8033EDEC: bne         $t1, $zero, L_8033EE44
    if (ctx->r9 != 0) {
        // 0x8033EDF0: nop
    
            goto L_8033EE44;
    }
    // 0x8033EDF0: nop

    // 0x8033EDF4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033EDF8: nop

    // 0x8033EDFC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033EE00: nop

    // 0x8033EE04: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033EE08: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033EE0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033EE10: nop

    // 0x8033EE14: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033EE18: nop

    // 0x8033EE1C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033EE20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EE24: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033EE28: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033EE2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EE30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033EE34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033EE38: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033EE3C: jal         0x8001C0EC
    // 0x8033EE40: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033EE40: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_8033EE44:
    // 0x8033EE44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EE48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EE4C: jal         0x8002A8B4
    // 0x8033EE50: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033EE50: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033EE54: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033EE58: nop

    // 0x8033EE5C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033EE60: nop

    // 0x8033EE64: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033EE68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EE6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EE70: jal         0x8001B4AC
    // 0x8033EE74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033EE74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033EE78: beq         $v0, $zero, L_8033EE98
    if (ctx->r2 == 0) {
        // 0x8033EE7C: nop
    
            goto L_8033EE98;
    }
    // 0x8033EE7C: nop

    // 0x8033EE80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033EE84: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8033EE88: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033EE8C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033EE90: nop

    // 0x8033EE94: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033EE98:
    // 0x8033EE98: b           L_8033EEA0
    // 0x8033EE9C: nop

        goto L_8033EEA0;
    // 0x8033EE9C: nop

L_8033EEA0:
    // 0x8033EEA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EEA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033EEA8: jr          $ra
    // 0x8033EEAC: nop

    return;
    // 0x8033EEAC: nop

;}
RECOMP_FUNC void func_8033DE80_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033DE80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033DE84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033DE88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DE8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DE90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033DE94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DE98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DE9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DEA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DEA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DEA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033DEAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033DEB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033DEB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033DEB8: nop

    // 0x8033DEBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033DEC0: nop

    // 0x8033DEC4: bne         $t1, $zero, L_8033DF58
    if (ctx->r9 != 0) {
        // 0x8033DEC8: nop
    
            goto L_8033DF58;
    }
    // 0x8033DEC8: nop

    // 0x8033DECC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033DED0: nop

    // 0x8033DED4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033DED8: nop

    // 0x8033DEDC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033DEE0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033DEE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033DEE8: nop

    // 0x8033DEEC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033DEF0: nop

    // 0x8033DEF4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033DEF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DEFC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033DF00: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033DF04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033DF0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DF10: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x8033DF14: jal         0x8001C0EC
    // 0x8033DF18: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033DF18: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033DF1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF24: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DF28: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DF2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DF30: jal         0x8001ABF4
    // 0x8033DF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033DF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033DF38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF3C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DF40: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DF44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF48: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033DF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033DF50: jal         0x8001ABF4
    // 0x8033DF54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033DF54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033DF58:
    // 0x8033DF58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF60: jal         0x8002A8B4
    // 0x8033DF64: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033DF64: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033DF68: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033DF6C: nop

    // 0x8033DF70: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033DF74: nop

    // 0x8033DF78: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033DF7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF84: jal         0x8001B4AC
    // 0x8033DF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033DF88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033DF8C: beq         $v0, $zero, L_8033DFAC
    if (ctx->r2 == 0) {
        // 0x8033DF90: nop
    
            goto L_8033DFAC;
    }
    // 0x8033DF90: nop

    // 0x8033DF94: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033DF98: addiu       $t9, $zero, 0x2C
    ctx->r25 = ADD32(0, 0X2C);
    // 0x8033DF9C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033DFA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033DFA4: nop

    // 0x8033DFA8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033DFAC:
    // 0x8033DFAC: b           L_8033DFB4
    // 0x8033DFB0: nop

        goto L_8033DFB4;
    // 0x8033DFB0: nop

L_8033DFB4:
    // 0x8033DFB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033DFB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033DFBC: jr          $ra
    // 0x8033DFC0: nop

    return;
    // 0x8033DFC0: nop

;}
RECOMP_FUNC void func_80337748_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337748: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033774C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80337750: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80337754: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337758: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033775C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337760: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337764: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337768: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033776C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337770: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337774: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337778: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033777C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80337780: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337784: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80337788: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033778C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80337790: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80337794: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337798: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033779C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803377A0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803377A4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803377A8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x803377AC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803377B0: nop

    // 0x803377B4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x803377B8: nop

    // 0x803377BC: bne         $t6, $zero, L_80337828
    if (ctx->r14 != 0) {
        // 0x803377C0: nop
    
            goto L_80337828;
    }
    // 0x803377C0: nop

    // 0x803377C4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803377C8: nop

    // 0x803377CC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x803377D0: nop

    // 0x803377D4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803377D8: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x803377DC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803377E0: nop

    // 0x803377E4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x803377E8: nop

    // 0x803377EC: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x803377F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377F4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803377F8: addiu       $t2, $t2, -0x5430
    ctx->r10 = ADD32(ctx->r10, -0X5430);
    // 0x803377FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337800: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80337804: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033780C: jal         0x8001C0EC
    // 0x80337810: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337810: addiu       $a3, $zero, 0xEA
    ctx->r7 = ADD32(0, 0XEA);
    after_0:
    // 0x80337814: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337818: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033781C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337820: nop

    // 0x80337824: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
L_80337828:
    // 0x80337828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033782C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337830: jal         0x80028FA0
    // 0x80337834: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80337834: nop

    after_1:
    // 0x80337838: beq         $v0, $zero, L_80337850
    if (ctx->r2 == 0) {
        // 0x8033783C: nop
    
            goto L_80337850;
    }
    // 0x8033783C: nop

    // 0x80337840: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337844: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337848: jal         0x80029B60
    // 0x8033784C: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x8033784C: nop

    after_2:
L_80337850:
    // 0x80337850: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337854: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337858: jal         0x8002A46C
    // 0x8033785C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x8033785C: nop

    after_3:
    // 0x80337860: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337864: nop

    // 0x80337868: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x8033786C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337870: nop

    // 0x80337874: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80337878: nop

    // 0x8033787C: bne         $t6, $zero, L_803378B4
    if (ctx->r14 != 0) {
        // 0x80337880: nop
    
            goto L_803378B4;
    }
    // 0x80337880: nop

    // 0x80337884: jal         0x80014E80
    // 0x80337888: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x80337888: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_4:
    // 0x8033788C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80337890: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337894: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80337898: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
    // 0x8033789C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803378A0: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x803378A4: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
    // 0x803378A8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803378AC: b           L_803378CC
    // 0x803378B0: sh          $zero, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = 0;
        goto L_803378CC;
    // 0x803378B0: sh          $zero, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = 0;
L_803378B4:
    // 0x803378B4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803378B8: nop

    // 0x803378BC: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x803378C0: nop

    // 0x803378C4: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803378C8: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
L_803378CC:
    // 0x803378CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x803378D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x803378DC: jal         0x8002A0D0
    // 0x803378E0: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_5;
    // 0x803378E0: lui         $a3, 0xC370
    ctx->r7 = S32(0XC370 << 16);
    after_5:
    // 0x803378E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803378E8: bne         $v0, $at, L_80337958
    if (ctx->r2 != ctx->r1) {
        // 0x803378EC: nop
    
            goto L_80337958;
    }
    // 0x803378EC: nop

    // 0x803378F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803378F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803378F8: jal         0x800272E8
    // 0x803378FC: nop

    func_800272E8(rdram, ctx);
        goto after_6;
    // 0x803378FC: nop

    after_6:
    // 0x80337900: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033790C: lh          $a1, 0xA6($t4)
    ctx->r5 = MEM_H(ctx->r12, 0XA6);
    // 0x80337910: jal         0x80026F10
    // 0x80337914: nop

    func_80026F10(rdram, ctx);
        goto after_7;
    // 0x80337914: nop

    after_7:
    // 0x80337918: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033791C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80337920: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80337924: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80337928: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033792C: nop

    // 0x80337930: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
    // 0x80337934: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337938: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8033793C: sh          $t9, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r25;
    // 0x80337940: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337944: nop

    // 0x80337948: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x8033794C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337950: nop

    // 0x80337954: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
L_80337958:
    // 0x80337958: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033795C: nop

    // 0x80337960: lh          $t0, 0xBA($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XBA);
    // 0x80337964: nop

    // 0x80337968: bne         $t0, $zero, L_80337980
    if (ctx->r8 != 0) {
        // 0x8033796C: nop
    
            goto L_80337980;
    }
    // 0x8033796C: nop

    // 0x80337970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337978: jal         0x80029C40
    // 0x8033797C: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x8033797C: nop

    after_8:
L_80337980:
    // 0x80337980: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337984: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80337988: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033798C: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80337990: nop

    // 0x80337994: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80337998: nop

    // 0x8033799C: bc1f        L_803379C4
    if (!c1cs) {
        // 0x803379A0: nop
    
            goto L_803379C4;
    }
    // 0x803379A0: nop

    // 0x803379A4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803379A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x803379AC: sh          $t5, 0xBA($t6)
    MEM_H(0XBA, ctx->r14) = ctx->r13;
    // 0x803379B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803379B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803379B8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803379BC: b           L_80337A08
    // 0x803379C0: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
        goto L_80337A08;
    // 0x803379C0: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
L_803379C4:
    // 0x803379C4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803379C8: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x803379CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803379D0: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x803379D4: nop

    // 0x803379D8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x803379DC: nop

    // 0x803379E0: bc1f        L_80337A08
    if (!c1cs) {
        // 0x803379E4: nop
    
            goto L_80337A08;
    }
    // 0x803379E4: nop

    // 0x803379E8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803379EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803379F0: sh          $t7, 0xBA($t1)
    MEM_H(0XBA, ctx->r9) = ctx->r15;
    // 0x803379F4: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x803379F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803379FC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A00: nop

    // 0x80337A04: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
L_80337A08:
    // 0x80337A08: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A0C: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80337A10: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337A14: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80337A18: nop

    // 0x80337A1C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80337A20: nop

    // 0x80337A24: bc1f        L_80337A4C
    if (!c1cs) {
        // 0x80337A28: nop
    
            goto L_80337A4C;
    }
    // 0x80337A28: nop

    // 0x80337A2C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A30: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80337A34: sh          $t0, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = ctx->r8;
    // 0x80337A38: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337A3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337A40: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A44: b           L_80337A90
    // 0x80337A48: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
        goto L_80337A90;
    // 0x80337A48: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
L_80337A4C:
    // 0x80337A4C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A50: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80337A54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337A58: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80337A5C: nop

    // 0x80337A60: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80337A64: nop

    // 0x80337A68: bc1f        L_80337A90
    if (!c1cs) {
        // 0x80337A6C: nop
    
            goto L_80337A90;
    }
    // 0x80337A6C: nop

    // 0x80337A70: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A74: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80337A78: sh          $t8, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r24;
    // 0x80337A7C: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80337A80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80337A84: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337A88: nop

    // 0x80337A8C: swc1        $f10, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f10.u32l;
L_80337A90:
    // 0x80337A90: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80337A94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80337A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337AA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337AA4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80337AA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80337AAC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80337AB0: jal         0x80029018
    // 0x80337AB4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x80337AB4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x80337AB8: beq         $v0, $zero, L_80337ADC
    if (ctx->r2 == 0) {
        // 0x80337ABC: nop
    
            goto L_80337ADC;
    }
    // 0x80337ABC: nop

    // 0x80337AC0: jal         0x800297DC
    // 0x80337AC4: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x80337AC4: nop

    after_10:
    // 0x80337AC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337ACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337AD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80337AD4: jal         0x80029824
    // 0x80337AD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x80337AD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_80337ADC:
    // 0x80337ADC: b           L_80337AE4
    // 0x80337AE0: nop

        goto L_80337AE4;
    // 0x80337AE0: nop

L_80337AE4:
    // 0x80337AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80337AE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80337AEC: jr          $ra
    // 0x80337AF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80337AF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8033A06C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A06C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A070: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A074: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A078: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A07C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A080: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A084: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A088: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A08C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A090: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A094: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A098: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A09C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A0A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033A0A8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033A0AC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033A0B0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A0B4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A0B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A0BC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A0C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A0C4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033A0C8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8033A0CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0D0: nop

    // 0x8033A0D4: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033A0D8: nop

    // 0x8033A0DC: bne         $t6, $zero, L_8033A134
    if (ctx->r14 != 0) {
        // 0x8033A0E0: nop
    
            goto L_8033A134;
    }
    // 0x8033A0E0: nop

    // 0x8033A0E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0E8: nop

    // 0x8033A0EC: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033A0F0: nop

    // 0x8033A0F4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033A0F8: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033A0FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A100: nop

    // 0x8033A104: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033A108: nop

    // 0x8033A10C: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033A110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A114: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033A118: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033A11C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A120: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033A124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A128: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x8033A12C: jal         0x8001C0EC
    // 0x8033A130: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A130: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
L_8033A134:
    // 0x8033A134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A13C: jal         0x8001B4AC
    // 0x8033A140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033A144: beq         $v0, $zero, L_8033A15C
    if (ctx->r2 == 0) {
        // 0x8033A148: nop
    
            goto L_8033A15C;
    }
    // 0x8033A148: nop

    // 0x8033A14C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A154: jal         0x8001BBDC
    // 0x8033A158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033A158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_8033A15C:
    // 0x8033A15C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8033A160: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033A164: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033A168: nop

    // 0x8033A16C: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x8033A170: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8033A174: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A178: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8033A17C: nop

    // 0x8033A180: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8033A184: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8033A188: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A18C: lwc1        $f8, 0x24($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X24);
    // 0x8033A190: nop

    // 0x8033A194: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
    // 0x8033A198: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033A19C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1A0: lwc1        $f10, 0x2C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033A1A4: nop

    // 0x8033A1A8: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x8033A1AC: b           L_8033A1B4
    // 0x8033A1B0: nop

        goto L_8033A1B4;
    // 0x8033A1B0: nop

L_8033A1B4:
    // 0x8033A1B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A1B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A1BC: jr          $ra
    // 0x8033A1C0: nop

    return;
    // 0x8033A1C0: nop

;}
RECOMP_FUNC void func_80332E60_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332E60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80332E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332E68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332E6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332E70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332E74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332E78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332E80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332E84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332E88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332E8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332E90: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80332E94: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332E98: nop

    // 0x80332E9C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332EA0: nop

    // 0x80332EA4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80332EA8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80332EAC: nop

    // 0x80332EB0: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80332EB4: nop

    // 0x80332EB8: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x80332EBC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80332EC0: nop

    // 0x80332EC4: lh          $t5, 0xB4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB4);
    // 0x80332EC8: nop

    // 0x80332ECC: beq         $t5, $zero, L_80332EE8
    if (ctx->r13 == 0) {
        // 0x80332ED0: nop
    
            goto L_80332EE8;
    }
    // 0x80332ED0: nop

    // 0x80332ED4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80332ED8: nop

    // 0x80332EDC: lh          $t7, 0xB4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB4);
    // 0x80332EE0: nop

    // 0x80332EE4: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_80332EE8:
    // 0x80332EE8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80332EEC: nop

    // 0x80332EF0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80332EF4: nop

    // 0x80332EF8: bne         $t9, $zero, L_80332F50
    if (ctx->r25 != 0) {
        // 0x80332EFC: nop
    
            goto L_80332F50;
    }
    // 0x80332EFC: nop

    // 0x80332F00: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332F04: nop

    // 0x80332F08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332F0C: nop

    // 0x80332F10: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80332F14: sb          $t2, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r10;
    // 0x80332F18: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80332F1C: nop

    // 0x80332F20: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80332F24: nop

    // 0x80332F28: sh          $t4, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r12;
    // 0x80332F2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F30: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80332F34: addiu       $t5, $t5, -0x57BC
    ctx->r13 = ADD32(ctx->r13, -0X57BC);
    // 0x80332F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80332F40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332F44: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x80332F48: jal         0x8001C0EC
    // 0x80332F4C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332F4C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
L_80332F50:
    // 0x80332F50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332F54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332F58: jal         0x8001B62C
    // 0x80332F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80332F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332F60: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80332F64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332F68: nop

    // 0x80332F6C: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80332F70: nop

    // 0x80332F74: bc1f        L_80333A68
    if (!c1cs) {
        // 0x80332F78: nop
    
            goto L_80333A68;
    }
    // 0x80332F78: nop

    // 0x80332F7C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80332F80: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80332F84: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332F88: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332F8C: jal         0x80015538
    // 0x80332F90: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80332F90: nop

    after_2:
    // 0x80332F94: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80332F98: nop

    // 0x80332F9C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80332FA0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80332FA4: nop

    // 0x80332FA8: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332FAC: nop

    // 0x80332FB0: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80332FB4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FB8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80332FBC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332FC0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332FC4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332FC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332FCC: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80332FD0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332FD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FD8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332FDC: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x80332FE0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332FE4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80332FE8: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80332FEC: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80332FF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332FF4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80332FF8: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332FFC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333000: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333004: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333008: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x8033300C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80333010: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80333014: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333018: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033301C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333024: lwc1        $f16, 0x1C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333028: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033302C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333030: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333034: swc1        $f16, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f16.u32l;
    // 0x80333038: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033303C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80333040: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80333044: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80333048: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033304C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80333050: lwc1        $f18, 0x1C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80333054: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333058: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033305C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333060: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x80333064: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80333068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033306C: lbu         $t0, 0x132($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X132);
    // 0x80333070: nop

    // 0x80333074: bne         $t0, $at, L_803330B4
    if (ctx->r8 != ctx->r1) {
        // 0x80333078: nop
    
            goto L_803330B4;
    }
    // 0x80333078: nop

    // 0x8033307C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80333080: nop

    // 0x80333084: lbu         $t3, 0x132($t4)
    ctx->r11 = MEM_BU(ctx->r12, 0X132);
    // 0x80333088: nop

    // 0x8033308C: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80333090: sb          $t5, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r13;
    // 0x80333094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033309C: jal         0x8001BBDC
    // 0x803330A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803330A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803330A4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803330A8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x803330AC: b           L_80333A68
    // 0x803330B0: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
        goto L_80333A68;
    // 0x803330B0: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
L_803330B4:
    // 0x803330B4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803330B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803330BC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803330C0: nop

    // 0x803330C4: bne         $t9, $at, L_80333360
    if (ctx->r25 != ctx->r1) {
        // 0x803330C8: nop
    
            goto L_80333360;
    }
    // 0x803330C8: nop

    // 0x803330CC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803330D0: nop

    // 0x803330D4: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x803330D8: nop

    // 0x803330DC: bne         $t2, $zero, L_80333340
    if (ctx->r10 != 0) {
        // 0x803330E0: nop
    
            goto L_80333340;
    }
    // 0x803330E0: nop

    // 0x803330E4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803330E8: nop

    // 0x803330EC: lbu         $t3, 0x132($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X132);
    // 0x803330F0: nop

    // 0x803330F4: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x803330F8: sb          $t5, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r13;
    // 0x803330FC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333100: lwc1        $f12, -0x748($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X748);
    // 0x80333104: jal         0x800366E0
    // 0x80333108: nop

    sqrtf_recomp(rdram, ctx);
        goto after_4;
    // 0x80333108: nop

    after_4:
    // 0x8033310C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80333110: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80333114: lui         $at, 0x43AC
    ctx->r1 = S32(0X43AC << 16);
    // 0x80333118: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033311C: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333120: jal         0x80015538
    // 0x80333124: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80333124: nop

    after_5:
    // 0x80333128: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033312C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333130: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333134: lwc1        $f9, -0x740($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X740);
    // 0x80333138: lwc1        $f8, -0x73C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X73C);
    // 0x8033313C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80333140: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80333144: jal         0x80034970
    // 0x80333148: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x80333148: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_6:
    // 0x8033314C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80333150: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80333154: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80333158: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033315C: nop

    // 0x80333160: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80333164: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80333168: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033316C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333170: lwc1        $f17, -0x738($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X738);
    // 0x80333174: lwc1        $f16, -0x734($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X734);
    // 0x80333178: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033317C: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80333180: jal         0x80036570
    // 0x80333184: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_7;
    // 0x80333184: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_7:
    // 0x80333188: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033318C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80333190: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80333194: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80333198: nop

    // 0x8033319C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803331A0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x803331A4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803331A8: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x803331AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803331B0: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x803331B4: nop

    // 0x803331B8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803331BC: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x803331C0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803331C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803331C8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803331CC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803331D0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803331D4: addiu       $a1, $a1, -0x814
    ctx->r5 = ADD32(ctx->r5, -0X814);
    // 0x803331D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803331DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803331E0: jal         0x80027464
    // 0x803331E4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x803331E4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x803331E8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x803331EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803331F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803331F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803331F8: jal         0x80019448
    // 0x803331FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_9;
    // 0x803331FC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x80333200: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80333204: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80333208: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033320C: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80333210: jal         0x80015538
    // 0x80333214: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80333214: nop

    after_10:
    // 0x80333218: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033321C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333220: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333224: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333228: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033322C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333230: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333234: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333238: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x8033323C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333240: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80333244: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x80333248: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033324C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333250: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80333254: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333258: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033325C: addu        $t4, $t5, $t0
    ctx->r12 = ADD32(ctx->r13, ctx->r8);
    // 0x80333260: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80333264: nop

    // 0x80333268: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x8033326C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333270: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333274: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033327C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333280: lwc1        $f16, -0x730($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X730);
    // 0x80333284: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333288: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033328C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333290: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333294: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x80333298: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033329C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803332A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803332A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803332A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803332AC: lwc1        $f18, -0x72C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X72C);
    // 0x803332B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803332B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803332B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332BC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803332C0: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x803332C4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803332C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803332CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803332D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803332D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803332D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803332DC: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803332E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803332E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803332E8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803332EC: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x803332F0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803332F4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803332F8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x803332FC: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333300: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333304: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80333308: lh          $t0, 0xA6($t5)
    ctx->r8 = MEM_H(ctx->r13, 0XA6);
    // 0x8033330C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333310: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333314: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80333318: sh          $t0, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r8;
    // 0x8033331C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333328: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x8033332C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80333330: jal         0x800175F0
    // 0x80333334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_11;
    // 0x80333334: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80333338: b           L_80333358
    // 0x8033333C: nop

        goto L_80333358;
    // 0x8033333C: nop

L_80333340:
    // 0x80333340: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80333344: nop

    // 0x80333348: lh          $t8, 0xB0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB0);
    // 0x8033334C: nop

    // 0x80333350: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80333354: sh          $t9, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r25;
L_80333358:
    // 0x80333358: b           L_80333A68
    // 0x8033335C: nop

        goto L_80333A68;
    // 0x8033335C: nop

L_80333360:
    // 0x80333360: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80333364: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80333368: lbu         $t1, 0x132($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X132);
    // 0x8033336C: nop

    // 0x80333370: bne         $t1, $at, L_803335B4
    if (ctx->r9 != ctx->r1) {
        // 0x80333374: nop
    
            goto L_803335B4;
    }
    // 0x80333374: nop

    // 0x80333378: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033337C: nop

    // 0x80333380: lbu         $t5, 0x132($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X132);
    // 0x80333384: nop

    // 0x80333388: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8033338C: sb          $t4, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r12;
    // 0x80333390: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333394: lwc1        $f12, -0x728($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X728);
    // 0x80333398: jal         0x800366E0
    // 0x8033339C: nop

    sqrtf_recomp(rdram, ctx);
        goto after_12;
    // 0x8033339C: nop

    after_12:
    // 0x803333A0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803333A4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803333A8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803333AC: lwc1        $f14, -0x724($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X724);
    // 0x803333B0: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803333B4: jal         0x80015538
    // 0x803333B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x803333B8: nop

    after_13:
    // 0x803333BC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x803333C0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803333C4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803333C8: lwc1        $f9, -0x720($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X720);
    // 0x803333CC: lwc1        $f8, -0x71C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X71C);
    // 0x803333D0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803333D4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x803333D8: jal         0x80034970
    // 0x803333DC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_14;
    // 0x803333DC: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_14:
    // 0x803333E0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803333E4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803333E8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x803333EC: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803333F0: nop

    // 0x803333F4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803333F8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x803333FC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333400: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333404: lwc1        $f17, -0x718($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X718);
    // 0x80333408: lwc1        $f16, -0x714($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X714);
    // 0x8033340C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80333410: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80333414: jal         0x80036570
    // 0x80333418: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_15;
    // 0x80333418: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_15:
    // 0x8033341C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80333420: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80333424: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80333428: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033342C: nop

    // 0x80333430: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80333434: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80333438: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033343C: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80333440: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333444: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80333448: nop

    // 0x8033344C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80333450: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80333454: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333458: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033345C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333460: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80333464: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80333468: addiu       $a1, $a1, -0x814
    ctx->r5 = ADD32(ctx->r5, -0X814);
    // 0x8033346C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333470: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80333474: jal         0x80027464
    // 0x80333478: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x80333478: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x8033347C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80333480: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80333484: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80333488: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033348C: jal         0x80019448
    // 0x80333490: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_17;
    // 0x80333490: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x80333494: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80333498: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x8033349C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803334A0: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803334A4: jal         0x80015538
    // 0x803334A8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_18;
    // 0x803334A8: nop

    after_18:
    // 0x803334AC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803334B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803334B4: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x803334B8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803334BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803334C0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803334C4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803334C8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803334CC: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x803334D0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803334D4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803334D8: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x803334DC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x803334E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803334E4: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x803334E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803334EC: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803334F0: addu        $t0, $t4, $t3
    ctx->r8 = ADD32(ctx->r12, ctx->r11);
    // 0x803334F4: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803334F8: nop

    // 0x803334FC: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x80333500: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333504: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333508: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8033350C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333510: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333514: lwc1        $f16, -0x710($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X710);
    // 0x80333518: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033351C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333520: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333524: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80333528: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x8033352C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80333530: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333534: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80333538: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033353C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333540: lwc1        $f18, -0x70C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X70C);
    // 0x80333544: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x80333548: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033354C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333550: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333554: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80333558: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033355C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80333560: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x80333564: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x80333568: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033356C: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x80333570: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80333574: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333578: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033357C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333580: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80333584: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80333588: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033358C: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80333590: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80333594: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333598: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x8033359C: lh          $t3, 0xA6($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XA6);
    // 0x803335A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803335A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803335A8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803335AC: b           L_80333A68
    // 0x803335B0: sh          $t3, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r11;
        goto L_80333A68;
    // 0x803335B0: sh          $t3, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r11;
L_803335B4:
    // 0x803335B4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803335B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803335BC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x803335C0: nop

    // 0x803335C4: bne         $t9, $at, L_80333808
    if (ctx->r25 != ctx->r1) {
        // 0x803335C8: nop
    
            goto L_80333808;
    }
    // 0x803335C8: nop

    // 0x803335CC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803335D0: nop

    // 0x803335D4: lbu         $t1, 0x132($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X132);
    // 0x803335D8: nop

    // 0x803335DC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x803335E0: sb          $t2, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r10;
    // 0x803335E4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803335E8: lwc1        $f12, -0x708($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X708);
    // 0x803335EC: jal         0x800366E0
    // 0x803335F0: nop

    sqrtf_recomp(rdram, ctx);
        goto after_19;
    // 0x803335F0: nop

    after_19:
    // 0x803335F4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x803335F8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803335FC: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x80333600: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333604: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80333608: jal         0x80015538
    // 0x8033360C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_20;
    // 0x8033360C: nop

    after_20:
    // 0x80333610: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80333614: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333618: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033361C: lwc1        $f9, -0x700($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X700);
    // 0x80333620: lwc1        $f8, -0x6FC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6FC);
    // 0x80333624: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80333628: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033362C: jal         0x80034970
    // 0x80333630: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_21;
    // 0x80333630: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_21:
    // 0x80333634: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80333638: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033363C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80333640: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80333644: nop

    // 0x80333648: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033364C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80333650: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333654: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333658: lwc1        $f17, -0x6F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6F8);
    // 0x8033365C: lwc1        $f16, -0x6F4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6F4);
    // 0x80333660: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80333664: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80333668: jal         0x80036570
    // 0x8033366C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_22;
    // 0x8033366C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_22:
    // 0x80333670: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80333674: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80333678: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8033367C: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80333680: nop

    // 0x80333684: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80333688: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8033368C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80333690: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x80333694: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333698: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033369C: nop

    // 0x803336A0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803336A4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x803336A8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803336AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803336B0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803336B4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803336B8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x803336BC: addiu       $a1, $a1, -0x814
    ctx->r5 = ADD32(ctx->r5, -0X814);
    // 0x803336C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803336C4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803336C8: jal         0x80027464
    // 0x803336CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_23;
    // 0x803336CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_23:
    // 0x803336D0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x803336D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x803336D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803336DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803336E0: jal         0x80019448
    // 0x803336E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_24;
    // 0x803336E4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x803336E8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803336EC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x803336F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803336F4: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803336F8: jal         0x80015538
    // 0x803336FC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_25;
    // 0x803336FC: nop

    after_25:
    // 0x80333700: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333708: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033370C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333710: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333714: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80333718: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033371C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333720: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80333724: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333728: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033372C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333730: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333734: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333738: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033373C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333740: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80333744: addu        $t5, $t2, $t7
    ctx->r13 = ADD32(ctx->r10, ctx->r15);
    // 0x80333748: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033374C: nop

    // 0x80333750: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x80333754: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333758: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033375C: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x80333760: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333764: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333768: lwc1        $f16, -0x6F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6F0);
    // 0x8033376C: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x80333770: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333774: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333778: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033377C: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x80333780: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333784: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333788: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8033378C: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x80333790: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333794: lwc1        $f18, -0x6EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6EC);
    // 0x80333798: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033379C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803337A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337A4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803337A8: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x803337AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803337B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803337B4: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x803337B8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803337BC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803337C0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x803337C4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803337C8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803337CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337D0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803337D4: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x803337D8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803337DC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803337E0: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x803337E4: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x803337E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803337EC: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x803337F0: lh          $t7, 0xA6($t2)
    ctx->r15 = MEM_H(ctx->r10, 0XA6);
    // 0x803337F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803337F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803337FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80333800: b           L_80333A68
    // 0x80333804: sh          $t7, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r15;
        goto L_80333A68;
    // 0x80333804: sh          $t7, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r15;
L_80333808:
    // 0x80333808: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033380C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80333810: lbu         $t3, 0x132($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X132);
    // 0x80333814: nop

    // 0x80333818: bne         $t3, $at, L_80333A68
    if (ctx->r11 != ctx->r1) {
        // 0x8033381C: nop
    
            goto L_80333A68;
    }
    // 0x8033381C: nop

    // 0x80333820: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80333824: nop

    // 0x80333828: lbu         $t9, 0x132($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X132);
    // 0x8033382C: nop

    // 0x80333830: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x80333834: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80333838: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033383C: lwc1        $f12, -0x6E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X6E8);
    // 0x80333840: jal         0x800366E0
    // 0x80333844: nop

    sqrtf_recomp(rdram, ctx);
        goto after_26;
    // 0x80333844: nop

    after_26:
    // 0x80333848: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8033384C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80333850: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333854: lwc1        $f14, -0x6E4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X6E4);
    // 0x80333858: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033385C: jal         0x80015538
    // 0x80333860: nop

    Math_WrapAngle(rdram, ctx);
        goto after_27;
    // 0x80333860: nop

    after_27:
    // 0x80333864: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80333868: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033386C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80333870: lwc1        $f9, -0x6E0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X6E0);
    // 0x80333874: lwc1        $f8, -0x6DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6DC);
    // 0x80333878: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033387C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80333880: jal         0x80034970
    // 0x80333884: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_28;
    // 0x80333884: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_28:
    // 0x80333888: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033388C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80333890: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80333894: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80333898: nop

    // 0x8033389C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803338A0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x803338A4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803338A8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x803338AC: lwc1        $f17, -0x6D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X6D8);
    // 0x803338B0: lwc1        $f16, -0x6D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6D4);
    // 0x803338B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x803338B8: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x803338BC: jal         0x80036570
    // 0x803338C0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_29;
    // 0x803338C0: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_29:
    // 0x803338C4: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803338C8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803338CC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x803338D0: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803338D4: nop

    // 0x803338D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803338DC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x803338E0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803338E4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x803338E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803338EC: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803338F0: nop

    // 0x803338F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803338F8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x803338FC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80333900: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333904: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80333908: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8033390C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80333910: addiu       $a1, $a1, -0x814
    ctx->r5 = ADD32(ctx->r5, -0X814);
    // 0x80333914: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333918: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033391C: jal         0x80027464
    // 0x80333920: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_30;
    // 0x80333920: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_30:
    // 0x80333924: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80333928: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8033392C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80333930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333934: jal         0x80019448
    // 0x80333938: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_31;
    // 0x80333938: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_31:
    // 0x8033393C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80333940: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x80333944: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80333948: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033394C: jal         0x80015538
    // 0x80333950: nop

    Math_WrapAngle(rdram, ctx);
        goto after_32;
    // 0x80333950: nop

    after_32:
    // 0x80333954: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80333958: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033395C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x80333960: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80333964: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333968: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x8033396C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333970: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333974: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80333978: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033397C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333980: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80333984: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80333988: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033398C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80333990: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333994: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80333998: addu        $t1, $t8, $t6
    ctx->r9 = ADD32(ctx->r24, ctx->r14);
    // 0x8033399C: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803339A0: nop

    // 0x803339A4: swc1        $f10, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f10.u32l;
    // 0x803339A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803339AC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803339B0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x803339B4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803339B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803339BC: lwc1        $f16, -0x6D0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X6D0);
    // 0x803339C0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x803339C4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803339C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339CC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803339D0: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x803339D4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803339D8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803339DC: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x803339E0: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x803339E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803339E8: lwc1        $f18, -0x6CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6CC);
    // 0x803339EC: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x803339F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803339F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803339F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803339FC: swc1        $f18, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f18.u32l;
    // 0x80333A00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A08: jal         0x8001BBDC
    // 0x80333A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_33;
    // 0x80333A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_33:
    // 0x80333A10: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333A14: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80333A18: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80333A1C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80333A20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333A24: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80333A28: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80333A2C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333A30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A34: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80333A38: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x80333A3C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333A40: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80333A44: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80333A48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333A4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333A50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80333A54: lh          $t6, 0xA6($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XA6);
    // 0x80333A58: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333A5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333A60: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80333A64: sh          $t6, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r14;
L_80333A68:
    // 0x80333A68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333A6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333A70: jal         0x8001B4AC
    // 0x80333A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_34;
    // 0x80333A74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_34:
    // 0x80333A78: beq         $v0, $zero, L_80333AD8
    if (ctx->r2 == 0) {
        // 0x80333A7C: nop
    
            goto L_80333AD8;
    }
    // 0x80333A7C: nop

    // 0x80333A80: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80333A84: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x80333A88: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80333A8C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80333A90: nop

    // 0x80333A94: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80333A98: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80333A9C: nop

    // 0x80333AA0: lh          $t0, 0xB4($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XB4);
    // 0x80333AA4: nop

    // 0x80333AA8: beq         $t0, $zero, L_80333AD0
    if (ctx->r8 == 0) {
        // 0x80333AAC: nop
    
            goto L_80333AD0;
    }
    // 0x80333AAC: nop

    // 0x80333AB0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80333AB4: nop

    // 0x80333AB8: lh          $a0, 0xB4($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XB4);
    // 0x80333ABC: jal         0x8002B114
    // 0x80333AC0: nop

    func_8002B114(rdram, ctx);
        goto after_35;
    // 0x80333AC0: nop

    after_35:
    // 0x80333AC4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80333AC8: nop

    // 0x80333ACC: sh          $zero, 0xB4($t8)
    MEM_H(0XB4, ctx->r24) = 0;
L_80333AD0:
    // 0x80333AD0: b           L_80333B74
    // 0x80333AD4: nop

        goto L_80333B74;
    // 0x80333AD4: nop

L_80333AD8:
    // 0x80333AD8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80333ADC: nop

    // 0x80333AE0: lh          $t6, 0xB4($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XB4);
    // 0x80333AE4: nop

    // 0x80333AE8: beq         $t6, $zero, L_80333B74
    if (ctx->r14 == 0) {
        // 0x80333AEC: nop
    
            goto L_80333B74;
    }
    // 0x80333AEC: nop

    // 0x80333AF0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80333AF4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80333AF8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333AFC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333B00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333B04: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333B08: lwc1        $f4, 0x24($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80333B0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333B10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B14: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80333B18: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80333B1C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80333B20: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80333B24: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80333B28: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80333B2C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333B30: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80333B34: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x80333B38: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333B3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B40: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333B44: swc1        $f6, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f6.u32l;
    // 0x80333B48: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80333B4C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80333B50: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80333B54: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80333B58: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333B5C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80333B60: lwc1        $f8, 0x2C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80333B64: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333B68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333B6C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333B70: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
L_80333B74:
    // 0x80333B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333B7C: jal         0x80334854
    // 0x80333B80: nop

    func_80334854_unk_bin_14(rdram, ctx);
        goto after_36;
    // 0x80333B80: nop

    after_36:
    // 0x80333B84: b           L_80333B8C
    // 0x80333B88: nop

        goto L_80333B8C;
    // 0x80333B88: nop

L_80333B8C:
    // 0x80333B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333B90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80333B94: jr          $ra
    // 0x80333B98: nop

    return;
    // 0x80333B98: nop

;}
RECOMP_FUNC void func_8033A544_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A544: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033A548: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033A54C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033A550: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033A554: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A558: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A55C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A560: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A564: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A568: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A56C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A570: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A574: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A578: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A57C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033A580: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A584: nop

    // 0x8033A588: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A58C: nop

    // 0x8033A590: bne         $t1, $zero, L_8033A968
    if (ctx->r9 != 0) {
        // 0x8033A594: nop
    
            goto L_8033A968;
    }
    // 0x8033A594: nop

    // 0x8033A598: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A59C: nop

    // 0x8033A5A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A5A4: nop

    // 0x8033A5A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A5AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A5B0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A5B4: nop

    // 0x8033A5B8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A5BC: nop

    // 0x8033A5C0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A5C4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A5C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033A5CC: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x8033A5D0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A5D4: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8033A5D8: sh          $t9, 0x100($t0)
    MEM_H(0X100, ctx->r8) = ctx->r25;
    // 0x8033A5DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A5E0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8033A5E4: addiu       $t1, $t1, -0x5720
    ctx->r9 = ADD32(ctx->r9, -0X5720);
    // 0x8033A5E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A5EC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033A5F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A5F4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033A5F8: jal         0x8001C0EC
    // 0x8033A5FC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A5FC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033A600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A604: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A608: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A60C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033A610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A614: jal         0x8001ABF4
    // 0x8033A618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033A618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033A61C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A620: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A624: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033A628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A62C: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033A630: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A634: jal         0x8001ABF4
    // 0x8033A638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033A638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033A63C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A640: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A644: jal         0x8001BBDC
    // 0x8033A648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x8033A648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8033A64C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033A650: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A654: nop

    // 0x8033A658: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x8033A65C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A660: nop

    // 0x8033A664: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033A668: nop

    // 0x8033A66C: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x8033A670: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A674: nop

    // 0x8033A678: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x8033A67C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A680: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A684: nop

    // 0x8033A688: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
    // 0x8033A68C: jal         0x80014E80
    // 0x8033A690: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x8033A690: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8033A694: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8033A698: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8033A69C: nop

    // 0x8033A6A0: bne         $t5, $zero, L_8033A750
    if (ctx->r13 != 0) {
        // 0x8033A6A4: nop
    
            goto L_8033A750;
    }
    // 0x8033A6A4: nop

    // 0x8033A6A8: jal         0x80014E80
    // 0x8033A6AC: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x8033A6AC: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_5:
    // 0x8033A6B0: addiu       $t7, $v0, 0x12C
    ctx->r15 = ADD32(ctx->r2, 0X12C);
    // 0x8033A6B4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8033A6B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033A6BC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8033A6C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033A6C4: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033A6C8: nop

    // 0x8033A6CC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033A6D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8033A6D4: nop

    // 0x8033A6D8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8033A6DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033A6E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033A6E4: nop

    // 0x8033A6E8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8033A6EC: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x8033A6F0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8033A6F4: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8033A6F8: nop

    // 0x8033A6FC: jal         0x80014E80
    // 0x8033A700: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x8033A700: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_6:
    // 0x8033A704: addiu       $t1, $v0, 0x12C
    ctx->r9 = ADD32(ctx->r2, 0X12C);
    // 0x8033A708: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8033A70C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033A710: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8033A714: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033A718: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033A71C: nop

    // 0x8033A720: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033A724: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8033A728: nop

    // 0x8033A72C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8033A730: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033A734: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033A738: nop

    // 0x8033A73C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8033A740: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8033A744: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8033A748: b           L_8033A7F8
    // 0x8033A74C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
        goto L_8033A7F8;
    // 0x8033A74C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_8033A750:
    // 0x8033A750: jal         0x80014E80
    // 0x8033A754: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_7;
    // 0x8033A754: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_7:
    // 0x8033A758: addiu       $t6, $v0, -0x12C
    ctx->r14 = ADD32(ctx->r2, -0X12C);
    // 0x8033A75C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8033A760: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033A764: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8033A768: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033A76C: lwc1        $f8, 0x0($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033A770: nop

    // 0x8033A774: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033A778: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8033A77C: nop

    // 0x8033A780: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8033A784: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033A788: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033A78C: nop

    // 0x8033A790: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8033A794: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x8033A798: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8033A79C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8033A7A0: nop

    // 0x8033A7A4: jal         0x80014E80
    // 0x8033A7A8: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x8033A7A8: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_8:
    // 0x8033A7AC: addiu       $t9, $v0, -0x12C
    ctx->r25 = ADD32(ctx->r2, -0X12C);
    // 0x8033A7B0: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8033A7B4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033A7B8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8033A7BC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033A7C0: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033A7C4: nop

    // 0x8033A7C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033A7CC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8033A7D0: nop

    // 0x8033A7D4: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8033A7D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033A7DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033A7E0: nop

    // 0x8033A7E4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8033A7E8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x8033A7EC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8033A7F0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8033A7F4: nop

L_8033A7F8:
    // 0x8033A7F8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8033A7FC: nop

    // 0x8033A800: slti        $at, $t4, -0x3C0
    ctx->r1 = SIGNED(ctx->r12) < -0X3C0 ? 1 : 0;
    // 0x8033A804: beq         $at, $zero, L_8033A818
    if (ctx->r1 == 0) {
        // 0x8033A808: nop
    
            goto L_8033A818;
    }
    // 0x8033A808: nop

    // 0x8033A80C: addiu       $t2, $zero, -0x3C0
    ctx->r10 = ADD32(0, -0X3C0);
    // 0x8033A810: b           L_8033A884
    // 0x8033A814: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
        goto L_8033A884;
    // 0x8033A814: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
L_8033A818:
    // 0x8033A818: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8033A81C: nop

    // 0x8033A820: slti        $at, $t6, 0x3C1
    ctx->r1 = SIGNED(ctx->r14) < 0X3C1 ? 1 : 0;
    // 0x8033A824: bne         $at, $zero, L_8033A838
    if (ctx->r1 != 0) {
        // 0x8033A828: nop
    
            goto L_8033A838;
    }
    // 0x8033A828: nop

    // 0x8033A82C: addiu       $t5, $zero, 0x3C0
    ctx->r13 = ADD32(0, 0X3C0);
    // 0x8033A830: b           L_8033A884
    // 0x8033A834: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
        goto L_8033A884;
    // 0x8033A834: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
L_8033A838:
    // 0x8033A838: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8033A83C: nop

    // 0x8033A840: slti        $at, $t7, -0x12B
    ctx->r1 = SIGNED(ctx->r15) < -0X12B ? 1 : 0;
    // 0x8033A844: bne         $at, $zero, L_8033A860
    if (ctx->r1 != 0) {
        // 0x8033A848: nop
    
            goto L_8033A860;
    }
    // 0x8033A848: nop

    // 0x8033A84C: bgtz        $t7, L_8033A860
    if (SIGNED(ctx->r15) > 0) {
        // 0x8033A850: nop
    
            goto L_8033A860;
    }
    // 0x8033A850: nop

    // 0x8033A854: addiu       $t8, $zero, -0x12C
    ctx->r24 = ADD32(0, -0X12C);
    // 0x8033A858: b           L_8033A884
    // 0x8033A85C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
        goto L_8033A884;
    // 0x8033A85C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_8033A860:
    // 0x8033A860: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033A864: nop

    // 0x8033A868: slti        $at, $t9, 0x12C
    ctx->r1 = SIGNED(ctx->r25) < 0X12C ? 1 : 0;
    // 0x8033A86C: beq         $at, $zero, L_8033A884
    if (ctx->r1 == 0) {
        // 0x8033A870: nop
    
            goto L_8033A884;
    }
    // 0x8033A870: nop

    // 0x8033A874: bltz        $t9, L_8033A884
    if (SIGNED(ctx->r25) < 0) {
        // 0x8033A878: nop
    
            goto L_8033A884;
    }
    // 0x8033A878: nop

    // 0x8033A87C: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x8033A880: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
L_8033A884:
    // 0x8033A884: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A888: nop

    // 0x8033A88C: slti        $at, $t1, -0x3C0
    ctx->r1 = SIGNED(ctx->r9) < -0X3C0 ? 1 : 0;
    // 0x8033A890: beq         $at, $zero, L_8033A8A4
    if (ctx->r1 == 0) {
        // 0x8033A894: nop
    
            goto L_8033A8A4;
    }
    // 0x8033A894: nop

    // 0x8033A898: addiu       $t3, $zero, -0x3C0
    ctx->r11 = ADD32(0, -0X3C0);
    // 0x8033A89C: b           L_8033A910
    // 0x8033A8A0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
        goto L_8033A910;
    // 0x8033A8A0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_8033A8A4:
    // 0x8033A8A4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8A8: nop

    // 0x8033A8AC: slti        $at, $t4, 0x3C1
    ctx->r1 = SIGNED(ctx->r12) < 0X3C1 ? 1 : 0;
    // 0x8033A8B0: bne         $at, $zero, L_8033A8C4
    if (ctx->r1 != 0) {
        // 0x8033A8B4: nop
    
            goto L_8033A8C4;
    }
    // 0x8033A8B4: nop

    // 0x8033A8B8: addiu       $t2, $zero, 0x3C0
    ctx->r10 = ADD32(0, 0X3C0);
    // 0x8033A8BC: b           L_8033A910
    // 0x8033A8C0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
        goto L_8033A910;
    // 0x8033A8C0: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_8033A8C4:
    // 0x8033A8C4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8C8: nop

    // 0x8033A8CC: slti        $at, $t6, -0x12B
    ctx->r1 = SIGNED(ctx->r14) < -0X12B ? 1 : 0;
    // 0x8033A8D0: bne         $at, $zero, L_8033A8EC
    if (ctx->r1 != 0) {
        // 0x8033A8D4: nop
    
            goto L_8033A8EC;
    }
    // 0x8033A8D4: nop

    // 0x8033A8D8: bgtz        $t6, L_8033A8EC
    if (SIGNED(ctx->r14) > 0) {
        // 0x8033A8DC: nop
    
            goto L_8033A8EC;
    }
    // 0x8033A8DC: nop

    // 0x8033A8E0: addiu       $t5, $zero, -0x12C
    ctx->r13 = ADD32(0, -0X12C);
    // 0x8033A8E4: b           L_8033A910
    // 0x8033A8E8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_8033A910;
    // 0x8033A8E8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_8033A8EC:
    // 0x8033A8EC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A8F0: nop

    // 0x8033A8F4: slti        $at, $t7, 0x12C
    ctx->r1 = SIGNED(ctx->r15) < 0X12C ? 1 : 0;
    // 0x8033A8F8: beq         $at, $zero, L_8033A910
    if (ctx->r1 == 0) {
        // 0x8033A8FC: nop
    
            goto L_8033A910;
    }
    // 0x8033A8FC: nop

    // 0x8033A900: bltz        $t7, L_8033A910
    if (SIGNED(ctx->r15) < 0) {
        // 0x8033A904: nop
    
            goto L_8033A910;
    }
    // 0x8033A904: nop

    // 0x8033A908: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x8033A90C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8033A910:
    // 0x8033A910: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8033A914: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A918: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8033A91C: nop

    // 0x8033A920: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033A924: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    // 0x8033A928: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A92C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A930: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8033A934: nop

    // 0x8033A938: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033A93C: swc1        $f6, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f6.u32l;
    // 0x8033A940: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8033A944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A948: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A94C: nop

    // 0x8033A950: swc1        $f8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f8.u32l;
    // 0x8033A954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A95C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033A960: jal         0x80029EF8
    // 0x8033A964: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_9;
    // 0x8033A964: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_9:
L_8033A968:
    // 0x8033A968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A96C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A970: jal         0x8002A46C
    // 0x8033A974: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_10;
    // 0x8033A974: nop

    after_10:
    // 0x8033A978: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A97C: nop

    // 0x8033A980: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x8033A984: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A988: nop

    // 0x8033A98C: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033A990: nop

    // 0x8033A994: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
    // 0x8033A998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A99C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A9A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033A9A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033A9A8: jal         0x8002A0D0
    // 0x8033A9AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_11;
    // 0x8033A9AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_11:
    // 0x8033A9B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A9B4: bne         $v0, $at, L_8033A9E4
    if (ctx->r2 != ctx->r1) {
        // 0x8033A9B8: nop
    
            goto L_8033A9E4;
    }
    // 0x8033A9B8: nop

    // 0x8033A9BC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A9C0: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8033A9C4: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x8033A9C8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A9CC: nop

    // 0x8033A9D0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033A9D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033A9D8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033A9DC: nop

    // 0x8033A9E0: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
L_8033A9E4:
    // 0x8033A9E4: b           L_8033A9EC
    // 0x8033A9E8: nop

        goto L_8033A9EC;
    // 0x8033A9E8: nop

L_8033A9EC:
    // 0x8033A9EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033A9F0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033A9F4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033A9F8: jr          $ra
    // 0x8033A9FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8033A9FC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8033921C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033921C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339224: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339228: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033922C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339230: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339234: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339238: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033923C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339240: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339244: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339248: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033924C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339250: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339254: nop

    // 0x80339258: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033925C: nop

    // 0x80339260: bne         $t1, $zero, L_803392AC
    if (ctx->r9 != 0) {
        // 0x80339264: nop
    
            goto L_803392AC;
    }
    // 0x80339264: nop

    // 0x80339268: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033926C: nop

    // 0x80339270: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80339274: nop

    // 0x80339278: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033927C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339280: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339284: nop

    // 0x80339288: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033928C: nop

    // 0x80339290: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339294: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80339298: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033929C: lh          $t8, 0x1306($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1306);
    // 0x803392A0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803392A4: nop

    // 0x803392A8: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_803392AC:
    // 0x803392AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803392B0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803392B4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803392B8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803392BC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803392C0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803392C4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803392C8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803392CC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803392D0: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x803392D4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x803392D8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x803392DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803392E0: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803392E4: nop

    // 0x803392E8: swc1        $f4, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f4.u32l;
    // 0x803392EC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803392F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803392F4: lwc1        $f6, 0x24($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X24);
    // 0x803392F8: nop

    // 0x803392FC: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
    // 0x80339300: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80339304: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339308: lwc1        $f8, 0x28($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X28);
    // 0x8033930C: nop

    // 0x80339310: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x80339314: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80339318: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033931C: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80339320: nop

    // 0x80339324: swc1        $f10, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f10.u32l;
    // 0x80339328: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033932C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339330: lh          $t2, 0xA8($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA8);
    // 0x80339334: nop

    // 0x80339338: bne         $t2, $at, L_80339380
    if (ctx->r10 != ctx->r1) {
        // 0x8033933C: nop
    
            goto L_80339380;
    }
    // 0x8033933C: nop

    // 0x80339340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339344: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339348: jal         0x800272E8
    // 0x8033934C: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x8033934C: nop

    after_0:
    // 0x80339350: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339354: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339358: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033935C: lh          $a1, 0xA6($t6)
    ctx->r5 = MEM_H(ctx->r14, 0XA6);
    // 0x80339360: jal         0x80026F10
    // 0x80339364: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80339364: nop

    after_1:
    // 0x80339368: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033936C: addiu       $t5, $zero, 0xD
    ctx->r13 = ADD32(0, 0XD);
    // 0x80339370: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80339374: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339378: nop

    // 0x8033937C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80339380:
    // 0x80339380: b           L_80339388
    // 0x80339384: nop

        goto L_80339388;
    // 0x80339384: nop

L_80339388:
    // 0x80339388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033938C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339390: jr          $ra
    // 0x80339394: nop

    return;
    // 0x80339394: nop

;}
RECOMP_FUNC void func_8033B9F8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B9F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B9FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BA00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BA04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BA08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BA0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BA10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BA14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BA18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BA1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BA20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BA24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BA28: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BA2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA30: nop

    // 0x8033BA34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BA38: nop

    // 0x8033BA3C: bne         $t1, $zero, L_8033BAD0
    if (ctx->r9 != 0) {
        // 0x8033BA40: nop
    
            goto L_8033BAD0;
    }
    // 0x8033BA40: nop

    // 0x8033BA44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA48: nop

    // 0x8033BA4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BA50: nop

    // 0x8033BA54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BA58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BA5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BA60: nop

    // 0x8033BA64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BA68: nop

    // 0x8033BA6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BA70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BA74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BA78: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033BA7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BA80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BA84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BA88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033BA8C: jal         0x8001C0EC
    // 0x8033BA90: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BA90: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033BA94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BA98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BA9C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BAA0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BAA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BAA8: jal         0x8001ABF4
    // 0x8033BAAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033BAAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033BAB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BAB4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BAB8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BAC0: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033BAC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033BAC8: jal         0x8001ABF4
    // 0x8033BACC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033BACC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033BAD0:
    // 0x8033BAD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BAD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BAD8: jal         0x8002A8B4
    // 0x8033BADC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033BADC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033BAE0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BAE4: nop

    // 0x8033BAE8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033BAEC: nop

    // 0x8033BAF0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033BAF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BAF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BAFC: jal         0x8001B4AC
    // 0x8033BB00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033BB00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033BB04: beq         $v0, $zero, L_8033BB54
    if (ctx->r2 == 0) {
        // 0x8033BB08: nop
    
            goto L_8033BB54;
    }
    // 0x8033BB08: nop

    // 0x8033BB0C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033BB14: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x8033BB18: nop

    // 0x8033BB1C: bne         $t0, $at, L_8033BB3C
    if (ctx->r8 != ctx->r1) {
        // 0x8033BB20: nop
    
            goto L_8033BB3C;
    }
    // 0x8033BB20: nop

    // 0x8033BB24: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB28: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8033BB2C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033BB30: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB34: b           L_8033BB54
    // 0x8033BB38: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_8033BB54;
    // 0x8033BB38: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033BB3C:
    // 0x8033BB3C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB40: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x8033BB44: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033BB48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BB4C: nop

    // 0x8033BB50: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033BB54:
    // 0x8033BB54: b           L_8033BB5C
    // 0x8033BB58: nop

        goto L_8033BB5C;
    // 0x8033BB58: nop

L_8033BB5C:
    // 0x8033BB5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BB60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BB64: jr          $ra
    // 0x8033BB68: nop

    return;
    // 0x8033BB68: nop

;}
RECOMP_FUNC void func_8033DFC4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033DFC4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033DFC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033DFCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DFD0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DFD4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033DFD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DFDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DFE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DFE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DFE8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DFEC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033DFF0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033DFF4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8033DFF8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033DFFC: nop

    // 0x8033E000: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033E004: nop

    // 0x8033E008: bne         $t1, $zero, L_8033E22C
    if (ctx->r9 != 0) {
        // 0x8033E00C: nop
    
            goto L_8033E22C;
    }
    // 0x8033E00C: nop

    // 0x8033E010: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E014: nop

    // 0x8033E018: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033E01C: nop

    // 0x8033E020: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033E024: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033E028: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E02C: nop

    // 0x8033E030: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033E034: nop

    // 0x8033E038: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033E03C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E040: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033E044: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033E048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E04C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033E050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E054: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x8033E058: jal         0x8001C0EC
    // 0x8033E05C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033E05C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033E060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E064: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E068: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033E06C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033E070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E074: jal         0x8001ABF4
    // 0x8033E078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033E078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033E07C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E080: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033E084: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033E088: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E08C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033E090: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033E094: jal         0x8001ABF4
    // 0x8033E098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033E098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033E09C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E0A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E0A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E0A8: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x8033E0AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033E0B0: jal         0x800175F0
    // 0x8033E0B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x8033E0B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x8033E0B8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8033E0BC:
    // 0x8033E0BC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E0C0: lui         $at, 0x42E2
    ctx->r1 = S32(0X42E2 << 16);
    // 0x8033E0C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033E0C8: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8033E0CC: nop

    // 0x8033E0D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033E0D4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8033E0D8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E0DC: lui         $at, 0x4399
    ctx->r1 = S32(0X4399 << 16);
    // 0x8033E0E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033E0E4: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033E0E8: jal         0x80015538
    // 0x8033E0EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033E0EC: nop

    after_4:
    // 0x8033E0F0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8033E0F4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033E0F8: lwc1        $f12, -0x63C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X63C);
    // 0x8033E0FC: jal         0x800366E0
    // 0x8033E100: nop

    sqrtf_recomp(rdram, ctx);
        goto after_5;
    // 0x8033E100: nop

    after_5:
    // 0x8033E104: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033E108: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033E10C: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033E110: lwc1        $f19, -0x638($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X638);
    // 0x8033E114: lwc1        $f18, -0x634($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X634);
    // 0x8033E118: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8033E11C: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033E120: jal         0x80034970
    // 0x8033E124: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x8033E124: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_6:
    // 0x8033E128: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033E12C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E130: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8033E134: lwc1        $f10, 0x0($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033E138: nop

    // 0x8033E13C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8033E140: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x8033E144: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033E148: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033E14C: lwc1        $f7, -0x630($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X630);
    // 0x8033E150: lwc1        $f6, -0x62C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X62C);
    // 0x8033E154: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8033E158: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8033E15C: jal         0x80036570
    // 0x8033E160: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_7;
    // 0x8033E160: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_7:
    // 0x8033E164: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033E168: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E16C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8033E170: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033E174: nop

    // 0x8033E178: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033E17C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8033E180: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033E184: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033E188: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033E18C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8033E190: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8033E194: addiu       $a1, $a1, -0x7CC
    ctx->r5 = ADD32(ctx->r5, -0X7CC);
    // 0x8033E198: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033E19C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033E1A0: jal         0x80027464
    // 0x8033E1A4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x8033E1A4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x8033E1A8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8033E1AC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8033E1B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033E1B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033E1B8: jal         0x80019448
    // 0x8033E1BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_9;
    // 0x8033E1BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8033E1C0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8033E1C4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033E1C8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033E1CC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033E1D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033E1D4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033E1D8: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8033E1DC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033E1E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033E1E4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033E1E8: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x8033E1EC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8033E1F0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033E1F4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033E1F8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033E1FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E200: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033E204: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E208: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033E20C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033E210: sh          $t6, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r14;
    // 0x8033E214: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033E218: nop

    // 0x8033E21C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033E220: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x8033E224: bne         $at, $zero, L_8033E0BC
    if (ctx->r1 != 0) {
        // 0x8033E228: sw          $t9, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r25;
            goto L_8033E0BC;
    }
    // 0x8033E228: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_8033E22C:
    // 0x8033E22C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E234: jal         0x8002A8B4
    // 0x8033E238: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_10;
    // 0x8033E238: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_10:
    // 0x8033E23C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E240: nop

    // 0x8033E244: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8033E248: nop

    // 0x8033E24C: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x8033E250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E258: jal         0x8001B4AC
    // 0x8033E25C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x8033E25C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8033E260: beq         $v0, $zero, L_8033E280
    if (ctx->r2 == 0) {
        // 0x8033E264: nop
    
            goto L_8033E280;
    }
    // 0x8033E264: nop

    // 0x8033E268: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E26C: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x8033E270: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x8033E274: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033E278: nop

    // 0x8033E27C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033E280:
    // 0x8033E280: b           L_8033E288
    // 0x8033E284: nop

        goto L_8033E288;
    // 0x8033E284: nop

L_8033E288:
    // 0x8033E288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033E28C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8033E290: jr          $ra
    // 0x8033E294: nop

    return;
    // 0x8033E294: nop

;}
RECOMP_FUNC void func_8033D7AC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D7AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D7B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D7B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D7B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D7BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D7C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D7C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D7C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D7CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D7D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D7D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D7D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D7DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D7E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D7E4: nop

    // 0x8033D7E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D7EC: nop

    // 0x8033D7F0: bne         $t1, $zero, L_8033D884
    if (ctx->r9 != 0) {
        // 0x8033D7F4: nop
    
            goto L_8033D884;
    }
    // 0x8033D7F4: nop

    // 0x8033D7F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D7FC: nop

    // 0x8033D800: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D804: nop

    // 0x8033D808: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D80C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D810: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D814: nop

    // 0x8033D818: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033D81C: nop

    // 0x8033D820: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033D824: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D828: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D82C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033D830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D834: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D83C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033D840: jal         0x8001C0EC
    // 0x8033D844: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033D844: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033D848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D84C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D850: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D854: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D85C: jal         0x8001ABF4
    // 0x8033D860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033D860: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033D864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D868: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D86C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D870: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D874: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033D878: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D87C: jal         0x8001ABF4
    // 0x8033D880: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033D880: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033D884:
    // 0x8033D884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D88C: jal         0x80029C40
    // 0x8033D890: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x8033D890: nop

    after_3:
    // 0x8033D894: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033D898: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033D89C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D8A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D8A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D8A8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033D8AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033D8B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033D8B4: jal         0x80029018
    // 0x8033D8B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x8033D8B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x8033D8BC: beq         $v0, $zero, L_8033D904
    if (ctx->r2 == 0) {
        // 0x8033D8C0: nop
    
            goto L_8033D904;
    }
    // 0x8033D8C0: nop

    // 0x8033D8C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033D8C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D8CC: nop

    // 0x8033D8D0: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x8033D8D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033D8D8: nop

    // 0x8033D8DC: lwc1        $f10, 0x2C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033D8E0: nop

    // 0x8033D8E4: swc1        $f10, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f10.u32l;
    // 0x8033D8E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033D8EC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D8F0: nop

    // 0x8033D8F4: swc1        $f16, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f16.u32l;
    // 0x8033D8F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033D8FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033D900: sh          $t1, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r9;
L_8033D904:
    // 0x8033D904: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D908: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D90C: jal         0x8033E904
    // 0x8033D910: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033D910: nop

    after_5:
    // 0x8033D914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D91C: jal         0x8001B4AC
    // 0x8033D920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x8033D920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033D924: beq         $v0, $zero, L_8033D978
    if (ctx->r2 == 0) {
        // 0x8033D928: nop
    
            goto L_8033D978;
    }
    // 0x8033D928: nop

    // 0x8033D92C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033D930: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033D934: nop

    // 0x8033D938: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
    // 0x8033D93C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033D940: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D944: nop

    // 0x8033D948: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x8033D94C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033D950: nop

    // 0x8033D954: lwc1        $f6, 0x2C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033D958: nop

    // 0x8033D95C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x8033D960: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033D964: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x8033D968: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x8033D96C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D970: nop

    // 0x8033D974: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033D978:
    // 0x8033D978: b           L_8033D980
    // 0x8033D97C: nop

        goto L_8033D980;
    // 0x8033D97C: nop

L_8033D980:
    // 0x8033D980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D988: jr          $ra
    // 0x8033D98C: nop

    return;
    // 0x8033D98C: nop

;}
RECOMP_FUNC void func_80336214_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336214: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80336218: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8033621C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80336220: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80336224: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80336228: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033622C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336230: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336234: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336238: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033623C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336240: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336244: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336248: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x8033624C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80336250: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336254: bne         $t0, $at, L_80336294
    if (ctx->r8 != ctx->r1) {
        // 0x80336258: nop
    
            goto L_80336294;
    }
    // 0x80336258: nop

    // 0x8033625C: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x80336260: nop

    // 0x80336264: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x80336268: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8033626C: nop

    // 0x80336270: lh          $t3, 0xB0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB0);
    // 0x80336274: nop

    // 0x80336278: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033627C: sh          $t4, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r12;
    // 0x80336280: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80336284: jal         0x8001BBDC
    // 0x80336288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80336288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033628C: b           L_80336474
    // 0x80336290: nop

        goto L_80336474;
    // 0x80336290: nop

L_80336294:
    // 0x80336294: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80336298: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033629C: bne         $t5, $at, L_803362C4
    if (ctx->r13 != ctx->r1) {
        // 0x803362A0: nop
    
            goto L_803362C4;
    }
    // 0x803362A0: nop

    // 0x803362A4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x803362A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803362AC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x803362B0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803362B4: jal         0x8001BBDC
    // 0x803362B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803362B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x803362BC: b           L_80336474
    // 0x803362C0: nop

        goto L_80336474;
    // 0x803362C0: nop

L_803362C4:
    // 0x803362C4: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x803362C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803362CC: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x803362D0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803362D4: jal         0x8001BBDC
    // 0x803362D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803362D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803362DC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803362E0: jal         0x8001B62C
    // 0x803362E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x803362E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x803362E8: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x803362EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x803362F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803362F4: nop

    // 0x803362F8: bne         $t0, $zero, L_8033645C
    if (ctx->r8 != 0) {
        // 0x803362FC: nop
    
            goto L_8033645C;
    }
    // 0x803362FC: nop

L_80336300:
    // 0x80336300: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80336304: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336308: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8033630C: nop

    // 0x80336310: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80336314: nop

    // 0x80336318: bc1f        L_80336360
    if (!c1cs) {
        // 0x8033631C: nop
    
            goto L_80336360;
    }
    // 0x8033631C: nop

    // 0x80336320: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80336324: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336328: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8033632C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80336330: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80336334: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336338: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8033633C: jal         0x8001B6BC
    // 0x80336340: nop

    func_8001B6BC(rdram, ctx);
        goto after_4;
    // 0x80336340: nop

    after_4:
    // 0x80336344: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x80336348: nop

    // 0x8033634C: lh          $t3, 0xB0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB0);
    // 0x80336350: nop

    // 0x80336354: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80336358: b           L_803363EC
    // 0x8033635C: sh          $t4, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r12;
        goto L_803363EC;
    // 0x8033635C: sh          $t4, 0xB0($t1)
    MEM_H(0XB0, ctx->r9) = ctx->r12;
L_80336360:
    // 0x80336360: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x80336364: nop

    // 0x80336368: lh          $t5, 0xA4($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA4);
    // 0x8033636C: nop

    // 0x80336370: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80336374: sh          $t6, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r14;
    // 0x80336378: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8033637C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80336380: lh          $a2, 0xA4($t7)
    ctx->r6 = MEM_H(ctx->r15, 0XA4);
    // 0x80336384: addiu       $t8, $t8, -0x577C
    ctx->r24 = ADD32(ctx->r24, -0X577C);
    // 0x80336388: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8033638C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80336390: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336394: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    // 0x80336398: jal         0x8001C0EC
    // 0x8033639C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x8033639C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_5:
    // 0x803363A0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803363A4: jal         0x8001B580
    // 0x803363A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B580(rdram, ctx);
        goto after_6;
    // 0x803363A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x803363AC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x803363B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803363B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803363B8: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x803363BC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803363C0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803363C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803363C8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x803363CC: jal         0x8001B6BC
    // 0x803363D0: nop

    func_8001B6BC(rdram, ctx);
        goto after_7;
    // 0x803363D0: nop

    after_7:
    // 0x803363D4: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x803363D8: nop

    // 0x803363DC: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x803363E0: nop

    // 0x803363E4: addiu       $t3, $t0, -0x1
    ctx->r11 = ADD32(ctx->r8, -0X1);
    // 0x803363E8: sh          $t3, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r11;
L_803363EC:
    // 0x803363EC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803363F0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x803363F4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x803363F8: jal         0x8033605C
    // 0x803363FC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_8033605C_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x803363FC: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_8:
    // 0x80336400: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x80336404: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80336408: lwc1        $f12, 0xD4($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x8033640C: lwc1        $f14, 0xD8($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD8);
    // 0x80336410: lw          $a2, 0xDC($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XDC);
    // 0x80336414: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80336418: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8033641C: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x80336420: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x80336424: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x80336428: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x8033642C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80336430: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80336434: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80336438: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8033643C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80336440: jal         0x800293B8
    // 0x80336444: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800293B8(rdram, ctx);
        goto after_9;
    // 0x80336444: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x80336448: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8033644C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80336450: nop

    // 0x80336454: beq         $t7, $zero, L_80336300
    if (ctx->r15 == 0) {
        // 0x80336458: nop
    
            goto L_80336300;
    }
    // 0x80336458: nop

L_8033645C:
    // 0x8033645C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80336460: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80336464: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80336468: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8033646C: jal         0x803364D4
    // 0x80336470: nop

    func_803364D4_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x80336470: nop

    after_10:
L_80336474:
    // 0x80336474: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336478: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033647C: lh          $t0, 0x130E($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X130E);
    // 0x80336480: nop

    // 0x80336484: bne         $t0, $zero, L_803364BC
    if (ctx->r8 != 0) {
        // 0x80336488: nop
    
            goto L_803364BC;
    }
    // 0x80336488: nop

    // 0x8033648C: lbu         $t3, 0x1392($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X1392);
    // 0x80336490: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80336494: bne         $t3, $at, L_803364BC
    if (ctx->r11 != ctx->r1) {
        // 0x80336498: nop
    
            goto L_803364BC;
    }
    // 0x80336498: nop

    // 0x8033649C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x803364A0: nop

    // 0x803364A4: lh          $a0, 0xAA($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XAA);
    // 0x803364A8: jal         0x8002B114
    // 0x803364AC: nop

    func_8002B114(rdram, ctx);
        goto after_11;
    // 0x803364AC: nop

    after_11:
    // 0x803364B0: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x803364B4: jal         0x8002B114
    // 0x803364B8: nop

    func_8002B114(rdram, ctx);
        goto after_12;
    // 0x803364B8: nop

    after_12:
L_803364BC:
    // 0x803364BC: b           L_803364C4
    // 0x803364C0: nop

        goto L_803364C4;
    // 0x803364C0: nop

L_803364C4:
    // 0x803364C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x803364C8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x803364CC: jr          $ra
    // 0x803364D0: nop

    return;
    // 0x803364D0: nop

;}
RECOMP_FUNC void func_8033AD48_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AD48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033AD4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AD50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AD54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AD58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AD5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AD60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AD64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AD68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AD6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AD70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AD74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AD78: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033AD7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AD80: nop

    // 0x8033AD84: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AD88: nop

    // 0x8033AD8C: bne         $t1, $zero, L_8033AE0C
    if (ctx->r9 != 0) {
        // 0x8033AD90: nop
    
            goto L_8033AE0C;
    }
    // 0x8033AD90: nop

    // 0x8033AD94: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AD98: nop

    // 0x8033AD9C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033ADA0: nop

    // 0x8033ADA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033ADA8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033ADAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033ADB0: nop

    // 0x8033ADB4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033ADB8: nop

    // 0x8033ADBC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033ADC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ADC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ADC8: jal         0x8001BBDC
    // 0x8033ADCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x8033ADCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033ADD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ADD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ADD8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033ADDC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033ADE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033ADE4: jal         0x8001ABF4
    // 0x8033ADE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033ADE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033ADEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033ADF0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033ADF4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033ADF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033ADFC: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033AE00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033AE04: jal         0x8001ABF4
    // 0x8033AE08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033AE08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033AE0C:
    // 0x8033AE0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AE10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AE14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AE18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AE1C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033AE20: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8033AE24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033AE28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033AE2C: jal         0x800295C0
    // 0x8033AE30: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x8033AE30: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8033AE34: beq         $v0, $zero, L_8033AE4C
    if (ctx->r2 == 0) {
        // 0x8033AE38: nop
    
            goto L_8033AE4C;
    }
    // 0x8033AE38: nop

    // 0x8033AE3C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033AE40: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE44: b           L_8033AE5C
    // 0x8033AE48: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
        goto L_8033AE5C;
    // 0x8033AE48: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
L_8033AE4C:
    // 0x8033AE4C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033AE50: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE54: nop

    // 0x8033AE58: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_8033AE5C:
    // 0x8033AE5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AE60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AE64: jal         0x8002A46C
    // 0x8033AE68: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_4;
    // 0x8033AE68: nop

    after_4:
    // 0x8033AE6C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE70: nop

    // 0x8033AE74: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x8033AE78: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AE7C: nop

    // 0x8033AE80: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033AE84: nop

    // 0x8033AE88: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
    // 0x8033AE8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AE90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AE94: jal         0x8001B4AC
    // 0x8033AE98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x8033AE98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033AE9C: beq         $v0, $zero, L_8033AF3C
    if (ctx->r2 == 0) {
        // 0x8033AEA0: nop
    
            goto L_8033AF3C;
    }
    // 0x8033AEA0: nop

    // 0x8033AEA4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033AEA8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033AEAC: jal         0x80338C88
    // 0x8033AEB0: nop

    func_80338C88_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x8033AEB0: nop

    after_6:
    // 0x8033AEB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AEB8: beq         $v0, $at, L_8033AEDC
    if (ctx->r2 == ctx->r1) {
        // 0x8033AEBC: nop
    
            goto L_8033AEDC;
    }
    // 0x8033AEBC: nop

    // 0x8033AEC0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033AEC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033AEC8: jal         0x80338DC8
    // 0x8033AECC: nop

    func_80338DC8_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x8033AECC: nop

    after_7:
    // 0x8033AED0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AED4: bne         $v0, $at, L_8033AEF4
    if (ctx->r2 != ctx->r1) {
        // 0x8033AED8: nop
    
            goto L_8033AEF4;
    }
    // 0x8033AED8: nop

L_8033AEDC:
    // 0x8033AEDC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AEE0: addiu       $t1, $zero, 0x23
    ctx->r9 = ADD32(0, 0X23);
    // 0x8033AEE4: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033AEE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AEEC: b           L_8033AF3C
    // 0x8033AEF0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_8033AF3C;
    // 0x8033AEF0: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033AEF4:
    // 0x8033AEF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AEF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AEFC: jal         0x8002A2EC
    // 0x8033AF00: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_8;
    // 0x8033AF00: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_8:
    // 0x8033AF04: beq         $v0, $zero, L_8033AF24
    if (ctx->r2 == 0) {
        // 0x8033AF08: nop
    
            goto L_8033AF24;
    }
    // 0x8033AF08: nop

    // 0x8033AF0C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF10: addiu       $t2, $zero, 0x1B
    ctx->r10 = ADD32(0, 0X1B);
    // 0x8033AF14: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033AF18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF1C: b           L_8033AF3C
    // 0x8033AF20: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_8033AF3C;
    // 0x8033AF20: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033AF24:
    // 0x8033AF24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF28: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8033AF2C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033AF30: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033AF34: nop

    // 0x8033AF38: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8033AF3C:
    // 0x8033AF3C: b           L_8033AF44
    // 0x8033AF40: nop

        goto L_8033AF44;
    // 0x8033AF40: nop

L_8033AF44:
    // 0x8033AF44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AF48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033AF4C: jr          $ra
    // 0x8033AF50: nop

    return;
    // 0x8033AF50: nop

;}
RECOMP_FUNC void func_8033EFD4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EFD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033EFD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033EFDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033EFE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033EFE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033EFE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033EFEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EFF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033EFF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EFF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033EFFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033F000: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033F004: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033F008: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033F00C: nop

    // 0x8033F010: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033F014: nop

    // 0x8033F018: bne         $t1, $zero, L_8033F070
    if (ctx->r9 != 0) {
        // 0x8033F01C: nop
    
            goto L_8033F070;
    }
    // 0x8033F01C: nop

    // 0x8033F020: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033F024: nop

    // 0x8033F028: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033F02C: nop

    // 0x8033F030: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033F034: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033F038: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033F03C: nop

    // 0x8033F040: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033F044: nop

    // 0x8033F048: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033F04C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F050: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033F054: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033F058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F05C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033F060: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033F064: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033F068: jal         0x8001C0EC
    // 0x8033F06C: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033F06C: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
L_8033F070:
    // 0x8033F070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F078: jal         0x8002A8B4
    // 0x8033F07C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x8033F07C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_1:
    // 0x8033F080: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033F084: nop

    // 0x8033F088: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033F08C: nop

    // 0x8033F090: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033F094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F09C: jal         0x8001B4AC
    // 0x8033F0A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033F0A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033F0A4: beq         $v0, $zero, L_8033F0C4
    if (ctx->r2 == 0) {
        // 0x8033F0A8: nop
    
            goto L_8033F0C4;
    }
    // 0x8033F0A8: nop

    // 0x8033F0AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033F0B0: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8033F0B4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033F0B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033F0BC: nop

    // 0x8033F0C0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033F0C4:
    // 0x8033F0C4: b           L_8033F0CC
    // 0x8033F0C8: nop

        goto L_8033F0CC;
    // 0x8033F0C8: nop

L_8033F0CC:
    // 0x8033F0CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033F0D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033F0D4: jr          $ra
    // 0x8033F0D8: nop

    return;
    // 0x8033F0D8: nop

;}
RECOMP_FUNC void func_803386BC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803386BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803386C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803386C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803386C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803386CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803386D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803386D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803386D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803386DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803386E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803386E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803386E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803386EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803386F0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x803386F4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803386F8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803386FC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80338700: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80338704: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80338708: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033870C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338710: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80338714: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338718: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033871C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80338720: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80338724: nop

    // 0x80338728: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033872C: nop

    // 0x80338730: bne         $t6, $zero, L_803387A8
    if (ctx->r14 != 0) {
        // 0x80338734: nop
    
            goto L_803387A8;
    }
    // 0x80338734: nop

    // 0x80338738: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033873C: nop

    // 0x80338740: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80338744: nop

    // 0x80338748: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033874C: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80338750: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80338754: nop

    // 0x80338758: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033875C: nop

    // 0x80338760: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80338764: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80338768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033876C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80338770: nop

    // 0x80338774: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80338778: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033877C: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x80338780: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
    // 0x80338784: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80338788: nop

    // 0x8033878C: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x80338790: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80338794: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80338798: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x8033879C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x803387A0: nop

    // 0x803387A4: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803387A8:
    // 0x803387A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803387AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803387B0: jal         0x80028FA0
    // 0x803387B4: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x803387B4: nop

    after_0:
    // 0x803387B8: beq         $v0, $zero, L_803387D0
    if (ctx->r2 == 0) {
        // 0x803387BC: nop
    
            goto L_803387D0;
    }
    // 0x803387BC: nop

    // 0x803387C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803387C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803387C8: jal         0x80029B60
    // 0x803387CC: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x803387CC: nop

    after_1:
L_803387D0:
    // 0x803387D0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803387D4: nop

    // 0x803387D8: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x803387DC: nop

    // 0x803387E0: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x803387E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803387E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803387EC: jal         0x8002A8B4
    // 0x803387F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x803387F0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x803387F4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803387F8: nop

    // 0x803387FC: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80338800: nop

    // 0x80338804: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
    // 0x80338808: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033880C: nop

    // 0x80338810: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x80338814: nop

    // 0x80338818: bne         $t2, $zero, L_8033886C
    if (ctx->r10 != 0) {
        // 0x8033881C: nop
    
            goto L_8033886C;
    }
    // 0x8033881C: nop

    // 0x80338820: jal         0x80014E80
    // 0x80338824: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80338824: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_3:
    // 0x80338828: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033882C: nop

    // 0x80338830: sh          $v0, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r2;
    // 0x80338834: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80338838: addiu       $t4, $zero, 0x5A
    ctx->r12 = ADD32(0, 0X5A);
    // 0x8033883C: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x80338840: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80338844: nop

    // 0x80338848: lh          $t8, 0xAC($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAC);
    // 0x8033884C: nop

    // 0x80338850: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80338854: nop

    // 0x80338858: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033885C: swc1        $f16, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f16.u32l;
    // 0x80338860: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80338864: b           L_803388A4
    // 0x80338868: sh          $zero, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = 0;
        goto L_803388A4;
    // 0x80338868: sh          $zero, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = 0;
L_8033886C:
    // 0x8033886C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80338870: nop

    // 0x80338874: lh          $t1, 0xAC($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XAC);
    // 0x80338878: nop

    // 0x8033887C: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80338880: nop

    // 0x80338884: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80338888: swc1        $f4, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f4.u32l;
    // 0x8033888C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80338890: nop

    // 0x80338894: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x80338898: nop

    // 0x8033889C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x803388A0: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
L_803388A4:
    // 0x803388A4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803388A8: nop

    // 0x803388AC: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x803388B0: nop

    // 0x803388B4: bne         $t5, $zero, L_803388CC
    if (ctx->r13 != 0) {
        // 0x803388B8: nop
    
            goto L_803388CC;
    }
    // 0x803388B8: nop

    // 0x803388BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803388C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803388C4: jal         0x80029C40
    // 0x803388C8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x803388C8: nop

    after_4:
L_803388CC:
    // 0x803388CC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803388D0: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x803388D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803388D8: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x803388DC: nop

    // 0x803388E0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x803388E4: nop

    // 0x803388E8: bc1f        L_80338910
    if (!c1cs) {
        // 0x803388EC: nop
    
            goto L_80338910;
    }
    // 0x803388EC: nop

    // 0x803388F0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803388F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803388F8: sh          $t6, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r14;
    // 0x803388FC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80338900: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80338904: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80338908: b           L_80338954
    // 0x8033890C: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
        goto L_80338954;
    // 0x8033890C: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
L_80338910:
    // 0x80338910: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80338914: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80338918: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033891C: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80338920: nop

    // 0x80338924: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80338928: nop

    // 0x8033892C: bc1f        L_80338954
    if (!c1cs) {
        // 0x80338930: nop
    
            goto L_80338954;
    }
    // 0x80338930: nop

    // 0x80338934: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80338938: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033893C: sh          $t2, 0xBA($t3)
    MEM_H(0XBA, ctx->r11) = ctx->r10;
    // 0x80338940: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80338944: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338948: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033894C: nop

    // 0x80338950: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_80338954:
    // 0x80338954: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80338958: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x8033895C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338960: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80338964: nop

    // 0x80338968: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8033896C: nop

    // 0x80338970: bc1f        L_80338998
    if (!c1cs) {
        // 0x80338974: nop
    
            goto L_80338998;
    }
    // 0x80338974: nop

    // 0x80338978: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8033897C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80338980: sh          $t5, 0xBA($t8)
    MEM_H(0XBA, ctx->r24) = ctx->r13;
    // 0x80338984: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80338988: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033898C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80338990: b           L_803389DC
    // 0x80338994: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
        goto L_803389DC;
    // 0x80338994: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
L_80338998:
    // 0x80338998: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033899C: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x803389A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803389A4: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x803389A8: nop

    // 0x803389AC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x803389B0: nop

    // 0x803389B4: bc1f        L_803389DC
    if (!c1cs) {
        // 0x803389B8: nop
    
            goto L_803389DC;
    }
    // 0x803389B8: nop

    // 0x803389BC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803389C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803389C4: sh          $t1, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = ctx->r9;
    // 0x803389C8: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x803389CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803389D0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803389D4: nop

    // 0x803389D8: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
L_803389DC:
    // 0x803389DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803389E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803389E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803389F0: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x803389F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803389F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803389FC: jal         0x80029018
    // 0x80338A00: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80338A00: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80338A04: beq         $v0, $zero, L_80338A28
    if (ctx->r2 == 0) {
        // 0x80338A08: nop
    
            goto L_80338A28;
    }
    // 0x80338A08: nop

    // 0x80338A0C: jal         0x800297DC
    // 0x80338A10: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x80338A10: nop

    after_6:
    // 0x80338A14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338A1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80338A20: jal         0x80029824
    // 0x80338A24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x80338A24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_80338A28:
    // 0x80338A28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80338A2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80338A30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338A38: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80338A3C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80338A40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80338A44: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80338A48: jal         0x800295C0
    // 0x80338A4C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x80338A4C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80338A50: beq         $v0, $zero, L_80338A68
    if (ctx->r2 == 0) {
        // 0x80338A54: nop
    
            goto L_80338A68;
    }
    // 0x80338A54: nop

    // 0x80338A58: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80338A5C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80338A60: b           L_80338A78
    // 0x80338A64: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
        goto L_80338A78;
    // 0x80338A64: swc1        $f18, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f18.u32l;
L_80338A68:
    // 0x80338A68: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80338A6C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80338A70: nop

    // 0x80338A74: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
L_80338A78:
    // 0x80338A78: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80338A7C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80338A80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338A84: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80338A88: nop

    // 0x80338A8C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80338A90: swc1        $f10, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f10.u32l;
    // 0x80338A94: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80338A98: nop

    // 0x80338A9C: lh          $t8, 0xAA($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XAA);
    // 0x80338AA0: nop

    // 0x80338AA4: bne         $t8, $zero, L_80338ADC
    if (ctx->r24 != 0) {
        // 0x80338AA8: nop
    
            goto L_80338ADC;
    }
    // 0x80338AA8: nop

    // 0x80338AAC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80338AB0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80338AB4: sh          $t6, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r14;
    // 0x80338AB8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80338ABC: nop

    // 0x80338AC0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80338AC4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80338AC8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80338ACC: sh          $t7, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r15;
    // 0x80338AD0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80338AD4: b           L_80338AF4
    // 0x80338AD8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_80338AF4;
    // 0x80338AD8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338ADC:
    // 0x80338ADC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80338AE0: nop

    // 0x80338AE4: lh          $t4, 0xAA($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XAA);
    // 0x80338AE8: nop

    // 0x80338AEC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80338AF0: sh          $t5, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r13;
L_80338AF4:
    // 0x80338AF4: b           L_80338AFC
    // 0x80338AF8: nop

        goto L_80338AFC;
    // 0x80338AF8: nop

L_80338AFC:
    // 0x80338AFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80338B00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80338B04: jr          $ra
    // 0x80338B08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80338B08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
