#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80025674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025674: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80025678: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8002567C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80025680: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80025684: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80025688: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8002568C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80025690: lbu         $t7, 0x7650($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7650);
    // 0x80025694: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025698: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002569C: sb          $t7, 0x7495($at)
    MEM_B(0X7495, ctx->r1) = ctx->r15;
    // 0x800256A0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800256A4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800256A8: lbu         $t9, 0x7651($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X7651);
    // 0x800256AC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800256B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800256B4: sb          $t9, 0x7496($at)
    MEM_B(0X7496, ctx->r1) = ctx->r25;
    // 0x800256B8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800256BC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800256C0: lbu         $t1, 0x7652($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7652);
    // 0x800256C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800256C8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800256CC: sb          $t1, 0x7497($at)
    MEM_B(0X7497, ctx->r1) = ctx->r9;
    // 0x800256D0: b           L_800256D8
    // 0x800256D4: nop

        goto L_800256D8;
    // 0x800256D4: nop

L_800256D8:
    // 0x800256D8: jr          $ra
    // 0x800256DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800256DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80017758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017758: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001775C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80017760: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80017764: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80017768: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8001776C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80017770: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80017774: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017778: jal         0x80017460
    // 0x8001777C: nop

    func_80017460(rdram, ctx);
        goto after_0;
    // 0x8001777C: nop

    after_0:
    // 0x80017780: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80017784: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80017788: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8001778C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80017790: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017794: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80017798: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x8001779C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800177A0: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x800177A4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800177A8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800177AC: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800177B0: jal         0x80017028
    // 0x800177B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80017028(rdram, ctx);
        goto after_1;
    // 0x800177B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x800177B8: b           L_800177C8
    // 0x800177BC: nop

        goto L_800177C8;
    // 0x800177BC: nop

    // 0x800177C0: b           L_800177C8
    // 0x800177C4: nop

        goto L_800177C8;
    // 0x800177C4: nop

L_800177C8:
    // 0x800177C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800177CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800177D0: jr          $ra
    // 0x800177D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800177D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80027C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027C00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80027C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027C08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80027C0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80027C10: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80027C14: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80027C18: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80027C1C: jal         0x80064358
    // 0x80027C20: nop

    func_80064358(rdram, ctx);
        goto after_0;
    // 0x80027C20: nop

    after_0:
    // 0x80027C24: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80027C28: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80027C2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027C30: bne         $t6, $at, L_80027C40
    if (ctx->r14 != ctx->r1) {
        // 0x80027C34: nop
    
            goto L_80027C40;
    }
    // 0x80027C34: nop

    // 0x80027C38: b           L_80028194
    // 0x80027C3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80028194;
    // 0x80027C3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80027C40:
    // 0x80027C40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80027C44: jal         0x8001A928
    // 0x80027C48: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x80027C48: nop

    after_1:
    // 0x80027C4C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80027C50: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80027C54: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x80027C58: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80027C5C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80027C60: addu        $a3, $a3, $t9
    ctx->r7 = ADD32(ctx->r7, ctx->r25);
    // 0x80027C64: lw          $a3, -0x3560($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3560);
    // 0x80027C68: lb          $a1, 0x0($t7)
    ctx->r5 = MEM_B(ctx->r15, 0X0);
    // 0x80027C6C: lb          $a2, 0x6($t7)
    ctx->r6 = MEM_B(ctx->r15, 0X6);
    // 0x80027C70: jal         0x8001BD44
    // 0x80027C74: nop

    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x80027C74: nop

    after_2:
    // 0x80027C78: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80027C7C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80027C80: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80027C84: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80027C88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80027C8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80027C90: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80027C94: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80027C98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80027C9C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80027CA0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80027CA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027CA8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80027CAC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80027CB0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80027CB4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80027CB8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80027CBC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80027CC0: swc1        $f4, 0x41A0($at)
    MEM_W(0X41A0, ctx->r1) = ctx->f4.u32l;
    // 0x80027CC4: lwc1        $f6, 0x50($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X50);
    // 0x80027CC8: nop

    // 0x80027CCC: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x80027CD0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80027CD4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80027CD8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80027CDC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80027CE0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80027CE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80027CE8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027CEC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80027CF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80027CF4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80027CF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80027CFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027D00: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80027D04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027D08: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80027D0C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80027D10: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80027D14: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80027D18: swc1        $f8, 0x41A4($at)
    MEM_W(0X41A4, ctx->r1) = ctx->f8.u32l;
    // 0x80027D1C: lwc1        $f10, 0x54($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X54);
    // 0x80027D20: nop

    // 0x80027D24: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x80027D28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80027D2C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80027D30: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80027D34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80027D38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80027D3C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80027D40: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80027D44: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80027D48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80027D4C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80027D50: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80027D54: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027D58: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80027D5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80027D60: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80027D64: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80027D68: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80027D6C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80027D70: swc1        $f16, 0x41A8($at)
    MEM_W(0X41A8, ctx->r1) = ctx->f16.u32l;
    // 0x80027D74: lwc1        $f18, 0x58($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X58);
    // 0x80027D78: nop

    // 0x80027D7C: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x80027D80: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80027D84: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80027D88: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80027D8C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027D90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80027D94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027D98: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80027D9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027DA0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80027DA4: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80027DA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80027DAC: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80027DB0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80027DB4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80027DB8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80027DBC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80027DC0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80027DC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027DC8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80027DCC: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80027DD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80027DD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027DD8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80027DDC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027DE0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80027DE4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027DE8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027DEC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80027DF0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80027DF4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x80027DF8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80027DFC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80027E00: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027E04: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027E08: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80027E0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027E10: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80027E14: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80027E18: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027E1C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80027E20: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x80027E24: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80027E28: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80027E2C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80027E30: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80027E34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80027E38: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80027E3C: lb          $t0, 0x7($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X7);
    // 0x80027E40: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80027E44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027E48: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80027E4C: sh          $t0, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r8;
    // 0x80027E50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80027E54: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80027E58: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80027E5C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80027E60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80027E64: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80027E68: lb          $t4, 0x8($t2)
    ctx->r12 = MEM_B(ctx->r10, 0X8);
    // 0x80027E6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80027E70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027E74: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80027E78: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x80027E7C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80027E80: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80027E84: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80027E88: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80027E8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80027E90: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80027E94: lb          $t8, 0x9($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X9);
    // 0x80027E98: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80027E9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027EA0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80027EA4: sb          $t8, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = ctx->r24;
    // 0x80027EA8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80027EAC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80027EB0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80027EB4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80027EB8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80027EBC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80027EC0: lbu         $t3, 0xA($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA);
    // 0x80027EC4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80027EC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027ECC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80027ED0: sb          $t3, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r11;
    // 0x80027ED4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80027ED8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80027EDC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80027EE0: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80027EE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80027EE8: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80027EEC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80027EF0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027EF4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80027EF8: sh          $t4, 0x4236($at)
    MEM_H(0X4236, ctx->r1) = ctx->r12;
    // 0x80027EFC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80027F00: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80027F04: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80027F08: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80027F0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80027F10: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80027F14: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80027F18: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x80027F1C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80027F20: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80027F24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027F28: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80027F2C: sh          $t9, 0x4238($at)
    MEM_H(0X4238, ctx->r1) = ctx->r25;
    // 0x80027F30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80027F34: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80027F38: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80027F3C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80027F40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80027F44: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80027F48: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027F4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027F50: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80027F54: sh          $t5, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r13;
    // 0x80027F58: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80027F5C:
    // 0x80027F5C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80027F60: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80027F64: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80027F68: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80027F6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80027F70: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80027F74: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80027F78: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80027F7C: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x80027F80: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80027F84: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80027F88: lh          $t9, 0x425E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X425E);
    // 0x80027F8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027F90: bne         $t9, $at, L_80027FD4
    if (ctx->r25 != ctx->r1) {
        // 0x80027F94: nop
    
            goto L_80027FD4;
    }
    // 0x80027F94: nop

    // 0x80027F98: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80027F9C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80027FA0: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80027FA4: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80027FA8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80027FAC: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80027FB0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80027FB4: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80027FB8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80027FBC: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x80027FC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80027FC4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80027FC8: sh          $t3, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r11;
    // 0x80027FCC: b           L_80027FEC
    // 0x80027FD0: nop

        goto L_80027FEC;
    // 0x80027FD0: nop

L_80027FD4:
    // 0x80027FD4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80027FD8: nop

    // 0x80027FDC: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80027FE0: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x80027FE4: bne         $at, $zero, L_80027F5C
    if (ctx->r1 != 0) {
        // 0x80027FE8: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80027F5C;
    }
    // 0x80027FE8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_80027FEC:
    // 0x80027FEC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80027FF0:
    // 0x80027FF0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80027FF4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80027FF8: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x80027FFC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80028000: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80028004: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80028008: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8002800C: sll         $t4, $t7, 1
    ctx->r12 = S32(ctx->r15 << 1);
    // 0x80028010: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80028014: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80028018: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002801C: lh          $t6, 0x4238($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4238);
    // 0x80028020: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80028024: beq         $t6, $at, L_80028168
    if (ctx->r14 == ctx->r1) {
        // 0x80028028: sw          $t6, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r14;
            goto L_80028168;
    }
    // 0x80028028: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8002802C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80028030: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80028034: nop

    // 0x80028038: beq         $t3, $t0, L_80028168
    if (ctx->r11 == ctx->r8) {
        // 0x8002803C: nop
    
            goto L_80028168;
    }
    // 0x8002803C: nop

    // 0x80028040: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80028044:
    // 0x80028044: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80028048: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8002804C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80028050: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80028054: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80028058: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x8002805C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80028060: sll         $t7, $t2, 1
    ctx->r15 = S32(ctx->r10 << 1);
    // 0x80028064: addu        $t9, $t1, $t7
    ctx->r25 = ADD32(ctx->r9, ctx->r15);
    // 0x80028068: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8002806C: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x80028070: lh          $t4, 0x425E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X425E);
    // 0x80028074: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80028078: bne         $t4, $at, L_800280BC
    if (ctx->r12 != ctx->r1) {
        // 0x8002807C: nop
    
            goto L_800280BC;
    }
    // 0x8002807C: nop

    // 0x80028080: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80028084: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80028088: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x8002808C: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80028090: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80028094: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x80028098: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002809C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x800280A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800280A4: addu        $t2, $t3, $t8
    ctx->r10 = ADD32(ctx->r11, ctx->r24);
    // 0x800280A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800280AC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800280B0: sh          $t5, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r13;
    // 0x800280B4: b           L_800280D4
    // 0x800280B8: nop

        goto L_800280D4;
    // 0x800280B8: nop

L_800280BC:
    // 0x800280BC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800280C0: nop

    // 0x800280C4: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x800280C8: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x800280CC: bne         $at, $zero, L_80028044
    if (ctx->r1 != 0) {
        // 0x800280D0: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80028044;
    }
    // 0x800280D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_800280D4:
    // 0x800280D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800280D8:
    // 0x800280D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800280DC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800280E0: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x800280E4: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800280E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800280EC: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x800280F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800280F4: sll         $t0, $t6, 1
    ctx->r8 = S32(ctx->r14 << 1);
    // 0x800280F8: addu        $t3, $t4, $t0
    ctx->r11 = ADD32(ctx->r12, ctx->r8);
    // 0x800280FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80028100: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x80028104: lh          $t8, 0x425E($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X425E);
    // 0x80028108: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002810C: bne         $t8, $at, L_80028150
    if (ctx->r24 != ctx->r1) {
        // 0x80028110: nop
    
            goto L_80028150;
    }
    // 0x80028110: nop

    // 0x80028114: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80028118: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002811C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80028120: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80028124: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80028128: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8002812C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80028130: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80028134: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80028138: addu        $t6, $t1, $t9
    ctx->r14 = ADD32(ctx->r9, ctx->r25);
    // 0x8002813C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80028140: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80028144: sh          $t5, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r13;
    // 0x80028148: b           L_80028168
    // 0x8002814C: nop

        goto L_80028168;
    // 0x8002814C: nop

L_80028150:
    // 0x80028150: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80028154: nop

    // 0x80028158: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x8002815C: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x80028160: bne         $at, $zero, L_800280D8
    if (ctx->r1 != 0) {
        // 0x80028164: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_800280D8;
    }
    // 0x80028164: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_80028168:
    // 0x80028168: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8002816C: nop

    // 0x80028170: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x80028174: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x80028178: bne         $at, $zero, L_80027FF0
    if (ctx->r1 != 0) {
        // 0x8002817C: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_80027FF0;
    }
    // 0x8002817C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80028180: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80028184: b           L_80028194
    // 0x80028188: nop

        goto L_80028194;
    // 0x80028188: nop

    // 0x8002818C: b           L_80028194
    // 0x80028190: nop

        goto L_80028194;
    // 0x80028190: nop

L_80028194:
    // 0x80028194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002819C: jr          $ra
    // 0x800281A0: nop

    return;
    // 0x800281A0: nop

;}
RECOMP_FUNC void func_800176F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800176F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800176F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800176FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80017700: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80017704: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80017708: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001770C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80017710: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80017714: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80017718: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x8001771C: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80017720: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80017724: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x80017728: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8001772C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80017730: jal         0x80017028
    // 0x80017734: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80017028(rdram, ctx);
        goto after_0;
    // 0x80017734: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80017738: b           L_80017748
    // 0x8001773C: nop

        goto L_80017748;
    // 0x8001773C: nop

    // 0x80017740: b           L_80017748
    // 0x80017744: nop

        goto L_80017748;
    // 0x80017744: nop

L_80017748:
    // 0x80017748: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001774C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80017750: jr          $ra
    // 0x80017754: nop

    return;
    // 0x80017754: nop

;}
RECOMP_FUNC void func_8002613C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002613C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80026140: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80026144: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026148: lbu         $t6, 0x5118($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5118);
    // 0x8002614C: nop

    // 0x80026150: andi        $t7, $t6, 0xFC
    ctx->r15 = ctx->r14 & 0XFC;
    // 0x80026154: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
    // 0x80026158: lbu         $t8, 0x7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7);
    // 0x8002615C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80026160: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80026164: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80026168: sb          $t9, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = ctx->r25;
    // 0x8002616C: b           L_80026174
    // 0x80026170: nop

        goto L_80026174;
    // 0x80026170: nop

L_80026174:
    // 0x80026174: jr          $ra
    // 0x80026178: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80026178: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void alLoadParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FC00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003FC04: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003FC08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003FC0C: beq         $a1, $at, L_8003FD64
    if (ctx->r5 == ctx->r1) {
        // 0x8003FC10: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8003FD64;
    }
    // 0x8003FC10: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8003FC14: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003FC18: bnel        $a1, $at, L_8003FDC8
    if (ctx->r5 != ctx->r1) {
        // 0x8003FC1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003FDC8;
    }
    goto skip_0;
    // 0x8003FC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003FC20: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x8003FC24: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8003FC28: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8003FC2C: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8003FC30: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x8003FC34: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x8003FC38: beql        $v0, $zero, L_8003FC58
    if (ctx->r2 == 0) {
        // 0x8003FC3C: lw          $v0, 0x28($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X28);
            goto L_8003FC58;
    }
    goto skip_1;
    // 0x8003FC3C: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x8003FC40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003FC44: beq         $v0, $a0, L_8003FD18
    if (ctx->r2 == ctx->r4) {
        // 0x8003FC48: lui         $t0, 0x8004
        ctx->r8 = S32(0X8004 << 16);
            goto L_8003FD18;
    }
    // 0x8003FC48: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8003FC4C: b           L_8003FDC8
    // 0x8003FC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003FDC8;
    // 0x8003FC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003FC54: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
L_8003FC58:
    // 0x8003FC58: addiu       $t7, $t7, 0x2AC
    ctx->r15 = ADD32(ctx->r15, 0X2AC);
    // 0x8003FC5C: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x8003FC60: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x8003FC64: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8003FC68: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x8003FC6C: mflo        $t9
    ctx->r25 = lo;
    // 0x8003FC70: bne         $a1, $zero, L_8003FC7C
    if (ctx->r5 != 0) {
        // 0x8003FC74: nop
    
            goto L_8003FC7C;
    }
    // 0x8003FC74: nop

    // 0x8003FC78: break       7
    do_break(2147744888);
L_8003FC7C:
    // 0x8003FC7C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FC80: bne         $a1, $at, L_8003FC94
    if (ctx->r5 != ctx->r1) {
        // 0x8003FC84: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FC94;
    }
    // 0x8003FC84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FC88: bne         $t8, $at, L_8003FC94
    if (ctx->r24 != ctx->r1) {
        // 0x8003FC8C: nop
    
            goto L_8003FC94;
    }
    // 0x8003FC8C: nop

    // 0x8003FC90: break       6
    do_break(2147744912);
L_8003FC94:
    // 0x8003FC94: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FC98: mflo        $t0
    ctx->r8 = lo;
    // 0x8003FC9C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8003FCA0: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8003FCA4: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x8003FCA8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8003FCAC: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x8003FCB0: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8003FCB4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FCB8: mflo        $t4
    ctx->r12 = lo;
    // 0x8003FCBC: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x8003FCC0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8003FCC4: beql        $v1, $zero, L_8003FD0C
    if (ctx->r3 == 0) {
        // 0x8003FCC8: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_8003FD0C;
    }
    goto skip_2;
    // 0x8003FCC8: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_2:
    // 0x8003FCCC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8003FCD0: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x8003FCD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8003FCD8: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x8003FCDC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x8003FCE0: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8003FCE4: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x8003FCE8: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8003FCEC: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8003FCF0: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
    // 0x8003FCF4: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x8003FCF8: jal         0x80046380
    // 0x8003FCFC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    alCopy(rdram, ctx);
        goto after_0;
    // 0x8003FCFC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x8003FD00: b           L_8003FDC8
    // 0x8003FD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003FDC8;
    // 0x8003FD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003FD08: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_8003FD0C:
    // 0x8003FD0C: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x8003FD10: b           L_8003FDC4
    // 0x8003FD14: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_8003FDC4;
    // 0x8003FD14: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_8003FD18:
    // 0x8003FD18: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8003FD1C: addiu       $t0, $t0, -0x22C
    ctx->r8 = ADD32(ctx->r8, -0X22C);
    // 0x8003FD20: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x8003FD24: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8003FD28: beql        $v1, $zero, L_8003FD58
    if (ctx->r3 == 0) {
        // 0x8003FD2C: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_8003FD58;
    }
    goto skip_3;
    // 0x8003FD2C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_3:
    // 0x8003FD30: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8003FD34: sw          $t1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r9;
    // 0x8003FD38: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x8003FD3C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8003FD40: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x8003FD44: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x8003FD48: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8003FD4C: b           L_8003FDC4
    // 0x8003FD50: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
        goto L_8003FDC4;
    // 0x8003FD50: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x8003FD54: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_8003FD58:
    // 0x8003FD58: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x8003FD5C: b           L_8003FDC4
    // 0x8003FD60: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_8003FDC4;
    // 0x8003FD60: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_8003FD64:
    // 0x8003FD64: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8003FD68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003FD6C: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x8003FD70: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x8003FD74: beq         $v0, $zero, L_8003FDC4
    if (ctx->r2 == 0) {
        // 0x8003FD78: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_8003FDC4;
    }
    // 0x8003FD78: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x8003FD7C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003FD80: sw          $t6, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r14;
    // 0x8003FD84: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8003FD88: bne         $v1, $zero, L_8003FDA8
    if (ctx->r3 != 0) {
        // 0x8003FD8C: nop
    
            goto L_8003FDA8;
    }
    // 0x8003FD8C: nop

    // 0x8003FD90: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8003FD94: beql        $v1, $zero, L_8003FDC8
    if (ctx->r3 == 0) {
        // 0x8003FD98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003FDC8;
    }
    goto skip_4;
    // 0x8003FD98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x8003FD9C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8003FDA0: b           L_8003FDC4
    // 0x8003FDA4: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
        goto L_8003FDC4;
    // 0x8003FDA4: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
L_8003FDA8:
    // 0x8003FDA8: bnel        $a0, $v1, L_8003FDC8
    if (ctx->r4 != ctx->r3) {
        // 0x8003FDAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003FDC8;
    }
    goto skip_5;
    // 0x8003FDAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x8003FDB0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8003FDB4: beql        $v1, $zero, L_8003FDC8
    if (ctx->r3 == 0) {
        // 0x8003FDB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003FDC8;
    }
    goto skip_6;
    // 0x8003FDB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x8003FDBC: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x8003FDC0: sw          $t8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r24;
L_8003FDC4:
    // 0x8003FDC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003FDC8:
    // 0x8003FDC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003FDCC: jr          $ra
    // 0x8003FDD0: nop

    return;
    // 0x8003FDD0: nop

;}
RECOMP_FUNC void guMtxL2F(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800362A8: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x800362AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800362B0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800362B4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800362B8: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x800362BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800362C0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800362C4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800362C8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800362CC: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_800362D0:
    // 0x800362D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800362D4: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_800362D8:
    // 0x800362D8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800362DC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800362E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800362E4: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x800362E8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800362EC: and         $t5, $t9, $t2
    ctx->r13 = ctx->r25 & ctx->r10;
    // 0x800362F0: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x800362F4: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800362F8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800362FC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80036300: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80036304: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x80036308: sll         $t5, $t8, 16
    ctx->r13 = S32(ctx->r24 << 16);
    // 0x8003630C: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x80036310: and         $t6, $t5, $t2
    ctx->r14 = ctx->r13 & ctx->r10;
    // 0x80036314: or          $a3, $t9, $t6
    ctx->r7 = ctx->r25 | ctx->r14;
    // 0x80036318: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8003631C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80036320: sw          $a3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r7;
    // 0x80036324: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80036328: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8003632C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80036330: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80036334: div.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80036338: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8003633C: swc1        $f18, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->f18.u32l;
    // 0x80036340: bne         $a0, $t3, L_800362D8
    if (ctx->r4 != ctx->r11) {
        // 0x80036344: swc1        $f16, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->f16.u32l;
            goto L_800362D8;
    }
    // 0x80036344: swc1        $f16, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->f16.u32l;
    // 0x80036348: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003634C: bne         $a2, $t4, L_800362D0
    if (ctx->r6 != ctx->r12) {
        // 0x80036350: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_800362D0;
    }
    // 0x80036350: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x80036354: jr          $ra
    // 0x80036358: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80036358: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void __vsPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D384: lbu         $t7, 0x31($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X31);
    // 0x8003D388: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x8003D38C: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x8003D390: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8003D394: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8003D398: lbu         $t0, 0x7($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X7);
    // 0x8003D39C: lbu         $t2, 0xC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XC);
    // 0x8003D3A0: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x8003D3A4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8003D3A8: bgtzl       $v1, L_8003D3B8
    if (SIGNED(ctx->r3) > 0) {
        // 0x8003D3AC: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_8003D3B8;
    }
    goto skip_0;
    // 0x8003D3AC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_0:
    // 0x8003D3B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003D3B4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_8003D3B8:
    // 0x8003D3B8: bne         $at, $zero, L_8003D3C4
    if (ctx->r1 != 0) {
        // 0x8003D3BC: nop
    
            goto L_8003D3C4;
    }
    // 0x8003D3BC: nop

    // 0x8003D3C0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_8003D3C4:
    // 0x8003D3C4: jr          $ra
    // 0x8003D3C8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8003D3C8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void func_8002A800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A800: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A808: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8002A80C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8002A810: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8002A814: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8002A818: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A81C: jal         0x80015538
    // 0x8002A820: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8002A820: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_0:
    // 0x8002A824: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8002A828: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A82C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8002A830: nop

    // 0x8002A834: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002A838: nop

    // 0x8002A83C: bc1t        L_8002A864
    if (c1cs) {
        // 0x8002A840: nop
    
            goto L_8002A864;
    }
    // 0x8002A840: nop

    // 0x8002A844: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002A848: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002A84C: nop

    // 0x8002A850: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8002A854: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002A858: nop

    // 0x8002A85C: bc1f        L_8002A86C
    if (!c1cs) {
        // 0x8002A860: nop
    
            goto L_8002A86C;
    }
    // 0x8002A860: nop

L_8002A864:
    // 0x8002A864: b           L_8002A8A4
    // 0x8002A868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A8A4;
    // 0x8002A868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A86C:
    // 0x8002A86C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002A870: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002A874: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A878: nop

    // 0x8002A87C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8002A880: nop

    // 0x8002A884: bc1f        L_8002A894
    if (!c1cs) {
        // 0x8002A888: nop
    
            goto L_8002A894;
    }
    // 0x8002A888: nop

    // 0x8002A88C: b           L_8002A8A4
    // 0x8002A890: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A8A4;
    // 0x8002A890: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A894:
    // 0x8002A894: b           L_8002A8A4
    // 0x8002A898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A8A4;
    // 0x8002A898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A89C: b           L_8002A8A4
    // 0x8002A8A0: nop

        goto L_8002A8A4;
    // 0x8002A8A0: nop

L_8002A8A4:
    // 0x8002A8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A8A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A8AC: jr          $ra
    // 0x8002A8B0: nop

    return;
    // 0x8002A8B0: nop

;}
RECOMP_FUNC void alSeqpPlay(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800346E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800346E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800346E8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x800346EC: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x800346F0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800346F4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x800346F8: jal         0x8003E80C
    // 0x800346FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x800346FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034704: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80034708: jr          $ra
    // 0x8003470C: nop

    return;
    // 0x8003470C: nop

;}
RECOMP_FUNC void func_80023E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023E80: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80023E84: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80023E88:
    // 0x80023E88: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80023E8C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80023E90: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80023E94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80023E98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80023E9C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80023EA0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80023EA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80023EA8: lh          $t9, 0x4254($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4254);
    // 0x80023EAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80023EB0: beq         $t9, $at, L_8002419C
    if (ctx->r25 == ctx->r1) {
        // 0x80023EB4: nop
    
            goto L_8002419C;
    }
    // 0x80023EB4: nop

    // 0x80023EB8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80023EBC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80023EC0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80023EC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80023EC8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80023ECC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80023ED0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80023ED4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80023ED8: lh          $t2, 0x4254($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4254);
    // 0x80023EDC: nop

    // 0x80023EE0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80023EE4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80023EE8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80023EEC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80023EF0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80023EF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80023EF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80023EFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80023F00: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80023F04: lbu         $t5, 0x425A($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X425A);
    // 0x80023F08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023F0C: bne         $t5, $at, L_80023FD8
    if (ctx->r13 != ctx->r1) {
        // 0x80023F10: nop
    
            goto L_80023FD8;
    }
    // 0x80023F10: nop

    // 0x80023F14: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80023F18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80023F1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80023F20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80023F24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80023F28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80023F2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80023F30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80023F34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80023F38: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80023F3C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x80023F40: beq         $t0, $at, L_80023FD0
    if (ctx->r8 == ctx->r1) {
        // 0x80023F44: nop
    
            goto L_80023FD0;
    }
    // 0x80023F44: nop

    // 0x80023F48: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80023F4C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x80023F50: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80023F54: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80023F58: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80023F5C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80023F60: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80023F64: addu        $t3, $t2, $t8
    ctx->r11 = ADD32(ctx->r10, ctx->r24);
    // 0x80023F68: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x80023F6C: nop

    // 0x80023F70: beq         $t4, $at, L_80023FD0
    if (ctx->r12 == ctx->r1) {
        // 0x80023F74: nop
    
            goto L_80023FD0;
    }
    // 0x80023F74: nop

    // 0x80023F78: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80023F7C: beq         $t0, $at, L_80023FD0
    if (ctx->r8 == ctx->r1) {
        // 0x80023F80: nop
    
            goto L_80023FD0;
    }
    // 0x80023F80: nop

    // 0x80023F84: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80023F88: beq         $t4, $at, L_80023FD0
    if (ctx->r12 == ctx->r1) {
        // 0x80023F8C: nop
    
            goto L_80023FD0;
    }
    // 0x80023F8C: nop

    // 0x80023F90: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80023F94: beq         $t0, $at, L_80023FD0
    if (ctx->r8 == ctx->r1) {
        // 0x80023F98: nop
    
            goto L_80023FD0;
    }
    // 0x80023F98: nop

    // 0x80023F9C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80023FA0: beq         $t4, $at, L_80023FD0
    if (ctx->r12 == ctx->r1) {
        // 0x80023FA4: nop
    
            goto L_80023FD0;
    }
    // 0x80023FA4: nop

    // 0x80023FA8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80023FAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80023FB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80023FB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80023FB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80023FBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80023FC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80023FC4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80023FC8: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80023FCC: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
L_80023FD0:
    // 0x80023FD0: b           L_8002419C
    // 0x80023FD4: nop

        goto L_8002419C;
    // 0x80023FD4: nop

L_80023FD8:
    // 0x80023FD8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80023FDC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80023FE0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80023FE4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80023FE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80023FEC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80023FF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80023FF4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80023FF8: lbu         $t2, 0x425A($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X425A);
    // 0x80023FFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80024000: bne         $t2, $at, L_80024034
    if (ctx->r10 != ctx->r1) {
        // 0x80024004: nop
    
            goto L_80024034;
    }
    // 0x80024004: nop

    // 0x80024008: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8002400C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80024010: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x80024014: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80024018: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002401C: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x80024020: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80024024: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80024028: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8002402C: b           L_8002419C
    // 0x80024030: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
        goto L_8002419C;
    // 0x80024030: sh          $t8, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r24;
L_80024034:
    // 0x80024034: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80024038: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8002403C: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80024040: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80024044: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80024048: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8002404C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80024050: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80024054: lbu         $t5, 0x425A($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X425A);
    // 0x80024058: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8002405C: bne         $t5, $at, L_80024134
    if (ctx->r13 != ctx->r1) {
        // 0x80024060: nop
    
            goto L_80024134;
    }
    // 0x80024060: nop

    // 0x80024064: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80024068: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8002406C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80024070: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80024074: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80024078: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8002407C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80024080: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80024084: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80024088: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x8002408C: addiu       $at, $zero, 0x1C8
    ctx->r1 = ADD32(0, 0X1C8);
    // 0x80024090: bne         $t3, $at, L_800240A8
    if (ctx->r11 != ctx->r1) {
        // 0x80024094: nop
    
            goto L_800240A8;
    }
    // 0x80024094: nop

    // 0x80024098: lh          $t8, 0xA4($t2)
    ctx->r24 = MEM_H(ctx->r10, 0XA4);
    // 0x8002409C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800240A0: beq         $t8, $at, L_800240EC
    if (ctx->r24 == ctx->r1) {
        // 0x800240A4: nop
    
            goto L_800240EC;
    }
    // 0x800240A4: nop

L_800240A8:
    // 0x800240A8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800240AC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800240B0: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x800240B4: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x800240B8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800240BC: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x800240C0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800240C4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800240C8: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x800240CC: lh          $t7, 0xE4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE4);
    // 0x800240D0: addiu       $at, $zero, 0x1CF
    ctx->r1 = ADD32(0, 0X1CF);
    // 0x800240D4: bne         $t7, $at, L_800240F4
    if (ctx->r15 != ctx->r1) {
        // 0x800240D8: nop
    
            goto L_800240F4;
    }
    // 0x800240D8: nop

    // 0x800240DC: lh          $t9, 0x1304($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X1304);
    // 0x800240E0: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800240E4: bne         $t9, $at, L_800240F4
    if (ctx->r25 != ctx->r1) {
        // 0x800240E8: nop
    
            goto L_800240F4;
    }
    // 0x800240E8: nop

L_800240EC:
    // 0x800240EC: b           L_8002412C
    // 0x800240F0: nop

        goto L_8002412C;
    // 0x800240F0: nop

L_800240F4:
    // 0x800240F4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800240F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800240FC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80024100: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80024104: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80024108: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8002410C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80024110: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80024114: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80024118: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x8002411C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80024120: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80024124: jal         0x800225D8
    // 0x80024128: nop

    func_800225D8(rdram, ctx);
        goto after_0;
    // 0x80024128: nop

    after_0:
L_8002412C:
    // 0x8002412C: b           L_8002419C
    // 0x80024130: nop

        goto L_8002419C;
    // 0x80024130: nop

L_80024134:
    // 0x80024134: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80024138: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8002413C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80024140: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80024144: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80024148: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8002414C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80024150: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x80024154: lbu         $t4, 0x425A($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X425A);
    // 0x80024158: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8002415C: bne         $t4, $at, L_8002419C
    if (ctx->r12 != ctx->r1) {
        // 0x80024160: nop
    
            goto L_8002419C;
    }
    // 0x80024160: nop

    // 0x80024164: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80024168: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002416C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80024170: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80024174: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80024178: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8002417C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80024180: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80024184: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80024188: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
    // 0x8002418C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80024190: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80024194: jal         0x800225D8
    // 0x80024198: nop

    func_800225D8(rdram, ctx);
        goto after_1;
    // 0x80024198: nop

    after_1:
L_8002419C:
    // 0x8002419C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800241A0: nop

    // 0x800241A4: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800241A8: slti        $at, $t3, 0x6
    ctx->r1 = SIGNED(ctx->r11) < 0X6 ? 1 : 0;
    // 0x800241AC: bne         $at, $zero, L_80023E88
    if (ctx->r1 != 0) {
        // 0x800241B0: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_80023E88;
    }
    // 0x800241B0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x800241B4: b           L_800241BC
    // 0x800241B8: nop

        goto L_800241BC;
    // 0x800241B8: nop

L_800241BC:
    // 0x800241BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800241C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800241C4: jr          $ra
    // 0x800241C8: nop

    return;
    // 0x800241C8: nop

;}
RECOMP_FUNC void func_80002E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002E1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80002E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002E24: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80002E28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80002E2C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80002E30: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80002E34: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80002E38: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80002E3C: addiu       $a1, $a1, 0x2DB8
    ctx->r5 = ADD32(ctx->r5, 0X2DB8);
    // 0x80002E40: addiu       $a0, $a0, 0x2E80
    ctx->r4 = ADD32(ctx->r4, 0X2E80);
    // 0x80002E44: jal         0x800319C0
    // 0x80002E48: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80002E48: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
    // 0x80002E4C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80002E50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002E54: sw          $t6, 0x2E98($at)
    MEM_W(0X2E98, ctx->r1) = ctx->r14;
    // 0x80002E58: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80002E5C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002E60: sw          $t7, 0x2E9C($at)
    MEM_W(0X2E9C, ctx->r1) = ctx->r15;
    // 0x80002E64: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80002E68: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80002E6C: lw          $a2, 0x2E9C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2E9C);
    // 0x80002E70: lw          $a1, 0x2E98($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E98);
    // 0x80002E74: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80002E78: jal         0x800326A0
    // 0x80002E7C: addiu       $a0, $a0, 0x2D40
    ctx->r4 = ADD32(ctx->r4, 0X2D40);
    alHeapInit(rdram, ctx);
        goto after_1;
    // 0x80002E7C: addiu       $a0, $a0, 0x2D40
    ctx->r4 = ADD32(ctx->r4, 0X2D40);
    after_1:
    // 0x80002E80: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80002E84: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002E88: sw          $t8, -0x5D24($at)
    MEM_W(-0X5D24, ctx->r1) = ctx->r24;
    // 0x80002E8C: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x80002E90: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002E94: sb          $t9, -0x5D40($at)
    MEM_B(-0X5D40, ctx->r1) = ctx->r25;
    // 0x80002E98: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80002E9C: addiu       $t0, $t0, -0x5CE8
    ctx->r8 = ADD32(ctx->r8, -0X5CE8);
    // 0x80002EA0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002EA4: sw          $t0, -0x5D3C($at)
    MEM_W(-0X5D3C, ctx->r1) = ctx->r8;
    // 0x80002EA8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80002EAC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002EB0: sw          $t1, -0x5D20($at)
    MEM_W(-0X5D20, ctx->r1) = ctx->r9;
    // 0x80002EB4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80002EB8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002EBC: sw          $t2, -0x5D1C($at)
    MEM_W(-0X5D1C, ctx->r1) = ctx->r10;
    // 0x80002EC0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80002EC4: lw          $t3, -0x5D60($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5D60);
    // 0x80002EC8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002ECC: sw          $t3, -0x5D28($at)
    MEM_W(-0X5D28, ctx->r1) = ctx->r11;
    // 0x80002ED0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80002ED4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80002ED8: addiu       $a1, $a1, -0x5D38
    ctx->r5 = ADD32(ctx->r5, -0X5D38);
    // 0x80002EDC: jal         0x8000D120
    // 0x80002EE0: addiu       $a0, $a0, -0x5D5C
    ctx->r4 = ADD32(ctx->r4, -0X5D5C);
    amCreateAudioMgr(rdram, ctx);
        goto after_2;
    // 0x80002EE0: addiu       $a0, $a0, -0x5D5C
    ctx->r4 = ADD32(ctx->r4, -0X5D5C);
    after_2:
    // 0x80002EE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80002EE8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80002EEC: nop

    // 0x80002EF0: beq         $t4, $zero, L_80002F04
    if (ctx->r12 == 0) {
        // 0x80002EF4: nop
    
            goto L_80002F04;
    }
    // 0x80002EF4: nop

    // 0x80002EF8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80002EFC: b           L_80002F6C
    // 0x80002F00: nop

        goto L_80002F6C;
    // 0x80002F00: nop

L_80002F04:
    // 0x80002F04: jal         0x80003304
    // 0x80002F08: nop

    func_80003304(rdram, ctx);
        goto after_3;
    // 0x80002F08: nop

    after_3:
    // 0x80002F0C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80002F10: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80002F14: nop

    // 0x80002F18: beq         $t5, $zero, L_80002F2C
    if (ctx->r13 == 0) {
        // 0x80002F1C: nop
    
            goto L_80002F2C;
    }
    // 0x80002F1C: nop

    // 0x80002F20: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80002F24: b           L_80002F6C
    // 0x80002F28: nop

        goto L_80002F6C;
    // 0x80002F28: nop

L_80002F2C:
    // 0x80002F2C: jal         0x80005B14
    // 0x80002F30: nop

    func_80005B14(rdram, ctx);
        goto after_4;
    // 0x80002F30: nop

    after_4:
    // 0x80002F34: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80002F38: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80002F3C: nop

    // 0x80002F40: beq         $t6, $zero, L_80002F54
    if (ctx->r14 == 0) {
        // 0x80002F44: nop
    
            goto L_80002F54;
    }
    // 0x80002F44: nop

    // 0x80002F48: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80002F4C: b           L_80002F6C
    // 0x80002F50: nop

        goto L_80002F6C;
    // 0x80002F50: nop

L_80002F54:
    // 0x80002F54: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80002F58: sb          $zero, 0x2DB7($at)
    MEM_B(0X2DB7, ctx->r1) = 0;
    // 0x80002F5C: b           L_80002F6C
    // 0x80002F60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80002F6C;
    // 0x80002F60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80002F64: b           L_80002F6C
    // 0x80002F68: nop

        goto L_80002F6C;
    // 0x80002F68: nop

L_80002F6C:
    // 0x80002F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002F70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80002F74: jr          $ra
    // 0x80002F78: nop

    return;
    // 0x80002F78: nop

;}
RECOMP_FUNC void func_80023754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002375C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023760: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023764: nop

    // 0x80023768: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x8002376C: nop

    // 0x80023770: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80023774: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80023778: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002377C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80023780: addiu       $at, $zero, 0x20D
    ctx->r1 = ADD32(0, 0X20D);
    // 0x80023784: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80023788: nop

    // 0x8002378C: beq         $t9, $at, L_800237DC
    if (ctx->r25 == ctx->r1) {
        // 0x80023790: nop
    
            goto L_800237DC;
    }
    // 0x80023790: nop

    // 0x80023794: addiu       $at, $zero, 0x20E
    ctx->r1 = ADD32(0, 0X20E);
    // 0x80023798: beq         $t9, $at, L_800237DC
    if (ctx->r25 == ctx->r1) {
        // 0x8002379C: nop
    
            goto L_800237DC;
    }
    // 0x8002379C: nop

    // 0x800237A0: addiu       $at, $zero, 0x20F
    ctx->r1 = ADD32(0, 0X20F);
    // 0x800237A4: beq         $t9, $at, L_800237DC
    if (ctx->r25 == ctx->r1) {
        // 0x800237A8: nop
    
            goto L_800237DC;
    }
    // 0x800237A8: nop

    // 0x800237AC: addiu       $at, $zero, 0x210
    ctx->r1 = ADD32(0, 0X210);
    // 0x800237B0: beq         $t9, $at, L_800237DC
    if (ctx->r25 == ctx->r1) {
        // 0x800237B4: nop
    
            goto L_800237DC;
    }
    // 0x800237B4: nop

    // 0x800237B8: addiu       $at, $zero, 0x211
    ctx->r1 = ADD32(0, 0X211);
    // 0x800237BC: beq         $t9, $at, L_800237DC
    if (ctx->r25 == ctx->r1) {
        // 0x800237C0: nop
    
            goto L_800237DC;
    }
    // 0x800237C0: nop

    // 0x800237C4: addiu       $at, $zero, 0x212
    ctx->r1 = ADD32(0, 0X212);
    // 0x800237C8: beq         $t9, $at, L_800237DC
    if (ctx->r25 == ctx->r1) {
        // 0x800237CC: nop
    
            goto L_800237DC;
    }
    // 0x800237CC: nop

    // 0x800237D0: addiu       $at, $zero, 0x216
    ctx->r1 = ADD32(0, 0X216);
    // 0x800237D4: bne         $t9, $at, L_80023814
    if (ctx->r25 != ctx->r1) {
        // 0x800237D8: nop
    
            goto L_80023814;
    }
    // 0x800237D8: nop

L_800237DC:
    // 0x800237DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800237E0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800237E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800237E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800237EC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800237F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800237F4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800237F8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800237FC: lh          $t2, 0x4250($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4250);
    // 0x80023800: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80023804: bne         $t2, $at, L_80023814
    if (ctx->r10 != ctx->r1) {
        // 0x80023808: nop
    
            goto L_80023814;
    }
    // 0x80023808: nop

    // 0x8002380C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80023810: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
L_80023814:
    // 0x80023814: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80023818: nop

    // 0x8002381C: beq         $t4, $zero, L_80023844
    if (ctx->r12 == 0) {
        // 0x80023820: nop
    
            goto L_80023844;
    }
    // 0x80023820: nop

    // 0x80023824: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80023828: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002382C: sb          $t5, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r13;
    // 0x80023830: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80023834: jal         0x800225D8
    // 0x80023838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800225D8(rdram, ctx);
        goto after_0;
    // 0x80023838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8002383C: b           L_800238EC
    // 0x80023840: nop

        goto L_800238EC;
    // 0x80023840: nop

L_80023844:
    // 0x80023844: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80023848: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002384C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80023850: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80023854: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80023858: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002385C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80023860: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80023864: lb          $t8, 0x4252($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4252);
    // 0x80023868: nop

    // 0x8002386C: beq         $t8, $zero, L_8002388C
    if (ctx->r24 == 0) {
        // 0x80023870: nop
    
            goto L_8002388C;
    }
    // 0x80023870: nop

    // 0x80023874: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80023878: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002387C: sw          $t9, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r25;
    // 0x80023880: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80023884: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023888: sb          $t0, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r8;
L_8002388C:
    // 0x8002388C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80023890: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023894: sw          $t1, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r9;
    // 0x80023898: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8002389C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800238A0: sw          $t2, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r10;
    // 0x800238A4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800238A8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800238AC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800238B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800238B4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800238B8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800238BC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800238C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800238C4: lh          $t5, 0x4234($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4234);
    // 0x800238C8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800238CC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800238D0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800238D4: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x800238D8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800238DC: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x800238E0: nop

    // 0x800238E4: jalr        $t9
    // 0x800238E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800238E8: nop

    after_1:
L_800238EC:
    // 0x800238EC: b           L_800238F4
    // 0x800238F0: nop

        goto L_800238F4;
    // 0x800238F0: nop

L_800238F4:
    // 0x800238F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800238F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800238FC: jr          $ra
    // 0x80023900: nop

    return;
    // 0x80023900: nop

;}
RECOMP_FUNC void func_80017EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017EB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80017EBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017EC0: jal         0x8000B5DC
    // 0x80017EC4: nop

    func_8000B5DC(rdram, ctx);
        goto after_0;
    // 0x80017EC4: nop

    after_0:
    // 0x80017EC8: b           L_80017ED0
    // 0x80017ECC: nop

        goto L_80017ED0;
    // 0x80017ECC: nop

L_80017ED0:
    // 0x80017ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80017ED8: jr          $ra
    // 0x80017EDC: nop

    return;
    // 0x80017EDC: nop

;}
RECOMP_FUNC void func_80024D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024D74: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80024D78: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80024D7C: beq         $at, $zero, L_80024D9C
    if (ctx->r1 == 0) {
        // 0x80024D80: nop
    
            goto L_80024D9C;
    }
    // 0x80024D80: nop

    // 0x80024D84: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80024D88: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80024D8C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80024D90: addiu       $t7, $t6, 0x68
    ctx->r15 = ADD32(ctx->r14, 0X68);
    // 0x80024D94: b           L_80024DB0
    // 0x80024D98: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
        goto L_80024DB0;
    // 0x80024D98: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
L_80024D9C:
    // 0x80024D9C: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80024DA0: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80024DA4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80024DA8: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80024DAC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_80024DB0:
    // 0x80024DB0: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_80024DB4:
    // 0x80024DB4: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x80024DB8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80024DBC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80024DC0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80024DC4: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x80024DC8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80024DCC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80024DD0: lbu         $t1, -0x59C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X59C0);
    // 0x80024DD4: lbu         $t4, 0x7450($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X7450);
    // 0x80024DD8: nop

    // 0x80024DDC: beq         $t1, $t4, L_80024DEC
    if (ctx->r9 == ctx->r12) {
        // 0x80024DE0: nop
    
            goto L_80024DEC;
    }
    // 0x80024DE0: nop

    // 0x80024DE4: b           L_80024E14
    // 0x80024DE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80024E14;
    // 0x80024DE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80024DEC:
    // 0x80024DEC: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x80024DF0: nop

    // 0x80024DF4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80024DF8: slti        $at, $t6, 0x7
    ctx->r1 = SIGNED(ctx->r14) < 0X7 ? 1 : 0;
    // 0x80024DFC: bne         $at, $zero, L_80024DB4
    if (ctx->r1 != 0) {
        // 0x80024E00: sw          $t6, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r14;
            goto L_80024DB4;
    }
    // 0x80024E00: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x80024E04: b           L_80024E14
    // 0x80024E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80024E14;
    // 0x80024E08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80024E0C: b           L_80024E14
    // 0x80024E10: nop

        goto L_80024E14;
    // 0x80024E10: nop

L_80024E14:
    // 0x80024E14: jr          $ra
    // 0x80024E18: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80024E18: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8000B25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B25C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000B260: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000B264: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8000B268: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8000B26C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8000B270: bltz        $a0, L_8000B2A0
    if (SIGNED(ctx->r4) < 0) {
        // 0x8000B274: nop
    
            goto L_8000B2A0;
    }
    // 0x8000B274: nop

    // 0x8000B278: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B27C: sh          $a0, 0x2D9C($at)
    MEM_H(0X2D9C, ctx->r1) = ctx->r4;
    // 0x8000B280: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000B284: lh          $t6, 0x2D9C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D9C);
    // 0x8000B288: nop

    // 0x8000B28C: slti        $at, $t6, 0x168
    ctx->r1 = SIGNED(ctx->r14) < 0X168 ? 1 : 0;
    // 0x8000B290: bne         $at, $zero, L_8000B2A0
    if (ctx->r1 != 0) {
        // 0x8000B294: nop
    
            goto L_8000B2A0;
    }
    // 0x8000B294: nop

    // 0x8000B298: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B29C: sh          $zero, 0x2D9C($at)
    MEM_H(0X2D9C, ctx->r1) = 0;
L_8000B2A0:
    // 0x8000B2A0: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000B2A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000B2A8: nop

    // 0x8000B2AC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8000B2B0: nop

    // 0x8000B2B4: bc1f        L_8000B2C8
    if (!c1cs) {
        // 0x8000B2B8: nop
    
            goto L_8000B2C8;
    }
    // 0x8000B2B8: nop

    // 0x8000B2BC: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000B2C0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B2C4: swc1        $f8, 0x2D8C($at)
    MEM_W(0X2D8C, ctx->r1) = ctx->f8.u32l;
L_8000B2C8:
    // 0x8000B2C8: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8000B2CC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000B2D0: nop

    // 0x8000B2D4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8000B2D8: nop

    // 0x8000B2DC: bc1f        L_8000B2F8
    if (!c1cs) {
        // 0x8000B2E0: nop
    
            goto L_8000B2F8;
    }
    // 0x8000B2E0: nop

    // 0x8000B2E4: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8000B2E8: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000B2EC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B2F0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8000B2F4: swc1        $f6, 0x2D90($at)
    MEM_W(0X2D90, ctx->r1) = ctx->f6.u32l;
L_8000B2F8:
    // 0x8000B2F8: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8000B2FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000B300: nop

    // 0x8000B304: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8000B308: nop

    // 0x8000B30C: bc1f        L_8000B320
    if (!c1cs) {
        // 0x8000B310: nop
    
            goto L_8000B320;
    }
    // 0x8000B310: nop

    // 0x8000B314: lwc1        $f16, 0xC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8000B318: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B31C: swc1        $f16, 0x2D94($at)
    MEM_W(0X2D94, ctx->r1) = ctx->f16.u32l;
L_8000B320:
    // 0x8000B320: lwc1        $f18, 0x10($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8000B324: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000B328: nop

    // 0x8000B32C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x8000B330: nop

    // 0x8000B334: bc1f        L_8000B380
    if (!c1cs) {
        // 0x8000B338: nop
    
            goto L_8000B380;
    }
    // 0x8000B338: nop

    // 0x8000B33C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B340: lwc1        $f8, 0x2D94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2D94);
    // 0x8000B344: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8000B348: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B34C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8000B350: swc1        $f10, 0x2D98($at)
    MEM_W(0X2D98, ctx->r1) = ctx->f10.u32l;
    // 0x8000B354: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B358: lwc1        $f16, 0x2D98($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2D98);
    // 0x8000B35C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000B360: nop

    // 0x8000B364: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8000B368: nop

    // 0x8000B36C: bc1f        L_8000B380
    if (!c1cs) {
        // 0x8000B370: nop
    
            goto L_8000B380;
    }
    // 0x8000B370: nop

    // 0x8000B374: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000B378: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000B37C: swc1        $f4, 0x2D98($at)
    MEM_W(0X2D98, ctx->r1) = ctx->f4.u32l;
L_8000B380:
    // 0x8000B380: b           L_8000B388
    // 0x8000B384: nop

        goto L_8000B388;
    // 0x8000B384: nop

L_8000B388:
    // 0x8000B388: jr          $ra
    // 0x8000B38C: nop

    return;
    // 0x8000B38C: nop

;}
RECOMP_FUNC void Math_SolvePlaneZ(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015E34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80015E38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80015E3C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80015E40: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80015E44: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x80015E48: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x80015E4C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80015E50: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80015E54: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80015E58: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80015E5C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80015E60: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80015E64: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x80015E68: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80015E6C: bne         $t6, $zero, L_80015E7C
    if (ctx->r14 != 0) {
        // 0x80015E70: nop
    
            goto L_80015E7C;
    }
    // 0x80015E70: nop

    // 0x80015E74: beq         $t7, $zero, L_80015EF8
    if (ctx->r15 == 0) {
        // 0x80015E78: nop
    
            goto L_80015EF8;
    }
    // 0x80015E78: nop

L_80015E7C:
    // 0x80015E7C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80015E80: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80015E84: jal         0x8003687C
    // 0x80015E88: nop

    __ll_to_f_recomp(rdram, ctx);
        goto after_0;
    // 0x80015E88: nop

    after_0:
    // 0x80015E8C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80015E90: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80015E94: jal         0x8003687C
    // 0x80015E98: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_1;
    // 0x80015E98: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    after_1:
    // 0x80015E9C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80015EA0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80015EA4: nor         $a0, $a0, $zero
    ctx->r4 = ~(ctx->r4 | 0);
    // 0x80015EA8: sltiu       $at, $a1, 0x1
    ctx->r1 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80015EAC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x80015EB0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80015EB4: jal         0x8003687C
    // 0x80015EB8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    __ll_to_f_recomp(rdram, ctx);
        goto after_2;
    // 0x80015EB8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_2:
    // 0x80015EBC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80015EC0: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80015EC4: jal         0x8003687C
    // 0x80015EC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __ll_to_f_recomp(rdram, ctx);
        goto after_3;
    // 0x80015EC8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x80015ECC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80015ED0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80015ED4: mul.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80015ED8: nop

    // 0x80015EDC: mul.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80015EE0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80015EE4: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x80015EE8: nop

    // 0x80015EEC: div.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80015EF0: b           L_80015F04
    // 0x80015EF4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_80015F04;
    // 0x80015EF4: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_80015EF8:
    // 0x80015EF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015EFC: nop

    // 0x80015F00: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
L_80015F04:
    // 0x80015F04: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80015F08: b           L_80015F18
    // 0x80015F0C: nop

        goto L_80015F18;
    // 0x80015F0C: nop

    // 0x80015F10: b           L_80015F18
    // 0x80015F14: nop

        goto L_80015F18;
    // 0x80015F14: nop

L_80015F18:
    // 0x80015F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80015F1C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80015F20: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80015F24: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80015F28: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80015F2C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80015F30: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80015F34: jr          $ra
    // 0x80015F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80015F38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void alSeqpSetTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034780: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034784: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80034788: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x8003478C: andi        $t2, $a1, 0xFF00
    ctx->r10 = ctx->r5 & 0XFF00;
    // 0x80034790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034794: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80034798: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8003479C: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x800347A0: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800347A4: sra         $t3, $t2, 8
    ctx->r11 = S32(SIGNED(ctx->r10) >> 8);
    // 0x800347A8: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x800347AC: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x800347B0: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    // 0x800347B4: sb          $t8, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r24;
    // 0x800347B8: sb          $t1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r9;
    // 0x800347BC: sb          $t3, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r11;
    // 0x800347C0: sb          $t4, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r12;
    // 0x800347C4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800347C8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x800347CC: jal         0x8003E80C
    // 0x800347D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x800347D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800347D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800347D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800347DC: jr          $ra
    // 0x800347E0: nop

    return;
    // 0x800347E0: nop

;}
RECOMP_FUNC void alSndpSetPitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800353A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800353A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800353A8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x800353AC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800353B0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x800353B4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x800353B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800353BC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800353C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800353C4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800353C8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800353CC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800353D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800353D4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x800353D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800353DC: jal         0x8003E80C
    // 0x800353E0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x800353E0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800353E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800353E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800353EC: jr          $ra
    // 0x800353F0: nop

    return;
    // 0x800353F0: nop

;}
RECOMP_FUNC void func_8002A4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A4E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A4E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A4E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002A4EC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8002A4F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002A4F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002A4F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002A4FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002A500: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002A504: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002A508: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002A50C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002A510: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8002A514: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002A518: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002A51C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002A520: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8002A524: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002A528: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8002A52C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002A530: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002A534: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8002A538: jal         0x800156C4
    // 0x8002A53C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_0;
    // 0x8002A53C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8002A540: b           L_8002A550
    // 0x8002A544: nop

        goto L_8002A550;
    // 0x8002A544: nop

    // 0x8002A548: b           L_8002A550
    // 0x8002A54C: nop

        goto L_8002A550;
    // 0x8002A54C: nop

L_8002A550:
    // 0x8002A550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A558: jr          $ra
    // 0x8002A55C: nop

    return;
    // 0x8002A55C: nop

;}
RECOMP_FUNC void alSndpStop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800355A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800355A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800355A8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x800355AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800355B0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x800355B4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x800355B8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800355BC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x800355C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800355C4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800355C8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800355CC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800355D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800355D4: jal         0x8003E80C
    // 0x800355D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x800355D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800355DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800355E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800355E4: jr          $ra
    // 0x800355E8: nop

    return;
    // 0x800355E8: nop

;}
RECOMP_FUNC void func_80019050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019050: addiu       $sp, $sp, -0x1B8
    ctx->r29 = ADD32(ctx->r29, -0X1B8);
    // 0x80019054: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80019058: sw          $a0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r4;
    // 0x8001905C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80019060: jal         0x800361F0
    // 0x80019064: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80019064: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80019068: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001906C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80019070: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80019074: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019078: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001907C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019080: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80019084: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80019088: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001908C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80019090: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x80019094: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x80019098: jal         0x80037200
    // 0x8001909C: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    guTranslateF(rdram, ctx);
        goto after_1;
    // 0x8001909C: addiu       $a0, $sp, 0x178
    ctx->r4 = ADD32(ctx->r29, 0X178);
    after_1:
    // 0x800190A0: lw          $t0, 0x1B8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1B8);
    // 0x800190A4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800190A8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800190AC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800190B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800190B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800190B8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800190BC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800190C0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800190C4: lw          $a1, 0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XC);
    // 0x800190C8: lw          $a2, 0x10($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X10);
    // 0x800190CC: lw          $a3, 0x14($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X14);
    // 0x800190D0: jal         0x80037490
    // 0x800190D4: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    guScaleF(rdram, ctx);
        goto after_2;
    // 0x800190D4: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    after_2:
    // 0x800190D8: lw          $t4, 0x1B8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1B8);
    // 0x800190DC: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x800190E0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800190E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800190E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800190EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800190F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800190F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800190F8: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x800190FC: lw          $a1, 0x4168($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4168);
    // 0x80019100: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x80019104: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80019108: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8001910C: jal         0x800372A0
    // 0x80019110: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x80019110: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80019114: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x80019118: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x8001911C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80019120: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019124: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80019128: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001912C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80019130: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80019134: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x80019138: lw          $a1, 0x416C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X416C);
    // 0x8001913C: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80019140: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80019144: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80019148: jal         0x800372A0
    // 0x8001914C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_4;
    // 0x8001914C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x80019150: lw          $t8, 0x1B8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1B8);
    // 0x80019154: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x80019158: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8001915C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80019160: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80019164: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80019168: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001916C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80019170: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80019174: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x80019178: lw          $a1, 0x4170($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4170);
    // 0x8001917C: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80019180: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80019184: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80019188: jal         0x800372A0
    // 0x8001918C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_5;
    // 0x8001918C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80019190: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80019194:
    // 0x80019194: lw          $t0, 0x1B8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1B8);
    // 0x80019198: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8001919C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800191A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800191A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800191A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800191AC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800191B0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800191B4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800191B8: addu        $s0, $s0, $t3
    ctx->r16 = ADD32(ctx->r16, ctx->r11);
    // 0x800191BC: lbu         $s0, 0x4283($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X4283);
    // 0x800191C0: nop

    // 0x800191C4: beq         $s0, $zero, L_800191EC
    if (ctx->r16 == 0) {
        // 0x800191C8: nop
    
            goto L_800191EC;
    }
    // 0x800191C8: nop

    // 0x800191CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800191D0: beq         $s0, $at, L_80019208
    if (ctx->r16 == ctx->r1) {
        // 0x800191D4: nop
    
            goto L_80019208;
    }
    // 0x800191D4: nop

    // 0x800191D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800191DC: beq         $s0, $at, L_80019224
    if (ctx->r16 == ctx->r1) {
        // 0x800191E0: nop
    
            goto L_80019224;
    }
    // 0x800191E0: nop

    // 0x800191E4: b           L_800192F4
    // 0x800191E8: nop

        goto L_800192F4;
    // 0x800191E8: nop

L_800191EC:
    // 0x800191EC: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x800191F0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x800191F4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x800191F8: jal         0x80036400
    // 0x800191FC: addiu       $a1, $sp, 0x178
    ctx->r5 = ADD32(ctx->r29, 0X178);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x800191FC: addiu       $a1, $sp, 0x178
    ctx->r5 = ADD32(ctx->r29, 0X178);
    after_6:
    // 0x80019200: b           L_800192F4
    // 0x80019204: nop

        goto L_800192F4;
    // 0x80019204: nop

L_80019208:
    // 0x80019208: addiu       $t5, $sp, 0x38
    ctx->r13 = ADD32(ctx->r29, 0X38);
    // 0x8001920C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80019210: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80019214: jal         0x80036400
    // 0x80019218: addiu       $a1, $sp, 0x138
    ctx->r5 = ADD32(ctx->r29, 0X138);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x80019218: addiu       $a1, $sp, 0x138
    ctx->r5 = ADD32(ctx->r29, 0X138);
    after_7:
    // 0x8001921C: b           L_800192F4
    // 0x80019220: nop

        goto L_800192F4;
    // 0x80019220: nop

L_80019224:
    // 0x80019224: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80019228:
    // 0x80019228: lw          $t6, 0x1B8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1B8);
    // 0x8001922C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80019230: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80019234: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019238: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001923C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80019240: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80019244: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80019248: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001924C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x80019250: lbu         $s0, 0x4286($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X4286);
    // 0x80019254: nop

    // 0x80019258: beq         $s0, $zero, L_80019280
    if (ctx->r16 == 0) {
        // 0x8001925C: nop
    
            goto L_80019280;
    }
    // 0x8001925C: nop

    // 0x80019260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80019264: beq         $s0, $at, L_8001929C
    if (ctx->r16 == ctx->r1) {
        // 0x80019268: nop
    
            goto L_8001929C;
    }
    // 0x80019268: nop

    // 0x8001926C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80019270: beq         $s0, $at, L_800192B8
    if (ctx->r16 == ctx->r1) {
        // 0x80019274: nop
    
            goto L_800192B8;
    }
    // 0x80019274: nop

    // 0x80019278: b           L_800192D4
    // 0x8001927C: nop

        goto L_800192D4;
    // 0x8001927C: nop

L_80019280:
    // 0x80019280: addiu       $t0, $sp, 0x38
    ctx->r8 = ADD32(ctx->r29, 0X38);
    // 0x80019284: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80019288: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8001928C: jal         0x80036400
    // 0x80019290: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    guMtxCatF(rdram, ctx);
        goto after_8;
    // 0x80019290: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    after_8:
    // 0x80019294: b           L_800192D4
    // 0x80019298: nop

        goto L_800192D4;
    // 0x80019298: nop

L_8001929C:
    // 0x8001929C: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x800192A0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800192A4: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x800192A8: jal         0x80036400
    // 0x800192AC: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    guMtxCatF(rdram, ctx);
        goto after_9;
    // 0x800192AC: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    after_9:
    // 0x800192B0: b           L_800192D4
    // 0x800192B4: nop

        goto L_800192D4;
    // 0x800192B4: nop

L_800192B8:
    // 0x800192B8: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x800192BC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800192C0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x800192C4: jal         0x80036400
    // 0x800192C8: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    guMtxCatF(rdram, ctx);
        goto after_10;
    // 0x800192C8: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    after_10:
    // 0x800192CC: b           L_800192D4
    // 0x800192D0: nop

        goto L_800192D4;
    // 0x800192D0: nop

L_800192D4:
    // 0x800192D4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800192D8: nop

    // 0x800192DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800192E0: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x800192E4: bne         $at, $zero, L_80019228
    if (ctx->r1 != 0) {
        // 0x800192E8: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_80019228;
    }
    // 0x800192E8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x800192EC: b           L_800192F4
    // 0x800192F0: nop

        goto L_800192F4;
    // 0x800192F0: nop

L_800192F4:
    // 0x800192F4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800192F8: nop

    // 0x800192FC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80019300: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80019304: bne         $at, $zero, L_80019194
    if (ctx->r1 != 0) {
        // 0x80019308: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_80019194;
    }
    // 0x80019308: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8001930C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80019310:
    // 0x80019310: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_80019314:
    // 0x80019314: lw          $t3, 0x1B8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1B8);
    // 0x80019318: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8001931C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80019320: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80019324: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80019328: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001932C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80019330: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80019334: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80019338: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8001933C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80019340: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    // 0x80019344: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x80019348: lwc1        $f10, 0x38($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X38);
    // 0x8001934C: addu        $t6, $t5, $t0
    ctx->r14 = ADD32(ctx->r13, ctx->r8);
    // 0x80019350: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80019354: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80019358: swc1        $f10, 0x41B4($at)
    MEM_W(0X41B4, ctx->r1) = ctx->f10.u32l;
    // 0x8001935C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80019360: nop

    // 0x80019364: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80019368: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8001936C: bne         $at, $zero, L_80019314
    if (ctx->r1 != 0) {
        // 0x80019370: sw          $t9, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r25;
            goto L_80019314;
    }
    // 0x80019370: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80019374: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80019378: nop

    // 0x8001937C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80019380: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80019384: bne         $at, $zero, L_80019310
    if (ctx->r1 != 0) {
        // 0x80019388: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_80019310;
    }
    // 0x80019388: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8001938C: lw          $t4, 0x1B8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1B8);
    // 0x80019390: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80019394: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80019398: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8001939C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800193A0: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800193A4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800193A8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800193AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800193B0: sb          $t3, 0x4289($at)
    MEM_B(0X4289, ctx->r1) = ctx->r11;
    // 0x800193B4: b           L_800193BC
    // 0x800193B8: nop

        goto L_800193BC;
    // 0x800193B8: nop

L_800193BC:
    // 0x800193BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800193C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800193C4: jr          $ra
    // 0x800193C8: addiu       $sp, $sp, 0x1B8
    ctx->r29 = ADD32(ctx->r29, 0X1B8);
    return;
    // 0x800193C8: addiu       $sp, $sp, 0x1B8
    ctx->r29 = ADD32(ctx->r29, 0X1B8);
;}
RECOMP_FUNC void func_8001FBAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FBAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001FBB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001FBB4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001FBB8: lw          $t6, 0x6DF8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6DF8);
    // 0x8001FBBC: nop

    // 0x8001FBC0: beq         $t6, $zero, L_8001FC14
    if (ctx->r14 == 0) {
        // 0x8001FBC4: nop
    
            goto L_8001FC14;
    }
    // 0x8001FBC4: nop

    // 0x8001FBC8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001FBCC: lw          $t7, 0x6E1C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6E1C);
    // 0x8001FBD0: nop

    // 0x8001FBD4: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x8001FBD8: bne         $at, $zero, L_8001FBF8
    if (ctx->r1 != 0) {
        // 0x8001FBDC: nop
    
            goto L_8001FBF8;
    }
    // 0x8001FBDC: nop

    // 0x8001FBE0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FBE4: sw          $zero, 0x6E1C($at)
    MEM_W(0X6E1C, ctx->r1) = 0;
    // 0x8001FBE8: jal         0x8001F9DC
    // 0x8001FBEC: nop

    Check_PakState(rdram, ctx);
        goto after_0;
    // 0x8001FBEC: nop

    after_0:
    // 0x8001FBF0: b           L_8001FC0C
    // 0x8001FBF4: nop

        goto L_8001FC0C;
    // 0x8001FBF4: nop

L_8001FBF8:
    // 0x8001FBF8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8001FBFC: lw          $t8, 0x6E1C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6E1C);
    // 0x8001FC00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FC04: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001FC08: sw          $t9, 0x6E1C($at)
    MEM_W(0X6E1C, ctx->r1) = ctx->r25;
L_8001FC0C:
    // 0x8001FC0C: b           L_8001FDE4
    // 0x8001FC10: nop

        goto L_8001FDE4;
    // 0x8001FC10: nop

L_8001FC14:
    // 0x8001FC14: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8001FC18: lw          $t0, 0x6DFC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6DFC);
    // 0x8001FC1C: nop

    // 0x8001FC20: bne         $t0, $zero, L_8001FC70
    if (ctx->r8 != 0) {
        // 0x8001FC24: nop
    
            goto L_8001FC70;
    }
    // 0x8001FC24: nop

    // 0x8001FC28: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001FC2C: lw          $t1, 0x6E18($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6E18);
    // 0x8001FC30: nop

    // 0x8001FC34: slti        $at, $t1, 0xF
    ctx->r1 = SIGNED(ctx->r9) < 0XF ? 1 : 0;
    // 0x8001FC38: bne         $at, $zero, L_8001FC54
    if (ctx->r1 != 0) {
        // 0x8001FC3C: nop
    
            goto L_8001FC54;
    }
    // 0x8001FC3C: nop

    // 0x8001FC40: jal         0x8001F938
    // 0x8001FC44: nop

    RestartPak(rdram, ctx);
        goto after_1;
    // 0x8001FC44: nop

    after_1:
    // 0x8001FC48: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FC4C: b           L_8001FC68
    // 0x8001FC50: sw          $zero, 0x6E18($at)
    MEM_W(0X6E18, ctx->r1) = 0;
        goto L_8001FC68;
    // 0x8001FC50: sw          $zero, 0x6E18($at)
    MEM_W(0X6E18, ctx->r1) = 0;
L_8001FC54:
    // 0x8001FC54: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001FC58: lw          $t2, 0x6E18($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6E18);
    // 0x8001FC5C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FC60: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001FC64: sw          $t3, 0x6E18($at)
    MEM_W(0X6E18, ctx->r1) = ctx->r11;
L_8001FC68:
    // 0x8001FC68: b           L_8001FDE4
    // 0x8001FC6C: nop

        goto L_8001FDE4;
    // 0x8001FC6C: nop

L_8001FC70:
    // 0x8001FC70: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8001FC74: lw          $t4, 0x6DFC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6DFC);
    // 0x8001FC78: nop

    // 0x8001FC7C: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x8001FC80: beq         $at, $zero, L_8001FCA8
    if (ctx->r1 == 0) {
        // 0x8001FC84: nop
    
            goto L_8001FCA8;
    }
    // 0x8001FC84: nop

    // 0x8001FC88: jal         0x8001F938
    // 0x8001FC8C: nop

    RestartPak(rdram, ctx);
        goto after_2;
    // 0x8001FC8C: nop

    after_2:
    // 0x8001FC90: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8001FC94: lw          $t5, 0x6DFC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6DFC);
    // 0x8001FC98: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FC9C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8001FCA0: b           L_8001FDDC
    // 0x8001FCA4: sw          $t6, 0x6DFC($at)
    MEM_W(0X6DFC, ctx->r1) = ctx->r14;
        goto L_8001FDDC;
    // 0x8001FCA4: sw          $t6, 0x6DFC($at)
    MEM_W(0X6DFC, ctx->r1) = ctx->r14;
L_8001FCA8:
    // 0x8001FCA8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001FCAC: lw          $t7, 0x6E04($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6E04);
    // 0x8001FCB0: nop

    // 0x8001FCB4: bne         $t7, $zero, L_8001FD38
    if (ctx->r15 != 0) {
        // 0x8001FCB8: nop
    
            goto L_8001FD38;
    }
    // 0x8001FCB8: nop

    // 0x8001FCBC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8001FCC0: lw          $t8, 0x6E14($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6E14);
    // 0x8001FCC4: nop

    // 0x8001FCC8: bne         $t8, $zero, L_8001FCE4
    if (ctx->r24 != 0) {
        // 0x8001FCCC: nop
    
            goto L_8001FCE4;
    }
    // 0x8001FCCC: nop

    // 0x8001FCD0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8001FCD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FCD8: sw          $t9, 0x6E14($at)
    MEM_W(0X6E14, ctx->r1) = ctx->r25;
    // 0x8001FCDC: jal         0x8001F8A0
    // 0x8001FCE0: nop

    func_8001F8A0(rdram, ctx);
        goto after_3;
    // 0x8001FCE0: nop

    after_3:
L_8001FCE4:
    // 0x8001FCE4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8001FCE8: lw          $t0, 0x6E10($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6E10);
    // 0x8001FCEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FCF0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8001FCF4: sw          $t1, 0x6E10($at)
    MEM_W(0X6E10, ctx->r1) = ctx->r9;
    // 0x8001FCF8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001FCFC: lw          $t2, 0x6E10($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6E10);
    // 0x8001FD00: nop

    // 0x8001FD04: bne         $t2, $zero, L_8001FD30
    if (ctx->r10 != 0) {
        // 0x8001FD08: nop
    
            goto L_8001FD30;
    }
    // 0x8001FD08: nop

    // 0x8001FD0C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001FD10: lw          $t3, 0x6E0C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6E0C);
    // 0x8001FD14: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD18: sw          $t3, 0x6E10($at)
    MEM_W(0X6E10, ctx->r1) = ctx->r11;
    // 0x8001FD1C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8001FD20: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD24: sw          $t4, 0x6E04($at)
    MEM_W(0X6E04, ctx->r1) = ctx->r12;
    // 0x8001FD28: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD2C: sw          $zero, 0x6E14($at)
    MEM_W(0X6E14, ctx->r1) = 0;
L_8001FD30:
    // 0x8001FD30: b           L_8001FDA8
    // 0x8001FD34: nop

        goto L_8001FDA8;
    // 0x8001FD34: nop

L_8001FD38:
    // 0x8001FD38: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8001FD3C: lw          $t5, 0x6E14($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6E14);
    // 0x8001FD40: nop

    // 0x8001FD44: bne         $t5, $zero, L_8001FD60
    if (ctx->r13 != 0) {
        // 0x8001FD48: nop
    
            goto L_8001FD60;
    }
    // 0x8001FD48: nop

    // 0x8001FD4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001FD50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD54: sw          $t6, 0x6E14($at)
    MEM_W(0X6E14, ctx->r1) = ctx->r14;
    // 0x8001FD58: jal         0x8001F938
    // 0x8001FD5C: nop

    RestartPak(rdram, ctx);
        goto after_4;
    // 0x8001FD5C: nop

    after_4:
L_8001FD60:
    // 0x8001FD60: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001FD64: lw          $t7, 0x6E10($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6E10);
    // 0x8001FD68: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD6C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8001FD70: sw          $t8, 0x6E10($at)
    MEM_W(0X6E10, ctx->r1) = ctx->r24;
    // 0x8001FD74: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001FD78: lw          $t9, 0x6E10($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6E10);
    // 0x8001FD7C: nop

    // 0x8001FD80: bne         $t9, $zero, L_8001FDA8
    if (ctx->r25 != 0) {
        // 0x8001FD84: nop
    
            goto L_8001FDA8;
    }
    // 0x8001FD84: nop

    // 0x8001FD88: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8001FD8C: lw          $t0, 0x6E08($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6E08);
    // 0x8001FD90: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD94: sw          $t0, 0x6E10($at)
    MEM_W(0X6E10, ctx->r1) = ctx->r8;
    // 0x8001FD98: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FD9C: sw          $zero, 0x6E04($at)
    MEM_W(0X6E04, ctx->r1) = 0;
    // 0x8001FDA0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FDA4: sw          $zero, 0x6E14($at)
    MEM_W(0X6E14, ctx->r1) = 0;
L_8001FDA8:
    // 0x8001FDA8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001FDAC: lw          $t1, 0x6E00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6E00);
    // 0x8001FDB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FDB4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8001FDB8: sw          $t2, 0x6E00($at)
    MEM_W(0X6E00, ctx->r1) = ctx->r10;
    // 0x8001FDBC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001FDC0: lw          $t3, 0x6E00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6E00);
    // 0x8001FDC4: nop

    // 0x8001FDC8: bne         $t3, $zero, L_8001FDDC
    if (ctx->r11 != 0) {
        // 0x8001FDCC: nop
    
            goto L_8001FDDC;
    }
    // 0x8001FDCC: nop

    // 0x8001FDD0: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8001FDD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FDD8: sw          $t4, 0x6DFC($at)
    MEM_W(0X6DFC, ctx->r1) = ctx->r12;
L_8001FDDC:
    // 0x8001FDDC: b           L_8001FDE4
    // 0x8001FDE0: nop

        goto L_8001FDE4;
    // 0x8001FDE0: nop

L_8001FDE4:
    // 0x8001FDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001FDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001FDEC: jr          $ra
    // 0x8001FDF0: nop

    return;
    // 0x8001FDF0: nop

;}
RECOMP_FUNC void alSeqSetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045D6C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80045D70: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80045D74: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x80045D78: sh          $t7, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r15;
    // 0x80045D7C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x80045D80: jr          $ra
    // 0x80045D84: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    return;
    // 0x80045D84: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8000B738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B738: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000B73C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B740: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000B744: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B748: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000B74C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000B750: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000B754: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000B758: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000B75C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000B760: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000B764: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000B768: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8000B76C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000B770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000B774: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8000B778: nop

    // 0x8000B77C: beq         $t1, $at, L_8000B78C
    if (ctx->r9 == ctx->r1) {
        // 0x8000B780: nop
    
            goto L_8000B78C;
    }
    // 0x8000B780: nop

    // 0x8000B784: b           L_8000BA44
    // 0x8000B788: nop

        goto L_8000BA44;
    // 0x8000B788: nop

L_8000B78C:
    // 0x8000B78C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000B790: nop

    // 0x8000B794: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000B798: nop

    // 0x8000B79C: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8000B7A0: beq         $t4, $zero, L_8000B7D4
    if (ctx->r12 == 0) {
        // 0x8000B7A4: nop
    
            goto L_8000B7D4;
    }
    // 0x8000B7A4: nop

    // 0x8000B7A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8000B7AC: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8000B7B0: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8000B7B4: nop

    // 0x8000B7B8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8000B7BC: sw          $t7, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r15;
    // 0x8000B7C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8000B7C4: nop

    // 0x8000B7C8: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x8000B7CC: b           L_8000B9E8
    // 0x8000B7D0: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
        goto L_8000B9E8;
    // 0x8000B7D0: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
L_8000B7D4:
    // 0x8000B7D4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000B7D8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B7DC: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B7E0: lh          $a1, 0x16($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X16);
    // 0x8000B7E4: jal         0x80035310
    // 0x8000B7E8: nop

    alSndpSetSound(rdram, ctx);
        goto after_0;
    // 0x8000B7E8: nop

    after_0:
    // 0x8000B7EC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B7F0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B7F4: jal         0x800355A0
    // 0x8000B7F8: nop

    alSndpStop(rdram, ctx);
        goto after_1;
    // 0x8000B7F8: nop

    after_1:
    // 0x8000B7FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8000B800: nop

    // 0x8000B804: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8000B808: nop

    // 0x8000B80C: ori         $t3, $t2, 0x2000
    ctx->r11 = ctx->r10 | 0X2000;
    // 0x8000B810: sw          $t3, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r11;
    // 0x8000B814: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8000B818: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000B81C: lb          $t6, 0x29($t4)
    ctx->r14 = MEM_B(ctx->r12, 0X29);
    // 0x8000B820: nop

    // 0x8000B824: bne         $t6, $at, L_8000B9E8
    if (ctx->r14 != ctx->r1) {
        // 0x8000B828: nop
    
            goto L_8000B9E8;
    }
    // 0x8000B828: nop

    // 0x8000B82C: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B830: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B834: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x8000B838: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8000B83C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000B840: lw          $t9, 0x2D84($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D84);
    // 0x8000B844: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8000B848: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000B84C: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x8000B850: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8000B854: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8000B858: nop

    // 0x8000B85C: lh          $t2, 0x1A($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X1A);
    // 0x8000B860: nop

    // 0x8000B864: blez        $t2, L_8000B9E8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000B868: nop
    
            goto L_8000B9E8;
    }
    // 0x8000B868: nop

L_8000B86C:
    // 0x8000B86C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8000B870: nop

    // 0x8000B874: lh          $t1, 0x1A($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X1A);
    // 0x8000B878: nop

    // 0x8000B87C: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x8000B880: sh          $t4, 0x1A($t3)
    MEM_H(0X1A, ctx->r11) = ctx->r12;
    // 0x8000B884: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000B888: nop

    // 0x8000B88C: lh          $t7, 0x1A($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X1A);
    // 0x8000B890: nop

    // 0x8000B894: sll         $t5, $t7, 1
    ctx->r13 = S32(ctx->r15 << 1);
    // 0x8000B898: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x8000B89C: lh          $t8, 0x14($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X14);
    // 0x8000B8A0: nop

    // 0x8000B8A4: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x8000B8A8: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B8AC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000B8B0: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8000B8B4: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8000B8B8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8000B8BC: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000B8C0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8000B8C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8000B8C8: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x8000B8CC: lh          $t3, 0xA($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XA);
    // 0x8000B8D0: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B8D4: nop

    // 0x8000B8D8: beq         $t3, $t7, L_8000B8E8
    if (ctx->r11 == ctx->r15) {
        // 0x8000B8DC: nop
    
            goto L_8000B8E8;
    }
    // 0x8000B8DC: nop

    // 0x8000B8E0: b           L_8000B9D0
    // 0x8000B8E4: nop

        goto L_8000B9D0;
    // 0x8000B8E4: nop

L_8000B8E8:
    // 0x8000B8E8: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B8EC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B8F0: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8000B8F4: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x8000B8F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000B8FC: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000B900: subu        $t5, $t5, $t6
    ctx->r13 = SUB32(ctx->r13, ctx->r14);
    // 0x8000B904: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000B908: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x8000B90C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8000B910: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000B914: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000B918: lw          $t0, 0xC($t2)
    ctx->r8 = MEM_W(ctx->r10, 0XC);
    // 0x8000B91C: nop

    // 0x8000B920: beq         $t0, $at, L_8000B930
    if (ctx->r8 == ctx->r1) {
        // 0x8000B924: nop
    
            goto L_8000B930;
    }
    // 0x8000B924: nop

    // 0x8000B928: b           L_8000B9D0
    // 0x8000B92C: nop

        goto L_8000B9D0;
    // 0x8000B92C: nop

L_8000B930:
    // 0x8000B930: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8000B934: nop

    // 0x8000B938: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x8000B93C: nop

    // 0x8000B940: andi        $t3, $t4, 0x1000
    ctx->r11 = ctx->r12 & 0X1000;
    // 0x8000B944: beq         $t3, $zero, L_8000B978
    if (ctx->r11 == 0) {
        // 0x8000B948: nop
    
            goto L_8000B978;
    }
    // 0x8000B948: nop

    // 0x8000B94C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000B950: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8000B954: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8000B958: nop

    // 0x8000B95C: and         $t5, $t6, $at
    ctx->r13 = ctx->r14 & ctx->r1;
    // 0x8000B960: sw          $t5, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r13;
    // 0x8000B964: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000B968: nop

    // 0x8000B96C: lw          $t8, 0x10($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X10);
    // 0x8000B970: b           L_8000B9B8
    // 0x8000B974: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
        goto L_8000B9B8;
    // 0x8000B974: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
L_8000B978:
    // 0x8000B978: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000B97C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B980: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B984: lh          $a1, 0x16($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X16);
    // 0x8000B988: jal         0x80035310
    // 0x8000B98C: nop

    alSndpSetSound(rdram, ctx);
        goto after_2;
    // 0x8000B98C: nop

    after_2:
    // 0x8000B990: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B994: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B998: jal         0x800355A0
    // 0x8000B99C: nop

    alSndpStop(rdram, ctx);
        goto after_3;
    // 0x8000B99C: nop

    after_3:
    // 0x8000B9A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000B9A4: nop

    // 0x8000B9A8: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8000B9AC: nop

    // 0x8000B9B0: ori         $t4, $t1, 0x2000
    ctx->r12 = ctx->r9 | 0X2000;
    // 0x8000B9B4: sw          $t4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r12;
L_8000B9B8:
    // 0x8000B9B8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8000B9BC: nop

    // 0x8000B9C0: sb          $zero, 0x29($t3)
    MEM_B(0X29, ctx->r11) = 0;
    // 0x8000B9C4: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B9C8: jal         0x80009B4C
    // 0x8000B9CC: nop

    func_80009B4C(rdram, ctx);
        goto after_4;
    // 0x8000B9CC: nop

    after_4:
L_8000B9D0:
    // 0x8000B9D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000B9D4: nop

    // 0x8000B9D8: lh          $t5, 0x1A($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X1A);
    // 0x8000B9DC: nop

    // 0x8000B9E0: bgtz        $t5, L_8000B86C
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000B9E4: nop
    
            goto L_8000B86C;
    }
    // 0x8000B9E4: nop

L_8000B9E8:
    // 0x8000B9E8: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B9EC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000B9F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000B9F4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8000B9F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000B9FC: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x8000BA00: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8000BA04: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000BA08: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x8000BA0C: sb          $zero, 0x29($t2)
    MEM_B(0X29, ctx->r10) = 0;
    // 0x8000BA10: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000BA14: lw          $t1, 0x2D80($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D80);
    // 0x8000BA18: nop

    // 0x8000BA1C: beq         $t1, $zero, L_8000BA30
    if (ctx->r9 == 0) {
        // 0x8000BA20: nop
    
            goto L_8000BA30;
    }
    // 0x8000BA20: nop

    // 0x8000BA24: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8000BA28: jal         0x80009B4C
    // 0x8000BA2C: nop

    func_80009B4C(rdram, ctx);
        goto after_5;
    // 0x8000BA2C: nop

    after_5:
L_8000BA30:
    // 0x8000BA30: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8000BA34: jal         0x8000826C
    // 0x8000BA38: nop

    func_8000826C(rdram, ctx);
        goto after_6;
    // 0x8000BA38: nop

    after_6:
    // 0x8000BA3C: b           L_8000BA44
    // 0x8000BA40: nop

        goto L_8000BA44;
    // 0x8000BA40: nop

L_8000BA44:
    // 0x8000BA44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000BA48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000BA4C: jr          $ra
    // 0x8000BA50: nop

    return;
    // 0x8000BA50: nop

;}
RECOMP_FUNC void alCSeqSecToTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034344: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80034348: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8003434C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034350: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x80034354: ldc1        $f6, -0x3D30($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3D30);
    // 0x80034358: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8003435C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80034360: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80034364: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80034368: bgez        $t7, L_80034380
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8003436C: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_80034380;
    }
    // 0x8003436C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80034370: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80034374: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80034378: nop

    // 0x8003437C: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_80034380:
    // 0x80034380: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x80034384: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80034388: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8003438C: bgez        $a2, L_800343A4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80034390: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_800343A4;
    }
    // 0x80034390: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x80034394: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80034398: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8003439C: nop

    // 0x800343A0: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_800343A4:
    // 0x800343A4: div.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x800343A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800343AC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800343B0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800343B4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800343B8: nop

    // 0x800343BC: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x800343C0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800343C4: nop

    // 0x800343C8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800343CC: beql        $v0, $zero, L_80034428
    if (ctx->r2 == 0) {
        // 0x800343D0: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_80034428;
    }
    goto skip_0;
    // 0x800343D0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x800343D4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800343D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800343DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800343E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800343E4: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x800343E8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800343EC: nop

    // 0x800343F0: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x800343F4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800343F8: nop

    // 0x800343FC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80034400: bnel        $v0, $zero, L_8003441C
    if (ctx->r2 != 0) {
        // 0x80034404: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_8003441C;
    }
    goto skip_1;
    // 0x80034404: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_1:
    // 0x80034408: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8003440C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80034410: jr          $ra
    // 0x80034414: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x80034414: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x80034418: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
L_8003441C:
    // 0x8003441C: jr          $ra
    // 0x80034420: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80034420: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80034424: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_80034428:
    // 0x80034428: nop

    // 0x8003442C: bltzl       $v0, L_8003441C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80034430: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_8003441C;
    }
    goto skip_2;
    // 0x80034430: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_2:
    // 0x80034434: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80034438: jr          $ra
    // 0x8003443C: nop

    return;
    // 0x8003443C: nop

;}
RECOMP_FUNC void func_80003FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003FE0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003FE4: sw          $a0, -0x5CC0($at)
    MEM_W(-0X5CC0, ctx->r1) = ctx->r4;
    // 0x80003FE8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003FEC: sw          $a1, -0x5CBC($at)
    MEM_W(-0X5CBC, ctx->r1) = ctx->r5;
    // 0x80003FF0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003FF4: sw          $a2, -0x5CB8($at)
    MEM_W(-0X5CB8, ctx->r1) = ctx->r6;
    // 0x80003FF8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003FFC: sw          $a3, -0x5CB4($at)
    MEM_W(-0X5CB4, ctx->r1) = ctx->r7;
    // 0x80004000: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80004004: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004008: sw          $t6, -0x5CB0($at)
    MEM_W(-0X5CB0, ctx->r1) = ctx->r14;
    // 0x8000400C: jr          $ra
    // 0x80004010: nop

    return;
    // 0x80004010: nop

    // 0x80004014: jr          $ra
    // 0x80004018: nop

    return;
    // 0x80004018: nop

;}
RECOMP_FUNC void __resetPerfChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CE04: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE08: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8003CE0C: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8003CE10: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8003CE14: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
    // 0x8003CE18: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE1C: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x8003CE20: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8003CE24: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8003CE28: sb          $zero, 0xA($t9)
    MEM_B(0XA, ctx->r25) = 0;
    // 0x8003CE2C: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003CE34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003CE38: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8003CE3C: sb          $t0, 0x7($t2)
    MEM_B(0X7, ctx->r10) = ctx->r8;
    // 0x8003CE40: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE44: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x8003CE48: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8003CE4C: sb          $t3, 0x9($t5)
    MEM_B(0X9, ctx->r13) = ctx->r11;
    // 0x8003CE50: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE54: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8003CE58: sb          $t6, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r14;
    // 0x8003CE5C: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE60: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8003CE64: sb          $zero, 0xB($t1)
    MEM_B(0XB, ctx->r9) = 0;
    // 0x8003CE68: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE6C: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x8003CE70: sh          $t0, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r8;
    // 0x8003CE74: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x8003CE78: addu        $t5, $t3, $v0
    ctx->r13 = ADD32(ctx->r11, ctx->r2);
    // 0x8003CE7C: jr          $ra
    // 0x8003CE80: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    return;
    // 0x8003CE80: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_800250A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800250A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800250A4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800250A8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800250AC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800250B0: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x800250B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800250B8: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_800250BC:
    // 0x800250BC: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_800250C0:
    // 0x800250C0: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_800250C4:
    // 0x800250C4: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x800250C8: nop

    // 0x800250CC: bne         $t7, $zero, L_800250D8
    if (ctx->r15 != 0) {
        // 0x800250D0: nop
    
            goto L_800250D8;
    }
    // 0x800250D0: nop

    // 0x800250D4: sb          $zero, 0x16($sp)
    MEM_B(0X16, ctx->r29) = 0;
L_800250D8:
    // 0x800250D8: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x800250DC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800250E0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800250E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800250E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800250EC: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800250F0: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x800250F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800250F8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800250FC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80025100: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80025104: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80025108: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002510C: lbu         $t5, 0x4808($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X4808);
    // 0x80025110: nop

    // 0x80025114: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x80025118: sb          $t6, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r14;
    // 0x8002511C: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x80025120: lbu         $t7, 0x17($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X17);
    // 0x80025124: lbu         $t1, 0x16($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X16);
    // 0x80025128: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8002512C: sllv        $t9, $t7, $t0
    ctx->r25 = S32(ctx->r15 << (ctx->r8 & 31));
    // 0x80025130: or          $t2, $t1, $t9
    ctx->r10 = ctx->r9 | ctx->r25;
    // 0x80025134: sb          $t2, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r10;
    // 0x80025138: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x8002513C: nop

    // 0x80025140: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80025144: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80025148: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8002514C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80025150: bne         $t5, $at, L_8002517C
    if (ctx->r13 != ctx->r1) {
        // 0x80025154: nop
    
            goto L_8002517C;
    }
    // 0x80025154: nop

    // 0x80025158: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8002515C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80025160: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x80025164: lbu         $t6, 0x16($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X16);
    // 0x80025168: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002516C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80025170: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80025174: sw          $t0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r8;
    // 0x80025178: sb          $t6, 0x7450($at)
    MEM_B(0X7450, ctx->r1) = ctx->r14;
L_8002517C:
    // 0x8002517C: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80025180: nop

    // 0x80025184: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x80025188: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x8002518C: bne         $at, $zero, L_800250C4
    if (ctx->r1 != 0) {
        // 0x80025190: sw          $t9, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r25;
            goto L_800250C4;
    }
    // 0x80025190: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x80025194: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80025198: nop

    // 0x8002519C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800251A0: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800251A4: bne         $at, $zero, L_800250C0
    if (ctx->r1 != 0) {
        // 0x800251A8: sw          $t3, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r11;
            goto L_800250C0;
    }
    // 0x800251A8: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x800251AC: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x800251B0: nop

    // 0x800251B4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800251B8: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x800251BC: bne         $at, $zero, L_800250BC
    if (ctx->r1 != 0) {
        // 0x800251C0: sw          $t5, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r13;
            goto L_800250BC;
    }
    // 0x800251C0: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x800251C4: b           L_800251CC
    // 0x800251C8: nop

        goto L_800251CC;
    // 0x800251C8: nop

L_800251CC:
    // 0x800251CC: jr          $ra
    // 0x800251D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800251D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000AAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AAB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000AAB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000AABC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000AAC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000AAC4: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000AAC8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000AACC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000AAD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000AAD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000AAD8: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x8000AADC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000AAE0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000AAE4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000AAE8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000AAEC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000AAF0: nop

    // 0x8000AAF4: lh          $t1, 0x1A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1A);
    // 0x8000AAF8: nop

    // 0x8000AAFC: sh          $t1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r9;
    // 0x8000AB00: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x8000AB04: nop

    // 0x8000AB08: blez        $t2, L_8000AB9C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000AB0C: nop
    
            goto L_8000AB9C;
    }
    // 0x8000AB0C: nop

L_8000AB10:
    // 0x8000AB10: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x8000AB14: nop

    // 0x8000AB18: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8000AB1C: sh          $t4, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r12;
    // 0x8000AB20: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x8000AB24: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000AB28: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000AB2C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000AB30: lh          $t9, 0x14($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X14);
    // 0x8000AB34: nop

    // 0x8000AB38: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    // 0x8000AB3C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8000AB40: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000AB44: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000AB48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000AB4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000AB50: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000AB54: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000AB58: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000AB5C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8000AB60: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x8000AB64: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000AB68: nop

    // 0x8000AB6C: beq         $t4, $t6, L_8000AB7C
    if (ctx->r12 == ctx->r14) {
        // 0x8000AB70: nop
    
            goto L_8000AB7C;
    }
    // 0x8000AB70: nop

    // 0x8000AB74: b           L_8000AB8C
    // 0x8000AB78: nop

        goto L_8000AB8C;
    // 0x8000AB78: nop

L_8000AB7C:
    // 0x8000AB7C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8000AB80: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x8000AB84: jal         0x8000C9C4
    // 0x8000AB88: nop

    func_8000C9C4(rdram, ctx);
        goto after_0;
    // 0x8000AB88: nop

    after_0:
L_8000AB8C:
    // 0x8000AB8C: lh          $t5, 0x18($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X18);
    // 0x8000AB90: nop

    // 0x8000AB94: bgtz        $t5, L_8000AB10
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000AB98: nop
    
            goto L_8000AB10;
    }
    // 0x8000AB98: nop

L_8000AB9C:
    // 0x8000AB9C: b           L_8000ABA4
    // 0x8000ABA0: nop

        goto L_8000ABA4;
    // 0x8000ABA0: nop

L_8000ABA4:
    // 0x8000ABA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000ABA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000ABAC: jr          $ra
    // 0x8000ABB0: nop

    return;
    // 0x8000ABB0: nop

;}
RECOMP_FUNC void func_8000A534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A534: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000A538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A53C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000A540: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000A544: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8000A548: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x8000A54C: jal         0x80002DD4
    // 0x8000A550: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    func_80002DD4(rdram, ctx);
        goto after_0;
    // 0x8000A550: addiu       $a0, $a0, 0x12
    ctx->r4 = ADD32(ctx->r4, 0X12);
    after_0:
    // 0x8000A554: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8000A558: nop

    // 0x8000A55C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8000A560: nop

    // 0x8000A564: andi        $t8, $t7, 0x18
    ctx->r24 = ctx->r15 & 0X18;
    // 0x8000A568: beq         $t8, $zero, L_8000A6C4
    if (ctx->r24 == 0) {
        // 0x8000A56C: nop
    
            goto L_8000A6C4;
    }
    // 0x8000A56C: nop

    // 0x8000A570: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000A574: nop

    // 0x8000A578: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x8000A57C: nop

    // 0x8000A580: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x8000A584: beq         $t1, $zero, L_8000A5F8
    if (ctx->r9 == 0) {
        // 0x8000A588: nop
    
            goto L_8000A5F8;
    }
    // 0x8000A588: nop

    // 0x8000A58C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000A590: nop

    // 0x8000A594: lh          $t3, 0x4E($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4E);
    // 0x8000A598: nop

    // 0x8000A59C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000A5A0: sh          $t4, 0x4E($t2)
    MEM_H(0X4E, ctx->r10) = ctx->r12;
    // 0x8000A5A4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8000A5A8: nop

    // 0x8000A5AC: lh          $t6, 0x4E($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4E);
    // 0x8000A5B0: lh          $t7, 0x50($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X50);
    // 0x8000A5B4: nop

    // 0x8000A5B8: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8000A5BC: bne         $at, $zero, L_8000A5F0
    if (ctx->r1 != 0) {
        // 0x8000A5C0: nop
    
            goto L_8000A5F0;
    }
    // 0x8000A5C0: nop

    // 0x8000A5C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8000A5C8: nop

    // 0x8000A5CC: lh          $t9, 0x50($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X50);
    // 0x8000A5D0: nop

    // 0x8000A5D4: sh          $t9, 0x4E($t8)
    MEM_H(0X4E, ctx->r24) = ctx->r25;
    // 0x8000A5D8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000A5DC: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8000A5E0: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8000A5E4: nop

    // 0x8000A5E8: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x8000A5EC: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
L_8000A5F0:
    // 0x8000A5F0: b           L_8000A64C
    // 0x8000A5F4: nop

        goto L_8000A64C;
    // 0x8000A5F4: nop

L_8000A5F8:
    // 0x8000A5F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8000A5FC: nop

    // 0x8000A600: lh          $t2, 0x4E($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X4E);
    // 0x8000A604: nop

    // 0x8000A608: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x8000A60C: sh          $t5, 0x4E($t4)
    MEM_H(0X4E, ctx->r12) = ctx->r13;
    // 0x8000A610: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8000A614: nop

    // 0x8000A618: lh          $t7, 0x4E($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4E);
    // 0x8000A61C: nop

    // 0x8000A620: bgtz        $t7, L_8000A64C
    if (SIGNED(ctx->r15) > 0) {
        // 0x8000A624: nop
    
            goto L_8000A64C;
    }
    // 0x8000A624: nop

    // 0x8000A628: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000A62C: nop

    // 0x8000A630: sh          $zero, 0x4E($t9)
    MEM_H(0X4E, ctx->r25) = 0;
    // 0x8000A634: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8000A638: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8000A63C: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x8000A640: nop

    // 0x8000A644: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x8000A648: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
L_8000A64C:
    // 0x8000A64C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000A650: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000A654: lh          $t2, 0x4E($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4E);
    // 0x8000A658: lh          $t5, 0x50($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X50);
    // 0x8000A65C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8000A660: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000A664: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000A668: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8000A66C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8000A670: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000A674: nop

    // 0x8000A678: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8000A67C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8000A680: nop

    // 0x8000A684: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8000A688: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000A68C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000A690: nop

    // 0x8000A694: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000A698: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8000A69C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000A6A0: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    // 0x8000A6A4: nop

    // 0x8000A6A8: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    // 0x8000A6AC: jal         0x80002DD4
    // 0x8000A6B0: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    func_80002DD4(rdram, ctx);
        goto after_1;
    // 0x8000A6B0: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    after_1:
    // 0x8000A6B4: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8000A6B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000A6BC: nop

    // 0x8000A6C0: sh          $t7, 0x12($t9)
    MEM_H(0X12, ctx->r25) = ctx->r15;
L_8000A6C4:
    // 0x8000A6C4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8000A6C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8000A6CC: lbu         $t3, 0x24($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X24);
    // 0x8000A6D0: lh          $t2, 0x12($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X12);
    // 0x8000A6D4: nop

    // 0x8000A6D8: beq         $t3, $t2, L_8000A70C
    if (ctx->r11 == ctx->r10) {
        // 0x8000A6DC: nop
    
            goto L_8000A70C;
    }
    // 0x8000A6DC: nop

    // 0x8000A6E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000A6E4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8000A6E8: lh          $t5, 0x12($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X12);
    // 0x8000A6EC: nop

    // 0x8000A6F0: sb          $t5, 0x24($t4)
    MEM_B(0X24, ctx->r12) = ctx->r13;
    // 0x8000A6F4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000A6F8: nop

    // 0x8000A6FC: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8000A700: nop

    // 0x8000A704: ori         $t9, $t7, 0x4
    ctx->r25 = ctx->r15 | 0X4;
    // 0x8000A708: sw          $t9, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r25;
L_8000A70C:
    // 0x8000A70C: b           L_8000A714
    // 0x8000A710: nop

        goto L_8000A714;
    // 0x8000A710: nop

L_8000A714:
    // 0x8000A714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000A71C: jr          $ra
    // 0x8000A720: nop

    return;
    // 0x8000A720: nop

;}
RECOMP_FUNC void alSynSetPriority(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046370: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80046374: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80046378: jr          $ra
    // 0x8004637C: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
    return;
    // 0x8004637C: sh          $a2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r6;
;}
RECOMP_FUNC void guRandom(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800355F0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800355F4: lw          $a0, -0x4B00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4B00);
    // 0x800355F8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800355FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80035600: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80035604: addiu       $t8, $t6, 0x3
    ctx->r24 = ADD32(ctx->r14, 0X3);
    // 0x80035608: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003560C: mflo        $a1
    ctx->r5 = lo;
    // 0x80035610: srl         $v0, $a1, 2
    ctx->r2 = S32(U32(ctx->r5) >> 2);
    // 0x80035614: jr          $ra
    // 0x80035618: sw          $v0, -0x4B00($at)
    MEM_W(-0X4B00, ctx->r1) = ctx->r2;
    return;
    // 0x80035618: sw          $v0, -0x4B00($at)
    MEM_W(-0X4B00, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80003940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003940: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80003944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80003948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000394C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80003950: lw          $t6, 0x2EB0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EB0);
    // 0x80003954: addiu       $at, $zero, 0x5331
    ctx->r1 = ADD32(0, 0X5331);
    // 0x80003958: lh          $s0, 0x0($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X0);
    // 0x8000395C: nop

    // 0x80003960: beq         $s0, $at, L_8000397C
    if (ctx->r16 == ctx->r1) {
        // 0x80003964: nop
    
            goto L_8000397C;
    }
    // 0x80003964: nop

    // 0x80003968: addiu       $at, $zero, 0x5332
    ctx->r1 = ADD32(0, 0X5332);
    // 0x8000396C: beq         $s0, $at, L_8000397C
    if (ctx->r16 == ctx->r1) {
        // 0x80003970: nop
    
            goto L_8000397C;
    }
    // 0x80003970: nop

    // 0x80003974: b           L_800039F8
    // 0x80003978: nop

        goto L_800039F8;
    // 0x80003978: nop

L_8000397C:
    // 0x8000397C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003980: lh          $t8, 0x2ECC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X2ECC);
    // 0x80003984: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003988: lw          $t7, 0x2EB0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2EB0);
    // 0x8000398C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80003990: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80003994: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x80003998: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8000399C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800039A0: nop

    // 0x800039A4: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x800039A8: nop

    // 0x800039AC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x800039B0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800039B4: nop

    // 0x800039B8: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x800039BC: beq         $t5, $zero, L_800039D4
    if (ctx->r13 == 0) {
        // 0x800039C0: nop
    
            goto L_800039D4;
    }
    // 0x800039C0: nop

    // 0x800039C4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800039C8: nop

    // 0x800039CC: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800039D0: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_800039D4:
    // 0x800039D4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800039D8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800039DC: lw          $a1, 0x2EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EA8);
    // 0x800039E0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x800039E4: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x800039E8: jal         0x80002CD0
    // 0x800039EC: nop

    func_80002CD0(rdram, ctx);
        goto after_0;
    // 0x800039EC: nop

    after_0:
    // 0x800039F0: b           L_80003A54
    // 0x800039F4: nop

        goto L_80003A54;
    // 0x800039F4: nop

L_800039F8:
    // 0x800039F8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800039FC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80003A00: lw          $t0, -0x5CC0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CC0);
    // 0x80003A04: lw          $t9, -0x5CBC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5CBC);
    // 0x80003A08: nop

    // 0x80003A0C: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x80003A10: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80003A14: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80003A18: nop

    // 0x80003A1C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80003A20: beq         $t3, $zero, L_80003A38
    if (ctx->r11 == 0) {
        // 0x80003A24: nop
    
            goto L_80003A38;
    }
    // 0x80003A24: nop

    // 0x80003A28: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80003A2C: nop

    // 0x80003A30: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80003A34: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
L_80003A38:
    // 0x80003A38: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003A3C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80003A40: lw          $a1, 0x2EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EA8);
    // 0x80003A44: lw          $a0, -0x5CC0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5CC0);
    // 0x80003A48: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80003A4C: jal         0x80002CD0
    // 0x80003A50: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x80003A50: nop

    after_1:
L_80003A54:
    // 0x80003A54: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003A58: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80003A5C: lw          $a1, 0x2EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EA8);
    // 0x80003A60: lw          $a0, 0x2EAC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EAC);
    // 0x80003A64: jal         0x800340BC
    // 0x80003A68: nop

    alCSeqNew(rdram, ctx);
        goto after_2;
    // 0x80003A68: nop

    after_2:
    // 0x80003A6C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80003A70: lw          $t6, 0x2EB0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EB0);
    // 0x80003A74: addiu       $at, $zero, 0x5332
    ctx->r1 = ADD32(0, 0X5332);
    // 0x80003A78: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x80003A7C: nop

    // 0x80003A80: bne         $t8, $at, L_80003B04
    if (ctx->r24 != ctx->r1) {
        // 0x80003A84: nop
    
            goto L_80003B04;
    }
    // 0x80003A84: nop

    // 0x80003A88: b           L_80003A90
    // 0x80003A8C: nop

        goto L_80003A90;
    // 0x80003A8C: nop

L_80003A90:
    // 0x80003A90: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003A94: lh          $t7, 0x2ECC($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2ECC);
    // 0x80003A98: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80003A9C: lw          $t0, 0x2EB4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2EB4);
    // 0x80003AA0: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80003AA4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80003AA8: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80003AAC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80003AB0: nop

    // 0x80003AB4: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80003AB8: nop

    // 0x80003ABC: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80003AC0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80003AC4: nop

    // 0x80003AC8: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x80003ACC: nop

    // 0x80003AD0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80003AD4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80003AD8: nop

    // 0x80003ADC: lw          $t8, 0x8($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X8);
    // 0x80003AE0: nop

    // 0x80003AE4: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80003AE8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80003AEC: nop

    // 0x80003AF0: lbu         $t9, 0x0($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X0);
    // 0x80003AF4: nop

    // 0x80003AF8: sb          $t9, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r25;
    // 0x80003AFC: b           L_80003B68
    // 0x80003B00: nop

        goto L_80003B68;
    // 0x80003B00: nop

L_80003B04:
    // 0x80003B04: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80003B08: lw          $t0, -0x5CB8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CB8);
    // 0x80003B0C: nop

    // 0x80003B10: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80003B14: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80003B18: lw          $t1, -0x5CB0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CB0);
    // 0x80003B1C: nop

    // 0x80003B20: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80003B24: sb          $zero, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = 0;
    // 0x80003B28: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80003B2C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80003B30: lw          $t3, -0x5CB8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5CB8);
    // 0x80003B34: lw          $t2, -0x5CB4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5CB4);
    // 0x80003B38: nop

    // 0x80003B3C: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80003B40: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80003B44: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80003B48: nop

    // 0x80003B4C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80003B50: beq         $t6, $zero, L_80003B68
    if (ctx->r14 == 0) {
        // 0x80003B54: nop
    
            goto L_80003B68;
    }
    // 0x80003B54: nop

    // 0x80003B58: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80003B5C: nop

    // 0x80003B60: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80003B64: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_80003B68:
    // 0x80003B68: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80003B6C: lw          $t0, 0x2EB8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2EB8);
    // 0x80003B70: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80003B74: nop

    // 0x80003B78: beq         $t9, $t0, L_80003BB8
    if (ctx->r25 == ctx->r8) {
        // 0x80003B7C: nop
    
            goto L_80003BB8;
    }
    // 0x80003B7C: nop

    // 0x80003B80: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80003B84: lw          $a1, 0x2EA0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EA0);
    // 0x80003B88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80003B8C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80003B90: jal         0x80002CD0
    // 0x80003B94: nop

    func_80002CD0(rdram, ctx);
        goto after_3;
    // 0x80003B94: nop

    after_3:
    // 0x80003B98: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003B9C: lw          $a0, 0x2EA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA0);
    // 0x80003BA0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80003BA4: jal         0x80033A14
    // 0x80003BA8: nop

    alBnkfNew(rdram, ctx);
        goto after_4;
    // 0x80003BA8: nop

    after_4:
    // 0x80003BAC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80003BB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003BB4: sw          $t1, 0x2EB8($at)
    MEM_W(0X2EB8, ctx->r1) = ctx->r9;
L_80003BB8:
    // 0x80003BB8: lbu         $t3, 0x2B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2B);
    // 0x80003BBC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80003BC0: lw          $t2, 0x2EA0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2EA0);
    // 0x80003BC4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80003BC8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003BCC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80003BD0: lw          $a1, 0x4($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X4);
    // 0x80003BD4: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003BD8: jal         0x80034620
    // 0x80003BDC: nop

    alSeqpSetBank(rdram, ctx);
        goto after_5;
    // 0x80003BDC: nop

    after_5:
    // 0x80003BE0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003BE4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80003BE8: lw          $a1, 0x2EAC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2EAC);
    // 0x80003BEC: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003BF0: jal         0x80034660
    // 0x80003BF4: nop

    alSeqpSetSeq(rdram, ctx);
        goto after_6;
    // 0x80003BF4: nop

    after_6:
    // 0x80003BF8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80003BFC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003C00: lh          $t8, 0x2ED0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X2ED0);
    // 0x80003C04: lh          $t6, 0x2ED2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2ED2);
    // 0x80003C08: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80003C0C: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80003C10: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003C14: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003C18: mflo        $a1
    ctx->r5 = lo;
    // 0x80003C1C: nop

    // 0x80003C20: nop

    // 0x80003C24: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80003C28: mflo        $t7
    ctx->r15 = lo;
    // 0x80003C2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80003C30: jal         0x800346A0
    // 0x80003C34: nop

    alSeqpSetVol(rdram, ctx);
        goto after_7;
    // 0x80003C34: nop

    after_7:
    // 0x80003C38: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80003C3C: lw          $t9, 0x2EC0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2EC0);
    // 0x80003C40: nop

    // 0x80003C44: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80003C48: beq         $t0, $zero, L_80003C58
    if (ctx->r8 == 0) {
        // 0x80003C4C: nop
    
            goto L_80003C58;
    }
    // 0x80003C4C: nop

    // 0x80003C50: b           L_80003C84
    // 0x80003C54: nop

        goto L_80003C84;
    // 0x80003C54: nop

L_80003C58:
    // 0x80003C58: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003C5C: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003C60: jal         0x800346E0
    // 0x80003C64: nop

    alSeqpPlay(rdram, ctx);
        goto after_8;
    // 0x80003C64: nop

    after_8:
    // 0x80003C68: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003C6C: sw          $zero, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = 0;
    // 0x80003C70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80003C74: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003C78: sw          $t1, 0x2EBC($at)
    MEM_W(0X2EBC, ctx->r1) = ctx->r9;
    // 0x80003C7C: b           L_80003C84
    // 0x80003C80: nop

        goto L_80003C84;
    // 0x80003C80: nop

L_80003C84:
    // 0x80003C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80003C88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003C8C: jr          $ra
    // 0x80003C90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80003C90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80018794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018794: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80018798: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001879C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800187A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800187A4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800187A8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800187AC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800187B0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800187B4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800187B8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800187BC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800187C0: nop

    // 0x800187C4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800187C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800187CC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800187D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800187D4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800187D8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800187DC: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x800187E0: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x800187E4: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x800187E8: ori         $t3, $t3, 0x1402
    ctx->r11 = ctx->r11 | 0X1402;
    // 0x800187EC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800187F0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800187F4: lui         $t5, 0x10
    ctx->r13 = S32(0X10 << 16);
    // 0x800187F8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800187FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80018800: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80018804: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018808: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8001880C: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80018810: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80018814: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80018818: lui         $t9, 0xB600
    ctx->r25 = S32(0XB600 << 16);
    // 0x8001881C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80018820: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80018824: lui         $t1, 0x1F
    ctx->r9 = S32(0X1F << 16);
    // 0x80018828: ori         $t1, $t1, 0x3204
    ctx->r9 = ctx->r9 | 0X3204;
    // 0x8001882C: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80018830: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80018834: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80018838: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001883C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80018840: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80018844: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x80018848: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001884C: lui         $t5, 0xB700
    ctx->r13 = S32(0XB700 << 16);
    // 0x80018850: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80018854: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80018858: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8001885C: ori         $t7, $t7, 0x2205
    ctx->r15 = ctx->r15 | 0X2205;
    // 0x80018860: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80018864: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80018868: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8001886C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018870: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80018874: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80018878: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8001887C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80018880: lui         $t1, 0xFC12
    ctx->r9 = S32(0XFC12 << 16);
    // 0x80018884: ori         $t1, $t1, 0x7FFF
    ctx->r9 = ctx->r9 | 0X7FFF;
    // 0x80018888: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8001888C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80018890: addiu       $t3, $zero, -0x3C8
    ctx->r11 = ADD32(0, -0X3C8);
    // 0x80018894: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80018898: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001889C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x800188A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800188A4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x800188A8: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x800188AC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x800188B0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800188B4: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x800188B8: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x800188BC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800188C0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800188C4: lui         $t9, 0xC811
    ctx->r25 = S32(0XC811 << 16);
    // 0x800188C8: ori         $t9, $t9, 0x3078
    ctx->r25 = ctx->r25 | 0X3078;
    // 0x800188CC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800188D0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800188D4: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800188D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800188DC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800188E0: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800188E4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800188E8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800188EC: lui         $t3, 0xF800
    ctx->r11 = S32(0XF800 << 16);
    // 0x800188F0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800188F4: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x800188F8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x800188FC: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80018900: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x80018904: andi        $t0, $a2, 0xFF
    ctx->r8 = ctx->r6 & 0XFF;
    // 0x80018908: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8001890C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80018910: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80018914: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80018918: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8001891C: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80018920: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80018924: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80018928: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001892C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018930: addiu       $t6, $t7, 0x8
    ctx->r14 = ADD32(ctx->r15, 0X8);
    // 0x80018934: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80018938: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8001893C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80018940: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x80018944: ori         $t8, $t8, 0x8
    ctx->r24 = ctx->r24 | 0X8;
    // 0x80018948: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8001894C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80018950: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80018954: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x80018958: ori         $t3, $t3, 0xF400
    ctx->r11 = ctx->r11 | 0XF400;
    // 0x8001895C: subu        $t2, $t9, $t1
    ctx->r10 = SUB32(ctx->r25, ctx->r9);
    // 0x80018960: div         $zero, $t3, $t2
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r10)));
    // 0x80018964: bne         $t2, $zero, L_80018970
    if (ctx->r10 != 0) {
        // 0x80018968: nop
    
            goto L_80018970;
    }
    // 0x80018968: nop

    // 0x8001896C: break       7
    do_break(2147584364);
L_80018970:
    // 0x80018970: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80018974: bne         $t2, $at, L_80018988
    if (ctx->r10 != ctx->r1) {
        // 0x80018978: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80018988;
    }
    // 0x80018978: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001897C: bne         $t3, $at, L_80018988
    if (ctx->r11 != ctx->r1) {
        // 0x80018980: nop
    
            goto L_80018988;
    }
    // 0x80018980: nop

    // 0x80018984: break       6
    do_break(2147584388);
L_80018988:
    // 0x80018988: negu        $t6, $t1
    ctx->r14 = SUB32(0, ctx->r9);
    // 0x8001898C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80018990: addu        $at, $t3, $zero
    ctx->r1 = ADD32(ctx->r11, 0);
    // 0x80018994: addu        $t0, $t8, $at
    ctx->r8 = ADD32(ctx->r24, ctx->r1);
    // 0x80018998: mflo        $t4
    ctx->r12 = lo;
    // 0x8001899C: andi        $t5, $t4, 0xFFFF
    ctx->r13 = ctx->r12 & 0XFFFF;
    // 0x800189A0: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x800189A4: div         $zero, $t0, $t2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r10)));
    // 0x800189A8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800189AC: bne         $t2, $zero, L_800189B8
    if (ctx->r10 != 0) {
        // 0x800189B0: nop
    
            goto L_800189B8;
    }
    // 0x800189B0: nop

    // 0x800189B4: break       7
    do_break(2147584436);
L_800189B8:
    // 0x800189B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800189BC: bne         $t2, $at, L_800189D0
    if (ctx->r10 != ctx->r1) {
        // 0x800189C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800189D0;
    }
    // 0x800189C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800189C4: bne         $t0, $at, L_800189D0
    if (ctx->r8 != ctx->r1) {
        // 0x800189C8: nop
    
            goto L_800189D0;
    }
    // 0x800189C8: nop

    // 0x800189CC: break       6
    do_break(2147584460);
L_800189D0:
    // 0x800189D0: mflo        $t9
    ctx->r25 = lo;
    // 0x800189D4: andi        $t3, $t9, 0xFFFF
    ctx->r11 = ctx->r25 & 0XFFFF;
    // 0x800189D8: or          $t4, $t7, $t3
    ctx->r12 = ctx->r15 | ctx->r11;
    // 0x800189DC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x800189E0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800189E4: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800189E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800189EC: addiu       $t6, $t1, 0x8
    ctx->r14 = ADD32(ctx->r9, 0X8);
    // 0x800189F0: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x800189F4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800189F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800189FC: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80018A00: ori         $t8, $t8, 0x2
    ctx->r24 = ctx->r24 | 0X2;
    // 0x80018A04: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80018A08: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80018A0C: nop

    // 0x80018A10: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x80018A14: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80018A18: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80018A1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018A20: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80018A24: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80018A28: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80018A2C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80018A30: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x80018A34: ori         $t3, $t3, 0x402
    ctx->r11 = ctx->r11 | 0X402;
    // 0x80018A38: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80018A3C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80018A40: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x80018A44: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80018A48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018A4C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80018A50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018A54: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x80018A58: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80018A5C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80018A60: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80018A64: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x80018A68: ori         $t0, $t0, 0x602
    ctx->r8 = ctx->r8 | 0X602;
    // 0x80018A6C: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x80018A70: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80018A74: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x80018A78: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x80018A7C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80018A80: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80018A84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018A88: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80018A8C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80018A90: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80018A94: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80018A98: lui         $t5, 0xF900
    ctx->r13 = S32(0XF900 << 16);
    // 0x80018A9C: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x80018AA0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80018AA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80018AA8: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80018AAC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018AB0: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x80018AB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018AB8: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x80018ABC: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80018AC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80018AC4: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80018AC8: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80018ACC: ori         $t9, $t9, 0xC02
    ctx->r25 = ctx->r25 | 0XC02;
    // 0x80018AD0: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x80018AD4: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x80018AD8: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x80018ADC: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80018AE0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80018AE4: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80018AE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018AEC: addiu       $t1, $t5, 0x8
    ctx->r9 = ADD32(ctx->r13, 0X8);
    // 0x80018AF0: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80018AF4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80018AF8: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x80018AFC: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80018B00: ori         $t6, $t6, 0x1301
    ctx->r14 = ctx->r14 | 0X1301;
    // 0x80018B04: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x80018B08: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x80018B0C: lui         $t0, 0x8
    ctx->r8 = S32(0X8 << 16);
    // 0x80018B10: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x80018B14: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80018B18: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80018B1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018B20: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80018B24: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80018B28: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80018B2C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80018B30: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x80018B34: ori         $t3, $t3, 0x2
    ctx->r11 = ctx->r11 | 0X2;
    // 0x80018B38: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80018B3C: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80018B40: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x80018B44: ori         $t5, $t5, 0x60
    ctx->r13 = ctx->r13 | 0X60;
    // 0x80018B48: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80018B4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018B50: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80018B54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018B58: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x80018B5C: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80018B60: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x80018B64: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80018B68: lui         $t0, 0x386
    ctx->r8 = S32(0X386 << 16);
    // 0x80018B6C: ori         $t0, $t0, 0x10
    ctx->r8 = ctx->r8 | 0X10;
    // 0x80018B70: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x80018B74: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80018B78: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x80018B7C: addiu       $t9, $t9, -0x5A48
    ctx->r25 = ADD32(ctx->r25, -0X5A48);
    // 0x80018B80: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80018B84: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x80018B88: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80018B8C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80018B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018B94: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80018B98: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80018B9C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80018BA0: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80018BA4: lui         $t1, 0x388
    ctx->r9 = S32(0X388 << 16);
    // 0x80018BA8: ori         $t1, $t1, 0x10
    ctx->r9 = ctx->r9 | 0X10;
    // 0x80018BAC: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x80018BB0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80018BB4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80018BB8: addiu       $t8, $t8, -0x5A48
    ctx->r24 = ADD32(ctx->r24, -0X5A48);
    // 0x80018BBC: addiu       $t0, $t8, 0x18
    ctx->r8 = ADD32(ctx->r24, 0X18);
    // 0x80018BC0: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x80018BC4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80018BC8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80018BCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018BD0: addiu       $t7, $t9, 0x8
    ctx->r15 = ADD32(ctx->r25, 0X8);
    // 0x80018BD4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80018BD8: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x80018BDC: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80018BE0: lui         $t3, 0x38A
    ctx->r11 = S32(0X38A << 16);
    // 0x80018BE4: ori         $t3, $t3, 0x10
    ctx->r11 = ctx->r11 | 0X10;
    // 0x80018BE8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80018BEC: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80018BF0: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80018BF4: addiu       $t5, $t5, -0x5A48
    ctx->r13 = ADD32(ctx->r13, -0X5A48);
    // 0x80018BF8: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x80018BFC: b           L_80018C04
    // 0x80018C00: nop

        goto L_80018C04;
    // 0x80018C00: nop

L_80018C04:
    // 0x80018C04: jr          $ra
    // 0x80018C08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80018C08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80022558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022558: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002255C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80022560: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80022564: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80022568: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002256C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80022570: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80022574: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80022578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002257C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80022580: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80022584: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80022588: nop

    // 0x8002258C: beq         $t8, $zero, L_800225B8
    if (ctx->r24 == 0) {
        // 0x80022590: nop
    
            goto L_800225B8;
    }
    // 0x80022590: nop

    // 0x80022594: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80022598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002259C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x800225A0: jal         0x80077CB0
    // 0x800225A4: addiu       $a3, $sp, 0x1A
    ctx->r7 = ADD32(ctx->r29, 0X1A);
    func_80077CB0(rdram, ctx);
        goto after_0;
    // 0x800225A4: addiu       $a3, $sp, 0x1A
    ctx->r7 = ADD32(ctx->r29, 0X1A);
    after_0:
    // 0x800225A8: beq         $v0, $zero, L_800225B8
    if (ctx->r2 == 0) {
        // 0x800225AC: nop
    
            goto L_800225B8;
    }
    // 0x800225AC: nop

    // 0x800225B0: b           L_800225C8
    // 0x800225B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800225C8;
    // 0x800225B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800225B8:
    // 0x800225B8: b           L_800225C8
    // 0x800225BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800225C8;
    // 0x800225BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800225C0: b           L_800225C8
    // 0x800225C4: nop

        goto L_800225C8;
    // 0x800225C4: nop

L_800225C8:
    // 0x800225C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800225CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800225D0: jr          $ra
    // 0x800225D4: nop

    return;
    // 0x800225D4: nop

;}
RECOMP_FUNC void func_800193CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800193CC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x800193D0: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x800193D4: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x800193D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800193DC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800193E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800193E4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800193E8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800193EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800193F0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800193F4: sb          $a1, 0x4283($at)
    MEM_B(0X4283, ctx->r1) = ctx->r5;
    // 0x800193F8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x800193FC: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80019400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80019404: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80019408: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001940C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80019410: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80019414: sb          $a2, 0x4284($at)
    MEM_B(0X4284, ctx->r1) = ctx->r6;
    // 0x80019418: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8001941C: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80019420: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80019424: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80019428: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001942C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80019430: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80019434: sb          $a3, 0x4285($at)
    MEM_B(0X4285, ctx->r1) = ctx->r7;
    // 0x80019438: jr          $ra
    // 0x8001943C: nop

    return;
    // 0x8001943C: nop

    // 0x80019440: jr          $ra
    // 0x80019444: nop

    return;
    // 0x80019444: nop

;}
RECOMP_FUNC void Handle_ObjView(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B300: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002B304: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002B308: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x8002B30C: nop

    // 0x8002B310: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x8002B314: beq         $t7, $zero, L_8002B3C0
    if (ctx->r15 == 0) {
        // 0x8002B318: nop
    
            goto L_8002B3C0;
    }
    // 0x8002B318: nop

    // 0x8002B31C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002B320: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x8002B324: nop

    // 0x8002B328: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8002B32C: beq         $t9, $zero, L_8002B384
    if (ctx->r25 == 0) {
        // 0x8002B330: nop
    
            goto L_8002B384;
    }
    // 0x8002B330: nop

    // 0x8002B334: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B338: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x8002B33C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8002B340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002B344: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B348: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002B34C: swc1        $f8, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f8.u32l;
    // 0x8002B350: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B354: lwc1        $f10, -0x1E90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x8002B358: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002B35C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002B360: nop

    // 0x8002B364: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002B368: nop

    // 0x8002B36C: bc1f        L_8002B384
    if (!c1cs) {
        // 0x8002B370: nop
    
            goto L_8002B384;
    }
    // 0x8002B370: nop

    // 0x8002B374: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002B378: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002B37C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B380: swc1        $f18, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f18.u32l;
L_8002B384:
    // 0x8002B384: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002B388: lhu         $t0, -0x1C82($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C82);
    // 0x8002B38C: nop

    // 0x8002B390: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x8002B394: beq         $t1, $zero, L_8002B3B8
    if (ctx->r9 == 0) {
        // 0x8002B398: nop
    
            goto L_8002B3B8;
    }
    // 0x8002B398: nop

    // 0x8002B39C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B3A0: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x8002B3A4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8002B3A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002B3AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B3B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002B3B4: swc1        $f8, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f8.u32l;
L_8002B3B8:
    // 0x8002B3B8: b           L_8002B630
    // 0x8002B3BC: nop

        goto L_8002B630;
    // 0x8002B3BC: nop

L_8002B3C0:
    // 0x8002B3C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002B3C4: lhu         $t2, -0x1C82($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C82);
    // 0x8002B3C8: nop

    // 0x8002B3CC: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8002B3D0: beq         $t3, $zero, L_8002B45C
    if (ctx->r11 == 0) {
        // 0x8002B3D4: nop
    
            goto L_8002B45C;
    }
    // 0x8002B3D4: nop

    // 0x8002B3D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B3DC: lwc1        $f10, -0x1EA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x8002B3E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002B3E4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8002B3E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8002B3EC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8002B3F0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8002B3F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8002B3F8: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x8002B3FC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8002B400: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002B404: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8002B408: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002B40C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002B410: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x8002B414: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8002B418: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8002B41C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8002B420: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x8002B424: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B428: mflo        $t6
    ctx->r14 = lo;
    // 0x8002B42C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002B430: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002B434: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B438: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002B43C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B440: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002B444: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8002B448: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8002B44C: nop

    // 0x8002B450: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002B454: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8002B458: swc1        $f4, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f4.u32l;
L_8002B45C:
    // 0x8002B45C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002B460: lhu         $t8, -0x1C82($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C82);
    // 0x8002B464: nop

    // 0x8002B468: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8002B46C: beq         $t9, $zero, L_8002B4F8
    if (ctx->r25 == 0) {
        // 0x8002B470: nop
    
            goto L_8002B4F8;
    }
    // 0x8002B470: nop

    // 0x8002B474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B478: lwc1        $f6, -0x1EA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x8002B47C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B480: lwc1        $f17, -0x4048($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X4048);
    // 0x8002B484: lwc1        $f16, -0x4044($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4044);
    // 0x8002B488: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x8002B48C: add.d       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f10.d + ctx->f16.d;
    // 0x8002B490: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x8002B494: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x8002B498: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8002B49C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002B4A0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8002B4A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002B4A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002B4AC: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x8002B4B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002B4B4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8002B4B8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8002B4BC: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8002B4C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B4C4: mflo        $t2
    ctx->r10 = lo;
    // 0x8002B4C8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8002B4CC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8002B4D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002B4D4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8002B4D8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002B4DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8002B4E0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8002B4E4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8002B4E8: nop

    // 0x8002B4EC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002B4F0: sub.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x8002B4F4: swc1        $f8, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f8.u32l;
L_8002B4F8:
    // 0x8002B4F8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002B4FC: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x8002B500: nop

    // 0x8002B504: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x8002B508: beq         $t5, $zero, L_8002B594
    if (ctx->r13 == 0) {
        // 0x8002B50C: nop
    
            goto L_8002B594;
    }
    // 0x8002B50C: nop

    // 0x8002B510: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B514: lwc1        $f18, -0x1EA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8002B518: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002B51C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8002B520: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002B524: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x8002B528: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x8002B52C: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x8002B530: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x8002B534: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8002B538: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002B53C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8002B540: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002B544: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002B548: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x8002B54C: cvt.w.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8002B550: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x8002B554: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8002B558: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8002B55C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B560: mflo        $t8
    ctx->r24 = lo;
    // 0x8002B564: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002B568: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8002B56C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002B570: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8002B574: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002B578: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002B57C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8002B580: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002B584: nop

    // 0x8002B588: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002B58C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8002B590: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
L_8002B594:
    // 0x8002B594: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002B598: lhu         $t0, -0x1C82($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C82);
    // 0x8002B59C: nop

    // 0x8002B5A0: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x8002B5A4: beq         $t1, $zero, L_8002B630
    if (ctx->r9 == 0) {
        // 0x8002B5A8: nop
    
            goto L_8002B630;
    }
    // 0x8002B5A8: nop

    // 0x8002B5AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B5B0: lwc1        $f16, -0x1EA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8002B5B4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B5B8: lwc1        $f7, -0x4040($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4040);
    // 0x8002B5BC: lwc1        $f6, -0x403C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X403C);
    // 0x8002B5C0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8002B5C4: add.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f18.d + ctx->f6.d;
    // 0x8002B5C8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8002B5CC: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x8002B5D0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8002B5D4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002B5D8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8002B5DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002B5E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002B5E4: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x8002B5E8: cvt.w.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002B5EC: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8002B5F0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8002B5F4: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8002B5F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B5FC: mflo        $t4
    ctx->r12 = lo;
    // 0x8002B600: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002B604: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8002B608: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002B60C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8002B610: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002B614: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002B618: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8002B61C: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x8002B620: nop

    // 0x8002B624: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002B628: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002B62C: swc1        $f8, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f8.u32l;
L_8002B630:
    // 0x8002B630: b           L_8002B638
    // 0x8002B634: nop

        goto L_8002B638;
    // 0x8002B634: nop

L_8002B638:
    // 0x8002B638: jr          $ra
    // 0x8002B63C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002B63C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80016DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016DD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80016DD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80016DDC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80016DE0:
    // 0x80016DE0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80016DE4: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x80016DE8: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x80016DEC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80016DF0: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80016DF4: bne         $at, $zero, L_80016DE0
    if (ctx->r1 != 0) {
        // 0x80016DF8: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_80016DE0;
    }
    // 0x80016DF8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80016DFC: lui         $a0, 0x39
    ctx->r4 = S32(0X39 << 16);
    // 0x80016E00: addiu       $a0, $a0, -0x5E10
    ctx->r4 = ADD32(ctx->r4, -0X5E10);
    // 0x80016E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80016E08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80016E0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80016E10: jal         0x80003FE0
    // 0x80016E14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80003FE0(rdram, ctx);
        goto after_0;
    // 0x80016E14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80016E18: lui         $a0, 0x23
    ctx->r4 = S32(0X23 << 16);
    // 0x80016E1C: lui         $a1, 0x23
    ctx->r5 = S32(0X23 << 16);
    // 0x80016E20: lui         $a2, 0x23
    ctx->r6 = S32(0X23 << 16);
    // 0x80016E24: lui         $a3, 0x23
    ctx->r7 = S32(0X23 << 16);
    // 0x80016E28: addiu       $a3, $a3, 0xD50
    ctx->r7 = ADD32(ctx->r7, 0XD50);
    // 0x80016E2C: addiu       $a2, $a2, 0xD50
    ctx->r6 = ADD32(ctx->r6, 0XD50);
    // 0x80016E30: addiu       $a1, $a1, -0x65A0
    ctx->r5 = ADD32(ctx->r5, -0X65A0);
    // 0x80016E34: jal         0x8000ABEC
    // 0x80016E38: addiu       $a0, $a0, -0x69B0
    ctx->r4 = ADD32(ctx->r4, -0X69B0);
    func_8000ABEC(rdram, ctx);
        goto after_1;
    // 0x80016E38: addiu       $a0, $a0, -0x69B0
    ctx->r4 = ADD32(ctx->r4, -0X69B0);
    after_1:
    // 0x80016E3C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x80016E40: ori         $t8, $t8, 0x93E0
    ctx->r24 = ctx->r24 | 0X93E0;
    // 0x80016E44: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x80016E48: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80016E4C: addiu       $a3, $a3, 0x7A70
    ctx->r7 = ADD32(ctx->r7, 0X7A70);
    // 0x80016E50: addiu       $a2, $a2, -0x28B8
    ctx->r6 = ADD32(ctx->r6, -0X28B8);
    // 0x80016E54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80016E58: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80016E5C: jal         0x80002E1C
    // 0x80016E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80002E1C(rdram, ctx);
        goto after_2;
    // 0x80016E60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80016E64: jal         0x80016D74
    // 0x80016E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016D74(rdram, ctx);
        goto after_3;
    // 0x80016E68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80016E6C: b           L_80016E74
    // 0x80016E70: nop

        goto L_80016E74;
    // 0x80016E70: nop

L_80016E74:
    // 0x80016E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80016E78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80016E7C: jr          $ra
    // 0x80016E80: nop

    return;
    // 0x80016E80: nop

;}
RECOMP_FUNC void func_80028FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028FA0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80028FA4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80028FA8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80028FAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80028FB0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80028FB4: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80028FB8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80028FBC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80028FC0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80028FC4: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80028FC8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80028FCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80028FD0: lh          $t0, 0x104($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X104);
    // 0x80028FD4: nop

    // 0x80028FD8: beq         $t0, $at, L_80029000
    if (ctx->r8 == ctx->r1) {
        // 0x80028FDC: nop
    
            goto L_80029000;
    }
    // 0x80028FDC: nop

    // 0x80028FE0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80028FE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80028FE8: lbu         $t2, 0x10A($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X10A);
    // 0x80028FEC: nop

    // 0x80028FF0: bne         $t2, $at, L_80029000
    if (ctx->r10 != ctx->r1) {
        // 0x80028FF4: nop
    
            goto L_80029000;
    }
    // 0x80028FF4: nop

    // 0x80028FF8: b           L_80029010
    // 0x80028FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80029010;
    // 0x80028FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80029000:
    // 0x80029000: b           L_80029010
    // 0x80029004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029010;
    // 0x80029004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029008: b           L_80029010
    // 0x8002900C: nop

        goto L_80029010;
    // 0x8002900C: nop

L_80029010:
    // 0x80029010: jr          $ra
    // 0x80029014: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80029014: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void alSndpAllocate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035240: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x80035244: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80035248: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003524C: blez        $a2, L_800352D0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80035250: addiu       $a3, $zero, 0x30
        ctx->r7 = ADD32(0, 0X30);
            goto L_800352D0;
    }
    // 0x80035250: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_80035254:
    // 0x80035254: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035258: mflo        $t6
    ctx->r14 = lo;
    // 0x8003525C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x80035260: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x80035264: bne         $t7, $zero, L_800352B8
    if (ctx->r15 != 0) {
        // 0x80035268: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800352B8;
    }
    // 0x80035268: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003526C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80035270: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80035274: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80035278: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x8003527C: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x80035280: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80035284: sb          $t9, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r25;
    // 0x80035288: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x8003528C: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x80035290: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x80035294: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80035298: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8003529C: sll         $t1, $t0, 15
    ctx->r9 = S32(ctx->r8 << 15);
    // 0x800352A0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800352A4: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x800352A8: mflo        $t2
    ctx->r10 = lo;
    // 0x800352AC: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
    // 0x800352B0: jr          $ra
    // 0x800352B4: nop

    return;
    // 0x800352B4: nop

L_800352B8:
    // 0x800352B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800352BC: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x800352C0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800352C4: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800352C8: bne         $at, $zero, L_80035254
    if (ctx->r1 != 0) {
        // 0x800352CC: nop
    
            goto L_80035254;
    }
    // 0x800352CC: nop

L_800352D0:
    // 0x800352D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800352D4: jr          $ra
    // 0x800352D8: nop

    return;
    // 0x800352D8: nop

;}
RECOMP_FUNC void func_80000D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000D54: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000D58: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000D5C: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000D60: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000D64: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000D68: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000D6C: jal         0x8000068C
    // 0x80000D70: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000D70: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000D74: lui         $t8, 0x15
    ctx->r24 = S32(0X15 << 16);
    // 0x80000D78: lui         $t9, 0x15
    ctx->r25 = S32(0X15 << 16);
    // 0x80000D7C: addiu       $t9, $t9, 0x7520
    ctx->r25 = ADD32(ctx->r25, 0X7520);
    // 0x80000D80: addiu       $t8, $t8, 0x6F90
    ctx->r24 = ADD32(ctx->r24, 0X6F90);
    // 0x80000D84: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000D88: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000D8C: jal         0x8000068C
    // 0x80000D90: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000D90: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000D94: b           L_80000D9C
    // 0x80000D98: nop

        goto L_80000D9C;
    // 0x80000D98: nop

L_80000D9C:
    // 0x80000D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000DA4: jr          $ra
    // 0x80000DA8: nop

    return;
    // 0x80000DA8: nop

;}
RECOMP_FUNC void alSeqpGetChlPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800348E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800348E4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x800348E8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800348EC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x800348F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800348F4: jr          $ra
    // 0x800348F8: lbu         $v0, 0x7($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X7);
    return;
    // 0x800348F8: lbu         $v0, 0x7($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X7);
;}
RECOMP_FUNC void func_8002F598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F598: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F59C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002F5A0: jal         0x8001D4D0
    // 0x8002F5A4: nop

    func_8001D4D0(rdram, ctx);
        goto after_0;
    // 0x8002F5A4: nop

    after_0:
    // 0x8002F5A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8002F5AC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x8002F5B0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x8002F5B4: jal         0x8001D638
    // 0x8002F5B8: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    Debug_SetBg(rdram, ctx);
        goto after_1;
    // 0x8002F5B8: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    after_1:
    // 0x8002F5BC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8002F5C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002F5C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002F5C8: lwc1        $f6, -0x3FF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3FF4);
    // 0x8002F5CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002F5D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002F5D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002F5D8: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8002F5DC: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x8002F5E0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x8002F5E4: addiu       $a1, $sp, 0x3E
    ctx->r5 = ADD32(ctx->r29, 0X3E);
    // 0x8002F5E8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8002F5EC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8002F5F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8002F5F4: jal         0x80036E70
    // 0x8002F5F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    guPerspective(rdram, ctx);
        goto after_2;
    // 0x8002F5F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8002F5FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002F600: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8002F604: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F608: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8002F60C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8002F610: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8002F614: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8002F618: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8002F61C: ori         $t8, $t8, 0xE
    ctx->r24 = ctx->r24 | 0XE;
    // 0x8002F620: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8002F624: lhu         $t0, 0x3E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X3E);
    // 0x8002F628: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8002F62C: nop

    // 0x8002F630: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8002F634: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F638: lwc1        $f10, -0x1EC0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8002F63C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F640: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8002F644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F648: lwc1        $f18, -0x1EB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8002F64C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F650: lwc1        $f4, -0x1E9C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E9C);
    // 0x8002F654: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F658: lwc1        $f6, -0x1E98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1E98);
    // 0x8002F65C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002F664: lw          $a0, -0x1EFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1EFC);
    // 0x8002F668: lwc1        $f8, -0x1E94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1E94);
    // 0x8002F66C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8002F670: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8002F674: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8002F678: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x8002F67C: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x8002F680: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x8002F684: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8002F688: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8002F68C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8002F690: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8002F694: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8002F698: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8002F69C: jal         0x80037188
    // 0x8002F6A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    guLookAt(rdram, ctx);
        goto after_3;
    // 0x8002F6A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8002F6A4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002F6A8: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8002F6AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F6B0: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8002F6B4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8002F6B8: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8002F6BC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8002F6C0: lui         $t4, 0x103
    ctx->r12 = S32(0X103 << 16);
    // 0x8002F6C4: ori         $t4, $t4, 0x40
    ctx->r12 = ctx->r12 | 0X40;
    // 0x8002F6C8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8002F6CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002F6D0: lw          $t6, -0x1EFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EFC);
    // 0x8002F6D4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8002F6D8: nop

    // 0x8002F6DC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8002F6E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002F6E4: sw          $zero, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = 0;
    // 0x8002F6E8: jal         0x8002D8FC
    // 0x8002F6EC: nop

    func_8002D8FC(rdram, ctx);
        goto after_4;
    // 0x8002F6EC: nop

    after_4:
    // 0x8002F6F0: jal         0x8001C464
    // 0x8002F6F4: nop

    func_8001C464(rdram, ctx);
        goto after_5;
    // 0x8002F6F4: nop

    after_5:
    // 0x8002F6F8: jal         0x8001C70C
    // 0x8002F6FC: nop

    func_8001C70C(rdram, ctx);
        goto after_6;
    // 0x8002F6FC: nop

    after_6:
    // 0x8002F700: jal         0x8002D968
    // 0x8002F704: nop

    func_8002D968(rdram, ctx);
        goto after_7;
    // 0x8002F704: nop

    after_7:
    // 0x8002F708: jal         0x8001C5B8
    // 0x8002F70C: nop

    func_8001C5B8(rdram, ctx);
        goto after_8;
    // 0x8002F70C: nop

    after_8:
    // 0x8002F710: jal         0x8001C96C
    // 0x8002F714: nop

    func_8001C96C(rdram, ctx);
        goto after_9;
    // 0x8002F714: nop

    after_9:
    // 0x8002F718: jal         0x8002EF60
    // 0x8002F71C: nop

    Debug_ParseSetModeMenu(rdram, ctx);
        goto after_10;
    // 0x8002F71C: nop

    after_10:
    // 0x8002F720: b           L_8002F728
    // 0x8002F724: nop

        goto L_8002F728;
    // 0x8002F724: nop

L_8002F728:
    // 0x8002F728: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002F72C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F730: jr          $ra
    // 0x8002F734: nop

    return;
    // 0x8002F734: nop

;}
RECOMP_FUNC void func_80001790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001798: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x8000179C: lui         $t7, 0x1F
    ctx->r15 = S32(0X1F << 16);
    // 0x800017A0: addiu       $t7, $t7, -0x810
    ctx->r15 = ADD32(ctx->r15, -0X810);
    // 0x800017A4: addiu       $t6, $t6, -0x27A0
    ctx->r14 = ADD32(ctx->r14, -0X27A0);
    // 0x800017A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800017AC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800017B0: jal         0x8000068C
    // 0x800017B4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800017B4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800017B8: b           L_800017C0
    // 0x800017BC: nop

        goto L_800017C0;
    // 0x800017BC: nop

L_800017C0:
    // 0x800017C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800017C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800017C8: jr          $ra
    // 0x800017CC: nop

    return;
    // 0x800017CC: nop

;}
RECOMP_FUNC void func_80019CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019CCC: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80019CD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019CD4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80019CD8: sw          $zero, -0x3D68($at)
    MEM_W(-0X3D68, ctx->r1) = 0;
    // 0x80019CDC: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x80019CE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019CE4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80019CE8: sb          $zero, -0x3D64($at)
    MEM_B(-0X3D64, ctx->r1) = 0;
    // 0x80019CEC: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x80019CF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019CF4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80019CF8: sb          $zero, -0x3D63($at)
    MEM_B(-0X3D63, ctx->r1) = 0;
    // 0x80019CFC: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80019D00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019D04: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80019D08: sb          $zero, -0x3D62($at)
    MEM_B(-0X3D62, ctx->r1) = 0;
    // 0x80019D0C: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x80019D10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019D14: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80019D18: sb          $zero, -0x3D61($at)
    MEM_B(-0X3D61, ctx->r1) = 0;
    // 0x80019D1C: jr          $ra
    // 0x80019D20: nop

    return;
    // 0x80019D20: nop

    // 0x80019D24: jr          $ra
    // 0x80019D28: nop

    return;
    // 0x80019D28: nop

;}
RECOMP_FUNC void func_8001C0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C0EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C0F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C0F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C0F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001C0FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8001C100: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8001C104: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001C108: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001C10C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8001C110: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001C114: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8001C118: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001C11C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8001C120: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001C124: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8001C128: lw          $t3, -0x3560($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3560);
    // 0x8001C12C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001C130: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C134: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001C138: jal         0x8001BE6C
    // 0x8001C13C: addu        $a3, $t0, $t3
    ctx->r7 = ADD32(ctx->r8, ctx->r11);
    func_8001BE6C(rdram, ctx);
        goto after_0;
    // 0x8001C13C: addu        $a3, $t0, $t3
    ctx->r7 = ADD32(ctx->r8, ctx->r11);
    after_0:
    // 0x8001C140: b           L_8001C148
    // 0x8001C144: nop

        goto L_8001C148;
    // 0x8001C144: nop

L_8001C148:
    // 0x8001C148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C150: jr          $ra
    // 0x8001C154: nop

    return;
    // 0x8001C154: nop

;}
RECOMP_FUNC void func_80025764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80025768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002576C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80025770: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80025774: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80025778:
    // 0x80025778: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8002577C:
    // 0x8002577C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80025780: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80025784: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80025788: jal         0x800256E0
    // 0x8002578C: nop

    func_800256E0(rdram, ctx);
        goto after_0;
    // 0x8002578C: nop

    after_0:
    // 0x80025790: beq         $v0, $zero, L_800257A8
    if (ctx->r2 == 0) {
        // 0x80025794: nop
    
            goto L_800257A8;
    }
    // 0x80025794: nop

    // 0x80025798: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002579C: nop

    // 0x800257A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800257A4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_800257A8:
    // 0x800257A8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800257AC: nop

    // 0x800257B0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800257B4: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x800257B8: bne         $at, $zero, L_8002577C
    if (ctx->r1 != 0) {
        // 0x800257BC: sw          $t9, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r25;
            goto L_8002577C;
    }
    // 0x800257BC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800257C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800257C4: nop

    // 0x800257C8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800257CC: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x800257D0: bne         $at, $zero, L_80025778
    if (ctx->r1 != 0) {
        // 0x800257D4: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_80025778;
    }
    // 0x800257D4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800257D8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800257DC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800257E0: bne         $t2, $at, L_800257F0
    if (ctx->r10 != ctx->r1) {
        // 0x800257E4: nop
    
            goto L_800257F0;
    }
    // 0x800257E4: nop

    // 0x800257E8: b           L_80025800
    // 0x800257EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025800;
    // 0x800257EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800257F0:
    // 0x800257F0: b           L_80025800
    // 0x800257F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80025800;
    // 0x800257F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800257F8: b           L_80025800
    // 0x800257FC: nop

        goto L_80025800;
    // 0x800257FC: nop

L_80025800:
    // 0x80025800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025804: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80025808: jr          $ra
    // 0x8002580C: nop

    return;
    // 0x8002580C: nop

;}
RECOMP_FUNC void __osIdCheckSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042A1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80042A20: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x80042A24: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80042A28: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x80042A2C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x80042A30: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_80042A34:
    // 0x80042A34: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x80042A38: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80042A3C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80042A40: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x80042A44: lhu         $t0, 0x0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X0);
    // 0x80042A48: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x80042A4C: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x80042A50: lhu         $t3, 0x6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6);
    // 0x80042A54: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x80042A58: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x80042A5C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80042A60: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x80042A64: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x80042A68: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80042A6C: sltiu       $at, $t7, 0x1C
    ctx->r1 = ctx->r15 < 0X1C ? 1 : 0;
    // 0x80042A70: bne         $at, $zero, L_80042A34
    if (ctx->r1 != 0) {
        // 0x80042A74: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_80042A34;
    }
    // 0x80042A74: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x80042A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80042A7C: jr          $ra
    // 0x80042A80: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80042A80: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void _free_internal(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800303F0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800303F4: lw          $t1, 0x7EC4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7EC4);
    // 0x800303F8: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x800303FC: subu        $a2, $a0, $t1
    ctx->r6 = SUB32(ctx->r4, ctx->r9);
    // 0x80030400: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80030404: addiu       $t4, $t4, 0x7EC8
    ctx->r12 = ADD32(ctx->r12, 0X7EC8);
    // 0x80030408: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x8003040C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80030410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030414: bgez        $a2, L_80030424
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80030418: sra         $t6, $a2, 12
        ctx->r14 = S32(SIGNED(ctx->r6) >> 12);
            goto L_80030424;
    }
    // 0x80030418: sra         $t6, $a2, 12
    ctx->r14 = S32(SIGNED(ctx->r6) >> 12);
    // 0x8003041C: addiu       $at, $a2, 0xFFF
    ctx->r1 = ADD32(ctx->r6, 0XFFF);
    // 0x80030420: sra         $t6, $at, 12
    ctx->r14 = S32(SIGNED(ctx->r1) >> 12);
L_80030424:
    // 0x80030424: addiu       $a2, $t6, 0x1
    ctx->r6 = ADD32(ctx->r14, 0X1);
    // 0x80030428: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003042C: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80030430: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80030434: lui         $ra, 0x8005
    ctx->r31 = S32(0X8005 << 16);
    // 0x80030438: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8003043C: addiu       $t3, $t3, 0x7F44
    ctx->r11 = ADD32(ctx->r11, 0X7F44);
    // 0x80030440: addiu       $v0, $v0, 0x7F3C
    ctx->r2 = ADD32(ctx->r2, 0X7F3C);
    // 0x80030444: addiu       $t5, $t5, 0x7F40
    ctx->r13 = ADD32(ctx->r13, 0X7F40);
    // 0x80030448: addiu       $ra, $ra, 0x7F38
    ctx->r31 = ADD32(ctx->r31, 0X7F38);
    // 0x8003044C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80030450: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80030454: mflo        $t2
    ctx->r10 = lo;
    // 0x80030458: addu        $t0, $a1, $t2
    ctx->r8 = ADD32(ctx->r5, ctx->r10);
    // 0x8003045C: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x80030460: nop

    // 0x80030464: bne         $v1, $zero, L_800307C0
    if (ctx->r3 != 0) {
        // 0x80030468: nop
    
            goto L_800307C0;
    }
    // 0x80030468: nop

    // 0x8003046C: lui         $ra, 0x8005
    ctx->r31 = S32(0X8005 << 16);
    // 0x80030470: addiu       $ra, $ra, 0x7F38
    ctx->r31 = ADD32(ctx->r31, 0X7F38);
    // 0x80030474: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x80030478: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8003047C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80030480: sw          $t8, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r24;
    // 0x80030484: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80030488: lui         $v1, 0x8005
    ctx->r3 = S32(0X8005 << 16);
    // 0x8003048C: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80030490: subu        $t8, $t9, $t7
    ctx->r24 = SUB32(ctx->r25, ctx->r15);
    // 0x80030494: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80030498: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x8003049C: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x800304A0: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x800304A4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800304A8: sw          $t8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r24;
    // 0x800304AC: lw          $v1, 0x7ED0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7ED0);
    // 0x800304B0: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800304B4: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x800304B8: beq         $at, $zero, L_800304F4
    if (ctx->r1 == 0) {
        // 0x800304BC: addiu       $t5, $t5, 0x7F40
        ctx->r13 = ADD32(ctx->r13, 0X7F40);
            goto L_800304F4;
    }
    // 0x800304BC: addiu       $t5, $t5, 0x7F40
    ctx->r13 = ADD32(ctx->r13, 0X7F40);
    // 0x800304C0: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x800304C4: beq         $at, $zero, L_8003052C
    if (ctx->r1 == 0) {
        // 0x800304C8: nop
    
            goto L_8003052C;
    }
    // 0x800304C8: nop

L_800304CC:
    // 0x800304CC: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800304D0: mflo        $t9
    ctx->r25 = lo;
    // 0x800304D4: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x800304D8: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x800304DC: nop

    // 0x800304E0: sltu        $at, $a2, $v1
    ctx->r1 = ctx->r6 < ctx->r3 ? 1 : 0;
    // 0x800304E4: bne         $at, $zero, L_800304CC
    if (ctx->r1 != 0) {
        // 0x800304E8: nop
    
            goto L_800304CC;
    }
    // 0x800304E8: nop

    // 0x800304EC: b           L_8003052C
    // 0x800304F0: nop

        goto L_8003052C;
    // 0x800304F0: nop

L_800304F4:
    // 0x800304F4: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800304F8: mflo        $t7
    ctx->r15 = lo;
    // 0x800304FC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80030500: lw          $v1, 0x4($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X4);
    // 0x80030504: nop

    // 0x80030508: beq         $v1, $zero, L_80030518
    if (ctx->r3 == 0) {
        // 0x8003050C: sltu        $at, $v1, $a2
        ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
            goto L_80030518;
    }
    // 0x8003050C: sltu        $at, $v1, $a2
    ctx->r1 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x80030510: bne         $at, $zero, L_800304F4
    if (ctx->r1 != 0) {
        // 0x80030514: nop
    
            goto L_800304F4;
    }
    // 0x80030514: nop

L_80030518:
    // 0x80030518: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003051C: mflo        $t9
    ctx->r25 = lo;
    // 0x80030520: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x80030524: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x80030528: nop

L_8003052C:
    // 0x8003052C: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030530: mflo        $v0
    ctx->r2 = lo;
    // 0x80030534: addu        $a0, $a1, $v0
    ctx->r4 = ADD32(ctx->r5, ctx->r2);
    // 0x80030538: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8003053C: nop

    // 0x80030540: addu        $t7, $t1, $v1
    ctx->r15 = ADD32(ctx->r9, ctx->r3);
    // 0x80030544: bne         $a2, $t7, L_8003056C
    if (ctx->r6 != ctx->r15) {
        // 0x80030548: nop
    
            goto L_8003056C;
    }
    // 0x80030548: nop

    // 0x8003054C: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80030550: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80030554: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x80030558: addu        $t9, $t1, $t8
    ctx->r25 = ADD32(ctx->r9, ctx->r24);
    // 0x8003055C: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80030560: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80030564: b           L_800305E4
    // 0x80030568: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
        goto L_800305E4;
    // 0x80030568: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_8003056C:
    // 0x8003056C: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80030570: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80030574: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80030578: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x8003057C: addiu       $t5, $t5, 0x7F40
    ctx->r13 = ADD32(ctx->r13, 0X7F40);
    // 0x80030580: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x80030584: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80030588: addu        $t9, $a1, $t2
    ctx->r25 = ADD32(ctx->r5, ctx->r10);
    // 0x8003058C: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80030590: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80030594: nop

    // 0x80030598: addu        $t7, $t6, $t2
    ctx->r15 = ADD32(ctx->r14, ctx->r10);
    // 0x8003059C: sw          $v1, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r3;
    // 0x800305A0: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x800305A4: nop

    // 0x800305A8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800305AC: sw          $a2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r6;
    // 0x800305B0: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x800305B4: nop

    // 0x800305B8: addu        $t6, $a1, $t2
    ctx->r14 = ADD32(ctx->r5, ctx->r10);
    // 0x800305BC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x800305C0: nop

    // 0x800305C4: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800305C8: mflo        $t8
    ctx->r24 = lo;
    // 0x800305CC: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x800305D0: sw          $a2, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r6;
    // 0x800305D4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800305D8: nop

    // 0x800305DC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800305E0: sw          $t7, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r15;
L_800305E4:
    // 0x800305E4: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x800305E8: nop

    // 0x800305EC: addu        $t0, $a1, $t2
    ctx->r8 = ADD32(ctx->r5, ctx->r10);
    // 0x800305F0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x800305F4: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x800305F8: addu        $t8, $a2, $v1
    ctx->r24 = ADD32(ctx->r6, ctx->r3);
    // 0x800305FC: bne         $t8, $v0, L_80030690
    if (ctx->r24 != ctx->r2) {
        // 0x80030600: sltiu       $at, $v1, 0x8
        ctx->r1 = ctx->r3 < 0X8 ? 1 : 0;
            goto L_80030690;
    }
    // 0x80030600: sltiu       $at, $v1, 0x8
    ctx->r1 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80030604: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030608: mflo        $t9
    ctx->r25 = lo;
    // 0x8003060C: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x80030610: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80030614: nop

    // 0x80030618: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8003061C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80030620: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80030624: nop

    // 0x80030628: addu        $t0, $a1, $t2
    ctx->r8 = ADD32(ctx->r5, ctx->r10);
    // 0x8003062C: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x80030630: nop

    // 0x80030634: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030638: mflo        $t6
    ctx->r14 = lo;
    // 0x8003063C: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80030640: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80030644: nop

    // 0x80030648: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8003064C: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80030650: nop

    // 0x80030654: addu        $t9, $a1, $t2
    ctx->r25 = ADD32(ctx->r5, ctx->r10);
    // 0x80030658: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8003065C: nop

    // 0x80030660: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030664: mflo        $t7
    ctx->r15 = lo;
    // 0x80030668: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x8003066C: sw          $a2, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r6;
    // 0x80030670: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x80030674: lw          $t7, 0x0($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X0);
    // 0x80030678: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8003067C: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x80030680: addu        $t8, $t7, $t2
    ctx->r24 = ADD32(ctx->r15, ctx->r10);
    // 0x80030684: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x80030688: nop

    // 0x8003068C: sltiu       $at, $v1, 0x8
    ctx->r1 = ctx->r3 < 0X8 ? 1 : 0;
L_80030690:
    // 0x80030690: bne         $at, $zero, L_800307B4
    if (ctx->r1 != 0) {
        // 0x80030694: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_800307B4;
    }
    // 0x80030694: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80030698: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8003069C: addiu       $t0, $t0, 0x7ED4
    ctx->r8 = ADD32(ctx->r8, 0X7ED4);
    // 0x800306A0: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x800306A4: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x800306A8: bne         $t9, $v1, L_800307B4
    if (ctx->r25 != ctx->r3) {
        // 0x800306AC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800307B4;
    }
    // 0x800306AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800306B0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800306B4: lw          $t9, -0x58B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58B0);
    // 0x800306B8: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800306BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800306C0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800306C4: jalr        $t9
    // 0x800306C8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800306C8: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_0:
    // 0x800306CC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800306D0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800306D4: lw          $t8, 0x7EC4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7EC4);
    // 0x800306D8: sll         $t7, $v1, 12
    ctx->r15 = S32(ctx->r3 << 12);
    // 0x800306DC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x800306E0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800306E4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800306E8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800306EC: addiu       $t6, $v0, 0x1000
    ctx->r14 = ADD32(ctx->r2, 0X1000);
    // 0x800306F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800306F4: bne         $t6, $t9, L_800307B4
    if (ctx->r14 != ctx->r25) {
        // 0x800306F8: addiu       $t0, $t0, 0x7ED4
        ctx->r8 = ADD32(ctx->r8, 0X7ED4);
            goto L_800307B4;
    }
    // 0x800306F8: addiu       $t0, $t0, 0x7ED4
    ctx->r8 = ADD32(ctx->r8, 0X7ED4);
    // 0x800306FC: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80030700: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80030704: subu        $t8, $t7, $a1
    ctx->r24 = SUB32(ctx->r15, ctx->r5);
    // 0x80030708: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x8003070C: lw          $t9, -0x58B0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X58B0);
    // 0x80030710: sll         $v1, $a1, 12
    ctx->r3 = S32(ctx->r5 << 12);
    // 0x80030714: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x80030718: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8003071C: jalr        $t9
    // 0x80030720: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80030720: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_1:
    // 0x80030724: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80030728: addiu       $t4, $t4, 0x7EC8
    ctx->r12 = ADD32(ctx->r12, 0X7EC8);
    // 0x8003072C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80030730: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80030734: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80030738: addu        $t0, $a1, $t2
    ctx->r8 = ADD32(ctx->r5, ctx->r10);
    // 0x8003073C: lw          $t7, 0x8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X8);
    // 0x80030740: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x80030744: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030748: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8003074C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80030750: addiu       $t5, $t5, 0x7F40
    ctx->r13 = ADD32(ctx->r13, 0X7F40);
    // 0x80030754: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80030758: mflo        $t8
    ctx->r24 = lo;
    // 0x8003075C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80030760: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x80030764: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x80030768: nop

    // 0x8003076C: addu        $t0, $a1, $t2
    ctx->r8 = ADD32(ctx->r5, ctx->r10);
    // 0x80030770: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80030774: lw          $t7, 0x8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X8);
    // 0x80030778: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003077C: mflo        $t6
    ctx->r14 = lo;
    // 0x80030780: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x80030784: sw          $t7, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r15;
    // 0x80030788: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x8003078C: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80030790: addu        $t6, $t8, $t2
    ctx->r14 = ADD32(ctx->r24, ctx->r10);
    // 0x80030794: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80030798: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8003079C: sw          $t9, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r25;
    // 0x800307A0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800307A4: lw          $t8, 0x7F44($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7F44);
    // 0x800307A8: nop

    // 0x800307AC: subu        $t6, $t8, $v1
    ctx->r14 = SUB32(ctx->r24, ctx->r3);
    // 0x800307B0: sw          $t6, 0x7F44($at)
    MEM_W(0X7F44, ctx->r1) = ctx->r14;
L_800307B4:
    // 0x800307B4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800307B8: b           L_800309C0
    // 0x800307BC: sw          $a2, 0x7ED0($at)
    MEM_W(0X7ED0, ctx->r1) = ctx->r6;
        goto L_800309C0;
    // 0x800307BC: sw          $a2, 0x7ED0($at)
    MEM_W(0X7ED0, ctx->r1) = ctx->r6;
L_800307C0:
    // 0x800307C0: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x800307C4: sllv        $a1, $t8, $v1
    ctx->r5 = S32(ctx->r24 << (ctx->r3 & 31));
    // 0x800307C8: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x800307CC: sw          $t9, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r25;
    // 0x800307D0: lw          $t6, 0x7F3C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F3C);
    // 0x800307D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800307D8: subu        $t7, $t6, $a1
    ctx->r15 = SUB32(ctx->r14, ctx->r5);
    // 0x800307DC: sw          $t7, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r15;
    // 0x800307E0: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x800307E4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800307E8: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x800307EC: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x800307F0: lw          $t6, 0x7F44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7F44);
    // 0x800307F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800307F8: sll         $t9, $a2, 12
    ctx->r25 = S32(ctx->r6 << 12);
    // 0x800307FC: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x80030800: sw          $t7, 0x7F44($at)
    MEM_W(0X7F44, ctx->r1) = ctx->r15;
    // 0x80030804: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80030808: lw          $t8, 0x8($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X8);
    // 0x8003080C: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x80030810: sllv        $t6, $t8, $v1
    ctx->r14 = S32(ctx->r24 << (ctx->r3 & 31));
    // 0x80030814: addu        $t9, $t6, $t9
    ctx->r25 = ADD32(ctx->r14, ctx->r25);
    // 0x80030818: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x8003081C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80030820: srav        $a3, $t8, $v1
    ctx->r7 = S32(SIGNED(ctx->r24) >> (ctx->r3 & 31));
    // 0x80030824: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80030828: bne         $a3, $t6, L_80030928
    if (ctx->r7 != ctx->r14) {
        // 0x8003082C: addiu       $t3, $t3, -0x1000
        ctx->r11 = ADD32(ctx->r11, -0X1000);
            goto L_80030928;
    }
    // 0x8003082C: addiu       $t3, $t3, -0x1000
    ctx->r11 = ADD32(ctx->r11, -0X1000);
    // 0x80030830: sltiu       $at, $a3, 0x2
    ctx->r1 = ctx->r7 < 0X2 ? 1 : 0;
    // 0x80030834: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80030838: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003083C: bne         $at, $zero, L_80030890
    if (ctx->r1 != 0) {
        // 0x80030840: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80030890;
    }
    // 0x80030840: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80030844: addiu       $a2, $a3, -0x1
    ctx->r6 = ADD32(ctx->r7, -0X1);
    // 0x80030848: andi        $t7, $a2, 0x3
    ctx->r15 = ctx->r6 & 0X3;
    // 0x8003084C: beq         $t7, $zero, L_8003086C
    if (ctx->r15 == 0) {
        // 0x80030850: addiu       $a0, $t7, 0x1
        ctx->r4 = ADD32(ctx->r15, 0X1);
            goto L_8003086C;
    }
    // 0x80030850: addiu       $a0, $t7, 0x1
    ctx->r4 = ADD32(ctx->r15, 0X1);
L_80030854:
    // 0x80030854: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80030858: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003085C: bne         $a0, $v1, L_80030854
    if (ctx->r4 != ctx->r3) {
        // 0x80030860: nop
    
            goto L_80030854;
    }
    // 0x80030860: nop

    // 0x80030864: beq         $v1, $a1, L_80030890
    if (ctx->r3 == ctx->r5) {
        // 0x80030868: nop
    
            goto L_80030890;
    }
    // 0x80030868: nop

L_8003086C:
    // 0x8003086C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80030870: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80030874: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80030878: nop

    // 0x8003087C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80030880: nop

    // 0x80030884: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80030888: bne         $v1, $a1, L_8003086C
    if (ctx->r3 != ctx->r5) {
        // 0x8003088C: nop
    
            goto L_8003086C;
    }
    // 0x8003088C: nop

L_80030890:
    // 0x80030890: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x80030894: beq         $v0, $zero, L_800308A8
    if (ctx->r2 == 0) {
        // 0x80030898: sw          $v0, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->r2;
            goto L_800308A8;
    }
    // 0x80030898: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x8003089C: lw          $t8, 0x4($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X4);
    // 0x800308A0: nop

    // 0x800308A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_800308A8:
    // 0x800308A8: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x800308AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800308B0: addu        $t7, $t6, $t2
    ctx->r15 = ADD32(ctx->r14, ctx->r10);
    // 0x800308B4: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x800308B8: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x800308BC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800308C0: addu        $t6, $t8, $t2
    ctx->r14 = ADD32(ctx->r24, ctx->r10);
    // 0x800308C4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x800308C8: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x800308CC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800308D0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800308D4: sw          $t8, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r24;
    // 0x800308D8: lw          $t9, 0x7F3C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F3C);
    // 0x800308DC: nop

    // 0x800308E0: addiu       $t6, $t9, 0x1000
    ctx->r14 = ADD32(ctx->r25, 0X1000);
    // 0x800308E4: sw          $t6, 0x7F3C($at)
    MEM_W(0X7F3C, ctx->r1) = ctx->r14;
    // 0x800308E8: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x800308EC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800308F0: subu        $t8, $t7, $a1
    ctx->r24 = SUB32(ctx->r15, ctx->r5);
    // 0x800308F4: sw          $t8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r24;
    // 0x800308F8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800308FC: lw          $t9, 0x7F44($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7F44);
    // 0x80030900: lw          $t8, 0x7EC4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7EC4);
    // 0x80030904: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80030908: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8003090C: addiu       $t6, $t9, -0x1000
    ctx->r14 = ADD32(ctx->r25, -0X1000);
    // 0x80030910: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80030914: sw          $t6, 0x7F44($at)
    MEM_W(0X7F44, ctx->r1) = ctx->r14;
    // 0x80030918: jal         0x800309D0
    // 0x8003091C: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    free_game(rdram, ctx);
        goto after_2;
    // 0x8003091C: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    after_2:
    // 0x80030920: b           L_800309C4
    // 0x80030924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800309C4;
    // 0x80030924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80030928:
    // 0x80030928: beq         $v0, $zero, L_80030974
    if (ctx->r2 == 0) {
        // 0x8003092C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80030974;
    }
    // 0x8003092C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80030930: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x80030934: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x80030938: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8003093C: sw          $a0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r4;
    // 0x80030940: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x80030944: nop

    // 0x80030948: beq         $a1, $zero, L_80030954
    if (ctx->r5 == 0) {
        // 0x8003094C: nop
    
            goto L_80030954;
    }
    // 0x8003094C: nop

    // 0x80030950: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
L_80030954:
    // 0x80030954: lw          $t6, 0x0($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X0);
    // 0x80030958: nop

    // 0x8003095C: addu        $t0, $t6, $t2
    ctx->r8 = ADD32(ctx->r14, ctx->r10);
    // 0x80030960: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x80030964: nop

    // 0x80030968: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003096C: b           L_800309C0
    // 0x80030970: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
        goto L_800309C0;
    // 0x80030970: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
L_80030974:
    // 0x80030974: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80030978: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x8003097C: andi        $t6, $a0, 0xFFF
    ctx->r14 = ctx->r4 & 0XFFF;
    // 0x80030980: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x80030984: srlv        $t7, $t6, $v1
    ctx->r15 = S32(U32(ctx->r14) >> (ctx->r3 & 31));
    // 0x80030988: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8003098C: addiu       $t8, $t8, 0x7ED8
    ctx->r24 = ADD32(ctx->r24, 0X7ED8);
    // 0x80030990: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80030994: sw          $t7, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r15;
    // 0x80030998: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x8003099C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800309A0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x800309A4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800309A8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800309AC: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x800309B0: nop

    // 0x800309B4: beq         $a1, $zero, L_800309C4
    if (ctx->r5 == 0) {
        // 0x800309B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800309C4;
    }
    // 0x800309B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800309BC: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
L_800309C0:
    // 0x800309C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800309C4:
    // 0x800309C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x800309C8: jr          $ra
    // 0x800309CC: nop

    return;
    // 0x800309CC: nop

;}
