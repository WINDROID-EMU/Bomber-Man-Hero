#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_bagular2_80333C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333C4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333C54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333C58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333C5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333C60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333C70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333C74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333C78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333C7C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333C80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333C84: nop

    // 0x80333C88: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333C8C: nop

    // 0x80333C90: bne         $t1, $zero, L_80333CD4
    if (ctx->r9 != 0) {
        // 0x80333C94: nop
    
            goto L_80333CD4;
    }
    // 0x80333C94: nop

    // 0x80333C98: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333C9C: nop

    // 0x80333CA0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333CA4: nop

    // 0x80333CA8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333CAC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333CB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CB4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80333CB8: addiu       $t5, $t5, -0x4BEC
    ctx->r13 = ADD32(ctx->r13, -0X4BEC);
    // 0x80333CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CC0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80333CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80333CCC: jal         0x8001C0EC
    // 0x80333CD0: addiu       $a3, $zero, 0x142
    ctx->r7 = ADD32(0, 0X142);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333CD0: addiu       $a3, $zero, 0x142
    ctx->r7 = ADD32(0, 0X142);
    after_0:
L_80333CD4:
    // 0x80333CD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333CD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333CDC: jal         0x8001B4AC
    // 0x80333CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80333CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333CE4: beq         $v0, $zero, L_80333E60
    if (ctx->r2 == 0) {
        // 0x80333CE8: nop
    
            goto L_80333E60;
    }
    // 0x80333CE8: nop

    // 0x80333CEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333CF0: nop

    // 0x80333CF4: lh          $t7, 0xC0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC0);
    // 0x80333CF8: nop

    // 0x80333CFC: beq         $t7, $zero, L_80333D7C
    if (ctx->r15 == 0) {
        // 0x80333D00: nop
    
            goto L_80333D7C;
    }
    // 0x80333D00: nop

    // 0x80333D04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333D08: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80333D0C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80333D10: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80333D14: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333D18: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333D1C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333D20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333D24: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333D28: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80333D2C: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80333D30: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80333D34: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x80333D38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80333D3C: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80333D40: lwc1        $f4, 0x2C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80333D44: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80333D48: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80333D4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80333D50: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80333D54: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80333D58: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80333D5C: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80333D60: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80333D64: addiu       $a1, $a1, 0x4440
    ctx->r5 = ADD32(ctx->r5, 0X4440);
    // 0x80333D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333D6C: jal         0x80027464
    // 0x80333D70: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x80333D70: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80333D74: b           L_80333DF0
    // 0x80333D78: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
        goto L_80333DF0;
    // 0x80333D78: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80333D7C:
    // 0x80333D7C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333D80: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80333D84: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80333D88: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80333D8C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80333D90: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333D94: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333D98: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333D9C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333DA0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80333DA4: lwc1        $f16, 0x24($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80333DA8: lwc1        $f18, 0x0($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80333DAC: lwc1        $f6, 0x28($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X28);
    // 0x80333DB0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80333DB4: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80333DB8: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80333DBC: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80333DC0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333DC4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80333DC8: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80333DCC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80333DD0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80333DD4: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80333DD8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80333DDC: addiu       $a1, $a1, 0x444C
    ctx->r5 = ADD32(ctx->r5, 0X444C);
    // 0x80333DE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80333DE4: jal         0x80027464
    // 0x80333DE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x80333DE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80333DEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80333DF0:
    // 0x80333DF0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80333DF4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80333DF8: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80333DFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E00: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333E04: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333E08: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333E0C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333E10: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333E14: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333E18: sh          $t8, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r24;
    // 0x80333E1C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80333E20: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80333E24: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80333E28: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333E2C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333E30: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80333E34: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80333E38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333E3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333E40: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333E44: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x80333E48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E50: jal         0x8002B114
    // 0x80333E54: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80333E54: nop

    after_4:
    // 0x80333E58: b           L_80333F74
    // 0x80333E5C: nop

        goto L_80333F74;
    // 0x80333E5C: nop

L_80333E60:
    // 0x80333E60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80333E64: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80333E68: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80333E6C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80333E70: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80333E74: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333E78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80333E7C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80333E80: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80333E84: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80333E88: lwc1        $f8, 0x24($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X24);
    // 0x80333E8C: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80333E90: nop

    // 0x80333E94: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80333E98: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
    // 0x80333E9C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80333EA0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80333EA4: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80333EA8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80333EAC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80333EB0: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80333EB4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80333EB8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80333EBC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80333EC0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80333EC4: lwc1        $f18, 0x2C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80333EC8: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80333ECC: nop

    // 0x80333ED0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80333ED4: swc1        $f6, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f6.u32l;
    // 0x80333ED8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80333EDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333EE0: lh          $t9, 0xC2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC2);
    // 0x80333EE4: nop

    // 0x80333EE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80333EEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333EF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80333EF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80333EF8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80333EFC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80333F00: lwc1        $f8, 0x4168($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80333F04: nop

    // 0x80333F08: swc1        $f8, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f8.u32l;
    // 0x80333F0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333F10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F14: lh          $t6, 0xC2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XC2);
    // 0x80333F18: nop

    // 0x80333F1C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80333F20: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80333F24: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333F28: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80333F2C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333F30: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80333F34: lwc1        $f10, 0x416C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80333F38: nop

    // 0x80333F3C: swc1        $f10, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f10.u32l;
    // 0x80333F40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333F44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333F48: lh          $t4, 0xC2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XC2);
    // 0x80333F4C: nop

    // 0x80333F50: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80333F54: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333F58: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80333F5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80333F60: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80333F64: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80333F68: lwc1        $f16, 0x4170($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x80333F6C: nop

    // 0x80333F70: swc1        $f16, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f16.u32l;
L_80333F74:
    // 0x80333F74: b           L_80333F7C
    // 0x80333F78: nop

        goto L_80333F7C;
    // 0x80333F78: nop

L_80333F7C:
    // 0x80333F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333F80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333F84: jr          $ra
    // 0x80333F88: nop

    return;
    // 0x80333F88: nop

;}
RECOMP_FUNC void func_bagular2_80332B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332B6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80332B74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332B78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332B7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332B80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332B84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332B90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332B94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332B98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332B9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80332BA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332BA4: nop

    // 0x80332BA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332BAC: nop

    // 0x80332BB0: bne         $t1, $zero, L_80332BE4
    if (ctx->r9 != 0) {
        // 0x80332BB4: nop
    
            goto L_80332BE4;
    }
    // 0x80332BB4: nop

    // 0x80332BB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332BBC: nop

    // 0x80332BC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332BC4: nop

    // 0x80332BC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332BCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332BD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332BD4: nop

    // 0x80332BD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332BDC: nop

    // 0x80332BE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80332BE4:
    // 0x80332BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332BEC: jal         0x8002A8B4
    // 0x80332BF0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80332BF0: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_0:
    // 0x80332BF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332BF8: nop

    // 0x80332BFC: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80332C00: nop

    // 0x80332C04: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80332C08: jal         0x8033124C
    // 0x80332C0C: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_1;
    // 0x80332C0C: nop

    after_1:
    // 0x80332C10: jal         0x803311B4
    // 0x80332C14: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_2;
    // 0x80332C14: nop

    after_2:
    // 0x80332C18: jal         0x80330894
    // 0x80332C1C: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_3;
    // 0x80332C1C: nop

    after_3:
    // 0x80332C20: jal         0x80330F08
    // 0x80332C24: nop

    func_bagular2_80330F08(rdram, ctx);
        goto after_4;
    // 0x80332C24: nop

    after_4:
    // 0x80332C28: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332C2C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80332C30: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80332C34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332C38: nop

    // 0x80332C3C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x80332C40: b           L_80332C48
    // 0x80332C44: nop

        goto L_80332C48;
    // 0x80332C44: nop

L_80332C48:
    // 0x80332C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80332C50: jr          $ra
    // 0x80332C54: nop

    return;
    // 0x80332C54: nop

;}
RECOMP_FUNC void func_bagular2_80333F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333F8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333F90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333F94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333F98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333F9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333FA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333FAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333FB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333FB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333FB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333FBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333FC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333FC4: nop

    // 0x80333FC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333FCC: nop

    // 0x80333FD0: bne         $t1, $zero, L_80334014
    if (ctx->r9 != 0) {
        // 0x80333FD4: nop
    
            goto L_80334014;
    }
    // 0x80333FD4: nop

    // 0x80333FD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333FDC: nop

    // 0x80333FE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333FE4: nop

    // 0x80333FE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333FEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333FF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FF4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80333FF8: addiu       $t5, $t5, -0x4BE8
    ctx->r13 = ADD32(ctx->r13, -0X4BE8);
    // 0x80333FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334000: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80334004: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334008: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033400C: jal         0x8001C0EC
    // 0x80334010: addiu       $a3, $zero, 0x143
    ctx->r7 = ADD32(0, 0X143);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334010: addiu       $a3, $zero, 0x143
    ctx->r7 = ADD32(0, 0X143);
    after_0:
L_80334014:
    // 0x80334014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033401C: jal         0x8001B4AC
    // 0x80334020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80334020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334024: beq         $v0, $zero, L_8033409C
    if (ctx->r2 == 0) {
        // 0x80334028: nop
    
            goto L_8033409C;
    }
    // 0x80334028: nop

    // 0x8033402C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334030: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334034: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80334038: nop

    // 0x8033403C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80334040: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334044: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334048: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033404C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334050: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334054: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80334058: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033405C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334060: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334064: nop

    // 0x80334068: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033406C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334070: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334074: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334078: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033407C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334080: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80334084: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334088: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033408C: jal         0x8002B114
    // 0x80334090: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80334090: nop

    after_2:
    // 0x80334094: b           L_803341B0
    // 0x80334098: nop

        goto L_803341B0;
    // 0x80334098: nop

L_8033409C:
    // 0x8033409C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803340A0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803340A4: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803340A8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803340AC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803340B0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803340B4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803340B8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803340BC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803340C0: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x803340C4: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x803340C8: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x803340CC: nop

    // 0x803340D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803340D4: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x803340D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803340DC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803340E0: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x803340E4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803340E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803340EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803340F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803340F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803340F8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803340FC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80334100: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80334104: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80334108: nop

    // 0x8033410C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80334110: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x80334114: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334118: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033411C: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x80334120: nop

    // 0x80334124: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80334128: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x8033412C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334130: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80334134: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334138: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033413C: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80334140: nop

    // 0x80334144: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    // 0x80334148: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033414C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334150: lh          $t3, 0xC2($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XC2);
    // 0x80334154: nop

    // 0x80334158: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x8033415C: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80334160: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334164: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80334168: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033416C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334170: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334174: nop

    // 0x80334178: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x8033417C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334184: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334188: nop

    // 0x8033418C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334190: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334194: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334198: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033419C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803341A0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803341A4: lwc1        $f8, 0x4170($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x803341A8: nop

    // 0x803341AC: swc1        $f8, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f8.u32l;
L_803341B0:
    // 0x803341B0: b           L_803341B8
    // 0x803341B4: nop

        goto L_803341B8;
    // 0x803341B4: nop

L_803341B8:
    // 0x803341B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803341BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803341C0: jr          $ra
    // 0x803341C4: nop

    return;
    // 0x803341C4: nop

;}
RECOMP_FUNC void func_bagular2_803303AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803303AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803303B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803303B4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x803303B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803303BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803303C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803303C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803303C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803303D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803303DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803303E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803303E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803303E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803303EC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x803303F0: jal         0x8002A2EC
    // 0x803303F4: nop

    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x803303F4: nop

    after_0:
    // 0x803303F8: beq         $v0, $zero, L_803304A0
    if (ctx->r2 == 0) {
        // 0x803303FC: nop
    
            goto L_803304A0;
    }
    // 0x803303FC: nop

    // 0x80330400: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330404: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80330408: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033040C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80330410: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x80330414: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330418: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033041C: addiu       $a1, $a1, 0x4434
    ctx->r5 = ADD32(ctx->r5, 0X4434);
    // 0x80330420: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330424: jal         0x80027464
    // 0x80330428: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80330428: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8033042C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330430: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330434: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330438: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033043C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330440: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330444: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330448: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8033044C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330450: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330454: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330458: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x8033045C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330460: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330464: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330468: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033046C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330470: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330474: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330478: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033047C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330480: sh          $t4, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r12;
    // 0x80330484: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80330488: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033048C: nop

    // 0x80330490: sh          $t7, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r15;
    // 0x80330494: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330498: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033049C: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
L_803304A0:
    // 0x803304A0: b           L_803304A8
    // 0x803304A4: nop

        goto L_803304A8;
    // 0x803304A4: nop

L_803304A8:
    // 0x803304A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803304AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803304B0: jr          $ra
    // 0x803304B4: nop

    return;
    // 0x803304B4: nop

;}
RECOMP_FUNC void func_bagular2_80331064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331064: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033106C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331070: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331074: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331078: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033107C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331084: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331088: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033108C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331090: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331094: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331098: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033109C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803310A0: nop

    // 0x803310A4: swc1        $f4, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f4.u32l;
    // 0x803310A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803310AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803310B0: lh          $t2, 0xEA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XEA);
    // 0x803310B4: nop

    // 0x803310B8: beq         $t2, $at, L_8033119C
    if (ctx->r10 == ctx->r1) {
        // 0x803310BC: nop
    
            goto L_8033119C;
    }
    // 0x803310BC: nop

    // 0x803310C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803310C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803310C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803310CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803310D0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803310D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803310D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803310DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803310E0: jal         0x800295C0
    // 0x803310E4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x803310E4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x803310E8: beq         $v0, $zero, L_803310FC
    if (ctx->r2 == 0) {
        // 0x803310EC: nop
    
            goto L_803310FC;
    }
    // 0x803310EC: nop

    // 0x803310F0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803310F4: b           L_80331108
    // 0x803310F8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
        goto L_80331108;
    // 0x803310F8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
L_803310FC:
    // 0x803310FC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80331100: nop

    // 0x80331104: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
L_80331108:
    // 0x80331108: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033110C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331110: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80331114: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80331118: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033111C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331120: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x80331124: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331128: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033112C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80331130: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331134: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331138: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x8033113C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331140: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80331144: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x80331148: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033114C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331150: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331154: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331158: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033115C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331160: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331164: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80331168: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033116C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331170: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80331174: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80331178: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033117C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331180: lwc1        $f16, 0x2C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80331184: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331188: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033118C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80331190: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331194: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331198: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_8033119C:
    // 0x8033119C: b           L_803311A4
    // 0x803311A0: nop

        goto L_803311A4;
    // 0x803311A0: nop

L_803311A4:
    // 0x803311A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803311A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803311AC: jr          $ra
    // 0x803311B0: nop

    return;
    // 0x803311B0: nop

;}
RECOMP_FUNC void func_bagular2_803341C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803341C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803341CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803341D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803341D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803341D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803341DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803341E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803341E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803341F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803341F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803341F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803341FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334200: nop

    // 0x80334204: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334208: nop

    // 0x8033420C: bne         $t1, $zero, L_80334250
    if (ctx->r9 != 0) {
        // 0x80334210: nop
    
            goto L_80334250;
    }
    // 0x80334210: nop

    // 0x80334214: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334218: nop

    // 0x8033421C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334220: nop

    // 0x80334224: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334228: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033422C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334230: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80334234: addiu       $t5, $t5, -0x4BE8
    ctx->r13 = ADD32(ctx->r13, -0X4BE8);
    // 0x80334238: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033423C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80334240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334244: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334248: jal         0x8001C0EC
    // 0x8033424C: addiu       $a3, $zero, 0x143
    ctx->r7 = ADD32(0, 0X143);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033424C: addiu       $a3, $zero, 0x143
    ctx->r7 = ADD32(0, 0X143);
    after_0:
L_80334250:
    // 0x80334250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334258: jal         0x8001B4AC
    // 0x8033425C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033425C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80334260: beq         $v0, $zero, L_803342D8
    if (ctx->r2 == 0) {
        // 0x80334264: nop
    
            goto L_803342D8;
    }
    // 0x80334264: nop

    // 0x80334268: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033426C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334270: lh          $t7, 0xC2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC2);
    // 0x80334274: nop

    // 0x80334278: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033427C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334280: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334284: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334288: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033428C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334290: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x80334294: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033429C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x803342A0: nop

    // 0x803342A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803342A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803342AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803342B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803342B4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803342B8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803342BC: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x803342C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342C8: jal         0x8002B114
    // 0x803342CC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x803342CC: nop

    after_2:
    // 0x803342D0: b           L_803343EC
    // 0x803342D4: nop

        goto L_803343EC;
    // 0x803342D4: nop

L_803342D8:
    // 0x803342D8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803342DC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803342E0: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x803342E4: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803342E8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803342EC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803342F0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803342F4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x803342F8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803342FC: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x80334300: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80334304: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80334308: nop

    // 0x8033430C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334310: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
    // 0x80334314: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80334318: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033431C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80334320: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80334324: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334328: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033432C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334330: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334334: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334338: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8033433C: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80334340: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80334344: nop

    // 0x80334348: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033434C: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x80334350: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334354: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334358: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033435C: nop

    // 0x80334360: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80334364: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80334368: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033436C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80334370: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334374: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334378: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8033437C: nop

    // 0x80334380: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    // 0x80334384: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334388: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033438C: lh          $t3, 0xC2($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XC2);
    // 0x80334390: nop

    // 0x80334394: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80334398: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x8033439C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803343A0: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x803343A4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803343A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803343AC: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803343B0: nop

    // 0x803343B4: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x803343B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803343BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803343C0: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x803343C4: nop

    // 0x803343C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803343CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803343D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803343D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803343D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803343DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803343E0: lwc1        $f8, 0x4170($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x803343E4: nop

    // 0x803343E8: swc1        $f8, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f8.u32l;
L_803343EC:
    // 0x803343EC: b           L_803343F4
    // 0x803343F0: nop

        goto L_803343F4;
    // 0x803343F0: nop

L_803343F4:
    // 0x803343F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803343F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803343FC: jr          $ra
    // 0x80334400: nop

    return;
    // 0x80334400: nop

;}
RECOMP_FUNC void func_bagular2_80330188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330188: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8033018C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330190: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330194: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330198: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033019C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803301A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803301A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803301A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803301AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803301B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803301B4: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x803301B8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x803301BC: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
L_803301C0:
    // 0x803301C0: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x803301C4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803301C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803301CC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803301D0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803301D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803301D8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803301DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803301E0: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x803301E4: nop

    // 0x803301E8: beq         $t3, $zero, L_80330298
    if (ctx->r11 == 0) {
        // 0x803301EC: nop
    
            goto L_80330298;
    }
    // 0x803301EC: nop

    // 0x803301F0: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x803301F4: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x803301F8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803301FC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330200: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330204: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330208: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033020C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330210: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330214: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80330218: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033021C: nop

    // 0x80330220: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330224: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x80330228: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8033022C: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80330230: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330234: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330238: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033023C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330240: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330244: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330248: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033024C: lwc1        $f10, 0x4158($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80330250: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330254: nop

    // 0x80330258: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033025C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80330260: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80330264: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80330268: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8033026C: nop

    // 0x80330270: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80330274: nop

    // 0x80330278: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8033027C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80330280: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80330284: nop

    // 0x80330288: bc1f        L_80330298
    if (!c1cs) {
        // 0x8033028C: nop
    
            goto L_80330298;
    }
    // 0x8033028C: nop

    // 0x80330290: b           L_803302C0
    // 0x80330294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_803302C0;
    // 0x80330294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80330298:
    // 0x80330298: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8033029C: nop

    // 0x803302A0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x803302A4: slti        $at, $t1, 0xE
    ctx->r1 = SIGNED(ctx->r9) < 0XE ? 1 : 0;
    // 0x803302A8: bne         $at, $zero, L_803301C0
    if (ctx->r1 != 0) {
        // 0x803302AC: sw          $t1, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r9;
            goto L_803301C0;
    }
    // 0x803302AC: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x803302B0: b           L_803302C0
    // 0x803302B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803302C0;
    // 0x803302B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803302B8: b           L_803302C0
    // 0x803302BC: nop

        goto L_803302C0;
    // 0x803302BC: nop

L_803302C0:
    // 0x803302C0: jr          $ra
    // 0x803302C4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x803302C4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_bagular2_803305C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803305C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803305C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x803305CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803305D0: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x803305D4: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x803305D8: nop

    // 0x803305DC: bne         $t6, $zero, L_8033087C
    if (ctx->r14 != 0) {
        // 0x803305E0: nop
    
            goto L_8033087C;
    }
    // 0x803305E0: nop

L_803305E4:
    // 0x803305E4: jal         0x80014E80
    // 0x803305E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x803305E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x803305EC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x803305F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x803305F4: nop

    // 0x803305F8: beq         $s0, $zero, L_8033062C
    if (ctx->r16 == 0) {
        // 0x803305FC: nop
    
            goto L_8033062C;
    }
    // 0x803305FC: nop

    // 0x80330600: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330604: beq         $s0, $at, L_803306BC
    if (ctx->r16 == ctx->r1) {
        // 0x80330608: nop
    
            goto L_803306BC;
    }
    // 0x80330608: nop

    // 0x8033060C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330610: beq         $s0, $at, L_8033074C
    if (ctx->r16 == ctx->r1) {
        // 0x80330614: nop
    
            goto L_8033074C;
    }
    // 0x80330614: nop

    // 0x80330618: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033061C: beq         $s0, $at, L_803307DC
    if (ctx->r16 == ctx->r1) {
        // 0x80330620: nop
    
            goto L_803307DC;
    }
    // 0x80330620: nop

    // 0x80330624: b           L_8033086C
    // 0x80330628: nop

        goto L_8033086C;
    // 0x80330628: nop

L_8033062C:
    // 0x8033062C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330630: addiu       $t7, $t7, 0x44D0
    ctx->r15 = ADD32(ctx->r15, 0X44D0);
    // 0x80330634: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80330638: nop

    // 0x8033063C: bne         $t8, $zero, L_803306B4
    if (ctx->r24 != 0) {
        // 0x80330640: nop
    
            goto L_803306B4;
    }
    // 0x80330640: nop

    // 0x80330644: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330648: addiu       $t0, $t0, 0x44D0
    ctx->r8 = ADD32(ctx->r8, 0X44D0);
    // 0x8033064C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330650: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x80330654: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80330658: sh          $t1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r9;
    // 0x8033065C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80330660: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330664: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330668: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033066C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330670: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330674: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330678: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033067C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330680: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330684: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330688: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8033068C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330690: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330694: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330698: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033069C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803306A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803306A4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803306A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306AC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803306B0: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
L_803306B4:
    // 0x803306B4: b           L_8033086C
    // 0x803306B8: nop

        goto L_8033086C;
    // 0x803306B8: nop

L_803306BC:
    // 0x803306BC: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x803306C0: addiu       $t6, $t6, 0x44D0
    ctx->r14 = ADD32(ctx->r14, 0X44D0);
    // 0x803306C4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803306C8: nop

    // 0x803306CC: bne         $t7, $zero, L_80330744
    if (ctx->r15 != 0) {
        // 0x803306D0: nop
    
            goto L_80330744;
    }
    // 0x803306D0: nop

    // 0x803306D4: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803306D8: addiu       $t9, $t9, 0x44D0
    ctx->r25 = ADD32(ctx->r25, 0X44D0);
    // 0x803306DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803306E0: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x803306E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x803306E8: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    // 0x803306EC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x803306F0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x803306F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803306F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803306FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330700: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330704: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330708: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033070C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330710: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330714: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80330718: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8033071C: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80330720: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330724: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330728: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033072C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330730: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330734: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330738: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033073C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330740: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
L_80330744:
    // 0x80330744: b           L_8033086C
    // 0x80330748: nop

        goto L_8033086C;
    // 0x80330748: nop

L_8033074C:
    // 0x8033074C: lui         $t5, 0x8033
    ctx->r13 = S32(0X8033 << 16);
    // 0x80330750: addiu       $t5, $t5, 0x44D0
    ctx->r13 = ADD32(ctx->r13, 0X44D0);
    // 0x80330754: lh          $t6, 0x4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4);
    // 0x80330758: nop

    // 0x8033075C: bne         $t6, $zero, L_803307D4
    if (ctx->r14 != 0) {
        // 0x80330760: nop
    
            goto L_803307D4;
    }
    // 0x80330760: nop

    // 0x80330764: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80330768: addiu       $t8, $t8, 0x44D0
    ctx->r24 = ADD32(ctx->r24, 0X44D0);
    // 0x8033076C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80330770: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x80330774: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330778: sh          $t9, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r25;
    // 0x8033077C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80330780: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80330784: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330788: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033078C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330790: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330794: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330798: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033079C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307A0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803307A4: swc1        $f16, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f16.u32l;
    // 0x803307A8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803307AC: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x803307B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803307B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803307BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803307C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803307C4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803307C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803307CC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803307D0: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_803307D4:
    // 0x803307D4: b           L_8033086C
    // 0x803307D8: nop

        goto L_8033086C;
    // 0x803307D8: nop

L_803307DC:
    // 0x803307DC: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803307E0: addiu       $t4, $t4, 0x44D0
    ctx->r12 = ADD32(ctx->r12, 0X44D0);
    // 0x803307E4: lh          $t5, 0x6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X6);
    // 0x803307E8: nop

    // 0x803307EC: bne         $t5, $zero, L_80330864
    if (ctx->r13 != 0) {
        // 0x803307F0: nop
    
            goto L_80330864;
    }
    // 0x803307F0: nop

    // 0x803307F4: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803307F8: addiu       $t7, $t7, 0x44D0
    ctx->r15 = ADD32(ctx->r15, 0X44D0);
    // 0x803307FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330800: sh          $t6, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r14;
    // 0x80330804: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80330808: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
    // 0x8033080C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80330810: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80330814: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330818: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033081C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330820: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330824: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330828: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033082C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330830: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330834: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80330838: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8033083C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80330840: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330844: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330848: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033084C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330850: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330854: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330858: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033085C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330860: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
L_80330864:
    // 0x80330864: b           L_8033086C
    // 0x80330868: nop

        goto L_8033086C;
    // 0x80330868: nop

L_8033086C:
    // 0x8033086C: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80330870: nop

    // 0x80330874: beq         $t3, $zero, L_803305E4
    if (ctx->r11 == 0) {
        // 0x80330878: nop
    
            goto L_803305E4;
    }
    // 0x80330878: nop

L_8033087C:
    // 0x8033087C: b           L_80330884
    // 0x80330880: nop

        goto L_80330884;
    // 0x80330880: nop

L_80330884:
    // 0x80330884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330888: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033088C: jr          $ra
    // 0x80330890: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80330890: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_bagular2_80331438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033143C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331440: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331444: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331448: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033144C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80331450: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331454: jal         0x800175F0
    // 0x80331458: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x80331458: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8033145C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80331460: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80331464: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80331468: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033146C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80331470: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80331474: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80331478: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033147C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80331480: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80331484: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331488: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033148C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331490: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331494: addiu       $a1, $a1, 0x4458
    ctx->r5 = ADD32(ctx->r5, 0X4458);
    // 0x80331498: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033149C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803314A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803314A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803314A8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803314AC: jal         0x80027464
    // 0x803314B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803314B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x803314B4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x803314B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803314BC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803314C0: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803314C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803314C8: jal         0x8001ABF4
    // 0x803314CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x803314CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803314D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803314D4: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803314D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803314DC: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x803314E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803314E4: jal         0x8001ABF4
    // 0x803314E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803314E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803314EC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803314F0: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803314F4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803314F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803314FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331500: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331504: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331508: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x8033150C: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80331510: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331514: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80331518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033151C: jal         0x8001ABF4
    // 0x80331520: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80331520: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x80331524: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331528: addiu       $t3, $t3, -0x4E70
    ctx->r11 = ADD32(ctx->r11, -0X4E70);
    // 0x8033152C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80331530: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80331534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033153C: jal         0x8001C0EC
    // 0x80331540: addiu       $a3, $zero, 0x13D
    ctx->r7 = ADD32(0, 0X13D);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80331540: addiu       $a3, $zero, 0x13D
    ctx->r7 = ADD32(0, 0X13D);
    after_5:
    // 0x80331544: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331548: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8033154C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331550: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331554: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331558: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033155C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331560: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x80331564: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80331568: addiu       $t7, $t7, -0x4CC8
    ctx->r15 = ADD32(ctx->r15, -0X4CC8);
    // 0x8033156C: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x80331570: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80331574: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80331578: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033157C: jal         0x8001C0EC
    // 0x80331580: addiu       $a3, $zero, 0x13E
    ctx->r7 = ADD32(0, 0X13E);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80331580: addiu       $a3, $zero, 0x13E
    ctx->r7 = ADD32(0, 0X13E);
    after_6:
    // 0x80331584: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80331588: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8033158C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331590: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331594: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331598: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033159C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803315A0: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x803315A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803315A8: addiu       $t6, $t6, -0x4BF4
    ctx->r14 = ADD32(ctx->r14, -0X4BF4);
    // 0x803315AC: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x803315B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x803315B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803315B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803315BC: jal         0x8001C0EC
    // 0x803315C0: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x803315C0: addiu       $a3, $zero, 0x13F
    ctx->r7 = ADD32(0, 0X13F);
    after_7:
    // 0x803315C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803315C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803315CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803315D0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x803315D4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x803315D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803315DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803315E0: jal         0x800295C0
    // 0x803315E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x803315E4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x803315E8: beq         $v0, $zero, L_8033161C
    if (ctx->r2 == 0) {
        // 0x803315EC: nop
    
            goto L_8033161C;
    }
    // 0x803315EC: nop

    // 0x803315F0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803315F4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803315F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803315FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331600: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331604: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331608: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033160C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331610: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331614: b           L_80331644
    // 0x80331618: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_80331644;
    // 0x80331618: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_8033161C:
    // 0x8033161C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331620: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80331624: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80331628: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033162C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80331630: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80331634: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80331638: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033163C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80331640: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_80331644:
    // 0x80331644: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331648: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033164C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331650: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331654: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331658: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033165C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331660: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80331664: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80331668: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x8033166C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331670: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80331674: nop

    // 0x80331678: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033167C: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x80331680: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331684: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331688: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033168C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331690: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331694: lwc1        $f6, 0x4484($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4484);
    // 0x80331698: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033169C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803316A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316A4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803316A8: swc1        $f6, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f6.u32l;
    // 0x803316AC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803316B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803316B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803316BC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803316C0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803316C4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803316C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803316CC: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x803316D0: sh          $t0, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r8;
    // 0x803316D4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803316D8: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803316DC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803316E0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803316E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803316E8: lwc1        $f8, 0x4488($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4488);
    // 0x803316EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803316F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803316F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803316F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803316FC: swc1        $f8, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f8.u32l;
    // 0x80331700: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331704: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331708: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033170C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331710: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331714: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331718: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033171C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331720: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80331724: sh          $t5, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r13;
    // 0x80331728: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033172C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331730: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80331734: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331738: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033173C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80331740: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331744: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331748: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033174C: swc1        $f10, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f10.u32l;
    // 0x80331750: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331754: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331758: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8033175C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331760: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331764: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80331768: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033176C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331770: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x80331774: sh          $t1, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = ctx->r9;
    // 0x80331778: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
L_8033177C:
    // 0x8033177C: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x80331780: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80331784: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80331788: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033178C: sh          $zero, 0x44D0($at)
    MEM_H(0X44D0, ctx->r1) = 0;
    // 0x80331790: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80331794: nop

    // 0x80331798: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x8033179C: sll         $t8, $t5, 16
    ctx->r24 = S32(ctx->r13 << 16);
    // 0x803317A0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803317A4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x803317A8: bne         $at, $zero, L_8033177C
    if (ctx->r1 != 0) {
        // 0x803317AC: sh          $t5, 0x22($sp)
        MEM_H(0X22, ctx->r29) = ctx->r13;
            goto L_8033177C;
    }
    // 0x803317AC: sh          $t5, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r13;
    // 0x803317B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317BC: addiu       $a2, $zero, 0x3B
    ctx->r6 = ADD32(0, 0X3B);
    // 0x803317C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803317C4: jal         0x800175F0
    // 0x803317C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x803317C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x803317CC: b           L_803317D4
    // 0x803317D0: nop

        goto L_803317D4;
    // 0x803317D0: nop

L_803317D4:
    // 0x803317D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803317D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803317DC: jr          $ra
    // 0x803317E0: nop

    return;
    // 0x803317E0: nop

;}
RECOMP_FUNC void func_bagular2_8033124C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033124C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331254: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331258: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033125C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331268: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033126C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331270: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331274: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331278: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033127C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80331280: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80331284: nop

    // 0x80331288: lh          $t1, 0xBA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBA);
    // 0x8033128C: nop

    // 0x80331290: bne         $t1, $zero, L_803312E4
    if (ctx->r9 != 0) {
        // 0x80331294: nop
    
            goto L_803312E4;
    }
    // 0x80331294: nop

    // 0x80331298: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033129C: nop

    // 0x803312A0: lwc1        $f4, 0xD8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XD8);
    // 0x803312A4: nop

    // 0x803312A8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x803312AC: swc1        $f6, 0xD8($t2)
    MEM_W(0XD8, ctx->r10) = ctx->f6.u32l;
    // 0x803312B0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803312B4: nop

    // 0x803312B8: lwc1        $f12, 0x20($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X20);
    // 0x803312BC: lwc1        $f14, 0xD8($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0XD8);
    // 0x803312C0: jal         0x80015538
    // 0x803312C4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x803312C4: nop

    after_0:
    // 0x803312C8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803312CC: nop

    // 0x803312D0: swc1        $f0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f0.u32l;
    // 0x803312D4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803312D8: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x803312DC: b           L_80331320
    // 0x803312E0: sh          $t5, 0xBA($t6)
    MEM_H(0XBA, ctx->r14) = ctx->r13;
        goto L_80331320;
    // 0x803312E0: sh          $t5, 0xBA($t6)
    MEM_H(0XBA, ctx->r14) = ctx->r13;
L_803312E4:
    // 0x803312E4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x803312E8: nop

    // 0x803312EC: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x803312F0: lwc1        $f14, 0xD8($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0XD8);
    // 0x803312F4: jal         0x80015538
    // 0x803312F8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803312F8: nop

    after_1:
    // 0x803312FC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331300: nop

    // 0x80331304: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x80331308: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033130C: nop

    // 0x80331310: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x80331314: nop

    // 0x80331318: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8033131C: sh          $t1, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = ctx->r9;
L_80331320:
    // 0x80331320: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80331324: nop

    // 0x80331328: lh          $t3, 0xB8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB8);
    // 0x8033132C: nop

    // 0x80331330: bne         $t3, $zero, L_803313C4
    if (ctx->r11 != 0) {
        // 0x80331334: nop
    
            goto L_803313C4;
    }
    // 0x80331334: nop

    // 0x80331338: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033133C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80331340: lwc1        $f8, 0xDC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XDC);
    // 0x80331344: nop

    // 0x80331348: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8033134C: nop

    // 0x80331350: bc1f        L_8033137C
    if (!c1cs) {
        // 0x80331354: nop
    
            goto L_8033137C;
    }
    // 0x80331354: nop

    // 0x80331358: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x8033135C: lwc1        $f16, 0x4480($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4480);
    // 0x80331360: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331364: nop

    // 0x80331368: swc1        $f16, 0xDC($t5)
    MEM_W(0XDC, ctx->r13) = ctx->f16.u32l;
    // 0x8033136C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80331370: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80331374: b           L_803313A0
    // 0x80331378: sh          $t6, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r14;
        goto L_803313A0;
    // 0x80331378: sh          $t6, 0xB8($t7)
    MEM_H(0XB8, ctx->r15) = ctx->r14;
L_8033137C:
    // 0x8033137C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80331380: nop

    // 0x80331384: lwc1        $f18, 0xDC($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0XDC);
    // 0x80331388: nop

    // 0x8033138C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80331390: swc1        $f4, 0xDC($t8)
    MEM_W(0XDC, ctx->r24) = ctx->f4.u32l;
    // 0x80331394: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80331398: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x8033139C: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
L_803313A0:
    // 0x803313A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803313A4: nop

    // 0x803313A8: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    // 0x803313AC: lwc1        $f14, 0xDC($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0XDC);
    // 0x803313B0: jal         0x80015538
    // 0x803313B4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x803313B4: nop

    after_2:
    // 0x803313B8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x803313BC: b           L_80331420
    // 0x803313C0: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
        goto L_80331420;
    // 0x803313C0: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
L_803313C4:
    // 0x803313C4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803313C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803313CC: lwc1        $f6, 0xDC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XDC);
    // 0x803313D0: nop

    // 0x803313D4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x803313D8: nop

    // 0x803313DC: bc1t        L_80331408
    if (c1cs) {
        // 0x803313E0: nop
    
            goto L_80331408;
    }
    // 0x803313E0: nop

    // 0x803313E4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803313E8: nop

    // 0x803313EC: lwc1        $f12, 0x18($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X18);
    // 0x803313F0: lwc1        $f14, 0xDC($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XDC);
    // 0x803313F4: jal         0x80015538
    // 0x803313F8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803313F8: nop

    after_3:
    // 0x803313FC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80331400: nop

    // 0x80331404: swc1        $f0, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f0.u32l;
L_80331408:
    // 0x80331408: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033140C: nop

    // 0x80331410: lh          $t7, 0xB8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB8);
    // 0x80331414: nop

    // 0x80331418: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8033141C: sh          $t8, 0xB8($t6)
    MEM_H(0XB8, ctx->r14) = ctx->r24;
L_80331420:
    // 0x80331420: b           L_80331428
    // 0x80331424: nop

        goto L_80331428;
    // 0x80331424: nop

L_80331428:
    // 0x80331428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033142C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331430: jr          $ra
    // 0x80331434: nop

    return;
    // 0x80331434: nop

;}
RECOMP_FUNC void func_bagular2_80333544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333544: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333548: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033354C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80333550: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333554: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333558: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033355C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333564: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333568: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033356C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333570: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333574: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333578: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033357C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333580: nop

    // 0x80333584: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333588: nop

    // 0x8033358C: bne         $t1, $zero, L_8033361C
    if (ctx->r9 != 0) {
        // 0x80333590: nop
    
            goto L_8033361C;
    }
    // 0x80333590: nop

    // 0x80333594: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333598: nop

    // 0x8033359C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803335A0: nop

    // 0x803335A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803335A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803335AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803335B0: nop

    // 0x803335B4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803335B8: nop

    // 0x803335BC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803335C0: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x803335C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803335C8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803335CC: nop

    // 0x803335D0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x803335D4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803335D8: nop

    // 0x803335DC: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
    // 0x803335E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803335E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803335E8: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803335EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803335F0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803335F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803335F8: jal         0x8001ABF4
    // 0x803335FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803335FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80333600: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333604: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333608: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x8033360C: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80333610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333614: jal         0x8001ABF4
    // 0x80333618: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333618: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_8033361C:
    // 0x8033361C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333620: nop

    // 0x80333624: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x80333628: nop

    // 0x8033362C: bne         $t1, $zero, L_80333684
    if (ctx->r9 != 0) {
        // 0x80333630: nop
    
            goto L_80333684;
    }
    // 0x80333630: nop

    // 0x80333634: jal         0x80014E80
    // 0x80333638: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80333638: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_2:
    // 0x8033363C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80333640: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80333644: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x80333648: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033364C: jal         0x80015538
    // 0x80333650: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80333650: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x80333654: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333658: nop

    // 0x8033365C: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x80333660: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333664: nop

    // 0x80333668: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x8033366C: nop

    // 0x80333670: swc1        $f8, 0xE0($t2)
    MEM_W(0XE0, ctx->r10) = ctx->f8.u32l;
    // 0x80333674: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333678: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x8033367C: b           L_8033369C
    // 0x80333680: sh          $t6, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r14;
        goto L_8033369C;
    // 0x80333680: sh          $t6, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r14;
L_80333684:
    // 0x80333684: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333688: nop

    // 0x8033368C: lh          $t8, 0xB6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB6);
    // 0x80333690: nop

    // 0x80333694: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80333698: sh          $t9, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r25;
L_8033369C:
    // 0x8033369C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803336A0: nop

    // 0x803336A4: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803336A8: nop

    // 0x803336AC: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x803336B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336B8: jal         0x8002A8B4
    // 0x803336BC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x803336BC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x803336C0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803336C4: nop

    // 0x803336C8: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803336CC: nop

    // 0x803336D0: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x803336D4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803336D8: nop

    // 0x803336DC: lwc1        $f18, 0xE0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XE0);
    // 0x803336E0: nop

    // 0x803336E4: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
    // 0x803336E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803336EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803336F0: jal         0x80029C40
    // 0x803336F4: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x803336F4: nop

    after_5:
    // 0x803336F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803336FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333700: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333704: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333708: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8033370C: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x80333710: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333714: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80333718: jal         0x80029018
    // 0x8033371C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x8033371C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80333720: beq         $v0, $zero, L_80333758
    if (ctx->r2 == 0) {
        // 0x80333724: nop
    
            goto L_80333758;
    }
    // 0x80333724: nop

    // 0x80333728: jal         0x800297DC
    // 0x8033372C: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x8033372C: nop

    after_7:
    // 0x80333730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333738: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8033373C: jal         0x80029824
    // 0x80333740: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x80333740: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80333744: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333748: nop

    // 0x8033374C: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80333750: nop

    // 0x80333754: swc1        $f8, 0xE0($t4)
    MEM_W(0XE0, ctx->r12) = ctx->f8.u32l;
L_80333758:
    // 0x80333758: jal         0x8033124C
    // 0x8033375C: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_9;
    // 0x8033375C: nop

    after_9:
    // 0x80333760: jal         0x803311B4
    // 0x80333764: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_10;
    // 0x80333764: nop

    after_10:
    // 0x80333768: jal         0x80330894
    // 0x8033376C: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_11;
    // 0x8033376C: nop

    after_11:
    // 0x80333770: jal         0x80331064
    // 0x80333774: nop

    func_bagular2_80331064(rdram, ctx);
        goto after_12;
    // 0x80333774: nop

    after_12:
    // 0x80333778: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033377C: nop

    // 0x80333780: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80333784: nop

    // 0x80333788: bne         $t6, $zero, L_803337A0
    if (ctx->r14 != 0) {
        // 0x8033378C: nop
    
            goto L_803337A0;
    }
    // 0x8033378C: nop

    // 0x80333790: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80333794: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80333798: jal         0x803304B8
    // 0x8033379C: nop

    func_bagular2_803304B8(rdram, ctx);
        goto after_13;
    // 0x8033379C: nop

    after_13:
L_803337A0:
    // 0x803337A0: jal         0x803302C8
    // 0x803337A4: nop

    func_bagular2_803302C8(rdram, ctx);
        goto after_14;
    // 0x803337A4: nop

    after_14:
    // 0x803337A8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803337AC: nop

    // 0x803337B0: lh          $t8, 0xAE($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XAE);
    // 0x803337B4: nop

    // 0x803337B8: bne         $t8, $zero, L_803337FC
    if (ctx->r24 != 0) {
        // 0x803337BC: nop
    
            goto L_803337FC;
    }
    // 0x803337BC: nop

    // 0x803337C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803337C4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803337C8: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803337CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803337D0: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803337D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803337D8: jal         0x8001ABF4
    // 0x803337DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_15;
    // 0x803337DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x803337E0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803337E4: nop

    // 0x803337E8: lh          $t7, 0xAE($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XAE);
    // 0x803337EC: nop

    // 0x803337F0: addiu       $t0, $t7, -0x1
    ctx->r8 = ADD32(ctx->r15, -0X1);
    // 0x803337F4: b           L_80333814
    // 0x803337F8: sh          $t0, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r8;
        goto L_80333814;
    // 0x803337F8: sh          $t0, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r8;
L_803337FC:
    // 0x803337FC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333800: nop

    // 0x80333804: lh          $t3, 0xAE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAE);
    // 0x80333808: nop

    // 0x8033380C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80333810: sh          $t4, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = ctx->r12;
L_80333814:
    // 0x80333814: b           L_8033381C
    // 0x80333818: nop

        goto L_8033381C;
    // 0x80333818: nop

L_8033381C:
    // 0x8033381C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80333820: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80333824: jr          $ra
    // 0x80333828: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80333828: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_bagular2_80330CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330CD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330CD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330CD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330CDC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330CE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330CE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330CE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330CF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330CF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330CF8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330CFC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330D00: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330D04: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330D0C: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80330D10: nop

    // 0x80330D14: beq         $t1, $at, L_80330EF0
    if (ctx->r9 == ctx->r1) {
        // 0x80330D18: nop
    
            goto L_80330EF0;
    }
    // 0x80330D18: nop

    // 0x80330D1C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D20: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330D24: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330D28: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80330D2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330D30: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330D34: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330D38: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330D3C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330D40: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80330D44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80330D48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330D4C: lwc1        $f4, 0xD4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80330D50: nop

    // 0x80330D54: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80330D58: swc1        $f8, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f8.u32l;
    // 0x80330D5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80330D60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330D64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D6C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80330D70: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80330D74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330D78: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330D7C: jal         0x800295C0
    // 0x80330D80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x80330D80: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80330D84: beq         $v0, $zero, L_80330D98
    if (ctx->r2 == 0) {
        // 0x80330D88: nop
    
            goto L_80330D98;
    }
    // 0x80330D88: nop

    // 0x80330D8C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80330D90: b           L_80330DA4
    // 0x80330D94: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
        goto L_80330DA4;
    // 0x80330D94: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_80330D98:
    // 0x80330D98: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80330D9C: nop

    // 0x80330DA0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_80330DA4:
    // 0x80330DA4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DAC: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x80330DB0: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80330DB4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330DB8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330DBC: lwc1        $f8, 0x24($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80330DC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330DC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330DC8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80330DCC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330DD0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330DD4: swc1        $f10, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f10.u32l;
    // 0x80330DD8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DE0: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x80330DE4: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330DE8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330DEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330DF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330DF4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330DF8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330DFC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330E00: lwc1        $f18, 0x4154($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80330E04: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80330E08: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330E0C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80330E10: nop

    // 0x80330E14: bc1f        L_80330E78
    if (!c1cs) {
        // 0x80330E18: nop
    
            goto L_80330E78;
    }
    // 0x80330E18: nop

    // 0x80330E1C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80330E24: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80330E28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E2C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330E30: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330E34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330E38: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330E3C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330E40: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330E44: swc1        $f8, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f8.u32l;
    // 0x80330E48: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E4C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330E50: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x80330E54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330E58: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330E5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330E60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330E64: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330E68: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330E6C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330E70: b           L_80330EBC
    // 0x80330E74: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
        goto L_80330EBC;
    // 0x80330E74: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_80330E78:
    // 0x80330E78: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E7C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80330E80: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80330E84: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330E88: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330E8C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330E90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330E94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330E98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330E9C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80330EA0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330EA4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80330EA8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80330EAC: lwc1        $f6, 0xD4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x80330EB0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80330EB4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80330EB8: swc1        $f8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f8.u32l;
L_80330EBC:
    // 0x80330EBC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EC4: lh          $t5, 0xEA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEA);
    // 0x80330EC8: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80330ECC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330ED0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330ED4: lwc1        $f16, 0x2C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80330ED8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330EDC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330EE0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80330EE4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330EE8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330EEC: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_80330EF0:
    // 0x80330EF0: b           L_80330EF8
    // 0x80330EF4: nop

        goto L_80330EF8;
    // 0x80330EF4: nop

L_80330EF8:
    // 0x80330EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330EFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330F00: jr          $ra
    // 0x80330F04: nop

    return;
    // 0x80330F04: nop

;}
RECOMP_FUNC void func_bagular2_80333370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333370: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80333374: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333378: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033337C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333380: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333384: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333388: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033338C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333390: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333394: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333398: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033339C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803333A0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803333A4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803333A8: nop

    // 0x803333AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803333B0: nop

    // 0x803333B4: bne         $t1, $zero, L_80333424
    if (ctx->r9 != 0) {
        // 0x803333B8: nop
    
            goto L_80333424;
    }
    // 0x803333B8: nop

    // 0x803333BC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803333C0: nop

    // 0x803333C4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803333C8: nop

    // 0x803333CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803333D0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803333D4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803333D8: nop

    // 0x803333DC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803333E0: nop

    // 0x803333E4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803333E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803333F0: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803333F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333F8: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803333FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333400: jal         0x8001ABF4
    // 0x80333404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80333404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80333408: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033340C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333410: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80333414: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x80333418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033341C: jal         0x8001ABF4
    // 0x80333420: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80333420: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_80333424:
    // 0x80333424: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333428: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033342C: jal         0x8002A8B4
    // 0x80333430: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80333430: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_2:
    // 0x80333434: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333438: nop

    // 0x8033343C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80333440: nop

    // 0x80333444: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80333448: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033344C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80333450: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333454: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333458: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8033345C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x80333460: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80333464: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80333468: jal         0x800295C0
    // 0x8033346C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x8033346C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80333470: beq         $v0, $zero, L_80333484
    if (ctx->r2 == 0) {
        // 0x80333474: nop
    
            goto L_80333484;
    }
    // 0x80333474: nop

    // 0x80333478: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033347C: b           L_80333490
    // 0x80333480: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_80333490;
    // 0x80333480: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_80333484:
    // 0x80333484: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80333488: nop

    // 0x8033348C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
L_80333490:
    // 0x80333490: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80333494: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333498: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033349C: nop

    // 0x803334A0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x803334A4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x803334A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803334AC: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803334B0: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803334B4: nop

    // 0x803334B8: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x803334BC: nop

    // 0x803334C0: bc1f        L_80333500
    if (!c1cs) {
        // 0x803334C4: nop
    
            goto L_80333500;
    }
    // 0x803334C4: nop

    // 0x803334C8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x803334CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803334D0: nop

    // 0x803334D4: swc1        $f16, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f16.u32l;
    // 0x803334D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803334DC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803334E0: nop

    // 0x803334E4: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x803334E8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803334EC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x803334F0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x803334F4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803334F8: b           L_80333514
    // 0x803334FC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_80333514;
    // 0x803334FC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80333500:
    // 0x80333500: lui         $at, 0xC140
    ctx->r1 = S32(0XC140 << 16);
    // 0x80333504: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333508: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033350C: nop

    // 0x80333510: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
L_80333514:
    // 0x80333514: jal         0x8033124C
    // 0x80333518: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_4;
    // 0x80333518: nop

    after_4:
    // 0x8033351C: jal         0x80330894
    // 0x80333520: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_5;
    // 0x80333520: nop

    after_5:
    // 0x80333524: jal         0x80330CD0
    // 0x80333528: nop

    func_bagular2_80330CD0(rdram, ctx);
        goto after_6;
    // 0x80333528: nop

    after_6:
    // 0x8033352C: b           L_80333534
    // 0x80333530: nop

        goto L_80333534;
    // 0x80333530: nop

L_80333534:
    // 0x80333534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333538: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033353C: jr          $ra
    // 0x80333540: nop

    return;
    // 0x80333540: nop

;}
RECOMP_FUNC void func_bagular2_80333074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333074: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033307C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333080: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333084: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333088: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033308C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333090: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333094: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333098: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033309C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803330A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803330A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803330A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803330AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803330B0: nop

    // 0x803330B4: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x803330B8: nop

    // 0x803330BC: bne         $t1, $zero, L_8033311C
    if (ctx->r9 != 0) {
        // 0x803330C0: nop
    
            goto L_8033311C;
    }
    // 0x803330C0: nop

    // 0x803330C4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803330C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803330CC: lh          $s0, 0xA6($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA6);
    // 0x803330D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803330D4: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x803330D8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x803330DC: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803330E0: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x803330E4: jal         0x8001BB34
    // 0x803330E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803330E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x803330EC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803330F0: nop

    // 0x803330F4: lh          $s0, 0xA6($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XA6);
    // 0x803330F8: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x803330FC: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x80333100: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80333104: sltiu       $t7, $s0, 0x1
    ctx->r15 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333108: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8033310C: jal         0x8001BB34
    // 0x80333110: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80333110: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80333114: b           L_8033316C
    // 0x80333118: nop

        goto L_8033316C;
    // 0x80333118: nop

L_8033311C:
    // 0x8033311C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80333120: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333124: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x80333128: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033312C: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x80333130: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80333134: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333138: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x8033313C: jal         0x8001BB34
    // 0x80333140: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80333140: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80333144: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80333148: nop

    // 0x8033314C: lh          $s0, 0x108($t1)
    ctx->r16 = MEM_H(ctx->r9, 0X108);
    // 0x80333150: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x80333154: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80333158: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8033315C: sltiu       $t3, $s0, 0x1
    ctx->r11 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333160: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80333164: jal         0x8001BB34
    // 0x80333168: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80333168: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
L_8033316C:
    // 0x8033316C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333170: nop

    // 0x80333174: lh          $s0, 0xA4($t4)
    ctx->r16 = MEM_H(ctx->r12, 0XA4);
    // 0x80333178: nop

    // 0x8033317C: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x80333180: bne         $at, $zero, L_8033319C
    if (ctx->r1 != 0) {
        // 0x80333184: nop
    
            goto L_8033319C;
    }
    // 0x80333184: nop

    // 0x80333188: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x8033318C: beq         $s0, $at, L_80333218
    if (ctx->r16 == ctx->r1) {
        // 0x80333190: nop
    
            goto L_80333218;
    }
    // 0x80333190: nop

    // 0x80333194: b           L_80333228
    // 0x80333198: nop

        goto L_80333228;
    // 0x80333198: nop

L_8033319C:
    // 0x8033319C: addiu       $t6, $s0, -0x1
    ctx->r14 = ADD32(ctx->r16, -0X1);
    // 0x803331A0: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x803331A4: beq         $at, $zero, L_80333228
    if (ctx->r1 == 0) {
        // 0x803331A8: nop
    
            goto L_80333228;
    }
    // 0x803331A8: nop

    // 0x803331AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803331B0: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x803331B4: addu        $at, $at, $t6
    gpr jr_addend_803331C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803331B8: lw          $t6, 0x44B8($at)
    ctx->r14 = ADD32(ctx->r1, 0X44B8);
    // 0x803331BC: nop

    // 0x803331C0: jr          $t6
    // 0x803331C4: nop

    switch (jr_addend_803331C0 >> 2) {
        case 0: goto L_803331C8; break;
        case 1: goto L_803331D8; break;
        case 2: goto L_803331E8; break;
        case 3: goto L_803331F8; break;
        case 4: goto L_80333208; break;
        default: switch_error(__func__, 0x803331C0, 0x803344B8);
    }
    // 0x803331C4: nop

L_803331C8:
    // 0x803331C8: jal         0x80331D0C
    // 0x803331CC: nop

    func_bagular2_80331D0C(rdram, ctx);
        goto after_4;
    // 0x803331CC: nop

    after_4:
    // 0x803331D0: b           L_80333230
    // 0x803331D4: nop

        goto L_80333230;
    // 0x803331D4: nop

L_803331D8:
    // 0x803331D8: jal         0x80331E90
    // 0x803331DC: nop

    func_bagular2_80331E90(rdram, ctx);
        goto after_5;
    // 0x803331DC: nop

    after_5:
    // 0x803331E0: b           L_80333230
    // 0x803331E4: nop

        goto L_80333230;
    // 0x803331E4: nop

L_803331E8:
    // 0x803331E8: jal         0x80332718
    // 0x803331EC: nop

    func_bagular2_80332718(rdram, ctx);
        goto after_6;
    // 0x803331EC: nop

    after_6:
    // 0x803331F0: b           L_80333230
    // 0x803331F4: nop

        goto L_80333230;
    // 0x803331F4: nop

L_803331F8:
    // 0x803331F8: jal         0x803328F8
    // 0x803331FC: nop

    func_bagular2_803328F8(rdram, ctx);
        goto after_7;
    // 0x803331FC: nop

    after_7:
    // 0x80333200: b           L_80333230
    // 0x80333204: nop

        goto L_80333230;
    // 0x80333204: nop

L_80333208:
    // 0x80333208: jal         0x80332B6C
    // 0x8033320C: nop

    func_bagular2_80332B6C(rdram, ctx);
        goto after_8;
    // 0x8033320C: nop

    after_8:
    // 0x80333210: b           L_80333230
    // 0x80333214: nop

        goto L_80333230;
    // 0x80333214: nop

L_80333218:
    // 0x80333218: jal         0x80332C58
    // 0x8033321C: nop

    func_bagular2_80332C58(rdram, ctx);
        goto after_9;
    // 0x8033321C: nop

    after_9:
    // 0x80333220: b           L_80333230
    // 0x80333224: nop

        goto L_80333230;
    // 0x80333224: nop

L_80333228:
    // 0x80333228: b           L_80333230
    // 0x8033322C: nop

        goto L_80333230;
    // 0x8033322C: nop

L_80333230:
    // 0x80333230: b           L_80333238
    // 0x80333234: nop

        goto L_80333238;
    // 0x80333234: nop

L_80333238:
    // 0x80333238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033323C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333240: jr          $ra
    // 0x80333244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80333244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_bagular2_80330000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80330004: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330008: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033000C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330010: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330014: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330018: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033001C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330020: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330024: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330028: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033002C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80330030: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80330034: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_80330038:
    // 0x80330038: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033003C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80330040: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330044: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330048: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033004C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330050: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330054: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330058: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x8033005C: nop

    // 0x80330060: beq         $t3, $zero, L_80330158
    if (ctx->r11 == 0) {
        // 0x80330064: nop
    
            goto L_80330158;
    }
    // 0x80330064: nop

    // 0x80330068: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8033006C: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80330070: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330074: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330078: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033007C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330080: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330084: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330088: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033008C: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x80330090: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80330094: nop

    // 0x80330098: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033009C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803300A0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x803300A4: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x803300A8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803300AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803300B4: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x803300B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803300BC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300C0: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803300C4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803300C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300CC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803300D0: lwc1        $f4, 0x4154($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x803300D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803300D8: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x803300DC: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x803300E0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x803300E4: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x803300E8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803300EC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803300F0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803300F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803300F8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803300FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330100: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330104: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x80330108: lwc1        $f10, 0x8($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033010C: nop

    // 0x80330110: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80330114: swc1        $f16, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f16.u32l;
    // 0x80330118: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8033011C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80330120: mul.s       $f18, $f4, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80330124: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80330128: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8033012C: nop

    // 0x80330130: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80330134: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80330138: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8033013C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80330140: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80330144: nop

    // 0x80330148: bc1f        L_80330158
    if (!c1cs) {
        // 0x8033014C: nop
    
            goto L_80330158;
    }
    // 0x8033014C: nop

    // 0x80330150: b           L_80330180
    // 0x80330154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80330180;
    // 0x80330154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80330158:
    // 0x80330158: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033015C: nop

    // 0x80330160: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330164: slti        $at, $t4, 0x6
    ctx->r1 = SIGNED(ctx->r12) < 0X6 ? 1 : 0;
    // 0x80330168: bne         $at, $zero, L_80330038
    if (ctx->r1 != 0) {
        // 0x8033016C: sw          $t4, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r12;
            goto L_80330038;
    }
    // 0x8033016C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80330170: b           L_80330180
    // 0x80330174: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80330180;
    // 0x80330174: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80330178: b           L_80330180
    // 0x8033017C: nop

        goto L_80330180;
    // 0x8033017C: nop

L_80330180:
    // 0x80330180: jr          $ra
    // 0x80330184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80330184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_bagular2_803328F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803328FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332900: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80332904: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332908: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033290C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332910: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332914: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332918: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033291C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332920: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332924: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332928: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033292C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332930: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332934: nop

    // 0x80332938: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033293C: nop

    // 0x80332940: bne         $t1, $zero, L_803329D0
    if (ctx->r9 != 0) {
        // 0x80332944: nop
    
            goto L_803329D0;
    }
    // 0x80332944: nop

    // 0x80332948: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033294C: nop

    // 0x80332950: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332954: nop

    // 0x80332958: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033295C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332960: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332964: nop

    // 0x80332968: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033296C: nop

    // 0x80332970: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332974: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80332978: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033297C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332980: nop

    // 0x80332984: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80332988: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033298C: nop

    // 0x80332990: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
    // 0x80332994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332998: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033299C: addiu       $a3, $a3, -0x4D70
    ctx->r7 = ADD32(ctx->r7, -0X4D70);
    // 0x803329A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803329A4: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803329A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329AC: jal         0x8001ABF4
    // 0x803329B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x803329B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803329B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803329B8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803329BC: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x803329C0: addiu       $a3, $a3, -0x4C2C
    ctx->r7 = ADD32(ctx->r7, -0X4C2C);
    // 0x803329C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803329C8: jal         0x8001ABF4
    // 0x803329CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x803329CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_803329D0:
    // 0x803329D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803329D4: nop

    // 0x803329D8: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x803329DC: nop

    // 0x803329E0: bne         $t1, $zero, L_80332A38
    if (ctx->r9 != 0) {
        // 0x803329E4: nop
    
            goto L_80332A38;
    }
    // 0x803329E4: nop

    // 0x803329E8: jal         0x80014E80
    // 0x803329EC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x803329EC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_2:
    // 0x803329F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803329F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803329F8: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x803329FC: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80332A00: jal         0x80015538
    // 0x80332A04: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80332A04: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x80332A08: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A0C: nop

    // 0x80332A10: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x80332A14: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A18: nop

    // 0x80332A1C: lwc1        $f8, 0x3C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80332A20: nop

    // 0x80332A24: swc1        $f8, 0xE0($t2)
    MEM_W(0XE0, ctx->r10) = ctx->f8.u32l;
    // 0x80332A28: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A2C: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x80332A30: b           L_80332A50
    // 0x80332A34: sh          $t6, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r14;
        goto L_80332A50;
    // 0x80332A34: sh          $t6, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r14;
L_80332A38:
    // 0x80332A38: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A3C: nop

    // 0x80332A40: lh          $t8, 0xB6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB6);
    // 0x80332A44: nop

    // 0x80332A48: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80332A4C: sh          $t9, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r25;
L_80332A50:
    // 0x80332A50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A54: nop

    // 0x80332A58: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332A5C: nop

    // 0x80332A60: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x80332A64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A6C: jal         0x8002A8B4
    // 0x80332A70: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80332A70: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_4:
    // 0x80332A74: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A78: nop

    // 0x80332A7C: lwc1        $f16, 0x3C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80332A80: nop

    // 0x80332A84: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x80332A88: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A8C: nop

    // 0x80332A90: lwc1        $f18, 0xE0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XE0);
    // 0x80332A94: nop

    // 0x80332A98: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
    // 0x80332A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AA4: jal         0x80029C40
    // 0x80332AA8: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80332AA8: nop

    after_5:
    // 0x80332AAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332AB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332AB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332ABC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80332AC0: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x80332AC4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332AC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332ACC: jal         0x80029018
    // 0x80332AD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x80332AD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80332AD4: beq         $v0, $zero, L_80332B0C
    if (ctx->r2 == 0) {
        // 0x80332AD8: nop
    
            goto L_80332B0C;
    }
    // 0x80332AD8: nop

    // 0x80332ADC: jal         0x800297DC
    // 0x80332AE0: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x80332AE0: nop

    after_7:
    // 0x80332AE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80332AF0: jal         0x80029824
    // 0x80332AF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x80332AF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80332AF8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332AFC: nop

    // 0x80332B00: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332B04: nop

    // 0x80332B08: swc1        $f8, 0xE0($t4)
    MEM_W(0XE0, ctx->r12) = ctx->f8.u32l;
L_80332B0C:
    // 0x80332B0C: jal         0x8033124C
    // 0x80332B10: nop

    func_bagular2_8033124C(rdram, ctx);
        goto after_9;
    // 0x80332B10: nop

    after_9:
    // 0x80332B14: jal         0x803311B4
    // 0x80332B18: nop

    func_bagular2_803311B4(rdram, ctx);
        goto after_10;
    // 0x80332B18: nop

    after_10:
    // 0x80332B1C: jal         0x80330894
    // 0x80332B20: nop

    func_bagular2_80330894(rdram, ctx);
        goto after_11;
    // 0x80332B20: nop

    after_11:
    // 0x80332B24: jal         0x80331064
    // 0x80332B28: nop

    func_bagular2_80331064(rdram, ctx);
        goto after_12;
    // 0x80332B28: nop

    after_12:
    // 0x80332B2C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B30: nop

    // 0x80332B34: lh          $t6, 0xAA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAA);
    // 0x80332B38: nop

    // 0x80332B3C: bne         $t6, $zero, L_80332B54
    if (ctx->r14 != 0) {
        // 0x80332B40: nop
    
            goto L_80332B54;
    }
    // 0x80332B40: nop

    // 0x80332B44: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80332B48: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80332B4C: jal         0x803303AC
    // 0x80332B50: nop

    func_bagular2_803303AC(rdram, ctx);
        goto after_13;
    // 0x80332B50: nop

    after_13:
L_80332B54:
    // 0x80332B54: b           L_80332B5C
    // 0x80332B58: nop

        goto L_80332B5C;
    // 0x80332B58: nop

L_80332B5C:
    // 0x80332B5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80332B60: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80332B64: jr          $ra
    // 0x80332B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80332B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_bagular3_80339014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339014: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033901C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339020: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339024: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339028: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033902C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339030: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339038: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033903C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339040: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339044: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339048: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033904C: nop

    // 0x80339050: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339054: nop

    // 0x80339058: bne         $t1, $zero, L_803390B0
    if (ctx->r9 != 0) {
        // 0x8033905C: nop
    
            goto L_803390B0;
    }
    // 0x8033905C: nop

    // 0x80339060: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339064: nop

    // 0x80339068: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033906C: nop

    // 0x80339070: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339074: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339078: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033907C: nop

    // 0x80339080: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80339084: nop

    // 0x80339088: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033908C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339090: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339094: addiu       $t7, $t7, -0x4848
    ctx->r15 = ADD32(ctx->r15, -0X4848);
    // 0x80339098: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033909C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803390A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803390A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803390A8: jal         0x8001C0EC
    // 0x803390AC: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803390AC: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    after_0:
L_803390B0:
    // 0x803390B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803390B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803390B8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803390BC: nop

    // 0x803390C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803390C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803390C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803390CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803390D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803390D4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803390D8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803390DC: nop

    // 0x803390E0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803390E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803390E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803390EC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803390F0: nop

    // 0x803390F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803390F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803390FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339100: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339104: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339108: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033910C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339110: nop

    // 0x80339114: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80339118: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033911C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80339120: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x80339124: nop

    // 0x80339128: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033912C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80339130: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339134: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80339138: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033913C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80339140: lh          $t7, 0x4210($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4210);
    // 0x80339144: nop

    // 0x80339148: bne         $t7, $zero, L_8033918C
    if (ctx->r15 != 0) {
        // 0x8033914C: nop
    
            goto L_8033918C;
    }
    // 0x8033914C: nop

    // 0x80339150: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339158: lh          $t8, 0xC2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XC2);
    // 0x8033915C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80339160: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x80339164: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80339168: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033916C: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x80339170: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80339174: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80339178: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x8033917C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339184: jal         0x8002B114
    // 0x80339188: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80339188: nop

    after_1:
L_8033918C:
    // 0x8033918C: b           L_80339194
    // 0x80339190: nop

        goto L_80339194;
    // 0x80339190: nop

L_80339194:
    // 0x80339194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033919C: jr          $ra
    // 0x803391A0: nop

    return;
    // 0x803391A0: nop

;}
RECOMP_FUNC void func_bagular3_8033A608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A608: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A60C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A610: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A614: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A618: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A61C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A620: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A624: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A628: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A62C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A630: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A634: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A638: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A63C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A640: nop

    // 0x8033A644: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A648: nop

    // 0x8033A64C: bne         $t1, $zero, L_8033A6A4
    if (ctx->r9 != 0) {
        // 0x8033A650: nop
    
            goto L_8033A6A4;
    }
    // 0x8033A650: nop

    // 0x8033A654: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A658: nop

    // 0x8033A65C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A660: nop

    // 0x8033A664: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A668: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A66C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A670: nop

    // 0x8033A674: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A678: nop

    // 0x8033A67C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A680: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A684: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A688: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x8033A68C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A690: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A694: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A698: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8033A69C: jal         0x8001C0EC
    // 0x8033A6A0: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A6A0: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
L_8033A6A4:
    // 0x8033A6A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A6A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A6AC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A6B0: nop

    // 0x8033A6B4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A6B8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A6BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A6C0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A6C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A6C8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A6CC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033A6D0: nop

    // 0x8033A6D4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033A6D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A6DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A6E0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033A6E4: nop

    // 0x8033A6E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033A6EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A6F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033A6F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033A6F8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033A6FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033A700: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8033A704: nop

    // 0x8033A708: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033A70C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A714: jal         0x8001B4AC
    // 0x8033A718: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033A718: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033A71C: beq         $v0, $zero, L_8033A73C
    if (ctx->r2 == 0) {
        // 0x8033A720: nop
    
            goto L_8033A73C;
    }
    // 0x8033A720: nop

    // 0x8033A724: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A728: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x8033A72C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033A730: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A734: nop

    // 0x8033A738: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033A73C:
    // 0x8033A73C: b           L_8033A744
    // 0x8033A740: nop

        goto L_8033A744;
    // 0x8033A740: nop

L_8033A744:
    // 0x8033A744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A74C: jr          $ra
    // 0x8033A750: nop

    return;
    // 0x8033A750: nop

;}
RECOMP_FUNC void func_bagular3_80339658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339658: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033965C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339660: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339664: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339668: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033966C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339670: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339674: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339678: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033967C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339680: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339684: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339688: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033968C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339690: nop

    // 0x80339694: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339698: nop

    // 0x8033969C: bne         $t1, $zero, L_803396F4
    if (ctx->r9 != 0) {
        // 0x803396A0: nop
    
            goto L_803396F4;
    }
    // 0x803396A0: nop

    // 0x803396A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803396A8: nop

    // 0x803396AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803396B0: nop

    // 0x803396B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803396B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803396BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803396C0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803396C4: addiu       $t5, $t5, -0x47B4
    ctx->r13 = ADD32(ctx->r13, -0X47B4);
    // 0x803396C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803396CC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803396D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803396D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803396D8: jal         0x8001C0EC
    // 0x803396DC: addiu       $a3, $zero, 0x14B
    ctx->r7 = ADD32(0, 0X14B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803396DC: addiu       $a3, $zero, 0x14B
    ctx->r7 = ADD32(0, 0X14B);
    after_0:
    // 0x803396E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803396E4: nop

    // 0x803396E8: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x803396EC: nop

    // 0x803396F0: sh          $t7, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r15;
L_803396F4:
    // 0x803396F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803396F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803396FC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80339700: nop

    // 0x80339704: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339708: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033970C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339710: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339714: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339718: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033971C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339720: nop

    // 0x80339724: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80339728: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033972C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339730: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80339734: nop

    // 0x80339738: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033973C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339740: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339744: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339748: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033974C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339750: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80339754: nop

    // 0x80339758: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x8033975C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339764: jal         0x8001B4AC
    // 0x80339768: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80339768: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033976C: beq         $v0, $zero, L_80339784
    if (ctx->r2 == 0) {
        // 0x80339770: nop
    
            goto L_80339784;
    }
    // 0x80339770: nop

    // 0x80339774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339778: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033977C: jal         0x8002B114
    // 0x80339780: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x80339780: nop

    after_2:
L_80339784:
    // 0x80339784: b           L_8033978C
    // 0x80339788: nop

        goto L_8033978C;
    // 0x80339788: nop

L_8033978C:
    // 0x8033978C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339790: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339794: jr          $ra
    // 0x80339798: nop

    return;
    // 0x80339798: nop

;}
RECOMP_FUNC void func_bagular3_80334FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334FB0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80334FB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334FB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334FBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334FC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334FC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334FCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334FD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334FD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334FDC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80334FE0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80334FE4: nop

    // 0x80334FE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334FEC: nop

    // 0x80334FF0: bne         $t1, $zero, L_80335024
    if (ctx->r9 != 0) {
        // 0x80334FF4: nop
    
            goto L_80335024;
    }
    // 0x80334FF4: nop

    // 0x80334FF8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80334FFC: nop

    // 0x80335000: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335004: nop

    // 0x80335008: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033500C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335010: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80335014: nop

    // 0x80335018: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033501C: nop

    // 0x80335020: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_80335024:
    // 0x80335024: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80335028: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033502C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x80335030: nop

    // 0x80335034: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80335038: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033503C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80335040: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80335044: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80335048: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033504C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335050: nop

    // 0x80335054: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x80335058: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033505C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335060: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x80335064: nop

    // 0x80335068: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8033506C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80335070: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80335074: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80335078: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033507C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80335080: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335084: nop

    // 0x80335088: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x8033508C: b           L_80335094
    // 0x80335090: nop

        goto L_80335094;
    // 0x80335090: nop

L_80335094:
    // 0x80335094: jr          $ra
    // 0x80335098: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80335098: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_bagular3_8033B2E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B2E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B2EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B2F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B2F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B2F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B2FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B300: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B304: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B308: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B30C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B310: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B314: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B318: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B31C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B320: nop

    // 0x8033B324: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B328: nop

    // 0x8033B32C: bne         $t1, $zero, L_8033B438
    if (ctx->r9 != 0) {
        // 0x8033B330: nop
    
            goto L_8033B438;
    }
    // 0x8033B330: nop

    // 0x8033B334: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B338: nop

    // 0x8033B33C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B340: nop

    // 0x8033B344: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B348: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B34C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B350: nop

    // 0x8033B354: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B358: nop

    // 0x8033B35C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B360: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B364: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B368: addiu       $t7, $t7, -0x4738
    ctx->r15 = ADD32(ctx->r15, -0X4738);
    // 0x8033B36C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B370: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B374: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033B378: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033B37C: jal         0x8001C0EC
    // 0x8033B380: addiu       $a3, $zero, 0x145
    ctx->r7 = ADD32(0, 0X145);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B380: addiu       $a3, $zero, 0x145
    ctx->r7 = ADD32(0, 0X145);
    after_0:
    // 0x8033B384: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B388: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B38C: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033B390: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x8033B394: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x8033B398: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033B39C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033B3A0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033B3A4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033B3A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033B3AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033B3B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033B3B4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033B3B8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033B3BC: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B3C0: addiu       $a1, $a1, -0x3E80
    ctx->r5 = ADD32(ctx->r5, -0X3E80);
    // 0x8033B3C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033B3C8: jal         0x80027464
    // 0x8033B3CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x8033B3CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8033B3D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033B3D4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033B3D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B3DC: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033B3E0: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033B3E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033B3E8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033B3EC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033B3F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033B3F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B3F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033B3FC: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x8033B400: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B404: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B408: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x8033B40C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B410: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033B414: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033B418: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B41C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033B420: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B424: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B428: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x8033B42C: nop

    // 0x8033B430: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8033B434: sh          $t1, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r9;
L_8033B438:
    // 0x8033B438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B43C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B440: jal         0x8001B62C
    // 0x8033B444: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x8033B444: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8033B448: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033B44C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033B450: nop

    // 0x8033B454: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8033B458: nop

    // 0x8033B45C: bc1f        L_8033B510
    if (!c1cs) {
        // 0x8033B460: nop
    
            goto L_8033B510;
    }
    // 0x8033B460: nop

    // 0x8033B464: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B468: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033B46C: lh          $t3, 0xC2($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XC2);
    // 0x8033B470: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033B474: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8033B478: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033B47C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033B480: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033B484: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033B488: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x8033B48C: lwc1        $f10, 0x24($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X24);
    // 0x8033B490: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033B494: nop

    // 0x8033B498: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033B49C: swc1        $f18, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f18.u32l;
    // 0x8033B4A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4A4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033B4A8: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x8033B4AC: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033B4B0: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8033B4B4: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033B4B8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033B4BC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033B4C0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033B4C4: addu        $t9, $t0, $t1
    ctx->r25 = ADD32(ctx->r8, ctx->r9);
    // 0x8033B4C8: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033B4CC: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033B4D0: nop

    // 0x8033B4D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033B4D8: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x8033B4DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B4E4: lh          $t2, 0xC2($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XC2);
    // 0x8033B4E8: nop

    // 0x8033B4EC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033B4F0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033B4F4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033B4F8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033B4FC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033B500: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033B504: lwc1        $f10, 0x416C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B508: nop

    // 0x8033B50C: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
L_8033B510:
    // 0x8033B510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B518: jal         0x8001B62C
    // 0x8033B51C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x8033B51C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8033B520: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8033B524: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033B528: nop

    // 0x8033B52C: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x8033B530: nop

    // 0x8033B534: bc1f        L_8033B670
    if (!c1cs) {
        // 0x8033B538: nop
    
            goto L_8033B670;
    }
    // 0x8033B538: nop

    // 0x8033B53C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B540: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B544: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033B548: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x8033B54C: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x8033B550: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033B554: lh          $t4, 0xC2($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XC2);
    // 0x8033B558: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033B55C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8033B560: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8033B564: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033B568: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8033B56C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033B570: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033B574: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B578: addiu       $a1, $a1, -0x3E8C
    ctx->r5 = ADD32(ctx->r5, -0X3E8C);
    // 0x8033B57C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033B580: jal         0x80027464
    // 0x8033B584: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x8033B584: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x8033B588: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033B58C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033B590: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B594: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8033B598: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033B59C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B5A0: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033B5A4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x8033B5A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B5AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B5B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033B5B4: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x8033B5B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B5C0: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033B5C4: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x8033B5C8: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x8033B5CC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033B5D0: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x8033B5D4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033B5D8: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x8033B5DC: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x8033B5E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033B5E4: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x8033B5E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033B5EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033B5F0: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B5F4: addiu       $a1, $a1, -0x3E80
    ctx->r5 = ADD32(ctx->r5, -0X3E80);
    // 0x8033B5F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033B5FC: jal         0x80027464
    // 0x8033B600: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x8033B600: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8033B604: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033B608: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8033B60C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B610: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8033B614: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033B618: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033B61C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8033B620: lh          $t4, 0xC2($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XC2);
    // 0x8033B624: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033B628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B62C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033B630: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8033B634: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B638: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033B63C: lh          $t1, 0xC2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XC2);
    // 0x8033B640: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8033B644: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8033B648: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033B64C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B650: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8033B654: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B658: addu        $t6, $t7, $t2
    ctx->r14 = ADD32(ctx->r15, ctx->r10);
    // 0x8033B65C: lh          $t3, 0xAA($t6)
    ctx->r11 = MEM_H(ctx->r14, 0XAA);
    // 0x8033B660: nop

    // 0x8033B664: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x8033B668: b           L_8033B7CC
    // 0x8033B66C: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
        goto L_8033B7CC;
    // 0x8033B66C: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_8033B670:
    // 0x8033B670: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B674: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B678: jal         0x8001B62C
    // 0x8033B67C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x8033B67C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x8033B680: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8033B684: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033B688: nop

    // 0x8033B68C: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x8033B690: nop

    // 0x8033B694: bc1f        L_8033B7CC
    if (!c1cs) {
        // 0x8033B698: nop
    
            goto L_8033B7CC;
    }
    // 0x8033B698: nop

    // 0x8033B69C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B6A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B6A4: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033B6A8: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x8033B6AC: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x8033B6B0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033B6B4: lh          $t4, 0xC2($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XC2);
    // 0x8033B6B8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033B6BC: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x8033B6C0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x8033B6C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033B6C8: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x8033B6CC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033B6D0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033B6D4: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B6D8: addiu       $a1, $a1, -0x3E8C
    ctx->r5 = ADD32(ctx->r5, -0X3E8C);
    // 0x8033B6DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033B6E0: jal         0x80027464
    // 0x8033B6E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x8033B6E4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x8033B6E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033B6EC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033B6F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B6F4: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8033B6F8: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8033B6FC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033B700: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x8033B704: lh          $t1, 0xC2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XC2);
    // 0x8033B708: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033B70C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B710: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033B714: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x8033B718: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B71C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B720: lwc1        $f4, 0x8($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033B724: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x8033B728: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x8033B72C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033B730: lh          $t5, 0xC2($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XC2);
    // 0x8033B734: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033B738: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033B73C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033B740: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033B744: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033B748: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033B74C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033B750: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033B754: addiu       $a1, $a1, -0x3E80
    ctx->r5 = ADD32(ctx->r5, -0X3E80);
    // 0x8033B758: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033B75C: jal         0x80027464
    // 0x8033B760: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x8033B760: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x8033B764: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033B768: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8033B76C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B770: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8033B774: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8033B778: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033B77C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8033B780: lh          $t4, 0xC2($t8)
    ctx->r12 = MEM_H(ctx->r24, 0XC2);
    // 0x8033B784: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033B788: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B78C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033B790: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8033B794: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B798: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033B79C: lh          $t1, 0xC2($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XC2);
    // 0x8033B7A0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033B7A4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033B7A8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033B7AC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033B7B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033B7B4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033B7B8: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x8033B7BC: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x8033B7C0: nop

    // 0x8033B7C4: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8033B7C8: sh          $t8, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r24;
L_8033B7CC:
    // 0x8033B7CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B7D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7D4: jal         0x8001B4AC
    // 0x8033B7D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x8033B7D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x8033B7DC: beq         $v0, $zero, L_8033B8FC
    if (ctx->r2 == 0) {
        // 0x8033B7E0: nop
    
            goto L_8033B8FC;
    }
    // 0x8033B7E0: nop

    // 0x8033B7E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B7E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B7EC: lh          $t9, 0xC2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0XC2);
    // 0x8033B7F0: addiu       $t0, $zero, 0x46
    ctx->r8 = ADD32(0, 0X46);
    // 0x8033B7F4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x8033B7F8: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033B7FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B800: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8033B804: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B808: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033B80C: sh          $t0, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r8;
    // 0x8033B810: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B814: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B818: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x8033B81C: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x8033B820: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8033B824: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033B828: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033B82C: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033B830: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033B834: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033B838: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x8033B83C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B840: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B844: lh          $t5, 0xC2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0XC2);
    // 0x8033B848: nop

    // 0x8033B84C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8033B850: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033B854: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033B858: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8033B85C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033B860: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033B864: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033B868: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B86C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B870: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033B874: nop

    // 0x8033B878: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8033B87C: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x8033B880: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B884: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x8033B888: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B88C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033B890: sh          $zero, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = 0;
    // 0x8033B894: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B898: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B89C: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x8033B8A0: nop

    // 0x8033B8A4: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x8033B8A8: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8033B8AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033B8B0: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x8033B8B4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033B8B8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033B8BC: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x8033B8C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B8C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B8C8: lh          $t8, 0xC0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XC0);
    // 0x8033B8CC: nop

    // 0x8033B8D0: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8033B8D4: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8033B8D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033B8DC: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8033B8E0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033B8E4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033B8E8: sh          $zero, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = 0;
    // 0x8033B8EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B8F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B8F4: jal         0x8002B114
    // 0x8033B8F8: nop

    func_8002B114(rdram, ctx);
        goto after_10;
    // 0x8033B8F8: nop

    after_10:
L_8033B8FC:
    // 0x8033B8FC: b           L_8033B904
    // 0x8033B900: nop

        goto L_8033B904;
    // 0x8033B900: nop

L_8033B904:
    // 0x8033B904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B90C: jr          $ra
    // 0x8033B910: nop

    return;
    // 0x8033B910: nop

;}
RECOMP_FUNC void func_bagular3_803333E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803333E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803333E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803333E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803333EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803333F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803333F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803333F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803333FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033340C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333410: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80333414: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80333418: nop

    // 0x8033341C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333420: nop

    // 0x80333424: bne         $t1, $zero, L_80333490
    if (ctx->r9 != 0) {
        // 0x80333428: nop
    
            goto L_80333490;
    }
    // 0x80333428: nop

    // 0x8033342C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80333430: nop

    // 0x80333434: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80333438: nop

    // 0x8033343C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333440: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333444: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80333448: nop

    // 0x8033344C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80333450: nop

    // 0x80333454: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80333458: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033345C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333460: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80333464: jal         0x8001BBDC
    // 0x80333468: nop

    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80333468: nop

    after_0:
    // 0x8033346C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80333470: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80333474: lh          $a0, 0xEA($t8)
    ctx->r4 = MEM_H(ctx->r24, 0XEA);
    // 0x80333478: jal         0x8001BBDC
    // 0x8033347C: nop

    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033347C: nop

    after_1:
    // 0x80333480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333488: jal         0x8001BBDC
    // 0x8033348C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033348C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80333490:
    // 0x80333490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333498: jal         0x8001B4AC
    // 0x8033349C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033349C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x803334A0: beq         $v0, $zero, L_80333514
    if (ctx->r2 == 0) {
        // 0x803334A4: nop
    
            goto L_80333514;
    }
    // 0x803334A4: nop

    // 0x803334A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334AC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x803334B0: addiu       $t9, $t9, -0x4910
    ctx->r25 = ADD32(ctx->r25, -0X4910);
    // 0x803334B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334B8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x803334BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803334C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803334C4: jal         0x8001C0EC
    // 0x803334C8: addiu       $a3, $zero, 0x151
    ctx->r7 = ADD32(0, 0X151);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x803334C8: addiu       $a3, $zero, 0x151
    ctx->r7 = ADD32(0, 0X151);
    after_4:
    // 0x803334CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334D4: jal         0x8001BBDC
    // 0x803334D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x803334D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x803334DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803334E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803334E4: nop

    // 0x803334E8: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x803334EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803334F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803334F4: nop

    // 0x803334F8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803334FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80333500: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x80333504: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80333508: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033350C: nop

    // 0x80333510: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80333514:
    // 0x80333514: b           L_8033351C
    // 0x80333518: nop

        goto L_8033351C;
    // 0x80333518: nop

L_8033351C:
    // 0x8033351C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80333524: jr          $ra
    // 0x80333528: nop

    return;
    // 0x80333528: nop

;}
RECOMP_FUNC void func_bagular3_80335ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335ECC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335ED0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335ED4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335ED8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335EDC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335EE0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335EE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EE8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335EEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335EF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335EF8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335EFC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335F00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335F04: nop

    // 0x80335F08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335F0C: nop

    // 0x80335F10: bne         $t1, $zero, L_80335F68
    if (ctx->r9 != 0) {
        // 0x80335F14: nop
    
            goto L_80335F68;
    }
    // 0x80335F14: nop

    // 0x80335F18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335F1C: nop

    // 0x80335F20: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335F24: nop

    // 0x80335F28: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335F2C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335F30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335F34: nop

    // 0x80335F38: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335F3C: nop

    // 0x80335F40: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F48: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335F4C: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335F50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F54: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335F58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335F5C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80335F60: jal         0x8001C0EC
    // 0x80335F64: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335F64: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335F68:
    // 0x80335F68: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335F6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335F70: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335F74: nop

    // 0x80335F78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335F7C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335F80: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335F84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335F88: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335F8C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335F90: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335F94: nop

    // 0x80335F98: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335F9C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335FA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335FA4: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335FA8: nop

    // 0x80335FAC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335FB0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335FB4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335FB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335FBC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335FC0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335FC4: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335FC8: nop

    // 0x80335FCC: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335FD0: b           L_80335FD8
    // 0x80335FD4: nop

        goto L_80335FD8;
    // 0x80335FD4: nop

L_80335FD8:
    // 0x80335FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335FDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335FE0: jr          $ra
    // 0x80335FE4: nop

    return;
    // 0x80335FE4: nop

;}
RECOMP_FUNC void func_bagular3_80330B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330B5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330B60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330B64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330B68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330B6C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330B70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330B74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330B7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330B80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330B84: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330B88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330B8C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330B90: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330B94: nop

    // 0x80330B98: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330B9C: nop

    // 0x80330BA0: bne         $t1, $zero, L_80330E04
    if (ctx->r9 != 0) {
        // 0x80330BA4: nop
    
            goto L_80330E04;
    }
    // 0x80330BA4: nop

    // 0x80330BA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BAC: nop

    // 0x80330BB0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80330BB4: nop

    // 0x80330BB8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330BBC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330BC0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330BC4: nop

    // 0x80330BC8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80330BCC: nop

    // 0x80330BD0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80330BD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330BDC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330BE0: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80330BE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330BE8: jal         0x8001ABF4
    // 0x80330BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80330BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80330BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330BF4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330BF8: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80330BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C00: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80330C04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80330C08: jal         0x8001ABF4
    // 0x80330C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80330C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80330C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C14: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330C18: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80330C1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C20: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80330C24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C28: jal         0x8001ABF4
    // 0x80330C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80330C2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80330C30: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C34: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330C38: addiu       $a3, $a3, -0x4948
    ctx->r7 = ADD32(ctx->r7, -0X4948);
    // 0x80330C3C: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80330C40: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80330C44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C48: jal         0x8001ABF4
    // 0x80330C4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330C4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80330C50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330C54: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80330C58: addiu       $t8, $t8, -0x4BE0
    ctx->r24 = ADD32(ctx->r24, -0X4BE0);
    // 0x80330C5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330C60: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330C68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330C6C: jal         0x8001C0EC
    // 0x80330C70: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80330C70: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    after_4:
    // 0x80330C74: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C78: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80330C7C: addiu       $t0, $t0, -0x49F0
    ctx->r8 = ADD32(ctx->r8, -0X49F0);
    // 0x80330C80: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x80330C84: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80330C88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80330C8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330C90: jal         0x8001C0EC
    // 0x80330C94: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80330C94: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    after_5:
    // 0x80330C98: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C9C: nop

    // 0x80330CA0: lh          $t3, 0xBE($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XBE);
    // 0x80330CA4: nop

    // 0x80330CA8: beq         $t3, $zero, L_80330CC0
    if (ctx->r11 == 0) {
        // 0x80330CAC: nop
    
            goto L_80330CC0;
    }
    // 0x80330CAC: nop

    // 0x80330CB0: lh          $t4, 0xC0($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XC0);
    // 0x80330CB4: nop

    // 0x80330CB8: bne         $t4, $zero, L_80330CC8
    if (ctx->r12 != 0) {
        // 0x80330CBC: nop
    
            goto L_80330CC8;
    }
    // 0x80330CBC: nop

L_80330CC0:
    // 0x80330CC0: b           L_80330D24
    // 0x80330CC4: nop

        goto L_80330D24;
    // 0x80330CC4: nop

L_80330CC8:
    // 0x80330CC8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CCC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80330CD0: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80330CD4: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80330CD8: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x80330CDC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330CE0: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80330CE4: addiu       $a1, $a1, -0x3ED4
    ctx->r5 = ADD32(ctx->r5, -0X3ED4);
    // 0x80330CE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330CEC: jal         0x80027464
    // 0x80330CF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80330CF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x80330CF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80330CF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330CFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D00: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330D04: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330D08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D0C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330D10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D1C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330D20: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
L_80330D24:
    // 0x80330D24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D28: nop

    // 0x80330D2C: lh          $t9, 0xBE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBE);
    // 0x80330D30: nop

    // 0x80330D34: beq         $t9, $zero, L_80330D94
    if (ctx->r25 == 0) {
        // 0x80330D38: nop
    
            goto L_80330D94;
    }
    // 0x80330D38: nop

    // 0x80330D3C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D44: lh          $t1, 0xBE($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XBE);
    // 0x80330D48: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80330D4C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80330D50: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80330D54: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330D58: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80330D5C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330D60: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330D64: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80330D68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330D70: lh          $t5, 0xBE($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XBE);
    // 0x80330D74: nop

    // 0x80330D78: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80330D7C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330D80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330D84: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330D88: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330D8C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330D90: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330D94:
    // 0x80330D94: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D98: nop

    // 0x80330D9C: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x80330DA0: nop

    // 0x80330DA4: beq         $t8, $zero, L_80330E04
    if (ctx->r24 == 0) {
        // 0x80330DA8: nop
    
            goto L_80330E04;
    }
    // 0x80330DA8: nop

    // 0x80330DAC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DB4: lh          $t1, 0xC0($t3)
    ctx->r9 = MEM_H(ctx->r11, 0XC0);
    // 0x80330DB8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80330DBC: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330DC0: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330DC4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330DC8: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330DCC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330DD0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330DD4: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x80330DD8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330DE0: lh          $t2, 0xC0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC0);
    // 0x80330DE4: nop

    // 0x80330DE8: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80330DEC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80330DF0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330DF4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80330DF8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330DFC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330E00: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330E04:
    // 0x80330E04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E0C: jal         0x8002A8B4
    // 0x80330E10: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_7;
    // 0x80330E10: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_7:
    // 0x80330E14: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E18: nop

    // 0x80330E1C: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80330E20: nop

    // 0x80330E24: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x80330E28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E30: jal         0x8001B4AC
    // 0x80330E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80330E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80330E38: beq         $v0, $zero, L_80330F30
    if (ctx->r2 == 0) {
        // 0x80330E3C: nop
    
            goto L_80330F30;
    }
    // 0x80330E3C: nop

    // 0x80330E40: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E44: nop

    // 0x80330E48: lh          $t8, 0xBE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XBE);
    // 0x80330E4C: nop

    // 0x80330E50: bne         $t8, $zero, L_80330E80
    if (ctx->r24 != 0) {
        // 0x80330E54: nop
    
            goto L_80330E80;
    }
    // 0x80330E54: nop

    // 0x80330E58: lh          $t3, 0xC0($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XC0);
    // 0x80330E5C: nop

    // 0x80330E60: bne         $t3, $zero, L_80330E80
    if (ctx->r11 != 0) {
        // 0x80330E64: nop
    
            goto L_80330E80;
    }
    // 0x80330E64: nop

    // 0x80330E68: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E6C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80330E70: sh          $t1, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r9;
    // 0x80330E74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E78: b           L_80330F30
    // 0x80330E7C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_80330F30;
    // 0x80330E7C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80330E80:
    // 0x80330E80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E88: jal         0x8002A2EC
    // 0x80330E8C: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_9;
    // 0x80330E8C: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_9:
    // 0x80330E90: beq         $v0, $zero, L_80330EE8
    if (ctx->r2 == 0) {
        // 0x80330E94: nop
    
            goto L_80330EE8;
    }
    // 0x80330E94: nop

    // 0x80330E98: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330E9C: nop

    // 0x80330EA0: lh          $t2, 0xC0($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC0);
    // 0x80330EA4: nop

    // 0x80330EA8: beq         $t2, $zero, L_80330EC8
    if (ctx->r10 == 0) {
        // 0x80330EAC: nop
    
            goto L_80330EC8;
    }
    // 0x80330EAC: nop

    // 0x80330EB0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EB4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80330EB8: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80330EBC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EC0: b           L_80330EE0
    // 0x80330EC4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80330EE0;
    // 0x80330EC4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80330EC8:
    // 0x80330EC8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330ECC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80330ED0: sh          $t7, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r15;
    // 0x80330ED4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330ED8: nop

    // 0x80330EDC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80330EE0:
    // 0x80330EE0: b           L_80330F30
    // 0x80330EE4: nop

        goto L_80330F30;
    // 0x80330EE4: nop

L_80330EE8:
    // 0x80330EE8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EEC: nop

    // 0x80330EF0: lh          $t0, 0xBE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBE);
    // 0x80330EF4: nop

    // 0x80330EF8: beq         $t0, $zero, L_80330F18
    if (ctx->r8 == 0) {
        // 0x80330EFC: nop
    
            goto L_80330F18;
    }
    // 0x80330EFC: nop

    // 0x80330F00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F04: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80330F08: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80330F0C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F10: b           L_80330F30
    // 0x80330F14: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_80330F30;
    // 0x80330F14: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80330F18:
    // 0x80330F18: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F1C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80330F20: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80330F24: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F28: nop

    // 0x80330F2C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80330F30:
    // 0x80330F30: jal         0x8033BD74
    // 0x80330F34: nop

    func_bagular3_8033BD74(rdram, ctx);
        goto after_10;
    // 0x80330F34: nop

    after_10:
    // 0x80330F38: b           L_80330F40
    // 0x80330F3C: nop

        goto L_80330F40;
    // 0x80330F3C: nop

L_80330F40:
    // 0x80330F40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330F44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330F48: jr          $ra
    // 0x80330F4C: nop

    return;
    // 0x80330F4C: nop

;}
RECOMP_FUNC void func_bagular3_803393F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803393F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803393F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803393FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339400: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339404: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033940C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033941C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339420: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339424: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339428: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033942C: nop

    // 0x80339430: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339434: nop

    // 0x80339438: bne         $t1, $zero, L_803394D4
    if (ctx->r9 != 0) {
        // 0x8033943C: nop
    
            goto L_803394D4;
    }
    // 0x8033943C: nop

    // 0x80339440: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339444: nop

    // 0x80339448: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033944C: nop

    // 0x80339450: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80339454: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339458: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033945C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339460: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x80339464: nop

    // 0x80339468: bne         $t6, $at, L_8033949C
    if (ctx->r14 != ctx->r1) {
        // 0x8033946C: nop
    
            goto L_8033949C;
    }
    // 0x8033946C: nop

    // 0x80339470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339474: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80339478: addiu       $t7, $t7, -0x47BC
    ctx->r15 = ADD32(ctx->r15, -0X47BC);
    // 0x8033947C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339480: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339488: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033948C: jal         0x8001C0EC
    // 0x80339490: addiu       $a3, $zero, 0x152
    ctx->r7 = ADD32(0, 0X152);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339490: addiu       $a3, $zero, 0x152
    ctx->r7 = ADD32(0, 0X152);
    after_0:
    // 0x80339494: b           L_803394C0
    // 0x80339498: nop

        goto L_803394C0;
    // 0x80339498: nop

L_8033949C:
    // 0x8033949C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803394A0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803394A4: addiu       $t8, $t8, -0x47BC
    ctx->r24 = ADD32(ctx->r24, -0X47BC);
    // 0x803394A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803394AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803394B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803394B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803394B8: jal         0x8001C0EC
    // 0x803394BC: addiu       $a3, $zero, 0x152
    ctx->r7 = ADD32(0, 0X152);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803394BC: addiu       $a3, $zero, 0x152
    ctx->r7 = ADD32(0, 0X152);
    after_1:
L_803394C0:
    // 0x803394C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803394C4: nop

    // 0x803394C8: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x803394CC: nop

    // 0x803394D0: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
L_803394D4:
    // 0x803394D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803394D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803394DC: jal         0x8001B4AC
    // 0x803394E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x803394E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803394E4: beq         $v0, $zero, L_803394FC
    if (ctx->r2 == 0) {
        // 0x803394E8: nop
    
            goto L_803394FC;
    }
    // 0x803394E8: nop

    // 0x803394EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803394F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803394F4: jal         0x8002B114
    // 0x803394F8: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x803394F8: nop

    after_3:
L_803394FC:
    // 0x803394FC: b           L_80339504
    // 0x80339500: nop

        goto L_80339504;
    // 0x80339500: nop

L_80339504:
    // 0x80339504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339508: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033950C: jr          $ra
    // 0x80339510: nop

    return;
    // 0x80339510: nop

;}
RECOMP_FUNC void func_bagular3_80337D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337D44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337D4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337D50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337D54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337D58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337D5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337D60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337D64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337D68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337D6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337D70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337D74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337D78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337D7C: nop

    // 0x80337D80: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337D84: nop

    // 0x80337D88: bne         $t1, $zero, L_80337DE0
    if (ctx->r9 != 0) {
        // 0x80337D8C: nop
    
            goto L_80337DE0;
    }
    // 0x80337D8C: nop

    // 0x80337D90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337D94: nop

    // 0x80337D98: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337D9C: nop

    // 0x80337DA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337DA4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337DA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337DAC: nop

    // 0x80337DB0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337DB4: nop

    // 0x80337DB8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337DBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337DC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337DC4: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337DC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337DCC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337DD4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80337DD8: jal         0x8001C0EC
    // 0x80337DDC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337DDC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337DE0:
    // 0x80337DE0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337DE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337DE8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337DEC: nop

    // 0x80337DF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337DF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337DF8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337DFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337E00: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337E04: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337E08: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337E0C: nop

    // 0x80337E10: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337E14: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80337E18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337E1C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80337E20: nop

    // 0x80337E24: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337E28: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337E2C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337E30: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337E34: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337E38: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80337E3C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337E40: nop

    // 0x80337E44: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337E48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337E4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E50: jal         0x8001B4AC
    // 0x80337E54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337E54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337E58: beq         $v0, $zero, L_80337E78
    if (ctx->r2 == 0) {
        // 0x80337E5C: nop
    
            goto L_80337E78;
    }
    // 0x80337E5C: nop

    // 0x80337E60: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337E64: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80337E68: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80337E6C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337E70: nop

    // 0x80337E74: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337E78:
    // 0x80337E78: b           L_80337E80
    // 0x80337E7C: nop

        goto L_80337E80;
    // 0x80337E7C: nop

L_80337E80:
    // 0x80337E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337E88: jr          $ra
    // 0x80337E8C: nop

    return;
    // 0x80337E8C: nop

;}
RECOMP_FUNC void func_bagular3_80334DE8(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80334E1C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80334E20: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80334E24: nop

    // 0x80334E28: bne         $t0, $zero, L_80334F78
    if (ctx->r8 != 0) {
        // 0x80334E2C: nop
    
            goto L_80334F78;
    }
    // 0x80334E2C: nop

    // 0x80334E30: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334E34: nop

    // 0x80334E38: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80334E3C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80334E40: addiu       $t2, $zero, 0x13
    ctx->r10 = ADD32(0, 0X13);
    // 0x80334E44: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80334E48: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80334E4C: nop

    // 0x80334E50: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80334E54: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80334E58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334E5C: lh          $t6, 0xC2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC2);
    // 0x80334E60: nop

    // 0x80334E64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334E68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334E70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334E78: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334E7C: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80334E80: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334E84: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334E88: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80334E8C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80334E90: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x80334E94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80334E98: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80334E9C: addiu       $a1, $a1, -0x3EA4
    ctx->r5 = ADD32(ctx->r5, -0X3EA4);
    // 0x80334EA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334EA4: jal         0x80027464
    // 0x80334EA8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334EA8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80334EAC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80334EB0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80334EB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80334EB8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334EBC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334EC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334EC4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334EC8: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80334ECC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334ED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334ED4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334ED8: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x80334EDC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80334EE0: addiu       $t3, $t3, -0x47AC
    ctx->r11 = ADD32(ctx->r11, -0X47AC);
    // 0x80334EE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80334EE8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80334EEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334EF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334EF4: jal         0x8001C0EC
    // 0x80334EF8: addiu       $a3, $zero, 0x14A
    ctx->r7 = ADD32(0, 0X14A);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80334EF8: addiu       $a3, $zero, 0x14A
    ctx->r7 = ADD32(0, 0X14A);
    after_1:
    // 0x80334EFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80334F00: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334F04: addiu       $a3, $a3, -0x4770
    ctx->r7 = ADD32(ctx->r7, -0X4770);
    // 0x80334F08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F0C: jal         0x8001ABF4
    // 0x80334F10: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80334F10: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80334F14: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334F18: addiu       $a3, $a3, -0x4770
    ctx->r7 = ADD32(ctx->r7, -0X4770);
    // 0x80334F1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80334F20: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80334F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80334F28: jal         0x8001ABF4
    // 0x80334F2C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80334F2C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80334F30: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80334F34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334F38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334F3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334F40: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334F44: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334F48: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334F4C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334F50: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80334F54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F60: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x80334F64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80334F68: jal         0x800175F0
    // 0x80334F6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x80334F6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x80334F70: b           L_80334F98
    // 0x80334F74: nop

        goto L_80334F98;
    // 0x80334F74: nop

L_80334F78:
    // 0x80334F78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334F7C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80334F80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334F84: bne         $t6, $at, L_80334F98
    if (ctx->r14 != ctx->r1) {
        // 0x80334F88: nop
    
            goto L_80334F98;
    }
    // 0x80334F88: nop

    // 0x80334F8C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80334F90: addiu       $t7, $zero, 0x78
    ctx->r15 = ADD32(0, 0X78);
    // 0x80334F94: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_80334F98:
    // 0x80334F98: b           L_80334FA0
    // 0x80334F9C: nop

        goto L_80334FA0;
    // 0x80334F9C: nop

L_80334FA0:
    // 0x80334FA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334FA8: jr          $ra
    // 0x80334FAC: nop

    return;
    // 0x80334FAC: nop

;}
RECOMP_FUNC void func_bagular3_803367C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803367C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803367CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803367D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803367D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803367D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803367DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803367E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803367E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803367EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803367F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803367F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803367F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803367FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336800: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336804: nop

    // 0x80336808: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x8033680C: nop

    // 0x80336810: bne         $t1, $zero, L_80336830
    if (ctx->r9 != 0) {
        // 0x80336814: nop
    
            goto L_80336830;
    }
    // 0x80336814: nop

    // 0x80336818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033681C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336820: jal         0x8001BB34
    // 0x80336824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80336824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80336828: b           L_80336858
    // 0x8033682C: nop

        goto L_80336858;
    // 0x8033682C: nop

L_80336830:
    // 0x80336830: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336834: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336838: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x8033683C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336840: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80336844: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80336848: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033684C: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80336850: jal         0x8001BB34
    // 0x80336854: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80336854: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80336858:
    // 0x80336858: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033685C: nop

    // 0x80336860: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336864: nop

    // 0x80336868: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8033686C: sltiu       $at, $t7, 0x13
    ctx->r1 = ctx->r15 < 0X13 ? 1 : 0;
    // 0x80336870: beq         $at, $zero, L_803369C4
    if (ctx->r1 == 0) {
        // 0x80336874: nop
    
            goto L_803369C4;
    }
    // 0x80336874: nop

    // 0x80336878: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033687C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80336880: addu        $at, $at, $t7
    gpr jr_addend_8033688C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80336884: lw          $t7, -0x3D40($at)
    ctx->r15 = ADD32(ctx->r1, -0X3D40);
    // 0x80336888: nop

    // 0x8033688C: jr          $t7
    // 0x80336890: nop

    switch (jr_addend_8033688C >> 2) {
        case 0: goto L_80336894; break;
        case 1: goto L_803368A4; break;
        case 2: goto L_803368B4; break;
        case 3: goto L_803368C4; break;
        case 4: goto L_803368D4; break;
        case 5: goto L_803368E4; break;
        case 6: goto L_803368F4; break;
        case 7: goto L_80336904; break;
        case 8: goto L_80336914; break;
        case 9: goto L_80336924; break;
        case 10: goto L_80336934; break;
        case 11: goto L_80336944; break;
        case 12: goto L_80336954; break;
        case 13: goto L_80336964; break;
        case 14: goto L_80336974; break;
        case 15: goto L_80336984; break;
        case 16: goto L_80336994; break;
        case 17: goto L_803369A4; break;
        case 18: goto L_803369B4; break;
        default: switch_error(__func__, 0x8033688C, 0x8033C2C0);
    }
    // 0x80336890: nop

L_80336894:
    // 0x80336894: jal         0x80334FB0
    // 0x80336898: nop

    func_bagular3_80334FB0(rdram, ctx);
        goto after_2;
    // 0x80336898: nop

    after_2:
    // 0x8033689C: b           L_803369CC
    // 0x803368A0: nop

        goto L_803369CC;
    // 0x803368A0: nop

L_803368A4:
    // 0x803368A4: jal         0x8033509C
    // 0x803368A8: nop

    func_bagular3_8033509C(rdram, ctx);
        goto after_3;
    // 0x803368A8: nop

    after_3:
    // 0x803368AC: b           L_803369CC
    // 0x803368B0: nop

        goto L_803369CC;
    // 0x803368B0: nop

L_803368B4:
    // 0x803368B4: jal         0x803351E8
    // 0x803368B8: nop

    func_bagular3_803351E8(rdram, ctx);
        goto after_4;
    // 0x803368B8: nop

    after_4:
    // 0x803368BC: b           L_803369CC
    // 0x803368C0: nop

        goto L_803369CC;
    // 0x803368C0: nop

L_803368C4:
    // 0x803368C4: jal         0x80335334
    // 0x803368C8: nop

    func_bagular3_80335334(rdram, ctx);
        goto after_5;
    // 0x803368C8: nop

    after_5:
    // 0x803368CC: b           L_803369CC
    // 0x803368D0: nop

        goto L_803369CC;
    // 0x803368D0: nop

L_803368D4:
    // 0x803368D4: jal         0x80335480
    // 0x803368D8: nop

    func_bagular3_80335480(rdram, ctx);
        goto after_6;
    // 0x803368D8: nop

    after_6:
    // 0x803368DC: b           L_803369CC
    // 0x803368E0: nop

        goto L_803369CC;
    // 0x803368E0: nop

L_803368E4:
    // 0x803368E4: jal         0x8033559C
    // 0x803368E8: nop

    func_bagular3_8033559C(rdram, ctx);
        goto after_7;
    // 0x803368E8: nop

    after_7:
    // 0x803368EC: b           L_803369CC
    // 0x803368F0: nop

        goto L_803369CC;
    // 0x803368F0: nop

L_803368F4:
    // 0x803368F4: jal         0x803356E8
    // 0x803368F8: nop

    func_bagular3_803356E8(rdram, ctx);
        goto after_8;
    // 0x803368F8: nop

    after_8:
    // 0x803368FC: b           L_803369CC
    // 0x80336900: nop

        goto L_803369CC;
    // 0x80336900: nop

L_80336904:
    // 0x80336904: jal         0x80335834
    // 0x80336908: nop

    func_bagular3_80335834(rdram, ctx);
        goto after_9;
    // 0x80336908: nop

    after_9:
    // 0x8033690C: b           L_803369CC
    // 0x80336910: nop

        goto L_803369CC;
    // 0x80336910: nop

L_80336914:
    // 0x80336914: jal         0x80335980
    // 0x80336918: nop

    func_bagular3_80335980(rdram, ctx);
        goto after_10;
    // 0x80336918: nop

    after_10:
    // 0x8033691C: b           L_803369CC
    // 0x80336920: nop

        goto L_803369CC;
    // 0x80336920: nop

L_80336924:
    // 0x80336924: jal         0x80335AE8
    // 0x80336928: nop

    func_bagular3_80335AE8(rdram, ctx);
        goto after_11;
    // 0x80336928: nop

    after_11:
    // 0x8033692C: b           L_803369CC
    // 0x80336930: nop

        goto L_803369CC;
    // 0x80336930: nop

L_80336934:
    // 0x80336934: jal         0x80335C34
    // 0x80336938: nop

    func_bagular3_80335C34(rdram, ctx);
        goto after_12;
    // 0x80336938: nop

    after_12:
    // 0x8033693C: b           L_803369CC
    // 0x80336940: nop

        goto L_803369CC;
    // 0x80336940: nop

L_80336944:
    // 0x80336944: jal         0x80335D80
    // 0x80336948: nop

    func_bagular3_80335D80(rdram, ctx);
        goto after_13;
    // 0x80336948: nop

    after_13:
    // 0x8033694C: b           L_803369CC
    // 0x80336950: nop

        goto L_803369CC;
    // 0x80336950: nop

L_80336954:
    // 0x80336954: jal         0x80335ECC
    // 0x80336958: nop

    func_bagular3_80335ECC(rdram, ctx);
        goto after_14;
    // 0x80336958: nop

    after_14:
    // 0x8033695C: b           L_803369CC
    // 0x80336960: nop

        goto L_803369CC;
    // 0x80336960: nop

L_80336964:
    // 0x80336964: jal         0x80335FE8
    // 0x80336968: nop

    func_bagular3_80335FE8(rdram, ctx);
        goto after_15;
    // 0x80336968: nop

    after_15:
    // 0x8033696C: b           L_803369CC
    // 0x80336970: nop

        goto L_803369CC;
    // 0x80336970: nop

L_80336974:
    // 0x80336974: jal         0x80336134
    // 0x80336978: nop

    func_bagular3_80336134(rdram, ctx);
        goto after_16;
    // 0x80336978: nop

    after_16:
    // 0x8033697C: b           L_803369CC
    // 0x80336980: nop

        goto L_803369CC;
    // 0x80336980: nop

L_80336984:
    // 0x80336984: jal         0x80336280
    // 0x80336988: nop

    func_bagular3_80336280(rdram, ctx);
        goto after_17;
    // 0x80336988: nop

    after_17:
    // 0x8033698C: b           L_803369CC
    // 0x80336990: nop

        goto L_803369CC;
    // 0x80336990: nop

L_80336994:
    // 0x80336994: jal         0x803363CC
    // 0x80336998: nop

    func_bagular3_803363CC(rdram, ctx);
        goto after_18;
    // 0x80336998: nop

    after_18:
    // 0x8033699C: b           L_803369CC
    // 0x803369A0: nop

        goto L_803369CC;
    // 0x803369A0: nop

L_803369A4:
    // 0x803369A4: jal         0x80336518
    // 0x803369A8: nop

    func_bagular3_80336518(rdram, ctx);
        goto after_19;
    // 0x803369A8: nop

    after_19:
    // 0x803369AC: b           L_803369CC
    // 0x803369B0: nop

        goto L_803369CC;
    // 0x803369B0: nop

L_803369B4:
    // 0x803369B4: jal         0x80336634
    // 0x803369B8: nop

    func_bagular3_80336634(rdram, ctx);
        goto after_20;
    // 0x803369B8: nop

    after_20:
    // 0x803369BC: b           L_803369CC
    // 0x803369C0: nop

        goto L_803369CC;
    // 0x803369C0: nop

L_803369C4:
    // 0x803369C4: b           L_803369CC
    // 0x803369C8: nop

        goto L_803369CC;
    // 0x803369C8: nop

L_803369CC:
    // 0x803369CC: b           L_803369D4
    // 0x803369D0: nop

        goto L_803369D4;
    // 0x803369D0: nop

L_803369D4:
    // 0x803369D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803369D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803369DC: jr          $ra
    // 0x803369E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803369E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular3_80330000(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330010: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
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
    // 0x80330040: addiu       $a1, $a1, -0x3E74
    ctx->r5 = ADD32(ctx->r5, -0X3E74);
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
    // 0x80330064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330068: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
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
    // 0x80330080: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80330084: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80330088: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033008C: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x80330090: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x80330094: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330098: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033009C: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803300A0: addiu       $a1, $a1, -0x3E5C
    ctx->r5 = ADD32(ctx->r5, -0X3E5C);
    // 0x803300A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803300A8: jal         0x80027464
    // 0x803300AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x803300AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x803300B0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803300B4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x803300B8: addiu       $t5, $t5, -0x4910
    ctx->r13 = ADD32(ctx->r13, -0X4910);
    // 0x803300BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803300C0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803300C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803300C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803300CC: jal         0x8001C0EC
    // 0x803300D0: addiu       $a3, $zero, 0x151
    ctx->r7 = ADD32(0, 0X151);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803300D0: addiu       $a3, $zero, 0x151
    ctx->r7 = ADD32(0, 0X151);
    after_2:
    // 0x803300D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803300D8: jal         0x8001BBDC
    // 0x803300DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803300DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x803300E0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803300E4: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x803300E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803300EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803300F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803300F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803300FC: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80330100: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80330104: addiu       $t9, $t9, -0x4908
    ctx->r25 = ADD32(ctx->r25, -0X4908);
    // 0x80330108: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x8033010C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330110: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330114: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330118: jal         0x8001C0EC
    // 0x8033011C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8033011C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_4:
    // 0x80330120: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80330124: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80330128: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033012C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330130: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330134: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330138: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033013C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80330140: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330144: addiu       $t1, $t1, -0x4908
    ctx->r9 = ADD32(ctx->r9, -0X4908);
    // 0x80330148: lh          $a0, 0x423A($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X423A);
    // 0x8033014C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330154: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330158: jal         0x8001C0EC
    // 0x8033015C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x8033015C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_5:
    // 0x80330160: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330164: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80330168: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033016C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330170: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330174: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330178: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033017C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330180: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330184: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80330188: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033018C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330190: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330194: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330198: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033019C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803301A0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803301A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803301AC: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x803301B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803301B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x803301B8: jal         0x80026F10
    // 0x803301BC: nop

    func_80026F10(rdram, ctx);
        goto after_6;
    // 0x803301BC: nop

    after_6:
    // 0x803301C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803301C4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803301C8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803301CC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803301D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803301D4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803301D8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803301DC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803301E0: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x803301E4: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803301E8: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x803301EC: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x803301F0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803301F4: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803301F8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803301FC: addiu       $a1, $a1, -0x3E38
    ctx->r5 = ADD32(ctx->r5, -0X3E38);
    // 0x80330200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330204: jal         0x80027464
    // 0x80330208: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80330208: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x8033020C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330210: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330214: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330218: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8033021C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330220: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330224: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80330228: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033022C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330230: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330234: sh          $t3, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r11;
    // 0x80330238: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8033023C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330240: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x80330244: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330248: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033024C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80330250: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330254: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330258: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033025C: sh          $t7, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r15;
    // 0x80330260: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330264: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330268: jal         0x80026F10
    // 0x8033026C: nop

    func_80026F10(rdram, ctx);
        goto after_8;
    // 0x8033026C: nop

    after_8:
    // 0x80330270: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330274: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330278: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033027C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330280: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330284: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330288: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033028C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330290: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80330294: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330298: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8033029C: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x803302A0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803302A4: lwc1        $f18, 0x1C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803302A8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803302AC: addiu       $a1, $a1, -0x3E2C
    ctx->r5 = ADD32(ctx->r5, -0X3E2C);
    // 0x803302B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803302B4: jal         0x80027464
    // 0x803302B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x803302B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x803302BC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803302C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803302C4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803302C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803302CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803302D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803302D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803302D8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803302DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302E0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803302E4: sh          $t2, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r10;
    // 0x803302E8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803302EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803302F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803302F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803302F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803302FC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330300: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330304: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330308: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033030C: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x80330310: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330314: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330318: jal         0x80026F10
    // 0x8033031C: nop

    func_80026F10(rdram, ctx);
        goto after_10;
    // 0x8033031C: nop

    after_10:
    // 0x80330320: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330324: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80330328: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033032C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330330: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330334: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80330338: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033033C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80330340: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80330344: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80330348: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8033034C: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x80330350: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80330354: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80330358: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033035C: addiu       $a1, $a1, -0x3E20
    ctx->r5 = ADD32(ctx->r5, -0X3E20);
    // 0x80330360: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80330364: jal         0x80027464
    // 0x80330368: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x80330368: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x8033036C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80330370: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330374: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330378: addiu       $a3, $a3, -0x4810
    ctx->r7 = ADD32(ctx->r7, -0X4810);
    // 0x8033037C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330380: jal         0x8001ABF4
    // 0x80330384: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x80330384: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
    // 0x80330388: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8033038C: addiu       $t3, $t3, -0x4848
    ctx->r11 = ADD32(ctx->r11, -0X4848);
    // 0x80330390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330394: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80330398: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033039C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803303A0: jal         0x8001C0EC
    // 0x803303A4: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x803303A4: addiu       $a3, $zero, 0x147
    ctx->r7 = ADD32(0, 0X147);
    after_13:
    // 0x803303A8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803303AC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x803303B0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x803303B4: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803303B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803303BC: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x803303C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803303C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803303CC: sh          $t2, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r10;
    // 0x803303D0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x803303D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803303D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803303DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803303E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803303E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803303E8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803303EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803303F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803303F4: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x803303F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803303FC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80330400: jal         0x80026F10
    // 0x80330404: nop

    func_80026F10(rdram, ctx);
        goto after_14;
    // 0x80330404: nop

    after_14:
    // 0x80330408: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033040C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330410: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330414: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330418: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033041C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330420: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330424: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330428: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8033042C: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x80330430: b           L_80330438
    // 0x80330434: nop

        goto L_80330438;
    // 0x80330434: nop

L_80330438:
    // 0x80330438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033043C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330440: jr          $ra
    // 0x80330444: nop

    return;
    // 0x80330444: nop

;}
RECOMP_FUNC void func_bagular3_80338BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338BA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338BA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338BAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338BB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338BB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338BB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338BBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338BC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338BC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338BC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338BCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338BD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338BD4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338BD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338BDC: nop

    // 0x80338BE0: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x80338BE4: nop

    // 0x80338BE8: bne         $t1, $zero, L_80338C08
    if (ctx->r9 != 0) {
        // 0x80338BEC: nop
    
            goto L_80338C08;
    }
    // 0x80338BEC: nop

    // 0x80338BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338BF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338BF8: jal         0x8001BB34
    // 0x80338BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80338BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80338C00: b           L_80338C30
    // 0x80338C04: nop

        goto L_80338C30;
    // 0x80338C04: nop

L_80338C08:
    // 0x80338C08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80338C0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338C10: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x80338C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338C18: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x80338C1C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80338C20: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80338C24: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80338C28: jal         0x8001BB34
    // 0x80338C2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80338C2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80338C30:
    // 0x80338C30: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338C34: nop

    // 0x80338C38: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338C3C: nop

    // 0x80338C40: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80338C44: sltiu       $at, $t7, 0x19
    ctx->r1 = ctx->r15 < 0X19 ? 1 : 0;
    // 0x80338C48: beq         $at, $zero, L_80338DFC
    if (ctx->r1 == 0) {
        // 0x80338C4C: nop
    
            goto L_80338DFC;
    }
    // 0x80338C4C: nop

    // 0x80338C50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338C54: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338C58: addu        $at, $at, $t7
    gpr jr_addend_80338C64 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80338C5C: lw          $t7, -0x3CF4($at)
    ctx->r15 = ADD32(ctx->r1, -0X3CF4);
    // 0x80338C60: nop

    // 0x80338C64: jr          $t7
    // 0x80338C68: nop

    switch (jr_addend_80338C64 >> 2) {
        case 0: goto L_80338C6C; break;
        case 1: goto L_80338C7C; break;
        case 2: goto L_80338C8C; break;
        case 3: goto L_80338C9C; break;
        case 4: goto L_80338CAC; break;
        case 5: goto L_80338CBC; break;
        case 6: goto L_80338CCC; break;
        case 7: goto L_80338CDC; break;
        case 8: goto L_80338CEC; break;
        case 9: goto L_80338CFC; break;
        case 10: goto L_80338D0C; break;
        case 11: goto L_80338D1C; break;
        case 12: goto L_80338D2C; break;
        case 13: goto L_80338D3C; break;
        case 14: goto L_80338D4C; break;
        case 15: goto L_80338D5C; break;
        case 16: goto L_80338D6C; break;
        case 17: goto L_80338D7C; break;
        case 18: goto L_80338D8C; break;
        case 19: goto L_80338D9C; break;
        case 20: goto L_80338DAC; break;
        case 21: goto L_80338DBC; break;
        case 22: goto L_80338DCC; break;
        case 23: goto L_80338DDC; break;
        case 24: goto L_80338DEC; break;
        default: switch_error(__func__, 0x80338C64, 0x8033C30C);
    }
    // 0x80338C68: nop

L_80338C6C:
    // 0x80338C6C: jal         0x80336BDC
    // 0x80338C70: nop

    func_bagular3_80336BDC(rdram, ctx);
        goto after_2;
    // 0x80338C70: nop

    after_2:
    // 0x80338C74: b           L_80338E04
    // 0x80338C78: nop

        goto L_80338E04;
    // 0x80338C78: nop

L_80338C7C:
    // 0x80338C7C: jal         0x80336CC8
    // 0x80338C80: nop

    func_bagular3_80336CC8(rdram, ctx);
        goto after_3;
    // 0x80338C80: nop

    after_3:
    // 0x80338C84: b           L_80338E04
    // 0x80338C88: nop

        goto L_80338E04;
    // 0x80338C88: nop

L_80338C8C:
    // 0x80338C8C: jal         0x80336E14
    // 0x80338C90: nop

    func_bagular3_80336E14(rdram, ctx);
        goto after_4;
    // 0x80338C90: nop

    after_4:
    // 0x80338C94: b           L_80338E04
    // 0x80338C98: nop

        goto L_80338E04;
    // 0x80338C98: nop

L_80338C9C:
    // 0x80338C9C: jal         0x80336F60
    // 0x80338CA0: nop

    func_bagular3_80336F60(rdram, ctx);
        goto after_5;
    // 0x80338CA0: nop

    after_5:
    // 0x80338CA4: b           L_80338E04
    // 0x80338CA8: nop

        goto L_80338E04;
    // 0x80338CA8: nop

L_80338CAC:
    // 0x80338CAC: jal         0x803370AC
    // 0x80338CB0: nop

    func_bagular3_803370AC(rdram, ctx);
        goto after_6;
    // 0x80338CB0: nop

    after_6:
    // 0x80338CB4: b           L_80338E04
    // 0x80338CB8: nop

        goto L_80338E04;
    // 0x80338CB8: nop

L_80338CBC:
    // 0x80338CBC: jal         0x803371C8
    // 0x80338CC0: nop

    func_bagular3_803371C8(rdram, ctx);
        goto after_7;
    // 0x80338CC0: nop

    after_7:
    // 0x80338CC4: b           L_80338E04
    // 0x80338CC8: nop

        goto L_80338E04;
    // 0x80338CC8: nop

L_80338CCC:
    // 0x80338CCC: jal         0x80337314
    // 0x80338CD0: nop

    func_bagular3_80337314(rdram, ctx);
        goto after_8;
    // 0x80338CD0: nop

    after_8:
    // 0x80338CD4: b           L_80338E04
    // 0x80338CD8: nop

        goto L_80338E04;
    // 0x80338CD8: nop

L_80338CDC:
    // 0x80338CDC: jal         0x80337460
    // 0x80338CE0: nop

    func_bagular3_80337460(rdram, ctx);
        goto after_9;
    // 0x80338CE0: nop

    after_9:
    // 0x80338CE4: b           L_80338E04
    // 0x80338CE8: nop

        goto L_80338E04;
    // 0x80338CE8: nop

L_80338CEC:
    // 0x80338CEC: jal         0x803375AC
    // 0x80338CF0: nop

    func_bagular3_803375AC(rdram, ctx);
        goto after_10;
    // 0x80338CF0: nop

    after_10:
    // 0x80338CF4: b           L_80338E04
    // 0x80338CF8: nop

        goto L_80338E04;
    // 0x80338CF8: nop

L_80338CFC:
    // 0x80338CFC: jal         0x803376C8
    // 0x80338D00: nop

    func_bagular3_803376C8(rdram, ctx);
        goto after_11;
    // 0x80338D00: nop

    after_11:
    // 0x80338D04: b           L_80338E04
    // 0x80338D08: nop

        goto L_80338E04;
    // 0x80338D08: nop

L_80338D0C:
    // 0x80338D0C: jal         0x80337814
    // 0x80338D10: nop

    func_bagular3_80337814(rdram, ctx);
        goto after_12;
    // 0x80338D10: nop

    after_12:
    // 0x80338D14: b           L_80338E04
    // 0x80338D18: nop

        goto L_80338E04;
    // 0x80338D18: nop

L_80338D1C:
    // 0x80338D1C: jal         0x80337960
    // 0x80338D20: nop

    func_bagular3_80337960(rdram, ctx);
        goto after_13;
    // 0x80338D20: nop

    after_13:
    // 0x80338D24: b           L_80338E04
    // 0x80338D28: nop

        goto L_80338E04;
    // 0x80338D28: nop

L_80338D2C:
    // 0x80338D2C: jal         0x80337AAC
    // 0x80338D30: nop

    func_bagular3_80337AAC(rdram, ctx);
        goto after_14;
    // 0x80338D30: nop

    after_14:
    // 0x80338D34: b           L_80338E04
    // 0x80338D38: nop

        goto L_80338E04;
    // 0x80338D38: nop

L_80338D3C:
    // 0x80338D3C: jal         0x80337BF8
    // 0x80338D40: nop

    func_bagular3_80337BF8(rdram, ctx);
        goto after_15;
    // 0x80338D40: nop

    after_15:
    // 0x80338D44: b           L_80338E04
    // 0x80338D48: nop

        goto L_80338E04;
    // 0x80338D48: nop

L_80338D4C:
    // 0x80338D4C: jal         0x80337D44
    // 0x80338D50: nop

    func_bagular3_80337D44(rdram, ctx);
        goto after_16;
    // 0x80338D50: nop

    after_16:
    // 0x80338D54: b           L_80338E04
    // 0x80338D58: nop

        goto L_80338E04;
    // 0x80338D58: nop

L_80338D5C:
    // 0x80338D5C: jal         0x80337E90
    // 0x80338D60: nop

    func_bagular3_80337E90(rdram, ctx);
        goto after_17;
    // 0x80338D60: nop

    after_17:
    // 0x80338D64: b           L_80338E04
    // 0x80338D68: nop

        goto L_80338E04;
    // 0x80338D68: nop

L_80338D6C:
    // 0x80338D6C: jal         0x80337FDC
    // 0x80338D70: nop

    func_bagular3_80337FDC(rdram, ctx);
        goto after_18;
    // 0x80338D70: nop

    after_18:
    // 0x80338D74: b           L_80338E04
    // 0x80338D78: nop

        goto L_80338E04;
    // 0x80338D78: nop

L_80338D7C:
    // 0x80338D7C: jal         0x80338128
    // 0x80338D80: nop

    func_bagular3_80338128(rdram, ctx);
        goto after_19;
    // 0x80338D80: nop

    after_19:
    // 0x80338D84: b           L_80338E04
    // 0x80338D88: nop

        goto L_80338E04;
    // 0x80338D88: nop

L_80338D8C:
    // 0x80338D8C: jal         0x80338274
    // 0x80338D90: nop

    func_bagular3_80338274(rdram, ctx);
        goto after_20;
    // 0x80338D90: nop

    after_20:
    // 0x80338D94: b           L_80338E04
    // 0x80338D98: nop

        goto L_80338E04;
    // 0x80338D98: nop

L_80338D9C:
    // 0x80338D9C: jal         0x803383C0
    // 0x80338DA0: nop

    func_bagular3_803383C0(rdram, ctx);
        goto after_21;
    // 0x80338DA0: nop

    after_21:
    // 0x80338DA4: b           L_80338E04
    // 0x80338DA8: nop

        goto L_80338E04;
    // 0x80338DA8: nop

L_80338DAC:
    // 0x80338DAC: jal         0x8033850C
    // 0x80338DB0: nop

    func_bagular3_8033850C(rdram, ctx);
        goto after_22;
    // 0x80338DB0: nop

    after_22:
    // 0x80338DB4: b           L_80338E04
    // 0x80338DB8: nop

        goto L_80338E04;
    // 0x80338DB8: nop

L_80338DBC:
    // 0x80338DBC: jal         0x80338658
    // 0x80338DC0: nop

    func_bagular3_80338658(rdram, ctx);
        goto after_23;
    // 0x80338DC0: nop

    after_23:
    // 0x80338DC4: b           L_80338E04
    // 0x80338DC8: nop

        goto L_80338E04;
    // 0x80338DC8: nop

L_80338DCC:
    // 0x80338DCC: jal         0x803387A4
    // 0x80338DD0: nop

    func_bagular3_803387A4(rdram, ctx);
        goto after_24;
    // 0x80338DD0: nop

    after_24:
    // 0x80338DD4: b           L_80338E04
    // 0x80338DD8: nop

        goto L_80338E04;
    // 0x80338DD8: nop

L_80338DDC:
    // 0x80338DDC: jal         0x803388F0
    // 0x80338DE0: nop

    func_bagular3_803388F0(rdram, ctx);
        goto after_25;
    // 0x80338DE0: nop

    after_25:
    // 0x80338DE4: b           L_80338E04
    // 0x80338DE8: nop

        goto L_80338E04;
    // 0x80338DE8: nop

L_80338DEC:
    // 0x80338DEC: jal         0x80338A0C
    // 0x80338DF0: nop

    func_bagular3_80338A0C(rdram, ctx);
        goto after_26;
    // 0x80338DF0: nop

    after_26:
    // 0x80338DF4: b           L_80338E04
    // 0x80338DF8: nop

        goto L_80338E04;
    // 0x80338DF8: nop

L_80338DFC:
    // 0x80338DFC: b           L_80338E04
    // 0x80338E00: nop

        goto L_80338E04;
    // 0x80338E00: nop

L_80338E04:
    // 0x80338E04: b           L_80338E0C
    // 0x80338E08: nop

        goto L_80338E0C;
    // 0x80338E08: nop

L_80338E0C:
    // 0x80338E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338E10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80338E14: jr          $ra
    // 0x80338E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80338E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular3_8033509C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033509C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803350A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803350A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803350A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803350AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803350B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803350BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803350C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803350CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803350D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803350D4: nop

    // 0x803350D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803350DC: nop

    // 0x803350E0: bne         $t1, $zero, L_80335138
    if (ctx->r9 != 0) {
        // 0x803350E4: nop
    
            goto L_80335138;
    }
    // 0x803350E4: nop

    // 0x803350E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803350EC: nop

    // 0x803350F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803350F4: nop

    // 0x803350F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803350FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335100: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335104: nop

    // 0x80335108: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033510C: nop

    // 0x80335110: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335114: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335118: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033511C: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335120: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335124: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335128: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033512C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80335130: jal         0x8001C0EC
    // 0x80335134: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335134: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335138:
    // 0x80335138: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033513C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335140: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335144: nop

    // 0x80335148: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033514C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335150: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335154: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335158: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033515C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335160: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335164: nop

    // 0x80335168: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033516C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335170: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335174: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335178: nop

    // 0x8033517C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335180: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335184: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335188: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033518C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335190: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335194: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335198: nop

    // 0x8033519C: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803351A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351A8: jal         0x8001B4AC
    // 0x803351AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803351AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803351B0: beq         $v0, $zero, L_803351D0
    if (ctx->r2 == 0) {
        // 0x803351B4: nop
    
            goto L_803351D0;
    }
    // 0x803351B4: nop

    // 0x803351B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803351BC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x803351C0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803351C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803351C8: nop

    // 0x803351CC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803351D0:
    // 0x803351D0: b           L_803351D8
    // 0x803351D4: nop

        goto L_803351D8;
    // 0x803351D4: nop

L_803351D8:
    // 0x803351D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803351DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803351E0: jr          $ra
    // 0x803351E4: nop

    return;
    // 0x803351E4: nop

;}
RECOMP_FUNC void func_bagular3_80335D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335D88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335D9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335DA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335DA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335DA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335DAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335DB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335DB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335DB8: nop

    // 0x80335DBC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335DC0: nop

    // 0x80335DC4: bne         $t1, $zero, L_80335E1C
    if (ctx->r9 != 0) {
        // 0x80335DC8: nop
    
            goto L_80335E1C;
    }
    // 0x80335DC8: nop

    // 0x80335DCC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335DD0: nop

    // 0x80335DD4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335DD8: nop

    // 0x80335DDC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335DE0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335DE4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335DE8: nop

    // 0x80335DEC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335DF0: nop

    // 0x80335DF4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335DF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335DFC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335E00: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335E04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335E10: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x80335E14: jal         0x8001C0EC
    // 0x80335E18: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335E18: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335E1C:
    // 0x80335E1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335E20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335E24: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335E28: nop

    // 0x80335E2C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335E30: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335E34: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335E38: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335E3C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335E40: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335E44: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335E48: nop

    // 0x80335E4C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335E50: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335E54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335E58: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335E5C: nop

    // 0x80335E60: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335E64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335E68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335E6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335E70: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335E74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335E78: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335E7C: nop

    // 0x80335E80: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335E84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E8C: jal         0x8001B4AC
    // 0x80335E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335E94: beq         $v0, $zero, L_80335EB4
    if (ctx->r2 == 0) {
        // 0x80335E98: nop
    
            goto L_80335EB4;
    }
    // 0x80335E98: nop

    // 0x80335E9C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335EA0: addiu       $t2, $zero, 0xD
    ctx->r10 = ADD32(0, 0XD);
    // 0x80335EA4: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80335EA8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335EAC: nop

    // 0x80335EB0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335EB4:
    // 0x80335EB4: b           L_80335EBC
    // 0x80335EB8: nop

        goto L_80335EBC;
    // 0x80335EB8: nop

L_80335EBC:
    // 0x80335EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335EC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335EC4: jr          $ra
    // 0x80335EC8: nop

    return;
    // 0x80335EC8: nop

;}
RECOMP_FUNC void func_bagular3_803341A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803341A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803341A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803341A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803341AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803341B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803341B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803341B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803341C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803341C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803341C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803341CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803341D0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803341D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803341D8: nop

    // 0x803341DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803341E0: nop

    // 0x803341E4: bne         $t1, $zero, L_8033429C
    if (ctx->r9 != 0) {
        // 0x803341E8: nop
    
            goto L_8033429C;
    }
    // 0x803341E8: nop

    // 0x803341EC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803341F0: nop

    // 0x803341F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803341F8: nop

    // 0x803341FC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334200: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334204: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334208: nop

    // 0x8033420C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80334210: nop

    // 0x80334214: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80334218: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033421C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80334220: addiu       $t8, $t8, -0x4908
    ctx->r24 = ADD32(ctx->r24, -0X4908);
    // 0x80334224: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80334228: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033422C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334230: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80334234: jal         0x8001C0EC
    // 0x80334238: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334238: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x8033423C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334240: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80334244: addiu       $t0, $t0, -0x4908
    ctx->r8 = ADD32(ctx->r8, -0X4908);
    // 0x80334248: lh          $a0, 0xEA($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XEA);
    // 0x8033424C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80334250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334254: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80334258: jal         0x8001C0EC
    // 0x8033425C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033425C: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x80334260: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334268: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x8033426C: jal         0x8001BBDC
    // 0x80334270: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80334270: nop

    after_2:
    // 0x80334274: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033427C: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x80334280: jal         0x8001BBDC
    // 0x80334284: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80334284: nop

    after_3:
    // 0x80334288: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033428C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334290: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334294: nop

    // 0x80334298: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
L_8033429C:
    // 0x8033429C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803342A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803342A4: jal         0x8002A8B4
    // 0x803342A8: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x803342A8: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_4:
    // 0x803342AC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803342B0: nop

    // 0x803342B4: lwc1        $f6, 0x3C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803342B8: nop

    // 0x803342BC: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x803342C0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803342C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803342C8: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x803342CC: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x803342D0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803342D4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803342D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803342DC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803342E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803342E4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803342E8: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x803342EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803342F0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803342F4: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x803342F8: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x803342FC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334300: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334304: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334308: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033430C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334310: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80334314: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80334318: nop

    // 0x8033431C: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
    // 0x80334320: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334324: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80334328: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033432C: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80334330: jal         0x80015538
    // 0x80334334: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80334334: nop

    after_5:
    // 0x80334338: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033433C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334340: lh          $t6, 0xEA($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XEA);
    // 0x80334344: nop

    // 0x80334348: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033434C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334350: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334354: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334358: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033435C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334360: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80334364: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334368: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033436C: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x80334370: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80334374: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334378: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033437C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334380: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334384: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334388: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8033438C: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80334390: nop

    // 0x80334394: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
    // 0x80334398: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033439C: nop

    // 0x803343A0: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x803343A4: nop

    // 0x803343A8: bne         $t4, $zero, L_803344AC
    if (ctx->r12 != 0) {
        // 0x803343AC: nop
    
            goto L_803344AC;
    }
    // 0x803343AC: nop

    // 0x803343B0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803343B4: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x803343B8: sh          $t2, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r10;
    // 0x803343BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803343C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803343C4: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803343C8: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x803343CC: lw          $a3, 0x4($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X4);
    // 0x803343D0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803343D4: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x803343D8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803343DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803343E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803343E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803343E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803343EC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803343F0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803343F4: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803343F8: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x803343FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334400: jal         0x80027464
    // 0x80334404: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80334404: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80334408: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033440C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334410: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334414: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334418: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033441C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334420: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334424: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334428: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033442C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80334430: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
    // 0x80334434: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334438: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033443C: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80334440: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x80334444: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x80334448: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033444C: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x80334450: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334454: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80334458: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033445C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334460: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80334464: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334468: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033446C: lwc1        $f8, 0x416C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80334470: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80334474: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334478: jal         0x80027464
    // 0x8033447C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x8033447C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80334480: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80334484: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80334488: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033448C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80334490: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80334494: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334498: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033449C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803344A0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803344A4: b           L_803344C4
    // 0x803344A8: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
        goto L_803344C4;
    // 0x803344A8: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
L_803344AC:
    // 0x803344AC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803344B0: nop

    // 0x803344B4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803344B8: nop

    // 0x803344BC: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x803344C0: sh          $t0, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r8;
L_803344C4:
    // 0x803344C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344CC: jal         0x80029C40
    // 0x803344D0: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x803344D0: nop

    after_8:
    // 0x803344D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803344D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803344DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803344E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803344E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803344E8: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    // 0x803344EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803344F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803344F4: jal         0x80029018
    // 0x803344F8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x803344F8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x803344FC: beq         $v0, $zero, L_80334550
    if (ctx->r2 == 0) {
        // 0x80334500: nop
    
            goto L_80334550;
    }
    // 0x80334500: nop

    // 0x80334504: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334508: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033450C: nop

    // 0x80334510: swc1        $f18, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f18.u32l;
    // 0x80334514: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334518: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033451C: nop

    // 0x80334520: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x80334524: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334528: nop

    // 0x8033452C: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80334530: nop

    // 0x80334534: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x80334538: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033453C: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x80334540: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80334544: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334548: nop

    // 0x8033454C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80334550:
    // 0x80334550: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334554: nop

    // 0x80334558: lh          $t8, 0xAE($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XAE);
    // 0x8033455C: nop

    // 0x80334560: bne         $t8, $zero, L_80334678
    if (ctx->r24 != 0) {
        // 0x80334564: nop
    
            goto L_80334678;
    }
    // 0x80334564: nop

    // 0x80334568: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033456C: nop

    // 0x80334570: lh          $t7, 0xAC($t0)
    ctx->r15 = MEM_H(ctx->r8, 0XAC);
    // 0x80334574: nop

    // 0x80334578: bne         $t7, $zero, L_80334670
    if (ctx->r15 != 0) {
        // 0x8033457C: nop
    
            goto L_80334670;
    }
    // 0x8033457C: nop

    // 0x80334580: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334584: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334588: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033458C: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80334590: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80334594: lwc1        $f10, 0x24($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80334598: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033459C: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x803345A0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803345A4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803345A8: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x803345AC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x803345B0: addiu       $a1, $a1, -0x3E98
    ctx->r5 = ADD32(ctx->r5, -0X3E98);
    // 0x803345B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803345B8: jal         0x80027464
    // 0x803345BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_10;
    // 0x803345BC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x803345C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803345C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803345C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803345CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803345D0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803345D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803345D8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803345DC: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x803345E0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803345E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803345E8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803345EC: sh          $t1, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r9;
    // 0x803345F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803345F4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803345F8: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803345FC: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80334600: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80334604: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80334608: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x8033460C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80334610: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334614: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80334618: sh          $t6, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r14;
    // 0x8033461C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334620: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80334624: lh          $t9, 0xC2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC2);
    // 0x80334628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033462C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80334630: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x80334634: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334638: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x8033463C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334640: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334644: sh          $t0, 0x420C($at)
    MEM_H(0X420C, ctx->r1) = ctx->r8;
    // 0x80334648: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033464C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334650: jal         0x8001BBDC
    // 0x80334654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x80334654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80334658: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033465C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80334660: sh          $t1, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r9;
    // 0x80334664: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334668: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033466C: sh          $t2, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r10;
L_80334670:
    // 0x80334670: b           L_80334690
    // 0x80334674: nop

        goto L_80334690;
    // 0x80334674: nop

L_80334678:
    // 0x80334678: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033467C: nop

    // 0x80334680: lh          $t8, 0xAE($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAE);
    // 0x80334684: nop

    // 0x80334688: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8033468C: sh          $t7, 0xAE($t6)
    MEM_H(0XAE, ctx->r14) = ctx->r15;
L_80334690:
    // 0x80334690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334698: jal         0x8002A1FC
    // 0x8033469C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_12;
    // 0x8033469C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_12:
    // 0x803346A0: beq         $v0, $zero, L_803346F4
    if (ctx->r2 == 0) {
        // 0x803346A4: nop
    
            goto L_803346F4;
    }
    // 0x803346A4: nop

    // 0x803346A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803346AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803346B0: nop

    // 0x803346B4: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
    // 0x803346B8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803346BC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803346C0: nop

    // 0x803346C4: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
    // 0x803346C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803346CC: nop

    // 0x803346D0: lwc1        $f18, 0x2C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x803346D4: nop

    // 0x803346D8: swc1        $f18, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f18.u32l;
    // 0x803346DC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803346E0: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x803346E4: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x803346E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803346EC: nop

    // 0x803346F0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_803346F4:
    // 0x803346F4: jal         0x8033BE7C
    // 0x803346F8: nop

    func_bagular3_8033BE7C(rdram, ctx);
        goto after_13;
    // 0x803346F8: nop

    after_13:
    // 0x803346FC: b           L_80334704
    // 0x80334700: nop

        goto L_80334704;
    // 0x80334700: nop

L_80334704:
    // 0x80334704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334708: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033470C: jr          $ra
    // 0x80334710: nop

    return;
    // 0x80334710: nop

;}
RECOMP_FUNC void func_bagular3_803387A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803387A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803387A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803387AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803387B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803387B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803387B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803387BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803387C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803387C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803387C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803387CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803387D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803387D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803387D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803387DC: nop

    // 0x803387E0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803387E4: nop

    // 0x803387E8: bne         $t1, $zero, L_80338840
    if (ctx->r9 != 0) {
        // 0x803387EC: nop
    
            goto L_80338840;
    }
    // 0x803387EC: nop

    // 0x803387F0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803387F4: nop

    // 0x803387F8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803387FC: nop

    // 0x80338800: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80338804: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80338808: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033880C: nop

    // 0x80338810: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80338814: nop

    // 0x80338818: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033881C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338820: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80338824: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80338828: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033882C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80338830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338834: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80338838: jal         0x8001C0EC
    // 0x8033883C: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033883C: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80338840:
    // 0x80338840: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80338844: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338848: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033884C: nop

    // 0x80338850: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338854: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338858: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033885C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338860: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338864: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338868: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033886C: nop

    // 0x80338870: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80338874: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338878: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033887C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80338880: nop

    // 0x80338884: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80338888: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033888C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338890: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338894: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338898: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033889C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803388A0: nop

    // 0x803388A4: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803388A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803388AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803388B0: jal         0x8001B4AC
    // 0x803388B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803388B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803388B8: beq         $v0, $zero, L_803388D8
    if (ctx->r2 == 0) {
        // 0x803388BC: nop
    
            goto L_803388D8;
    }
    // 0x803388BC: nop

    // 0x803388C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803388C4: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x803388C8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803388CC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803388D0: nop

    // 0x803388D4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803388D8:
    // 0x803388D8: b           L_803388E0
    // 0x803388DC: nop

        goto L_803388E0;
    // 0x803388DC: nop

L_803388E0:
    // 0x803388E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803388E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803388E8: jr          $ra
    // 0x803388EC: nop

    return;
    // 0x803388EC: nop

;}
RECOMP_FUNC void func_bagular3_80332624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332624: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033262C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332630: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332634: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332638: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033263C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332644: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332648: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033264C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332650: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332654: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332658: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033265C: nop

    // 0x80332660: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332664: nop

    // 0x80332668: bne         $t1, $zero, L_8033270C
    if (ctx->r9 != 0) {
        // 0x8033266C: nop
    
            goto L_8033270C;
    }
    // 0x8033266C: nop

    // 0x80332670: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332674: nop

    // 0x80332678: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033267C: nop

    // 0x80332680: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332684: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332688: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033268C: nop

    // 0x80332690: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332694: nop

    // 0x80332698: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033269C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803326A0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803326A4: addiu       $t8, $t8, -0x4908
    ctx->r24 = ADD32(ctx->r24, -0X4908);
    // 0x803326A8: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x803326AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803326B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803326B8: jal         0x8001C0EC
    // 0x803326BC: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803326BC: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x803326C0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803326C4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803326C8: addiu       $t0, $t0, -0x4908
    ctx->r8 = ADD32(ctx->r8, -0X4908);
    // 0x803326CC: lh          $a0, 0xEA($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XEA);
    // 0x803326D0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803326D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803326DC: jal         0x8001C0EC
    // 0x803326E0: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803326E0: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x803326E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803326E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803326EC: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x803326F0: jal         0x8001BBDC
    // 0x803326F4: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803326F4: nop

    after_2:
    // 0x803326F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803326FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332700: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x80332704: jal         0x8001BBDC
    // 0x80332708: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80332708: nop

    after_3:
L_8033270C:
    // 0x8033270C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332714: jal         0x8002A8B4
    // 0x80332718: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x80332718: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x8033271C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332720: nop

    // 0x80332724: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332728: nop

    // 0x8033272C: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x80332730: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332734: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332738: lh          $t6, 0xE8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XE8);
    // 0x8033273C: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332740: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x80332744: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332748: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033274C: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332750: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332754: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332758: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x8033275C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332760: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332764: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80332768: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033276C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332770: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332774: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332778: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033277C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332780: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80332784: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80332788: nop

    // 0x8033278C: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x80332790: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332794: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332798: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033279C: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x803327A0: jal         0x80015538
    // 0x803327A4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803327A4: nop

    after_5:
    // 0x803327A8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803327AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803327B0: lh          $t2, 0xEA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XEA);
    // 0x803327B4: nop

    // 0x803327B8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803327BC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803327C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803327C4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803327C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803327CC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803327D0: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x803327D4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803327D8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803327DC: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x803327E0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803327E4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803327E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803327EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803327F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803327F4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803327F8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803327FC: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80332800: nop

    // 0x80332804: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x80332808: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033280C: nop

    // 0x80332810: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80332814: nop

    // 0x80332818: bne         $t3, $zero, L_80332918
    if (ctx->r11 != 0) {
        // 0x8033281C: nop
    
            goto L_80332918;
    }
    // 0x8033281C: nop

    // 0x80332820: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332824: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x80332828: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x8033282C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332830: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332834: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80332838: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8033283C: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80332840: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332844: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x80332848: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033284C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332850: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332854: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332858: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033285C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332860: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332864: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332868: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x8033286C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332870: jal         0x80027464
    // 0x80332874: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80332874: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80332878: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033287C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332880: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332884: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332888: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033288C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332890: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332894: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332898: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033289C: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x803328A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803328A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328A8: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x803328AC: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x803328B0: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x803328B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803328B8: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x803328BC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803328C0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803328C4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803328C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803328CC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803328D0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803328D4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803328D8: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803328DC: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x803328E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803328E4: jal         0x80027464
    // 0x803328E8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x803328E8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x803328EC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803328F0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803328F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328F8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x803328FC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332900: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332904: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80332908: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033290C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332910: b           L_80332930
    // 0x80332914: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
        goto L_80332930;
    // 0x80332914: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
L_80332918:
    // 0x80332918: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033291C: nop

    // 0x80332920: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x80332924: nop

    // 0x80332928: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x8033292C: sh          $t7, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r15;
L_80332930:
    // 0x80332930: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332934: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80332938: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033293C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80332940: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80332944: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332948: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033294C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332950: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332954: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80332958: lh          $t4, 0xBE($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XBE);
    // 0x8033295C: nop

    // 0x80332960: bne         $t4, $zero, L_80332990
    if (ctx->r12 != 0) {
        // 0x80332964: nop
    
            goto L_80332990;
    }
    // 0x80332964: nop

    // 0x80332968: lh          $t2, 0xC0($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XC0);
    // 0x8033296C: nop

    // 0x80332970: bne         $t2, $zero, L_80332990
    if (ctx->r10 != 0) {
        // 0x80332974: nop
    
            goto L_80332990;
    }
    // 0x80332974: nop

    // 0x80332978: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033297C: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80332980: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x80332984: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332988: b           L_80332A50
    // 0x8033298C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_80332A50;
    // 0x8033298C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80332990:
    // 0x80332990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332998: jal         0x8002A46C
    // 0x8033299C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_8;
    // 0x8033299C: nop

    after_8:
    // 0x803329A0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x803329A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803329A8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803329AC: lwc1        $f14, 0x1C($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803329B0: jal         0x80015538
    // 0x803329B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x803329B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_9:
    // 0x803329B8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x803329BC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x803329C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803329C4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803329C8: nop

    // 0x803329CC: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x803329D0: nop

    // 0x803329D4: bc1f        L_80332A38
    if (!c1cs) {
        // 0x803329D8: nop
    
            goto L_80332A38;
    }
    // 0x803329D8: nop

    // 0x803329DC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803329E0: lwc1        $f16, -0x3D90($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3D90);
    // 0x803329E4: nop

    // 0x803329E8: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x803329EC: nop

    // 0x803329F0: bc1f        L_80332A38
    if (!c1cs) {
        // 0x803329F4: nop
    
            goto L_80332A38;
    }
    // 0x803329F4: nop

    // 0x803329F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803329FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332A00: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332A04: nop

    // 0x80332A08: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x80332A0C: nop

    // 0x80332A10: bc1f        L_80332A30
    if (!c1cs) {
        // 0x80332A14: nop
    
            goto L_80332A30;
    }
    // 0x80332A14: nop

    // 0x80332A18: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A1C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80332A20: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80332A24: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A28: nop

    // 0x80332A2C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80332A30:
    // 0x80332A30: b           L_80332A50
    // 0x80332A34: nop

        goto L_80332A50;
    // 0x80332A34: nop

L_80332A38:
    // 0x80332A38: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A3C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332A40: sh          $t4, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r12;
    // 0x80332A44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332A48: nop

    // 0x80332A4C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80332A50:
    // 0x80332A50: b           L_80332A58
    // 0x80332A54: nop

        goto L_80332A58;
    // 0x80332A54: nop

L_80332A58:
    // 0x80332A58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332A5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332A60: jr          $ra
    // 0x80332A64: nop

    return;
    // 0x80332A64: nop

;}
RECOMP_FUNC void func_bagular3_80337814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033781C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337820: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337824: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337828: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033782C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337830: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337838: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033783C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337840: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337844: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337848: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033784C: nop

    // 0x80337850: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337854: nop

    // 0x80337858: bne         $t1, $zero, L_803378B0
    if (ctx->r9 != 0) {
        // 0x8033785C: nop
    
            goto L_803378B0;
    }
    // 0x8033785C: nop

    // 0x80337860: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337864: nop

    // 0x80337868: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033786C: nop

    // 0x80337870: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337874: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80337878: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033787C: nop

    // 0x80337880: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337884: nop

    // 0x80337888: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033788C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337890: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337894: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80337898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033789C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803378A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803378A4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x803378A8: jal         0x8001C0EC
    // 0x803378AC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803378AC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_803378B0:
    // 0x803378B0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803378B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803378B8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803378BC: nop

    // 0x803378C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803378C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803378C8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803378CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803378D0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803378D4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803378D8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803378DC: nop

    // 0x803378E0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803378E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803378E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803378EC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803378F0: nop

    // 0x803378F4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803378F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803378FC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337900: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337904: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80337908: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033790C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80337910: nop

    // 0x80337914: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80337918: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033791C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337920: jal         0x8001B4AC
    // 0x80337924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80337924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80337928: beq         $v0, $zero, L_80337948
    if (ctx->r2 == 0) {
        // 0x8033792C: nop
    
            goto L_80337948;
    }
    // 0x8033792C: nop

    // 0x80337930: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80337934: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x80337938: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033793C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337940: nop

    // 0x80337944: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80337948:
    // 0x80337948: b           L_80337950
    // 0x8033794C: nop

        goto L_80337950;
    // 0x8033794C: nop

L_80337950:
    // 0x80337950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337954: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337958: jr          $ra
    // 0x8033795C: nop

    return;
    // 0x8033795C: nop

;}
RECOMP_FUNC void func_bagular3_80339334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80339338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033933C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80339340: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339344: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339348: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033934C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339350: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339354: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339358: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033935C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339360: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339364: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339368: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033936C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339370: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339374: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80339378: nop

    // 0x8033937C: beq         $s0, $at, L_803393A4
    if (ctx->r16 == ctx->r1) {
        // 0x80339380: nop
    
            goto L_803393A4;
    }
    // 0x80339380: nop

    // 0x80339384: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339388: beq         $s0, $at, L_803393B4
    if (ctx->r16 == ctx->r1) {
        // 0x8033938C: nop
    
            goto L_803393B4;
    }
    // 0x8033938C: nop

    // 0x80339390: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80339394: beq         $s0, $at, L_803393C4
    if (ctx->r16 == ctx->r1) {
        // 0x80339398: nop
    
            goto L_803393C4;
    }
    // 0x80339398: nop

    // 0x8033939C: b           L_803393D4
    // 0x803393A0: nop

        goto L_803393D4;
    // 0x803393A0: nop

L_803393A4:
    // 0x803393A4: jal         0x80338E1C
    // 0x803393A8: nop

    func_bagular3_80338E1C(rdram, ctx);
        goto after_0;
    // 0x803393A8: nop

    after_0:
    // 0x803393AC: b           L_803393DC
    // 0x803393B0: nop

        goto L_803393DC;
    // 0x803393B0: nop

L_803393B4:
    // 0x803393B4: jal         0x80339014
    // 0x803393B8: nop

    func_bagular3_80339014(rdram, ctx);
        goto after_1;
    // 0x803393B8: nop

    after_1:
    // 0x803393BC: b           L_803393DC
    // 0x803393C0: nop

        goto L_803393DC;
    // 0x803393C0: nop

L_803393C4:
    // 0x803393C4: jal         0x803391A4
    // 0x803393C8: nop

    func_bagular3_803391A4(rdram, ctx);
        goto after_2;
    // 0x803393C8: nop

    after_2:
    // 0x803393CC: b           L_803393DC
    // 0x803393D0: nop

        goto L_803393DC;
    // 0x803393D0: nop

L_803393D4:
    // 0x803393D4: b           L_803393DC
    // 0x803393D8: nop

        goto L_803393DC;
    // 0x803393D8: nop

L_803393DC:
    // 0x803393DC: b           L_803393E4
    // 0x803393E0: nop

        goto L_803393E4;
    // 0x803393E0: nop

L_803393E4:
    // 0x803393E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803393E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803393EC: jr          $ra
    // 0x803393F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803393F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular3_803351E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803351E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803351EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803351F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803351F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803351F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803351FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335200: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335204: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335208: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033520C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335210: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335214: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335218: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033521C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335220: nop

    // 0x80335224: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335228: nop

    // 0x8033522C: bne         $t1, $zero, L_80335284
    if (ctx->r9 != 0) {
        // 0x80335230: nop
    
            goto L_80335284;
    }
    // 0x80335230: nop

    // 0x80335234: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335238: nop

    // 0x8033523C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335240: nop

    // 0x80335244: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335248: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033524C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335250: nop

    // 0x80335254: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335258: nop

    // 0x8033525C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335264: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335268: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x8033526C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335270: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335278: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033527C: jal         0x8001C0EC
    // 0x80335280: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335280: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335284:
    // 0x80335284: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335288: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033528C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335290: nop

    // 0x80335294: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335298: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033529C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803352A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803352A4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803352A8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803352AC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803352B0: nop

    // 0x803352B4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x803352B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803352BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803352C0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803352C4: nop

    // 0x803352C8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803352CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803352D0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803352D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803352D8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803352DC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803352E0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803352E4: nop

    // 0x803352E8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803352EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803352F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803352F4: jal         0x8001B4AC
    // 0x803352F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803352F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803352FC: beq         $v0, $zero, L_8033531C
    if (ctx->r2 == 0) {
        // 0x80335300: nop
    
            goto L_8033531C;
    }
    // 0x80335300: nop

    // 0x80335304: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335308: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8033530C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80335310: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335314: nop

    // 0x80335318: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033531C:
    // 0x8033531C: b           L_80335324
    // 0x80335320: nop

        goto L_80335324;
    // 0x80335320: nop

L_80335324:
    // 0x80335324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335328: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033532C: jr          $ra
    // 0x80335330: nop

    return;
    // 0x80335330: nop

;}
RECOMP_FUNC void func_bagular3_8033A8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A8C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033A8C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033A8CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A8D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A8D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A8D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A8DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A8E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A8E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A8E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A8EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A8F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A8F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033A8F8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A8FC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033A900: lw          $t1, 0xC4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC4);
    // 0x8033A904: nop

    // 0x8033A908: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033A90C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A910: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033A914: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033A918: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033A91C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033A920: lh          $t3, 0x4258($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4258);
    // 0x8033A924: nop

    // 0x8033A928: bne         $t3, $zero, L_8033A974
    if (ctx->r11 != 0) {
        // 0x8033A92C: nop
    
            goto L_8033A974;
    }
    // 0x8033A92C: nop

    // 0x8033A930: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A934: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A938: lw          $t5, 0xC4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC4);
    // 0x8033A93C: nop

    // 0x8033A940: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033A944: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033A948: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033A94C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033A950: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033A954: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033A958: sw          $zero, 0x4214($at)
    MEM_W(0X4214, ctx->r1) = 0;
    // 0x8033A95C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A960: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A964: jal         0x8002B114
    // 0x8033A968: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x8033A968: nop

    after_0:
    // 0x8033A96C: b           L_8033AA90
    // 0x8033A970: nop

        goto L_8033AA90;
    // 0x8033A970: nop

L_8033A974:
    // 0x8033A974: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A978: nop

    // 0x8033A97C: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x8033A980: nop

    // 0x8033A984: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033A988: sltiu       $at, $t9, 0xD
    ctx->r1 = ctx->r25 < 0XD ? 1 : 0;
    // 0x8033A98C: beq         $at, $zero, L_8033AA80
    if (ctx->r1 == 0) {
        // 0x8033A990: nop
    
            goto L_8033AA80;
    }
    // 0x8033A990: nop

    // 0x8033A994: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033A998: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A99C: addu        $at, $at, $t9
    gpr jr_addend_8033A9A8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033A9A0: lw          $t9, -0x3C90($at)
    ctx->r25 = ADD32(ctx->r1, -0X3C90);
    // 0x8033A9A4: nop

    // 0x8033A9A8: jr          $t9
    // 0x8033A9AC: nop

    switch (jr_addend_8033A9A8 >> 2) {
        case 0: goto L_8033A9B0; break;
        case 1: goto L_8033A9C0; break;
        case 2: goto L_8033A9D0; break;
        case 3: goto L_8033A9E0; break;
        case 4: goto L_8033A9F0; break;
        case 5: goto L_8033AA00; break;
        case 6: goto L_8033AA10; break;
        case 7: goto L_8033AA20; break;
        case 8: goto L_8033AA30; break;
        case 9: goto L_8033AA40; break;
        case 10: goto L_8033AA50; break;
        case 11: goto L_8033AA60; break;
        case 12: goto L_8033AA70; break;
        default: switch_error(__func__, 0x8033A9A8, 0x8033C370);
    }
    // 0x8033A9AC: nop

L_8033A9B0:
    // 0x8033A9B0: jal         0x8033979C
    // 0x8033A9B4: nop

    func_bagular3_8033979C(rdram, ctx);
        goto after_1;
    // 0x8033A9B4: nop

    after_1:
    // 0x8033A9B8: b           L_8033AA88
    // 0x8033A9BC: nop

        goto L_8033AA88;
    // 0x8033A9BC: nop

L_8033A9C0:
    // 0x8033A9C0: jal         0x803398F4
    // 0x8033A9C4: nop

    func_bagular3_803398F4(rdram, ctx);
        goto after_2;
    // 0x8033A9C4: nop

    after_2:
    // 0x8033A9C8: b           L_8033AA88
    // 0x8033A9CC: nop

        goto L_8033AA88;
    // 0x8033A9CC: nop

L_8033A9D0:
    // 0x8033A9D0: jal         0x80339A40
    // 0x8033A9D4: nop

    func_bagular3_80339A40(rdram, ctx);
        goto after_3;
    // 0x8033A9D4: nop

    after_3:
    // 0x8033A9D8: b           L_8033AA88
    // 0x8033A9DC: nop

        goto L_8033AA88;
    // 0x8033A9DC: nop

L_8033A9E0:
    // 0x8033A9E0: jal         0x80339B8C
    // 0x8033A9E4: nop

    func_bagular3_80339B8C(rdram, ctx);
        goto after_4;
    // 0x8033A9E4: nop

    after_4:
    // 0x8033A9E8: b           L_8033AA88
    // 0x8033A9EC: nop

        goto L_8033AA88;
    // 0x8033A9EC: nop

L_8033A9F0:
    // 0x8033A9F0: jal         0x80339CF4
    // 0x8033A9F4: nop

    func_bagular3_80339CF4(rdram, ctx);
        goto after_5;
    // 0x8033A9F4: nop

    after_5:
    // 0x8033A9F8: b           L_8033AA88
    // 0x8033A9FC: nop

        goto L_8033AA88;
    // 0x8033A9FC: nop

L_8033AA00:
    // 0x8033AA00: jal         0x80339E40
    // 0x8033AA04: nop

    func_bagular3_80339E40(rdram, ctx);
        goto after_6;
    // 0x8033AA04: nop

    after_6:
    // 0x8033AA08: b           L_8033AA88
    // 0x8033AA0C: nop

        goto L_8033AA88;
    // 0x8033AA0C: nop

L_8033AA10:
    // 0x8033AA10: jal         0x80339F8C
    // 0x8033AA14: nop

    func_bagular3_80339F8C(rdram, ctx);
        goto after_7;
    // 0x8033AA14: nop

    after_7:
    // 0x8033AA18: b           L_8033AA88
    // 0x8033AA1C: nop

        goto L_8033AA88;
    // 0x8033AA1C: nop

L_8033AA20:
    // 0x8033AA20: jal         0x8033A0D8
    // 0x8033AA24: nop

    func_bagular3_8033A0D8(rdram, ctx);
        goto after_8;
    // 0x8033AA24: nop

    after_8:
    // 0x8033AA28: b           L_8033AA88
    // 0x8033AA2C: nop

        goto L_8033AA88;
    // 0x8033AA2C: nop

L_8033AA30:
    // 0x8033AA30: jal         0x8033A224
    // 0x8033AA34: nop

    func_bagular3_8033A224(rdram, ctx);
        goto after_9;
    // 0x8033AA34: nop

    after_9:
    // 0x8033AA38: b           L_8033AA88
    // 0x8033AA3C: nop

        goto L_8033AA88;
    // 0x8033AA3C: nop

L_8033AA40:
    // 0x8033AA40: jal         0x8033A370
    // 0x8033AA44: nop

    func_bagular3_8033A370(rdram, ctx);
        goto after_10;
    // 0x8033AA44: nop

    after_10:
    // 0x8033AA48: b           L_8033AA88
    // 0x8033AA4C: nop

        goto L_8033AA88;
    // 0x8033AA4C: nop

L_8033AA50:
    // 0x8033AA50: jal         0x8033A4BC
    // 0x8033AA54: nop

    func_bagular3_8033A4BC(rdram, ctx);
        goto after_11;
    // 0x8033AA54: nop

    after_11:
    // 0x8033AA58: b           L_8033AA88
    // 0x8033AA5C: nop

        goto L_8033AA88;
    // 0x8033AA5C: nop

L_8033AA60:
    // 0x8033AA60: jal         0x8033A608
    // 0x8033AA64: nop

    func_bagular3_8033A608(rdram, ctx);
        goto after_12;
    // 0x8033AA64: nop

    after_12:
    // 0x8033AA68: b           L_8033AA88
    // 0x8033AA6C: nop

        goto L_8033AA88;
    // 0x8033AA6C: nop

L_8033AA70:
    // 0x8033AA70: jal         0x8033A754
    // 0x8033AA74: nop

    func_bagular3_8033A754(rdram, ctx);
        goto after_13;
    // 0x8033AA74: nop

    after_13:
    // 0x8033AA78: b           L_8033AA88
    // 0x8033AA7C: nop

        goto L_8033AA88;
    // 0x8033AA7C: nop

L_8033AA80:
    // 0x8033AA80: b           L_8033AA88
    // 0x8033AA84: nop

        goto L_8033AA88;
    // 0x8033AA84: nop

L_8033AA88:
    // 0x8033AA88: b           L_8033AA90
    // 0x8033AA8C: nop

        goto L_8033AA90;
    // 0x8033AA8C: nop

L_8033AA90:
    // 0x8033AA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033AA94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033AA98: jr          $ra
    // 0x8033AA9C: nop

    return;
    // 0x8033AA9C: nop

;}
RECOMP_FUNC void func_bagular3_803376C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803376C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803376CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803376D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803376D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803376D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803376DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803376E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803376E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803376E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803376EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803376F0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803376F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803376F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803376FC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337700: nop

    // 0x80337704: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337708: nop

    // 0x8033770C: bne         $t1, $zero, L_80337764
    if (ctx->r9 != 0) {
        // 0x80337710: nop
    
            goto L_80337764;
    }
    // 0x80337710: nop

    // 0x80337714: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337718: nop

    // 0x8033771C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80337720: nop

    // 0x80337724: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80337728: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033772C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337730: nop

    // 0x80337734: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80337738: nop

    // 0x8033773C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80337740: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337744: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80337748: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x8033774C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337750: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80337754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337758: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033775C: jal         0x8001C0EC
    // 0x80337760: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337760: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80337764:
    // 0x80337764: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337768: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033776C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80337770: nop

    // 0x80337774: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337778: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033777C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337780: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337784: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337788: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033778C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80337790: nop

    // 0x80337794: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80337798: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033779C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803377A0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x803377A4: nop

    // 0x803377A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803377AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803377B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803377B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803377B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803377BC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803377C0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803377C4: nop

    // 0x803377C8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x803377CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803377D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803377D4: jal         0x8001B4AC
    // 0x803377D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803377D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803377DC: beq         $v0, $zero, L_803377FC
    if (ctx->r2 == 0) {
        // 0x803377E0: nop
    
            goto L_803377FC;
    }
    // 0x803377E0: nop

    // 0x803377E4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803377E8: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x803377EC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x803377F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803377F4: nop

    // 0x803377F8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803377FC:
    // 0x803377FC: b           L_80337804
    // 0x80337800: nop

        goto L_80337804;
    // 0x80337800: nop

L_80337804:
    // 0x80337804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337808: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033780C: jr          $ra
    // 0x80337810: nop

    return;
    // 0x80337810: nop

;}
RECOMP_FUNC void func_bagular3_8033979C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033979C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803397A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803397A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803397A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803397AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803397B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803397B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803397B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803397BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803397C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803397C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803397C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803397CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803397D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803397D4: nop

    // 0x803397D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803397DC: nop

    // 0x803397E0: bne         $t1, $zero, L_80339844
    if (ctx->r9 != 0) {
        // 0x803397E4: nop
    
            goto L_80339844;
    }
    // 0x803397E4: nop

    // 0x803397E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803397EC: nop

    // 0x803397F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803397F4: nop

    // 0x803397F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803397FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80339800: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339804: nop

    // 0x80339808: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033980C: nop

    // 0x80339810: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80339814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339818: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033981C: addiu       $t7, $t7, -0x47F0
    ctx->r15 = ADD32(ctx->r15, -0X47F0);
    // 0x80339820: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339824: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80339828: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033982C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339830: jal         0x8001C0EC
    // 0x80339834: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80339834: addiu       $a3, $zero, 0x150
    ctx->r7 = ADD32(0, 0X150);
    after_0:
    // 0x80339838: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033983C: nop

    // 0x80339840: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
L_80339844:
    // 0x80339844: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80339848: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033984C: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x80339850: nop

    // 0x80339854: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80339858: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033985C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80339860: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339864: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80339868: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033986C: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80339870: nop

    // 0x80339874: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80339878: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033987C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339880: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x80339884: nop

    // 0x80339888: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033988C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80339890: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339894: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x80339898: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033989C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803398A0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x803398A4: nop

    // 0x803398A8: swc1        $f6, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f6.u32l;
    // 0x803398AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803398B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803398B4: jal         0x8001B4AC
    // 0x803398B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x803398B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x803398BC: beq         $v0, $zero, L_803398DC
    if (ctx->r2 == 0) {
        // 0x803398C0: nop
    
            goto L_803398DC;
    }
    // 0x803398C0: nop

    // 0x803398C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803398C8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803398CC: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x803398D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803398D4: nop

    // 0x803398D8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803398DC:
    // 0x803398DC: b           L_803398E4
    // 0x803398E0: nop

        goto L_803398E4;
    // 0x803398E0: nop

L_803398E4:
    // 0x803398E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803398E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803398EC: jr          $ra
    // 0x803398F0: nop

    return;
    // 0x803398F0: nop

;}
RECOMP_FUNC void func_bagular3_80335AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335AE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335AEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335AF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335AF4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335AF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335AFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335B00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B04: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335B08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B0C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335B10: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335B14: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335B18: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335B1C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335B20: nop

    // 0x80335B24: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335B28: nop

    // 0x80335B2C: bne         $t1, $zero, L_80335B84
    if (ctx->r9 != 0) {
        // 0x80335B30: nop
    
            goto L_80335B84;
    }
    // 0x80335B30: nop

    // 0x80335B34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335B38: nop

    // 0x80335B3C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335B40: nop

    // 0x80335B44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335B48: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335B4C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335B50: nop

    // 0x80335B54: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335B58: nop

    // 0x80335B5C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335B60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B64: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335B68: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x80335B6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B70: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335B78: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80335B7C: jal         0x8001C0EC
    // 0x80335B80: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335B80: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_80335B84:
    // 0x80335B84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80335B88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335B8C: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80335B90: nop

    // 0x80335B94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335B98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335B9C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80335BA0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335BA4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335BA8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80335BAC: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80335BB0: nop

    // 0x80335BB4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335BB8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335BBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335BC0: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335BC4: nop

    // 0x80335BC8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335BCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335BD0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335BD4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335BD8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335BDC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80335BE0: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335BE4: nop

    // 0x80335BE8: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335BEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335BF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335BF4: jal         0x8001B4AC
    // 0x80335BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335BFC: beq         $v0, $zero, L_80335C1C
    if (ctx->r2 == 0) {
        // 0x80335C00: nop
    
            goto L_80335C1C;
    }
    // 0x80335C00: nop

    // 0x80335C04: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335C08: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x80335C0C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80335C10: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335C14: nop

    // 0x80335C18: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335C1C:
    // 0x80335C1C: b           L_80335C24
    // 0x80335C20: nop

        goto L_80335C24;
    // 0x80335C20: nop

L_80335C24:
    // 0x80335C24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335C28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335C2C: jr          $ra
    // 0x80335C30: nop

    return;
    // 0x80335C30: nop

;}
RECOMP_FUNC void func_bagular3_803315C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803315C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803315C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803315CC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803315D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803315D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803315D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803315DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803315E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803315E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803315E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803315EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803315F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803315F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803315F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803315FC: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80331600: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80331604: nop

    // 0x80331608: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033160C: nop

    // 0x80331610: bne         $t1, $zero, L_80331710
    if (ctx->r9 != 0) {
        // 0x80331614: nop
    
            goto L_80331710;
    }
    // 0x80331614: nop

    // 0x80331618: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033161C: nop

    // 0x80331620: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331624: nop

    // 0x80331628: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033162C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331630: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331634: nop

    // 0x80331638: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033163C: nop

    // 0x80331640: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80331644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033164C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331650: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80331654: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80331658: jal         0x8001ABF4
    // 0x8033165C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8033165C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80331660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331664: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331668: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x8033166C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331670: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80331674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331678: jal         0x8001ABF4
    // 0x8033167C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033167C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80331680: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331684: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331688: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x8033168C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331690: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x80331694: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331698: jal         0x8001ABF4
    // 0x8033169C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033169C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x803316A0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803316A4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803316A8: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x803316AC: addiu       $a3, $a3, -0x4948
    ctx->r7 = ADD32(ctx->r7, -0X4948);
    // 0x803316B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316B4: jal         0x8001ABF4
    // 0x803316B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803316B8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x803316BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803316C0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803316C4: addiu       $t8, $t8, -0x4BE0
    ctx->r24 = ADD32(ctx->r24, -0X4BE0);
    // 0x803316C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803316CC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803316D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803316D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803316D8: jal         0x8001C0EC
    // 0x803316DC: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x803316DC: addiu       $a3, $zero, 0x144
    ctx->r7 = ADD32(0, 0X144);
    after_4:
    // 0x803316E0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803316E4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x803316E8: addiu       $t0, $t0, -0x49F0
    ctx->r8 = ADD32(ctx->r8, -0X49F0);
    // 0x803316EC: lh          $a0, 0xE8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XE8);
    // 0x803316F0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803316F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803316F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803316FC: jal         0x8001C0EC
    // 0x80331700: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80331700: addiu       $a3, $zero, 0x14E
    ctx->r7 = ADD32(0, 0X14E);
    after_5:
    // 0x80331704: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80331708: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033170C: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
L_80331710:
    // 0x80331710: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331714: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331718: jal         0x8002A8B4
    // 0x8033171C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x8033171C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_6:
    // 0x80331720: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80331724: nop

    // 0x80331728: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033172C: nop

    // 0x80331730: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x80331734: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80331738: nop

    // 0x8033173C: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80331740: nop

    // 0x80331744: bne         $t6, $zero, L_80331774
    if (ctx->r14 != 0) {
        // 0x80331748: nop
    
            goto L_80331774;
    }
    // 0x80331748: nop

    // 0x8033174C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331750: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80331754: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x80331758: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033175C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80331760: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80331764: jal         0x8001ABF4
    // 0x80331768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80331768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8033176C: b           L_8033178C
    // 0x80331770: nop

        goto L_8033178C;
    // 0x80331770: nop

L_80331774:
    // 0x80331774: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331778: nop

    // 0x8033177C: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x80331780: nop

    // 0x80331784: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80331788: sh          $t8, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r24;
L_8033178C:
    // 0x8033178C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331790: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331794: jal         0x8001B4AC
    // 0x80331798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x80331798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8033179C: beq         $v0, $zero, L_80331A1C
    if (ctx->r2 == 0) {
        // 0x803317A0: nop
    
            goto L_80331A1C;
    }
    // 0x803317A0: nop

    // 0x803317A4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803317A8: nop

    // 0x803317AC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803317B0: nop

    // 0x803317B4: bne         $t0, $zero, L_80331A04
    if (ctx->r8 != 0) {
        // 0x803317B8: nop
    
            goto L_80331A04;
    }
    // 0x803317B8: nop

    // 0x803317BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803317C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803317C4: addiu       $a3, $a3, -0x4AD0
    ctx->r7 = ADD32(ctx->r7, -0X4AD0);
    // 0x803317C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803317CC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x803317D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803317D4: jal         0x8001ABF4
    // 0x803317D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x803317D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x803317DC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803317E0: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x803317E4: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
    // 0x803317E8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803317EC: lwc1        $f12, -0x3DD8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3DD8);
    // 0x803317F0: jal         0x800366E0
    // 0x803317F4: nop

    sqrtf_recomp(rdram, ctx);
        goto after_10;
    // 0x803317F4: nop

    after_10:
    // 0x803317F8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x803317FC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80331800: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80331804: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331808: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033180C: jal         0x80015538
    // 0x80331810: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80331810: nop

    after_11:
    // 0x80331814: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80331818: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033181C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80331820: lwc1        $f11, -0x3DD0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X3DD0);
    // 0x80331824: lwc1        $f10, -0x3DCC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3DCC);
    // 0x80331828: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033182C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80331830: jal         0x80034970
    // 0x80331834: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_12;
    // 0x80331834: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_12:
    // 0x80331838: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8033183C: nop

    // 0x80331840: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80331844: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80331848: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033184C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80331850: lwc1        $f11, -0x3DC8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X3DC8);
    // 0x80331854: lwc1        $f10, -0x3DC4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3DC4);
    // 0x80331858: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033185C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80331860: jal         0x80036570
    // 0x80331864: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_13;
    // 0x80331864: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_13:
    // 0x80331868: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8033186C: nop

    // 0x80331870: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80331874: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80331878: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033187C: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80331880: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331884: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80331888: jal         0x80015538
    // 0x8033188C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_14;
    // 0x8033188C: nop

    after_14:
    // 0x80331890: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80331894: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80331898: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033189C: lui         $at, 0x43B5
    ctx->r1 = S32(0X43B5 << 16);
    // 0x803318A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803318A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803318A8: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x803318AC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803318B0: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803318B4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803318B8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x803318BC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803318C0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x803318C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803318C8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803318CC: addiu       $a1, $a1, -0x3EB0
    ctx->r5 = ADD32(ctx->r5, -0X3EB0);
    // 0x803318D0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803318D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803318D8: jal         0x80027464
    // 0x803318DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x803318DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x803318E0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803318E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803318E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803318EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803318F0: jal         0x80019448
    // 0x803318F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_16;
    // 0x803318F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x803318F8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803318FC: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x80331900: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331904: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80331908: jal         0x80015538
    // 0x8033190C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_17;
    // 0x8033190C: nop

    after_17:
    // 0x80331910: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80331914: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331918: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033191C: lwc1        $f5, -0x3DC0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3DC0);
    // 0x80331920: lwc1        $f4, -0x3DBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3DBC);
    // 0x80331924: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331928: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8033192C: jal         0x80034970
    // 0x80331930: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_18;
    // 0x80331930: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_18:
    // 0x80331934: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80331938: nop

    // 0x8033193C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80331940: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80331944: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331948: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033194C: lwc1        $f5, -0x3DB8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X3DB8);
    // 0x80331950: lwc1        $f4, -0x3DB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3DB4);
    // 0x80331954: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331958: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8033195C: jal         0x80036570
    // 0x80331960: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_19;
    // 0x80331960: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_19:
    // 0x80331964: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80331968: nop

    // 0x8033196C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80331970: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x80331974: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80331978: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x8033197C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80331980: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80331984: jal         0x80015538
    // 0x80331988: nop

    Math_WrapAngle(rdram, ctx);
        goto after_20;
    // 0x80331988: nop

    after_20:
    // 0x8033198C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80331990: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80331994: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80331998: lui         $at, 0x43B5
    ctx->r1 = S32(0X43B5 << 16);
    // 0x8033199C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803319A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803319A4: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x803319A8: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x803319AC: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x803319B0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x803319B4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803319B8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803319BC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x803319C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x803319C4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803319C8: addiu       $a1, $a1, -0x3EB0
    ctx->r5 = ADD32(ctx->r5, -0X3EB0);
    // 0x803319CC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803319D0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803319D4: jal         0x80027464
    // 0x803319D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80027464(rdram, ctx);
        goto after_21;
    // 0x803319D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x803319DC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803319E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803319E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803319E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803319EC: jal         0x80019448
    // 0x803319F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_22;
    // 0x803319F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x803319F4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803319F8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x803319FC: b           L_80331A1C
    // 0x80331A00: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
        goto L_80331A1C;
    // 0x80331A00: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_80331A04:
    // 0x80331A04: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80331A08: nop

    // 0x80331A0C: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x80331A10: nop

    // 0x80331A14: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80331A18: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_80331A1C:
    // 0x80331A1C: jal         0x8033BD74
    // 0x80331A20: nop

    func_bagular3_8033BD74(rdram, ctx);
        goto after_23;
    // 0x80331A20: nop

    after_23:
    // 0x80331A24: b           L_80331A2C
    // 0x80331A28: nop

        goto L_80331A2C;
    // 0x80331A28: nop

L_80331A2C:
    // 0x80331A2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331A30: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331A34: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331A38: jr          $ra
    // 0x80331A3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80331A3C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_bagular3_803321D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803321D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803321DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803321E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803321E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803321E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803321EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803321F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803321F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803321F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803321FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332200: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332204: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332208: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033220C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332210: nop

    // 0x80332214: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332218: nop

    // 0x8033221C: bne         $t1, $zero, L_803322C0
    if (ctx->r9 != 0) {
        // 0x80332220: nop
    
            goto L_803322C0;
    }
    // 0x80332220: nop

    // 0x80332224: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332228: nop

    // 0x8033222C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332230: nop

    // 0x80332234: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332238: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033223C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332240: nop

    // 0x80332244: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332248: nop

    // 0x8033224C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332250: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332254: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80332258: addiu       $t8, $t8, -0x4908
    ctx->r24 = ADD32(ctx->r24, -0X4908);
    // 0x8033225C: lh          $a0, 0xE8($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XE8);
    // 0x80332260: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80332264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332268: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033226C: jal         0x8001C0EC
    // 0x80332270: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332270: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x80332274: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332278: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033227C: addiu       $t0, $t0, -0x4908
    ctx->r8 = ADD32(ctx->r8, -0X4908);
    // 0x80332280: lh          $a0, 0xEA($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XEA);
    // 0x80332284: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80332288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033228C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332290: jal         0x8001C0EC
    // 0x80332294: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80332294: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x80332298: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033229C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803322A0: lh          $a0, 0xE8($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XE8);
    // 0x803322A4: jal         0x8001BBDC
    // 0x803322A8: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803322A8: nop

    after_2:
    // 0x803322AC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803322B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803322B4: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x803322B8: jal         0x8001BBDC
    // 0x803322BC: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x803322BC: nop

    after_3:
L_803322C0:
    // 0x803322C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803322C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803322C8: jal         0x8002A8B4
    // 0x803322CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x803322CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x803322D0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803322D4: nop

    // 0x803322D8: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803322DC: nop

    // 0x803322E0: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x803322E4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803322E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803322EC: lh          $t6, 0xE8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XE8);
    // 0x803322F0: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x803322F4: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803322F8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803322FC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332300: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80332304: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332308: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033230C: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80332310: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332314: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332318: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x8033231C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332320: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332324: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332328: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033232C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332330: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332334: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80332338: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033233C: nop

    // 0x80332340: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x80332344: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332348: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033234C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332350: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332354: jal         0x80015538
    // 0x80332358: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80332358: nop

    after_5:
    // 0x8033235C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332360: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332364: lh          $t2, 0xEA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XEA);
    // 0x80332368: nop

    // 0x8033236C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332370: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332374: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332378: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033237C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332380: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332384: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80332388: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033238C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332390: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x80332394: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80332398: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033239C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803323A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803323A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803323A8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803323AC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x803323B0: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x803323B4: nop

    // 0x803323B8: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x803323BC: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803323C0: nop

    // 0x803323C4: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x803323C8: nop

    // 0x803323CC: bne         $t3, $zero, L_803324D4
    if (ctx->r11 != 0) {
        // 0x803323D0: nop
    
            goto L_803324D4;
    }
    // 0x803323D0: nop

    // 0x803323D4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803323D8: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x803323DC: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x803323E0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803323E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803323E8: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x803323EC: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x803323F0: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x803323F4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803323F8: lh          $t5, 0xE8($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE8);
    // 0x803323FC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332400: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332404: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332408: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033240C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332410: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332414: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332418: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033241C: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80332420: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332424: jal         0x80027464
    // 0x80332428: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x80332428: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x8033242C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332430: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332434: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332438: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033243C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332440: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332444: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80332448: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033244C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332450: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80332454: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x80332458: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033245C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332460: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332464: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80332468: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x8033246C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332470: lh          $t3, 0xEA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEA);
    // 0x80332474: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332478: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033247C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332480: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332484: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332488: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033248C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332490: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332494: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80332498: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033249C: jal         0x80027464
    // 0x803324A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x803324A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x803324A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803324A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803324AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803324B0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x803324B4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803324B8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803324BC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x803324C0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803324C4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803324C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803324CC: b           L_803324EC
    // 0x803324D0: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
        goto L_803324EC;
    // 0x803324D0: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
L_803324D4:
    // 0x803324D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803324D8: nop

    // 0x803324DC: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x803324E0: nop

    // 0x803324E4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x803324E8: sh          $t8, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r24;
L_803324EC:
    // 0x803324EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803324F0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803324F4: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803324F8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803324FC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332500: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332504: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332508: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8033250C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332510: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80332514: lh          $t2, 0xBE($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XBE);
    // 0x80332518: nop

    // 0x8033251C: bne         $t2, $zero, L_8033254C
    if (ctx->r10 != 0) {
        // 0x80332520: nop
    
            goto L_8033254C;
    }
    // 0x80332520: nop

    // 0x80332524: lh          $t5, 0xC0($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC0);
    // 0x80332528: nop

    // 0x8033252C: bne         $t5, $zero, L_8033254C
    if (ctx->r13 != 0) {
        // 0x80332530: nop
    
            goto L_8033254C;
    }
    // 0x80332530: nop

    // 0x80332534: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332538: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8033253C: sh          $t9, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r25;
    // 0x80332540: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332544: b           L_8033260C
    // 0x80332548: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_8033260C;
    // 0x80332548: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033254C:
    // 0x8033254C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332554: jal         0x8002A46C
    // 0x80332558: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_8;
    // 0x80332558: nop

    after_8:
    // 0x8033255C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80332560: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332564: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332568: lwc1        $f14, 0x1C($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033256C: jal         0x80015538
    // 0x80332570: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x80332570: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_9:
    // 0x80332574: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80332578: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8033257C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332580: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80332584: nop

    // 0x80332588: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8033258C: nop

    // 0x80332590: bc1f        L_803325F4
    if (!c1cs) {
        // 0x80332594: nop
    
            goto L_803325F4;
    }
    // 0x80332594: nop

    // 0x80332598: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033259C: lwc1        $f16, -0x3D94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3D94);
    // 0x803325A0: nop

    // 0x803325A4: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x803325A8: nop

    // 0x803325AC: bc1f        L_803325F4
    if (!c1cs) {
        // 0x803325B0: nop
    
            goto L_803325F4;
    }
    // 0x803325B0: nop

    // 0x803325B4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803325B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803325BC: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x803325C0: nop

    // 0x803325C4: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x803325C8: nop

    // 0x803325CC: bc1f        L_803325EC
    if (!c1cs) {
        // 0x803325D0: nop
    
            goto L_803325EC;
    }
    // 0x803325D0: nop

    // 0x803325D4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803325D8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x803325DC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x803325E0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803325E4: nop

    // 0x803325E8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803325EC:
    // 0x803325EC: b           L_8033260C
    // 0x803325F0: nop

        goto L_8033260C;
    // 0x803325F0: nop

L_803325F4:
    // 0x803325F4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803325F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803325FC: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80332600: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332604: nop

    // 0x80332608: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033260C:
    // 0x8033260C: b           L_80332614
    // 0x80332610: nop

        goto L_80332614;
    // 0x80332610: nop

L_80332614:
    // 0x80332614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332618: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033261C: jr          $ra
    // 0x80332620: nop

    return;
    // 0x80332620: nop

;}
RECOMP_FUNC void func_bagular3_80335834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335834: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335838: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033583C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335840: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335844: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335848: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033584C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335850: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335854: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335858: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033585C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335860: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335864: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335868: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033586C: nop

    // 0x80335870: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335874: nop

    // 0x80335878: bne         $t1, $zero, L_803358D0
    if (ctx->r9 != 0) {
        // 0x8033587C: nop
    
            goto L_803358D0;
    }
    // 0x8033587C: nop

    // 0x80335880: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335884: nop

    // 0x80335888: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033588C: nop

    // 0x80335890: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335894: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335898: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033589C: nop

    // 0x803358A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803358A4: nop

    // 0x803358A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803358AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803358B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803358B4: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x803358B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803358BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803358C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803358C4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x803358C8: jal         0x8001C0EC
    // 0x803358CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803358CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_803358D0:
    // 0x803358D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803358D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803358D8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803358DC: nop

    // 0x803358E0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803358E4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803358E8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803358EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803358F0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803358F4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803358F8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803358FC: nop

    // 0x80335900: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80335904: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335908: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033590C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80335910: nop

    // 0x80335914: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80335918: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033591C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80335920: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80335924: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80335928: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033592C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80335930: nop

    // 0x80335934: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80335938: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033593C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335940: jal         0x8001B4AC
    // 0x80335944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80335944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80335948: beq         $v0, $zero, L_80335968
    if (ctx->r2 == 0) {
        // 0x8033594C: nop
    
            goto L_80335968;
    }
    // 0x8033594C: nop

    // 0x80335950: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335954: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80335958: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033595C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335960: nop

    // 0x80335964: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80335968:
    // 0x80335968: b           L_80335970
    // 0x8033596C: nop

        goto L_80335970;
    // 0x8033596C: nop

L_80335970:
    // 0x80335970: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335978: jr          $ra
    // 0x8033597C: nop

    return;
    // 0x8033597C: nop

;}
RECOMP_FUNC void func_bagular3_80332C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332C08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332C0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332C10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332C14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332C18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332C1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332C20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332C28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332C2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332C30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332C34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332C38: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332C3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C40: nop

    // 0x80332C44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80332C48: nop

    // 0x80332C4C: bne         $t1, $zero, L_80332D24
    if (ctx->r9 != 0) {
        // 0x80332C50: nop
    
            goto L_80332D24;
    }
    // 0x80332C50: nop

    // 0x80332C54: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C58: nop

    // 0x80332C5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332C60: nop

    // 0x80332C64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80332C68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332C6C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C70: nop

    // 0x80332C74: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80332C78: nop

    // 0x80332C7C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80332C80: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C84: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80332C88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332C8C: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80332C90: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80332C94: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80332C98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332C9C: nop

    // 0x80332CA0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332CA4: swc1        $f16, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f16.u32l;
    // 0x80332CA8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CAC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80332CB0: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x80332CB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CB8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80332CBC: addiu       $t1, $t1, -0x4908
    ctx->r9 = ADD32(ctx->r9, -0X4908);
    // 0x80332CC0: lh          $a0, 0xE8($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XE8);
    // 0x80332CC4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80332CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332CCC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332CD0: jal         0x8001C0EC
    // 0x80332CD4: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332CD4: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_0:
    // 0x80332CD8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332CDC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80332CE0: addiu       $t4, $t4, -0x4908
    ctx->r12 = ADD32(ctx->r12, -0X4908);
    // 0x80332CE4: lh          $a0, 0xEA($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XEA);
    // 0x80332CE8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80332CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332CF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80332CF4: jal         0x8001C0EC
    // 0x80332CF8: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80332CF8: addiu       $a3, $zero, 0x148
    ctx->r7 = ADD32(0, 0X148);
    after_1:
    // 0x80332CFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D04: lh          $a0, 0xE8($t2)
    ctx->r4 = MEM_H(ctx->r10, 0XE8);
    // 0x80332D08: jal         0x8001BBDC
    // 0x80332D0C: nop

    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80332D0C: nop

    after_2:
    // 0x80332D10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332D18: lh          $a0, 0xEA($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XEA);
    // 0x80332D1C: jal         0x8001BBDC
    // 0x80332D20: nop

    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80332D20: nop

    after_3:
L_80332D24:
    // 0x80332D24: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D28: nop

    // 0x80332D2C: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x80332D30: nop

    // 0x80332D34: bne         $t7, $zero, L_80332D78
    if (ctx->r15 != 0) {
        // 0x80332D38: nop
    
            goto L_80332D78;
    }
    // 0x80332D38: nop

    // 0x80332D3C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332D40: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D44: nop

    // 0x80332D48: swc1        $f18, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f18.u32l;
    // 0x80332D4C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332D50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332D54: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D58: nop

    // 0x80332D5C: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80332D60: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D64: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80332D68: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80332D6C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D70: b           L_80332EB0
    // 0x80332D74: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_80332EB0;
    // 0x80332D74: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80332D78:
    // 0x80332D78: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D7C: nop

    // 0x80332D80: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332D84: lwc1        $f14, 0xD4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x80332D88: jal         0x80015538
    // 0x80332D8C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80332D8C: nop

    after_4:
    // 0x80332D90: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D94: nop

    // 0x80332D98: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x80332D9C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DA0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332DA4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332DA8: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332DAC: jal         0x80015538
    // 0x80332DB0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80332DB0: nop

    after_5:
    // 0x80332DB4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DB8: nop

    // 0x80332DBC: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80332DC0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332DC8: lh          $t8, 0xE8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE8);
    // 0x80332DCC: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80332DD0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332DD4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332DD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332DDC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332DE0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332DE4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332DE8: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80332DEC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DF0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332DF4: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332DF8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332DFC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332E00: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332E04: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332E08: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332E0C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332E10: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x80332E14: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332E18: nop

    // 0x80332E1C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
    // 0x80332E20: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E24: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332E28: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80332E2C: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332E30: jal         0x80015538
    // 0x80332E34: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80332E34: nop

    after_6:
    // 0x80332E38: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E40: lh          $t7, 0xEA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XEA);
    // 0x80332E44: nop

    // 0x80332E48: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80332E4C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332E50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332E54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80332E58: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332E5C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80332E60: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x80332E64: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E68: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332E6C: lh          $t0, 0xEA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XEA);
    // 0x80332E70: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80332E74: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332E78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332E80: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332E84: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332E88: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80332E8C: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80332E90: nop

    // 0x80332E94: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x80332E98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E9C: nop

    // 0x80332EA0: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80332EA4: nop

    // 0x80332EA8: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80332EAC: sh          $t5, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r13;
L_80332EB0:
    // 0x80332EB0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332EB4: nop

    // 0x80332EB8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80332EBC: nop

    // 0x80332EC0: bne         $t8, $zero, L_80332FC8
    if (ctx->r24 != 0) {
        // 0x80332EC4: nop
    
            goto L_80332FC8;
    }
    // 0x80332EC4: nop

    // 0x80332EC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332ECC: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x80332ED0: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
    // 0x80332ED4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332ED8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332EDC: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80332EE0: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80332EE4: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x80332EE8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332EEC: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x80332EF0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332EF4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80332EF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332EFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332F00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80332F04: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332F08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332F0C: lwc1        $f18, 0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332F10: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80332F14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332F18: jal         0x80027464
    // 0x80332F1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x80332F1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x80332F20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332F24: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80332F28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F2C: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x80332F30: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80332F34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332F38: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x80332F3C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332F40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332F44: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80332F48: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80332F4C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332F50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332F54: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80332F58: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x80332F5C: lw          $a3, 0x4($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X4);
    // 0x80332F60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332F64: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x80332F68: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332F6C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80332F70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332F74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332F78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80332F7C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332F80: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332F84: lwc1        $f6, 0x416C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80332F88: addiu       $a1, $a1, -0x3EE0
    ctx->r5 = ADD32(ctx->r5, -0X3EE0);
    // 0x80332F8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332F90: jal         0x80027464
    // 0x80332F94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x80332F94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80332F98: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80332F9C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332FA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332FA4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80332FA8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332FAC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332FB0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80332FB4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332FB8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332FBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80332FC0: b           L_80332FE0
    // 0x80332FC4: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
        goto L_80332FE0;
    // 0x80332FC4: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
L_80332FC8:
    // 0x80332FC8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332FCC: nop

    // 0x80332FD0: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x80332FD4: nop

    // 0x80332FD8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80332FDC: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_80332FE0:
    // 0x80332FE0: b           L_80332FE8
    // 0x80332FE4: nop

        goto L_80332FE8;
    // 0x80332FE4: nop

L_80332FE8:
    // 0x80332FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332FEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332FF0: jr          $ra
    // 0x80332FF4: nop

    return;
    // 0x80332FF4: nop

;}
RECOMP_FUNC void func_bagular3_80336134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336134: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336138: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033613C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336140: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336144: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033614C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336158: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033615C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336160: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336164: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336168: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033616C: nop

    // 0x80336170: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336174: nop

    // 0x80336178: bne         $t1, $zero, L_803361D0
    if (ctx->r9 != 0) {
        // 0x8033617C: nop
    
            goto L_803361D0;
    }
    // 0x8033617C: nop

    // 0x80336180: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336184: nop

    // 0x80336188: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033618C: nop

    // 0x80336190: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336194: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336198: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033619C: nop

    // 0x803361A0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803361A4: nop

    // 0x803361A8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803361AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803361B0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x803361B4: addiu       $t7, $t7, -0x48F8
    ctx->r15 = ADD32(ctx->r15, -0X48F8);
    // 0x803361B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803361BC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803361C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803361C4: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x803361C8: jal         0x8001C0EC
    // 0x803361CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803361CC: addiu       $a3, $zero, 0x14C
    ctx->r7 = ADD32(0, 0X14C);
    after_0:
L_803361D0:
    // 0x803361D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803361D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803361D8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x803361DC: nop

    // 0x803361E0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803361E4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803361E8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803361EC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803361F0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803361F4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803361F8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x803361FC: nop

    // 0x80336200: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80336204: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336208: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033620C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80336210: nop

    // 0x80336214: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80336218: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033621C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80336220: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336224: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336228: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033622C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80336230: nop

    // 0x80336234: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80336238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033623C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336240: jal         0x8001B4AC
    // 0x80336244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336248: beq         $v0, $zero, L_80336268
    if (ctx->r2 == 0) {
        // 0x8033624C: nop
    
            goto L_80336268;
    }
    // 0x8033624C: nop

    // 0x80336250: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336254: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80336258: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033625C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336260: nop

    // 0x80336264: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80336268:
    // 0x80336268: b           L_80336270
    // 0x8033626C: nop

        goto L_80336270;
    // 0x8033626C: nop

L_80336270:
    // 0x80336270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336274: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336278: jr          $ra
    // 0x8033627C: nop

    return;
    // 0x8033627C: nop

;}
RECOMP_FUNC void func_bagular3_80336E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336E14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336E18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336E1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336E20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336E24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336E28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336E2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336E34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336E38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336E3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336E40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336E44: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336E48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336E4C: nop

    // 0x80336E50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336E54: nop

    // 0x80336E58: bne         $t1, $zero, L_80336EB0
    if (ctx->r9 != 0) {
        // 0x80336E5C: nop
    
            goto L_80336EB0;
    }
    // 0x80336E5C: nop

    // 0x80336E60: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336E64: nop

    // 0x80336E68: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336E6C: nop

    // 0x80336E70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336E74: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336E78: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336E7C: nop

    // 0x80336E80: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336E84: nop

    // 0x80336E88: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336E8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336E90: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336E94: addiu       $t7, $t7, -0x48AC
    ctx->r15 = ADD32(ctx->r15, -0X48AC);
    // 0x80336E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336E9C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336EA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80336EA8: jal         0x8001C0EC
    // 0x80336EAC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336EAC: addiu       $a3, $zero, 0x14F
    ctx->r7 = ADD32(0, 0X14F);
    after_0:
L_80336EB0:
    // 0x80336EB0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336EB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336EB8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80336EBC: nop

    // 0x80336EC0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336EC4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336EC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336ECC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336ED0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336ED4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336ED8: lwc1        $f4, 0x416C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x80336EDC: nop

    // 0x80336EE0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x80336EE4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336EE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336EEC: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x80336EF0: nop

    // 0x80336EF4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80336EF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336EFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80336F00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336F04: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336F08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80336F0C: lwc1        $f6, 0x418C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x80336F10: nop

    // 0x80336F14: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
    // 0x80336F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336F20: jal         0x8001B4AC
    // 0x80336F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x80336F24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80336F28: beq         $v0, $zero, L_80336F48
    if (ctx->r2 == 0) {
        // 0x80336F2C: nop
    
            goto L_80336F48;
    }
    // 0x80336F2C: nop

    // 0x80336F30: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336F34: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80336F38: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x80336F3C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336F40: nop

    // 0x80336F44: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_80336F48:
    // 0x80336F48: b           L_80336F50
    // 0x80336F4C: nop

        goto L_80336F50;
    // 0x80336F4C: nop

L_80336F50:
    // 0x80336F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336F54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336F58: jr          $ra
    // 0x80336F5C: nop

    return;
    // 0x80336F5C: nop

;}
RECOMP_FUNC void func_bagular3_8033AF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AF4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033AF50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AF54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033AF58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AF5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AF60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AF64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AF68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AF6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AF70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AF74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AF78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AF7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AF80: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033AF84: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AF88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033AF8C: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033AF90: nop

    // 0x8033AF94: beq         $s0, $at, L_8033AFB0
    if (ctx->r16 == ctx->r1) {
        // 0x8033AF98: nop
    
            goto L_8033AFB0;
    }
    // 0x8033AF98: nop

    // 0x8033AF9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033AFA0: beq         $s0, $at, L_8033AFC0
    if (ctx->r16 == ctx->r1) {
        // 0x8033AFA4: nop
    
            goto L_8033AFC0;
    }
    // 0x8033AFA4: nop

    // 0x8033AFA8: b           L_8033AFD0
    // 0x8033AFAC: nop

        goto L_8033AFD0;
    // 0x8033AFAC: nop

L_8033AFB0:
    // 0x8033AFB0: jal         0x8033AAD0
    // 0x8033AFB4: nop

    func_bagular3_8033AAD0(rdram, ctx);
        goto after_0;
    // 0x8033AFB4: nop

    after_0:
    // 0x8033AFB8: b           L_8033AFD8
    // 0x8033AFBC: nop

        goto L_8033AFD8;
    // 0x8033AFBC: nop

L_8033AFC0:
    // 0x8033AFC0: jal         0x8033ACB0
    // 0x8033AFC4: nop

    func_bagular3_8033ACB0(rdram, ctx);
        goto after_1;
    // 0x8033AFC4: nop

    after_1:
    // 0x8033AFC8: b           L_8033AFD8
    // 0x8033AFCC: nop

        goto L_8033AFD8;
    // 0x8033AFCC: nop

L_8033AFD0:
    // 0x8033AFD0: b           L_8033AFD8
    // 0x8033AFD4: nop

        goto L_8033AFD8;
    // 0x8033AFD4: nop

L_8033AFD8:
    // 0x8033AFD8: b           L_8033AFE0
    // 0x8033AFDC: nop

        goto L_8033AFE0;
    // 0x8033AFDC: nop

L_8033AFE0:
    // 0x8033AFE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AFE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033AFE8: jr          $ra
    // 0x8033AFEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033AFEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_bagular3_803369E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803369E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803369E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803369EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803369F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803369F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803369F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803369FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336A18: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80336A1C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80336A20: nop

    // 0x80336A24: bne         $t0, $zero, L_80336BA4
    if (ctx->r8 != 0) {
        // 0x80336A28: nop
    
            goto L_80336BA4;
    }
    // 0x80336A28: nop

    // 0x80336A2C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336A30: nop

    // 0x80336A34: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x80336A38: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336A3C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x80336A40: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80336A44: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336A48: nop

    // 0x80336A4C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80336A50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336A54: nop

    // 0x80336A58: lw          $t6, 0xC4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC4);
    // 0x80336A5C: nop

    // 0x80336A60: beq         $t6, $zero, L_80336A7C
    if (ctx->r14 == 0) {
        // 0x80336A64: nop
    
            goto L_80336A7C;
    }
    // 0x80336A64: nop

    // 0x80336A68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336A6C: nop

    // 0x80336A70: lw          $a0, 0xC4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC4);
    // 0x80336A74: jal         0x8002B114
    // 0x80336A78: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x80336A78: nop

    after_0:
L_80336A7C:
    // 0x80336A7C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336A80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336A84: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x80336A88: nop

    // 0x80336A8C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80336A90: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336A94: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336A98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80336A9C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80336AA0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336AA4: sh          $zero, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = 0;
    // 0x80336AA8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336AAC: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80336AB0: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80336AB4: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x80336AB8: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x80336ABC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336AC0: lwc1        $f6, 0x1C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80336AC4: addiu       $a1, $a1, -0x3EA4
    ctx->r5 = ADD32(ctx->r5, -0X3EA4);
    // 0x80336AC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80336ACC: jal         0x80027464
    // 0x80336AD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x80336AD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80336AD4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80336AD8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80336ADC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336AE0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80336AE4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80336AE8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80336AEC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80336AF0: lh          $t3, 0xC2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XC2);
    // 0x80336AF4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80336AF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336AFC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80336B00: sh          $t3, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r11;
    // 0x80336B04: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80336B08: addiu       $t6, $t6, -0x47AC
    ctx->r14 = ADD32(ctx->r14, -0X47AC);
    // 0x80336B0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336B10: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80336B14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336B18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336B1C: jal         0x8001C0EC
    // 0x80336B20: addiu       $a3, $zero, 0x14A
    ctx->r7 = ADD32(0, 0X14A);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80336B20: addiu       $a3, $zero, 0x14A
    ctx->r7 = ADD32(0, 0X14A);
    after_2:
    // 0x80336B24: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336B28: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336B2C: addiu       $a3, $a3, -0x4770
    ctx->r7 = ADD32(ctx->r7, -0X4770);
    // 0x80336B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336B34: jal         0x8001ABF4
    // 0x80336B38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80336B38: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80336B3C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80336B40: addiu       $a3, $a3, -0x4770
    ctx->r7 = ADD32(ctx->r7, -0X4770);
    // 0x80336B44: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336B48: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80336B4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336B50: jal         0x8001ABF4
    // 0x80336B54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80336B54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x80336B58: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80336B5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336B60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80336B64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336B68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80336B6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336B70: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80336B74: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80336B78: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80336B7C: sh          $t7, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = ctx->r15;
    // 0x80336B80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336B84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336B8C: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x80336B90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80336B94: jal         0x800175F0
    // 0x80336B98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x80336B98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80336B9C: b           L_80336BC4
    // 0x80336BA0: nop

        goto L_80336BC4;
    // 0x80336BA0: nop

L_80336BA4:
    // 0x80336BA4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80336BA8: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80336BAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80336BB0: bne         $t0, $at, L_80336BC4
    if (ctx->r8 != ctx->r1) {
        // 0x80336BB4: nop
    
            goto L_80336BC4;
    }
    // 0x80336BB4: nop

    // 0x80336BB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336BBC: addiu       $t1, $zero, 0x78
    ctx->r9 = ADD32(0, 0X78);
    // 0x80336BC0: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
L_80336BC4:
    // 0x80336BC4: b           L_80336BCC
    // 0x80336BC8: nop

        goto L_80336BCC;
    // 0x80336BC8: nop

L_80336BCC:
    // 0x80336BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336BD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336BD4: jr          $ra
    // 0x80336BD8: nop

    return;
    // 0x80336BD8: nop

;}
