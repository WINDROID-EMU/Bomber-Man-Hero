#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330904_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330904: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033090C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330910: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330914: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330918: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033091C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330920: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330924: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330928: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033092C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330930: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330934: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330938: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033093C: nop

    // 0x80330940: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330944: nop

    // 0x80330948: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8033094C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330950: nop

    // 0x80330954: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330958: nop

    // 0x8033095C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80330960: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330964: nop

    // 0x80330968: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x8033096C: nop

    // 0x80330970: bne         $t5, $zero, L_80330A24
    if (ctx->r13 != 0) {
        // 0x80330974: nop
    
            goto L_80330A24;
    }
    // 0x80330974: nop

    // 0x80330978: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033097C: nop

    // 0x80330980: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330984: nop

    // 0x80330988: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033098C: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330990: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330994: nop

    // 0x80330998: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8033099C: nop

    // 0x803309A0: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x803309A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A8: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803309AC: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x803309B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803309B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803309C0: jal         0x8001C0EC
    // 0x803309C4: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803309C4: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x803309C8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803309CC: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x803309D0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803309D4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803309D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803309E0: jal         0x8001C0EC
    // 0x803309E4: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803309E4: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x803309E8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803309EC: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x803309F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803309F4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803309F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803309FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80330A00: jal         0x8001C0EC
    // 0x80330A04: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330A04: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x80330A08: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330A0C: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80330A10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330A14: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x80330A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330A1C: jal         0x8001ABF4
    // 0x80330A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80330A24:
    // 0x80330A24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A2C: jal         0x80334F08
    // 0x80330A30: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80330A30: nop

    after_4:
    // 0x80330A34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A3C: jal         0x8001B4AC
    // 0x80330A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80330A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80330A44: beq         $v0, $zero, L_80330A74
    if (ctx->r2 == 0) {
        // 0x80330A48: nop
    
            goto L_80330A74;
    }
    // 0x80330A48: nop

    // 0x80330A4C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A50: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80330A54: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80330A58: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330A5C: nop

    // 0x80330A60: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80330A64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A6C: jal         0x80335498
    // 0x80330A70: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80330A70: nop

    after_6:
L_80330A74:
    // 0x80330A74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A7C: jal         0x80334B78
    // 0x80330A80: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80330A80: nop

    after_7:
    // 0x80330A84: b           L_80330A8C
    // 0x80330A88: nop

        goto L_80330A8C;
    // 0x80330A88: nop

L_80330A8C:
    // 0x80330A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330A90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330A94: jr          $ra
    // 0x80330A98: nop

    return;
    // 0x80330A98: nop

;}
RECOMP_FUNC void func_80330C44_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330C4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330C70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C74: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330C78: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C7C: nop

    // 0x80330C80: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330C84: nop

    // 0x80330C88: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80330C8C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330C90: nop

    // 0x80330C94: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330C98: nop

    // 0x80330C9C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80330CA0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330CA8: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x80330CAC: nop

    // 0x80330CB0: bne         $t5, $at, L_80330D98
    if (ctx->r13 != ctx->r1) {
        // 0x80330CB4: nop
    
            goto L_80330D98;
    }
    // 0x80330CB4: nop

    // 0x80330CB8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CBC: nop

    // 0x80330CC0: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330CC4: nop

    // 0x80330CC8: bne         $t7, $zero, L_80330D90
    if (ctx->r15 != 0) {
        // 0x80330CCC: nop
    
            goto L_80330D90;
    }
    // 0x80330CCC: nop

    // 0x80330CD0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CD4: nop

    // 0x80330CD8: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80330CDC: nop

    // 0x80330CE0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80330CE4: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80330CE8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330CEC: nop

    // 0x80330CF0: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x80330CF4: nop

    // 0x80330CF8: sh          $t2, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r10;
    // 0x80330CFC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80330D00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330D04: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D08: nop

    // 0x80330D0C: swc1        $f4, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f4.u32l;
    // 0x80330D10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D14: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80330D18: addiu       $t4, $t4, -0x57BC
    ctx->r12 = ADD32(ctx->r12, -0X57BC);
    // 0x80330D1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D20: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80330D24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D28: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80330D2C: jal         0x8001C0EC
    // 0x80330D30: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330D30: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80330D34: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80330D38: addiu       $t5, $t5, -0x5A70
    ctx->r13 = ADD32(ctx->r13, -0X5A70);
    // 0x80330D3C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330D40: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80330D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80330D4C: jal         0x8001C0EC
    // 0x80330D50: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80330D50: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x80330D54: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80330D58: addiu       $t6, $t6, -0x5A10
    ctx->r14 = ADD32(ctx->r14, -0X5A10);
    // 0x80330D5C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330D60: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80330D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80330D6C: jal         0x8001C0EC
    // 0x80330D70: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80330D70: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x80330D74: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80330D78: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80330D7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330D80: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80330D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D88: jal         0x8001ABF4
    // 0x80330D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80330D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80330D90:
    // 0x80330D90: b           L_80330E60
    // 0x80330D94: nop

        goto L_80330E60;
    // 0x80330D94: nop

L_80330D98:
    // 0x80330D98: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80330D9C: nop

    // 0x80330DA0: lbu         $t9, 0x132($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X132);
    // 0x80330DA4: nop

    // 0x80330DA8: bne         $t9, $zero, L_80330E60
    if (ctx->r25 != 0) {
        // 0x80330DAC: nop
    
            goto L_80330E60;
    }
    // 0x80330DAC: nop

    // 0x80330DB0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DB4: nop

    // 0x80330DB8: lbu         $t8, 0x132($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X132);
    // 0x80330DBC: nop

    // 0x80330DC0: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x80330DC4: sb          $t2, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r10;
    // 0x80330DC8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DCC: nop

    // 0x80330DD0: lh          $t3, 0xA4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA4);
    // 0x80330DD4: nop

    // 0x80330DD8: sh          $t3, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r11;
    // 0x80330DDC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80330DE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330DE4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DE8: nop

    // 0x80330DEC: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x80330DF0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330DF4: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80330DF8: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
    // 0x80330DFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E00: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80330E04: addiu       $t7, $t7, -0x57BC
    ctx->r15 = ADD32(ctx->r15, -0X57BC);
    // 0x80330E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80330E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80330E18: jal         0x8001C0EC
    // 0x80330E1C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80330E1C: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_4:
    // 0x80330E20: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80330E24: addiu       $t9, $t9, -0x5A70
    ctx->r25 = ADD32(ctx->r25, -0X5A70);
    // 0x80330E28: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330E2C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80330E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80330E38: jal         0x8001C0EC
    // 0x80330E3C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80330E3C: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_5:
    // 0x80330E40: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80330E44: addiu       $t8, $t8, -0x5A10
    ctx->r24 = ADD32(ctx->r24, -0X5A10);
    // 0x80330E48: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330E4C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80330E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330E54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80330E58: jal         0x8001C0EC
    // 0x80330E5C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80330E5C: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_6:
L_80330E60:
    // 0x80330E60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E68: jal         0x80334F08
    // 0x80330E6C: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80330E6C: nop

    after_7:
    // 0x80330E70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E78: jal         0x803350CC
    // 0x80330E7C: nop

    func_803350CC_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x80330E7C: nop

    after_8:
    // 0x80330E80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E88: jal         0x80029C40
    // 0x80330E8C: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x80330E8C: nop

    after_9:
    // 0x80330E90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330E94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330E98: jal         0x80334798
    // 0x80330E9C: nop

    func_80334798_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x80330E9C: nop

    after_10:
    // 0x80330EA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EA8: jal         0x8001B4AC
    // 0x80330EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x80330EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80330EB0: beq         $v0, $zero, L_80330EE0
    if (ctx->r2 == 0) {
        // 0x80330EB4: nop
    
            goto L_80330EE0;
    }
    // 0x80330EB4: nop

    // 0x80330EB8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EBC: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80330EC0: sh          $t2, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r10;
    // 0x80330EC4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80330EC8: nop

    // 0x80330ECC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x80330ED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330ED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330ED8: jal         0x80335498
    // 0x80330EDC: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_12;
    // 0x80330EDC: nop

    after_12:
L_80330EE0:
    // 0x80330EE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330EE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330EE8: jal         0x80334B78
    // 0x80330EEC: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_13;
    // 0x80330EEC: nop

    after_13:
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
RECOMP_FUNC void func_80339398_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339398: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033939C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803393A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803393A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803393A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803393AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803393B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803393B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803393B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803393BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803393C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803393C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803393C8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803393CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803393D0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803393D4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803393D8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803393DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803393E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803393E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803393E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803393EC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803393F0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803393F4: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x803393F8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803393FC: nop

    // 0x80339400: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339404: nop

    // 0x80339408: bne         $t6, $zero, L_803394D8
    if (ctx->r14 != 0) {
        // 0x8033940C: nop
    
            goto L_803394D8;
    }
    // 0x8033940C: nop

    // 0x80339410: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339414: nop

    // 0x80339418: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033941C: nop

    // 0x80339420: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80339424: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80339428: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033942C: nop

    // 0x80339430: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80339434: nop

    // 0x80339438: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033943C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339440: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80339444: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80339448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033944C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80339450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339458: jal         0x8001C0EC
    // 0x8033945C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033945C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80339460: jal         0x80014E80
    // 0x80339464: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80339464: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80339468: bne         $v0, $zero, L_80339498
    if (ctx->r2 != 0) {
        // 0x8033946C: nop
    
            goto L_80339498;
    }
    // 0x8033946C: nop

    // 0x80339470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339474: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339478: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033947C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339480: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80339484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339488: jal         0x8001ABF4
    // 0x8033948C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033948C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80339490: b           L_803394B8
    // 0x80339494: nop

        goto L_803394B8;
    // 0x80339494: nop

L_80339498:
    // 0x80339498: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033949C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803394A0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803394A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803394A8: addiu       $a3, $a3, 0x150
    ctx->r7 = ADD32(ctx->r7, 0X150);
    // 0x803394AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803394B0: jal         0x8001ABF4
    // 0x803394B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803394B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_803394B8:
    // 0x803394B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803394BC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803394C0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803394C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803394C8: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x803394CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803394D0: jal         0x8001ABF4
    // 0x803394D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803394D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803394D8:
    // 0x803394D8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803394DC: nop

    // 0x803394E0: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x803394E4: nop

    // 0x803394E8: bne         $t4, $zero, L_80339528
    if (ctx->r12 != 0) {
        // 0x803394EC: nop
    
            goto L_80339528;
    }
    // 0x803394EC: nop

    // 0x803394F0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803394F4: lui         $at, 0xC1B4
    ctx->r1 = S32(0XC1B4 << 16);
    // 0x803394F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803394FC: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80339500: jal         0x80015538
    // 0x80339504: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80339504: nop

    after_5:
    // 0x80339508: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033950C: nop

    // 0x80339510: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80339514: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339518: nop

    // 0x8033951C: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80339520: b           L_8033954C
    // 0x80339524: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
        goto L_8033954C;
    // 0x80339524: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
L_80339528:
    // 0x80339528: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033952C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339530: jal         0x8002A8B4
    // 0x80339534: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x80339534: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x80339538: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033953C: nop

    // 0x80339540: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80339544: nop

    // 0x80339548: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_8033954C:
    // 0x8033954C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80339550: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80339554: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80339558: nop

    // 0x8033955C: swc1        $f8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f8.u32l;
    // 0x80339560: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80339564: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80339568: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033956C: nop

    // 0x80339570: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x80339574: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80339578: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033957C: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80339580: nop

    // 0x80339584: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
    // 0x80339588: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033958C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339590: jal         0x8001B4AC
    // 0x80339594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80339594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80339598: beq         $v0, $zero, L_80339600
    if (ctx->r2 == 0) {
        // 0x8033959C: nop
    
            goto L_80339600;
    }
    // 0x8033959C: nop

    // 0x803395A0: jal         0x80014E80
    // 0x803395A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x803395A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x803395A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803395AC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803395B0: nop

    // 0x803395B4: bne         $t5, $zero, L_803395E8
    if (ctx->r13 != 0) {
        // 0x803395B8: nop
    
            goto L_803395E8;
    }
    // 0x803395B8: nop

    // 0x803395BC: jal         0x80014E80
    // 0x803395C0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x803395C0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x803395C4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803395C8: nop

    // 0x803395CC: sh          $v0, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r2;
    // 0x803395D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803395D4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803395D8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803395DC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803395E0: b           L_80339600
    // 0x803395E4: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_80339600;
    // 0x803395E4: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803395E8:
    // 0x803395E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803395EC: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803395F0: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x803395F4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803395F8: nop

    // 0x803395FC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80339600:
    // 0x80339600: b           L_80339608
    // 0x80339604: nop

        goto L_80339608;
    // 0x80339604: nop

L_80339608:
    // 0x80339608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033960C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80339610: jr          $ra
    // 0x80339614: nop

    return;
    // 0x80339614: nop

;}
RECOMP_FUNC void func_8033F1DC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F1DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033F1E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033F1E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033F1E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033F1EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033F1F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033F1F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F1F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033F1FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F200: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033F204: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033F208: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033F20C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033F210: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033F214: nop

    // 0x8033F218: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033F21C: nop

    // 0x8033F220: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033F224: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x8033F228: beq         $at, $zero, L_8033F2AC
    if (ctx->r1 == 0) {
        // 0x8033F22C: nop
    
            goto L_8033F2AC;
    }
    // 0x8033F22C: nop

    // 0x8033F230: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033F234: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033F238: addu        $at, $at, $t2
    gpr jr_addend_8033F244 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033F23C: lw          $t2, -0x570($at)
    ctx->r10 = ADD32(ctx->r1, -0X570);
    // 0x8033F240: nop

    // 0x8033F244: jr          $t2
    // 0x8033F248: nop

    switch (jr_addend_8033F244 >> 2) {
        case 0: goto L_8033F24C; break;
        case 1: goto L_8033F25C; break;
        case 2: goto L_8033F26C; break;
        case 3: goto L_8033F27C; break;
        case 4: goto L_8033F28C; break;
        case 5: goto L_8033F29C; break;
        default: switch_error(__func__, 0x8033F244, 0x8033FA90);
    }
    // 0x8033F248: nop

L_8033F24C:
    // 0x8033F24C: jal         0x8033EBBC
    // 0x8033F250: nop

    func_8033EBBC_unk_bin_14(rdram, ctx);
        goto after_0;
    // 0x8033F250: nop

    after_0:
    // 0x8033F254: b           L_8033F2B4
    // 0x8033F258: nop

        goto L_8033F2B4;
    // 0x8033F258: nop

L_8033F25C:
    // 0x8033F25C: jal         0x8033ECA0
    // 0x8033F260: nop

    func_8033ECA0_unk_bin_14(rdram, ctx);
        goto after_1;
    // 0x8033F260: nop

    after_1:
    // 0x8033F264: b           L_8033F2B4
    // 0x8033F268: nop

        goto L_8033F2B4;
    // 0x8033F268: nop

L_8033F26C:
    // 0x8033F26C: jal         0x8033EDA8
    // 0x8033F270: nop

    func_8033EDA8_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x8033F270: nop

    after_2:
    // 0x8033F274: b           L_8033F2B4
    // 0x8033F278: nop

        goto L_8033F2B4;
    // 0x8033F278: nop

L_8033F27C:
    // 0x8033F27C: jal         0x8033EEB0
    // 0x8033F280: nop

    func_8033EEB0_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x8033F280: nop

    after_3:
    // 0x8033F284: b           L_8033F2B4
    // 0x8033F288: nop

        goto L_8033F2B4;
    // 0x8033F288: nop

L_8033F28C:
    // 0x8033F28C: jal         0x8033EFD4
    // 0x8033F290: nop

    func_8033EFD4_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x8033F290: nop

    after_4:
    // 0x8033F294: b           L_8033F2B4
    // 0x8033F298: nop

        goto L_8033F2B4;
    // 0x8033F298: nop

L_8033F29C:
    // 0x8033F29C: jal         0x8033F0DC
    // 0x8033F2A0: nop

    func_8033F0DC_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033F2A0: nop

    after_5:
    // 0x8033F2A4: b           L_8033F2B4
    // 0x8033F2A8: nop

        goto L_8033F2B4;
    // 0x8033F2A8: nop

L_8033F2AC:
    // 0x8033F2AC: b           L_8033F2B4
    // 0x8033F2B0: nop

        goto L_8033F2B4;
    // 0x8033F2B0: nop

L_8033F2B4:
    // 0x8033F2B4: b           L_8033F2BC
    // 0x8033F2B8: nop

        goto L_8033F2BC;
    // 0x8033F2B8: nop

L_8033F2BC:
    // 0x8033F2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033F2C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033F2C4: jr          $ra
    // 0x8033F2C8: nop

    return;
    // 0x8033F2C8: nop

;}
RECOMP_FUNC void func_8033C36C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C36C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C370: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C374: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C378: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C37C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C380: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C384: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C388: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C38C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C390: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C394: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C398: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C39C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033C3A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033C3A4: nop

    // 0x8033C3A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C3AC: nop

    // 0x8033C3B0: bne         $t1, $zero, L_8033C454
    if (ctx->r9 != 0) {
        // 0x8033C3B4: nop
    
            goto L_8033C454;
    }
    // 0x8033C3B4: nop

    // 0x8033C3B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C3BC: nop

    // 0x8033C3C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033C3C4: nop

    // 0x8033C3C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033C3CC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033C3D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033C3D4: nop

    // 0x8033C3D8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033C3DC: nop

    // 0x8033C3E0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033C3E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C3E8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033C3EC: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033C3F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C3F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033C3F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C3FC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033C400: jal         0x8001C0EC
    // 0x8033C404: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033C404: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033C408: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C40C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C410: jal         0x8001BBDC
    // 0x8033C414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8033C414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8033C418: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C41C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C420: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C424: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C428: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C42C: jal         0x8001ABF4
    // 0x8033C430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033C430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033C434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C438: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C43C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C440: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C444: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033C448: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C44C: jal         0x8001ABF4
    // 0x8033C450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033C450: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8033C454:
    // 0x8033C454: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C458: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C45C: jal         0x8002A8B4
    // 0x8033C460: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_4;
    // 0x8033C460: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_4:
    // 0x8033C464: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033C468: nop

    // 0x8033C46C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033C470: nop

    // 0x8033C474: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033C478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C47C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C480: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033C484: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033C488: jal         0x8002A0D0
    // 0x8033C48C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_5;
    // 0x8033C48C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x8033C490: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C494: bne         $v0, $at, L_8033C4BC
    if (ctx->r2 != ctx->r1) {
        // 0x8033C498: nop
    
            goto L_8033C4BC;
    }
    // 0x8033C498: nop

    // 0x8033C49C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C4A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C4A4: jal         0x8001BBDC
    // 0x8033C4A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x8033C4A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033C4AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033C4B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033C4B4: nop

    // 0x8033C4B8: swc1        $f6, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f6.u32l;
L_8033C4BC:
    // 0x8033C4BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C4C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C4C4: jal         0x8001B4AC
    // 0x8033C4C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x8033C4C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8033C4CC: beq         $v0, $zero, L_8033C58C
    if (ctx->r2 == 0) {
        // 0x8033C4D0: nop
    
            goto L_8033C58C;
    }
    // 0x8033C4D0: nop

    // 0x8033C4D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033C4D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033C4DC: nop

    // 0x8033C4E0: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x8033C4E4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033C4E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033C4EC: jal         0x80338C88
    // 0x8033C4F0: nop

    func_80338C88_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x8033C4F0: nop

    after_8:
    // 0x8033C4F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C4F8: beq         $v0, $at, L_8033C51C
    if (ctx->r2 == ctx->r1) {
        // 0x8033C4FC: nop
    
            goto L_8033C51C;
    }
    // 0x8033C4FC: nop

    // 0x8033C500: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033C504: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033C508: jal         0x80338DC8
    // 0x8033C50C: nop

    func_80338DC8_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x8033C50C: nop

    after_9:
    // 0x8033C510: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C514: bne         $v0, $at, L_8033C534
    if (ctx->r2 != ctx->r1) {
        // 0x8033C518: nop
    
            goto L_8033C534;
    }
    // 0x8033C518: nop

L_8033C51C:
    // 0x8033C51C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033C520: addiu       $t1, $zero, 0x23
    ctx->r9 = ADD32(0, 0X23);
    // 0x8033C524: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033C528: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033C52C: b           L_8033C57C
    // 0x8033C530: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_8033C57C;
    // 0x8033C530: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033C534:
    // 0x8033C534: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C538: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C53C: jal         0x8002A2EC
    // 0x8033C540: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_10;
    // 0x8033C540: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_10:
    // 0x8033C544: beq         $v0, $zero, L_8033C564
    if (ctx->r2 == 0) {
        // 0x8033C548: nop
    
            goto L_8033C564;
    }
    // 0x8033C548: nop

    // 0x8033C54C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033C550: addiu       $t2, $zero, 0x1B
    ctx->r10 = ADD32(0, 0X1B);
    // 0x8033C554: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033C558: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033C55C: b           L_8033C57C
    // 0x8033C560: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_8033C57C;
    // 0x8033C560: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033C564:
    // 0x8033C564: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033C568: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8033C56C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033C570: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033C574: nop

    // 0x8033C578: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8033C57C:
    // 0x8033C57C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C580: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C584: jal         0x8033EA14
    // 0x8033C588: nop

    func_8033EA14_unk_bin_14(rdram, ctx);
        goto after_11;
    // 0x8033C588: nop

    after_11:
L_8033C58C:
    // 0x8033C58C: b           L_8033C594
    // 0x8033C590: nop

        goto L_8033C594;
    // 0x8033C590: nop

L_8033C594:
    // 0x8033C594: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033C59C: jr          $ra
    // 0x8033C5A0: nop

    return;
    // 0x8033C5A0: nop

;}
RECOMP_FUNC void func_8033BC8C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BC8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033BC90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BC94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BC98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BC9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BCA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BCA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BCA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BCAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BCB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BCB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BCB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BCBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BCC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BCC4: nop

    // 0x8033BCC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BCCC: nop

    // 0x8033BCD0: bne         $t1, $zero, L_8033BD80
    if (ctx->r9 != 0) {
        // 0x8033BCD4: nop
    
            goto L_8033BD80;
    }
    // 0x8033BCD4: nop

    // 0x8033BCD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BCDC: nop

    // 0x8033BCE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BCE4: nop

    // 0x8033BCE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BCEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BCF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BCF4: nop

    // 0x8033BCF8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BCFC: nop

    // 0x8033BD00: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BD04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD08: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BD0C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033BD10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BD18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BD1C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033BD20: jal         0x8001C0EC
    // 0x8033BD24: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BD24: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033BD28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD30: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BD34: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BD38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BD3C: jal         0x8001ABF4
    // 0x8033BD40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033BD40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033BD44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033BD4C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033BD50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD54: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033BD58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033BD5C: jal         0x8001ABF4
    // 0x8033BD60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033BD60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033BD64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033BD70: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    // 0x8033BD74: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033BD78: jal         0x800175F0
    // 0x8033BD7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x8033BD7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_8033BD80:
    // 0x8033BD80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BD84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BD88: jal         0x8001B4AC
    // 0x8033BD8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033BD8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033BD90: beq         $v0, $zero, L_8033BDB0
    if (ctx->r2 == 0) {
        // 0x8033BD94: nop
    
            goto L_8033BDB0;
    }
    // 0x8033BD94: nop

    // 0x8033BD98: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BD9C: addiu       $t8, $zero, 0x18
    ctx->r24 = ADD32(0, 0X18);
    // 0x8033BDA0: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033BDA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BDA8: nop

    // 0x8033BDAC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033BDB0:
    // 0x8033BDB0: b           L_8033BDB8
    // 0x8033BDB4: nop

        goto L_8033BDB8;
    // 0x8033BDB4: nop

L_8033BDB8:
    // 0x8033BDB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BDBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BDC0: jr          $ra
    // 0x8033BDC4: nop

    return;
    // 0x8033BDC4: nop

;}
RECOMP_FUNC void func_803323E8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803323E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803323EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803323F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803323F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803323F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803323FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332404: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332408: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033240C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332410: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332414: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332418: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033241C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332420: nop

    // 0x80332424: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80332428: nop

    // 0x8033242C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80332430: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332434: nop

    // 0x80332438: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x8033243C: nop

    // 0x80332440: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80332444: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332448: nop

    // 0x8033244C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80332450: nop

    // 0x80332454: bne         $t5, $zero, L_8033296C
    if (ctx->r13 != 0) {
        // 0x80332458: nop
    
            goto L_8033296C;
    }
    // 0x80332458: nop

    // 0x8033245C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332460: nop

    // 0x80332464: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80332468: nop

    // 0x8033246C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80332470: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80332474: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332478: nop

    // 0x8033247C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80332480: nop

    // 0x80332484: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80332488: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033248C: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80332490: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80332494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332498: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033249C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324A0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x803324A4: jal         0x8001C0EC
    // 0x803324A8: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803324A8: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x803324AC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803324B0: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x803324B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803324B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803324BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803324C4: jal         0x8001C0EC
    // 0x803324C8: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803324C8: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x803324CC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x803324D0: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x803324D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803324D8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803324DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803324E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803324E4: jal         0x8001C0EC
    // 0x803324E8: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803324E8: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x803324EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803324F0: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x803324F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803324F8: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x803324FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332500: jal         0x8001ABF4
    // 0x80332504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80332504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80332508: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033250C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80332510: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332514: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332518: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033251C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332520: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332524: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80332528: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8033252C: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332530: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332534: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x80332538: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x8033253C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80332540: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80332544: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80332548: addiu       $a1, $a1, -0x82C
    ctx->r5 = ADD32(ctx->r5, -0X82C);
    // 0x8033254C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332550: jal         0x80027464
    // 0x80332554: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x80332554: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80332558: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8033255C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80332560: jal         0x80026F10
    // 0x80332564: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_5;
    // 0x80332564: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_5:
    // 0x80332568: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033256C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332570: nop

    // 0x80332574: sh          $t0, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r8;
    // 0x80332578: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033257C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80332580: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332584: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332588: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033258C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332590: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80332594: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332598: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033259C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803325A0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803325A4: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803325A8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803325AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803325B0: lwc1        $f8, 0x18($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X18);
    // 0x803325B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803325B8: addu        $t8, $t7, $t3
    ctx->r24 = ADD32(ctx->r15, ctx->r11);
    // 0x803325BC: swc1        $f8, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f8.u32l;
    // 0x803325C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803325C4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x803325C8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803325CC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803325D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803325D4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803325D8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x803325DC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803325E0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803325E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803325E8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803325EC: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x803325F0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x803325F4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803325F8: lwc1        $f10, 0x20($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X20);
    // 0x803325FC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332600: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x80332604: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
    // 0x80332608: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033260C: addiu       $t7, $t7, -0x5780
    ctx->r15 = ADD32(ctx->r15, -0X5780);
    // 0x80332610: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80332614: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80332618: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033261C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332620: jal         0x8001C0EC
    // 0x80332624: addiu       $a3, $zero, 0xE4
    ctx->r7 = ADD32(0, 0XE4);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80332624: addiu       $a3, $zero, 0xE4
    ctx->r7 = ADD32(0, 0XE4);
    after_6:
    // 0x80332628: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033262C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80332630: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332634: lwc1        $f16, 0x18($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X18);
    // 0x80332638: nop

    // 0x8033263C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80332640: nop

    // 0x80332644: bc1f        L_80332708
    if (!c1cs) {
        // 0x80332648: nop
    
            goto L_80332708;
    }
    // 0x80332648: nop

    // 0x8033264C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332650: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332654: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332658: lwc1        $f6, 0x18($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X18);
    // 0x8033265C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332660: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332664: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332668: nop

    // 0x8033266C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332670: swc1        $f16, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f16.u32l;
    // 0x80332674: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332678: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033267C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80332680: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80332684: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332688: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033268C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332690: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80332694: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332698: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033269C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x803326A0: lwc1        $f4, 0x18($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X18);
    // 0x803326A4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803326A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803326AC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803326B0: nop

    // 0x803326B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803326B8: swc1        $f10, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f10.u32l;
    // 0x803326BC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x803326C0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x803326C4: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x803326C8: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x803326CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803326D0: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x803326D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803326D8: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x803326DC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803326E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803326E4: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x803326E8: lwc1        $f18, 0x18($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X18);
    // 0x803326EC: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803326F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803326F4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x803326F8: nop

    // 0x803326FC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80332700: b           L_803327C0
    // 0x80332704: swc1        $f8, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f8.u32l;
        goto L_803327C0;
    // 0x80332704: swc1        $f8, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f8.u32l;
L_80332708:
    // 0x80332708: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033270C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80332710: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332714: lwc1        $f10, 0x18($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X18);
    // 0x80332718: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8033271C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80332720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332724: nop

    // 0x80332728: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8033272C: swc1        $f6, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f6.u32l;
    // 0x80332730: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332734: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332738: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8033273C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80332740: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332744: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80332748: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033274C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332750: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80332754: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80332758: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033275C: lwc1        $f8, 0x18($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X18);
    // 0x80332760: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332764: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332768: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033276C: nop

    // 0x80332770: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80332774: swc1        $f4, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f4.u32l;
    // 0x80332778: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8033277C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332780: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80332784: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332788: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033278C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332790: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332794: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80332798: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x8033279C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803327A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803327A4: lwc1        $f6, 0x18($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X18);
    // 0x803327A8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803327AC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803327B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803327B4: nop

    // 0x803327B8: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x803327BC: swc1        $f18, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f18.u32l;
L_803327C0:
    // 0x803327C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803327C4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803327C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803327CC: lwc1        $f4, 0x20($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X20);
    // 0x803327D0: nop

    // 0x803327D4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x803327D8: nop

    // 0x803327DC: bc1f        L_803328A0
    if (!c1cs) {
        // 0x803327E0: nop
    
            goto L_803328A0;
    }
    // 0x803327E0: nop

    // 0x803327E4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803327E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803327EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803327F0: lwc1        $f10, 0x20($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X20);
    // 0x803327F4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803327F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803327FC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332800: nop

    // 0x80332804: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80332808: swc1        $f4, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->f4.u32l;
    // 0x8033280C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80332810: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332814: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80332818: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033281C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332820: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80332824: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332828: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033282C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332830: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332834: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80332838: lwc1        $f8, 0x20($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X20);
    // 0x8033283C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332840: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332844: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80332848: nop

    // 0x8033284C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80332850: swc1        $f18, 0xD8($t1)
    MEM_W(0XD8, ctx->r9) = ctx->f18.u32l;
    // 0x80332854: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80332858: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033285C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80332860: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332864: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332868: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033286C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332870: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80332874: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80332878: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033287C: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x80332880: lwc1        $f6, 0x20($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X20);
    // 0x80332884: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332888: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033288C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80332890: nop

    // 0x80332894: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80332898: b           L_80332958
    // 0x8033289C: swc1        $f16, 0xD8($t5)
    MEM_W(0XD8, ctx->r13) = ctx->f16.u32l;
        goto L_80332958;
    // 0x8033289C: swc1        $f16, 0xD8($t5)
    MEM_W(0XD8, ctx->r13) = ctx->f16.u32l;
L_803328A0:
    // 0x803328A0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803328A4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803328A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803328AC: lwc1        $f18, 0x20($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X20);
    // 0x803328B0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803328B4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x803328B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803328BC: nop

    // 0x803328C0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803328C4: swc1        $f10, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f10.u32l;
    // 0x803328C8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803328CC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803328D0: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x803328D4: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x803328D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803328DC: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x803328E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803328E4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803328E8: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x803328EC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803328F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803328F4: lwc1        $f16, 0x20($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X20);
    // 0x803328F8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x803328FC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80332900: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332904: nop

    // 0x80332908: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8033290C: swc1        $f8, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->f8.u32l;
    // 0x80332910: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80332914: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80332918: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033291C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332920: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332924: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332928: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033292C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80332930: addu        $t9, $t2, $t4
    ctx->r25 = ADD32(ctx->r10, ctx->r12);
    // 0x80332934: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80332938: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033293C: lwc1        $f10, 0x20($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80332940: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80332944: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80332948: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033294C: nop

    // 0x80332950: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80332954: swc1        $f6, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f6.u32l;
L_80332958:
    // 0x80332958: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033295C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332960: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332964: nop

    // 0x80332968: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
L_8033296C:
    // 0x8033296C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332970: nop

    // 0x80332974: lwc1        $f12, 0x18($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X18);
    // 0x80332978: lwc1        $f14, 0xD4($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0XD4);
    // 0x8033297C: jal         0x80015538
    // 0x80332980: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80332980: nop

    after_7:
    // 0x80332984: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332988: nop

    // 0x8033298C: swc1        $f0, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f0.u32l;
    // 0x80332990: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332994: nop

    // 0x80332998: lwc1        $f12, 0x20($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X20);
    // 0x8033299C: lwc1        $f14, 0xD8($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XD8);
    // 0x803329A0: jal         0x80015538
    // 0x803329A4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x803329A4: nop

    after_8:
    // 0x803329A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803329AC: nop

    // 0x803329B0: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x803329B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803329B8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803329BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803329C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803329C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803329C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803329CC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803329D0: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x803329D4: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x803329D8: lwc1        $f12, 0x18($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X18);
    // 0x803329DC: lwc1        $f14, 0xD4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x803329E0: jal         0x80015538
    // 0x803329E4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x803329E4: nop

    after_9:
    // 0x803329E8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803329EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803329F0: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x803329F4: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x803329F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803329FC: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80332A00: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332A04: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332A08: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80332A0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332A10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332A14: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80332A18: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332A1C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332A20: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332A24: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332A28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332A2C: addu        $t6, $t3, $t8
    ctx->r14 = ADD32(ctx->r11, ctx->r24);
    // 0x80332A30: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80332A34: lwc1        $f14, 0xD8($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0XD8);
    // 0x80332A38: jal         0x80015538
    // 0x80332A3C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80332A3C: nop

    after_10:
    // 0x80332A40: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80332A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332A48: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80332A4C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332A50: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80332A54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80332A58: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80332A5C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80332A60: swc1        $f0, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f0.u32l;
    // 0x80332A64: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80332A68: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80332A6C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80332A70: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332A74: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332A78: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332A7C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332A80: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80332A84: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x80332A88: lwc1        $f12, 0x18($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X18);
    // 0x80332A8C: lwc1        $f14, 0xD4($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0XD4);
    // 0x80332A90: jal         0x80015538
    // 0x80332A94: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80332A94: nop

    after_11:
    // 0x80332A98: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80332A9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332AA0: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80332AA4: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332AA8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332AAC: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332AB0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332AB4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332AB8: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80332ABC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80332AC0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80332AC4: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80332AC8: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80332ACC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332AD0: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80332AD4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332AD8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80332ADC: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80332AE0: lwc1        $f12, 0x20($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X20);
    // 0x80332AE4: lwc1        $f14, 0xD8($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x80332AE8: jal         0x80015538
    // 0x80332AEC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x80332AEC: nop

    after_12:
    // 0x80332AF0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80332AF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332AF8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80332AFC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332B00: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332B04: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80332B08: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332B0C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80332B10: swc1        $f0, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f0.u32l;
    // 0x80332B14: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B18: nop

    // 0x80332B1C: lh          $t5, 0xB4($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XB4);
    // 0x80332B20: nop

    // 0x80332B24: beq         $t5, $zero, L_80332C2C
    if (ctx->r13 == 0) {
        // 0x80332B28: nop
    
            goto L_80332C2C;
    }
    // 0x80332B28: nop

    // 0x80332B2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B30: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332B34: lh          $t3, 0xB4($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XB4);
    // 0x80332B38: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80332B3C: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x80332B40: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332B44: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80332B48: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80332B4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332B50: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80332B54: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80332B58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80332B5C: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80332B60: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80332B64: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332B68: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x80332B6C: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x80332B70: lwc1        $f12, 0x18($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80332B74: lwc1        $f14, 0xD4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x80332B78: jal         0x80015538
    // 0x80332B7C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x80332B7C: nop

    after_13:
    // 0x80332B80: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332B84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332B88: lh          $t5, 0xB4($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XB4);
    // 0x80332B8C: nop

    // 0x80332B90: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332B94: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332B98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332B9C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332BA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332BA4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332BA8: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x80332BAC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332BB0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80332BB4: lh          $t8, 0xB4($t3)
    ctx->r24 = MEM_H(ctx->r11, 0XB4);
    // 0x80332BB8: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80332BBC: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80332BC0: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80332BC4: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332BC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332BCC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80332BD0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80332BD4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80332BD8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x80332BDC: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332BE0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332BE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80332BE8: addu        $t9, $t4, $t1
    ctx->r25 = ADD32(ctx->r12, ctx->r9);
    // 0x80332BEC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80332BF0: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80332BF4: lwc1        $f14, 0xD8($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0XD8);
    // 0x80332BF8: jal         0x80015538
    // 0x80332BFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_14;
    // 0x80332BFC: nop

    after_14:
    // 0x80332C00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332C08: lh          $t7, 0xB4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB4);
    // 0x80332C0C: nop

    // 0x80332C10: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80332C14: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332C18: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332C1C: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332C20: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332C24: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332C28: swc1        $f0, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f0.u32l;
L_80332C2C:
    // 0x80332C2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332C30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332C34: jal         0x8001B4AC
    // 0x80332C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_15;
    // 0x80332C38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80332C3C: beq         $v0, $zero, L_80332D9C
    if (ctx->r2 == 0) {
        // 0x80332C40: nop
    
            goto L_80332D9C;
    }
    // 0x80332C40: nop

    // 0x80332C44: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C48: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x80332C4C: sh          $t8, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r24;
    // 0x80332C50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C54: nop

    // 0x80332C58: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80332C5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332C60: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C64: nop

    // 0x80332C68: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
    // 0x80332C6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332C70: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C74: nop

    // 0x80332C78: swc1        $f16, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f16.u32l;
    // 0x80332C7C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332C80: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80332C84: nop

    // 0x80332C88: swc1        $f18, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f18.u32l;
    // 0x80332C8C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80332C90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332C94: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80332C98: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80332C9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332CA0: addu        $t5, $t5, $t9
    ctx->r13 = ADD32(ctx->r13, ctx->r25);
    // 0x80332CA4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332CA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CAC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80332CB0: swc1        $f4, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f4.u32l;
    // 0x80332CB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80332CB8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332CBC: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80332CC0: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332CC4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332CC8: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332CCC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332CD0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CD4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332CD8: swc1        $f6, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f6.u32l;
    // 0x80332CDC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80332CE0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332CE4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80332CE8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332CEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332CF0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332CF4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332CF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332CFC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332D00: swc1        $f8, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f8.u32l;
    // 0x80332D04: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80332D08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332D0C: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80332D10: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332D14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80332D18: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80332D1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80332D20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D24: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80332D28: swc1        $f10, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f10.u32l;
    // 0x80332D2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D30: nop

    // 0x80332D34: lh          $t1, 0xB4($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XB4);
    // 0x80332D38: nop

    // 0x80332D3C: beq         $t1, $zero, L_80332D9C
    if (ctx->r9 == 0) {
        // 0x80332D40: nop
    
            goto L_80332D9C;
    }
    // 0x80332D40: nop

    // 0x80332D44: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332D4C: lh          $t5, 0xB4($t9)
    ctx->r13 = MEM_H(ctx->r25, 0XB4);
    // 0x80332D50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D54: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80332D58: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332D5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332D60: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80332D64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332D68: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80332D6C: swc1        $f16, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f16.u32l;
    // 0x80332D70: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332D74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332D78: lh          $t8, 0xB4($t3)
    ctx->r24 = MEM_H(ctx->r11, 0XB4);
    // 0x80332D7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332D80: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80332D84: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332D88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80332D8C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80332D90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80332D94: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80332D98: swc1        $f18, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f18.u32l;
L_80332D9C:
    // 0x80332D9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332DA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332DA4: jal         0x80334854
    // 0x80332DA8: nop

    func_80334854_unk_bin_14(rdram, ctx);
        goto after_16;
    // 0x80332DA8: nop

    after_16:
    // 0x80332DAC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DB0: nop

    // 0x80332DB4: lh          $t6, 0xB4($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XB4);
    // 0x80332DB8: nop

    // 0x80332DBC: beq         $t6, $zero, L_80332E48
    if (ctx->r14 == 0) {
        // 0x80332DC0: nop
    
            goto L_80332E48;
    }
    // 0x80332DC0: nop

    // 0x80332DC4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332DCC: lh          $t1, 0xB4($t4)
    ctx->r9 = MEM_H(ctx->r12, 0XB4);
    // 0x80332DD0: lwc1        $f4, 0x24($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80332DD4: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80332DD8: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80332DDC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80332DE0: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80332DE4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80332DE8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80332DEC: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x80332DF0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80332DF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332DF8: lh          $t7, 0xB4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB4);
    // 0x80332DFC: lwc1        $f6, 0x28($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80332E00: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x80332E04: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332E08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332E0C: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x80332E10: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80332E14: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332E18: swc1        $f6, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f6.u32l;
    // 0x80332E1C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80332E20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332E24: lh          $t0, 0xB4($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB4);
    // 0x80332E28: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80332E2C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80332E30: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80332E34: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80332E38: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80332E3C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80332E40: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80332E44: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
L_80332E48:
    // 0x80332E48: b           L_80332E50
    // 0x80332E4C: nop

        goto L_80332E50;
    // 0x80332E4C: nop

L_80332E50:
    // 0x80332E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80332E54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80332E58: jr          $ra
    // 0x80332E5C: nop

    return;
    // 0x80332E5C: nop

;}
RECOMP_FUNC void func_8033908C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033908C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80339094: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339098: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033909C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803390A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803390A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803390A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803390AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803390B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803390B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803390B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803390BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803390C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803390C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803390C8: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x803390CC: nop

    // 0x803390D0: beq         $t1, $at, L_8033915C
    if (ctx->r9 == ctx->r1) {
        // 0x803390D4: nop
    
            goto L_8033915C;
    }
    // 0x803390D4: nop

    // 0x803390D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803390DC: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x803390E0: nop

    // 0x803390E4: bne         $t2, $zero, L_80339128
    if (ctx->r10 != 0) {
        // 0x803390E8: nop
    
            goto L_80339128;
    }
    // 0x803390E8: nop

    // 0x803390EC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803390F0: nop

    // 0x803390F4: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x803390F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803390FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80339100: jal         0x80069E60
    // 0x80339104: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x80339104: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    after_0:
    // 0x80339108: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033910C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80339110: sh          $t4, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r12;
    // 0x80339114: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80339118: nop

    // 0x8033911C: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x80339120: b           L_80339154
    // 0x80339124: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
        goto L_80339154;
    // 0x80339124: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
L_80339128:
    // 0x80339128: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033912C: lw          $t8, 0x7A64($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A64);
    // 0x80339130: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339134: bne         $t8, $at, L_80339154
    if (ctx->r24 != ctx->r1) {
        // 0x80339138: nop
    
            goto L_80339154;
    }
    // 0x80339138: nop

    // 0x8033913C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339140: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x80339144: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x80339148: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033914C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80339150: sh          $t1, 0xC0($t2)
    MEM_H(0XC0, ctx->r10) = ctx->r9;
L_80339154:
    // 0x80339154: b           L_803391A0
    // 0x80339158: nop

        goto L_803391A0;
    // 0x80339158: nop

L_8033915C:
    // 0x8033915C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80339160: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80339164: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80339168: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033916C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80339170: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339174: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339178: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033917C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339180: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x80339184: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80339188: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8033918C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x80339190: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80339194: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80339198: nop

    // 0x8033919C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_803391A0:
    // 0x803391A0: b           L_803391A8
    // 0x803391A4: nop

        goto L_803391A8;
    // 0x803391A4: nop

L_803391A8:
    // 0x803391A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803391AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803391B0: jr          $ra
    // 0x803391B4: nop

    return;
    // 0x803391B4: nop

;}
RECOMP_FUNC void func_80335D84_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335D84: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80335D88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80335D8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335D90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335D94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335D98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335D9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335DA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335DA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335DA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335DAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335DB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335DB4: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x80335DB8: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335DBC: nop

    // 0x80335DC0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335DC4: nop

    // 0x80335DC8: bne         $t1, $zero, L_80335E20
    if (ctx->r9 != 0) {
        // 0x80335DCC: nop
    
            goto L_80335E20;
    }
    // 0x80335DCC: nop

    // 0x80335DD0: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80335DD4: nop

    // 0x80335DD8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335DDC: nop

    // 0x80335DE0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335DE4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335DE8: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80335DEC: nop

    // 0x80335DF0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335DF4: nop

    // 0x80335DF8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335DFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E00: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335E04: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x80335E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335E10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335E14: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80335E18: jal         0x8001C0EC
    // 0x80335E1C: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335E1C: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
L_80335E20:
    // 0x80335E20: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80335E24: nop

    // 0x80335E28: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80335E2C: nop

    // 0x80335E30: bne         $t9, $zero, L_80335E68
    if (ctx->r25 != 0) {
        // 0x80335E34: nop
    
            goto L_80335E68;
    }
    // 0x80335E34: nop

    // 0x80335E38: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80335E3C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80335E40: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x80335E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335E50: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80335E54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335E58: jal         0x800175F0
    // 0x80335E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80335E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80335E60: b           L_80335E80
    // 0x80335E64: nop

        goto L_80335E80;
    // 0x80335E64: nop

L_80335E68:
    // 0x80335E68: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80335E6C: nop

    // 0x80335E70: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80335E74: nop

    // 0x80335E78: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80335E7C: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_80335E80:
    // 0x80335E80: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335E84: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80335E88: lh          $t5, 0x134A($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X134A);
    // 0x80335E8C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80335E90: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80335E94: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335E98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335E9C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335EA0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335EA4: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80335EA8: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335EAC: nop

    // 0x80335EB0: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80335EB4: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335EB8: nop

    // 0x80335EBC: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80335EC0: nop

    // 0x80335EC4: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80335EC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335ECC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335ED0: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80335ED4: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80335ED8: jal         0x8033605C
    // 0x80335EDC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_8033605C_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80335EDC: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80335EE0: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80335EE4: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80335EE8: lwc1        $f12, 0xD4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x80335EEC: lwc1        $f14, 0xD8($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x80335EF0: lw          $a2, 0xDC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XDC);
    // 0x80335EF4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80335EF8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80335EFC: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x80335F00: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x80335F04: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x80335F08: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80335F0C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80335F10: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80335F14: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80335F18: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80335F1C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335F20: jal         0x800293B8
    // 0x80335F24: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800293B8(rdram, ctx);
        goto after_3;
    // 0x80335F24: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80335F28: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80335F2C: nop

    // 0x80335F30: sw          $v0, 0xC4($t7)
    MEM_W(0XC4, ctx->r15) = ctx->r2;
    // 0x80335F34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F3C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80335F40: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80335F44: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80335F48: jal         0x803364D4
    // 0x80335F4C: nop

    func_803364D4_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80335F4C: nop

    after_4:
    // 0x80335F50: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80335F54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335F58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335F5C: lw          $a1, 0xC4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XC4);
    // 0x80335F60: jal         0x80336214
    // 0x80335F64: nop

    func_80336214_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x80335F64: nop

    after_5:
    // 0x80335F68: b           L_80335F70
    // 0x80335F6C: nop

        goto L_80335F70;
    // 0x80335F6C: nop

L_80335F70:
    // 0x80335F70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80335F74: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80335F78: jr          $ra
    // 0x80335F7C: nop

    return;
    // 0x80335F7C: nop

;}
RECOMP_FUNC void func_8033D990_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D990: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D994: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D998: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D99C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D9A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D9A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D9A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D9AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D9B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D9B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D9B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D9BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D9C0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D9C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D9C8: nop

    // 0x8033D9CC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D9D0: nop

    // 0x8033D9D4: bne         $t1, $zero, L_8033DA68
    if (ctx->r9 != 0) {
        // 0x8033D9D8: nop
    
            goto L_8033DA68;
    }
    // 0x8033D9D8: nop

    // 0x8033D9DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D9E0: nop

    // 0x8033D9E4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D9E8: nop

    // 0x8033D9EC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D9F0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D9F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D9F8: nop

    // 0x8033D9FC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033DA00: nop

    // 0x8033DA04: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033DA08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DA0C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033DA10: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033DA14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DA18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033DA1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DA20: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8033DA24: jal         0x8001C0EC
    // 0x8033DA28: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033DA28: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033DA2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DA30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DA34: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DA38: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DA3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DA40: jal         0x8001ABF4
    // 0x8033DA44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033DA44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033DA48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DA4C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DA50: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DA54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DA58: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033DA5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033DA60: jal         0x8001ABF4
    // 0x8033DA64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033DA64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033DA68:
    // 0x8033DA68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DA6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DA70: jal         0x8033E904
    // 0x8033DA74: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x8033DA74: nop

    after_3:
    // 0x8033DA78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DA7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DA80: jal         0x8001B4AC
    // 0x8033DA84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033DA84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033DA88: beq         $v0, $zero, L_8033DBE0
    if (ctx->r2 == 0) {
        // 0x8033DA8C: nop
    
            goto L_8033DBE0;
    }
    // 0x8033DA8C: nop

    // 0x8033DA90: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033DA94: nop

    // 0x8033DA98: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033DA9C: nop

    // 0x8033DAA0: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x8033DAA4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033DAA8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033DAAC: jal         0x80338C88
    // 0x8033DAB0: nop

    func_80338C88_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033DAB0: nop

    after_5:
    // 0x8033DAB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033DAB8: beq         $v0, $at, L_8033DADC
    if (ctx->r2 == ctx->r1) {
        // 0x8033DABC: nop
    
            goto L_8033DADC;
    }
    // 0x8033DABC: nop

    // 0x8033DAC0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033DAC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033DAC8: jal         0x80338DC8
    // 0x8033DACC: nop

    func_80338DC8_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x8033DACC: nop

    after_6:
    // 0x8033DAD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033DAD4: bne         $v0, $at, L_8033DB40
    if (ctx->r2 != ctx->r1) {
        // 0x8033DAD8: nop
    
            goto L_8033DB40;
    }
    // 0x8033DAD8: nop

L_8033DADC:
    // 0x8033DADC: jal         0x80014E80
    // 0x8033DAE0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_7;
    // 0x8033DAE0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x8033DAE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033DAE8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033DAEC: nop

    // 0x8033DAF0: bne         $t9, $zero, L_8033DB20
    if (ctx->r25 != 0) {
        // 0x8033DAF4: nop
    
            goto L_8033DB20;
    }
    // 0x8033DAF4: nop

    // 0x8033DAF8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033DAFC: addiu       $t0, $zero, 0x15
    ctx->r8 = ADD32(0, 0X15);
    // 0x8033DB00: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033DB04: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB08: nop

    // 0x8033DB0C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x8033DB10: b           L_8033DBE8
    // 0x8033DB14: nop

        goto L_8033DBE8;
    // 0x8033DB14: nop

    // 0x8033DB18: b           L_8033DB38
    // 0x8033DB1C: nop

        goto L_8033DB38;
    // 0x8033DB1C: nop

L_8033DB20:
    // 0x8033DB20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB24: addiu       $t4, $zero, 0x23
    ctx->r12 = ADD32(0, 0X23);
    // 0x8033DB28: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x8033DB2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB30: nop

    // 0x8033DB34: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033DB38:
    // 0x8033DB38: b           L_8033DBE0
    // 0x8033DB3C: nop

        goto L_8033DBE0;
    // 0x8033DB3C: nop

L_8033DB40:
    // 0x8033DB40: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB44: nop

    // 0x8033DB48: lh          $t7, 0xBE($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XBE);
    // 0x8033DB4C: nop

    // 0x8033DB50: bne         $t7, $zero, L_8033DBC0
    if (ctx->r15 != 0) {
        // 0x8033DB54: nop
    
            goto L_8033DBC0;
    }
    // 0x8033DB54: nop

    // 0x8033DB58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DB5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DB60: jal         0x8002A1FC
    // 0x8033DB64: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_8;
    // 0x8033DB64: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_8:
    // 0x8033DB68: beq         $v0, $zero, L_8033DB98
    if (ctx->r2 == 0) {
        // 0x8033DB6C: nop
    
            goto L_8033DB98;
    }
    // 0x8033DB6C: nop

    // 0x8033DB70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB74: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x8033DB78: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033DB7C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB80: nop

    // 0x8033DB84: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x8033DB88: b           L_8033DBE8
    // 0x8033DB8C: nop

        goto L_8033DBE8;
    // 0x8033DB8C: nop

    // 0x8033DB90: b           L_8033DBB8
    // 0x8033DB94: nop

        goto L_8033DBB8;
    // 0x8033DB94: nop

L_8033DB98:
    // 0x8033DB98: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033DB9C: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x8033DBA0: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033DBA4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033DBA8: nop

    // 0x8033DBAC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x8033DBB0: b           L_8033DBE8
    // 0x8033DBB4: nop

        goto L_8033DBE8;
    // 0x8033DBB4: nop

L_8033DBB8:
    // 0x8033DBB8: b           L_8033DBE0
    // 0x8033DBBC: nop

        goto L_8033DBE0;
    // 0x8033DBBC: nop

L_8033DBC0:
    // 0x8033DBC0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033DBC4: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x8033DBC8: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033DBCC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033DBD0: nop

    // 0x8033DBD4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8033DBD8: b           L_8033DBE8
    // 0x8033DBDC: nop

        goto L_8033DBE8;
    // 0x8033DBDC: nop

L_8033DBE0:
    // 0x8033DBE0: b           L_8033DBE8
    // 0x8033DBE4: nop

        goto L_8033DBE8;
    // 0x8033DBE4: nop

L_8033DBE8:
    // 0x8033DBE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033DBEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033DBF0: jr          $ra
    // 0x8033DBF4: nop

    return;
    // 0x8033DBF4: nop

;}
RECOMP_FUNC void func_8033F2FC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F2FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033F300: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033F304: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033F308: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033F30C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033F310: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033F314: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F318: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033F31C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033F320: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033F324: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033F328: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033F32C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033F330: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F334: nop

    // 0x8033F338: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033F33C: nop

    // 0x8033F340: bne         $t1, $zero, L_8033F628
    if (ctx->r9 != 0) {
        // 0x8033F344: nop
    
            goto L_8033F628;
    }
    // 0x8033F344: nop

    // 0x8033F348: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F34C: nop

    // 0x8033F350: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033F354: nop

    // 0x8033F358: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033F35C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033F360: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F364: nop

    // 0x8033F368: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033F36C: nop

    // 0x8033F370: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033F374: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x8033F378: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033F37C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F380: nop

    // 0x8033F384: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x8033F388: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033F38C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F390: nop

    // 0x8033F394: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x8033F398: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033F39C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F3A0: nop

    // 0x8033F3A4: swc1        $f8, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f8.u32l;
    // 0x8033F3A8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F3AC: nop

    // 0x8033F3B0: lhu         $t1, 0xC0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0XC0);
    // 0x8033F3B4: nop

    // 0x8033F3B8: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x8033F3BC: beq         $at, $zero, L_8033F5CC
    if (ctx->r1 == 0) {
        // 0x8033F3C0: nop
    
            goto L_8033F5CC;
    }
    // 0x8033F3C0: nop

    // 0x8033F3C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033F3C8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033F3CC: addu        $at, $at, $t1
    gpr jr_addend_8033F3D8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033F3D0: lw          $t1, -0x558($at)
    ctx->r9 = ADD32(ctx->r1, -0X558);
    // 0x8033F3D4: nop

    // 0x8033F3D8: jr          $t1
    // 0x8033F3DC: nop

    switch (jr_addend_8033F3D8 >> 2) {
        case 0: goto L_8033F3E0; break;
        case 1: goto L_8033F444; break;
        case 2: goto L_8033F4A0; break;
        case 3: goto L_8033F504; break;
        case 4: goto L_8033F568; break;
        default: switch_error(__func__, 0x8033F3D8, 0x8033FAA8);
    }
    // 0x8033F3DC: nop

L_8033F3E0:
    // 0x8033F3E0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F3E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033F3E8: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033F3EC: nop

    // 0x8033F3F0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033F3F4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033F3F8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033F3FC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033F400: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033F404: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033F408: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033F40C: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x8033F410: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033F414: jal         0x80015538
    // 0x8033F418: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033F418: nop

    after_0:
    // 0x8033F41C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F420: nop

    // 0x8033F424: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x8033F428: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F42C: nop

    // 0x8033F430: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033F434: nop

    // 0x8033F438: swc1        $f10, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f10.u32l;
    // 0x8033F43C: b           L_8033F628
    // 0x8033F440: nop

        goto L_8033F628;
    // 0x8033F440: nop

L_8033F444:
    // 0x8033F444: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F448: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033F44C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x8033F450: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8033F454: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033F458: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033F45C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033F460: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033F464: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033F468: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033F46C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033F470: jal         0x80015538
    // 0x8033F474: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033F474: nop

    after_1:
    // 0x8033F478: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F47C: nop

    // 0x8033F480: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x8033F484: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F488: nop

    // 0x8033F48C: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033F490: nop

    // 0x8033F494: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
    // 0x8033F498: b           L_8033F628
    // 0x8033F49C: nop

        goto L_8033F628;
    // 0x8033F49C: nop

L_8033F4A0:
    // 0x8033F4A0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F4A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033F4A8: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033F4AC: nop

    // 0x8033F4B0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033F4B4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033F4B8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033F4BC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033F4C0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033F4C4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033F4C8: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033F4CC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033F4D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033F4D4: jal         0x80015538
    // 0x8033F4D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8033F4D8: nop

    after_2:
    // 0x8033F4DC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F4E0: nop

    // 0x8033F4E4: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x8033F4E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F4EC: nop

    // 0x8033F4F0: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033F4F4: nop

    // 0x8033F4F8: swc1        $f18, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f18.u32l;
    // 0x8033F4FC: b           L_8033F628
    // 0x8033F500: nop

        goto L_8033F628;
    // 0x8033F500: nop

L_8033F504:
    // 0x8033F504: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F508: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033F50C: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x8033F510: nop

    // 0x8033F514: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033F518: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033F51C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033F520: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033F524: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033F528: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033F52C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033F530: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8033F534: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033F538: jal         0x80015538
    // 0x8033F53C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033F53C: nop

    after_3:
    // 0x8033F540: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F544: nop

    // 0x8033F548: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x8033F54C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F550: nop

    // 0x8033F554: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033F558: nop

    // 0x8033F55C: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
    // 0x8033F560: b           L_8033F628
    // 0x8033F564: nop

        goto L_8033F628;
    // 0x8033F564: nop

L_8033F568:
    // 0x8033F568: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F56C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033F570: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033F574: nop

    // 0x8033F578: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8033F57C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033F580: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033F584: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x8033F588: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033F58C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033F590: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033F594: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033F598: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033F59C: jal         0x80015538
    // 0x8033F5A0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033F5A0: nop

    after_4:
    // 0x8033F5A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F5A8: nop

    // 0x8033F5AC: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x8033F5B0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F5B4: nop

    // 0x8033F5B8: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033F5BC: nop

    // 0x8033F5C0: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x8033F5C4: b           L_8033F628
    // 0x8033F5C8: nop

        goto L_8033F628;
    // 0x8033F5C8: nop

L_8033F5CC:
    // 0x8033F5CC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F5D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033F5D4: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x8033F5D8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8033F5DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033F5E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033F5E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033F5E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033F5EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033F5F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033F5F4: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033F5F8: jal         0x80015538
    // 0x8033F5FC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x8033F5FC: nop

    after_5:
    // 0x8033F600: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F604: nop

    // 0x8033F608: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x8033F60C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F610: nop

    // 0x8033F614: lwc1        $f8, 0x1C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033F618: nop

    // 0x8033F61C: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x8033F620: b           L_8033F628
    // 0x8033F624: nop

        goto L_8033F628;
    // 0x8033F624: nop

L_8033F628:
    // 0x8033F628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F62C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F630: jal         0x80029D8C
    // 0x8033F634: nop

    func_80029D8C(rdram, ctx);
        goto after_6;
    // 0x8033F634: nop

    after_6:
    // 0x8033F638: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033F63C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033F640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033F64C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033F650: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033F654: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033F658: jal         0x80029018
    // 0x8033F65C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x8033F65C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x8033F660: beq         $v0, $zero, L_8033F680
    if (ctx->r2 == 0) {
        // 0x8033F664: nop
    
            goto L_8033F680;
    }
    // 0x8033F664: nop

    // 0x8033F668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F66C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F670: jal         0x8002B0E4
    // 0x8033F674: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x8033F674: nop

    after_8:
    // 0x8033F678: b           L_8033F710
    // 0x8033F67C: nop

        goto L_8033F710;
    // 0x8033F67C: nop

L_8033F680:
    // 0x8033F680: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033F684: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033F688: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F68C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F690: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8033F694: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8033F698: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033F69C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033F6A0: jal         0x800295C0
    // 0x8033F6A4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x8033F6A4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x8033F6A8: beq         $v0, $zero, L_8033F6BC
    if (ctx->r2 == 0) {
        // 0x8033F6AC: nop
    
            goto L_8033F6BC;
    }
    // 0x8033F6AC: nop

    // 0x8033F6B0: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033F6B4: b           L_8033F6C8
    // 0x8033F6B8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
        goto L_8033F6C8;
    // 0x8033F6B8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_8033F6BC:
    // 0x8033F6BC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033F6C0: nop

    // 0x8033F6C4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_8033F6C8:
    // 0x8033F6C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033F6CC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033F6D0: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033F6D4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033F6D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033F6DC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033F6E0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033F6E4: nop

    // 0x8033F6E8: bc1f        L_8033F708
    if (!c1cs) {
        // 0x8033F6EC: nop
    
            goto L_8033F708;
    }
    // 0x8033F6EC: nop

    // 0x8033F6F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F6F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F6F8: jal         0x8002B0E4
    // 0x8033F6FC: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x8033F6FC: nop

    after_10:
    // 0x8033F700: b           L_8033F710
    // 0x8033F704: nop

        goto L_8033F710;
    // 0x8033F704: nop

L_8033F708:
    // 0x8033F708: b           L_8033F710
    // 0x8033F70C: nop

        goto L_8033F710;
    // 0x8033F70C: nop

L_8033F710:
    // 0x8033F710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033F714: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033F718: jr          $ra
    // 0x8033F71C: nop

    return;
    // 0x8033F71C: nop

;}
RECOMP_FUNC void func_8033EBBC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EBBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033EBC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033EBC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033EBC8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033EBCC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033EBD0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033EBD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EBD8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033EBDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EBE0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033EBE4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033EBE8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033EBEC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033EBF0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EBF4: nop

    // 0x8033EBF8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033EBFC: nop

    // 0x8033EC00: bne         $t1, $zero, L_8033EC34
    if (ctx->r9 != 0) {
        // 0x8033EC04: nop
    
            goto L_8033EC34;
    }
    // 0x8033EC04: nop

    // 0x8033EC08: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EC0C: nop

    // 0x8033EC10: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033EC14: nop

    // 0x8033EC18: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033EC1C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033EC20: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EC24: nop

    // 0x8033EC28: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033EC2C: nop

    // 0x8033EC30: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033EC34:
    // 0x8033EC34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EC38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EC3C: jal         0x8002A8B4
    // 0x8033EC40: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x8033EC40: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_0:
    // 0x8033EC44: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EC48: nop

    // 0x8033EC4C: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8033EC50: nop

    // 0x8033EC54: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x8033EC58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EC5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EC60: jal         0x8001B4AC
    // 0x8033EC64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033EC64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033EC68: beq         $v0, $zero, L_8033EC88
    if (ctx->r2 == 0) {
        // 0x8033EC6C: nop
    
            goto L_8033EC88;
    }
    // 0x8033EC6C: nop

    // 0x8033EC70: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EC74: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8033EC78: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033EC7C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EC80: nop

    // 0x8033EC84: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033EC88:
    // 0x8033EC88: b           L_8033EC90
    // 0x8033EC8C: nop

        goto L_8033EC90;
    // 0x8033EC8C: nop

L_8033EC90:
    // 0x8033EC90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033EC94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033EC98: jr          $ra
    // 0x8033EC9C: nop

    return;
    // 0x8033EC9C: nop

;}
RECOMP_FUNC void func_8033CD78_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CD78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033CD7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CD80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CD84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CD88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CD8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CD90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CD94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CD98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CD9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CDA0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CDA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CDA8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033CDAC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CDB0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033CDB4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033CDB8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033CDBC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033CDC0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CDC4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033CDC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CDCC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033CDD0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033CDD4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033CDD8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CDDC: nop

    // 0x8033CDE0: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033CDE4: nop

    // 0x8033CDE8: bne         $t6, $zero, L_8033CE7C
    if (ctx->r14 != 0) {
        // 0x8033CDEC: nop
    
            goto L_8033CE7C;
    }
    // 0x8033CDEC: nop

    // 0x8033CDF0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CDF4: nop

    // 0x8033CDF8: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033CDFC: nop

    // 0x8033CE00: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033CE04: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033CE08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CE0C: nop

    // 0x8033CE10: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033CE14: nop

    // 0x8033CE18: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033CE1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CE20: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033CE24: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033CE28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CE2C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033CE30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CE34: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x8033CE38: jal         0x8001C0EC
    // 0x8033CE3C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CE3C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033CE40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CE44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CE48: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CE4C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CE50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CE54: jal         0x8001ABF4
    // 0x8033CE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033CE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033CE5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CE60: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CE64: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CE68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CE6C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033CE70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033CE74: jal         0x8001ABF4
    // 0x8033CE78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033CE78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033CE7C:
    // 0x8033CE7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CE80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CE84: jal         0x8002A8B4
    // 0x8033CE88: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033CE88: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033CE8C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CE90: nop

    // 0x8033CE94: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033CE98: nop

    // 0x8033CE9C: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033CEA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CEA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CEA8: jal         0x8001B4AC
    // 0x8033CEAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033CEAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033CEB0: beq         $v0, $zero, L_8033CEDC
    if (ctx->r2 == 0) {
        // 0x8033CEB4: nop
    
            goto L_8033CEDC;
    }
    // 0x8033CEB4: nop

    // 0x8033CEB8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CEBC: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x8033CEC0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033CEC4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CEC8: nop

    // 0x8033CECC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x8033CED0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CED4: nop

    // 0x8033CED8: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
L_8033CEDC:
    // 0x8033CEDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CEE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CEE4: jal         0x8033EA14
    // 0x8033CEE8: nop

    func_8033EA14_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033CEE8: nop

    after_5:
    // 0x8033CEEC: b           L_8033CEF4
    // 0x8033CEF0: nop

        goto L_8033CEF4;
    // 0x8033CEF0: nop

L_8033CEF4:
    // 0x8033CEF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CEF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033CEFC: jr          $ra
    // 0x8033CF00: nop

    return;
    // 0x8033CF00: nop

;}
RECOMP_FUNC void func_8033B574_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B574: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B57C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B580: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B584: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B588: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B58C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B590: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B594: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B598: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B59C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B5A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B5A4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B5A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5AC: nop

    // 0x8033B5B0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B5B4: nop

    // 0x8033B5B8: bne         $t1, $zero, L_8033B64C
    if (ctx->r9 != 0) {
        // 0x8033B5BC: nop
    
            goto L_8033B64C;
    }
    // 0x8033B5BC: nop

    // 0x8033B5C0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5C4: nop

    // 0x8033B5C8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B5CC: nop

    // 0x8033B5D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B5D4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B5D8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5DC: nop

    // 0x8033B5E0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B5E4: nop

    // 0x8033B5E8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B5EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B5F0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B5F4: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033B5F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B5FC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B604: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8033B608: jal         0x8001C0EC
    // 0x8033B60C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B60C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033B610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B618: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B61C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B624: jal         0x8001ABF4
    // 0x8033B628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033B628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033B62C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B630: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B634: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B638: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B63C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033B640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033B644: jal         0x8001ABF4
    // 0x8033B648: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033B648: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033B64C:
    // 0x8033B64C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B654: jal         0x8002A8B4
    // 0x8033B658: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033B658: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033B65C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B660: nop

    // 0x8033B664: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033B668: nop

    // 0x8033B66C: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033B670: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B674: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B678: jal         0x80029C40
    // 0x8033B67C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033B67C: nop

    after_4:
    // 0x8033B680: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B684: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B688: jal         0x8033E904
    // 0x8033B68C: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033B68C: nop

    after_5:
    // 0x8033B690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B698: jal         0x8001B4AC
    // 0x8033B69C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x8033B69C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033B6A0: beq         $v0, $zero, L_8033B6C0
    if (ctx->r2 == 0) {
        // 0x8033B6A4: nop
    
            goto L_8033B6C0;
    }
    // 0x8033B6A4: nop

    // 0x8033B6A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B6AC: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8033B6B0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033B6B4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B6B8: nop

    // 0x8033B6BC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033B6C0:
    // 0x8033B6C0: b           L_8033B6C8
    // 0x8033B6C4: nop

        goto L_8033B6C8;
    // 0x8033B6C4: nop

L_8033B6C8:
    // 0x8033B6C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B6CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B6D0: jr          $ra
    // 0x8033B6D4: nop

    return;
    // 0x8033B6D4: nop

;}
RECOMP_FUNC void func_8033591C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033591C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80335920: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80335924: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335928: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033592C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335930: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335934: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335938: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033593C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335940: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335944: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335948: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033594C: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x80335950: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335954: nop

    // 0x80335958: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033595C: nop

    // 0x80335960: bne         $t1, $zero, L_803359B8
    if (ctx->r9 != 0) {
        // 0x80335964: nop
    
            goto L_803359B8;
    }
    // 0x80335964: nop

    // 0x80335968: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8033596C: nop

    // 0x80335970: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335974: nop

    // 0x80335978: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033597C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335980: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80335984: nop

    // 0x80335988: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033598C: nop

    // 0x80335990: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335994: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335998: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033599C: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x803359A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803359A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803359AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803359B0: jal         0x8001C0EC
    // 0x803359B4: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803359B4: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
L_803359B8:
    // 0x803359B8: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x803359BC: nop

    // 0x803359C0: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x803359C4: nop

    // 0x803359C8: bne         $t9, $zero, L_80335A00
    if (ctx->r25 != 0) {
        // 0x803359CC: nop
    
            goto L_80335A00;
    }
    // 0x803359CC: nop

    // 0x803359D0: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x803359D4: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x803359D8: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x803359DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803359E8: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x803359EC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803359F0: jal         0x800175F0
    // 0x803359F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803359F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803359F8: b           L_80335A18
    // 0x803359FC: nop

        goto L_80335A18;
    // 0x803359FC: nop

L_80335A00:
    // 0x80335A00: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80335A04: nop

    // 0x80335A08: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80335A0C: nop

    // 0x80335A10: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80335A14: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_80335A18:
    // 0x80335A18: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335A1C: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80335A20: lh          $t5, 0x134A($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X134A);
    // 0x80335A24: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80335A28: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80335A2C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335A30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335A34: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335A38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335A3C: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80335A40: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335A44: nop

    // 0x80335A48: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80335A4C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335A50: nop

    // 0x80335A54: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80335A58: nop

    // 0x80335A5C: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80335A60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335A68: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80335A6C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80335A70: jal         0x8033605C
    // 0x80335A74: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_8033605C_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80335A74: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80335A78: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80335A7C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80335A80: lwc1        $f12, 0xD4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x80335A84: lwc1        $f14, 0xD8($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x80335A88: lw          $a2, 0xDC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XDC);
    // 0x80335A8C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80335A90: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80335A94: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x80335A98: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x80335A9C: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x80335AA0: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80335AA4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80335AA8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80335AAC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80335AB0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80335AB4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335AB8: jal         0x800293B8
    // 0x80335ABC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800293B8(rdram, ctx);
        goto after_3;
    // 0x80335ABC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80335AC0: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80335AC4: nop

    // 0x80335AC8: sw          $v0, 0xC4($t7)
    MEM_W(0XC4, ctx->r15) = ctx->r2;
    // 0x80335ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335AD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335AD4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80335AD8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80335ADC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80335AE0: jal         0x803364D4
    // 0x80335AE4: nop

    func_803364D4_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80335AE4: nop

    after_4:
    // 0x80335AE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335AEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335AF0: jal         0x8001B4AC
    // 0x80335AF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80335AF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80335AF8: beq         $v0, $zero, L_80335B20
    if (ctx->r2 == 0) {
        // 0x80335AFC: nop
    
            goto L_80335B20;
    }
    // 0x80335AFC: nop

    // 0x80335B00: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80335B04: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80335B08: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80335B0C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80335B10: nop

    // 0x80335B14: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80335B18: b           L_80335B40
    // 0x80335B1C: nop

        goto L_80335B40;
    // 0x80335B1C: nop

L_80335B20:
    // 0x80335B20: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335B2C: lw          $a1, 0xC4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0XC4);
    // 0x80335B30: jal         0x80336214
    // 0x80335B34: nop

    func_80336214_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80335B34: nop

    after_6:
    // 0x80335B38: b           L_80335B40
    // 0x80335B3C: nop

        goto L_80335B40;
    // 0x80335B3C: nop

L_80335B40:
    // 0x80335B40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80335B44: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80335B48: jr          $ra
    // 0x80335B4C: nop

    return;
    // 0x80335B4C: nop

;}
RECOMP_FUNC void func_80333EFC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333EFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80333F00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333F04: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333F08: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333F0C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333F10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333F14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333F18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333F1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333F20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333F24: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333F28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333F2C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80333F30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80333F34: nop

    // 0x80333F38: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333F3C: nop

    // 0x80333F40: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80333F44: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333F48: nop

    // 0x80333F4C: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80333F50: nop

    // 0x80333F54: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80333F58: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333F5C: nop

    // 0x80333F60: lh          $t5, 0xEC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEC);
    // 0x80333F64: nop

    // 0x80333F68: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80333F6C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333F70: nop

    // 0x80333F74: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80333F78: nop

    // 0x80333F7C: bne         $t7, $zero, L_803340E8
    if (ctx->r15 != 0) {
        // 0x80333F80: nop
    
            goto L_803340E8;
    }
    // 0x80333F80: nop

    // 0x80333F84: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333F88: nop

    // 0x80333F8C: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80333F90: nop

    // 0x80333F94: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80333F98: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80333F9C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333FA0: nop

    // 0x80333FA4: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x80333FA8: nop

    // 0x80333FAC: sh          $t2, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r10;
    // 0x80333FB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FB8: jal         0x8001BBDC
    // 0x80333FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80333FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80333FC0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80333FC4: jal         0x8001BBDC
    // 0x80333FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80333FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333FCC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80333FD0: jal         0x8001BBDC
    // 0x80333FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80333FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333FDC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80333FE0: addiu       $t3, $t3, -0x57BC
    ctx->r11 = ADD32(ctx->r11, -0X57BC);
    // 0x80333FE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333FE8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80333FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333FF0: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80333FF4: jal         0x8001C0EC
    // 0x80333FF8: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x80333FF8: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_3:
    // 0x80333FFC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80334000: addiu       $t4, $t4, -0x5A70
    ctx->r12 = ADD32(ctx->r12, -0X5A70);
    // 0x80334004: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80334008: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8033400C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334010: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80334014: jal         0x8001C0EC
    // 0x80334018: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80334018: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_4:
    // 0x8033401C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80334020: addiu       $t5, $t5, -0x5A10
    ctx->r13 = ADD32(ctx->r13, -0X5A10);
    // 0x80334024: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334028: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8033402C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334030: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80334034: jal         0x8001C0EC
    // 0x80334038: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80334038: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_5:
    // 0x8033403C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334040: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80334044: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334048: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033404C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334050: jal         0x8001ABF4
    // 0x80334054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80334054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80334058: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033405C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334060: lh          $t9, 0xA6($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA6);
    // 0x80334064: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80334068: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033406C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334070: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334074: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334078: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033407C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80334080: sh          $t6, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r14;
    // 0x80334084: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334088: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033408C: lh          $t2, 0xA8($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XA8);
    // 0x80334090: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80334094: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80334098: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033409C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803340A0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803340A4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803340A8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803340AC: lh          $t3, 0x41F4($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F4);
    // 0x803340B0: nop

    // 0x803340B4: beq         $t3, $at, L_803340E8
    if (ctx->r11 == ctx->r1) {
        // 0x803340B8: nop
    
            goto L_803340E8;
    }
    // 0x803340B8: nop

    // 0x803340BC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803340C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803340C4: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x803340C8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803340CC: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x803340D0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803340D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803340D8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x803340DC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803340E0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803340E4: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
L_803340E8:
    // 0x803340E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803340EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803340F0: jal         0x8001B62C
    // 0x803340F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_7;
    // 0x803340F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x803340F8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x803340FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334100: nop

    // 0x80334104: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80334108: nop

    // 0x8033410C: bc1f        L_803344E4
    if (!c1cs) {
        // 0x80334110: nop
    
            goto L_803344E4;
    }
    // 0x80334110: nop

    // 0x80334114: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334118: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033411C: lbu         $t0, 0x132($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X132);
    // 0x80334120: nop

    // 0x80334124: bne         $t0, $at, L_8033427C
    if (ctx->r8 != ctx->r1) {
        // 0x80334128: nop
    
            goto L_8033427C;
    }
    // 0x80334128: nop

    // 0x8033412C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334130: nop

    // 0x80334134: lbu         $t2, 0x132($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X132);
    // 0x80334138: nop

    // 0x8033413C: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80334140: sb          $t1, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r9;
    // 0x80334144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033414C: jal         0x8001BBDC
    // 0x80334150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x80334150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80334154: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80334158: jal         0x8001BBDC
    // 0x8033415C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x8033415C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80334160: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334164: jal         0x8001BBDC
    // 0x80334168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x80334168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x8033416C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80334170: lui         $at, 0x432F
    ctx->r1 = S32(0X432F << 16);
    // 0x80334174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334178: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033417C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80334180: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80334184: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x80334188: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x8033418C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80334190: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80334194: addiu       $a1, $a1, -0x844
    ctx->r5 = ADD32(ctx->r5, -0X844);
    // 0x80334198: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033419C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x803341A0: jal         0x80027464
    // 0x803341A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_11;
    // 0x803341A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x803341A8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803341AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x803341B0: jal         0x80026F10
    // 0x803341B4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80026F10(rdram, ctx);
        goto after_12;
    // 0x803341B4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_12:
    // 0x803341B8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803341BC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803341C0: nop

    // 0x803341C4: sh          $t5, 0xBC($t7)
    MEM_H(0XBC, ctx->r15) = ctx->r13;
    // 0x803341C8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x803341CC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803341D0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803341D4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803341D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803341DC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803341E0: lwc1        $f4, 0x18($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X18);
    // 0x803341E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803341E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803341EC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803341F0: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x803341F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803341F8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803341FC: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80334200: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80334204: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334208: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8033420C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80334210: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334214: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334218: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033421C: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80334220: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80334224: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80334228: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8033422C: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80334230: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334234: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80334238: lwc1        $f8, 0x20($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X20);
    // 0x8033423C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334240: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334244: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334248: swc1        $f8, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f8.u32l;
    // 0x8033424C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80334250: addiu       $t7, $t7, -0x5A14
    ctx->r15 = ADD32(ctx->r15, -0X5A14);
    // 0x80334254: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80334258: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033425C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334264: jal         0x8001C0EC
    // 0x80334268: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x80334268: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    after_13:
    // 0x8033426C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80334270: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80334274: b           L_803344E4
    // 0x80334278: sh          $t4, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r12;
        goto L_803344E4;
    // 0x80334278: sh          $t4, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r12;
L_8033427C:
    // 0x8033427C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334284: lh          $a0, 0xBC($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XBC);
    // 0x80334288: jal         0x8001B4AC
    // 0x8033428C: nop

    func_8001B4AC(rdram, ctx);
        goto after_14;
    // 0x8033428C: nop

    after_14:
    // 0x80334290: beq         $v0, $zero, L_803344E4
    if (ctx->r2 == 0) {
        // 0x80334294: nop
    
            goto L_803344E4;
    }
    // 0x80334294: nop

    // 0x80334298: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033429C: nop

    // 0x803342A0: lh          $t2, 0xBE($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XBE);
    // 0x803342A4: nop

    // 0x803342A8: bne         $t2, $zero, L_8033447C
    if (ctx->r10 != 0) {
        // 0x803342AC: nop
    
            goto L_8033447C;
    }
    // 0x803342AC: nop

    // 0x803342B0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803342B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803342B8: lh          $t8, 0xC2($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XC2);
    // 0x803342BC: nop

    // 0x803342C0: bne         $t8, $at, L_80334324
    if (ctx->r24 != ctx->r1) {
        // 0x803342C4: nop
    
            goto L_80334324;
    }
    // 0x803342C4: nop

    // 0x803342C8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803342CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803342D0: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x803342D4: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x803342D8: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x803342DC: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x803342E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803342E4: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x803342E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803342EC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803342F0: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x803342F4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803342F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803342FC: lh          $t6, 0xA8($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA8);
    // 0x80334300: nop

    // 0x80334304: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80334308: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033430C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334310: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80334314: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334318: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033431C: b           L_8033437C
    // 0x80334320: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
        goto L_8033437C;
    // 0x80334320: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80334324:
    // 0x80334324: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80334328: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033432C: lh          $t8, 0xA6($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XA6);
    // 0x80334330: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80334334: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x80334338: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8033433C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334340: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x80334344: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334348: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033434C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80334350: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80334354: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334358: lh          $t3, 0xA6($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XA6);
    // 0x8033435C: nop

    // 0x80334360: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334364: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334368: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033436C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334370: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80334374: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80334378: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033437C:
    // 0x8033437C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80334380: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334384: lh          $t0, 0xA6($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA6);
    // 0x80334388: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033438C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334390: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334394: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334398: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033439C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803343A0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803343A4: sh          $t9, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r25;
    // 0x803343A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803343AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803343B0: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x803343B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803343B8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803343BC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803343C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803343C4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803343C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803343CC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803343D0: sh          $t8, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r24;
    // 0x803343D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343DC: jal         0x800281A4
    // 0x803343E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_15;
    // 0x803343E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x803343E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343EC: jal         0x800281A4
    // 0x803343F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_16;
    // 0x803343F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x803343F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803343F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803343FC: jal         0x800281A4
    // 0x80334400: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_17;
    // 0x80334400: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x80334404: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80334408: jal         0x8002B114
    // 0x8033440C: nop

    func_8002B114(rdram, ctx);
        goto after_18;
    // 0x8033440C: nop

    after_18:
    // 0x80334410: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334414: jal         0x8002B114
    // 0x80334418: nop

    func_8002B114(rdram, ctx);
        goto after_19;
    // 0x80334418: nop

    after_19:
    // 0x8033441C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80334420: jal         0x8002B114
    // 0x80334424: nop

    func_8002B114(rdram, ctx);
        goto after_20;
    // 0x80334424: nop

    after_20:
    // 0x80334428: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033442C: jal         0x8002B114
    // 0x80334430: nop

    func_8002B114(rdram, ctx);
        goto after_21;
    // 0x80334430: nop

    after_21:
    // 0x80334434: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80334438: nop

    // 0x8033443C: lh          $a0, 0xBC($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XBC);
    // 0x80334440: jal         0x8002B114
    // 0x80334444: nop

    func_8002B114(rdram, ctx);
        goto after_22;
    // 0x80334444: nop

    after_22:
    // 0x80334448: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033444C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334454: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x80334458: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033445C: jal         0x800175F0
    // 0x80334460: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_23;
    // 0x80334460: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x80334464: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334468: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033446C: jal         0x8002B114
    // 0x80334470: nop

    func_8002B114(rdram, ctx);
        goto after_24;
    // 0x80334470: nop

    after_24:
    // 0x80334474: b           L_803344E4
    // 0x80334478: nop

        goto L_803344E4;
    // 0x80334478: nop

L_8033447C:
    // 0x8033447C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80334480: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334484: lh          $t6, 0xBE($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XBE);
    // 0x80334488: nop

    // 0x8033448C: bne         $t6, $at, L_803344CC
    if (ctx->r14 != ctx->r1) {
        // 0x80334490: nop
    
            goto L_803344CC;
    }
    // 0x80334490: nop

    // 0x80334494: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80334498: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x8033449C: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x803344A0: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x803344A4: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x803344A8: jal         0x8007F070
    // 0x803344AC: nop

    func_8007F070(rdram, ctx);
        goto after_25;
    // 0x803344AC: nop

    after_25:
    // 0x803344B0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803344B4: nop

    // 0x803344B8: lh          $t1, 0xBE($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XBE);
    // 0x803344BC: nop

    // 0x803344C0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803344C4: b           L_803344E4
    // 0x803344C8: sh          $t2, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r10;
        goto L_803344E4;
    // 0x803344C8: sh          $t2, 0xBE($t9)
    MEM_H(0XBE, ctx->r25) = ctx->r10;
L_803344CC:
    // 0x803344CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803344D0: nop

    // 0x803344D4: lh          $t8, 0xBE($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XBE);
    // 0x803344D8: nop

    // 0x803344DC: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x803344E0: sh          $t7, 0xBE($t5)
    MEM_H(0XBE, ctx->r13) = ctx->r15;
L_803344E4:
    // 0x803344E4: b           L_803344EC
    // 0x803344E8: nop

        goto L_803344EC;
    // 0x803344E8: nop

L_803344EC:
    // 0x803344EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803344F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x803344F4: jr          $ra
    // 0x803344F8: nop

    return;
    // 0x803344F8: nop

;}
RECOMP_FUNC void func_8033D584_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D584: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D588: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D58C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D590: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D594: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D598: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D59C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D5A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D5A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D5A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D5AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D5B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D5B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D5B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D5BC: nop

    // 0x8033D5C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D5C4: nop

    // 0x8033D5C8: bne         $t1, $zero, L_8033D6D4
    if (ctx->r9 != 0) {
        // 0x8033D5CC: nop
    
            goto L_8033D6D4;
    }
    // 0x8033D5CC: nop

    // 0x8033D5D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D5D4: nop

    // 0x8033D5D8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D5DC: nop

    // 0x8033D5E0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D5E4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D5E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D5EC: nop

    // 0x8033D5F0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033D5F4: nop

    // 0x8033D5F8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033D5FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D600: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D604: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033D608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D60C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D614: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8033D618: jal         0x8001C0EC
    // 0x8033D61C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033D61C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033D620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D628: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D62C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D634: jal         0x8001ABF4
    // 0x8033D638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033D638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033D63C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D640: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D644: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D64C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033D650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D654: jal         0x8001ABF4
    // 0x8033D658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033D658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8033D65C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x8033D660: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033D664: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D668: nop

    // 0x8033D66C: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x8033D670: jal         0x80014E80
    // 0x8033D674: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8033D674: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x8033D678: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033D67C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033D680: nop

    // 0x8033D684: bne         $t9, $zero, L_8033D6B0
    if (ctx->r25 != 0) {
        // 0x8033D688: nop
    
            goto L_8033D6B0;
    }
    // 0x8033D688: nop

    // 0x8033D68C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D690: lui         $at, 0x431B
    ctx->r1 = S32(0X431B << 16);
    // 0x8033D694: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033D698: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033D69C: jal         0x80015538
    // 0x8033D6A0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033D6A0: nop

    after_4:
    // 0x8033D6A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033D6A8: b           L_8033D6D4
    // 0x8033D6AC: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
        goto L_8033D6D4;
    // 0x8033D6AC: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
L_8033D6B0:
    // 0x8033D6B0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033D6B4: lui         $at, 0x434D
    ctx->r1 = S32(0X434D << 16);
    // 0x8033D6B8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033D6BC: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033D6C0: jal         0x80015538
    // 0x8033D6C4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x8033D6C4: nop

    after_5:
    // 0x8033D6C8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033D6CC: nop

    // 0x8033D6D0: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
L_8033D6D4:
    // 0x8033D6D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D6D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D6DC: jal         0x80029C40
    // 0x8033D6E0: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x8033D6E0: nop

    after_6:
    // 0x8033D6E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033D6E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033D6EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D6F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D6F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D6F8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033D6FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033D700: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033D704: jal         0x80029018
    // 0x8033D708: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x8033D708: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x8033D70C: beq         $v0, $zero, L_8033D754
    if (ctx->r2 == 0) {
        // 0x8033D710: nop
    
            goto L_8033D754;
    }
    // 0x8033D710: nop

    // 0x8033D714: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033D718: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D71C: nop

    // 0x8033D720: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
    // 0x8033D724: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033D728: nop

    // 0x8033D72C: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033D730: nop

    // 0x8033D734: swc1        $f16, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f16.u32l;
    // 0x8033D738: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033D73C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D740: nop

    // 0x8033D744: swc1        $f18, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f18.u32l;
    // 0x8033D748: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D74C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033D750: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
L_8033D754:
    // 0x8033D754: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D758: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D75C: jal         0x8033E904
    // 0x8033D760: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x8033D760: nop

    after_8:
    // 0x8033D764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D76C: jal         0x8001B4AC
    // 0x8033D770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_9;
    // 0x8033D770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8033D774: beq         $v0, $zero, L_8033D794
    if (ctx->r2 == 0) {
        // 0x8033D778: nop
    
            goto L_8033D794;
    }
    // 0x8033D778: nop

    // 0x8033D77C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D780: addiu       $t9, $zero, 0x27
    ctx->r25 = ADD32(0, 0X27);
    // 0x8033D784: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033D788: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033D78C: nop

    // 0x8033D790: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033D794:
    // 0x8033D794: b           L_8033D79C
    // 0x8033D798: nop

        goto L_8033D79C;
    // 0x8033D798: nop

L_8033D79C:
    // 0x8033D79C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D7A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D7A4: jr          $ra
    // 0x8033D7A8: nop

    return;
    // 0x8033D7A8: nop

;}
RECOMP_FUNC void func_8033F2CC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033F2CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033F2D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033F2D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033F2D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033F2DC: jal         0x8002B0E4
    // 0x8033F2E0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033F2E0: nop

    after_0:
    // 0x8033F2E4: b           L_8033F2EC
    // 0x8033F2E8: nop

        goto L_8033F2EC;
    // 0x8033F2E8: nop

L_8033F2EC:
    // 0x8033F2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033F2F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033F2F4: jr          $ra
    // 0x8033F2F8: nop

    return;
    // 0x8033F2F8: nop

;}
RECOMP_FUNC void func_803369CC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803369CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803369D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803369D4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803369D8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803369DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803369E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803369E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803369E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803369EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803369F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803369F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803369F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803369FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80336A00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336A04: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80336A08: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80336A0C: nop

    // 0x80336A10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80336A14: nop

    // 0x80336A18: bne         $t1, $zero, L_80336AA4
    if (ctx->r9 != 0) {
        // 0x80336A1C: nop
    
            goto L_80336AA4;
    }
    // 0x80336A1C: nop

    // 0x80336A20: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80336A24: nop

    // 0x80336A28: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80336A2C: nop

    // 0x80336A30: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80336A34: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80336A38: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80336A3C: nop

    // 0x80336A40: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80336A44: nop

    // 0x80336A48: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80336A4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336A50: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80336A54: addiu       $t7, $t7, -0x576C
    ctx->r15 = ADD32(ctx->r15, -0X576C);
    // 0x80336A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336A5C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80336A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336A64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336A68: jal         0x8001C0EC
    // 0x80336A6C: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336A6C: addiu       $a3, $zero, 0xE6
    ctx->r7 = ADD32(0, 0XE6);
    after_0:
    // 0x80336A70: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80336A74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336A78: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80336A7C: nop

    // 0x80336A80: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80336A84: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336A88: nop

    // 0x80336A8C: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80336A90: nop

    // 0x80336A94: swc1        $f6, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f6.u32l;
    // 0x80336A98: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80336A9C: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x80336AA0: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_80336AA4:
    // 0x80336AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336AAC: jal         0x80028FA0
    // 0x80336AB0: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x80336AB0: nop

    after_1:
    // 0x80336AB4: beq         $v0, $zero, L_80336AEC
    if (ctx->r2 == 0) {
        // 0x80336AB8: nop
    
            goto L_80336AEC;
    }
    // 0x80336AB8: nop

    // 0x80336ABC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336AC0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80336AC4: lh          $t4, 0x1316($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X1316);
    // 0x80336AC8: nop

    // 0x80336ACC: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80336AD0: sh          $t2, 0x1316($t3)
    MEM_H(0X1316, ctx->r11) = ctx->r10;
    // 0x80336AD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336AD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336ADC: jal         0x8002B0E4
    // 0x80336AE0: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x80336AE0: nop

    after_2:
    // 0x80336AE4: b           L_80336D6C
    // 0x80336AE8: nop

        goto L_80336D6C;
    // 0x80336AE8: nop

L_80336AEC:
    // 0x80336AEC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80336AF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80336AF4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336AF8: lwc1        $f12, 0x40($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80336AFC: jal         0x80015538
    // 0x80336B00: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80336B00: nop

    after_3:
    // 0x80336B04: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80336B08: nop

    // 0x80336B0C: swc1        $f0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f0.u32l;
    // 0x80336B10: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80336B14: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336B18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336B1C: lwc1        $f8, 0x40($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X40);
    // 0x80336B20: nop

    // 0x80336B24: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80336B28: nop

    // 0x80336B2C: bc1t        L_80336B50
    if (c1cs) {
        // 0x80336B30: nop
    
            goto L_80336B50;
    }
    // 0x80336B30: nop

    // 0x80336B34: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80336B38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336B3C: nop

    // 0x80336B40: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80336B44: nop

    // 0x80336B48: bc1f        L_80336B74
    if (!c1cs) {
        // 0x80336B4C: nop
    
            goto L_80336B74;
    }
    // 0x80336B4C: nop

L_80336B50:
    // 0x80336B50: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80336B54: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80336B58: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336B5C: lwc1        $f12, 0x18($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X18);
    // 0x80336B60: jal         0x80015538
    // 0x80336B64: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80336B64: nop

    after_4:
    // 0x80336B68: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336B6C: b           L_80336B9C
    // 0x80336B70: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
        goto L_80336B9C;
    // 0x80336B70: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
L_80336B74:
    // 0x80336B74: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80336B78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336B7C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80336B80: nop

    // 0x80336B84: swc1        $f18, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f18.u32l;
    // 0x80336B88: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80336B8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336B90: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80336B94: nop

    // 0x80336B98: swc1        $f4, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f4.u32l;
L_80336B9C:
    // 0x80336B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336BA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336BA4: jal         0x80029D8C
    // 0x80336BA8: nop

    func_80029D8C(rdram, ctx);
        goto after_5;
    // 0x80336BA8: nop

    after_5:
    // 0x80336BAC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80336BB0: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x80336BB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336BB8: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80336BBC: nop

    // 0x80336BC0: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80336BC4: nop

    // 0x80336BC8: bc1t        L_80336C20
    if (c1cs) {
        // 0x80336BCC: nop
    
            goto L_80336C20;
    }
    // 0x80336BCC: nop

    // 0x80336BD0: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x80336BD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336BD8: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80336BDC: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80336BE0: nop

    // 0x80336BE4: bc1f        L_80336BF0
    if (!c1cs) {
        // 0x80336BE8: nop
    
            goto L_80336BF0;
    }
    // 0x80336BE8: nop

    // 0x80336BEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80336BF0:
    // 0x80336BF0: bne         $t2, $zero, L_80336C20
    if (ctx->r10 != 0) {
        // 0x80336BF4: nop
    
            goto L_80336C20;
    }
    // 0x80336BF4: nop

    // 0x80336BF8: lui         $at, 0xC4AF
    ctx->r1 = S32(0XC4AF << 16);
    // 0x80336BFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80336C00: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80336C04: nop

    // 0x80336C08: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80336C0C: nop

    // 0x80336C10: bc1t        L_80336C20
    if (c1cs) {
        // 0x80336C14: nop
    
            goto L_80336C20;
    }
    // 0x80336C14: nop

    // 0x80336C18: beq         $t2, $zero, L_80336C28
    if (ctx->r10 == 0) {
        // 0x80336C1C: nop
    
            goto L_80336C28;
    }
    // 0x80336C1C: nop

L_80336C20:
    // 0x80336C20: b           L_80336CEC
    // 0x80336C24: nop

        goto L_80336CEC;
    // 0x80336C24: nop

L_80336C28:
    // 0x80336C28: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80336C2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336C30: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80336C34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C3C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80336C40: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80336C44: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336C48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336C4C: jal         0x800295C0
    // 0x80336C50: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80336C50: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80336C54: beq         $v0, $zero, L_80336C8C
    if (ctx->r2 == 0) {
        // 0x80336C58: nop
    
            goto L_80336C8C;
    }
    // 0x80336C58: nop

    // 0x80336C5C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80336C60: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80336C64: lh          $t6, 0x1316($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X1316);
    // 0x80336C68: nop

    // 0x80336C6C: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x80336C70: sh          $t5, 0x1316($t3)
    MEM_H(0X1316, ctx->r11) = ctx->r13;
    // 0x80336C74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C7C: jal         0x8002B0E4
    // 0x80336C80: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x80336C80: nop

    after_7:
    // 0x80336C84: b           L_80336D6C
    // 0x80336C88: nop

        goto L_80336D6C;
    // 0x80336C88: nop

L_80336C8C:
    // 0x80336C8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80336C90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336C94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336C9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80336CA0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80336CA4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336CA8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80336CAC: jal         0x80029018
    // 0x80336CB0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80336CB0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80336CB4: beq         $v0, $zero, L_80336CEC
    if (ctx->r2 == 0) {
        // 0x80336CB8: nop
    
            goto L_80336CEC;
    }
    // 0x80336CB8: nop

    // 0x80336CBC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80336CC0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80336CC4: lh          $t8, 0x1316($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X1316);
    // 0x80336CC8: nop

    // 0x80336CCC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80336CD0: sh          $t9, 0x1316($t7)
    MEM_H(0X1316, ctx->r15) = ctx->r25;
    // 0x80336CD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336CD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336CDC: jal         0x8002B0E4
    // 0x80336CE0: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80336CE0: nop

    after_9:
    // 0x80336CE4: b           L_80336D6C
    // 0x80336CE8: nop

        goto L_80336D6C;
    // 0x80336CE8: nop

L_80336CEC:
    // 0x80336CEC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80336CF0: nop

    // 0x80336CF4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80336CF8: nop

    // 0x80336CFC: bne         $t1, $zero, L_80336D4C
    if (ctx->r9 != 0) {
        // 0x80336D00: nop
    
            goto L_80336D4C;
    }
    // 0x80336D00: nop

    // 0x80336D04: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80336D08: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80336D0C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80336D10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80336D14: nop

    // 0x80336D18: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80336D1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80336D20: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80336D24: nop

    // 0x80336D28: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x80336D2C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80336D30: nop

    // 0x80336D34: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80336D38: nop

    // 0x80336D3C: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x80336D40: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80336D44: b           L_80336D64
    // 0x80336D48: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
        goto L_80336D64;
    // 0x80336D48: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
L_80336D4C:
    // 0x80336D4C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336D50: nop

    // 0x80336D54: lh          $t7, 0xA6($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA6);
    // 0x80336D58: nop

    // 0x80336D5C: addiu       $t0, $t7, -0x1
    ctx->r8 = ADD32(ctx->r15, -0X1);
    // 0x80336D60: sh          $t0, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r8;
L_80336D64:
    // 0x80336D64: b           L_80336D6C
    // 0x80336D68: nop

        goto L_80336D6C;
    // 0x80336D68: nop

L_80336D6C:
    // 0x80336D6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80336D70: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80336D74: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80336D78: jr          $ra
    // 0x80336D7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80336D7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033EA14_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EA14: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033EA18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8033EA1C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8033EA20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033EA24: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8033EA28: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033EA2C: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033EA30: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033EA34: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8033EA38: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8033EA3C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8033EA40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033EA44: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x8033EA48: nop

    // 0x8033EA4C: bne         $t0, $at, L_8033EA9C
    if (ctx->r8 != ctx->r1) {
        // 0x8033EA50: nop
    
            goto L_8033EA9C;
    }
    // 0x8033EA50: nop

    // 0x8033EA54: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033EA58: addiu       $t1, $zero, 0x21
    ctx->r9 = ADD32(0, 0X21);
    // 0x8033EA5C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8033EA60: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033EA64: nop

    // 0x8033EA68: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x8033EA6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033EA70: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8033EA74: nop

    // 0x8033EA78: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x8033EA7C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033EA80: nop

    // 0x8033EA84: lwc1        $f12, 0x2C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8033EA88: nop

    // 0x8033EA8C: swc1        $f12, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f12.u32l;
    // 0x8033EA90: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033EA94: nop

    // 0x8033EA98: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
L_8033EA9C:
    // 0x8033EA9C: b           L_8033EAA4
    // 0x8033EAA0: nop

        goto L_8033EAA4;
    // 0x8033EAA0: nop

L_8033EAA4:
    // 0x8033EAA4: jr          $ra
    // 0x8033EAA8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033EAA8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033BF3C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BF3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033BF40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BF44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BF48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BF4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BF50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BF54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BF58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BF5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BF60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BF64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BF68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BF6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033BF70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033BF74: nop

    // 0x8033BF78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BF7C: nop

    // 0x8033BF80: bne         $t1, $zero, L_8033C300
    if (ctx->r9 != 0) {
        // 0x8033BF84: nop
    
            goto L_8033C300;
    }
    // 0x8033BF84: nop

    // 0x8033BF88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033BF8C: nop

    // 0x8033BF90: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BF94: nop

    // 0x8033BF98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BF9C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BFA0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033BFA4: nop

    // 0x8033BFA8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BFAC: nop

    // 0x8033BFB0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BFB4: jal         0x80014E80
    // 0x8033BFB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8033BFB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8033BFBC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033BFC0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033BFC4: nop

    // 0x8033BFC8: bne         $t7, $zero, L_8033C078
    if (ctx->r15 != 0) {
        // 0x8033BFCC: nop
    
            goto L_8033C078;
    }
    // 0x8033BFCC: nop

    // 0x8033BFD0: jal         0x80014E80
    // 0x8033BFD4: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x8033BFD4: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_1:
    // 0x8033BFD8: addiu       $t8, $v0, 0x12C
    ctx->r24 = ADD32(ctx->r2, 0X12C);
    // 0x8033BFDC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8033BFE0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033BFE4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8033BFE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033BFEC: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033BFF0: nop

    // 0x8033BFF4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033BFF8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8033BFFC: nop

    // 0x8033C000: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8033C004: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033C008: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033C00C: nop

    // 0x8033C010: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8033C014: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8033C018: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8033C01C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8033C020: nop

    // 0x8033C024: jal         0x80014E80
    // 0x8033C028: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8033C028: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_2:
    // 0x8033C02C: addiu       $t3, $v0, 0x12C
    ctx->r11 = ADD32(ctx->r2, 0X12C);
    // 0x8033C030: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8033C034: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033C038: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8033C03C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033C040: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033C044: nop

    // 0x8033C048: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033C04C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8033C050: nop

    // 0x8033C054: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8033C058: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033C05C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033C060: nop

    // 0x8033C064: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8033C068: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8033C06C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8033C070: b           L_8033C120
    // 0x8033C074: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_8033C120;
    // 0x8033C074: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8033C078:
    // 0x8033C078: jal         0x80014E80
    // 0x8033C07C: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8033C07C: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_3:
    // 0x8033C080: addiu       $t5, $v0, -0x12C
    ctx->r13 = ADD32(ctx->r2, -0X12C);
    // 0x8033C084: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8033C088: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033C08C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033C090: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033C094: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8033C098: nop

    // 0x8033C09C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033C0A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8033C0A4: nop

    // 0x8033C0A8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033C0AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033C0B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033C0B4: nop

    // 0x8033C0B8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8033C0BC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8033C0C0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8033C0C4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8033C0C8: nop

    // 0x8033C0CC: jal         0x80014E80
    // 0x8033C0D0: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x8033C0D0: addiu       $a0, $zero, -0x79
    ctx->r4 = ADD32(0, -0X79);
    after_4:
    // 0x8033C0D4: addiu       $t0, $v0, -0x12C
    ctx->r8 = ADD32(ctx->r2, -0X12C);
    // 0x8033C0D8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8033C0DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033C0E0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033C0E4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033C0E8: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033C0EC: nop

    // 0x8033C0F0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033C0F4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8033C0F8: nop

    // 0x8033C0FC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8033C100: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033C104: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033C108: nop

    // 0x8033C10C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033C110: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8033C114: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8033C118: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8033C11C: nop

L_8033C120:
    // 0x8033C120: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8033C124: nop

    // 0x8033C128: slti        $at, $t2, -0x3C0
    ctx->r1 = SIGNED(ctx->r10) < -0X3C0 ? 1 : 0;
    // 0x8033C12C: beq         $at, $zero, L_8033C140
    if (ctx->r1 == 0) {
        // 0x8033C130: nop
    
            goto L_8033C140;
    }
    // 0x8033C130: nop

    // 0x8033C134: addiu       $t6, $zero, -0x3C0
    ctx->r14 = ADD32(0, -0X3C0);
    // 0x8033C138: b           L_8033C1AC
    // 0x8033C13C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
        goto L_8033C1AC;
    // 0x8033C13C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_8033C140:
    // 0x8033C140: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8033C144: nop

    // 0x8033C148: slti        $at, $t5, 0x3C1
    ctx->r1 = SIGNED(ctx->r13) < 0X3C1 ? 1 : 0;
    // 0x8033C14C: bne         $at, $zero, L_8033C160
    if (ctx->r1 != 0) {
        // 0x8033C150: nop
    
            goto L_8033C160;
    }
    // 0x8033C150: nop

    // 0x8033C154: addiu       $t7, $zero, 0x3C0
    ctx->r15 = ADD32(0, 0X3C0);
    // 0x8033C158: b           L_8033C1AC
    // 0x8033C15C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_8033C1AC;
    // 0x8033C15C: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_8033C160:
    // 0x8033C160: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8033C164: nop

    // 0x8033C168: slti        $at, $t8, -0x12B
    ctx->r1 = SIGNED(ctx->r24) < -0X12B ? 1 : 0;
    // 0x8033C16C: bne         $at, $zero, L_8033C188
    if (ctx->r1 != 0) {
        // 0x8033C170: nop
    
            goto L_8033C188;
    }
    // 0x8033C170: nop

    // 0x8033C174: bgtz        $t8, L_8033C188
    if (SIGNED(ctx->r24) > 0) {
        // 0x8033C178: nop
    
            goto L_8033C188;
    }
    // 0x8033C178: nop

    // 0x8033C17C: addiu       $t9, $zero, -0x12C
    ctx->r25 = ADD32(0, -0X12C);
    // 0x8033C180: b           L_8033C1AC
    // 0x8033C184: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
        goto L_8033C1AC;
    // 0x8033C184: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_8033C188:
    // 0x8033C188: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033C18C: nop

    // 0x8033C190: slti        $at, $t0, 0x12C
    ctx->r1 = SIGNED(ctx->r8) < 0X12C ? 1 : 0;
    // 0x8033C194: beq         $at, $zero, L_8033C1AC
    if (ctx->r1 == 0) {
        // 0x8033C198: nop
    
            goto L_8033C1AC;
    }
    // 0x8033C198: nop

    // 0x8033C19C: bltz        $t0, L_8033C1AC
    if (SIGNED(ctx->r8) < 0) {
        // 0x8033C1A0: nop
    
            goto L_8033C1AC;
    }
    // 0x8033C1A0: nop

    // 0x8033C1A4: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x8033C1A8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_8033C1AC:
    // 0x8033C1AC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033C1B0: nop

    // 0x8033C1B4: slti        $at, $t3, -0x3C0
    ctx->r1 = SIGNED(ctx->r11) < -0X3C0 ? 1 : 0;
    // 0x8033C1B8: beq         $at, $zero, L_8033C1CC
    if (ctx->r1 == 0) {
        // 0x8033C1BC: nop
    
            goto L_8033C1CC;
    }
    // 0x8033C1BC: nop

    // 0x8033C1C0: addiu       $t4, $zero, -0x3C0
    ctx->r12 = ADD32(0, -0X3C0);
    // 0x8033C1C4: b           L_8033C238
    // 0x8033C1C8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
        goto L_8033C238;
    // 0x8033C1C8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_8033C1CC:
    // 0x8033C1CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C1D0: nop

    // 0x8033C1D4: slti        $at, $t2, 0x3C1
    ctx->r1 = SIGNED(ctx->r10) < 0X3C1 ? 1 : 0;
    // 0x8033C1D8: bne         $at, $zero, L_8033C1EC
    if (ctx->r1 != 0) {
        // 0x8033C1DC: nop
    
            goto L_8033C1EC;
    }
    // 0x8033C1DC: nop

    // 0x8033C1E0: addiu       $t6, $zero, 0x3C0
    ctx->r14 = ADD32(0, 0X3C0);
    // 0x8033C1E4: b           L_8033C238
    // 0x8033C1E8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_8033C238;
    // 0x8033C1E8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8033C1EC:
    // 0x8033C1EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033C1F0: nop

    // 0x8033C1F4: slti        $at, $t5, -0x12B
    ctx->r1 = SIGNED(ctx->r13) < -0X12B ? 1 : 0;
    // 0x8033C1F8: bne         $at, $zero, L_8033C214
    if (ctx->r1 != 0) {
        // 0x8033C1FC: nop
    
            goto L_8033C214;
    }
    // 0x8033C1FC: nop

    // 0x8033C200: bgtz        $t5, L_8033C214
    if (SIGNED(ctx->r13) > 0) {
        // 0x8033C204: nop
    
            goto L_8033C214;
    }
    // 0x8033C204: nop

    // 0x8033C208: addiu       $t7, $zero, -0x12C
    ctx->r15 = ADD32(0, -0X12C);
    // 0x8033C20C: b           L_8033C238
    // 0x8033C210: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_8033C238;
    // 0x8033C210: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8033C214:
    // 0x8033C214: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033C218: nop

    // 0x8033C21C: slti        $at, $t8, 0x12C
    ctx->r1 = SIGNED(ctx->r24) < 0X12C ? 1 : 0;
    // 0x8033C220: beq         $at, $zero, L_8033C238
    if (ctx->r1 == 0) {
        // 0x8033C224: nop
    
            goto L_8033C238;
    }
    // 0x8033C224: nop

    // 0x8033C228: bltz        $t8, L_8033C238
    if (SIGNED(ctx->r24) < 0) {
        // 0x8033C22C: nop
    
            goto L_8033C238;
    }
    // 0x8033C22C: nop

    // 0x8033C230: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x8033C234: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8033C238:
    // 0x8033C238: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8033C23C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C240: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8033C244: nop

    // 0x8033C248: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033C24C: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x8033C250: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033C254: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C258: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8033C25C: nop

    // 0x8033C260: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033C264: swc1        $f18, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f18.u32l;
    // 0x8033C268: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8033C26C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033C270: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C274: nop

    // 0x8033C278: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
    // 0x8033C27C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C284: jal         0x8001BBDC
    // 0x8033C288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x8033C288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8033C28C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C290: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8033C294: addiu       $t6, $t6, -0x5720
    ctx->r14 = ADD32(ctx->r14, -0X5720);
    // 0x8033C298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C29C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8033C2A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C2A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033C2A8: jal         0x8001C0EC
    // 0x8033C2AC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x8033C2AC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_6:
    // 0x8033C2B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033C2BC: jal         0x80029EF8
    // 0x8033C2C0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x8033C2C0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
    // 0x8033C2C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2CC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C2D0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C2D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C2D8: jal         0x8001ABF4
    // 0x8033C2DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x8033C2DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8033C2E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2E4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033C2E8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033C2EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2F0: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033C2F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033C2F8: jal         0x8001ABF4
    // 0x8033C2FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x8033C2FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_8033C300:
    // 0x8033C300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C308: jal         0x8002A8B4
    // 0x8033C30C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_10;
    // 0x8033C30C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_10:
    // 0x8033C310: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C314: nop

    // 0x8033C318: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x8033C31C: nop

    // 0x8033C320: swc1        $f6, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f6.u32l;
    // 0x8033C324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C328: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C32C: jal         0x8001B4AC
    // 0x8033C330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_11;
    // 0x8033C330: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8033C334: beq         $v0, $zero, L_8033C354
    if (ctx->r2 == 0) {
        // 0x8033C338: nop
    
            goto L_8033C354;
    }
    // 0x8033C338: nop

    // 0x8033C33C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C340: addiu       $t7, $zero, 0x1A
    ctx->r15 = ADD32(0, 0X1A);
    // 0x8033C344: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8033C348: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C34C: nop

    // 0x8033C350: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_8033C354:
    // 0x8033C354: b           L_8033C35C
    // 0x8033C358: nop

        goto L_8033C35C;
    // 0x8033C358: nop

L_8033C35C:
    // 0x8033C35C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C360: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033C364: jr          $ra
    // 0x8033C368: nop

    return;
    // 0x8033C368: nop

;}
RECOMP_FUNC void func_80335B50_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335B50: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80335B54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80335B58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335B5C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335B60: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335B64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335B68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335B70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335B74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335B78: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335B7C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335B80: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x80335B84: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335B88: nop

    // 0x80335B8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335B90: nop

    // 0x80335B94: bne         $t1, $zero, L_80335BEC
    if (ctx->r9 != 0) {
        // 0x80335B98: nop
    
            goto L_80335BEC;
    }
    // 0x80335B98: nop

    // 0x80335B9C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80335BA0: nop

    // 0x80335BA4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335BA8: nop

    // 0x80335BAC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335BB0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335BB4: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80335BB8: nop

    // 0x80335BBC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x80335BC0: nop

    // 0x80335BC4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x80335BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335BCC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335BD0: addiu       $t7, $t7, -0x577C
    ctx->r15 = ADD32(ctx->r15, -0X577C);
    // 0x80335BD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335BD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335BDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80335BE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80335BE4: jal         0x8001C0EC
    // 0x80335BE8: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335BE8: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
L_80335BEC:
    // 0x80335BEC: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80335BF0: nop

    // 0x80335BF4: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x80335BF8: nop

    // 0x80335BFC: bne         $t9, $zero, L_80335C34
    if (ctx->r25 != 0) {
        // 0x80335C00: nop
    
            goto L_80335C34;
    }
    // 0x80335C00: nop

    // 0x80335C04: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80335C08: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80335C0C: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x80335C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335C1C: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x80335C20: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80335C24: jal         0x800175F0
    // 0x80335C28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80335C28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80335C2C: b           L_80335C4C
    // 0x80335C30: nop

        goto L_80335C4C;
    // 0x80335C30: nop

L_80335C34:
    // 0x80335C34: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80335C38: nop

    // 0x80335C3C: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x80335C40: nop

    // 0x80335C44: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80335C48: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_80335C4C:
    // 0x80335C4C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80335C50: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80335C54: lh          $t5, 0x134A($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X134A);
    // 0x80335C58: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80335C5C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80335C60: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335C64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335C68: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80335C6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335C70: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C74: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335C78: nop

    // 0x80335C7C: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x80335C80: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335C84: nop

    // 0x80335C88: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80335C8C: nop

    // 0x80335C90: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x80335C94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335C9C: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80335CA0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80335CA4: jal         0x8033605C
    // 0x80335CA8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_8033605C_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80335CA8: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80335CAC: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x80335CB0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80335CB4: lwc1        $f12, 0xD4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x80335CB8: lwc1        $f14, 0xD8($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x80335CBC: lw          $a2, 0xDC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XDC);
    // 0x80335CC0: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80335CC4: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80335CC8: addiu       $t4, $sp, 0x3C
    ctx->r12 = ADD32(ctx->r29, 0X3C);
    // 0x80335CCC: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x80335CD0: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x80335CD4: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80335CD8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80335CDC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80335CE0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80335CE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80335CE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80335CEC: jal         0x800293B8
    // 0x80335CF0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800293B8(rdram, ctx);
        goto after_3;
    // 0x80335CF0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80335CF4: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80335CF8: nop

    // 0x80335CFC: sw          $v0, 0xC4($t7)
    MEM_W(0XC4, ctx->r15) = ctx->r2;
    // 0x80335D00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D08: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80335D0C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80335D10: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80335D14: jal         0x803364D4
    // 0x80335D18: nop

    func_803364D4_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x80335D18: nop

    after_4:
    // 0x80335D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D24: jal         0x8001B4AC
    // 0x80335D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80335D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80335D2C: beq         $v0, $zero, L_80335D54
    if (ctx->r2 == 0) {
        // 0x80335D30: nop
    
            goto L_80335D54;
    }
    // 0x80335D30: nop

    // 0x80335D34: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x80335D38: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80335D3C: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80335D40: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80335D44: nop

    // 0x80335D48: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x80335D4C: b           L_80335D74
    // 0x80335D50: nop

        goto L_80335D74;
    // 0x80335D50: nop

L_80335D54:
    // 0x80335D54: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335D58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335D5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335D60: lw          $a1, 0xC4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0XC4);
    // 0x80335D64: jal         0x80336214
    // 0x80335D68: nop

    func_80336214_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80335D68: nop

    after_6:
    // 0x80335D6C: b           L_80335D74
    // 0x80335D70: nop

        goto L_80335D74;
    // 0x80335D70: nop

L_80335D74:
    // 0x80335D74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80335D78: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80335D7C: jr          $ra
    // 0x80335D80: nop

    return;
    // 0x80335D80: nop

;}
RECOMP_FUNC void func_80339618_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339618: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033961C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339620: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339624: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339628: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033962C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339630: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339634: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033963C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339640: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339644: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339648: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033964C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80339650: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80339654: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80339658: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033965C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80339660: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80339664: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339668: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033966C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339670: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80339674: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80339678: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033967C: nop

    // 0x80339680: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339684: nop

    // 0x80339688: bne         $t6, $zero, L_80339758
    if (ctx->r14 != 0) {
        // 0x8033968C: nop
    
            goto L_80339758;
    }
    // 0x8033968C: nop

    // 0x80339690: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339694: nop

    // 0x80339698: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033969C: nop

    // 0x803396A0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803396A4: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x803396A8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803396AC: nop

    // 0x803396B0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x803396B4: nop

    // 0x803396B8: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x803396BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803396C0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803396C4: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x803396C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803396CC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803396D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803396D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x803396D8: jal         0x8001C0EC
    // 0x803396DC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803396DC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x803396E0: jal         0x80014E80
    // 0x803396E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x803396E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x803396E8: bne         $v0, $zero, L_80339718
    if (ctx->r2 != 0) {
        // 0x803396EC: nop
    
            goto L_80339718;
    }
    // 0x803396EC: nop

    // 0x803396F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803396F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803396F8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803396FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339700: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80339704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339708: jal         0x8001ABF4
    // 0x8033970C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033970C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80339710: b           L_80339738
    // 0x80339714: nop

        goto L_80339738;
    // 0x80339714: nop

L_80339718:
    // 0x80339718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033971C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339720: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339724: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339728: addiu       $a3, $a3, 0x150
    ctx->r7 = ADD32(ctx->r7, 0X150);
    // 0x8033972C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339730: jal         0x8001ABF4
    // 0x80339734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80339734: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_80339738:
    // 0x80339738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033973C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339740: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x80339744: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339748: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8033974C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80339750: jal         0x8001ABF4
    // 0x80339754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80339754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80339758:
    // 0x80339758: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033975C: nop

    // 0x80339760: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x80339764: nop

    // 0x80339768: bne         $t4, $zero, L_803397A8
    if (ctx->r12 != 0) {
        // 0x8033976C: nop
    
            goto L_803397A8;
    }
    // 0x8033976C: nop

    // 0x80339770: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339774: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x80339778: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033977C: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80339780: jal         0x80015538
    // 0x80339784: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80339784: nop

    after_5:
    // 0x80339788: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033978C: nop

    // 0x80339790: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80339794: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339798: nop

    // 0x8033979C: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803397A0: b           L_803397CC
    // 0x803397A4: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
        goto L_803397CC;
    // 0x803397A4: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
L_803397A8:
    // 0x803397A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803397AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803397B0: jal         0x8002A8B4
    // 0x803397B4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x803397B4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x803397B8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803397BC: nop

    // 0x803397C0: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x803397C4: nop

    // 0x803397C8: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_803397CC:
    // 0x803397CC: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x803397D0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803397D4: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803397D8: nop

    // 0x803397DC: swc1        $f8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f8.u32l;
    // 0x803397E0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x803397E4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803397E8: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x803397EC: nop

    // 0x803397F0: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x803397F4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803397F8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803397FC: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80339800: nop

    // 0x80339804: swc1        $f16, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f16.u32l;
    // 0x80339808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033980C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339810: jal         0x8001B4AC
    // 0x80339814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x80339814: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80339818: beq         $v0, $zero, L_80339880
    if (ctx->r2 == 0) {
        // 0x8033981C: nop
    
            goto L_80339880;
    }
    // 0x8033981C: nop

    // 0x80339820: jal         0x80014E80
    // 0x80339824: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x80339824: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x80339828: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033982C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339830: nop

    // 0x80339834: bne         $t5, $zero, L_80339854
    if (ctx->r13 != 0) {
        // 0x80339838: nop
    
            goto L_80339854;
    }
    // 0x80339838: nop

    // 0x8033983C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339840: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80339844: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80339848: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033984C: b           L_80339880
    // 0x80339850: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_80339880;
    // 0x80339850: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80339854:
    // 0x80339854: jal         0x80014E80
    // 0x80339858: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x80339858: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x8033985C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339860: nop

    // 0x80339864: sh          $v0, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r2;
    // 0x80339868: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033986C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80339870: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x80339874: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80339878: nop

    // 0x8033987C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80339880:
    // 0x80339880: b           L_80339888
    // 0x80339884: nop

        goto L_80339888;
    // 0x80339884: nop

L_80339888:
    // 0x80339888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033988C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80339890: jr          $ra
    // 0x80339894: nop

    return;
    // 0x80339894: nop

;}
RECOMP_FUNC void func_8033CC08_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CC08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033CC0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CC10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CC14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CC18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CC1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CC20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CC24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CC28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CC2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CC30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CC34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CC38: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033CC3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CC40: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033CC44: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033CC48: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033CC4C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033CC50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CC54: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033CC58: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CC5C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033CC60: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033CC64: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033CC68: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CC6C: nop

    // 0x8033CC70: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033CC74: nop

    // 0x8033CC78: bne         $t6, $zero, L_8033CD0C
    if (ctx->r14 != 0) {
        // 0x8033CC7C: nop
    
            goto L_8033CD0C;
    }
    // 0x8033CC7C: nop

    // 0x8033CC80: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CC84: nop

    // 0x8033CC88: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033CC8C: nop

    // 0x8033CC90: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033CC94: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033CC98: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CC9C: nop

    // 0x8033CCA0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033CCA4: nop

    // 0x8033CCA8: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033CCAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CCB0: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033CCB4: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033CCB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CCBC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033CCC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CCC4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x8033CCC8: jal         0x8001C0EC
    // 0x8033CCCC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CCCC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033CCD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CCD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CCD8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CCDC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CCE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CCE4: jal         0x8001ABF4
    // 0x8033CCE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033CCE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033CCEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CCF0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CCF4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CCF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CCFC: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033CD00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033CD04: jal         0x8001ABF4
    // 0x8033CD08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033CD08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033CD0C:
    // 0x8033CD0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CD10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CD14: jal         0x8002A8B4
    // 0x8033CD18: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033CD18: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033CD1C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CD20: nop

    // 0x8033CD24: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033CD28: nop

    // 0x8033CD2C: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033CD30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CD34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CD38: jal         0x8001B4AC
    // 0x8033CD3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033CD3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033CD40: beq         $v0, $zero, L_8033CD60
    if (ctx->r2 == 0) {
        // 0x8033CD44: nop
    
            goto L_8033CD60;
    }
    // 0x8033CD44: nop

    // 0x8033CD48: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CD4C: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x8033CD50: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033CD54: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CD58: nop

    // 0x8033CD5C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033CD60:
    // 0x8033CD60: b           L_8033CD68
    // 0x8033CD64: nop

        goto L_8033CD68;
    // 0x8033CD64: nop

L_8033CD68:
    // 0x8033CD68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CD6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033CD70: jr          $ra
    // 0x8033CD74: nop

    return;
    // 0x8033CD74: nop

;}
RECOMP_FUNC void func_803364D4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803364D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803364D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803364DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x803364E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x803364E4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x803364E8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x803364EC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803364F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803364F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803364F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803364FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336500: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336504: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336508: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033650C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80336510: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80336514: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336518: nop

    // 0x8033651C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80336520: nop

    // 0x80336524: bne         $t1, $zero, L_80336634
    if (ctx->r9 != 0) {
        // 0x80336528: nop
    
            goto L_80336634;
    }
    // 0x80336528: nop

    // 0x8033652C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336530: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80336534: lw          $t3, 0xC4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC4);
    // 0x80336538: nop

    // 0x8033653C: beq         $t3, $at, L_8033662C
    if (ctx->r11 == ctx->r1) {
        // 0x80336540: nop
    
            goto L_8033662C;
    }
    // 0x80336540: nop

    // 0x80336544: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80336548: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033654C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336550: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80336554: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x80336558: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8033655C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80336560: addiu       $a1, $a1, -0x838
    ctx->r5 = ADD32(ctx->r5, -0X838);
    // 0x80336564: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80336568: jal         0x80027464
    // 0x8033656C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033656C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80336570: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80336574: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336578: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8033657C: jal         0x80026F10
    // 0x80336580: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80336580: nop

    after_1:
    // 0x80336584: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336588: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033658C: addiu       $a3, $a3, -0x57D8
    ctx->r7 = ADD32(ctx->r7, -0X57D8);
    // 0x80336590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336594: jal         0x8001ABF4
    // 0x80336598: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80336598: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x8033659C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803365A0: nop

    // 0x803365A4: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x803365A8: nop

    // 0x803365AC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803365B0: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x803365B4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x803365B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803365BC: nop

    // 0x803365C0: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x803365C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803365C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803365CC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803365D0: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803365D4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803365D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803365DC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x803365E0: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803365E4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803365E8: addiu       $a1, $a1, -0x850
    ctx->r5 = ADD32(ctx->r5, -0X850);
    // 0x803365EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803365F0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803365F4: jal         0x80027464
    // 0x803365F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x803365F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x803365FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80336600: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80336608: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033660C: jal         0x80019448
    // 0x80336610: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_4;
    // 0x80336610: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x80336614: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80336618: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033661C: addiu       $a3, $a3, -0x5A30
    ctx->r7 = ADD32(ctx->r7, -0X5A30);
    // 0x80336620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336624: jal         0x8001ABF4
    // 0x80336628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x80336628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_8033662C:
    // 0x8033662C: b           L_8033670C
    // 0x80336630: nop

        goto L_8033670C;
    // 0x80336630: nop

L_80336634:
    // 0x80336634: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336638: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033663C: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x80336640: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336644: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80336648: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033664C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80336650: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80336654: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80336658: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033665C: swc1        $f6, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f6.u32l;
    // 0x80336660: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80336664: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80336668: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x8033666C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80336670: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80336674: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80336678: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033667C: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80336680: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80336684: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80336688: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x8033668C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336690: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80336694: lh          $t5, 0xAA($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XAA);
    // 0x80336698: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033669C: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x803366A0: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803366A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803366A8: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x803366AC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803366B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803366B4: swc1        $f10, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f10.u32l;
    // 0x803366B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803366BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803366C0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x803366C4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x803366C8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x803366CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803366D0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x803366D4: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x803366D8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x803366DC: addiu       $a1, $a1, -0x850
    ctx->r5 = ADD32(ctx->r5, -0X850);
    // 0x803366E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803366E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803366E8: jal         0x80027464
    // 0x803366EC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x803366EC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x803366F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x803366F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803366F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803366FC: addiu       $a3, $a3, -0x5A30
    ctx->r7 = ADD32(ctx->r7, -0X5A30);
    // 0x80336700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336704: jal         0x8001ABF4
    // 0x80336708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x80336708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_8033670C:
    // 0x8033670C: b           L_80336714
    // 0x80336710: nop

        goto L_80336714;
    // 0x80336710: nop

L_80336714:
    // 0x80336714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336718: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033671C: jr          $ra
    // 0x80336720: nop

    return;
    // 0x80336720: nop

;}
RECOMP_FUNC void func_80335F80_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335F80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335F84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335F88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335F8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335F90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335F94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335F98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335FA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335FAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335FB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335FB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335FB8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335FC0: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x80335FC4: nop

    // 0x80335FC8: beq         $s0, $at, L_80335FFC
    if (ctx->r16 == ctx->r1) {
        // 0x80335FCC: nop
    
            goto L_80335FFC;
    }
    // 0x80335FCC: nop

    // 0x80335FD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335FD4: beq         $s0, $at, L_8033600C
    if (ctx->r16 == ctx->r1) {
        // 0x80335FD8: nop
    
            goto L_8033600C;
    }
    // 0x80335FD8: nop

    // 0x80335FDC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335FE0: beq         $s0, $at, L_8033601C
    if (ctx->r16 == ctx->r1) {
        // 0x80335FE4: nop
    
            goto L_8033601C;
    }
    // 0x80335FE4: nop

    // 0x80335FE8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80335FEC: beq         $s0, $at, L_8033602C
    if (ctx->r16 == ctx->r1) {
        // 0x80335FF0: nop
    
            goto L_8033602C;
    }
    // 0x80335FF0: nop

    // 0x80335FF4: b           L_8033603C
    // 0x80335FF8: nop

        goto L_8033603C;
    // 0x80335FF8: nop

L_80335FFC:
    // 0x80335FFC: jal         0x80335660
    // 0x80336000: nop

    func_80335660_unk_bin_14(rdram, ctx);
        goto after_0;
    // 0x80336000: nop

    after_0:
    // 0x80336004: b           L_80336044
    // 0x80336008: nop

        goto L_80336044;
    // 0x80336008: nop

L_8033600C:
    // 0x8033600C: jal         0x8033591C
    // 0x80336010: nop

    func_8033591C_unk_bin_14(rdram, ctx);
        goto after_1;
    // 0x80336010: nop

    after_1:
    // 0x80336014: b           L_80336044
    // 0x80336018: nop

        goto L_80336044;
    // 0x80336018: nop

L_8033601C:
    // 0x8033601C: jal         0x80335B50
    // 0x80336020: nop

    func_80335B50_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80336020: nop

    after_2:
    // 0x80336024: b           L_80336044
    // 0x80336028: nop

        goto L_80336044;
    // 0x80336028: nop

L_8033602C:
    // 0x8033602C: jal         0x80335D84
    // 0x80336030: nop

    func_80335D84_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x80336030: nop

    after_3:
    // 0x80336034: b           L_80336044
    // 0x80336038: nop

        goto L_80336044;
    // 0x80336038: nop

L_8033603C:
    // 0x8033603C: b           L_80336044
    // 0x80336040: nop

        goto L_80336044;
    // 0x80336040: nop

L_80336044:
    // 0x80336044: b           L_8033604C
    // 0x80336048: nop

        goto L_8033604C;
    // 0x80336048: nop

L_8033604C:
    // 0x8033604C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80336054: jr          $ra
    // 0x80336058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336058: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033605C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033605C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80336060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336064: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80336068: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8033606C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80336070: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80336074: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80336078: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8033607C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80336080: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336084: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336088: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033608C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336090: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336094: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336098: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033609C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803360A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803360A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803360A8: nop

    // 0x803360AC: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x803360B0: nop

    // 0x803360B4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803360B8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803360BC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803360C0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x803360C4: nop

    // 0x803360C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803360CC: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
    // 0x803360D0: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x803360D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803360D8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803360DC: nop

    // 0x803360E0: swc1        $f8, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f8.u32l;
    // 0x803360E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803360E8: nop

    // 0x803360EC: lwc1        $f10, 0x1C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x803360F0: nop

    // 0x803360F4: swc1        $f10, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f10.u32l;
    // 0x803360F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803360FC: jal         0x80029D8C
    // 0x80336100: nop

    func_80029D8C(rdram, ctx);
        goto after_0;
    // 0x80336100: nop

    after_0:
    // 0x80336104: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336108: nop

    // 0x8033610C: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80336110: lwc1        $f18, 0x24($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X24);
    // 0x80336114: nop

    // 0x80336118: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033611C: swc1        $f4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f4.u32l;
    // 0x80336120: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336124: nop

    // 0x80336128: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8033612C: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80336130: nop

    // 0x80336134: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80336138: swc1        $f10, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = ctx->f10.u32l;
    // 0x8033613C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336140: nop

    // 0x80336144: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80336148: lwc1        $f18, 0x2C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033614C: nop

    // 0x80336150: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80336154: swc1        $f4, 0xDC($t7)
    MEM_W(0XDC, ctx->r15) = ctx->f4.u32l;
    // 0x80336158: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8033615C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80336160: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336164: nop

    // 0x80336168: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x8033616C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80336170: jal         0x80029D8C
    // 0x80336174: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x80336174: nop

    after_1:
    // 0x80336178: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033617C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80336180: lwc1        $f8, 0x24($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80336184: nop

    // 0x80336188: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x8033618C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80336190: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80336194: lwc1        $f10, 0x28($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80336198: nop

    // 0x8033619C: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x803361A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803361A4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803361A8: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x803361AC: nop

    // 0x803361B0: swc1        $f16, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f16.u32l;
    // 0x803361B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803361B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803361BC: nop

    // 0x803361C0: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x803361C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803361C8: nop

    // 0x803361CC: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803361D0: nop

    // 0x803361D4: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x803361D8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803361DC: nop

    // 0x803361E0: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803361E4: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x803361E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803361EC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803361F0: nop

    // 0x803361F4: swc1        $f4, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f4.u32l;
    // 0x803361F8: b           L_80336200
    // 0x803361FC: nop

        goto L_80336200;
    // 0x803361FC: nop

L_80336200:
    // 0x80336200: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336204: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80336208: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8033620C: jr          $ra
    // 0x80336210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80336210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803391B8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803391B8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803391BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803391C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803391C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803391C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803391CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803391D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803391D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803391D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803391DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803391E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803391E4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803391E8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803391EC: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803391F0: lwc1        $f4, 0x1288($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1288);
    // 0x803391F4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803391F8: nop

    // 0x803391FC: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x80339200: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80339204: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80339208: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x8033920C: b           L_80339214
    // 0x80339210: nop

        goto L_80339214;
    // 0x80339210: nop

L_80339214:
    // 0x80339214: jr          $ra
    // 0x80339218: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80339218: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80335388_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335388: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x8033538C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80335390: sw          $a2, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r6;
    // 0x80335394: sw          $a3, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r7;
    // 0x80335398: swc1        $f12, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f12.u32l;
    // 0x8033539C: swc1        $f14, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f14.u32l;
    // 0x803353A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803353A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803353A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803353AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803353B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803353B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803353C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803353C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803353C8: sw          $t9, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r25;
    // 0x803353CC: lw          $t0, 0x12C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X12C);
    // 0x803353D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803353D4: lw          $a1, 0x18($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X18);
    // 0x803353D8: addiu       $a0, $sp, 0xEC
    ctx->r4 = ADD32(ctx->r29, 0XEC);
    // 0x803353DC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x803353E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803353E4: jal         0x800372A0
    // 0x803353E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_0;
    // 0x803353E8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x803353EC: lw          $t1, 0x12C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X12C);
    // 0x803353F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803353F4: lw          $a1, 0x1C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X1C);
    // 0x803353F8: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x803353FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335400: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80335404: jal         0x800372A0
    // 0x80335408: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_1;
    // 0x80335408: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8033540C: lw          $t2, 0x12C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X12C);
    // 0x80335410: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80335414: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335418: lw          $a1, 0x20($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X20);
    // 0x8033541C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80335420: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335424: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80335428: jal         0x800372A0
    // 0x8033542C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_2;
    // 0x8033542C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80335430: addiu       $t3, $sp, 0xAC
    ctx->r11 = ADD32(ctx->r29, 0XAC);
    // 0x80335434: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80335438: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8033543C: jal         0x80036400
    // 0x80335440: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    guMtxCatF(rdram, ctx);
        goto after_3;
    // 0x80335440: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_3:
    // 0x80335444: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x80335448: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x8033544C: jal         0x80036400
    // 0x80335450: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    guMtxCatF(rdram, ctx);
        goto after_4;
    // 0x80335450: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80335454: lw          $t4, 0x13C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X13C);
    // 0x80335458: lw          $t5, 0x140($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X140);
    // 0x8033545C: lw          $t6, 0x144($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X144);
    // 0x80335460: lw          $a1, 0x130($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X130);
    // 0x80335464: lw          $a2, 0x134($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X134);
    // 0x80335468: lw          $a3, 0x138($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X138);
    // 0x8033546C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80335470: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80335474: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80335478: jal         0x80036360
    // 0x8033547C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    guMtxXFMF(rdram, ctx);
        goto after_5;
    // 0x8033547C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_5:
    // 0x80335480: b           L_80335488
    // 0x80335484: nop

        goto L_80335488;
    // 0x80335484: nop

L_80335488:
    // 0x80335488: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033548C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x80335490: jr          $ra
    // 0x80335494: nop

    return;
    // 0x80335494: nop

;}
RECOMP_FUNC void func_80334854_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334854: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80334858: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033485C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80334860: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80334864: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334868: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033486C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334870: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334874: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334878: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033487C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334880: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334884: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80334888: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8033488C: nop

    // 0x80334890: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80334894: nop

    // 0x80334898: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8033489C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x803348A0: nop

    // 0x803348A4: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803348A8: nop

    // 0x803348AC: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x803348B0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x803348B4: nop

    // 0x803348B8: lh          $t5, 0xEC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEC);
    // 0x803348BC: nop

    // 0x803348C0: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x803348C4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x803348C8: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x803348CC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803348D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803348D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803348D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803348DC: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x803348E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803348E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803348E8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803348EC: swc1        $f4, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f4.u32l;
    // 0x803348F0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x803348F4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x803348F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803348FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334900: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334904: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334908: lwc1        $f6, 0x28($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X28);
    // 0x8033490C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334910: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334914: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334918: swc1        $f6, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f6.u32l;
    // 0x8033491C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80334920: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80334924: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334928: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033492C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334930: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80334934: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80334938: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033493C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334940: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80334944: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x80334948: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033494C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80334950: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334954: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334958: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033495C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334960: lwc1        $f10, 0x24($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X24);
    // 0x80334964: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334968: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033496C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80334970: swc1        $f10, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f10.u32l;
    // 0x80334974: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80334978: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8033497C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80334980: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80334984: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80334988: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033498C: lwc1        $f16, 0x28($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80334990: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80334994: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334998: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033499C: swc1        $f16, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f16.u32l;
    // 0x803349A0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803349A4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x803349A8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803349AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803349B0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803349B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803349B8: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x803349BC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803349C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803349C4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803349C8: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x803349CC: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x803349D0: addiu       $t5, $sp, 0x30
    ctx->r13 = ADD32(ctx->r29, 0X30);
    // 0x803349D4: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x803349D8: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x803349DC: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x803349E0: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x803349E4: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x803349E8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x803349EC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x803349F0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x803349F4: jal         0x80016C54
    // 0x803349F8: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    func_80016C54(rdram, ctx);
        goto after_0;
    // 0x803349F8: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x803349FC: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80334A00: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80334A04: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80334A08: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334A0C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80334A10: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80334A14: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80334A18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A1C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80334A20: swc1        $f4, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f4.u32l;
    // 0x80334A24: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80334A28: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80334A2C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80334A30: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334A34: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80334A38: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80334A3C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80334A40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A44: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80334A48: swc1        $f6, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f6.u32l;
    // 0x80334A4C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80334A50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334A54: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80334A58: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80334A5C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80334A60: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334A64: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80334A68: jal         0x800295C0
    // 0x80334A6C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x80334A6C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80334A70: beq         $v0, $zero, L_80334AA4
    if (ctx->r2 == 0) {
        // 0x80334A74: nop
    
            goto L_80334AA4;
    }
    // 0x80334A74: nop

    // 0x80334A78: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80334A7C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80334A80: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334A84: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334A88: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334A8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334A90: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334A94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334A98: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334A9C: b           L_80334ACC
    // 0x80334AA0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
        goto L_80334ACC;
    // 0x80334AA0: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
L_80334AA4:
    // 0x80334AA4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80334AA8: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80334AAC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334AB0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334AB4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334AB8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334ABC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334AC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334AC4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334AC8: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
L_80334ACC:
    // 0x80334ACC: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80334AD0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334AD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334AD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334ADC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334AE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334AE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334AE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334AEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334AF0: lui         $at, 0x432F
    ctx->r1 = S32(0X432F << 16);
    // 0x80334AF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334AF8: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80334AFC: nop

    // 0x80334B00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80334B04: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x80334B08: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80334B0C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80334B10: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80334B14: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334B18: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80334B1C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80334B20: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80334B24: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80334B28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334B2C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80334B30: swc1        $f10, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f10.u32l;
    // 0x80334B34: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80334B38: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80334B3C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80334B40: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334B44: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80334B48: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80334B4C: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80334B50: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80334B54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334B58: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80334B5C: swc1        $f16, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f16.u32l;
    // 0x80334B60: b           L_80334B68
    // 0x80334B64: nop

        goto L_80334B68;
    // 0x80334B64: nop

L_80334B68:
    // 0x80334B68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334B6C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80334B70: jr          $ra
    // 0x80334B74: nop

    return;
    // 0x80334B74: nop

;}
RECOMP_FUNC void func_80335660_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335660: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80335664: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80335668: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033566C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335670: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335674: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335678: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033567C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335680: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335684: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335688: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033568C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335690: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x80335694: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335698: nop

    // 0x8033569C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803356A0: nop

    // 0x803356A4: bne         $t1, $zero, L_80335784
    if (ctx->r9 != 0) {
        // 0x803356A8: nop
    
            goto L_80335784;
    }
    // 0x803356A8: nop

    // 0x803356AC: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x803356B0: nop

    // 0x803356B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803356B8: nop

    // 0x803356BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803356C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803356C4: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x803356C8: nop

    // 0x803356CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x803356D0: nop

    // 0x803356D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x803356D8: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x803356DC: nop

    // 0x803356E0: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x803356E4: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x803356E8: nop

    // 0x803356EC: sh          $zero, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = 0;
    // 0x803356F0: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x803356F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803356F8: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x803356FC: nop

    // 0x80335700: swc1        $f4, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f4.u32l;
    // 0x80335704: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80335708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033570C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80335710: nop

    // 0x80335714: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x80335718: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8033571C: nop

    // 0x80335720: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80335724: nop

    // 0x80335728: swc1        $f8, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f8.u32l;
    // 0x8033572C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80335730: nop

    // 0x80335734: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80335738: nop

    // 0x8033573C: swc1        $f10, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->f10.u32l;
    // 0x80335740: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x80335744: nop

    // 0x80335748: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033574C: nop

    // 0x80335750: swc1        $f16, 0xDC($t4)
    MEM_W(0XDC, ctx->r12) = ctx->f16.u32l;
    // 0x80335754: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335758: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033575C: addiu       $t2, $t2, -0x577C
    ctx->r10 = ADD32(ctx->r10, -0X577C);
    // 0x80335760: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335764: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80335768: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033576C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335770: jal         0x8001C0EC
    // 0x80335774: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80335774: addiu       $a3, $zero, 0xE5
    ctx->r7 = ADD32(0, 0XE5);
    after_0:
    // 0x80335778: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8033577C: nop

    // 0x80335780: sh          $zero, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = 0;
L_80335784:
    // 0x80335784: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80335788: nop

    // 0x8033578C: lh          $t7, 0xB6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XB6);
    // 0x80335790: nop

    // 0x80335794: bne         $t7, $zero, L_803357CC
    if (ctx->r15 != 0) {
        // 0x80335798: nop
    
            goto L_803357CC;
    }
    // 0x80335798: nop

    // 0x8033579C: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x803357A0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803357A4: sh          $t8, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r24;
    // 0x803357A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803357AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803357B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803357B4: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x803357B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x803357BC: jal         0x800175F0
    // 0x803357C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x803357C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x803357C4: b           L_803357E4
    // 0x803357C8: nop

        goto L_803357E4;
    // 0x803357C8: nop

L_803357CC:
    // 0x803357CC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x803357D0: nop

    // 0x803357D4: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x803357D8: nop

    // 0x803357DC: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x803357E0: sh          $t3, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r11;
L_803357E4:
    // 0x803357E4: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803357E8: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x803357EC: lh          $t2, 0x134A($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X134A);
    // 0x803357F0: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x803357F4: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x803357F8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x803357FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80335800: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x80335804: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80335808: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x8033580C: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80335810: nop

    // 0x80335814: swc1        $f18, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f18.u32l;
    // 0x80335818: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8033581C: nop

    // 0x80335820: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335824: nop

    // 0x80335828: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x8033582C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335834: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x80335838: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8033583C: jal         0x8033605C
    // 0x80335840: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_8033605C_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80335840: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_2:
    // 0x80335844: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80335848: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033584C: lwc1        $f12, 0xD4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0XD4);
    // 0x80335850: lwc1        $f14, 0xD8($t9)
    ctx->f14.u32l = MEM_W(ctx->r25, 0XD8);
    // 0x80335854: lw          $a2, 0xDC($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XDC);
    // 0x80335858: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033585C: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80335860: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x80335864: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x80335868: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x8033586C: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80335870: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80335874: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80335878: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8033587C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80335880: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80335884: jal         0x800293B8
    // 0x80335888: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800293B8(rdram, ctx);
        goto after_3;
    // 0x80335888: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8033588C: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x80335890: nop

    // 0x80335894: sw          $v0, 0xC4($t6)
    MEM_W(0XC4, ctx->r14) = ctx->r2;
    // 0x80335898: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033589C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803358A0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x803358A4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x803358A8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x803358AC: jal         0x803364D4
    // 0x803358B0: nop

    func_803364D4_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x803358B0: nop

    after_4:
    // 0x803358B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803358B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803358BC: jal         0x8001B4AC
    // 0x803358C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x803358C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x803358C4: beq         $v0, $zero, L_803358EC
    if (ctx->r2 == 0) {
        // 0x803358C8: nop
    
            goto L_803358EC;
    }
    // 0x803358C8: nop

    // 0x803358CC: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x803358D0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803358D4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x803358D8: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x803358DC: nop

    // 0x803358E0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x803358E4: b           L_8033590C
    // 0x803358E8: nop

        goto L_8033590C;
    // 0x803358E8: nop

L_803358EC:
    // 0x803358EC: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x803358F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803358F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803358F8: lw          $a1, 0xC4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0XC4);
    // 0x803358FC: jal         0x80336214
    // 0x80335900: nop

    func_80336214_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80335900: nop

    after_6:
    // 0x80335904: b           L_8033590C
    // 0x80335908: nop

        goto L_8033590C;
    // 0x80335908: nop

L_8033590C:
    // 0x8033590C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80335910: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80335914: jr          $ra
    // 0x80335918: nop

    return;
    // 0x80335918: nop

;}
RECOMP_FUNC void func_8033E3DC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033E3DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033E3E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033E3E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033E3E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033E3EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033E3F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033E3F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E3F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E3FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E400: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E404: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033E408: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033E40C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033E410: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E414: nop

    // 0x8033E418: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033E41C: nop

    // 0x8033E420: bne         $t1, $zero, L_8033E4B4
    if (ctx->r9 != 0) {
        // 0x8033E424: nop
    
            goto L_8033E4B4;
    }
    // 0x8033E424: nop

    // 0x8033E428: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033E42C: nop

    // 0x8033E430: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033E434: nop

    // 0x8033E438: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033E43C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033E440: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033E444: nop

    // 0x8033E448: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033E44C: nop

    // 0x8033E450: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033E454: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E458: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033E45C: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033E460: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E464: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033E468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E46C: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x8033E470: jal         0x8001C0EC
    // 0x8033E474: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033E474: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033E478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E47C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E480: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033E484: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033E488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E48C: jal         0x8001ABF4
    // 0x8033E490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033E490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033E494: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E498: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033E49C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033E4A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E4A4: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033E4A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033E4AC: jal         0x8001ABF4
    // 0x8033E4B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033E4B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033E4B4:
    // 0x8033E4B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E4B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E4BC: jal         0x8002A8B4
    // 0x8033E4C0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033E4C0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033E4C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033E4C8: nop

    // 0x8033E4CC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033E4D0: nop

    // 0x8033E4D4: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033E4D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E4DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E4E0: jal         0x8001B4AC
    // 0x8033E4E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033E4E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033E4E8: beq         $v0, $zero, L_8033E508
    if (ctx->r2 == 0) {
        // 0x8033E4EC: nop
    
            goto L_8033E508;
    }
    // 0x8033E4EC: nop

    // 0x8033E4F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E4F4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8033E4F8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033E4FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033E500: nop

    // 0x8033E504: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033E508:
    // 0x8033E508: b           L_8033E510
    // 0x8033E50C: nop

        goto L_8033E510;
    // 0x8033E50C: nop

L_8033E510:
    // 0x8033E510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033E514: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033E518: jr          $ra
    // 0x8033E51C: nop

    return;
    // 0x8033E51C: nop

;}
RECOMP_FUNC void func_8033EEB0_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033EEB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033EEB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033EEB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033EEBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033EEC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033EEC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033EEC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EECC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033EED0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033EED4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033EED8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033EEDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033EEE0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033EEE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033EEE8: nop

    // 0x8033EEEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033EEF0: nop

    // 0x8033EEF4: bne         $t1, $zero, L_8033EF68
    if (ctx->r9 != 0) {
        // 0x8033EEF8: nop
    
            goto L_8033EF68;
    }
    // 0x8033EEF8: nop

    // 0x8033EEFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033EF00: nop

    // 0x8033EF04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033EF08: nop

    // 0x8033EF0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033EF10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033EF14: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033EF18: nop

    // 0x8033EF1C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033EF20: nop

    // 0x8033EF24: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033EF28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EF2C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033EF30: addiu       $t7, $t7, -0x5448
    ctx->r15 = ADD32(ctx->r15, -0X5448);
    // 0x8033EF34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EF38: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033EF3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033EF40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8033EF44: jal         0x8001C0EC
    // 0x8033EF48: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033EF48: addiu       $a3, $zero, 0xE9
    ctx->r7 = ADD32(0, 0XE9);
    after_0:
    // 0x8033EF4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EF50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EF54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033EF58: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x8033EF5C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033EF60: jal         0x800175F0
    // 0x8033EF64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033EF64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8033EF68:
    // 0x8033EF68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EF6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EF70: jal         0x8002A8B4
    // 0x8033EF74: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x8033EF74: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_2:
    // 0x8033EF78: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033EF7C: nop

    // 0x8033EF80: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033EF84: nop

    // 0x8033EF88: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033EF8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033EF90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033EF94: jal         0x8001B4AC
    // 0x8033EF98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x8033EF98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033EF9C: beq         $v0, $zero, L_8033EFBC
    if (ctx->r2 == 0) {
        // 0x8033EFA0: nop
    
            goto L_8033EFBC;
    }
    // 0x8033EFA0: nop

    // 0x8033EFA4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033EFA8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8033EFAC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033EFB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033EFB4: nop

    // 0x8033EFB8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033EFBC:
    // 0x8033EFBC: b           L_8033EFC4
    // 0x8033EFC0: nop

        goto L_8033EFC4;
    // 0x8033EFC0: nop

L_8033EFC4:
    // 0x8033EFC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033EFC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033EFCC: jr          $ra
    // 0x8033EFD0: nop

    return;
    // 0x8033EFD0: nop

;}
RECOMP_FUNC void func_803305A0_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803305A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803305A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803305A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803305AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803305B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803305B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803305B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803305C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803305C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803305C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803305CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803305D0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803305D4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803305D8: nop

    // 0x803305DC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803305E0: nop

    // 0x803305E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x803305E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803305EC: nop

    // 0x803305F0: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x803305F4: nop

    // 0x803305F8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x803305FC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330600: nop

    // 0x80330604: lh          $t5, 0xEC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEC);
    // 0x80330608: nop

    // 0x8033060C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80330610: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330614: nop

    // 0x80330618: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033061C: nop

    // 0x80330620: bne         $t7, $zero, L_80330668
    if (ctx->r15 != 0) {
        // 0x80330624: nop
    
            goto L_80330668;
    }
    // 0x80330624: nop

    // 0x80330628: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033062C: nop

    // 0x80330630: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80330634: nop

    // 0x80330638: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033063C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80330640: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80330644: nop

    // 0x80330648: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x8033064C: nop

    // 0x80330650: sh          $t2, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r10;
    // 0x80330654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033065C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330660: jal         0x80029EF8
    // 0x80330664: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x80330664: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
L_80330668:
    // 0x80330668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033066C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330670: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80330674: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80330678: jal         0x8002A0D0
    // 0x8033067C: lui         $a3, 0xC32F
    ctx->r7 = S32(0XC32F << 16);
    func_8002A0D0(rdram, ctx);
        goto after_1;
    // 0x8033067C: lui         $a3, 0xC32F
    ctx->r7 = S32(0XC32F << 16);
    after_1:
    // 0x80330680: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330684: bne         $v0, $at, L_80330764
    if (ctx->r2 != ctx->r1) {
        // 0x80330688: nop
    
            goto L_80330764;
    }
    // 0x80330688: nop

    // 0x8033068C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330690: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330694: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80330698: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033069C: nop

    // 0x803306A0: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x803306A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803306A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803306AC: nop

    // 0x803306B0: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
    // 0x803306B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803306B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306BC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803306C0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803306C4: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x803306C8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803306CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803306D0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x803306D4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803306D8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803306DC: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x803306E0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803306E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803306E8: lh          $t1, 0xA6($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XA6);
    // 0x803306EC: nop

    // 0x803306F0: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x803306F4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x803306F8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803306FC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80330700: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330704: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330708: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033070C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80330710: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330714: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80330718: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033071C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80330720: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80330724: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330728: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8033072C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330730: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330734: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
    // 0x80330738: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033073C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330740: lh          $t7, 0xA8($t0)
    ctx->r15 = MEM_H(ctx->r8, 0XA8);
    // 0x80330744: nop

    // 0x80330748: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033074C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330750: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330754: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330758: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033075C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330760: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330764:
    // 0x80330764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033076C: jal         0x80334854
    // 0x80330770: nop

    func_80334854_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80330770: nop

    after_2:
    // 0x80330774: b           L_8033077C
    // 0x80330778: nop

        goto L_8033077C;
    // 0x80330778: nop

L_8033077C:
    // 0x8033077C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330780: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80330784: jr          $ra
    // 0x80330788: nop

    return;
    // 0x80330788: nop

;}
RECOMP_FUNC void func_803350CC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803350CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803350D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803350D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x803350D8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x803350DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803350E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803350EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803350F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803350FC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80335100: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80335104: nop

    // 0x80335108: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033510C: nop

    // 0x80335110: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80335114: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80335118: nop

    // 0x8033511C: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80335120: nop

    // 0x80335124: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80335128: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033512C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335130: jal         0x8002A8B4
    // 0x80335134: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x80335134: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_0:
    // 0x80335138: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033513C: nop

    // 0x80335140: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80335144: nop

    // 0x80335148: swc1        $f4, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f4.u32l;
    // 0x8033514C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80335150: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80335154: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335158: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033515C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335164: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80335168: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033516C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80335170: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80335174: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x80335178: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033517C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80335180: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80335184: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335188: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033518C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80335190: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80335194: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80335198: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033519C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803351A0: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x803351A4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803351A8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803351AC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803351B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803351B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803351B8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803351BC: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803351C0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803351C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803351C8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803351CC: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x803351D0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803351D4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803351D8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803351DC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803351E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803351E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803351E8: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x803351EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803351F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803351F4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803351F8: swc1        $f16, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f16.u32l;
    // 0x803351FC: b           L_80335204
    // 0x80335200: nop

        goto L_80335204;
    // 0x80335200: nop

L_80335204:
    // 0x80335204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335208: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033520C: jr          $ra
    // 0x80335210: nop

    return;
    // 0x80335210: nop

;}
RECOMP_FUNC void func_8033B6D8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B6D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B6DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B6E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B6E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B6E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B6EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B6F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B6F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B6F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B6FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B700: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B704: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B708: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B70C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B710: nop

    // 0x8033B714: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B718: nop

    // 0x8033B71C: bne         $t1, $zero, L_8033B7B0
    if (ctx->r9 != 0) {
        // 0x8033B720: nop
    
            goto L_8033B7B0;
    }
    // 0x8033B720: nop

    // 0x8033B724: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B728: nop

    // 0x8033B72C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B730: nop

    // 0x8033B734: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B738: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B73C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B740: nop

    // 0x8033B744: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B748: nop

    // 0x8033B74C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B754: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B758: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033B75C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B760: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B768: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8033B76C: jal         0x8001C0EC
    // 0x8033B770: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B770: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033B774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B778: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B77C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B780: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B788: jal         0x8001ABF4
    // 0x8033B78C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033B78C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033B790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B794: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033B798: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033B79C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7A0: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033B7A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033B7A8: jal         0x8001ABF4
    // 0x8033B7AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033B7AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033B7B0:
    // 0x8033B7B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B7B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7B8: jal         0x8002A8B4
    // 0x8033B7BC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033B7BC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033B7C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B7C4: nop

    // 0x8033B7C8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033B7CC: nop

    // 0x8033B7D0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033B7D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B7D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7DC: jal         0x80029C40
    // 0x8033B7E0: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033B7E0: nop

    after_4:
    // 0x8033B7E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B7E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7EC: jal         0x8033E904
    // 0x8033B7F0: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033B7F0: nop

    after_5:
    // 0x8033B7F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B7F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7FC: jal         0x8001B4AC
    // 0x8033B800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x8033B800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x8033B804: beq         $v0, $zero, L_8033B9E0
    if (ctx->r2 == 0) {
        // 0x8033B808: nop
    
            goto L_8033B9E0;
    }
    // 0x8033B808: nop

    // 0x8033B80C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B814: jal         0x8002A2EC
    // 0x8033B818: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_7;
    // 0x8033B818: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_7:
    // 0x8033B81C: beq         $v0, $zero, L_8033B870
    if (ctx->r2 == 0) {
        // 0x8033B820: nop
    
            goto L_8033B870;
    }
    // 0x8033B820: nop

    // 0x8033B824: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033B828: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B82C: nop

    // 0x8033B830: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
    // 0x8033B834: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033B838: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B83C: nop

    // 0x8033B840: swc1        $f8, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f8.u32l;
    // 0x8033B844: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B848: nop

    // 0x8033B84C: lwc1        $f10, 0x2C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8033B850: nop

    // 0x8033B854: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
    // 0x8033B858: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B85C: addiu       $t3, $zero, 0x1B
    ctx->r11 = ADD32(0, 0X1B);
    // 0x8033B860: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033B864: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B868: b           L_8033B9E0
    // 0x8033B86C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_8033B9E0;
    // 0x8033B86C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8033B870:
    // 0x8033B870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B878: jal         0x8002A2EC
    // 0x8033B87C: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_8;
    // 0x8033B87C: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_8:
    // 0x8033B880: beq         $v0, $zero, L_8033B8D4
    if (ctx->r2 == 0) {
        // 0x8033B884: nop
    
            goto L_8033B8D4;
    }
    // 0x8033B884: nop

    // 0x8033B888: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033B88C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B890: nop

    // 0x8033B894: swc1        $f16, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f16.u32l;
    // 0x8033B898: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033B89C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B8A0: nop

    // 0x8033B8A4: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x8033B8A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B8AC: nop

    // 0x8033B8B0: lwc1        $f4, 0x2C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033B8B4: nop

    // 0x8033B8B8: swc1        $f4, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f4.u32l;
    // 0x8033B8BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B8C0: addiu       $t8, $zero, 0x29
    ctx->r24 = ADD32(0, 0X29);
    // 0x8033B8C4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033B8C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B8CC: b           L_8033B9E0
    // 0x8033B8D0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_8033B9E0;
    // 0x8033B8D0: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033B8D4:
    // 0x8033B8D4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033B8D8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033B8DC: jal         0x80338C88
    // 0x8033B8E0: nop

    func_80338C88_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x8033B8E0: nop

    after_9:
    // 0x8033B8E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B8E8: beq         $v0, $at, L_8033B90C
    if (ctx->r2 == ctx->r1) {
        // 0x8033B8EC: nop
    
            goto L_8033B90C;
    }
    // 0x8033B8EC: nop

    // 0x8033B8F0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x8033B8F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033B8F8: jal         0x80338DC8
    // 0x8033B8FC: nop

    func_80338DC8_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x8033B8FC: nop

    after_10:
    // 0x8033B900: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B904: bne         $v0, $at, L_8033B958
    if (ctx->r2 != ctx->r1) {
        // 0x8033B908: nop
    
            goto L_8033B958;
    }
    // 0x8033B908: nop

L_8033B90C:
    // 0x8033B90C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033B910: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B914: nop

    // 0x8033B918: swc1        $f6, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f6.u32l;
    // 0x8033B91C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033B920: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B924: nop

    // 0x8033B928: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x8033B92C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B930: nop

    // 0x8033B934: lwc1        $f10, 0x2C($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033B938: nop

    // 0x8033B93C: swc1        $f10, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f10.u32l;
    // 0x8033B940: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B944: addiu       $t2, $zero, 0x23
    ctx->r10 = ADD32(0, 0X23);
    // 0x8033B948: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033B94C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B950: b           L_8033B9E0
    // 0x8033B954: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_8033B9E0;
    // 0x8033B954: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033B958:
    // 0x8033B958: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B95C: nop

    // 0x8033B960: lh          $t8, 0xC0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC0);
    // 0x8033B964: nop

    // 0x8033B968: bne         $t8, $zero, L_8033B988
    if (ctx->r24 != 0) {
        // 0x8033B96C: nop
    
            goto L_8033B988;
    }
    // 0x8033B96C: nop

    // 0x8033B970: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B974: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x8033B978: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033B97C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B980: b           L_8033B9E0
    // 0x8033B984: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_8033B9E0;
    // 0x8033B984: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033B988:
    // 0x8033B988: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B98C: nop

    // 0x8033B990: sh          $zero, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = 0;
    // 0x8033B994: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033B998: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B99C: nop

    // 0x8033B9A0: swc1        $f16, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f16.u32l;
    // 0x8033B9A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033B9A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9AC: nop

    // 0x8033B9B0: swc1        $f18, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f18.u32l;
    // 0x8033B9B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9B8: nop

    // 0x8033B9BC: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033B9C0: nop

    // 0x8033B9C4: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
    // 0x8033B9C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9CC: addiu       $t5, $zero, 0x17
    ctx->r13 = ADD32(0, 0X17);
    // 0x8033B9D0: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x8033B9D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B9D8: nop

    // 0x8033B9DC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033B9E0:
    // 0x8033B9E0: b           L_8033B9E8
    // 0x8033B9E4: nop

        goto L_8033B9E8;
    // 0x8033B9E4: nop

L_8033B9E8:
    // 0x8033B9E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B9EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B9F0: jr          $ra
    // 0x8033B9F4: nop

    return;
    // 0x8033B9F4: nop

;}
RECOMP_FUNC void func_803316B0_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803316B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x803316B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803316B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803316BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803316C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803316C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803316C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803316D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803316D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803316D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803316DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803316E0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803316E4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803316E8: nop

    // 0x803316EC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x803316F0: nop

    // 0x803316F4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x803316F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803316FC: nop

    // 0x80331700: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80331704: nop

    // 0x80331708: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8033170C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331710: nop

    // 0x80331714: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80331718: nop

    // 0x8033171C: bne         $t5, $zero, L_80331968
    if (ctx->r13 != 0) {
        // 0x80331720: nop
    
            goto L_80331968;
    }
    // 0x80331720: nop

    // 0x80331724: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331728: nop

    // 0x8033172C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80331730: nop

    // 0x80331734: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80331738: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x8033173C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80331740: nop

    // 0x80331744: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80331748: nop

    // 0x8033174C: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80331750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331754: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331758: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x8033175C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331760: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331768: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8033176C: jal         0x8001C0EC
    // 0x80331770: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331770: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80331774: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80331778: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x8033177C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80331780: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80331784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331788: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8033178C: jal         0x8001C0EC
    // 0x80331790: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80331790: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x80331794: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80331798: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x8033179C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803317A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803317A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803317AC: jal         0x8001C0EC
    // 0x803317B0: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x803317B0: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x803317B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803317B8: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x803317BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803317C0: addiu       $a3, $a3, 0x8C
    ctx->r7 = ADD32(ctx->r7, 0X8C);
    // 0x803317C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803317C8: jal         0x8001ABF4
    // 0x803317CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803317CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x803317D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803317D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803317D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803317DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803317E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803317E8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803317EC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803317F0: lwc1        $f4, 0x4168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x803317F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803317F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803317FC: nop

    // 0x80331800: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80331804: nop

    // 0x80331808: bc1f        L_80331858
    if (!c1cs) {
        // 0x8033180C: nop
    
            goto L_80331858;
    }
    // 0x8033180C: nop

    // 0x80331810: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80331814: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331818: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033181C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331820: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331828: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033182C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331830: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331834: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331838: lwc1        $f10, 0x4168($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8033183C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331840: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331844: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331848: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033184C: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80331850: b           L_8033189C
    // 0x80331854: swc1        $f4, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f4.u32l;
        goto L_8033189C;
    // 0x80331854: swc1        $f4, 0xD4($t6)
    MEM_W(0XD4, ctx->r14) = ctx->f4.u32l;
L_80331858:
    // 0x80331858: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033185C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331860: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80331864: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80331868: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033186C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80331870: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331874: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331878: lwc1        $f6, 0x4168($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8033187C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80331880: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331884: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331888: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8033188C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331890: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331894: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80331898: swc1        $f18, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f18.u32l;
L_8033189C:
    // 0x8033189C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803318A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803318A4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803318A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803318AC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803318B0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803318B4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803318B8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803318BC: lwc1        $f4, 0x4170($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x803318C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803318C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803318C8: nop

    // 0x803318CC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x803318D0: nop

    // 0x803318D4: bc1f        L_80331924
    if (!c1cs) {
        // 0x803318D8: nop
    
            goto L_80331924;
    }
    // 0x803318D8: nop

    // 0x803318DC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803318E0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803318E4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803318E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803318EC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803318F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803318F4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803318F8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803318FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331900: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331904: lwc1        $f10, 0x4170($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x80331908: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033190C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80331910: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80331914: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331918: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8033191C: b           L_80331968
    // 0x80331920: swc1        $f4, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f4.u32l;
        goto L_80331968;
    // 0x80331920: swc1        $f4, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f4.u32l;
L_80331924:
    // 0x80331924: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80331928: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033192C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80331930: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80331934: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80331938: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x8033193C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80331940: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80331944: lwc1        $f6, 0x4170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x80331948: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8033194C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331950: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80331954: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80331958: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033195C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331960: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80331964: swc1        $f18, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->f18.u32l;
L_80331968:
    // 0x80331968: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033196C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331970: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80331974: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80331978: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033197C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80331980: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331984: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331988: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033198C: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x80331990: lwc1        $f14, 0xD4($t2)
    ctx->f14.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80331994: jal         0x80015538
    // 0x80331998: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80331998: nop

    after_4:
    // 0x8033199C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803319A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803319A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803319AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803319B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803319B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803319B8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803319BC: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
    // 0x803319C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803319C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803319C8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803319CC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803319D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803319D4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803319D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803319DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803319E4: lwc1        $f12, 0x4170($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4170);
    // 0x803319E8: lwc1        $f14, 0xD8($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0XD8);
    // 0x803319EC: jal         0x80015538
    // 0x803319F0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x803319F0: nop

    after_5:
    // 0x803319F4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803319F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803319FC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80331A00: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331A04: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331A08: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331A0C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331A10: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331A14: swc1        $f0, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f0.u32l;
    // 0x80331A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331A20: jal         0x8001B4AC
    // 0x80331A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80331A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80331A28: beq         $v0, $zero, L_80331A98
    if (ctx->r2 == 0) {
        // 0x80331A2C: nop
    
            goto L_80331A98;
    }
    // 0x80331A2C: nop

    // 0x80331A30: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A34: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x80331A38: sh          $t9, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r25;
    // 0x80331A3C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331A40: nop

    // 0x80331A44: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80331A48: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80331A4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331A50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331A54: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331A58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331A5C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331A60: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331A64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A68: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331A6C: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x80331A70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80331A74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80331A78: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80331A7C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331A80: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A84: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80331A88: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331A90: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80331A94: swc1        $f6, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f6.u32l;
L_80331A98:
    // 0x80331A98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331A9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AA0: jal         0x80334B78
    // 0x80331AA4: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80331AA4: nop

    after_7:
    // 0x80331AA8: b           L_80331AB0
    // 0x80331AAC: nop

        goto L_80331AB0;
    // 0x80331AAC: nop

L_80331AB0:
    // 0x80331AB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331AB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331AB8: jr          $ra
    // 0x80331ABC: nop

    return;
    // 0x80331ABC: nop

;}
RECOMP_FUNC void func_80333D60_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333D60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80333D64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80333D68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333D6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333D70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333D74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333D78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333D80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333D84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333D88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333D8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333D90: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80333D94: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80333D98: nop

    // 0x80333D9C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80333DA0: nop

    // 0x80333DA4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80333DA8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DAC: nop

    // 0x80333DB0: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80333DB4: nop

    // 0x80333DB8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80333DBC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DC0: nop

    // 0x80333DC4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80333DC8: nop

    // 0x80333DCC: bne         $t5, $zero, L_80333E94
    if (ctx->r13 != 0) {
        // 0x80333DD0: nop
    
            goto L_80333E94;
    }
    // 0x80333DD0: nop

    // 0x80333DD4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DD8: nop

    // 0x80333DDC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80333DE0: nop

    // 0x80333DE4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80333DE8: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80333DEC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80333DF0: nop

    // 0x80333DF4: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80333DF8: nop

    // 0x80333DFC: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80333E00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E04: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80333E08: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80333E0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E10: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80333E14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E18: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80333E1C: jal         0x8001C0EC
    // 0x80333E20: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80333E20: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
    // 0x80333E24: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80333E28: addiu       $t2, $t2, -0x5A70
    ctx->r10 = ADD32(ctx->r10, -0X5A70);
    // 0x80333E2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80333E30: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80333E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E38: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80333E3C: jal         0x8001C0EC
    // 0x80333E40: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80333E40: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_1:
    // 0x80333E44: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80333E48: addiu       $t3, $t3, -0x5A10
    ctx->r11 = ADD32(ctx->r11, -0X5A10);
    // 0x80333E4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333E50: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80333E54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E58: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80333E5C: jal         0x8001C0EC
    // 0x80333E60: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80333E60: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_2:
    // 0x80333E64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E6C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80333E70: jal         0x80029EF8
    // 0x80333E74: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x80333E74: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x80333E78: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80333E7C: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x80333E80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80333E84: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80333E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80333E8C: jal         0x8001ABF4
    // 0x80333E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80333E90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80333E94:
    // 0x80333E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333E98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333E9C: jal         0x8001B4AC
    // 0x80333EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_5;
    // 0x80333EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80333EA4: beq         $v0, $zero, L_80333ED4
    if (ctx->r2 == 0) {
        // 0x80333EA8: nop
    
            goto L_80333ED4;
    }
    // 0x80333EA8: nop

    // 0x80333EAC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EB0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80333EB4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80333EB8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80333EBC: nop

    // 0x80333EC0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80333EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333ECC: jal         0x80335498
    // 0x80333ED0: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80333ED0: nop

    after_6:
L_80333ED4:
    // 0x80333ED4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333ED8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333EDC: jal         0x80334854
    // 0x80333EE0: nop

    func_80334854_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80333EE0: nop

    after_7:
    // 0x80333EE4: b           L_80333EEC
    // 0x80333EE8: nop

        goto L_80333EEC;
    // 0x80333EE8: nop

L_80333EEC:
    // 0x80333EEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333EF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80333EF4: jr          $ra
    // 0x80333EF8: nop

    return;
    // 0x80333EF8: nop

;}
RECOMP_FUNC void func_80337AF4_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337AF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80337AF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80337AFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80337B00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337B04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337B08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337B0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337B10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337B14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337B18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337B1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337B20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337B24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337B28: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80337B2C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337B30: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80337B34: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80337B38: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80337B3C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80337B40: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337B44: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80337B48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80337B4C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80337B50: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80337B54: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80337B58: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337B5C: nop

    // 0x80337B60: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80337B64: nop

    // 0x80337B68: bne         $t6, $zero, L_80337BBC
    if (ctx->r14 != 0) {
        // 0x80337B6C: nop
    
            goto L_80337BBC;
    }
    // 0x80337B6C: nop

    // 0x80337B70: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337B74: nop

    // 0x80337B78: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x80337B7C: nop

    // 0x80337B80: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80337B84: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80337B88: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337B8C: nop

    // 0x80337B90: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80337B94: nop

    // 0x80337B98: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x80337B9C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337BA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337BA4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337BA8: nop

    // 0x80337BAC: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x80337BB0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337BB4: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x80337BB8: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
L_80337BBC:
    // 0x80337BBC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337BC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337BC4: jal         0x80028FA0
    // 0x80337BC8: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80337BC8: nop

    after_0:
    // 0x80337BCC: beq         $v0, $zero, L_80337BE4
    if (ctx->r2 == 0) {
        // 0x80337BD0: nop
    
            goto L_80337BE4;
    }
    // 0x80337BD0: nop

    // 0x80337BD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337BD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337BDC: jal         0x80029B60
    // 0x80337BE0: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x80337BE0: nop

    after_1:
L_80337BE4:
    // 0x80337BE4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337BE8: nop

    // 0x80337BEC: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80337BF0: nop

    // 0x80337BF4: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80337BF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337C00: jal         0x8002A8B4
    // 0x80337C04: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80337C04: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_2:
    // 0x80337C08: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C0C: nop

    // 0x80337C10: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80337C14: nop

    // 0x80337C18: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x80337C1C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C20: nop

    // 0x80337C24: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80337C28: nop

    // 0x80337C2C: bne         $t9, $zero, L_80337C80
    if (ctx->r25 != 0) {
        // 0x80337C30: nop
    
            goto L_80337C80;
    }
    // 0x80337C30: nop

    // 0x80337C34: jal         0x80014E80
    // 0x80337C38: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80337C38: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_3:
    // 0x80337C3C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C40: nop

    // 0x80337C44: sh          $v0, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r2;
    // 0x80337C48: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C4C: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x80337C50: sh          $t1, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r9;
    // 0x80337C54: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C58: nop

    // 0x80337C5C: lh          $t3, 0xAC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAC);
    // 0x80337C60: nop

    // 0x80337C64: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80337C68: nop

    // 0x80337C6C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80337C70: swc1        $f16, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f16.u32l;
    // 0x80337C74: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C78: b           L_80337CB8
    // 0x80337C7C: sh          $zero, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = 0;
        goto L_80337CB8;
    // 0x80337C7C: sh          $zero, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = 0;
L_80337C80:
    // 0x80337C80: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337C84: nop

    // 0x80337C88: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x80337C8C: nop

    // 0x80337C90: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80337C94: nop

    // 0x80337C98: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80337C9C: swc1        $f4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f4.u32l;
    // 0x80337CA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CA4: nop

    // 0x80337CA8: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x80337CAC: nop

    // 0x80337CB0: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80337CB4: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
L_80337CB8:
    // 0x80337CB8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CBC: nop

    // 0x80337CC0: lh          $t0, 0xBA($t1)
    ctx->r8 = MEM_H(ctx->r9, 0XBA);
    // 0x80337CC4: nop

    // 0x80337CC8: bne         $t0, $zero, L_80337CE0
    if (ctx->r8 != 0) {
        // 0x80337CCC: nop
    
            goto L_80337CE0;
    }
    // 0x80337CCC: nop

    // 0x80337CD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337CD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337CD8: jal         0x80029C40
    // 0x80337CDC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80337CDC: nop

    after_4:
L_80337CE0:
    // 0x80337CE0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337CE4: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80337CE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337CEC: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80337CF0: nop

    // 0x80337CF4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80337CF8: nop

    // 0x80337CFC: bc1f        L_80337D24
    if (!c1cs) {
        // 0x80337D00: nop
    
            goto L_80337D24;
    }
    // 0x80337D00: nop

    // 0x80337D04: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D08: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80337D0C: sh          $t2, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = ctx->r10;
    // 0x80337D10: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337D14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80337D18: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D1C: b           L_80337D68
    // 0x80337D20: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
        goto L_80337D68;
    // 0x80337D20: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
L_80337D24:
    // 0x80337D24: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D28: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80337D2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337D30: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80337D34: nop

    // 0x80337D38: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80337D3C: nop

    // 0x80337D40: bc1f        L_80337D68
    if (!c1cs) {
        // 0x80337D44: nop
    
            goto L_80337D68;
    }
    // 0x80337D44: nop

    // 0x80337D48: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D4C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80337D50: sh          $t9, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = ctx->r25;
    // 0x80337D54: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80337D58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337D5C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D60: nop

    // 0x80337D64: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
L_80337D68:
    // 0x80337D68: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D6C: lui         $at, 0xC434
    ctx->r1 = S32(0XC434 << 16);
    // 0x80337D70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337D74: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80337D78: nop

    // 0x80337D7C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80337D80: nop

    // 0x80337D84: bc1f        L_80337DAC
    if (!c1cs) {
        // 0x80337D88: nop
    
            goto L_80337DAC;
    }
    // 0x80337D88: nop

    // 0x80337D8C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337D90: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80337D94: sh          $t0, 0xBA($t3)
    MEM_H(0XBA, ctx->r11) = ctx->r8;
    // 0x80337D98: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80337D9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80337DA0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DA4: b           L_80337DF0
    // 0x80337DA8: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
        goto L_80337DF0;
    // 0x80337DA8: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
L_80337DAC:
    // 0x80337DAC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DB0: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x80337DB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80337DB8: lwc1        $f16, 0x8($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80337DBC: nop

    // 0x80337DC0: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80337DC4: nop

    // 0x80337DC8: bc1f        L_80337DF0
    if (!c1cs) {
        // 0x80337DCC: nop
    
            goto L_80337DF0;
    }
    // 0x80337DCC: nop

    // 0x80337DD0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80337DD8: sh          $t6, 0xBA($t5)
    MEM_H(0XBA, ctx->r13) = ctx->r14;
    // 0x80337DDC: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80337DE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80337DE4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80337DE8: nop

    // 0x80337DEC: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
L_80337DF0:
    // 0x80337DF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337DF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80337DF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337DFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80337E04: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80337E08: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80337E0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80337E10: jal         0x80029018
    // 0x80337E14: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80337E14: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80337E18: beq         $v0, $zero, L_80337E3C
    if (ctx->r2 == 0) {
        // 0x80337E1C: nop
    
            goto L_80337E3C;
    }
    // 0x80337E1C: nop

    // 0x80337E20: jal         0x800297DC
    // 0x80337E24: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x80337E24: nop

    after_6:
    // 0x80337E28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337E2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E30: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80337E34: jal         0x80029824
    // 0x80337E38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x80337E38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_80337E3C:
    // 0x80337E3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80337E40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80337E44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337E48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337E4C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80337E50: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80337E54: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80337E58: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80337E5C: jal         0x800295C0
    // 0x80337E60: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x80337E60: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80337E64: beq         $v0, $zero, L_80337E7C
    if (ctx->r2 == 0) {
        // 0x80337E68: nop
    
            goto L_80337E7C;
    }
    // 0x80337E68: nop

    // 0x80337E6C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80337E70: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E74: b           L_80337E8C
    // 0x80337E78: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
        goto L_80337E8C;
    // 0x80337E78: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
L_80337E7C:
    // 0x80337E7C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80337E80: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E84: nop

    // 0x80337E88: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
L_80337E8C:
    // 0x80337E8C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80337E90: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80337E94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80337E98: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80337E9C: nop

    // 0x80337EA0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80337EA4: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x80337EA8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337EAC: nop

    // 0x80337EB0: lh          $t3, 0xAA($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XAA);
    // 0x80337EB4: nop

    // 0x80337EB8: bne         $t3, $zero, L_80337F28
    if (ctx->r11 != 0) {
        // 0x80337EBC: nop
    
            goto L_80337F28;
    }
    // 0x80337EBC: nop

    // 0x80337EC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337EC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337EC8: jal         0x8002A1FC
    // 0x80337ECC: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x80337ECC: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_9:
    // 0x80337ED0: beq         $v0, $zero, L_80337F14
    if (ctx->r2 == 0) {
        // 0x80337ED4: nop
    
            goto L_80337F14;
    }
    // 0x80337ED4: nop

    // 0x80337ED8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80337EDC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80337EE0: sh          $t2, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r10;
    // 0x80337EE4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80337EE8: nop

    // 0x80337EEC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80337EF0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80337EF4: nop

    // 0x80337EF8: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x80337EFC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80337F00: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80337F04: sh          $t9, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r25;
    // 0x80337F08: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80337F0C: b           L_80337F20
    // 0x80337F10: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_80337F20;
    // 0x80337F10: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80337F14:
    // 0x80337F14: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80337F18: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80337F1C: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
L_80337F20:
    // 0x80337F20: b           L_80337F40
    // 0x80337F24: nop

        goto L_80337F40;
    // 0x80337F24: nop

L_80337F28:
    // 0x80337F28: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80337F2C: nop

    // 0x80337F30: lh          $t2, 0xAA($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XAA);
    // 0x80337F34: nop

    // 0x80337F38: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80337F3C: sh          $t4, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r12;
L_80337F40:
    // 0x80337F40: b           L_80337F48
    // 0x80337F44: nop

        goto L_80337F48;
    // 0x80337F44: nop

L_80337F48:
    // 0x80337F48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80337F4C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80337F50: jr          $ra
    // 0x80337F54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80337F54: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80330F08_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80330F0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330F14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330F18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330F1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330F20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330F28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330F2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330F30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330F34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330F38: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80330F3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F40: nop

    // 0x80330F44: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x80330F48: nop

    // 0x80330F4C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80330F50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F54: nop

    // 0x80330F58: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330F5C: nop

    // 0x80330F60: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80330F64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F68: nop

    // 0x80330F6C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x80330F70: nop

    // 0x80330F74: bne         $t5, $zero, L_80330FCC
    if (ctx->r13 != 0) {
        // 0x80330F78: nop
    
            goto L_80330FCC;
    }
    // 0x80330F78: nop

    // 0x80330F7C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F80: nop

    // 0x80330F84: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80330F88: nop

    // 0x80330F8C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80330F90: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x80330F94: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80330F98: nop

    // 0x80330F9C: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80330FA0: nop

    // 0x80330FA4: sh          $t0, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r8;
    // 0x80330FA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FAC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80330FB0: addiu       $t1, $t1, -0x57BC
    ctx->r9 = ADD32(ctx->r9, -0X57BC);
    // 0x80330FB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FB8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330FBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330FC0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80330FC4: jal         0x8001C0EC
    // 0x80330FC8: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80330FC8: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_0:
L_80330FCC:
    // 0x80330FCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FD4: jal         0x80334F08
    // 0x80330FD8: nop

    func_80334F08_unk_bin_14(rdram, ctx);
        goto after_1;
    // 0x80330FD8: nop

    after_1:
    // 0x80330FDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FE4: jal         0x803350CC
    // 0x80330FE8: nop

    func_803350CC_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x80330FE8: nop

    after_2:
    // 0x80330FEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330FF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330FF4: jal         0x80334798
    // 0x80330FF8: nop

    func_80334798_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x80330FF8: nop

    after_3:
    // 0x80330FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331004: jal         0x8001B4AC
    // 0x80331008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x80331008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033100C: beq         $v0, $zero, L_80331058
    if (ctx->r2 == 0) {
        // 0x80331010: nop
    
            goto L_80331058;
    }
    // 0x80331010: nop

    // 0x80331014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033101C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331020: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80331024: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331028: jal         0x800175F0
    // 0x8033102C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x8033102C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80331030: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80331034: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80331038: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8033103C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80331040: nop

    // 0x80331044: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80331048: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033104C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331050: jal         0x80335498
    // 0x80331054: nop

    func_80335498_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x80331054: nop

    after_6:
L_80331058:
    // 0x80331058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033105C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331060: jal         0x80334B78
    // 0x80331064: nop

    func_80334B78_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x80331064: nop

    after_7:
    // 0x80331068: b           L_80331070
    // 0x8033106C: nop

        goto L_80331070;
    // 0x8033106C: nop

L_80331070:
    // 0x80331070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331074: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80331078: jr          $ra
    // 0x8033107C: nop

    return;
    // 0x8033107C: nop

;}
RECOMP_FUNC void func_80337380_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337380: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80337384: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337388: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033738C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337390: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337394: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337398: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033739C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803373A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803373A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803373A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803373AC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x803373B0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x803373B4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x803373B8: lwc1        $f4, 0x1288($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1288);
    // 0x803373BC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x803373C0: nop

    // 0x803373C4: swc1        $f4, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f4.u32l;
    // 0x803373C8: b           L_803373D0
    // 0x803373CC: nop

        goto L_803373D0;
    // 0x803373CC: nop

L_803373D0:
    // 0x803373D0: jr          $ra
    // 0x803373D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803373D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033E298_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033E298: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033E29C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033E2A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033E2A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033E2A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033E2AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033E2B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E2B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E2B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E2BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E2C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033E2C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033E2C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033E2CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E2D0: nop

    // 0x8033E2D4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033E2D8: nop

    // 0x8033E2DC: bne         $t1, $zero, L_8033E370
    if (ctx->r9 != 0) {
        // 0x8033E2E0: nop
    
            goto L_8033E370;
    }
    // 0x8033E2E0: nop

    // 0x8033E2E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033E2E8: nop

    // 0x8033E2EC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033E2F0: nop

    // 0x8033E2F4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033E2F8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033E2FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033E300: nop

    // 0x8033E304: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033E308: nop

    // 0x8033E30C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033E310: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E314: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033E318: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033E31C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E320: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033E324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E328: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x8033E32C: jal         0x8001C0EC
    // 0x8033E330: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033E330: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033E334: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E338: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E33C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033E340: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033E344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033E348: jal         0x8001ABF4
    // 0x8033E34C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033E34C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033E350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E354: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033E358: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033E35C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E360: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033E364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033E368: jal         0x8001ABF4
    // 0x8033E36C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033E36C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033E370:
    // 0x8033E370: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E378: jal         0x8002A8B4
    // 0x8033E37C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033E37C: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033E380: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033E384: nop

    // 0x8033E388: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033E38C: nop

    // 0x8033E390: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033E394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E39C: jal         0x8001B4AC
    // 0x8033E3A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033E3A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033E3A4: beq         $v0, $zero, L_8033E3C4
    if (ctx->r2 == 0) {
        // 0x8033E3A8: nop
    
            goto L_8033E3C4;
    }
    // 0x8033E3A8: nop

    // 0x8033E3AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E3B0: addiu       $t9, $zero, 0x2E
    ctx->r25 = ADD32(0, 0X2E);
    // 0x8033E3B4: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033E3B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033E3BC: nop

    // 0x8033E3C0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033E3C4:
    // 0x8033E3C4: b           L_8033E3CC
    // 0x8033E3C8: nop

        goto L_8033E3CC;
    // 0x8033E3C8: nop

L_8033E3CC:
    // 0x8033E3CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033E3D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033E3D4: jr          $ra
    // 0x8033E3D8: nop

    return;
    // 0x8033E3D8: nop

;}
RECOMP_FUNC void func_8033E520_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033E520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033E524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033E528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033E52C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033E530: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033E534: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033E538: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033E53C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E540: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E548: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E54C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033E550: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033E554: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033E558: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E55C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033E560: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x8033E564: nop

    // 0x8033E568: beq         $t1, $at, L_8033E5C8
    if (ctx->r9 == ctx->r1) {
        // 0x8033E56C: nop
    
            goto L_8033E5C8;
    }
    // 0x8033E56C: nop

    // 0x8033E570: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033E574: nop

    // 0x8033E578: lh          $t3, 0x108($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X108);
    // 0x8033E57C: nop

    // 0x8033E580: bne         $t3, $zero, L_8033E5A0
    if (ctx->r11 != 0) {
        // 0x8033E584: nop
    
            goto L_8033E5A0;
    }
    // 0x8033E584: nop

    // 0x8033E588: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E58C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E590: jal         0x8001BB34
    // 0x8033E594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033E594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033E598: b           L_8033E5C8
    // 0x8033E59C: nop

        goto L_8033E5C8;
    // 0x8033E59C: nop

L_8033E5A0:
    // 0x8033E5A0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033E5A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E5A8: lh          $s0, 0x108($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X108);
    // 0x8033E5AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E5B0: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x8033E5B4: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x8033E5B8: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033E5BC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8033E5C0: jal         0x8001BB34
    // 0x8033E5C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033E5C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_8033E5C8:
    // 0x8033E5C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033E5CC: nop

    // 0x8033E5D0: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x8033E5D4: nop

    // 0x8033E5D8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033E5DC: sltiu       $at, $t9, 0x2E
    ctx->r1 = ctx->r25 < 0X2E ? 1 : 0;
    // 0x8033E5E0: beq         $at, $zero, L_8033E8E4
    if (ctx->r1 == 0) {
        // 0x8033E5E4: nop
    
            goto L_8033E8E4;
    }
    // 0x8033E5E4: nop

    // 0x8033E5E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033E5EC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033E5F0: addu        $at, $at, $t9
    gpr jr_addend_8033E5FC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033E5F4: lw          $t9, -0x628($at)
    ctx->r25 = ADD32(ctx->r1, -0X628);
    // 0x8033E5F8: nop

    // 0x8033E5FC: jr          $t9
    // 0x8033E600: nop

    switch (jr_addend_8033E5FC >> 2) {
        case 0: goto L_8033E604; break;
        case 1: goto L_8033E614; break;
        case 2: goto L_8033E624; break;
        case 3: goto L_8033E634; break;
        case 4: goto L_8033E644; break;
        case 5: goto L_8033E654; break;
        case 6: goto L_8033E664; break;
        case 7: goto L_8033E674; break;
        case 8: goto L_8033E684; break;
        case 9: goto L_8033E694; break;
        case 10: goto L_8033E6A4; break;
        case 11: goto L_8033E6B4; break;
        case 12: goto L_8033E6C4; break;
        case 13: goto L_8033E6D4; break;
        case 14: goto L_8033E6E4; break;
        case 15: goto L_8033E6F4; break;
        case 16: goto L_8033E704; break;
        case 17: goto L_8033E714; break;
        case 18: goto L_8033E724; break;
        case 19: goto L_8033E734; break;
        case 20: goto L_8033E744; break;
        case 21: goto L_8033E754; break;
        case 22: goto L_8033E764; break;
        case 23: goto L_8033E774; break;
        case 24: goto L_8033E784; break;
        case 25: goto L_8033E794; break;
        case 26: goto L_8033E7A4; break;
        case 27: goto L_8033E7B4; break;
        case 28: goto L_8033E7C4; break;
        case 29: goto L_8033E7D4; break;
        case 30: goto L_8033E7E4; break;
        case 31: goto L_8033E7F4; break;
        case 32: goto L_8033E804; break;
        case 33: goto L_8033E814; break;
        case 34: goto L_8033E824; break;
        case 35: goto L_8033E834; break;
        case 36: goto L_8033E844; break;
        case 37: goto L_8033E854; break;
        case 38: goto L_8033E864; break;
        case 39: goto L_8033E874; break;
        case 40: goto L_8033E884; break;
        case 41: goto L_8033E894; break;
        case 42: goto L_8033E8A4; break;
        case 43: goto L_8033E8B4; break;
        case 44: goto L_8033E8C4; break;
        case 45: goto L_8033E8D4; break;
        default: switch_error(__func__, 0x8033E5FC, 0x8033F9D8);
    }
    // 0x8033E600: nop

L_8033E604:
    // 0x8033E604: jal         0x803391B8
    // 0x8033E608: nop

    func_803391B8_unk_bin_14(rdram, ctx);
        goto after_2;
    // 0x8033E608: nop

    after_2:
    // 0x8033E60C: b           L_8033E8EC
    // 0x8033E610: nop

        goto L_8033E8EC;
    // 0x8033E610: nop

L_8033E614:
    // 0x8033E614: jal         0x8033921C
    // 0x8033E618: nop

    func_8033921C_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x8033E618: nop

    after_3:
    // 0x8033E61C: b           L_8033E8EC
    // 0x8033E620: nop

        goto L_8033E8EC;
    // 0x8033E620: nop

L_8033E624:
    // 0x8033E624: jal         0x80339398
    // 0x8033E628: nop

    func_80339398_unk_bin_14(rdram, ctx);
        goto after_4;
    // 0x8033E628: nop

    after_4:
    // 0x8033E62C: b           L_8033E8EC
    // 0x8033E630: nop

        goto L_8033E8EC;
    // 0x8033E630: nop

L_8033E634:
    // 0x8033E634: jal         0x80339618
    // 0x8033E638: nop

    func_80339618_unk_bin_14(rdram, ctx);
        goto after_5;
    // 0x8033E638: nop

    after_5:
    // 0x8033E63C: b           L_8033E8EC
    // 0x8033E640: nop

        goto L_8033E8EC;
    // 0x8033E640: nop

L_8033E644:
    // 0x8033E644: jal         0x80339898
    // 0x8033E648: nop

    func_80339898_unk_bin_14(rdram, ctx);
        goto after_6;
    // 0x8033E648: nop

    after_6:
    // 0x8033E64C: b           L_8033E8EC
    // 0x8033E650: nop

        goto L_8033E8EC;
    // 0x8033E650: nop

L_8033E654:
    // 0x8033E654: jal         0x80339ADC
    // 0x8033E658: nop

    func_80339ADC_unk_bin_14(rdram, ctx);
        goto after_7;
    // 0x8033E658: nop

    after_7:
    // 0x8033E65C: b           L_8033E8EC
    // 0x8033E660: nop

        goto L_8033E8EC;
    // 0x8033E660: nop

L_8033E664:
    // 0x8033E664: jal         0x80339D18
    // 0x8033E668: nop

    func_80339D18_unk_bin_14(rdram, ctx);
        goto after_8;
    // 0x8033E668: nop

    after_8:
    // 0x8033E66C: b           L_8033E8EC
    // 0x8033E670: nop

        goto L_8033E8EC;
    // 0x8033E670: nop

L_8033E674:
    // 0x8033E674: jal         0x80339EB8
    // 0x8033E678: nop

    func_80339EB8_unk_bin_14(rdram, ctx);
        goto after_9;
    // 0x8033E678: nop

    after_9:
    // 0x8033E67C: b           L_8033E8EC
    // 0x8033E680: nop

        goto L_8033E8EC;
    // 0x8033E680: nop

L_8033E684:
    // 0x8033E684: jal         0x8033A06C
    // 0x8033E688: nop

    func_8033A06C_unk_bin_14(rdram, ctx);
        goto after_10;
    // 0x8033E688: nop

    after_10:
    // 0x8033E68C: b           L_8033E8EC
    // 0x8033E690: nop

        goto L_8033E8EC;
    // 0x8033E690: nop

L_8033E694:
    // 0x8033E694: jal         0x8033A1C4
    // 0x8033E698: nop

    func_8033A1C4_unk_bin_14(rdram, ctx);
        goto after_11;
    // 0x8033E698: nop

    after_11:
    // 0x8033E69C: b           L_8033E8EC
    // 0x8033E6A0: nop

        goto L_8033E8EC;
    // 0x8033E6A0: nop

L_8033E6A4:
    // 0x8033E6A4: jal         0x8033A390
    // 0x8033E6A8: nop

    func_8033A390_unk_bin_14(rdram, ctx);
        goto after_12;
    // 0x8033E6A8: nop

    after_12:
    // 0x8033E6AC: b           L_8033E8EC
    // 0x8033E6B0: nop

        goto L_8033E8EC;
    // 0x8033E6B0: nop

L_8033E6B4:
    // 0x8033E6B4: jal         0x8033A544
    // 0x8033E6B8: nop

    func_8033A544_unk_bin_14(rdram, ctx);
        goto after_13;
    // 0x8033E6B8: nop

    after_13:
    // 0x8033E6BC: b           L_8033E8EC
    // 0x8033E6C0: nop

        goto L_8033E8EC;
    // 0x8033E6C0: nop

L_8033E6C4:
    // 0x8033E6C4: jal         0x8033AA00
    // 0x8033E6C8: nop

    func_8033AA00_unk_bin_14(rdram, ctx);
        goto after_14;
    // 0x8033E6C8: nop

    after_14:
    // 0x8033E6CC: b           L_8033E8EC
    // 0x8033E6D0: nop

        goto L_8033E8EC;
    // 0x8033E6D0: nop

L_8033E6D4:
    // 0x8033E6D4: jal         0x8033ABAC
    // 0x8033E6D8: nop

    func_8033ABAC_unk_bin_14(rdram, ctx);
        goto after_15;
    // 0x8033E6D8: nop

    after_15:
    // 0x8033E6DC: b           L_8033E8EC
    // 0x8033E6E0: nop

        goto L_8033E8EC;
    // 0x8033E6E0: nop

L_8033E6E4:
    // 0x8033E6E4: jal         0x8033AD48
    // 0x8033E6E8: nop

    func_8033AD48_unk_bin_14(rdram, ctx);
        goto after_16;
    // 0x8033E6E8: nop

    after_16:
    // 0x8033E6EC: b           L_8033E8EC
    // 0x8033E6F0: nop

        goto L_8033E8EC;
    // 0x8033E6F0: nop

L_8033E6F4:
    // 0x8033E6F4: jal         0x8033AF54
    // 0x8033E6F8: nop

    func_8033AF54_unk_bin_14(rdram, ctx);
        goto after_17;
    // 0x8033E6F8: nop

    after_17:
    // 0x8033E6FC: b           L_8033E8EC
    // 0x8033E700: nop

        goto L_8033E8EC;
    // 0x8033E700: nop

L_8033E704:
    // 0x8033E704: jal         0x8033B27C
    // 0x8033E708: nop

    func_8033B27C_unk_bin_14(rdram, ctx);
        goto after_18;
    // 0x8033E708: nop

    after_18:
    // 0x8033E70C: b           L_8033E8EC
    // 0x8033E710: nop

        goto L_8033E8EC;
    // 0x8033E710: nop

L_8033E714:
    // 0x8033E714: jal         0x8033B410
    // 0x8033E718: nop

    func_8033B410_unk_bin_14(rdram, ctx);
        goto after_19;
    // 0x8033E718: nop

    after_19:
    // 0x8033E71C: b           L_8033E8EC
    // 0x8033E720: nop

        goto L_8033E8EC;
    // 0x8033E720: nop

L_8033E724:
    // 0x8033E724: jal         0x8033B574
    // 0x8033E728: nop

    func_8033B574_unk_bin_14(rdram, ctx);
        goto after_20;
    // 0x8033E728: nop

    after_20:
    // 0x8033E72C: b           L_8033E8EC
    // 0x8033E730: nop

        goto L_8033E8EC;
    // 0x8033E730: nop

L_8033E734:
    // 0x8033E734: jal         0x8033B6D8
    // 0x8033E738: nop

    func_8033B6D8_unk_bin_14(rdram, ctx);
        goto after_21;
    // 0x8033E738: nop

    after_21:
    // 0x8033E73C: b           L_8033E8EC
    // 0x8033E740: nop

        goto L_8033E8EC;
    // 0x8033E740: nop

L_8033E744:
    // 0x8033E744: jal         0x8033B9F8
    // 0x8033E748: nop

    func_8033B9F8_unk_bin_14(rdram, ctx);
        goto after_22;
    // 0x8033E748: nop

    after_22:
    // 0x8033E74C: b           L_8033E8EC
    // 0x8033E750: nop

        goto L_8033E8EC;
    // 0x8033E750: nop

L_8033E754:
    // 0x8033E754: jal         0x8033BB6C
    // 0x8033E758: nop

    func_8033BB6C_unk_bin_14(rdram, ctx);
        goto after_23;
    // 0x8033E758: nop

    after_23:
    // 0x8033E75C: b           L_8033E8EC
    // 0x8033E760: nop

        goto L_8033E8EC;
    // 0x8033E760: nop

L_8033E764:
    // 0x8033E764: jal         0x8033BC8C
    // 0x8033E768: nop

    func_8033BC8C_unk_bin_14(rdram, ctx);
        goto after_24;
    // 0x8033E768: nop

    after_24:
    // 0x8033E76C: b           L_8033E8EC
    // 0x8033E770: nop

        goto L_8033E8EC;
    // 0x8033E770: nop

L_8033E774:
    // 0x8033E774: jal         0x8033BDC8
    // 0x8033E778: nop

    func_8033BDC8_unk_bin_14(rdram, ctx);
        goto after_25;
    // 0x8033E778: nop

    after_25:
    // 0x8033E77C: b           L_8033E8EC
    // 0x8033E780: nop

        goto L_8033E8EC;
    // 0x8033E780: nop

L_8033E784:
    // 0x8033E784: jal         0x8033BF3C
    // 0x8033E788: nop

    func_8033BF3C_unk_bin_14(rdram, ctx);
        goto after_26;
    // 0x8033E788: nop

    after_26:
    // 0x8033E78C: b           L_8033E8EC
    // 0x8033E790: nop

        goto L_8033E8EC;
    // 0x8033E790: nop

L_8033E794:
    // 0x8033E794: jal         0x8033C36C
    // 0x8033E798: nop

    func_8033C36C_unk_bin_14(rdram, ctx);
        goto after_27;
    // 0x8033E798: nop

    after_27:
    // 0x8033E79C: b           L_8033E8EC
    // 0x8033E7A0: nop

        goto L_8033E8EC;
    // 0x8033E7A0: nop

L_8033E7A4:
    // 0x8033E7A4: jal         0x8033C5A4
    // 0x8033E7A8: nop

    func_8033C5A4_unk_bin_14(rdram, ctx);
        goto after_28;
    // 0x8033E7A8: nop

    after_28:
    // 0x8033E7AC: b           L_8033E8EC
    // 0x8033E7B0: nop

        goto L_8033E8EC;
    // 0x8033E7B0: nop

L_8033E7B4:
    // 0x8033E7B4: jal         0x8033C6E8
    // 0x8033E7B8: nop

    func_8033C6E8_unk_bin_14(rdram, ctx);
        goto after_29;
    // 0x8033E7B8: nop

    after_29:
    // 0x8033E7BC: b           L_8033E8EC
    // 0x8033E7C0: nop

        goto L_8033E8EC;
    // 0x8033E7C0: nop

L_8033E7C4:
    // 0x8033E7C4: jal         0x8033C928
    // 0x8033E7C8: nop

    func_8033C928_unk_bin_14(rdram, ctx);
        goto after_30;
    // 0x8033E7C8: nop

    after_30:
    // 0x8033E7CC: b           L_8033E8EC
    // 0x8033E7D0: nop

        goto L_8033E8EC;
    // 0x8033E7D0: nop

L_8033E7D4:
    // 0x8033E7D4: jal         0x8033CA98
    // 0x8033E7D8: nop

    func_8033CA98_unk_bin_14(rdram, ctx);
        goto after_31;
    // 0x8033E7D8: nop

    after_31:
    // 0x8033E7DC: b           L_8033E8EC
    // 0x8033E7E0: nop

        goto L_8033E8EC;
    // 0x8033E7E0: nop

L_8033E7E4:
    // 0x8033E7E4: jal         0x8033CC08
    // 0x8033E7E8: nop

    func_8033CC08_unk_bin_14(rdram, ctx);
        goto after_32;
    // 0x8033E7E8: nop

    after_32:
    // 0x8033E7EC: b           L_8033E8EC
    // 0x8033E7F0: nop

        goto L_8033E8EC;
    // 0x8033E7F0: nop

L_8033E7F4:
    // 0x8033E7F4: jal         0x8033CD78
    // 0x8033E7F8: nop

    func_8033CD78_unk_bin_14(rdram, ctx);
        goto after_33;
    // 0x8033E7F8: nop

    after_33:
    // 0x8033E7FC: b           L_8033E8EC
    // 0x8033E800: nop

        goto L_8033E8EC;
    // 0x8033E800: nop

L_8033E804:
    // 0x8033E804: jal         0x8033CF04
    // 0x8033E808: nop

    func_8033CF04_unk_bin_14(rdram, ctx);
        goto after_34;
    // 0x8033E808: nop

    after_34:
    // 0x8033E80C: b           L_8033E8EC
    // 0x8033E810: nop

        goto L_8033E8EC;
    // 0x8033E810: nop

L_8033E814:
    // 0x8033E814: jal         0x8033D03C
    // 0x8033E818: nop

    func_8033D03C_unk_bin_14(rdram, ctx);
        goto after_35;
    // 0x8033E818: nop

    after_35:
    // 0x8033E81C: b           L_8033E8EC
    // 0x8033E820: nop

        goto L_8033E8EC;
    // 0x8033E820: nop

L_8033E824:
    // 0x8033E824: jal         0x8033D1F4
    // 0x8033E828: nop

    func_8033D1F4_unk_bin_14(rdram, ctx);
        goto after_36;
    // 0x8033E828: nop

    after_36:
    // 0x8033E82C: b           L_8033E8EC
    // 0x8033E830: nop

        goto L_8033E8EC;
    // 0x8033E830: nop

L_8033E834:
    // 0x8033E834: jal         0x8033D324
    // 0x8033E838: nop

    func_8033D324_unk_bin_14(rdram, ctx);
        goto after_37;
    // 0x8033E838: nop

    after_37:
    // 0x8033E83C: b           L_8033E8EC
    // 0x8033E840: nop

        goto L_8033E8EC;
    // 0x8033E840: nop

L_8033E844:
    // 0x8033E844: jal         0x8033D454
    // 0x8033E848: nop

    func_8033D454_unk_bin_14(rdram, ctx);
        goto after_38;
    // 0x8033E848: nop

    after_38:
    // 0x8033E84C: b           L_8033E8EC
    // 0x8033E850: nop

        goto L_8033E8EC;
    // 0x8033E850: nop

L_8033E854:
    // 0x8033E854: jal         0x8033D584
    // 0x8033E858: nop

    func_8033D584_unk_bin_14(rdram, ctx);
        goto after_39;
    // 0x8033E858: nop

    after_39:
    // 0x8033E85C: b           L_8033E8EC
    // 0x8033E860: nop

        goto L_8033E8EC;
    // 0x8033E860: nop

L_8033E864:
    // 0x8033E864: jal         0x8033D7AC
    // 0x8033E868: nop

    func_8033D7AC_unk_bin_14(rdram, ctx);
        goto after_40;
    // 0x8033E868: nop

    after_40:
    // 0x8033E86C: b           L_8033E8EC
    // 0x8033E870: nop

        goto L_8033E8EC;
    // 0x8033E870: nop

L_8033E874:
    // 0x8033E874: jal         0x8033D990
    // 0x8033E878: nop

    func_8033D990_unk_bin_14(rdram, ctx);
        goto after_41;
    // 0x8033E878: nop

    after_41:
    // 0x8033E87C: b           L_8033E8EC
    // 0x8033E880: nop

        goto L_8033E8EC;
    // 0x8033E880: nop

L_8033E884:
    // 0x8033E884: jal         0x8033DBF8
    // 0x8033E888: nop

    func_8033DBF8_unk_bin_14(rdram, ctx);
        goto after_42;
    // 0x8033E888: nop

    after_42:
    // 0x8033E88C: b           L_8033E8EC
    // 0x8033E890: nop

        goto L_8033E8EC;
    // 0x8033E890: nop

L_8033E894:
    // 0x8033E894: jal         0x8033DD3C
    // 0x8033E898: nop

    func_8033DD3C_unk_bin_14(rdram, ctx);
        goto after_43;
    // 0x8033E898: nop

    after_43:
    // 0x8033E89C: b           L_8033E8EC
    // 0x8033E8A0: nop

        goto L_8033E8EC;
    // 0x8033E8A0: nop

L_8033E8A4:
    // 0x8033E8A4: jal         0x8033DE80
    // 0x8033E8A8: nop

    func_8033DE80_unk_bin_14(rdram, ctx);
        goto after_44;
    // 0x8033E8A8: nop

    after_44:
    // 0x8033E8AC: b           L_8033E8EC
    // 0x8033E8B0: nop

        goto L_8033E8EC;
    // 0x8033E8B0: nop

L_8033E8B4:
    // 0x8033E8B4: jal         0x8033DFC4
    // 0x8033E8B8: nop

    func_8033DFC4_unk_bin_14(rdram, ctx);
        goto after_45;
    // 0x8033E8B8: nop

    after_45:
    // 0x8033E8BC: b           L_8033E8EC
    // 0x8033E8C0: nop

        goto L_8033E8EC;
    // 0x8033E8C0: nop

L_8033E8C4:
    // 0x8033E8C4: jal         0x8033E298
    // 0x8033E8C8: nop

    func_8033E298_unk_bin_14(rdram, ctx);
        goto after_46;
    // 0x8033E8C8: nop

    after_46:
    // 0x8033E8CC: b           L_8033E8EC
    // 0x8033E8D0: nop

        goto L_8033E8EC;
    // 0x8033E8D0: nop

L_8033E8D4:
    // 0x8033E8D4: jal         0x8033E3DC
    // 0x8033E8D8: nop

    func_8033E3DC_unk_bin_14(rdram, ctx);
        goto after_47;
    // 0x8033E8D8: nop

    after_47:
    // 0x8033E8DC: b           L_8033E8EC
    // 0x8033E8E0: nop

        goto L_8033E8EC;
    // 0x8033E8E0: nop

L_8033E8E4:
    // 0x8033E8E4: b           L_8033E8EC
    // 0x8033E8E8: nop

        goto L_8033E8EC;
    // 0x8033E8E8: nop

L_8033E8EC:
    // 0x8033E8EC: b           L_8033E8F4
    // 0x8033E8F0: nop

        goto L_8033E8F4;
    // 0x8033E8F0: nop

L_8033E8F4:
    // 0x8033E8F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033E8F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033E8FC: jr          $ra
    // 0x8033E900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033E900: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033DBF8_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033DBF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033DBFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033DC00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DC04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DC08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033DC0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DC10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DC14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DC18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DC1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DC20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033DC24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033DC28: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033DC2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DC30: nop

    // 0x8033DC34: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033DC38: nop

    // 0x8033DC3C: bne         $t1, $zero, L_8033DCD0
    if (ctx->r9 != 0) {
        // 0x8033DC40: nop
    
            goto L_8033DCD0;
    }
    // 0x8033DC40: nop

    // 0x8033DC44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DC48: nop

    // 0x8033DC4C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033DC50: nop

    // 0x8033DC54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033DC58: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033DC5C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DC60: nop

    // 0x8033DC64: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033DC68: nop

    // 0x8033DC6C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033DC70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DC74: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033DC78: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033DC7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DC80: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033DC84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DC88: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8033DC8C: jal         0x8001C0EC
    // 0x8033DC90: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033DC90: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033DC94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DC98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DC9C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DCA0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DCA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DCA8: jal         0x8001ABF4
    // 0x8033DCAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033DCAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033DCB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DCB4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DCB8: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DCBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DCC0: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033DCC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033DCC8: jal         0x8001ABF4
    // 0x8033DCCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033DCCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033DCD0:
    // 0x8033DCD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DCD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DCD8: jal         0x8002A8B4
    // 0x8033DCDC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033DCDC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033DCE0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DCE4: nop

    // 0x8033DCE8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033DCEC: nop

    // 0x8033DCF0: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033DCF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DCF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DCFC: jal         0x8001B4AC
    // 0x8033DD00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033DD00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033DD04: beq         $v0, $zero, L_8033DD24
    if (ctx->r2 == 0) {
        // 0x8033DD08: nop
    
            goto L_8033DD24;
    }
    // 0x8033DD08: nop

    // 0x8033DD0C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DD10: addiu       $t9, $zero, 0x2A
    ctx->r25 = ADD32(0, 0X2A);
    // 0x8033DD14: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033DD18: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DD1C: nop

    // 0x8033DD20: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033DD24:
    // 0x8033DD24: b           L_8033DD2C
    // 0x8033DD28: nop

        goto L_8033DD2C;
    // 0x8033DD28: nop

L_8033DD2C:
    // 0x8033DD2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033DD30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033DD34: jr          $ra
    // 0x8033DD38: nop

    return;
    // 0x8033DD38: nop

;}
RECOMP_FUNC void func_8033CA98_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CA98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033CA9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CAA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CAA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CAA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CAAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CAB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CAB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CAB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CABC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CAC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CAC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CAC8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033CACC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CAD0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033CAD4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033CAD8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033CADC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033CAE0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CAE4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033CAE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CAEC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033CAF0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033CAF4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8033CAF8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CAFC: nop

    // 0x8033CB00: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033CB04: nop

    // 0x8033CB08: bne         $t6, $zero, L_8033CB9C
    if (ctx->r14 != 0) {
        // 0x8033CB0C: nop
    
            goto L_8033CB9C;
    }
    // 0x8033CB0C: nop

    // 0x8033CB10: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CB14: nop

    // 0x8033CB18: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033CB1C: nop

    // 0x8033CB20: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8033CB24: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x8033CB28: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CB2C: nop

    // 0x8033CB30: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8033CB34: nop

    // 0x8033CB38: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033CB3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CB40: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033CB44: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x8033CB48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CB4C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8033CB50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CB54: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x8033CB58: jal         0x8001C0EC
    // 0x8033CB5C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033CB5C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033CB60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CB64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CB68: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CB6C: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033CB74: jal         0x8001ABF4
    // 0x8033CB78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033CB78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033CB7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CB80: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033CB84: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033CB88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CB8C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033CB90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033CB94: jal         0x8001ABF4
    // 0x8033CB98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033CB98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033CB9C:
    // 0x8033CB9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CBA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CBA4: jal         0x8002A8B4
    // 0x8033CBA8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033CBA8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033CBAC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CBB0: nop

    // 0x8033CBB4: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033CBB8: nop

    // 0x8033CBBC: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x8033CBC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033CBC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033CBC8: jal         0x8001B4AC
    // 0x8033CBCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033CBCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033CBD0: beq         $v0, $zero, L_8033CBF0
    if (ctx->r2 == 0) {
        // 0x8033CBD4: nop
    
            goto L_8033CBF0;
    }
    // 0x8033CBD4: nop

    // 0x8033CBD8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CBDC: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x8033CBE0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033CBE4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033CBE8: nop

    // 0x8033CBEC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033CBF0:
    // 0x8033CBF0: b           L_8033CBF8
    // 0x8033CBF4: nop

        goto L_8033CBF8;
    // 0x8033CBF4: nop

L_8033CBF8:
    // 0x8033CBF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CBFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033CC00: jr          $ra
    // 0x8033CC04: nop

    return;
    // 0x8033CC04: nop

;}
RECOMP_FUNC void func_8033DD3C_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033DD3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033DD40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033DD44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DD48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DD4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033DD50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DD54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DD58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DD5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DD60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DD64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033DD68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033DD6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033DD70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DD74: nop

    // 0x8033DD78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033DD7C: nop

    // 0x8033DD80: bne         $t1, $zero, L_8033DE14
    if (ctx->r9 != 0) {
        // 0x8033DD84: nop
    
            goto L_8033DE14;
    }
    // 0x8033DD84: nop

    // 0x8033DD88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DD8C: nop

    // 0x8033DD90: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033DD94: nop

    // 0x8033DD98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033DD9C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033DDA0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DDA4: nop

    // 0x8033DDA8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033DDAC: nop

    // 0x8033DDB0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033DDB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DDB8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033DDBC: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033DDC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DDC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033DDC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DDCC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x8033DDD0: jal         0x8001C0EC
    // 0x8033DDD4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033DDD4: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033DDD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DDDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DDE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DDE4: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DDE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DDEC: jal         0x8001ABF4
    // 0x8033DDF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033DDF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033DDF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DDF8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033DDFC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033DE00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DE04: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033DE08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033DE0C: jal         0x8001ABF4
    // 0x8033DE10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033DE10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033DE14:
    // 0x8033DE14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DE18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DE1C: jal         0x8002A8B4
    // 0x8033DE20: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033DE20: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_3:
    // 0x8033DE24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DE28: nop

    // 0x8033DE2C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033DE30: nop

    // 0x8033DE34: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x8033DE38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DE3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DE40: jal         0x8001B4AC
    // 0x8033DE44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033DE44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033DE48: beq         $v0, $zero, L_8033DE68
    if (ctx->r2 == 0) {
        // 0x8033DE4C: nop
    
            goto L_8033DE68;
    }
    // 0x8033DE4C: nop

    // 0x8033DE50: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DE54: addiu       $t9, $zero, 0x2B
    ctx->r25 = ADD32(0, 0X2B);
    // 0x8033DE58: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033DE5C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DE60: nop

    // 0x8033DE64: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033DE68:
    // 0x8033DE68: b           L_8033DE70
    // 0x8033DE6C: nop

        goto L_8033DE70;
    // 0x8033DE6C: nop

L_8033DE70:
    // 0x8033DE70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033DE74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033DE78: jr          $ra
    // 0x8033DE7C: nop

    return;
    // 0x8033DE7C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, -0x7C0
    ctx->r5 = ADD32(ctx->r5, -0X7C0);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
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
    // 0x80330080: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330084: lh          $t3, 0x4238($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4238);
    // 0x80330088: nop

    // 0x8033008C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80330090: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80330094: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80330098: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033009C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803300A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803300A4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803300A8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803300AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300B0: lh          $t7, 0x423A($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X423A);
    // 0x803300B4: nop

    // 0x803300B8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x803300BC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803300C0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803300C4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803300C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803300D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803300D8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803300DC: lh          $t6, 0x423C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X423C);
    // 0x803300E0: nop

    // 0x803300E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x803300E8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x803300EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803300F0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x803300F4: jal         0x80019448
    // 0x803300F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x803300F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x803300FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330104: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330108: jal         0x80019448
    // 0x8033010C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x8033010C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x80330110: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330114: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80330118: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033011C: jal         0x80019448
    // 0x80330120: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_3;
    // 0x80330120: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80330124: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033012C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80330130: jal         0x80019448
    // 0x80330134: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80019448(rdram, ctx);
        goto after_4;
    // 0x80330134: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x80330138: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8033013C: addiu       $t0, $t0, -0x57BC
    ctx->r8 = ADD32(ctx->r8, -0X57BC);
    // 0x80330140: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80330144: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80330148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033014C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330150: jal         0x8001C0EC
    // 0x80330154: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x80330154: addiu       $a3, $zero, 0xE3
    ctx->r7 = ADD32(0, 0XE3);
    after_5:
    // 0x80330158: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8033015C: addiu       $t1, $t1, -0x5A70
    ctx->r9 = ADD32(ctx->r9, -0X5A70);
    // 0x80330160: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80330164: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80330168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033016C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330170: jal         0x8001C0EC
    // 0x80330174: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x80330174: addiu       $a3, $zero, 0xDE
    ctx->r7 = ADD32(0, 0XDE);
    after_6:
    // 0x80330178: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8033017C: addiu       $t2, $t2, -0x5A10
    ctx->r10 = ADD32(ctx->r10, -0X5A10);
    // 0x80330180: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80330184: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80330188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033018C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80330190: jal         0x8001C0EC
    // 0x80330194: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x80330194: addiu       $a3, $zero, 0xE1
    ctx->r7 = ADD32(0, 0XE1);
    after_7:
    // 0x80330198: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8033019C: jal         0x8001BBDC
    // 0x803301A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x803301A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x803301A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803301A8: jal         0x8001BBDC
    // 0x803301AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x803301AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x803301B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803301B4: jal         0x8001BBDC
    // 0x803301B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x803301B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x803301BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803301C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803301C4: addiu       $a3, $a3, -0x5920
    ctx->r7 = ADD32(ctx->r7, -0X5920);
    // 0x803301C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803301CC: jal         0x8001ABF4
    // 0x803301D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x803301D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x803301D4: b           L_803301DC
    // 0x803301D8: nop

        goto L_803301DC;
    // 0x803301D8: nop

L_803301DC:
    // 0x803301DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803301E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803301E4: jr          $ra
    // 0x803301E8: nop

    return;
    // 0x803301E8: nop

;}
RECOMP_FUNC void func_80339898_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339898: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033989C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803398A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803398A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803398A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803398AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803398B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803398B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803398B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803398BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803398C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803398C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803398C8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803398CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803398D0: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803398D4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803398D8: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x803398DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803398E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803398E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803398E8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803398EC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803398F0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803398F4: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x803398F8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803398FC: nop

    // 0x80339900: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x80339904: nop

    // 0x80339908: bne         $t6, $zero, L_803399D8
    if (ctx->r14 != 0) {
        // 0x8033990C: nop
    
            goto L_803399D8;
    }
    // 0x8033990C: nop

    // 0x80339910: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339914: nop

    // 0x80339918: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x8033991C: nop

    // 0x80339920: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80339924: sb          $t9, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r25;
    // 0x80339928: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033992C: nop

    // 0x80339930: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80339934: nop

    // 0x80339938: sh          $t1, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r9;
    // 0x8033993C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339940: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80339944: addiu       $t2, $t2, -0x5720
    ctx->r10 = ADD32(ctx->r10, -0X5720);
    // 0x80339948: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033994C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80339950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339954: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80339958: jal         0x8001C0EC
    // 0x8033995C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033995C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x80339960: jal         0x80014E80
    // 0x80339964: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80339964: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80339968: bne         $v0, $zero, L_80339998
    if (ctx->r2 != 0) {
        // 0x8033996C: nop
    
            goto L_80339998;
    }
    // 0x8033996C: nop

    // 0x80339970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339974: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80339978: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033997C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339980: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80339984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339988: jal         0x8001ABF4
    // 0x8033998C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033998C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80339990: b           L_803399B8
    // 0x80339994: nop

        goto L_803399B8;
    // 0x80339994: nop

L_80339998:
    // 0x80339998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033999C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803399A0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803399A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803399A8: addiu       $a3, $a3, 0x150
    ctx->r7 = ADD32(ctx->r7, 0X150);
    // 0x803399AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803399B0: jal         0x8001ABF4
    // 0x803399B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x803399B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_803399B8:
    // 0x803399B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803399BC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803399C0: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x803399C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803399C8: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x803399CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803399D0: jal         0x8001ABF4
    // 0x803399D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x803399D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_803399D8:
    // 0x803399D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803399DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803399E0: jal         0x8002A8B4
    // 0x803399E4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_5;
    // 0x803399E4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_5:
    // 0x803399E8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803399EC: nop

    // 0x803399F0: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803399F4: nop

    // 0x803399F8: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x803399FC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80339A00: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339A04: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80339A08: nop

    // 0x80339A0C: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x80339A10: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80339A14: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339A18: lwc1        $f8, 0x24($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80339A1C: nop

    // 0x80339A20: swc1        $f8, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f8.u32l;
    // 0x80339A24: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80339A28: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339A2C: lwc1        $f10, 0x2C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80339A30: nop

    // 0x80339A34: swc1        $f10, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f10.u32l;
    // 0x80339A38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339A3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339A40: jal         0x8001B4AC
    // 0x80339A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_6;
    // 0x80339A44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80339A48: beq         $v0, $zero, L_80339AC4
    if (ctx->r2 == 0) {
        // 0x80339A4C: nop
    
            goto L_80339AC4;
    }
    // 0x80339A4C: nop

    // 0x80339A50: jal         0x80014E80
    // 0x80339A54: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_7;
    // 0x80339A54: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x80339A58: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80339A5C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80339A60: nop

    // 0x80339A64: bne         $t1, $zero, L_80339A98
    if (ctx->r9 != 0) {
        // 0x80339A68: nop
    
            goto L_80339A98;
    }
    // 0x80339A68: nop

    // 0x80339A6C: jal         0x80014E80
    // 0x80339A70: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x80339A70: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x80339A74: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80339A78: nop

    // 0x80339A7C: sh          $v0, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r2;
    // 0x80339A80: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80339A84: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80339A88: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80339A8C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80339A90: b           L_80339AC4
    // 0x80339A94: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_80339AC4;
    // 0x80339A94: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80339A98:
    // 0x80339A98: jal         0x80014E80
    // 0x80339A9C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x80339A9C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_9:
    // 0x80339AA0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339AA4: nop

    // 0x80339AA8: sh          $v0, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = ctx->r2;
    // 0x80339AAC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339AB0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80339AB4: sh          $t6, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r14;
    // 0x80339AB8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80339ABC: nop

    // 0x80339AC0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_80339AC4:
    // 0x80339AC4: b           L_80339ACC
    // 0x80339AC8: nop

        goto L_80339ACC;
    // 0x80339AC8: nop

L_80339ACC:
    // 0x80339ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339AD0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80339AD4: jr          $ra
    // 0x80339AD8: nop

    return;
    // 0x80339AD8: nop

;}
RECOMP_FUNC void func_8033D454_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033D458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D45C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D460: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D464: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D468: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D46C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D470: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D474: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D478: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D47C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D480: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D484: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D488: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D48C: nop

    // 0x8033D490: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033D494: nop

    // 0x8033D498: bne         $t1, $zero, L_8033D52C
    if (ctx->r9 != 0) {
        // 0x8033D49C: nop
    
            goto L_8033D52C;
    }
    // 0x8033D49C: nop

    // 0x8033D4A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D4A4: nop

    // 0x8033D4A8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033D4AC: nop

    // 0x8033D4B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033D4B4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033D4B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D4BC: nop

    // 0x8033D4C0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033D4C4: nop

    // 0x8033D4C8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033D4CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D4D0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D4D4: addiu       $t7, $t7, -0x5720
    ctx->r15 = ADD32(ctx->r15, -0X5720);
    // 0x8033D4D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D4DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D4E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D4E4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8033D4E8: jal         0x8001C0EC
    // 0x8033D4EC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033D4EC: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8033D4F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D4F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D4F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D4FC: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D504: jal         0x8001ABF4
    // 0x8033D508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033D508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033D50C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D510: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D514: addiu       $a3, $a3, -0x55D0
    ctx->r7 = ADD32(ctx->r7, -0X55D0);
    // 0x8033D518: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D51C: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8033D520: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033D524: jal         0x8001ABF4
    // 0x8033D528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033D528: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033D52C:
    // 0x8033D52C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D534: jal         0x8033E904
    // 0x8033D538: nop

    func_8033E904_unk_bin_14(rdram, ctx);
        goto after_3;
    // 0x8033D538: nop

    after_3:
    // 0x8033D53C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D540: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D544: jal         0x8001B4AC
    // 0x8033D548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x8033D548: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8033D54C: beq         $v0, $zero, L_8033D56C
    if (ctx->r2 == 0) {
        // 0x8033D550: nop
    
            goto L_8033D56C;
    }
    // 0x8033D550: nop

    // 0x8033D554: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033D558: addiu       $t8, $zero, 0x26
    ctx->r24 = ADD32(0, 0X26);
    // 0x8033D55C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033D560: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D564: nop

    // 0x8033D568: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033D56C:
    // 0x8033D56C: b           L_8033D574
    // 0x8033D570: nop

        goto L_8033D574;
    // 0x8033D570: nop

L_8033D574:
    // 0x8033D574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D57C: jr          $ra
    // 0x8033D580: nop

    return;
    // 0x8033D580: nop

;}
RECOMP_FUNC void func_803301EC_unk_bin_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803301F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803301F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803301F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803301FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330200: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330208: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033020C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330210: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330214: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330218: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033021C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330220: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80330224: nop

    // 0x80330228: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033022C: nop

    // 0x80330230: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80330234: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330238: nop

    // 0x8033023C: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x80330240: nop

    // 0x80330244: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80330248: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033024C: nop

    // 0x80330250: lh          $t5, 0xEC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XEC);
    // 0x80330254: nop

    // 0x80330258: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8033025C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330260: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330264: nop

    // 0x80330268: bne         $t6, $zero, L_803303D8
    if (ctx->r14 != 0) {
        // 0x8033026C: nop
    
            goto L_803303D8;
    }
    // 0x8033026C: nop

    // 0x80330270: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330274: nop

    // 0x80330278: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x8033027C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80330280: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330284: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330288: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033028C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330290: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330294: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330298: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033029C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803302A0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803302A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803302AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803302B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803302B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803302B8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803302BC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803302C0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803302C4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x803302C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803302CC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803302D0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803302D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803302DC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803302E0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803302E4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803302E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803302EC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x803302F0: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x803302F4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x803302F8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803302FC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330300: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80330304: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330308: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033030C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330310: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x80330314: nop

    // 0x80330318: beq         $t7, $at, L_80330378
    if (ctx->r15 == ctx->r1) {
        // 0x8033031C: nop
    
            goto L_80330378;
    }
    // 0x8033031C: nop

    // 0x80330320: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330324: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330328: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x8033032C: nop

    // 0x80330330: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80330334: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330338: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033033C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330340: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330344: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330348: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033034C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330354: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80330358: nop

    // 0x8033035C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330360: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330364: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330368: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033036C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330370: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330374: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_80330378:
    // 0x80330378: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033037C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330380: sh          $t4, 0xBA($t5)
    MEM_H(0XBA, ctx->r13) = ctx->r12;
    // 0x80330384: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330388: nop

    // 0x8033038C: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x80330390: nop

    // 0x80330394: sh          $t7, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r15;
    // 0x80330398: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033039C: nop

    // 0x803303A0: lh          $t9, 0xB4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB4);
    // 0x803303A4: nop

    // 0x803303A8: beq         $t9, $zero, L_803303D0
    if (ctx->r25 == 0) {
        // 0x803303AC: nop
    
            goto L_803303D0;
    }
    // 0x803303AC: nop

    // 0x803303B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803303B4: nop

    // 0x803303B8: lh          $a0, 0xB4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XB4);
    // 0x803303BC: jal         0x8002B114
    // 0x803303C0: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x803303C0: nop

    after_0:
    // 0x803303C4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803303C8: nop

    // 0x803303CC: sh          $zero, 0xB4($t1)
    MEM_H(0XB4, ctx->r9) = 0;
L_803303D0:
    // 0x803303D0: b           L_80330588
    // 0x803303D4: nop

        goto L_80330588;
    // 0x803303D4: nop

L_803303D8:
    // 0x803303D8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803303DC: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x803303E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803303E4: bne         $t2, $at, L_803304E8
    if (ctx->r10 != ctx->r1) {
        // 0x803303E8: nop
    
            goto L_803304E8;
    }
    // 0x803303E8: nop

    // 0x803303EC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803303F0: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x803303F4: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x803303F8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x803303FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330400: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80330404: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80330408: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033040C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80330410: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80330414: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80330418: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x8033041C: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
    // 0x80330420: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80330424: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330428: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033042C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330430: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330434: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80330438: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033043C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330440: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x80330444: sh          $t8, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r24;
    // 0x80330448: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033044C: nop

    // 0x80330450: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x80330454: nop

    // 0x80330458: addiu       $t3, $t2, -0x4
    ctx->r11 = ADD32(ctx->r10, -0X4);
    // 0x8033045C: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x80330460: beq         $at, $zero, L_803304D8
    if (ctx->r1 == 0) {
        // 0x80330464: nop
    
            goto L_803304D8;
    }
    // 0x80330464: nop

    // 0x80330468: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033046C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80330470: addu        $at, $at, $t3
    gpr jr_addend_8033047C = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80330474: lw          $t3, -0x780($at)
    ctx->r11 = ADD32(ctx->r1, -0X780);
    // 0x80330478: nop

    // 0x8033047C: jr          $t3
    // 0x80330480: nop

    switch (jr_addend_8033047C >> 2) {
        case 0: goto L_80330484; break;
        case 1: goto L_80330484; break;
        case 2: goto L_80330484; break;
        case 3: goto L_80330484; break;
        case 4: goto L_80330484; break;
        default: switch_error(__func__, 0x8033047C, 0x8033F880);
    }
    // 0x80330480: nop

L_80330484:
    // 0x80330484: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330488: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x8033048C: sh          $t4, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r12;
    // 0x80330490: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80330494: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330498: nop

    // 0x8033049C: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x803304A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803304A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803304A8: nop

    // 0x803304AC: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x803304B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803304B4: nop

    // 0x803304B8: lwc1        $f8, 0x2C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x803304BC: nop

    // 0x803304C0: swc1        $f8, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f8.u32l;
    // 0x803304C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803304C8: nop

    // 0x803304CC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x803304D0: b           L_803304E0
    // 0x803304D4: nop

        goto L_803304E0;
    // 0x803304D4: nop

L_803304D8:
    // 0x803304D8: b           L_803304E0
    // 0x803304DC: nop

        goto L_803304E0;
    // 0x803304DC: nop

L_803304E0:
    // 0x803304E0: b           L_80330588
    // 0x803304E4: nop

        goto L_80330588;
    // 0x803304E4: nop

L_803304E8:
    // 0x803304E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803304EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803304F0: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x803304F4: nop

    // 0x803304F8: beq         $t1, $at, L_80330588
    if (ctx->r9 == ctx->r1) {
        // 0x803304FC: nop
    
            goto L_80330588;
    }
    // 0x803304FC: nop

    // 0x80330500: lh          $t2, 0xA6($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA6);
    // 0x80330504: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330508: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033050C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330510: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330514: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330518: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033051C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330520: lh          $t4, 0x4258($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4258);
    // 0x80330524: nop

    // 0x80330528: beq         $t4, $zero, L_80330588
    if (ctx->r12 == 0) {
        // 0x8033052C: nop
    
            goto L_80330588;
    }
    // 0x8033052C: nop

    // 0x80330530: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330534: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330538: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033053C: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80330540: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80330544: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80330548: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033054C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80330550: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330554: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330558: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033055C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330560: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330564: lh          $t1, 0xA6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA6);
    // 0x80330568: nop

    // 0x8033056C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80330570: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x80330574: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80330578: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8033057C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330580: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330584: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330588:
    // 0x80330588: b           L_80330590
    // 0x8033058C: nop

        goto L_80330590;
    // 0x8033058C: nop

L_80330590:
    // 0x80330590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80330594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330598: jr          $ra
    // 0x8033059C: nop

    return;
    // 0x8033059C: nop

;}
