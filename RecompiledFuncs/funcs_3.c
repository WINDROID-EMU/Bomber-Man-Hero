#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80001690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001698: lui         $t6, 0x1D
    ctx->r14 = S32(0X1D << 16);
    // 0x8000169C: lui         $t7, 0x1E
    ctx->r15 = S32(0X1E << 16);
    // 0x800016A0: addiu       $t7, $t7, -0x6EF0
    ctx->r15 = ADD32(ctx->r15, -0X6EF0);
    // 0x800016A4: addiu       $t6, $t6, 0x1720
    ctx->r14 = ADD32(ctx->r14, 0X1720);
    // 0x800016A8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800016AC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800016B0: jal         0x8000068C
    // 0x800016B4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800016B4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800016B8: b           L_800016C0
    // 0x800016BC: nop

        goto L_800016C0;
    // 0x800016BC: nop

L_800016C0:
    // 0x800016C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800016C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800016C8: jr          $ra
    // 0x800016CC: nop

    return;
    // 0x800016CC: nop

;}
RECOMP_FUNC void func_80017DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017DFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80017E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017E04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80017E08: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80017E0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80017E10: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80017E14: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80017E18: lh          $t8, 0x76E8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X76E8);
    // 0x80017E1C: nop

    // 0x80017E20: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x80017E24: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80017E28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017E2C: beq         $t9, $at, L_80017E58
    if (ctx->r25 == ctx->r1) {
        // 0x80017E30: nop
    
            goto L_80017E58;
    }
    // 0x80017E30: nop

    // 0x80017E34: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017E38: jal         0x8000B738
    // 0x80017E3C: nop

    func_8000B738(rdram, ctx);
        goto after_0;
    // 0x80017E3C: nop

    after_0:
    // 0x80017E40: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80017E44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017E48: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80017E4C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80017E50: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80017E54: sh          $t0, 0x76E8($at)
    MEM_H(0X76E8, ctx->r1) = ctx->r8;
L_80017E58:
    // 0x80017E58: b           L_80017E60
    // 0x80017E5C: nop

        goto L_80017E60;
    // 0x80017E5C: nop

L_80017E60:
    // 0x80017E60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017E64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80017E68: jr          $ra
    // 0x80017E6C: nop

    return;
    // 0x80017E6C: nop

;}
RECOMP_FUNC void __alSeqNextDelta(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800461C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800461C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800461C8: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x800461CC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x800461D0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800461D4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800461D8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800461DC: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x800461E0: bne         $at, $zero, L_800461F0
    if (ctx->r1 != 0) {
        // 0x800461E4: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_800461F0;
    }
    // 0x800461E4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x800461E8: b           L_80046208
    // 0x800461EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046208;
    // 0x800461EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800461F0:
    // 0x800461F0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800461F4: jal         0x80045D98
    // 0x800461F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    static_0_80045D98(rdram, ctx);
        goto after_0;
    // 0x800461F8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800461FC: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80046200: sw          $a3, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r7;
    // 0x80046204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046208:
    // 0x80046208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004620C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046210: jr          $ra
    // 0x80046214: nop

    return;
    // 0x80046214: nop

;}
RECOMP_FUNC void func_80001A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001A64: jr          $ra
    // 0x80001A68: nop

    return;
    // 0x80001A68: nop

    // 0x80001A6C: jr          $ra
    // 0x80001A70: nop

    return;
    // 0x80001A70: nop

;}
RECOMP_FUNC void func_800252AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800252AC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800252B0: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800252B4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800252B8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800252BC: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800252C0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800252C4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800252C8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800252CC: lbu         $t8, 0x7490($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7490);
    // 0x800252D0: nop

    // 0x800252D4: sb          $t8, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r24;
    // 0x800252D8: lbu         $t9, 0x3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3);
    // 0x800252DC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800252E0: bne         $t9, $at, L_80025304
    if (ctx->r25 != ctx->r1) {
        // 0x800252E4: nop
    
            goto L_80025304;
    }
    // 0x800252E4: nop

    // 0x800252E8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800252EC: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x800252F0: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x800252F4: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x800252F8: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800252FC: b           L_8002535C
    // 0x80025300: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
        goto L_8002535C;
    // 0x80025300: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_80025304:
    // 0x80025304: lbu         $t2, 0x3($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X3);
    // 0x80025308: nop

    // 0x8002530C: sb          $t2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r10;
    // 0x80025310: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80025314: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80025318: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002531C: lbu         $t4, 0x7491($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X7491);
    // 0x80025320: nop

    // 0x80025324: sb          $t4, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r12;
    // 0x80025328: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8002532C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80025330: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80025334: lbu         $t6, 0x7492($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7492);
    // 0x80025338: nop

    // 0x8002533C: sb          $t6, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r14;
    // 0x80025340: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80025344: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80025348: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002534C: lbu         $t8, 0x7493($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7493);
    // 0x80025350: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80025354: nop

    // 0x80025358: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_8002535C:
    // 0x8002535C: b           L_80025364
    // 0x80025360: nop

        goto L_80025364;
    // 0x80025360: nop

L_80025364:
    // 0x80025364: jr          $ra
    // 0x80025368: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80025368: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80006EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006EE8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80006EEC: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80006EF0: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80006EF4: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x80006EF8: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x80006EFC: nop

    // 0x80006F00: sh          $t6, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r14;
    // 0x80006F04: lh          $t7, 0x6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6);
    // 0x80006F08: nop

    // 0x80006F0C: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80006F10: beq         $at, $zero, L_80006F20
    if (ctx->r1 == 0) {
        // 0x80006F14: nop
    
            goto L_80006F20;
    }
    // 0x80006F14: nop

    // 0x80006F18: b           L_80006FCC
    // 0x80006F1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80006FCC;
    // 0x80006F1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006F20:
    // 0x80006F20: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80006F24: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x80006F28: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80006F2C: nop

    // 0x80006F30: sw          $t0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r8;
    // 0x80006F34: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80006F38: nop

    // 0x80006F3C: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80006F40: nop

    // 0x80006F44: sh          $t2, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r10;
    // 0x80006F48: lh          $t3, 0x4($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4);
    // 0x80006F4C: nop

    // 0x80006F50: slt         $at, $t3, $a2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80006F54: beq         $at, $zero, L_80006F64
    if (ctx->r1 == 0) {
        // 0x80006F58: nop
    
            goto L_80006F64;
    }
    // 0x80006F58: nop

    // 0x80006F5C: b           L_80006FCC
    // 0x80006F60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80006FCC;
    // 0x80006F60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006F64:
    // 0x80006F64: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80006F68: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x80006F6C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80006F70: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80006F74: nop

    // 0x80006F78: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x80006F7C: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80006F80: nop

    // 0x80006F84: lh          $t9, 0xE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE);
    // 0x80006F88: nop

    // 0x80006F8C: sh          $t9, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r25;
    // 0x80006F90: lh          $t0, 0x2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2);
    // 0x80006F94: nop

    // 0x80006F98: slt         $at, $t0, $a3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80006F9C: beq         $at, $zero, L_80006FAC
    if (ctx->r1 == 0) {
        // 0x80006FA0: nop
    
            goto L_80006FAC;
    }
    // 0x80006FA0: nop

    // 0x80006FA4: b           L_80006FCC
    // 0x80006FA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80006FCC;
    // 0x80006FA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80006FAC:
    // 0x80006FAC: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x80006FB0: sll         $t2, $a3, 2
    ctx->r10 = S32(ctx->r7 << 2);
    // 0x80006FB4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80006FB8: lw          $v0, 0x10($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X10);
    // 0x80006FBC: b           L_80006FCC
    // 0x80006FC0: nop

        goto L_80006FCC;
    // 0x80006FC0: nop

    // 0x80006FC4: b           L_80006FCC
    // 0x80006FC8: nop

        goto L_80006FCC;
    // 0x80006FC8: nop

L_80006FCC:
    // 0x80006FCC: jr          $ra
    // 0x80006FD0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80006FD0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void main_game(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000450: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80000454: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80000458: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8000045C: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x80000460: addiu       $t6, $t6, -0x4530
    ctx->r14 = ADD32(ctx->r14, -0X4530);
    // 0x80000464: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x80000468: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x8000046C: beq         $at, $zero, L_80000498
    if (ctx->r1 == 0) {
        // 0x80000470: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80000498;
    }
    // 0x80000470: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80000474:
    // 0x80000474: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80000478: nop

    // 0x8000047C: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80000480: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80000484: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x80000488: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8000048C: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x80000490: bne         $at, $zero, L_80000474
    if (ctx->r1 != 0) {
        // 0x80000494: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80000474;
    }
    // 0x80000494: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80000498:
    // 0x80000498: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000049C: lw          $t0, -0x5D80($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5D80);
    // 0x800004A0: nop

    // 0x800004A4: beq         $t0, $zero, L_800004B4
    if (ctx->r8 == 0) {
        // 0x800004A8: nop
    
            goto L_800004B4;
    }
    // 0x800004A8: nop

    // 0x800004AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800004B0: sw          $zero, 0x300($at)
    MEM_W(0X300, ctx->r1) = 0;
L_800004B4:
    // 0x800004B4: jal         0x80030E20
    // 0x800004B8: nop

    osInitialize_recomp(rdram, ctx);
        goto after_0;
    // 0x800004B8: nop

    after_0:
    // 0x800004BC: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x800004C0: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_800004C4:
    // 0x800004C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800004C8: nop

    // 0x800004CC: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
    // 0x800004D0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800004D4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800004D8: ori         $at, $at, 0x5800
    ctx->r1 = ctx->r1 | 0X5800;
    // 0x800004DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800004E0: sltu        $at, $t4, $at
    ctx->r1 = ctx->r12 < ctx->r1 ? 1 : 0;
    // 0x800004E4: bne         $at, $zero, L_800004C4
    if (ctx->r1 != 0) {
        // 0x800004E8: sw          $t4, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r12;
            goto L_800004C4;
    }
    // 0x800004E8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800004EC: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x800004F0: ori         $t5, $t5, 0x5800
    ctx->r13 = ctx->r13 | 0X5800;
    // 0x800004F4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_800004F8:
    // 0x800004F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800004FC: nop

    // 0x80000500: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x80000504: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80000508: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8000050C: ori         $at, $at, 0xB000
    ctx->r1 = ctx->r1 | 0XB000;
    // 0x80000510: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80000514: sltu        $at, $t8, $at
    ctx->r1 = ctx->r24 < ctx->r1 ? 1 : 0;
    // 0x80000518: bne         $at, $zero, L_800004F8
    if (ctx->r1 != 0) {
        // 0x8000051C: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_800004F8;
    }
    // 0x8000051C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80000520: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
L_80000524:
    // 0x80000524: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80000528: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000052C: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x80000530: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80000534: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x80000538: addiu       $t1, $zero, 0x0
    ctx->r9 = ADD32(0, 0X0);
    // 0x8000053C: sw          $t1, 0xD3C($at)
    MEM_W(0XD3C, ctx->r1) = ctx->r9;
    // 0x80000540: sw          $t0, 0xD38($at)
    MEM_W(0XD38, ctx->r1) = ctx->r8;
    // 0x80000544: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80000548: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000054C: sll         $t6, $t3, 3
    ctx->r14 = S32(ctx->r11 << 3);
    // 0x80000550: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80000554: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80000558: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x8000055C: sw          $t5, 0x1D3C($at)
    MEM_W(0X1D3C, ctx->r1) = ctx->r13;
    // 0x80000560: sw          $t4, 0x1D38($at)
    MEM_W(0X1D38, ctx->r1) = ctx->r12;
    // 0x80000564: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x80000568: nop

    // 0x8000056C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80000570: sltiu       $at, $t8, 0x200
    ctx->r1 = ctx->r24 < 0X200 ? 1 : 0;
    // 0x80000574: bne         $at, $zero, L_80000524
    if (ctx->r1 != 0) {
        // 0x80000578: sw          $t8, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r24;
            goto L_80000524;
    }
    // 0x80000578: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x8000057C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80000580: sw          $zero, 0x524C($at)
    MEM_W(0X524C, ctx->r1) = 0;
    // 0x80000584: jal         0x8000E3E0
    // 0x80000588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    Parse_Args(rdram, ctx);
        goto after_1;
    // 0x80000588: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8000058C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80000590: addiu       $t9, $t9, 0x1D38
    ctx->r25 = ADD32(ctx->r25, 0X1D38);
    // 0x80000594: addiu       $t0, $t9, 0x1000
    ctx->r8 = ADD32(ctx->r25, 0X1000);
    // 0x80000598: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000059C: lui         $a2, 0x8000
    ctx->r6 = S32(0X8000 << 16);
    // 0x800005A0: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x800005A4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x800005A8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x800005AC: addiu       $a2, $a2, 0x5E4
    ctx->r6 = ADD32(ctx->r6, 0X5E4);
    // 0x800005B0: addiu       $a0, $a0, -0x478
    ctx->r4 = ADD32(ctx->r4, -0X478);
    // 0x800005B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800005B8: jal         0x800310B0
    // 0x800005BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    osCreateThread_recomp(rdram, ctx);
        goto after_2;
    // 0x800005BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800005C0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800005C4: jal         0x80031200
    // 0x800005C8: addiu       $a0, $a0, -0x478
    ctx->r4 = ADD32(ctx->r4, -0X478);
    osStartThread_recomp(rdram, ctx);
        goto after_3;
    // 0x800005C8: addiu       $a0, $a0, -0x478
    ctx->r4 = ADD32(ctx->r4, -0X478);
    after_3:
    // 0x800005CC: b           L_800005D4
    // 0x800005D0: nop

        goto L_800005D4;
    // 0x800005D0: nop

L_800005D4:
    // 0x800005D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800005D8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x800005DC: jr          $ra
    // 0x800005E0: nop

    return;
    // 0x800005E0: nop

;}
RECOMP_FUNC void sqrtf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800366E0: jr          $ra
    // 0x800366E4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    return;
    // 0x800366E4: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
;}
RECOMP_FUNC void func_80016D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80016D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80016D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80016D80: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80016D84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016D88: sh          $t6, 0x76DA($at)
    MEM_H(0X76DA, ctx->r1) = ctx->r14;
    // 0x80016D8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80016D90: lh          $a0, 0x76DA($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X76DA);
    // 0x80016D94: jal         0x80003214
    // 0x80016D98: nop

    func_80003214(rdram, ctx);
        goto after_0;
    // 0x80016D98: nop

    after_0:
    // 0x80016D9C: b           L_80016DA4
    // 0x80016DA0: nop

        goto L_80016DA4;
    // 0x80016DA0: nop

L_80016DA4:
    // 0x80016DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016DA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80016DAC: jr          $ra
    // 0x80016DB0: nop

    return;
    // 0x80016DB0: nop

;}
RECOMP_FUNC void func_8002D9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D9D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002D9D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D9DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002D9E0: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x8002D9E4: nop

    // 0x8002D9E8: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8002D9EC: beq         $t7, $zero, L_8002DC90
    if (ctx->r15 == 0) {
        // 0x8002D9F0: nop
    
            goto L_8002DC90;
    }
    // 0x8002D9F0: nop

    // 0x8002D9F4: jal         0x8002B830
    // 0x8002D9F8: nop

    func_8002B830(rdram, ctx);
        goto after_0;
    // 0x8002D9F8: nop

    after_0:
    // 0x8002D9FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8002DA00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DA04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002DA08: beq         $t8, $at, L_8002DC90
    if (ctx->r24 == ctx->r1) {
        // 0x8002DA0C: nop
    
            goto L_8002DC90;
    }
    // 0x8002DA0C: nop

    // 0x8002DA10: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DA14: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002DA18: lh          $t9, 0x7690($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7690);
    // 0x8002DA1C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DA20: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x8002DA24: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8002DA28: sh          $t9, 0x76A8($at)
    MEM_H(0X76A8, ctx->r1) = ctx->r25;
    // 0x8002DA2C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8002DA30: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002DA34: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002DA38: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8002DA3C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002DA40: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002DA44: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8002DA48: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DA4C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002DA50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DA54: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8002DA58: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8002DA5C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8002DA60: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8002DA64: sh          $t4, 0x76AA($at)
    MEM_H(0X76AA, ctx->r1) = ctx->r12;
    // 0x8002DA68: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8002DA6C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002DA70: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002DA74: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8002DA78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002DA7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002DA80: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8002DA84: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DA88: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8002DA8C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DA90: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8002DA94: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x8002DA98: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8002DA9C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8002DAA0: sh          $t0, 0x76AC($at)
    MEM_H(0X76AC, ctx->r1) = ctx->r8;
    // 0x8002DAA4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8002DAA8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002DAAC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002DAB0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8002DAB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002DAB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002DABC: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8002DAC0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DAC4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8002DAC8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DACC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8002DAD0: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x8002DAD4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8002DAD8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8002DADC: sh          $t5, 0x76AE($at)
    MEM_H(0X76AE, ctx->r1) = ctx->r13;
    // 0x8002DAE0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DAE4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002DAE8: lh          $t7, 0x7694($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7694);
    // 0x8002DAEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DAF0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8002DAF4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002DAF8: sh          $t7, 0x76B0($at)
    MEM_H(0X76B0, ctx->r1) = ctx->r15;
    // 0x8002DAFC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB00: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002DB04: lh          $t0, 0x7696($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7696);
    // 0x8002DB08: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DB0C: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8002DB10: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8002DB14: sh          $t0, 0x76B2($at)
    MEM_H(0X76B2, ctx->r1) = ctx->r8;
    // 0x8002DB18: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB1C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002DB20: lh          $t3, 0x7698($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7698);
    // 0x8002DB24: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DB28: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x8002DB2C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8002DB30: sh          $t3, 0x76B4($at)
    MEM_H(0X76B4, ctx->r1) = ctx->r11;
    // 0x8002DB34: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB38: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002DB3C: lh          $t6, 0x769A($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X769A);
    // 0x8002DB40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DB44: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8002DB48: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002DB4C: sh          $t6, 0x76B6($at)
    MEM_H(0X76B6, ctx->r1) = ctx->r14;
    // 0x8002DB50: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002DB58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002DB5C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8002DB60: sb          $t9, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = ctx->r25;
    // 0x8002DB64: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8002DB68: lw          $a2, 0x768C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X768C);
    // 0x8002DB6C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002DB70: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB74: jal         0x80017FD8
    // 0x8002DB78: addiu       $a0, $a0, -0x41C0
    ctx->r4 = ADD32(ctx->r4, -0X41C0);
    printf_stub(rdram, ctx);
        goto after_1;
    // 0x8002DB78: addiu       $a0, $a0, -0x41C0
    ctx->r4 = ADD32(ctx->r4, -0X41C0);
    after_1:
    // 0x8002DB7C: jal         0x8001EC04
    // 0x8002DB80: nop

    func_8001EC04(rdram, ctx);
        goto after_2;
    // 0x8002DB80: nop

    after_2:
    // 0x8002DB84: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8002DB88:
    // 0x8002DB88: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8002DB8C: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8002DB90: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x8002DB94: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8002DB98: slt         $at, $t2, $at
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8002DB9C: bne         $at, $zero, L_8002DB88
    if (ctx->r1 != 0) {
        // 0x8002DBA0: sw          $t2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r10;
            goto L_8002DB88;
    }
    // 0x8002DBA0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8002DBA4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002DBA8: lw          $a0, 0x768C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X768C);
    // 0x8002DBAC: jal         0x8001E954
    // 0x8002DBB0: nop

    Set_DecompressHeap(rdram, ctx);
        goto after_3;
    // 0x8002DBB0: nop

    after_3:
    // 0x8002DBB4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002DBB8: lh          $t4, 0x7690($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7690);
    // 0x8002DBBC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8002DBC0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8002DBC4: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x8002DBC8: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x8002DBCC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8002DBD0: lw          $t5, 0x4DB4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4DB4);
    // 0x8002DBD4: nop

    // 0x8002DBD8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8002DBDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002DBE0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_8002DBE4:
    // 0x8002DBE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8002DBE8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002DBEC: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8002DBF0: nop

    // 0x8002DBF4: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x8002DBF8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8002DBFC: lw          $t1, -0x3560($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3560);
    // 0x8002DC00: nop

    // 0x8002DC04: bne         $t1, $zero, L_8002DC28
    if (ctx->r9 != 0) {
        // 0x8002DC08: nop
    
            goto L_8002DC28;
    }
    // 0x8002DC08: nop

    // 0x8002DC0C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8002DC10: nop

    // 0x8002DC14: lh          $a0, 0x0($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X0);
    // 0x8002DC18: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x8002DC1C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8002DC20: jal         0x8001EA68
    // 0x8002DC24: nop

    DecompressFile(rdram, ctx);
        goto after_4;
    // 0x8002DC24: nop

    after_4:
L_8002DC28:
    // 0x8002DC28: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002DC2C: nop

    // 0x8002DC30: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x8002DC34: nop

    // 0x8002DC38: bne         $t4, $zero, L_8002DC48
    if (ctx->r12 != 0) {
        // 0x8002DC3C: nop
    
            goto L_8002DC48;
    }
    // 0x8002DC3C: nop

    // 0x8002DC40: b           L_8002DC70
    // 0x8002DC44: nop

        goto L_8002DC70;
    // 0x8002DC44: nop

L_8002DC48:
    // 0x8002DC48: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8002DC4C: nop

    // 0x8002DC50: addiu       $t5, $t3, 0xC
    ctx->r13 = ADD32(ctx->r11, 0XC);
    // 0x8002DC54: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8002DC58: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8002DC5C: nop

    // 0x8002DC60: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x8002DC64: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8002DC68: bne         $at, $zero, L_8002DBE4
    if (ctx->r1 != 0) {
        // 0x8002DC6C: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_8002DBE4;
    }
    // 0x8002DC6C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_8002DC70:
    // 0x8002DC70: jal         0x8001E96C
    // 0x8002DC74: nop

    Get_DecompressHeap(rdram, ctx);
        goto after_5;
    // 0x8002DC74: nop

    after_5:
    // 0x8002DC78: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DC7C: sw          $v0, 0x768C($at)
    MEM_W(0X768C, ctx->r1) = ctx->r2;
    // 0x8002DC80: jal         0x8001EBE8
    // 0x8002DC84: nop

    func_8001EBE8(rdram, ctx);
        goto after_6;
    // 0x8002DC84: nop

    after_6:
    // 0x8002DC88: jal         0x8002E8B4
    // 0x8002DC8C: nop

    func_8002E8B4(rdram, ctx);
        goto after_7;
    // 0x8002DC8C: nop

    after_7:
L_8002DC90:
    // 0x8002DC90: b           L_8002DC98
    // 0x8002DC94: nop

        goto L_8002DC98;
    // 0x8002DC94: nop

L_8002DC98:
    // 0x8002DC98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DC9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002DCA0: jr          $ra
    // 0x8002DCA4: nop

    return;
    // 0x8002DCA4: nop

;}
RECOMP_FUNC void func_8001F728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F728: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F72C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001F730: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001F734: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001F738: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001F73C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F740: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8001F744: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F748: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001F74C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F750: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F754: lhu         $a1, 0x8($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X8);
    // 0x8001F758: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x8001F75C: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x8001F760: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001F764: addiu       $a3, $t9, 0xE
    ctx->r7 = ADD32(ctx->r25, 0XE);
    // 0x8001F768: jal         0x800397A0
    // 0x8001F76C: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F76C: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_0:
    // 0x8001F770: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001F774: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8001F778: b           L_8001F788
    // 0x8001F77C: nop

        goto L_8001F788;
    // 0x8001F77C: nop

    // 0x8001F780: b           L_8001F788
    // 0x8001F784: nop

        goto L_8001F788;
    // 0x8001F784: nop

L_8001F788:
    // 0x8001F788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F78C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001F790: jr          $ra
    // 0x8001F794: nop

    return;
    // 0x8001F794: nop

;}
RECOMP_FUNC void alMainBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FAB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003FAB4: bne         $a1, $at, L_8003FAD8
    if (ctx->r5 != ctx->r1) {
        // 0x8003FAB8: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_8003FAD8;
    }
    // 0x8003FAB8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8003FABC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8003FAC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003FAC4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8003FAC8: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8003FACC: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x8003FAD0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003FAD4: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_8003FAD8:
    // 0x8003FAD8: jr          $ra
    // 0x8003FADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003FADC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80017BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80017BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80017BF4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80017BF8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80017BFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80017C00: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80017C04: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80017C08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80017C0C: bne         $t6, $at, L_80017C54
    if (ctx->r14 != ctx->r1) {
        // 0x80017C10: nop
    
            goto L_80017C54;
    }
    // 0x80017C10: nop

    // 0x80017C14: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80017C18: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80017C1C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80017C20: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80017C24: lh          $t9, 0x76E8($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X76E8);
    // 0x80017C28: nop

    // 0x80017C2C: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x80017C30: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x80017C34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017C38: beq         $t0, $at, L_80017C4C
    if (ctx->r8 == ctx->r1) {
        // 0x80017C3C: nop
    
            goto L_80017C4C;
    }
    // 0x80017C3C: nop

    // 0x80017C40: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x80017C44: b           L_80017CEC
    // 0x80017C48: nop

        goto L_80017CEC;
    // 0x80017C48: nop

L_80017C4C:
    // 0x80017C4C: b           L_80017C90
    // 0x80017C50: nop

        goto L_80017C90;
    // 0x80017C50: nop

L_80017C54:
    // 0x80017C54: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80017C58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80017C5C: bne         $t1, $at, L_80017C90
    if (ctx->r9 != ctx->r1) {
        // 0x80017C60: nop
    
            goto L_80017C90;
    }
    // 0x80017C60: nop

    // 0x80017C64: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80017C68: jal         0x8000B404
    // 0x80017C6C: nop

    func_8000B404(rdram, ctx);
        goto after_0;
    // 0x80017C6C: nop

    after_0:
    // 0x80017C70: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80017C74: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80017C78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017C7C: beq         $t2, $at, L_80017C90
    if (ctx->r10 == ctx->r1) {
        // 0x80017C80: nop
    
            goto L_80017C90;
    }
    // 0x80017C80: nop

    // 0x80017C84: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x80017C88: b           L_80017CEC
    // 0x80017C8C: nop

        goto L_80017CEC;
    // 0x80017C8C: nop

L_80017C90:
    // 0x80017C90: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80017C94: jal         0x8000AC1C
    // 0x80017C98: nop

    func_8000AC1C(rdram, ctx);
        goto after_1;
    // 0x80017C98: nop

    after_1:
    // 0x80017C9C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x80017CA0: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x80017CA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80017CA8: beq         $t3, $at, L_80017CC0
    if (ctx->r11 == ctx->r1) {
        // 0x80017CAC: nop
    
            goto L_80017CC0;
    }
    // 0x80017CAC: nop

    // 0x80017CB0: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80017CB4: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x80017CB8: jal         0x8000C6F8
    // 0x80017CBC: nop

    func_8000C6F8(rdram, ctx);
        goto after_2;
    // 0x80017CBC: nop

    after_2:
L_80017CC0:
    // 0x80017CC0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80017CC4: lh          $t4, 0x1E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1E);
    // 0x80017CC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80017CCC: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80017CD0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80017CD4: sh          $t4, 0x76E8($at)
    MEM_H(0X76E8, ctx->r1) = ctx->r12;
    // 0x80017CD8: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x80017CDC: b           L_80017CEC
    // 0x80017CE0: nop

        goto L_80017CEC;
    // 0x80017CE0: nop

    // 0x80017CE4: b           L_80017CEC
    // 0x80017CE8: nop

        goto L_80017CEC;
    // 0x80017CE8: nop

L_80017CEC:
    // 0x80017CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80017CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80017CF4: jr          $ra
    // 0x80017CF8: nop

    return;
    // 0x80017CF8: nop

;}
RECOMP_FUNC void func_8002A3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A3A8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8002A3AC: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8002A3B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002A3B4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002A3B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002A3BC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002A3C0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002A3C4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8002A3C8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002A3CC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002A3D0: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8002A3D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002A3D8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002A3DC: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8002A3E0: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8002A3E4: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002A3E8: nop

    // 0x8002A3EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A3F0: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x8002A3F4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002A3F8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002A3FC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002A400: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002A404: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8002A408: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8002A40C: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8002A410: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8002A414: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8002A418: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x8002A41C: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8002A420: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002A424: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8002A428: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8002A42C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8002A430: nop

    // 0x8002A434: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8002A438: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8002A43C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8002A440: nop

    // 0x8002A444: bc1f        L_8002A454
    if (!c1cs) {
        // 0x8002A448: nop
    
            goto L_8002A454;
    }
    // 0x8002A448: nop

    // 0x8002A44C: b           L_8002A464
    // 0x8002A450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A464;
    // 0x8002A450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A454:
    // 0x8002A454: b           L_8002A464
    // 0x8002A458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A464;
    // 0x8002A458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002A45C: b           L_8002A464
    // 0x8002A460: nop

        goto L_8002A464;
    // 0x8002A460: nop

L_8002A464:
    // 0x8002A464: jr          $ra
    // 0x8002A468: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8002A468: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001D3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D3CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D3D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D3D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D3D8: lb          $t6, -0x1EE4($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1EE4);
    // 0x8001D3DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001D3E0: beq         $t6, $at, L_8001D400
    if (ctx->r14 == ctx->r1) {
        // 0x8001D3E4: nop
    
            goto L_8001D400;
    }
    // 0x8001D3E4: nop

    // 0x8001D3E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001D3EC: beq         $t6, $at, L_8001D400
    if (ctx->r14 == ctx->r1) {
        // 0x8001D3F0: nop
    
            goto L_8001D400;
    }
    // 0x8001D3F0: nop

    // 0x8001D3F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001D3F8: bne         $t6, $at, L_8001D428
    if (ctx->r14 != ctx->r1) {
        // 0x8001D3FC: nop
    
            goto L_8001D428;
    }
    // 0x8001D3FC: nop

L_8001D400:
    // 0x8001D400: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001D404: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8001D408: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8001D40C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8001D410: lh          $a3, -0x1EDC($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X1EDC);
    // 0x8001D414: lbu         $a2, -0x1EEA($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X1EEA);
    // 0x8001D418: lbu         $a1, -0x1EEC($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1EEC);
    // 0x8001D41C: lbu         $a0, -0x1EEF($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1EEF);
    // 0x8001D420: jal         0x8001D000
    // 0x8001D424: nop

    func_8001D000(rdram, ctx);
        goto after_0;
    // 0x8001D424: nop

    after_0:
L_8001D428:
    // 0x8001D428: b           L_8001D430
    // 0x8001D42C: nop

        goto L_8001D430;
    // 0x8001D42C: nop

L_8001D430:
    // 0x8001D430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D438: jr          $ra
    // 0x8001D43C: nop

    return;
    // 0x8001D43C: nop

;}
RECOMP_FUNC void __allocParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035B20: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80035B24: lw          $v0, -0x4AF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4AF0);
    // 0x80035B28: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035B2C: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x80035B30: beq         $a0, $zero, L_80035B48
    if (ctx->r4 == 0) {
        // 0x80035B34: nop
    
            goto L_80035B48;
    }
    // 0x80035B34: nop

    // 0x80035B38: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80035B3C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80035B40: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x80035B44: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80035B48:
    // 0x80035B48: jr          $ra
    // 0x80035B4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80035B4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void alCSeqGetTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003433C: jr          $ra
    // 0x80034340: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x80034340: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void func_80010A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010A5C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80010A60: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80010A64: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80010A68: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80010A6C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80010A70: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80010A74: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80010A78: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80010A7C: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80010A80: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80010A84: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80010A88: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80010A8C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80010A90: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80010A94: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80010A98: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80010A9C: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x80010AA0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80010AA4: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80010AA8: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80010AAC: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80010AB0: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80010AB4: mul.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80010AB8: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80010ABC: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x80010AC0: b           L_80010AC8
    // 0x80010AC4: nop

        goto L_80010AC8;
    // 0x80010AC4: nop

L_80010AC8:
    // 0x80010AC8: jr          $ra
    // 0x80010ACC: nop

    return;
    // 0x80010ACC: nop

;}
RECOMP_FUNC void Debug_HandleObjMovement(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002D12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D130: jal         0x8002C92C
    // 0x8002D134: nop

    func_8002C92C(rdram, ctx);
        goto after_0;
    // 0x8002D134: nop

    after_0:
    // 0x8002D138: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002D13C: lwc1        $f12, -0x1C74($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8002D140: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002D144: lwc1        $f14, -0x1C6C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x8002D148: jal         0x80015634
    // 0x8002D14C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x8002D14C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x8002D150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002D154: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002D158: nop

    // 0x8002D15C: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x8002D160: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002D164: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8002D168: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002D16C: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8002D170: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x8002D174: nop

    // 0x8002D178: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8002D17C: jal         0x800366E0
    // 0x8002D180: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x8002D180: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_2:
    // 0x8002D184: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8002D188: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8002D18C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002D190: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002D194: nop

    // 0x8002D198: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8002D19C: nop

    // 0x8002D1A0: bc1f        L_8002D21C
    if (!c1cs) {
        // 0x8002D1A4: nop
    
            goto L_8002D21C;
    }
    // 0x8002D1A4: nop

    // 0x8002D1A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002D1AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002D1B0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002D1B4: nop

    // 0x8002D1B8: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8002D1BC: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8002D1C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002D1C4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002D1C8: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002D1CC: nop

    // 0x8002D1D0: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x8002D1D4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002D1D8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002D1DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8002D1E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002D1E4: lwc1        $f16, 0x44($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8002D1E8: nop

    // 0x8002D1EC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8002D1F0: nop

    // 0x8002D1F4: bc1f        L_8002D214
    if (!c1cs) {
        // 0x8002D1F8: nop
    
            goto L_8002D214;
    }
    // 0x8002D1F8: nop

    // 0x8002D1FC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8002D200: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002D204: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002D208: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002D20C: nop

    // 0x8002D210: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
L_8002D214:
    // 0x8002D214: b           L_8002D230
    // 0x8002D218: nop

        goto L_8002D230;
    // 0x8002D218: nop

L_8002D21C:
    // 0x8002D21C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002D220: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8002D224: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002D228: nop

    // 0x8002D22C: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
L_8002D230:
    // 0x8002D230: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002D234: lb          $t1, 0x768A($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X768A);
    // 0x8002D238: nop

    // 0x8002D23C: bne         $t1, $zero, L_8002D35C
    if (ctx->r9 != 0) {
        // 0x8002D240: nop
    
            goto L_8002D35C;
    }
    // 0x8002D240: nop

    // 0x8002D244: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002D248: lb          $t2, 0x7689($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7689);
    // 0x8002D24C: nop

    // 0x8002D250: bne         $t2, $zero, L_8002D2F4
    if (ctx->r10 != 0) {
        // 0x8002D254: nop
    
            goto L_8002D2F4;
    }
    // 0x8002D254: nop

    // 0x8002D258: jal         0x8002CF78
    // 0x8002D25C: nop

    func_8002CF78(rdram, ctx);
        goto after_3;
    // 0x8002D25C: nop

    after_3:
    // 0x8002D260: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x8002D264: beq         $t3, $zero, L_8002D2CC
    if (ctx->r11 == 0) {
        // 0x8002D268: nop
    
            goto L_8002D2CC;
    }
    // 0x8002D268: nop

    // 0x8002D26C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002D270: lhu         $t4, -0x1C7C($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C7C);
    // 0x8002D274: nop

    // 0x8002D278: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8002D27C: beq         $t5, $zero, L_8002D2A8
    if (ctx->r13 == 0) {
        // 0x8002D280: nop
    
            goto L_8002D2A8;
    }
    // 0x8002D280: nop

    // 0x8002D284: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002D288: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D28C: sb          $t6, 0x7689($at)
    MEM_B(0X7689, ctx->r1) = ctx->r14;
    // 0x8002D290: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D294: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002D298: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002D29C: lwc1        $f6, -0x4028($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4028);
    // 0x8002D2A0: b           L_8002D2C4
    // 0x8002D2A4: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
        goto L_8002D2C4;
    // 0x8002D2A4: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
L_8002D2A8:
    // 0x8002D2A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D2AC: sb          $zero, 0x7689($at)
    MEM_B(0X7689, ctx->r1) = 0;
    // 0x8002D2B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002D2B4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002D2B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8002D2BC: nop

    // 0x8002D2C0: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
L_8002D2C4:
    // 0x8002D2C4: b           L_8002D2EC
    // 0x8002D2C8: nop

        goto L_8002D2EC;
    // 0x8002D2C8: nop

L_8002D2CC:
    // 0x8002D2CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002D2D0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D2D4: sb          $t9, 0x7689($at)
    MEM_B(0X7689, ctx->r1) = ctx->r25;
    // 0x8002D2D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002D2DC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8002D2E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8002D2E4: nop

    // 0x8002D2E8: swc1        $f16, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f16.u32l;
L_8002D2EC:
    // 0x8002D2EC: b           L_8002D354
    // 0x8002D2F0: nop

        goto L_8002D354;
    // 0x8002D2F0: nop

L_8002D2F4:
    // 0x8002D2F4: jal         0x8002CF78
    // 0x8002D2F8: nop

    func_8002CF78(rdram, ctx);
        goto after_4;
    // 0x8002D2F8: nop

    after_4:
    // 0x8002D2FC: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x8002D300: beq         $t1, $zero, L_8002D324
    if (ctx->r9 == 0) {
        // 0x8002D304: nop
    
            goto L_8002D324;
    }
    // 0x8002D304: nop

    // 0x8002D308: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002D30C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002D310: nop

    // 0x8002D314: lwc1        $f18, 0x28($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X28);
    // 0x8002D318: nop

    // 0x8002D31C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x8002D320: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
L_8002D324:
    // 0x8002D324: jal         0x8002CF78
    // 0x8002D328: nop

    func_8002CF78(rdram, ctx);
        goto after_5;
    // 0x8002D328: nop

    after_5:
    // 0x8002D32C: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x8002D330: beq         $t3, $zero, L_8002D354
    if (ctx->r11 == 0) {
        // 0x8002D334: nop
    
            goto L_8002D354;
    }
    // 0x8002D334: nop

    // 0x8002D338: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D33C: sb          $zero, 0x7689($at)
    MEM_B(0X7689, ctx->r1) = 0;
    // 0x8002D340: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002D344: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8002D348: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8002D34C: nop

    // 0x8002D350: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
L_8002D354:
    // 0x8002D354: b           L_8002D3F0
    // 0x8002D358: nop

        goto L_8002D3F0;
    // 0x8002D358: nop

L_8002D35C:
    // 0x8002D35C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D360: sb          $zero, 0x7689($at)
    MEM_B(0X7689, ctx->r1) = 0;
    // 0x8002D364: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002D368: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002D36C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002D370: nop

    // 0x8002D374: swc1        $f6, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f6.u32l;
    // 0x8002D378: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002D37C: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x8002D380: nop

    // 0x8002D384: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x8002D388: bne         $t7, $zero, L_8002D3F0
    if (ctx->r15 != 0) {
        // 0x8002D38C: nop
    
            goto L_8002D3F0;
    }
    // 0x8002D38C: nop

    // 0x8002D390: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002D394: lhu         $t8, 0x76A0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X76A0);
    // 0x8002D398: nop

    // 0x8002D39C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8002D3A0: beq         $t9, $zero, L_8002D3C0
    if (ctx->r25 == 0) {
        // 0x8002D3A4: nop
    
            goto L_8002D3C0;
    }
    // 0x8002D3A4: nop

    // 0x8002D3A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8002D3AC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002D3B0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8002D3B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002D3B8: b           L_8002D3F0
    // 0x8002D3BC: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
        goto L_8002D3F0;
    // 0x8002D3BC: swc1        $f10, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f10.u32l;
L_8002D3C0:
    // 0x8002D3C0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002D3C4: lhu         $t1, 0x76A0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X76A0);
    // 0x8002D3C8: nop

    // 0x8002D3CC: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x8002D3D0: beq         $t2, $zero, L_8002D3F0
    if (ctx->r10 == 0) {
        // 0x8002D3D4: nop
    
            goto L_8002D3F0;
    }
    // 0x8002D3D4: nop

    // 0x8002D3D8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8002D3DC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002D3E0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002D3E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002D3E8: nop

    // 0x8002D3EC: swc1        $f16, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f16.u32l;
L_8002D3F0:
    // 0x8002D3F0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002D3F4: lb          $t4, 0x7689($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7689);
    // 0x8002D3F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002D3FC: bne         $t4, $at, L_8002D46C
    if (ctx->r12 != ctx->r1) {
        // 0x8002D400: nop
    
            goto L_8002D46C;
    }
    // 0x8002D400: nop

    // 0x8002D404: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002D408: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002D40C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D410: lwc1        $f18, 0x28($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X28);
    // 0x8002D414: lwc1        $f9, -0x4020($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4020);
    // 0x8002D418: lwc1        $f8, -0x401C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X401C);
    // 0x8002D41C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8002D420: sub.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f4.d - ctx->f8.d;
    // 0x8002D424: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8002D428: swc1        $f10, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f10.u32l;
    // 0x8002D42C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002D430: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002D434: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x8002D438: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002D43C: lwc1        $f16, 0x28($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8002D440: nop

    // 0x8002D444: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8002D448: nop

    // 0x8002D44C: bc1f        L_8002D46C
    if (!c1cs) {
        // 0x8002D450: nop
    
            goto L_8002D46C;
    }
    // 0x8002D450: nop

    // 0x8002D454: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x8002D458: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002D45C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002D460: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002D464: nop

    // 0x8002D468: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_8002D46C:
    // 0x8002D46C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002D470: lh          $t8, 0x7694($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7694);
    // 0x8002D474: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002D478: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002D47C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002D480: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002D484: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x8002D488: jal         0x8002D080
    // 0x8002D48C: nop

    func_8002D080(rdram, ctx);
        goto after_6;
    // 0x8002D48C: nop

    after_6:
    // 0x8002D490: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002D494: lb          $t0, 0x768A($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X768A);
    // 0x8002D498: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002D49C: bne         $t0, $at, L_8002D508
    if (ctx->r8 != ctx->r1) {
        // 0x8002D4A0: nop
    
            goto L_8002D508;
    }
    // 0x8002D4A0: nop

    // 0x8002D4A4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002D4A8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002D4AC: nop

    // 0x8002D4B0: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8002D4B4: lwc1        $f16, 0x24($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X24);
    // 0x8002D4B8: nop

    // 0x8002D4BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8002D4C0: swc1        $f18, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f18.u32l;
    // 0x8002D4C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002D4C8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002D4CC: nop

    // 0x8002D4D0: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8002D4D4: lwc1        $f8, 0x28($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X28);
    // 0x8002D4D8: nop

    // 0x8002D4DC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8002D4E0: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x8002D4E4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002D4E8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002D4EC: nop

    // 0x8002D4F0: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8002D4F4: lwc1        $f16, 0x2C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x8002D4F8: nop

    // 0x8002D4FC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8002D500: b           L_8002D510
    // 0x8002D504: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
        goto L_8002D510;
    // 0x8002D504: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
L_8002D508:
    // 0x8002D508: jal         0x8002CA80
    // 0x8002D50C: nop

    func_8002CA80(rdram, ctx);
        goto after_7;
    // 0x8002D50C: nop

    after_7:
L_8002D510:
    // 0x8002D510: jal         0x8001CD20
    // 0x8002D514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_8;
    // 0x8002D514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8002D518: jal         0x8001AD6C
    // 0x8002D51C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_9;
    // 0x8002D51C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x8002D520: b           L_8002D528
    // 0x8002D524: nop

        goto L_8002D528;
    // 0x8002D524: nop

L_8002D528:
    // 0x8002D528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D52C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002D530: jr          $ra
    // 0x8002D534: nop

    return;
    // 0x8002D534: nop

;}
RECOMP_FUNC void func_8000FC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000FC08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000FC0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000FC10: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000FC14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8000FC18: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8000FC1C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8000FC20: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FC24: nop

    // 0x8000FC28: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8000FC2C: nop

    // 0x8000FC30: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8000FC34: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8000FC38: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8000FC3C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8000FC40: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8000FC44: addiu       $t0, $sp, 0x2C
    ctx->r8 = ADD32(ctx->r29, 0X2C);
    // 0x8000FC48: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8000FC4C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8000FC50: addiu       $a0, $t8, 0x14
    ctx->r4 = ADD32(ctx->r24, 0X14);
    // 0x8000FC54: jal         0x8000F888
    // 0x8000FC58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000F888(rdram, ctx);
        goto after_0;
    // 0x8000FC58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x8000FC5C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8000FC60: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8000FC64: nop

    // 0x8000FC68: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8000FC6C: nop

    // 0x8000FC70: bltz        $t2, L_8000FCAC
    if (SIGNED(ctx->r10) < 0) {
        // 0x8000FC74: nop
    
            goto L_8000FCAC;
    }
    // 0x8000FC74: nop

    // 0x8000FC78: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8000FC7C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8000FC80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8000FC84: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8000FC88: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8000FC8C: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x8000FC90: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8000FC94: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8000FC98: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8000FC9C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8000FCA0: jal         0x8000EEE8
    // 0x8000FCA4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_8000EEE8(rdram, ctx);
        goto after_1;
    // 0x8000FCA4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x8000FCA8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
L_8000FCAC:
    // 0x8000FCAC: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8000FCB0: nop

    // 0x8000FCB4: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x8000FCB8: nop

    // 0x8000FCBC: beq         $t8, $zero, L_8000FD44
    if (ctx->r24 == 0) {
        // 0x8000FCC0: nop
    
            goto L_8000FD44;
    }
    // 0x8000FCC0: nop

    // 0x8000FCC4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8000FCC8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8000FCCC: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x8000FCD0: nop

    // 0x8000FCD4: blez        $t0, L_8000FD44
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8000FCD8: nop
    
            goto L_8000FD44;
    }
    // 0x8000FCD8: nop

L_8000FCDC:
    // 0x8000FCDC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8000FCE0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000FCE4: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000FCE8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000FCEC: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8000FCF0: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x8000FCF4: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8000FCF8: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8000FCFC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8000FD00: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x8000FD04: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x8000FD08: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8000FD0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8000FD10: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8000FD14: jal         0x8000FC08
    // 0x8000FD18: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8000FC08(rdram, ctx);
        goto after_2;
    // 0x8000FD18: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_2:
    // 0x8000FD1C: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8000FD20: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8000FD24: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8000FD28: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8000FD2C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8000FD30: lw          $t3, 0x10($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X10);
    // 0x8000FD34: nop

    // 0x8000FD38: slt         $at, $t0, $t3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8000FD3C: bne         $at, $zero, L_8000FCDC
    if (ctx->r1 != 0) {
        // 0x8000FD40: nop
    
            goto L_8000FCDC;
    }
    // 0x8000FD40: nop

L_8000FD44:
    // 0x8000FD44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FD48: nop

    // 0x8000FD4C: beq         $t2, $zero, L_8000FD68
    if (ctx->r10 == 0) {
        // 0x8000FD50: nop
    
            goto L_8000FD68;
    }
    // 0x8000FD50: nop

    // 0x8000FD54: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000FD58: lw          $t4, 0x5820($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5820);
    // 0x8000FD5C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000FD60: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8000FD64: sw          $t5, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r13;
L_8000FD68:
    // 0x8000FD68: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8000FD6C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8000FD70: nop

    // 0x8000FD74: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8000FD78: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x8000FD7C: b           L_8000FD8C
    // 0x8000FD80: nop

        goto L_8000FD8C;
    // 0x8000FD80: nop

    // 0x8000FD84: b           L_8000FD8C
    // 0x8000FD88: nop

        goto L_8000FD8C;
    // 0x8000FD88: nop

L_8000FD8C:
    // 0x8000FD8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000FD90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8000FD94: jr          $ra
    // 0x8000FD98: nop

    return;
    // 0x8000FD98: nop

;}
RECOMP_FUNC void func_800294F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800294F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800294F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800294F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800294FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80029500: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80029504: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80029508: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002950C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029510: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029514: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029518: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002951C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029520: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029524: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029528: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002952C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029530: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80029534: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80029538: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002953C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80029540: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80029544: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80029548: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8002954C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80029550: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80029554: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80029558: jal         0x80067748
    // 0x8002955C: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8002955C: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80029560: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80029564: addiu       $t1, $t1, 0x7760
    ctx->r9 = ADD32(ctx->r9, 0X7760);
    // 0x80029568: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8002956C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80029570: nop

    // 0x80029574: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x80029578: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002957C: addiu       $t3, $t3, 0x7760
    ctx->r11 = ADD32(ctx->r11, 0X7760);
    // 0x80029580: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80029584: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80029588: nop

    // 0x8002958C: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x80029590: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80029594: lbu         $v0, 0x76E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X76E0);
    // 0x80029598: nop

    // 0x8002959C: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x800295A0: b           L_800295B0
    // 0x800295A4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_800295B0;
    // 0x800295A4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x800295A8: b           L_800295B0
    // 0x800295AC: nop

        goto L_800295B0;
    // 0x800295AC: nop

L_800295B0:
    // 0x800295B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800295B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800295B8: jr          $ra
    // 0x800295BC: nop

    return;
    // 0x800295BC: nop

;}
RECOMP_FUNC void func_8000D050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D050: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8000D054: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8000D058: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D05C: sb          $a0, 0x2D7D($at)
    MEM_B(0X2D7D, ctx->r1) = ctx->r4;
    // 0x8000D060: jr          $ra
    // 0x8000D064: nop

    return;
    // 0x8000D064: nop

    // 0x8000D068: jr          $ra
    // 0x8000D06C: nop

    return;
    // 0x8000D06C: nop

;}
RECOMP_FUNC void func_80018EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018EEC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80018EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80018EF4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80018EF8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80018EFC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80018F00: jal         0x80018CF0
    // 0x80018F04: nop

    func_80018CF0(rdram, ctx);
        goto after_0;
    // 0x80018F04: nop

    after_0:
    // 0x80018F08: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80018F0C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80018F10: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80018F14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80018F18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80018F1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80018F20: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80018F24: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x80018F28: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80018F2C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x80018F30: jal         0x800360F0
    // 0x80018F34: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80018F34: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80018F38: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80018F3C: nop

    // 0x80018F40: beq         $t0, $zero, L_80018F88
    if (ctx->r8 == 0) {
        // 0x80018F44: nop
    
            goto L_80018F88;
    }
    // 0x80018F44: nop

    // 0x80018F48: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80018F4C: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x80018F50: lw          $t1, -0x1EFC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1EFC);
    // 0x80018F54: addiu       $t4, $t2, 0x3C
    ctx->r12 = ADD32(ctx->r10, 0X3C);
L_80018F58:
    // 0x80018F58: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80018F5C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x80018F60: sw          $at, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->r1;
    // 0x80018F64: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x80018F68: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x80018F6C: sw          $at, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->r1;
    // 0x80018F70: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x80018F74: bne         $t2, $t4, L_80018F58
    if (ctx->r10 != ctx->r12) {
        // 0x80018F78: sw          $at, 0x3C($t1)
        MEM_W(0X3C, ctx->r9) = ctx->r1;
            goto L_80018F58;
    }
    // 0x80018F78: sw          $at, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r1;
    // 0x80018F7C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x80018F80: b           L_80019038
    // 0x80018F84: sw          $at, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->r1;
        goto L_80019038;
    // 0x80018F84: sw          $at, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->r1;
L_80018F88:
    // 0x80018F88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018F8C: lw          $t6, -0x1C5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C5C);
    // 0x80018F90: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80018F94: lw          $t5, -0x1EFC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1EFC);
    // 0x80018F98: addiu       $t9, $sp, 0x20
    ctx->r25 = ADD32(ctx->r29, 0X20);
    // 0x80018F9C: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x80018FA0: addiu       $t3, $t9, 0x3C
    ctx->r11 = ADD32(ctx->r25, 0X3C);
    // 0x80018FA4: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
L_80018FA8:
    // 0x80018FA8: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80018FAC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80018FB0: sw          $at, 0xE0($t8)
    MEM_W(0XE0, ctx->r24) = ctx->r1;
    // 0x80018FB4: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80018FB8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80018FBC: sw          $at, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->r1;
    // 0x80018FC0: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80018FC4: bne         $t9, $t3, L_80018FA8
    if (ctx->r25 != ctx->r11) {
        // 0x80018FC8: sw          $at, 0xDC($t8)
        MEM_W(0XDC, ctx->r24) = ctx->r1;
            goto L_80018FA8;
    }
    // 0x80018FC8: sw          $at, 0xDC($t8)
    MEM_W(0XDC, ctx->r24) = ctx->r1;
    // 0x80018FCC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80018FD0: nop

    // 0x80018FD4: sw          $at, 0xE0($t8)
    MEM_W(0XE0, ctx->r24) = ctx->r1;
    // 0x80018FD8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80018FDC: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80018FE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018FE4: addiu       $t2, $t4, 0x8
    ctx->r10 = ADD32(ctx->r12, 0X8);
    // 0x80018FE8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80018FEC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80018FF0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80018FF4: lui         $t1, 0x102
    ctx->r9 = S32(0X102 << 16);
    // 0x80018FF8: ori         $t1, $t1, 0x40
    ctx->r9 = ctx->r9 | 0X40;
    // 0x80018FFC: sw          $t1, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r9;
    // 0x80019000: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80019004: lw          $t7, -0x1C5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1C5C);
    // 0x80019008: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001900C: lw          $t5, -0x1EFC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1EFC);
    // 0x80019010: sll         $t0, $t7, 6
    ctx->r8 = S32(ctx->r15 << 6);
    // 0x80019014: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80019018: addu        $t3, $t5, $t0
    ctx->r11 = ADD32(ctx->r13, ctx->r8);
    // 0x8001901C: addiu       $t9, $t3, 0xE0
    ctx->r25 = ADD32(ctx->r11, 0XE0);
    // 0x80019020: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80019024: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80019028: lw          $t4, -0x1C5C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1C5C);
    // 0x8001902C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80019030: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x80019034: sw          $t2, -0x1C5C($at)
    MEM_W(-0X1C5C, ctx->r1) = ctx->r10;
L_80019038:
    // 0x80019038: b           L_80019040
    // 0x8001903C: nop

        goto L_80019040;
    // 0x8001903C: nop

L_80019040:
    // 0x80019040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019044: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80019048: jr          $ra
    // 0x8001904C: nop

    return;
    // 0x8001904C: nop

;}
RECOMP_FUNC void func_800295C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800295C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800295C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800295C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800295CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800295D0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800295D4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800295D8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800295DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800295E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800295E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800295E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800295EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800295F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800295F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800295F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800295FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80029600: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80029604: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80029608: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002960C: lwc1        $f6, 0x24($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80029610: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80029614: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80029618: lwc1        $f18, 0x28($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8002961C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80029620: lwc1        $f10, 0x2C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80029624: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80029628: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8002962C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80029630: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80029634: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80029638: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002963C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80029640: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80029644: jal         0x80067748
    // 0x80029648: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80029648: nop

    after_0:
    // 0x8002964C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80029650: addiu       $t1, $t1, 0x7760
    ctx->r9 = ADD32(ctx->r9, 0X7760);
    // 0x80029654: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80029658: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002965C: nop

    // 0x80029660: swc1        $f6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f6.u32l;
    // 0x80029664: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80029668: addiu       $t3, $t3, 0x7760
    ctx->r11 = ADD32(ctx->r11, 0X7760);
    // 0x8002966C: lwc1        $f8, 0x4($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80029670: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80029674: nop

    // 0x80029678: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x8002967C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x80029680: lbu         $v0, 0x76E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X76E0);
    // 0x80029684: nop

    // 0x80029688: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x8002968C: b           L_8002969C
    // 0x80029690: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_8002969C;
    // 0x80029690: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80029694: b           L_8002969C
    // 0x80029698: nop

        goto L_8002969C;
    // 0x80029698: nop

L_8002969C:
    // 0x8002969C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800296A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800296A4: jr          $ra
    // 0x800296A8: nop

    return;
    // 0x800296A8: nop

;}
RECOMP_FUNC void func_8000B598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B598: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000B59C: lw          $t6, -0x5CA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CA8);
    // 0x8000B5A0: nop

    // 0x8000B5A4: bne         $t6, $zero, L_8000B5B4
    if (ctx->r14 != 0) {
        // 0x8000B5A8: nop
    
            goto L_8000B5B4;
    }
    // 0x8000B5A8: nop

    // 0x8000B5AC: jr          $ra
    // 0x8000B5B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000B5B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000B5B4:
    // 0x8000B5B4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000B5B8: lw          $t7, 0x2D58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D58);
    // 0x8000B5BC: nop

    // 0x8000B5C0: lh          $v0, 0x2($t7)
    ctx->r2 = MEM_H(ctx->r15, 0X2);
    // 0x8000B5C4: jr          $ra
    // 0x8000B5C8: nop

    return;
    // 0x8000B5C8: nop

    // 0x8000B5CC: jr          $ra
    // 0x8000B5D0: nop

    return;
    // 0x8000B5D0: nop

    // 0x8000B5D4: jr          $ra
    // 0x8000B5D8: nop

    return;
    // 0x8000B5D8: nop

;}
RECOMP_FUNC void func_8002AA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AA94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002AA98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002AA9C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002AAA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002AAA4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8002AAA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002AAAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002AAB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002AAB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002AAB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002AABC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002AAC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002AAC4: lh          $t8, 0x4258($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4258);
    // 0x8002AAC8: nop

    // 0x8002AACC: bne         $t8, $zero, L_8002AADC
    if (ctx->r24 != 0) {
        // 0x8002AAD0: nop
    
            goto L_8002AADC;
    }
    // 0x8002AAD0: nop

    // 0x8002AAD4: b           L_8002AB18
    // 0x8002AAD8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_8002AB18;
    // 0x8002AAD8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8002AADC:
    // 0x8002AADC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8002AAE0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8002AAE4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002AAE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002AAEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002AAF0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002AAF4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8002AAF8: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8002AAFC: lh          $s0, 0x4258($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X4258);
    // 0x8002AB00: nop

    // 0x8002AB04: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x8002AB08: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x8002AB0C: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8002AB10: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8002AB14: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
L_8002AB18:
    // 0x8002AB18: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8002AB1C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002AB20: jal         0x8001BB34
    // 0x8002AB24: nop

    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8002AB24: nop

    after_0:
    // 0x8002AB28: b           L_8002AB30
    // 0x8002AB2C: nop

        goto L_8002AB30;
    // 0x8002AB2C: nop

L_8002AB30:
    // 0x8002AB30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AB34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002AB38: jr          $ra
    // 0x8002AB3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002AB3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001B7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B7E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B7EC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B7F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B7F4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B7F8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B7FC: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B800: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B804: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B808: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8001B80C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8001B810: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001B814: lh          $t1, 0x140($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X140);
    // 0x8001B818: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001B81C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001B820: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001B824: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001B828: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001B82C: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x8001B830: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8001B834: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001B838: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8001B83C: addiu       $t3, $t3, 0x5290
    ctx->r11 = ADD32(ctx->r11, 0X5290);
    // 0x8001B840: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8001B844: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8001B848: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001B84C: lh          $t2, 0x140($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X140);
    // 0x8001B850: lbu         $t5, 0x16($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X16);
    // 0x8001B854: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8001B858: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001B85C: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x8001B860: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001B864: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8001B868: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8001B86C: sb          $t6, 0x16($t5)
    MEM_B(0X16, ctx->r13) = ctx->r14;
    // 0x8001B870: jr          $ra
    // 0x8001B874: nop

    return;
    // 0x8001B874: nop

    // 0x8001B878: jr          $ra
    // 0x8001B87C: nop

    return;
    // 0x8001B87C: nop

;}
RECOMP_FUNC void func_80019448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019448: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8001944C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80019450: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x80019454: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80019458: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001945C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80019460: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80019464: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80019468: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001946C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80019470: sb          $a1, 0x4286($at)
    MEM_B(0X4286, ctx->r1) = ctx->r5;
    // 0x80019474: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80019478: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001947C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80019480: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80019484: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80019488: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001948C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80019490: sb          $a2, 0x4287($at)
    MEM_B(0X4287, ctx->r1) = ctx->r6;
    // 0x80019494: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80019498: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x8001949C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800194A0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x800194A4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800194A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800194AC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800194B0: sb          $a3, 0x4288($at)
    MEM_B(0X4288, ctx->r1) = ctx->r7;
    // 0x800194B4: jr          $ra
    // 0x800194B8: nop

    return;
    // 0x800194B8: nop

    // 0x800194BC: jr          $ra
    // 0x800194C0: nop

    return;
    // 0x800194C0: nop

;}
RECOMP_FUNC void UpdateActiveController(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DEDC: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8001DEE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DEE4: sh          $a0, -0x1C86($at)
    MEM_H(-0X1C86, ctx->r1) = ctx->r4;
    // 0x8001DEE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DEEC: lhu         $t6, -0x1C86($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C86);
    // 0x8001DEF0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001DEF4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8001DEF8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001DEFC: lhu         $t8, -0x1D70($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1D70);
    // 0x8001DF00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DF04: sh          $t8, -0x1C82($at)
    MEM_H(-0X1C82, ctx->r1) = ctx->r24;
    // 0x8001DF08: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001DF0C: lhu         $t9, -0x1C86($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C86);
    // 0x8001DF10: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001DF14: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001DF18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001DF1C: lhu         $t1, -0x1D50($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1D50);
    // 0x8001DF20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DF24: sh          $t1, -0x1C7C($at)
    MEM_H(-0X1C7C, ctx->r1) = ctx->r9;
    // 0x8001DF28: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001DF2C: lhu         $t2, -0x1C86($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C86);
    // 0x8001DF30: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001DF34: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8001DF38: lb          $t3, -0x1D44($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1D44);
    // 0x8001DF3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DF40: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x8001DF44: nop

    // 0x8001DF48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001DF4C: swc1        $f6, -0x1C74($at)
    MEM_W(-0X1C74, ctx->r1) = ctx->f6.u32l;
    // 0x8001DF50: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001DF54: lhu         $t4, -0x1C86($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C86);
    // 0x8001DF58: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001DF5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001DF60: lb          $t5, -0x1D3C($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1D3C);
    // 0x8001DF64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DF68: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8001DF6C: nop

    // 0x8001DF70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8001DF74: swc1        $f10, -0x1C6C($at)
    MEM_W(-0X1C6C, ctx->r1) = ctx->f10.u32l;
    // 0x8001DF78: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DF7C: lhu         $t6, -0x1C86($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C86);
    // 0x8001DF80: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001DF84: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8001DF88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001DF8C: lhu         $t8, -0x1D30($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1D30);
    // 0x8001DF90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DF94: sh          $t8, -0x1C64($at)
    MEM_H(-0X1C64, ctx->r1) = ctx->r24;
    // 0x8001DF98: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001DF9C: lhu         $t9, -0x1C86($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C86);
    // 0x8001DFA0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001DFA4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8001DFA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001DFAC: lhu         $t1, -0x1D10($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1D10);
    // 0x8001DFB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DFB4: sh          $t1, -0x1C60($at)
    MEM_H(-0X1C60, ctx->r1) = ctx->r9;
    // 0x8001DFB8: jr          $ra
    // 0x8001DFBC: nop

    return;
    // 0x8001DFBC: nop

    // 0x8001DFC0: jr          $ra
    // 0x8001DFC4: nop

    return;
    // 0x8001DFC4: nop

;}
RECOMP_FUNC void guLookAtF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80036ED0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80036ED4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80036ED8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80036EDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80036EE0: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x80036EE4: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x80036EE8: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80036EEC: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80036EF0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80036EF4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80036EF8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80036EFC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80036F00: jal         0x800361F0
    // 0x80036F04: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x80036F04: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80036F08: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80036F0C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80036F10: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80036F14: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80036F18: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80036F1C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80036F20: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80036F24: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80036F28: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80036F2C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80036F30: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80036F34: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80036F38: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80036F3C: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x80036F40: jal         0x800366E0
    // 0x80036F44: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80036F44: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x80036F48: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80036F4C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80036F50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80036F54: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80036F58: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80036F5C: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x80036F60: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80036F64: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x80036F68: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80036F6C: nop

    // 0x80036F70: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80036F74: nop

    // 0x80036F78: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x80036F7C: nop

    // 0x80036F80: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80036F84: nop

    // 0x80036F88: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80036F8C: sub.s       $f26, $f8, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80036F90: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80036F94: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80036F98: mul.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x80036F9C: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80036FA0: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80036FA4: nop

    // 0x80036FA8: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80036FAC: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80036FB0: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x80036FB4: nop

    // 0x80036FB8: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x80036FBC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80036FC0: mul.s       $f10, $f30, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x80036FC4: jal         0x800366E0
    // 0x80036FC8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_2;
    // 0x80036FC8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x80036FCC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80036FD0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80036FD4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80036FD8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80036FDC: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80036FE0: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80036FE4: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x80036FE8: nop

    // 0x80036FEC: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x80036FF0: nop

    // 0x80036FF4: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x80036FF8: nop

    // 0x80036FFC: mul.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x80037000: nop

    // 0x80037004: mul.s       $f4, $f24, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x80037008: nop

    // 0x8003700C: mul.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x80037010: nop

    // 0x80037014: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x80037018: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8003701C: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x80037020: nop

    // 0x80037024: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x80037028: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x8003702C: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80037030: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80037034: nop

    // 0x80037038: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8003703C: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x80037040: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80037044: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80037048: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8003704C: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x80037050: jal         0x800366E0
    // 0x80037054: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_3;
    // 0x80037054: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x80037058: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8003705C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80037060: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80037064: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80037068: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8003706C: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x80037070: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80037074: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80037078: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003707C: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80037080: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80037084: nop

    // 0x80037088: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8003708C: nop

    // 0x80037090: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80037094: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80037098: swc1        $f26, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f26.u32l;
    // 0x8003709C: swc1        $f28, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f28.u32l;
    // 0x800370A0: swc1        $f30, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f30.u32l;
    // 0x800370A4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800370A8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800370AC: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x800370B0: nop

    // 0x800370B4: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x800370B8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800370BC: swc1        $f14, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f14.u32l;
    // 0x800370C0: swc1        $f12, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f12.u32l;
    // 0x800370C4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800370C8: mul.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x800370CC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800370D0: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x800370D4: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x800370D8: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800370DC: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x800370E0: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x800370E4: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800370E8: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x800370EC: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x800370F0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x800370F4: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800370F8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800370FC: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x80037100: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80037104: swc1        $f22, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f22.u32l;
    // 0x80037108: swc1        $f24, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f24.u32l;
    // 0x8003710C: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80037110: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80037114: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80037118: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8003711C: nop

    // 0x80037120: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x80037124: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80037128: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x8003712C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80037130: mul.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x80037134: nop

    // 0x80037138: mul.s       $f6, $f12, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x8003713C: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80037140: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x80037144: mul.s       $f4, $f2, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x80037148: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8003714C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80037150: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80037154: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80037158: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x8003715C: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x80037160: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80037164: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80037168: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x8003716C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80037170: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80037174: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80037178: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8003717C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80037180: jr          $ra
    // 0x80037184: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80037184: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void sbrk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E34C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000E350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000E354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000E358: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000E35C: lw          $t6, -0x5C90($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5C90);
    // 0x8000E360: nop

    // 0x8000E364: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8000E368: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000E36C: lw          $t7, -0x5C90($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5C90);
    // 0x8000E370: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8000E374: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E378: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000E37C: sw          $t9, -0x5C90($at)
    MEM_W(-0X5C90, ctx->r1) = ctx->r25;
    // 0x8000E380: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000E384: lw          $t0, -0x5C90($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5C90);
    // 0x8000E388: lui         $t1, 0x8038
    ctx->r9 = S32(0X8038 << 16);
    // 0x8000E38C: addiu       $t1, $t1, 0x0
    ctx->r9 = ADD32(ctx->r9, 0X0);
    // 0x8000E390: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8000E394: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8000E398: slt         $at, $t2, $at
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8000E39C: bne         $at, $zero, L_8000E3B8
    if (ctx->r1 != 0) {
        // 0x8000E3A0: nop
    
            goto L_8000E3B8;
    }
    // 0x8000E3A0: nop

    // 0x8000E3A4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000E3A8: jal         0x80017FD8
    // 0x8000E3AC: addiu       $a0, $a0, -0x4450
    ctx->r4 = ADD32(ctx->r4, -0X4450);
    printf_stub(rdram, ctx);
        goto after_0;
    // 0x8000E3AC: addiu       $a0, $a0, -0x4450
    ctx->r4 = ADD32(ctx->r4, -0X4450);
    after_0:
    // 0x8000E3B0: b           L_8000E3CC
    // 0x8000E3B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000E3CC;
    // 0x8000E3B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000E3B8:
    // 0x8000E3B8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8000E3BC: b           L_8000E3CC
    // 0x8000E3C0: nop

        goto L_8000E3CC;
    // 0x8000E3C0: nop

    // 0x8000E3C4: b           L_8000E3CC
    // 0x8000E3C8: nop

        goto L_8000E3CC;
    // 0x8000E3C8: nop

L_8000E3CC:
    // 0x8000E3CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000E3D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000E3D4: jr          $ra
    // 0x8000E3D8: nop

    return;
    // 0x8000E3D8: nop

;}
RECOMP_FUNC void PakWrite(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800200D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800200DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800200E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800200E4: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x800200E8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800200EC: nop

    // 0x800200F0: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x800200F4: beq         $t8, $zero, L_80020204
    if (ctx->r24 == 0) {
        // 0x800200F8: nop
    
            goto L_80020204;
    }
    // 0x800200F8: nop

    // 0x800200FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80020100: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80020104: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80020108: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8002010C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80020110: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80020114: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80020118: lw          $t1, 0x6E98($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6E98);
    // 0x8002011C: nop

    // 0x80020120: bne         $t1, $zero, L_80020204
    if (ctx->r9 != 0) {
        // 0x80020124: nop
    
            goto L_80020204;
    }
    // 0x80020124: nop

    // 0x80020128: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002012C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80020130: jal         0x8001F174
    // 0x80020134: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F174(rdram, ctx);
        goto after_0;
    // 0x80020134: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_0:
    // 0x80020138: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002013C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80020140: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x80020144: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80020148: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002014C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80020150: lw          $t4, 0x6E9C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6E9C);
    // 0x80020154: nop

    // 0x80020158: bne         $t4, $zero, L_80020204
    if (ctx->r12 != 0) {
        // 0x8002015C: nop
    
            goto L_80020204;
    }
    // 0x8002015C: nop

    // 0x80020160: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020164: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80020168: jal         0x8001F4B8
    // 0x8002016C: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_1;
    // 0x8002016C: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_1:
    // 0x80020170: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80020174: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80020178: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x8002017C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80020180: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80020184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80020188: lw          $t7, 0x6EA4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6EA4);
    // 0x8002018C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80020190: bne         $t7, $at, L_800201B8
    if (ctx->r15 != ctx->r1) {
        // 0x80020194: nop
    
            goto L_800201B8;
    }
    // 0x80020194: nop

    // 0x80020198: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002019C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800201A0: jal         0x8001F550
    // 0x800201A4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F550(rdram, ctx);
        goto after_2;
    // 0x800201A4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_2:
    // 0x800201A8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800201AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800201B0: jal         0x8001F4B8
    // 0x800201B4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_3;
    // 0x800201B4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_3:
L_800201B8:
    // 0x800201B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800201BC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800201C0: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x800201C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800201C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800201CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800201D0: lw          $t0, 0x6EA4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6EA4);
    // 0x800201D4: nop

    // 0x800201D8: bne         $t0, $zero, L_80020204
    if (ctx->r8 != 0) {
        // 0x800201DC: nop
    
            goto L_80020204;
    }
    // 0x800201DC: nop

    // 0x800201E0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800201E4: addiu       $t1, $t1, -0x59F0
    ctx->r9 = ADD32(ctx->r9, -0X59F0);
    // 0x800201E8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800201EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800201F0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    // 0x800201F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800201F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800201FC: jal         0x8001F5F0
    // 0x80020200: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8001F5F0(rdram, ctx);
        goto after_4;
    // 0x80020200: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
L_80020204:
    // 0x80020204: b           L_8002020C
    // 0x80020208: nop

        goto L_8002020C;
    // 0x80020208: nop

L_8002020C:
    // 0x8002020C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80020210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80020214: jr          $ra
    // 0x80020218: nop

    return;
    // 0x80020218: nop

;}
RECOMP_FUNC void func_800015D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800015D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800015D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800015D8: lui         $t6, 0x18
    ctx->r14 = S32(0X18 << 16);
    // 0x800015DC: lui         $t7, 0x19
    ctx->r15 = S32(0X19 << 16);
    // 0x800015E0: addiu       $t7, $t7, -0x66C0
    ctx->r15 = ADD32(ctx->r15, -0X66C0);
    // 0x800015E4: addiu       $t6, $t6, 0x4EE0
    ctx->r14 = ADD32(ctx->r14, 0X4EE0);
    // 0x800015E8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800015EC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x800015F0: jal         0x8000068C
    // 0x800015F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800015F4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800015F8: b           L_80001600
    // 0x800015FC: nop

        goto L_80001600;
    // 0x800015FC: nop

L_80001600:
    // 0x80001600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001608: jr          $ra
    // 0x8000160C: nop

    return;
    // 0x8000160C: nop

;}
RECOMP_FUNC void func_8001C248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C24C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C254: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001C258: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001C25C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001C260: jal         0x80019510
    // 0x8001C264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80019510(rdram, ctx);
        goto after_0;
    // 0x8001C264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001C268: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001C26C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8001C270: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001C274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001C278: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001C27C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001C280: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001C284: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001C288: lbu         $t8, 0x4280($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4280);
    // 0x8001C28C: nop

    // 0x8001C290: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001C294: bne         $t9, $zero, L_8001C2E0
    if (ctx->r25 != 0) {
        // 0x8001C298: nop
    
            goto L_8001C2E0;
    }
    // 0x8001C298: nop

    // 0x8001C29C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8001C2A0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C2A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001C2A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001C2AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001C2B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001C2B4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001C2B8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8001C2BC: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8001C2C0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8001C2C4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001C2C8: lh          $t5, 0x4290($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4290);
    // 0x8001C2CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C2D0: beq         $t5, $at, L_8001C2E0
    if (ctx->r13 == ctx->r1) {
        // 0x8001C2D4: nop
    
            goto L_8001C2E0;
    }
    // 0x8001C2D4: nop

    // 0x8001C2D8: b           L_8001C2F0
    // 0x8001C2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001C2F0;
    // 0x8001C2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001C2E0:
    // 0x8001C2E0: b           L_8001C2F0
    // 0x8001C2E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001C2F0;
    // 0x8001C2E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C2E8: b           L_8001C2F0
    // 0x8001C2EC: nop

        goto L_8001C2F0;
    // 0x8001C2EC: nop

L_8001C2F0:
    // 0x8001C2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C2F8: jr          $ra
    // 0x8001C2FC: nop

    return;
    // 0x8001C2FC: nop

;}
RECOMP_FUNC void func_80018C0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018C0C: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x80018C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80018C14: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80018C18: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80018C1C: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x80018C20: lw          $a3, -0x1EAC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1EAC);
    // 0x80018C24: lw          $a2, -0x1EB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1EB0);
    // 0x80018C28: lw          $a1, -0x1EB4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EB4);
    // 0x80018C2C: jal         0x80037200
    // 0x80018C30: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    guTranslateF(rdram, ctx);
        goto after_0;
    // 0x80018C30: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    after_0:
    // 0x80018C34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80018C38: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80018C3C: lw          $a1, -0x1EA8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EA8);
    // 0x80018C40: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x80018C44: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80018C48: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80018C4C: jal         0x800372A0
    // 0x80018C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_1;
    // 0x80018C50: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80018C54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80018C58: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80018C5C: lw          $a1, -0x1EA4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EA4);
    // 0x80018C60: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80018C64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80018C68: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80018C6C: jal         0x800372A0
    // 0x80018C70: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_2;
    // 0x80018C70: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80018C74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80018C78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80018C7C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80018C80: lw          $a1, -0x1EA0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EA0);
    // 0x80018C84: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80018C88: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80018C8C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80018C90: jal         0x800372A0
    // 0x80018C94: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x80018C94: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80018C98: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x80018C9C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80018CA0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80018CA4: jal         0x80036400
    // 0x80018CA8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    guMtxCatF(rdram, ctx);
        goto after_4;
    // 0x80018CA8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_4:
    // 0x80018CAC: addiu       $t7, $sp, 0x20
    ctx->r15 = ADD32(ctx->r29, 0X20);
    // 0x80018CB0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80018CB4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80018CB8: jal         0x80036400
    // 0x80018CBC: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    guMtxCatF(rdram, ctx);
        goto after_5;
    // 0x80018CBC: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_5:
    // 0x80018CC0: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80018CC4: addiu       $a2, $a2, -0x1EC0
    ctx->r6 = ADD32(ctx->r6, -0X1EC0);
    // 0x80018CC8: addiu       $a2, $a2, 0x34
    ctx->r6 = ADD32(ctx->r6, 0X34);
    // 0x80018CCC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80018CD0: jal         0x80036400
    // 0x80018CD4: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x80018CD4: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_6:
    // 0x80018CD8: b           L_80018CE0
    // 0x80018CDC: nop

        goto L_80018CE0;
    // 0x80018CDC: nop

L_80018CE0:
    // 0x80018CE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80018CE4: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    // 0x80018CE8: jr          $ra
    // 0x80018CEC: nop

    return;
    // 0x80018CEC: nop

;}
RECOMP_FUNC void _doModFunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046420: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x80046424: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80046428: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8004642C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80046430: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80046434: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80046438: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x8004643C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80046440: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80046444: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80046448: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
    // 0x8004644C: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80046450: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x80046454: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80046458: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x8004645C: nop

    // 0x80046460: bc1fl       L_80046488
    if (!c1cs) {
        // 0x80046464: cvt.s.d     $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
            goto L_80046488;
    }
    goto skip_0;
    // 0x80046464: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    skip_0:
    // 0x80046468: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8004646C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80046470: nop

    // 0x80046474: sub.d       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f0.d - ctx->f8.d;
    // 0x80046478: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8004647C: b           L_8004648C
    // 0x80046480: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
        goto L_8004648C;
    // 0x80046480: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x80046484: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
L_80046488:
    // 0x80046488: swc1        $f18, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f18.u32l;
L_8004648C:
    // 0x8004648C: lwc1        $f2, 0x14($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80046490: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80046494: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80046498: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x8004649C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800464A0: bc1fl       L_800464B0
    if (!c1cs) {
        // 0x800464A4: cvt.d.s     $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
            goto L_800464B0;
    }
    goto skip_1;
    // 0x800464A4: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    skip_1:
    // 0x800464A8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x800464AC: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
L_800464B0:
    // 0x800464B0: lwc1        $f10, 0x1C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x800464B4: sub.d       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f4.d - ctx->f8.d;
    // 0x800464B8: cvt.s.d     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f2.fl = CVT_S_D(ctx->f16.d);
    // 0x800464BC: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x800464C0: jr          $ra
    // 0x800464C4: nop

    return;
    // 0x800464C4: nop

;}
RECOMP_FUNC void func_80011084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011084: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80011088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001108C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80011090: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80011094: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80011098: nop

    // 0x8001109C: bne         $t6, $zero, L_800110AC
    if (ctx->r14 != 0) {
        // 0x800110A0: nop
    
            goto L_800110AC;
    }
    // 0x800110A0: nop

    // 0x800110A4: b           L_800111C4
    // 0x800110A8: nop

        goto L_800111C4;
    // 0x800110A8: nop

L_800110AC:
    // 0x800110AC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800110B0: nop

    // 0x800110B4: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x800110B8: lw          $t9, 0x10($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X10);
    // 0x800110BC: nop

    // 0x800110C0: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x800110C4: beq         $t0, $zero, L_8001115C
    if (ctx->r8 == 0) {
        // 0x800110C8: nop
    
            goto L_8001115C;
    }
    // 0x800110C8: nop

    // 0x800110CC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800110D0: nop

    // 0x800110D4: addiu       $t2, $t1, 0x18
    ctx->r10 = ADD32(ctx->r9, 0X18);
    // 0x800110D8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x800110DC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800110E0: nop

    // 0x800110E4: addiu       $t4, $t3, 0x3C
    ctx->r12 = ADD32(ctx->r11, 0X3C);
    // 0x800110E8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x800110EC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800110F0: nop

    // 0x800110F4: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800110F8: nop

    // 0x800110FC: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x80011100: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80011104: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80011108: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001110C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80011110: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80011114: jal         0x80010A5C
    // 0x80011118: nop

    func_80010A5C(rdram, ctx);
        goto after_0;
    // 0x80011118: nop

    after_0:
    // 0x8001111C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80011120: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80011124: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80011128: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8001112C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x80011130: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x80011134: jal         0x80010B6C
    // 0x80011138: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    func_80010B6C(rdram, ctx);
        goto after_1;
    // 0x80011138: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    after_1:
    // 0x8001113C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80011140: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80011144: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80011148: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8001114C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x80011150: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x80011154: jal         0x80010A5C
    // 0x80011158: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    func_80010A5C(rdram, ctx);
        goto after_2;
    // 0x80011158: addiu       $a2, $a2, 0x18
    ctx->r6 = ADD32(ctx->r6, 0X18);
    after_2:
L_8001115C:
    // 0x8001115C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80011160: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80011164: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80011168: nop

    // 0x8001116C: blez        $t9, L_800111BC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80011170: nop
    
            goto L_800111BC;
    }
    // 0x80011170: nop

L_80011174:
    // 0x80011174: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80011178: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001117C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80011180: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80011184: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80011188: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x8001118C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80011190: jal         0x80011084
    // 0x80011194: nop

    func_80011084(rdram, ctx);
        goto after_3;
    // 0x80011194: nop

    after_3:
    // 0x80011198: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8001119C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800111A0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800111A4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800111A8: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x800111AC: nop

    // 0x800111B0: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800111B4: bne         $at, $zero, L_80011174
    if (ctx->r1 != 0) {
        // 0x800111B8: nop
    
            goto L_80011174;
    }
    // 0x800111B8: nop

L_800111BC:
    // 0x800111BC: b           L_800111C4
    // 0x800111C0: nop

        goto L_800111C4;
    // 0x800111C0: nop

L_800111C4:
    // 0x800111C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800111C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800111CC: jr          $ra
    // 0x800111D0: nop

    return;
    // 0x800111D0: nop

;}
RECOMP_FUNC void func_8001CAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CAAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001CAB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CAB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001CAB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001CABC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001CAC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8001CAC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001CAC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001CACC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001CAD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001CAD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001CAD8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001CADC: lbu         $t8, 0x4280($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4280);
    // 0x8001CAE0: nop

    // 0x8001CAE4: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8001CAE8: bne         $t9, $zero, L_8001CD08
    if (ctx->r25 != 0) {
        // 0x8001CAEC: nop
    
            goto L_8001CD08;
    }
    // 0x8001CAEC: nop

    // 0x8001CAF0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001CAF4:
    // 0x8001CAF4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8001CAF8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CAFC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001CB00: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001CB04: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001CB08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001CB0C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001CB10: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8001CB14: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8001CB18: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8001CB1C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001CB20: lh          $t5, 0x4290($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4290);
    // 0x8001CB24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001CB28: beq         $t5, $at, L_8001CCF0
    if (ctx->r13 == ctx->r1) {
        // 0x8001CB2C: sw          $t5, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r13;
            goto L_8001CCF0;
    }
    // 0x8001CB2C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8001CB30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001CB34: jal         0x8001A488
    // 0x8001CB38: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8001CB38: nop

    after_0:
    // 0x8001CB3C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001CB40: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001CB44: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001CB48: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001CB4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001CB50: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001CB54: lw          $t8, 0x52B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X52B0);
    // 0x8001CB58: nop

    // 0x8001CB5C: beq         $t8, $zero, L_8001CCF0
    if (ctx->r24 == 0) {
        // 0x8001CB60: nop
    
            goto L_8001CCF0;
    }
    // 0x8001CB60: nop

    // 0x8001CB64: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001CB68: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8001CB6C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001CB70: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001CB74: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001CB78: addiu       $t2, $t2, 0x5290
    ctx->r10 = ADD32(ctx->r10, 0X5290);
    // 0x8001CB7C: addu        $t1, $t0, $t2
    ctx->r9 = ADD32(ctx->r8, ctx->r10);
    // 0x8001CB80: lw          $a0, 0x20($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X20);
    // 0x8001CB84: lw          $a1, 0x24($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X24);
    // 0x8001CB88: jal         0x80011424
    // 0x8001CB8C: nop

    func_80011424(rdram, ctx);
        goto after_1;
    // 0x8001CB8C: nop

    after_1:
    // 0x8001CB90: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8001CB94: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8001CB98: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8001CB9C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8001CBA0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001CBA4: addiu       $t5, $t5, 0x5290
    ctx->r13 = ADD32(ctx->r13, 0X5290);
    // 0x8001CBA8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8001CBAC: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x8001CBB0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001CBB4: nop

    // 0x8001CBB8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001CBBC: swc1        $f8, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f8.u32l;
    // 0x8001CBC0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8001CBC4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001CBC8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001CBCC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001CBD0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001CBD4: addiu       $t9, $t9, 0x5290
    ctx->r25 = ADD32(ctx->r25, 0X5290);
    // 0x8001CBD8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8001CBDC: lbu         $t1, 0x15($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X15);
    // 0x8001CBE0: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001CBE4: lw          $t2, 0x5D5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D5C);
    // 0x8001CBE8: sll         $t3, $t1, 4
    ctx->r11 = S32(ctx->r9 << 4);
    // 0x8001CBEC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001CBF0: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8001CBF4: lwc1        $f10, 0x24($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8001CBF8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8001CBFC: nop

    // 0x8001CC00: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8001CC04: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x8001CC08: nop

    // 0x8001CC0C: bc1f        L_8001CCC4
    if (!c1cs) {
        // 0x8001CC10: nop
    
            goto L_8001CCC4;
    }
    // 0x8001CC10: nop

    // 0x8001CC14: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001CC18: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001CC1C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001CC20: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001CC24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001CC28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001CC2C: lbu         $t8, 0x52A6($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X52A6);
    // 0x8001CC30: nop

    // 0x8001CC34: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001CC38: beq         $t9, $zero, L_8001CC74
    if (ctx->r25 == 0) {
        // 0x8001CC3C: nop
    
            goto L_8001CC74;
    }
    // 0x8001CC3C: nop

    // 0x8001CC40: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8001CC44: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8001CC48: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8001CC4C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8001CC50: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001CC54: addiu       $t2, $t2, 0x5290
    ctx->r10 = ADD32(ctx->r10, 0X5290);
    // 0x8001CC58: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8001CC5C: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8001CC60: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8001CC64: nop

    // 0x8001CC68: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001CC6C: b           L_8001CC94
    // 0x8001CC70: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
        goto L_8001CC94;
    // 0x8001CC70: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
L_8001CC74:
    // 0x8001CC74: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8001CC78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001CC7C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001CC80: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8001CC84: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8001CC88: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001CC8C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001CC90: swc1        $f16, 0x52B4($at)
    MEM_W(0X52B4, ctx->r1) = ctx->f16.u32l;
L_8001CC94:
    // 0x8001CC94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001CC98: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001CC9C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001CCA0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001CCA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001CCA8: addiu       $t8, $t8, 0x5290
    ctx->r24 = ADD32(ctx->r24, 0X5290);
    // 0x8001CCAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001CCB0: lbu         $t0, 0x16($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X16);
    // 0x8001CCB4: nop

    // 0x8001CCB8: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x8001CCBC: b           L_8001CCF0
    // 0x8001CCC0: sb          $t1, 0x16($t9)
    MEM_B(0X16, ctx->r25) = ctx->r9;
        goto L_8001CCF0;
    // 0x8001CCC0: sb          $t1, 0x16($t9)
    MEM_B(0X16, ctx->r25) = ctx->r9;
L_8001CCC4:
    // 0x8001CCC4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001CCC8: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8001CCCC: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001CCD0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8001CCD4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001CCD8: addiu       $t4, $t4, 0x5290
    ctx->r12 = ADD32(ctx->r12, 0X5290);
    // 0x8001CCDC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001CCE0: lbu         $t6, 0x16($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X16);
    // 0x8001CCE4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8001CCE8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8001CCEC: sb          $t7, 0x16($t5)
    MEM_B(0X16, ctx->r13) = ctx->r15;
L_8001CCF0:
    // 0x8001CCF0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CCF4: nop

    // 0x8001CCF8: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x8001CCFC: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8001CD00: bne         $at, $zero, L_8001CAF4
    if (ctx->r1 != 0) {
        // 0x8001CD04: sw          $t0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r8;
            goto L_8001CAF4;
    }
    // 0x8001CD04: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8001CD08:
    // 0x8001CD08: b           L_8001CD10
    // 0x8001CD0C: nop

        goto L_8001CD10;
    // 0x8001CD0C: nop

L_8001CD10:
    // 0x8001CD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CD14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001CD18: jr          $ra
    // 0x8001CD1C: nop

    return;
    // 0x8001CD1C: nop

;}
RECOMP_FUNC void alSndpSetPriority(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800352E0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800352E4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800352E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800352EC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800352F0: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x800352F4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800352F8: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x800352FC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80035300: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80035304: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x80035308: jr          $ra
    // 0x8003530C: sh          $t8, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r24;
    return;
    // 0x8003530C: sh          $t8, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r24;
;}
RECOMP_FUNC void alSndpSetSound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035310: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80035314: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80035318: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003531C: jr          $ra
    // 0x80035320: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    return;
    // 0x80035320: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_800177D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800177D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800177DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800177E0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800177E4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800177E8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800177EC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800177F0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800177F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800177F8: jal         0x800171E0
    // 0x800177FC: nop

    func_800171E0(rdram, ctx);
        goto after_0;
    // 0x800177FC: nop

    after_0:
    // 0x80017800: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80017804: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80017808: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8001780C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80017810: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x80017814: lh          $a3, 0x46($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X46);
    // 0x80017818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001781C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80017820: jal         0x80017028
    // 0x80017824: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80017028(rdram, ctx);
        goto after_1;
    // 0x80017824: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x80017828: b           L_80017838
    // 0x8001782C: nop

        goto L_80017838;
    // 0x8001782C: nop

    // 0x80017830: b           L_80017838
    // 0x80017834: nop

        goto L_80017838;
    // 0x80017834: nop

L_80017838:
    // 0x80017838: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001783C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80017840: jr          $ra
    // 0x80017844: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80017844: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001F174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001F178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F17C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001F180: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001F184: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001F188: lbu         $t6, -0x1D84($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1D84);
    // 0x8001F18C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001F190: nop

    // 0x8001F194: srav        $t8, $t6, $t7
    ctx->r24 = S32(SIGNED(ctx->r14) >> (ctx->r15 & 31));
    // 0x8001F198: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8001F19C: beq         $t9, $zero, L_8001F220
    if (ctx->r25 == 0) {
        // 0x8001F1A0: nop
    
            goto L_8001F220;
    }
    // 0x8001F1A0: nop

    // 0x8001F1A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001F1A8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001F1AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001F1B0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001F1B4: lhu         $t2, 0x7650($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X7650);
    // 0x8001F1B8: nop

    // 0x8001F1BC: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8001F1C0: beq         $t3, $zero, L_8001F220
    if (ctx->r11 == 0) {
        // 0x8001F1C4: nop
    
            goto L_8001F220;
    }
    // 0x8001F1C4: nop

    // 0x8001F1C8: andi        $t4, $t2, 0x1
    ctx->r12 = ctx->r10 & 0X1;
    // 0x8001F1CC: beq         $t4, $zero, L_8001F220
    if (ctx->r12 == 0) {
        // 0x8001F1D0: nop
    
            goto L_8001F220;
    }
    // 0x8001F1D0: nop

    // 0x8001F1D4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001F1D8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8001F1DC: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8001F1E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001F1E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F1E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001F1EC: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x8001F1F0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001F1F4: jal         0x80037DC0
    // 0x8001F1F8: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F1F8: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    after_0:
    // 0x8001F1FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8001F200: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001F204: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8001F208: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8001F20C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001F210: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8001F214: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001F218: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8001F21C: sw          $t8, 0x74($t3)
    MEM_W(0X74, ctx->r11) = ctx->r24;
L_8001F220:
    // 0x8001F220: b           L_8001F228
    // 0x8001F224: nop

        goto L_8001F228;
    // 0x8001F224: nop

L_8001F228:
    // 0x8001F228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F22C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001F230: jr          $ra
    // 0x8001F234: nop

    return;
    // 0x8001F234: nop

;}
RECOMP_FUNC void func_8002C92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C92C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C930: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C934: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002C938: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002C93C: nop

    // 0x8002C940: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002C944: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8002C948: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x8002C94C: jal         0x8002C144
    // 0x8002C950: nop

    func_8002C144(rdram, ctx);
        goto after_0;
    // 0x8002C950: nop

    after_0:
    // 0x8002C954: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002C958: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x8002C95C: nop

    // 0x8002C960: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8002C964: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8002C968: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002C96C: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x8002C970: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C974: sb          $t9, 0x7660($at)
    MEM_B(0X7660, ctx->r1) = ctx->r25;
    // 0x8002C978: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C97C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002C980: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002C984: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002C988: lw          $t2, 0x76F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X76F0);
    // 0x8002C98C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C990: sw          $t2, 0x7664($at)
    MEM_W(0X7664, ctx->r1) = ctx->r10;
    // 0x8002C994: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C998: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002C99C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8002C9A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002C9A4: lw          $t5, 0x7700($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7700);
    // 0x8002C9A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C9AC: sw          $t5, 0x7668($at)
    MEM_W(0X7668, ctx->r1) = ctx->r13;
    // 0x8002C9B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C9B4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002C9B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C9BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002C9C0: lw          $t8, 0x7710($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7710);
    // 0x8002C9C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C9C8: sw          $t8, 0x766C($at)
    MEM_W(0X766C, ctx->r1) = ctx->r24;
    // 0x8002C9CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C9D0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002C9D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002C9D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C9DC: lw          $t1, 0x7720($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7720);
    // 0x8002C9E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002C9E4: sw          $t1, 0x7670($at)
    MEM_W(0X7670, ctx->r1) = ctx->r9;
    // 0x8002C9E8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C9EC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002C9F0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8002C9F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002C9F8: lw          $t4, 0x7730($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7730);
    // 0x8002C9FC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002CA00: sw          $t4, 0x7674($at)
    MEM_W(0X7674, ctx->r1) = ctx->r12;
    // 0x8002CA04: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CA08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002CA0C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002CA10: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8002CA14: lwc1        $f4, 0x7760($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8002CA18: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002CA1C: swc1        $f4, 0x7678($at)
    MEM_W(0X7678, ctx->r1) = ctx->f4.u32l;
    // 0x8002CA20: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002CA24: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002CA28: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002CA2C: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8002CA30: nop

    // 0x8002CA34: swc1        $f6, 0x767C($at)
    MEM_W(0X767C, ctx->r1) = ctx->f6.u32l;
    // 0x8002CA38: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002CA3C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002CA40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002CA44: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8002CA48: nop

    // 0x8002CA4C: swc1        $f8, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f8.u32l;
    // 0x8002CA50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002CA54: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002CA58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002CA5C: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8002CA60: nop

    // 0x8002CA64: swc1        $f10, 0x7684($at)
    MEM_W(0X7684, ctx->r1) = ctx->f10.u32l;
    // 0x8002CA68: b           L_8002CA70
    // 0x8002CA6C: nop

        goto L_8002CA70;
    // 0x8002CA6C: nop

L_8002CA70:
    // 0x8002CA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CA74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002CA78: jr          $ra
    // 0x8002CA7C: nop

    return;
    // 0x8002CA7C: nop

;}
RECOMP_FUNC void func_8001BE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BE6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001BE70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BE74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001BE78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001BE7C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001BE80: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001BE84: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8001BE88: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001BE8C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001BE90: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001BE94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001BE98: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001BE9C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001BEA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001BEA4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001BEA8: sh          $t6, 0x424E($at)
    MEM_H(0X424E, ctx->r1) = ctx->r14;
    // 0x8001BEAC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8001BEB0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8001BEB4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8001BEB8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8001BEBC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8001BEC0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8001BEC4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001BEC8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8001BECC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8001BED0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8001BED4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001BED8: lh          $t4, 0x4290($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4290);
    // 0x8001BEDC: nop

    // 0x8001BEE0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8001BEE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BEE8: jal         0x8001A488
    // 0x8001BEEC: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8001BEEC: nop

    after_0:
    // 0x8001BEF0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BEF4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8001BEF8: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8001BEFC: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8001BF00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001BF04: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x8001BF08: lw          $t6, 0x52B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X52B0);
    // 0x8001BF0C: nop

    // 0x8001BF10: beq         $t6, $zero, L_8001BF58
    if (ctx->r14 == 0) {
        // 0x8001BF14: nop
    
            goto L_8001BF58;
    }
    // 0x8001BF14: nop

    // 0x8001BF18: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BF1C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001BF20: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001BF24: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001BF28: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001BF2C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8001BF30: lw          $a0, 0x52B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52B0);
    // 0x8001BF34: jal         0x80011DD0
    // 0x8001BF38: nop

    func_80011DD0(rdram, ctx);
        goto after_1;
    // 0x8001BF38: nop

    after_1:
    // 0x8001BF3C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BF40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001BF44: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x8001BF48: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8001BF4C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001BF50: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001BF54: sw          $zero, 0x52B0($at)
    MEM_W(0X52B0, ctx->r1) = 0;
L_8001BF58:
    // 0x8001BF58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BF5C: nop

    // 0x8001BF60: beq         $t2, $zero, L_8001C008
    if (ctx->r10 == 0) {
        // 0x8001BF64: nop
    
            goto L_8001C008;
    }
    // 0x8001BF64: nop

    // 0x8001BF68: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001BF6C: lw          $t3, -0x1C54($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1C54);
    // 0x8001BF70: nop

    // 0x8001BF74: beq         $t3, $zero, L_8001BF94
    if (ctx->r11 == 0) {
        // 0x8001BF78: nop
    
            goto L_8001BF94;
    }
    // 0x8001BF78: nop

    // 0x8001BF7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8001BF80: lw          $a0, -0x1C54($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1C54);
    // 0x8001BF84: jal         0x80013A00
    // 0x8001BF88: nop

    func_80013A00(rdram, ctx);
        goto after_2;
    // 0x8001BF88: nop

    after_2:
    // 0x8001BF8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BF90: sw          $zero, -0x1C54($at)
    MEM_W(-0X1C54, ctx->r1) = 0;
L_8001BF94:
    // 0x8001BF94: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BF98: jal         0x800122F0
    // 0x8001BF9C: nop

    func_800122F0(rdram, ctx);
        goto after_3;
    // 0x8001BF9C: nop

    after_3:
    // 0x8001BFA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BFA4: sw          $v0, -0x1C54($at)
    MEM_W(-0X1C54, ctx->r1) = ctx->r2;
    // 0x8001BFA8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BFAC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001BFB0: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001BFB4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8001BFB8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8001BFBC: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x8001BFC0: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001BFC4: jal         0x8001191C
    // 0x8001BFC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001191C(rdram, ctx);
        goto after_4;
    // 0x8001BFC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8001BFCC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BFD0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001BFD4: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x8001BFD8: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x8001BFDC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BFE0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8001BFE4: sw          $v0, 0x52B0($at)
    MEM_W(0X52B0, ctx->r1) = ctx->r2;
    // 0x8001BFE8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BFEC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001BFF0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001BFF4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001BFF8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001BFFC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001C000: b           L_8001C06C
    // 0x8001C004: sb          $zero, 0x52A5($at)
    MEM_B(0X52A5, ctx->r1) = 0;
        goto L_8001C06C;
    // 0x8001C004: sb          $zero, 0x52A5($at)
    MEM_B(0X52A5, ctx->r1) = 0;
L_8001C008:
    // 0x8001C008: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C00C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8001C010: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x8001C014: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8001C018: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001C01C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8001C020: lw          $a0, 0x52AC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X52AC);
    // 0x8001C024: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8001C028: jal         0x8001191C
    // 0x8001C02C: nop

    func_8001191C(rdram, ctx);
        goto after_5;
    // 0x8001C02C: nop

    after_5:
    // 0x8001C030: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C034: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001C038: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001C03C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8001C040: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001C044: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001C048: sw          $v0, 0x52B0($at)
    MEM_W(0X52B0, ctx->r1) = ctx->r2;
    // 0x8001C04C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C050: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8001C054: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8001C058: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x8001C05C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001C060: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001C064: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8001C068: sb          $t4, 0x52A5($at)
    MEM_B(0X52A5, ctx->r1) = ctx->r12;
L_8001C06C:
    // 0x8001C06C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C070: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001C074: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8001C078: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8001C07C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8001C080: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001C084: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001C088: sb          $t6, 0x52A4($at)
    MEM_B(0X52A4, ctx->r1) = ctx->r14;
    // 0x8001C08C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C090: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001C094: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x8001C098: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x8001C09C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001C0A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001C0A4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001C0A8: swc1        $f4, 0x52B4($at)
    MEM_W(0X52B4, ctx->r1) = ctx->f4.u32l;
    // 0x8001C0AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C0B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001C0B4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001C0B8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8001C0BC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001C0C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001C0C4: sb          $zero, 0x52A6($at)
    MEM_B(0X52A6, ctx->r1) = 0;
    // 0x8001C0C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C0CC: jal         0x8001A300
    // 0x8001C0D0: nop

    func_8001A300(rdram, ctx);
        goto after_6;
    // 0x8001C0D0: nop

    after_6:
    // 0x8001C0D4: b           L_8001C0DC
    // 0x8001C0D8: nop

        goto L_8001C0DC;
    // 0x8001C0D8: nop

L_8001C0DC:
    // 0x8001C0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C0E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001C0E4: jr          $ra
    // 0x8001C0E8: nop

    return;
    // 0x8001C0E8: nop

;}
RECOMP_FUNC void func_800019E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800019E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800019E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800019E8: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x800019EC: lui         $t7, 0x21
    ctx->r15 = S32(0X21 << 16);
    // 0x800019F0: addiu       $t7, $t7, -0x25A0
    ctx->r15 = ADD32(ctx->r15, -0X25A0);
    // 0x800019F4: addiu       $t6, $t6, 0x5F30
    ctx->r14 = ADD32(ctx->r14, 0X5F30);
    // 0x800019F8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800019FC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001A00: jal         0x8000068C
    // 0x80001A04: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001A04: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001A08: b           L_80001A10
    // 0x80001A0C: nop

        goto L_80001A10;
    // 0x80001A0C: nop

L_80001A10:
    // 0x80001A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001A14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001A18: jr          $ra
    // 0x80001A1C: nop

    return;
    // 0x80001A1C: nop

;}
RECOMP_FUNC void func_8002B9B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B9B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002B9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B9C0: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8002B9C4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8002B9C8:
    // 0x8002B9C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B9CC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8002B9D0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002B9D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B9D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002B9DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002B9E0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8002B9E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002B9E8: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8002B9EC: nop

    // 0x8002B9F0: beq         $t9, $zero, L_8002BA04
    if (ctx->r25 == 0) {
        // 0x8002B9F4: nop
    
            goto L_8002BA04;
    }
    // 0x8002B9F4: nop

    // 0x8002B9F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B9FC: jal         0x8001BB34
    // 0x8002BA00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8002BA00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_8002BA04:
    // 0x8002BA04: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BA08: nop

    // 0x8002BA0C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8002BA10: slti        $at, $t1, 0x4E
    ctx->r1 = SIGNED(ctx->r9) < 0X4E ? 1 : 0;
    // 0x8002BA14: bne         $at, $zero, L_8002B9C8
    if (ctx->r1 != 0) {
        // 0x8002BA18: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8002B9C8;
    }
    // 0x8002BA18: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8002BA1C: b           L_8002BA24
    // 0x8002BA20: nop

        goto L_8002BA24;
    // 0x8002BA20: nop

L_8002BA24:
    // 0x8002BA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BA28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002BA2C: jr          $ra
    // 0x8002BA30: nop

    return;
    // 0x8002BA30: nop

;}
RECOMP_FUNC void func_80023534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80023534: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80023538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002353C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80023540: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023544: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023548: nop

    // 0x8002354C: lbu         $t7, 0x10B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X10B);
    // 0x80023550: nop

    // 0x80023554: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x80023558: beq         $at, $zero, L_800235C0
    if (ctx->r1 == 0) {
        // 0x8002355C: nop
    
            goto L_800235C0;
    }
    // 0x8002355C: nop

    // 0x80023560: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023564: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80023568: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002356C: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80023570: nop

    // 0x80023574: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80023578: nop

    // 0x8002357C: bc1f        L_800235C0
    if (!c1cs) {
        // 0x80023580: nop
    
            goto L_800235C0;
    }
    // 0x80023580: nop

    // 0x80023584: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80023588: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x8002358C: nop

    // 0x80023590: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80023594: beq         $t0, $zero, L_800235C0
    if (ctx->r8 == 0) {
        // 0x80023598: nop
    
            goto L_800235C0;
    }
    // 0x80023598: nop

    // 0x8002359C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800235A0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x800235A4: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x800235A8: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800235AC: nop

    // 0x800235B0: beq         $t2, $at, L_800235C0
    if (ctx->r10 == ctx->r1) {
        // 0x800235B4: nop
    
            goto L_800235C0;
    }
    // 0x800235B4: nop

    // 0x800235B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800235BC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_800235C0:
    // 0x800235C0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800235C4: nop

    // 0x800235C8: beq         $t4, $zero, L_80023660
    if (ctx->r12 == 0) {
        // 0x800235CC: nop
    
            goto L_80023660;
    }
    // 0x800235CC: nop

    // 0x800235D0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800235D4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800235D8: nop

    // 0x800235DC: lh          $t6, 0x104($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X104);
    // 0x800235E0: nop

    // 0x800235E4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800235E8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800235EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800235F0: sb          $t7, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r15;
    // 0x800235F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800235F8: jal         0x800225D8
    // 0x800235FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800225D8(rdram, ctx);
        goto after_0;
    // 0x800235FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80023600: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80023604: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80023608: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002360C: bne         $t8, $at, L_80023658
    if (ctx->r24 != ctx->r1) {
        // 0x80023610: nop
    
            goto L_80023658;
    }
    // 0x80023610: nop

    // 0x80023614: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80023618: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8002361C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80023620: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80023624: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80023628: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002362C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80023630: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80023634: lh          $t1, 0x4234($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4234);
    // 0x80023638: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x8002363C: bne         $t1, $at, L_80023658
    if (ctx->r9 != ctx->r1) {
        // 0x80023640: nop
    
            goto L_80023658;
    }
    // 0x80023640: nop

    // 0x80023644: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80023648: lb          $t2, 0x5242($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5242);
    // 0x8002364C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023650: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80023654: sb          $t3, 0x5242($at)
    MEM_B(0X5242, ctx->r1) = ctx->r11;
L_80023658:
    // 0x80023658: b           L_8002373C
    // 0x8002365C: nop

        goto L_8002373C;
    // 0x8002365C: nop

L_80023660:
    // 0x80023660: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80023664: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80023668: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002366C: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80023670: nop

    // 0x80023674: bne         $t5, $at, L_8002373C
    if (ctx->r13 != ctx->r1) {
        // 0x80023678: nop
    
            goto L_8002373C;
    }
    // 0x80023678: nop

    // 0x8002367C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80023680: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80023684: nop

    // 0x80023688: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x8002368C: nop

    // 0x80023690: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80023694: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80023698: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8002369C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800236A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800236A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800236A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800236AC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800236B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800236B4: lb          $t0, 0x4252($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4252);
    // 0x800236B8: nop

    // 0x800236BC: beq         $t0, $zero, L_800236DC
    if (ctx->r8 == 0) {
        // 0x800236C0: nop
    
            goto L_800236DC;
    }
    // 0x800236C0: nop

    // 0x800236C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800236C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800236CC: sw          $t1, 0x7648($at)
    MEM_W(0X7648, ctx->r1) = ctx->r9;
    // 0x800236D0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800236D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800236D8: sb          $t2, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = ctx->r10;
L_800236DC:
    // 0x800236DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800236E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800236E4: sw          $t3, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r11;
    // 0x800236E8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800236EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800236F0: sw          $t4, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = ctx->r12;
    // 0x800236F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800236F8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800236FC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80023700: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80023704: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80023708: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8002370C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80023710: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80023714: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x80023718: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002371C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80023720: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80023724: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80023728: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002372C: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x80023730: nop

    // 0x80023734: jalr        $t9
    // 0x80023738: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80023738: nop

    after_1:
L_8002373C:
    // 0x8002373C: b           L_80023744
    // 0x80023740: nop

        goto L_80023744;
    // 0x80023740: nop

L_80023744:
    // 0x80023744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002374C: jr          $ra
    // 0x80023750: nop

    return;
    // 0x80023750: nop

;}
RECOMP_FUNC void func_80002424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80002428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000242C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80002430: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80002434: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80002438: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8000243C: nop

    // 0x80002440: lw          $t7, 0x278($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X278);
    // 0x80002444: nop

    // 0x80002448: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8000244C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80002450: nop

    // 0x80002454: sw          $zero, 0x278($t8)
    MEM_W(0X278, ctx->r24) = 0;
    // 0x80002458: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000245C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80002460: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80002464: nop

    // 0x80002468: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8000246C: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x80002470: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80002474: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80002478: jal         0x80002574
    // 0x8000247C: nop

    func_80002574(rdram, ctx);
        goto after_0;
    // 0x8000247C: nop

    after_0:
    // 0x80002480: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80002484: nop

    // 0x80002488: lw          $t3, 0x274($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X274);
    // 0x8000248C: lw          $t6, 0x278($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X278);
    // 0x80002490: sltiu       $t4, $t3, 0x1
    ctx->r12 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x80002494: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80002498: sltiu       $t7, $t6, 0x1
    ctx->r15 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x8000249C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x800024A0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800024A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800024A8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800024AC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800024B0: jal         0x80002890
    // 0x800024B4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80002890(rdram, ctx);
        goto after_1;
    // 0x800024B4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x800024B8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800024BC: nop

    // 0x800024C0: beq         $v0, $t0, L_800024DC
    if (ctx->r2 == ctx->r8) {
        // 0x800024C4: nop
    
            goto L_800024DC;
    }
    // 0x800024C4: nop

    // 0x800024C8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800024CC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800024D0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800024D4: jal         0x800026F4
    // 0x800024D8: nop

    func_800026F4(rdram, ctx);
        goto after_2;
    // 0x800024D8: nop

    after_2:
L_800024DC:
    // 0x800024DC: b           L_800024E4
    // 0x800024E0: nop

        goto L_800024E4;
    // 0x800024E0: nop

L_800024E4:
    // 0x800024E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800024E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800024EC: jr          $ra
    // 0x800024F0: nop

    return;
    // 0x800024F0: nop

;}
RECOMP_FUNC void GetSi_Status(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EEB0: lui         $t6, 0xA480
    ctx->r14 = S32(0XA480 << 16);
    // 0x8001EEB4: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x8001EEB8: nop

    // 0x8001EEBC: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x8001EEC0: jr          $ra
    // 0x8001EEC4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x8001EEC4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8001EEC8: jr          $ra
    // 0x8001EECC: nop

    return;
    // 0x8001EECC: nop

    // 0x8001EED0: jr          $ra
    // 0x8001EED4: nop

    return;
    // 0x8001EED4: nop

;}
RECOMP_FUNC void func_80003170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003170: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80003174: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80003178: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000317C: lw          $t7, 0x2D40($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D40);
    // 0x80003180: lw          $t6, 0x2D44($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D44);
    // 0x80003184: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80003188: lw          $t9, 0x2D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D48);
    // 0x8000318C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80003190: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x80003194: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80003198: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8000319C: b           L_800031AC
    // 0x800031A0: nop

        goto L_800031AC;
    // 0x800031A0: nop

    // 0x800031A4: b           L_800031AC
    // 0x800031A8: nop

        goto L_800031AC;
    // 0x800031A8: nop

L_800031AC:
    // 0x800031AC: jr          $ra
    // 0x800031B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800031B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
