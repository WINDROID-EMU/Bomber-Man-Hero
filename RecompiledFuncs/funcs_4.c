#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void Eeprom_Read(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001F81C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001F820: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001F824: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001F828: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001F82C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001F830: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8001F834: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001F838: jal         0x80039DB0
    // 0x8001F83C: nop

    osEepromProbe_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F83C: nop

    after_0:
    // 0x8001F840: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F844: beq         $v0, $at, L_8001F854
    if (ctx->r2 == ctx->r1) {
        // 0x8001F848: nop
    
            goto L_8001F854;
    }
    // 0x8001F848: nop

    // 0x8001F84C: b           L_8001F890
    // 0x8001F850: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001F890;
    // 0x8001F850: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F854:
    // 0x8001F854: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8001F858: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8001F85C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F860: lhu         $a3, 0x36($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X36);
    // 0x8001F864: jal         0x80039F60
    // 0x8001F868: nop

    osEepromLongRead_recomp(rdram, ctx);
        goto after_1;
    // 0x8001F868: nop

    after_1:
    // 0x8001F86C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8001F870: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8001F874: or          $t7, $t6, $s0
    ctx->r15 = ctx->r14 | ctx->r16;
    // 0x8001F878: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8001F87C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8001F880: b           L_8001F890
    // 0x8001F884: nop

        goto L_8001F890;
    // 0x8001F884: nop

    // 0x8001F888: b           L_8001F890
    // 0x8001F88C: nop

        goto L_8001F890;
    // 0x8001F88C: nop

L_8001F890:
    // 0x8001F890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F894: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001F898: jr          $ra
    // 0x8001F89C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001F89C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000C6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000C6F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000C6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000C700: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000C704: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000C708: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000C70C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000C710: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000C714: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C718: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C71C: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000C720: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000C724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000C728: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000C72C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000C730: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000C738: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x8000C73C: nop

    // 0x8000C740: beq         $t1, $at, L_8000C750
    if (ctx->r9 == ctx->r1) {
        // 0x8000C744: nop
    
            goto L_8000C750;
    }
    // 0x8000C744: nop

    // 0x8000C748: b           L_8000C7C4
    // 0x8000C74C: nop

        goto L_8000C7C4;
    // 0x8000C74C: nop

L_8000C750:
    // 0x8000C750: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C754: nop

    // 0x8000C758: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000C75C: nop

    // 0x8000C760: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8000C764: bne         $t4, $zero, L_8000C7AC
    if (ctx->r12 != 0) {
        // 0x8000C768: nop
    
            goto L_8000C7AC;
    }
    // 0x8000C768: nop

    // 0x8000C76C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C770: nop

    // 0x8000C774: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8000C778: nop

    // 0x8000C77C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8000C780: sw          $t7, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r15;
    // 0x8000C784: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C788: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000C78C: lb          $t9, 0x29($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X29);
    // 0x8000C790: nop

    // 0x8000C794: bne         $t9, $at, L_8000C7AC
    if (ctx->r25 != ctx->r1) {
        // 0x8000C798: nop
    
            goto L_8000C7AC;
    }
    // 0x8000C798: nop

    // 0x8000C79C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8000C7A0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x8000C7A4: jal         0x8000A7B4
    // 0x8000C7A8: nop

    func_8000A7B4(rdram, ctx);
        goto after_0;
    // 0x8000C7A8: nop

    after_0:
L_8000C7AC:
    // 0x8000C7AC: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x8000C7B0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000C7B4: nop

    // 0x8000C7B8: sb          $t0, 0x22($t1)
    MEM_B(0X22, ctx->r9) = ctx->r8;
    // 0x8000C7BC: b           L_8000C7C4
    // 0x8000C7C0: nop

        goto L_8000C7C4;
    // 0x8000C7C0: nop

L_8000C7C4:
    // 0x8000C7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C7C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000C7CC: jr          $ra
    // 0x8000C7D0: nop

    return;
    // 0x8000C7D0: nop

;}
RECOMP_FUNC void func_80006284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006284: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000628C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80006290: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80006294: nop

    // 0x80006298: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8000629C: nop

    // 0x800062A0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800062A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800062A8: nop

    // 0x800062AC: bne         $t8, $zero, L_800062C4
    if (ctx->r24 != 0) {
        // 0x800062B0: nop
    
            goto L_800062C4;
    }
    // 0x800062B0: nop

    // 0x800062B4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800062B8: sw          $zero, -0x5CA8($at)
    MEM_W(-0X5CA8, ctx->r1) = 0;
    // 0x800062BC: b           L_800064AC
    // 0x800062C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800064AC;
    // 0x800062C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800062C4:
    // 0x800062C4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800062C8: nop

    // 0x800062CC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x800062D0: beq         $t0, $zero, L_800062E8
    if (ctx->r8 == 0) {
        // 0x800062D4: nop
    
            goto L_800062E8;
    }
    // 0x800062D4: nop

    // 0x800062D8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800062DC: nop

    // 0x800062E0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800062E4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_800062E8:
    // 0x800062E8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800062EC: jal         0x8000D84C
    // 0x800062F0: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x800062F0: nop

    after_0:
    // 0x800062F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800062F8: sw          $v0, 0x2D50($at)
    MEM_W(0X2D50, ctx->r1) = ctx->r2;
    // 0x800062FC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80006300: lw          $t3, 0x2D50($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D50);
    // 0x80006304: nop

    // 0x80006308: bne         $t3, $zero, L_80006318
    if (ctx->r11 != 0) {
        // 0x8000630C: nop
    
            goto L_80006318;
    }
    // 0x8000630C: nop

    // 0x80006310: b           L_800064AC
    // 0x80006314: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800064AC;
    // 0x80006314: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006318:
    // 0x80006318: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8000631C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80006320: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80006324: nop

    // 0x80006328: sw          $t5, -0x5CA8($at)
    MEM_W(-0X5CA8, ctx->r1) = ctx->r13;
    // 0x8000632C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006330: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80006334: lw          $a1, 0x2D50($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2D50);
    // 0x80006338: lw          $a0, -0x5CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5CA8);
    // 0x8000633C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80006340: jal         0x80002CD0
    // 0x80006344: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x80006344: nop

    after_1:
    // 0x80006348: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8000634C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80006350: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80006354: nop

    // 0x80006358: blez        $t7, L_8000649C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8000635C: nop
    
            goto L_8000649C;
    }
    // 0x8000635C: nop

L_80006360:
    // 0x80006360: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80006364: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006368: lw          $t8, 0x2D50($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D50);
    // 0x8000636C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80006370: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80006374: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80006378: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000637C: nop

    // 0x80006380: lbu         $t3, 0xE($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XE);
    // 0x80006384: nop

    // 0x80006388: beq         $t3, $zero, L_80006398
    if (ctx->r11 == 0) {
        // 0x8000638C: nop
    
            goto L_80006398;
    }
    // 0x8000638C: nop

    // 0x80006390: b           L_80006478
    // 0x80006394: nop

        goto L_80006478;
    // 0x80006394: nop

L_80006398:
    // 0x80006398: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000639C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800063A0: sb          $t4, 0xE($t5)
    MEM_B(0XE, ctx->r13) = ctx->r12;
    // 0x800063A4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800063A8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800063AC: lw          $t9, 0x2D50($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D50);
    // 0x800063B0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800063B4: nop

    // 0x800063B8: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800063BC: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    // 0x800063C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800063C4: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800063C8: lw          $t2, 0x2D50($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D50);
    // 0x800063CC: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x800063D0: nop

    // 0x800063D4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800063D8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800063DC: sw          $t3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r11;
    // 0x800063E0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x800063E4: nop

    // 0x800063E8: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x800063EC: nop

    // 0x800063F0: beq         $t5, $zero, L_80006400
    if (ctx->r13 == 0) {
        // 0x800063F4: nop
    
            goto L_80006400;
    }
    // 0x800063F4: nop

    // 0x800063F8: b           L_80006478
    // 0x800063FC: nop

        goto L_80006478;
    // 0x800063FC: nop

L_80006400:
    // 0x80006400: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80006404: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80006408: sb          $t7, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r15;
    // 0x8000640C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80006410: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80006414: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80006418: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000641C: nop

    // 0x80006420: addu        $t3, $t6, $t2
    ctx->r11 = ADD32(ctx->r14, ctx->r10);
    // 0x80006424: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x80006428: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8000642C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80006430: lw          $t5, 0x2D50($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D50);
    // 0x80006434: lw          $t4, 0x10($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X10);
    // 0x80006438: nop

    // 0x8000643C: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80006440: sw          $t7, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r15;
    // 0x80006444: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80006448: nop

    // 0x8000644C: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x80006450: nop

    // 0x80006454: beq         $t1, $zero, L_80006478
    if (ctx->r9 == 0) {
        // 0x80006458: nop
    
            goto L_80006478;
    }
    // 0x80006458: nop

    // 0x8000645C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80006460: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80006464: lw          $t3, 0x2D50($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D50);
    // 0x80006468: lw          $t2, 0xC($t6)
    ctx->r10 = MEM_W(ctx->r14, 0XC);
    // 0x8000646C: nop

    // 0x80006470: addu        $t8, $t2, $t3
    ctx->r24 = ADD32(ctx->r10, ctx->r11);
    // 0x80006474: sw          $t8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r24;
L_80006478:
    // 0x80006478: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8000647C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80006480: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80006484: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80006488: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x8000648C: nop

    // 0x80006490: slt         $at, $t5, $t0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80006494: bne         $at, $zero, L_80006360
    if (ctx->r1 != 0) {
        // 0x80006498: nop
    
            goto L_80006360;
    }
    // 0x80006498: nop

L_8000649C:
    // 0x8000649C: b           L_800064AC
    // 0x800064A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800064AC;
    // 0x800064A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800064A4: b           L_800064AC
    // 0x800064A8: nop

        goto L_800064AC;
    // 0x800064A8: nop

L_800064AC:
    // 0x800064AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800064B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800064B4: jr          $ra
    // 0x800064B8: nop

    return;
    // 0x800064B8: nop

;}
RECOMP_FUNC void func_80003058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003058: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000305C: lw          $t6, -0x5D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5D5C);
    // 0x80003060: nop

    // 0x80003064: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80003068: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000306C: lw          $t7, -0x5D58($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5D58);
    // 0x80003070: nop

    // 0x80003074: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80003078: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000307C: lw          $t8, -0x5D54($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5D54);
    // 0x80003080: nop

    // 0x80003084: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x80003088: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000308C: lbu         $t9, -0x5D40($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X5D40);
    // 0x80003090: nop

    // 0x80003094: sb          $t9, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r25;
    // 0x80003098: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000309C: lw          $t0, -0x5D3C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5D3C);
    // 0x800030A0: nop

    // 0x800030A4: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
    // 0x800030A8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800030AC: lw          $t1, -0x5D18($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5D18);
    // 0x800030B0: nop

    // 0x800030B4: sw          $t1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r9;
    // 0x800030B8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800030BC: lw          $t2, -0x5D14($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5D14);
    // 0x800030C0: nop

    // 0x800030C4: sw          $t2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r10;
    // 0x800030C8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800030CC: lw          $t3, -0x5CFC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5CFC);
    // 0x800030D0: nop

    // 0x800030D4: sw          $t3, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r11;
    // 0x800030D8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800030DC: lw          $t4, -0x5CF8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5CF8);
    // 0x800030E0: nop

    // 0x800030E4: sw          $t4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r12;
    // 0x800030E8: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800030EC: lw          $t5, -0x5CF0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5CF0);
    // 0x800030F0: nop

    // 0x800030F4: sw          $t5, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r13;
    // 0x800030F8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800030FC: lhu         $t6, -0x5D38($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X5D38);
    // 0x80003100: nop

    // 0x80003104: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
    // 0x80003108: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000310C: lw          $t7, -0x5D34($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5D34);
    // 0x80003110: nop

    // 0x80003114: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    // 0x80003118: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000311C: lw          $t8, -0x5D30($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5D30);
    // 0x80003120: nop

    // 0x80003124: sw          $t8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r24;
    // 0x80003128: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000312C: lw          $t9, -0x5D2C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5D2C);
    // 0x80003130: nop

    // 0x80003134: sw          $t9, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r25;
    // 0x80003138: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000313C: lw          $t0, -0x5D60($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5D60);
    // 0x80003140: nop

    // 0x80003144: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x80003148: jr          $ra
    // 0x8000314C: nop

    return;
    // 0x8000314C: nop

    // 0x80003150: jr          $ra
    // 0x80003154: nop

    return;
    // 0x80003154: nop

;}
RECOMP_FUNC void func_8002617C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002617C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80026180: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80026184: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026188: lbu         $t6, 0x5118($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5118);
    // 0x8002618C: nop

    // 0x80026190: andi        $t7, $t6, 0xFC
    ctx->r15 = ctx->r14 & 0XFC;
    // 0x80026194: sb          $t7, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r15;
    // 0x80026198: lbu         $t8, 0x7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7);
    // 0x8002619C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800261A0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800261A4: ori         $t9, $t8, 0x3
    ctx->r25 = ctx->r24 | 0X3;
    // 0x800261A8: sb          $t9, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = ctx->r25;
    // 0x800261AC: b           L_800261B4
    // 0x800261B0: nop

        goto L_800261B4;
    // 0x800261B0: nop

L_800261B4:
    // 0x800261B4: jr          $ra
    // 0x800261B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800261B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Debug_ParseSetModeMenu(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EF60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002EF64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002EF68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002EF6C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8002EF70: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8002EF74: jal         0x8005F96C
    // 0x8002EF78: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_0;
    // 0x8002EF78: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x8002EF7C: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x8002EF80: lb          $s0, 0x7688($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X7688);
    // 0x8002EF84: nop

    // 0x8002EF88: beq         $s0, $zero, L_8002EFB0
    if (ctx->r16 == 0) {
        // 0x8002EF8C: nop
    
            goto L_8002EFB0;
    }
    // 0x8002EF8C: nop

    // 0x8002EF90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002EF94: beq         $s0, $at, L_8002EFC0
    if (ctx->r16 == ctx->r1) {
        // 0x8002EF98: nop
    
            goto L_8002EFC0;
    }
    // 0x8002EF98: nop

    // 0x8002EF9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002EFA0: beq         $s0, $at, L_8002EFD0
    if (ctx->r16 == ctx->r1) {
        // 0x8002EFA4: nop
    
            goto L_8002EFD0;
    }
    // 0x8002EFA4: nop

    // 0x8002EFA8: b           L_8002EFE0
    // 0x8002EFAC: nop

        goto L_8002EFE0;
    // 0x8002EFAC: nop

L_8002EFB0:
    // 0x8002EFB0: jal         0x8002EB58
    // 0x8002EFB4: nop

    Debug_SetMode_Menu(rdram, ctx);
        goto after_1;
    // 0x8002EFB4: nop

    after_1:
    // 0x8002EFB8: b           L_8002EFE0
    // 0x8002EFBC: nop

        goto L_8002EFE0;
    // 0x8002EFBC: nop

L_8002EFC0:
    // 0x8002EFC0: jal         0x8002EEB8
    // 0x8002EFC4: nop

    Debug_ResetMode_Menu(rdram, ctx);
        goto after_2;
    // 0x8002EFC4: nop

    after_2:
    // 0x8002EFC8: b           L_8002EFE0
    // 0x8002EFCC: nop

        goto L_8002EFE0;
    // 0x8002EFCC: nop

L_8002EFD0:
    // 0x8002EFD0: jal         0x8002EF00
    // 0x8002EFD4: nop

    Debug_SaveMode_Menu(rdram, ctx);
        goto after_3;
    // 0x8002EFD4: nop

    after_3:
    // 0x8002EFD8: b           L_8002EFE0
    // 0x8002EFDC: nop

        goto L_8002EFE0;
    // 0x8002EFDC: nop

L_8002EFE0:
    // 0x8002EFE0: jal         0x8005FA90
    // 0x8002EFE4: nop

    stub_8005FA90(rdram, ctx);
        goto after_4;
    // 0x8002EFE4: nop

    after_4:
    // 0x8002EFE8: b           L_8002EFF0
    // 0x8002EFEC: nop

        goto L_8002EFF0;
    // 0x8002EFEC: nop

L_8002EFF0:
    // 0x8002EFF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EFF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002EFF8: jr          $ra
    // 0x8002EFFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002EFFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000B5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B5DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000B5E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000B5E4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000B5E8: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x8000B5EC: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8000B5F0: blez        $t6, L_8000B718
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000B5F4: nop
    
            goto L_8000B718;
    }
    // 0x8000B5F4: nop

L_8000B5F8:
    // 0x8000B5F8: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x8000B5FC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B600: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000B604: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000B608: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B60C: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000B610: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000B614: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B618: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000B61C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8000B620: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B624: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000B628: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000B62C: nop

    // 0x8000B630: beq         $t2, $at, L_8000B640
    if (ctx->r10 == ctx->r1) {
        // 0x8000B634: nop
    
            goto L_8000B640;
    }
    // 0x8000B634: nop

    // 0x8000B638: b           L_8000B6F4
    // 0x8000B63C: nop

        goto L_8000B6F4;
    // 0x8000B63C: nop

L_8000B640:
    // 0x8000B640: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B644: nop

    // 0x8000B648: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000B64C: nop

    // 0x8000B650: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8000B654: beq         $t5, $zero, L_8000B688
    if (ctx->r13 == 0) {
        // 0x8000B658: nop
    
            goto L_8000B688;
    }
    // 0x8000B658: nop

    // 0x8000B65C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B660: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8000B664: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8000B668: nop

    // 0x8000B66C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8000B670: sw          $t8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r24;
    // 0x8000B674: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B678: nop

    // 0x8000B67C: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x8000B680: b           L_8000B6C8
    // 0x8000B684: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
        goto L_8000B6C8;
    // 0x8000B684: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
L_8000B688:
    // 0x8000B688: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B68C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B690: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B694: lh          $a1, 0x16($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X16);
    // 0x8000B698: jal         0x80035310
    // 0x8000B69C: nop

    alSndpSetSound(rdram, ctx);
        goto after_0;
    // 0x8000B69C: nop

    after_0:
    // 0x8000B6A0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B6A4: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B6A8: jal         0x800355A0
    // 0x8000B6AC: nop

    alSndpStop(rdram, ctx);
        goto after_1;
    // 0x8000B6AC: nop

    after_1:
    // 0x8000B6B0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B6B4: nop

    // 0x8000B6B8: lw          $t3, 0x8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8);
    // 0x8000B6BC: nop

    // 0x8000B6C0: ori         $t4, $t3, 0x2000
    ctx->r12 = ctx->r11 | 0X2000;
    // 0x8000B6C4: sw          $t4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r12;
L_8000B6C8:
    // 0x8000B6C8: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000B6CC: lw          $t5, 0x2D80($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D80);
    // 0x8000B6D0: nop

    // 0x8000B6D4: beq         $t5, $zero, L_8000B6E8
    if (ctx->r13 == 0) {
        // 0x8000B6D8: nop
    
            goto L_8000B6E8;
    }
    // 0x8000B6D8: nop

    // 0x8000B6DC: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8000B6E0: jal         0x80009B4C
    // 0x8000B6E4: nop

    func_80009B4C(rdram, ctx);
        goto after_2;
    // 0x8000B6E4: nop

    after_2:
L_8000B6E8:
    // 0x8000B6E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000B6EC: nop

    // 0x8000B6F0: sb          $zero, 0x29($t7)
    MEM_B(0X29, ctx->r15) = 0;
L_8000B6F4:
    // 0x8000B6F4: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x8000B6F8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000B6FC: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x8000B700: lw          $t1, -0x5CF4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CF4);
    // 0x8000B704: sll         $t0, $t6, 16
    ctx->r8 = S32(ctx->r14 << 16);
    // 0x8000B708: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8000B70C: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8000B710: bne         $at, $zero, L_8000B5F8
    if (ctx->r1 != 0) {
        // 0x8000B714: sh          $t6, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r14;
            goto L_8000B5F8;
    }
    // 0x8000B714: sh          $t6, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r14;
L_8000B718:
    // 0x8000B718: jal         0x80008360
    // 0x8000B71C: nop

    func_80008360(rdram, ctx);
        goto after_3;
    // 0x8000B71C: nop

    after_3:
    // 0x8000B720: b           L_8000B728
    // 0x8000B724: nop

        goto L_8000B728;
    // 0x8000B724: nop

L_8000B728:
    // 0x8000B728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B72C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000B730: jr          $ra
    // 0x8000B734: nop

    return;
    // 0x8000B734: nop

;}
RECOMP_FUNC void func_80000FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80000FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000FFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80001000: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80001004: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80001008: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000100C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80001010: lw          $t8, -0x43D0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X43D0);
    // 0x80001014: lui         $at, 0x7FD0
    ctx->r1 = S32(0X7FD0 << 16);
    // 0x80001018: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8000101C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80001020: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80001024: lui         $t1, 0x22
    ctx->r9 = S32(0X22 << 16);
    // 0x80001028: addiu       $t1, $t1, -0x6C60
    ctx->r9 = ADD32(ctx->r9, -0X6C60);
    // 0x8000102C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80001030: addiu       $a1, $a1, -0x1BB0
    ctx->r5 = ADD32(ctx->r5, -0X1BB0);
    // 0x80001034: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x80001038: jal         0x8000068C
    // 0x8000103C: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x8000103C: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    after_0:
    // 0x80001040: b           L_80001048
    // 0x80001044: nop

        goto L_80001048;
    // 0x80001044: nop

L_80001048:
    // 0x80001048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000104C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80001050: jr          $ra
    // 0x80001054: nop

    return;
    // 0x80001054: nop

;}
RECOMP_FUNC void Set_ObjView(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B640: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8002B644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B648: swc1        $f12, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f12.u32l;
    // 0x8002B64C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B650: swc1        $f14, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f14.u32l;
    // 0x8002B654: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8002B658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B65C: swc1        $f4, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f4.u32l;
    // 0x8002B660: b           L_8002B668
    // 0x8002B664: nop

        goto L_8002B668;
    // 0x8002B664: nop

L_8002B668:
    // 0x8002B668: jr          $ra
    // 0x8002B66C: nop

    return;
    // 0x8002B66C: nop

;}
RECOMP_FUNC void alSeqpStop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034728: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x8003472C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80034730: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80034734: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x80034738: jal         0x8003E80C
    // 0x8003473C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8003473C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034744: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80034748: jr          $ra
    // 0x8003474C: nop

    return;
    // 0x8003474C: nop

;}
RECOMP_FUNC void func_800145A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800145A8: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x800145AC: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x800145B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800145B4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x800145B8: jr          $ra
    // 0x800145BC: nop

    return;
    // 0x800145BC: nop

    // 0x800145C0: jr          $ra
    // 0x800145C4: nop

    return;
    // 0x800145C4: nop

;}
RECOMP_FUNC void func_80010350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80010354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010358: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001035C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80010360: nop

    // 0x80010364: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x80010368: nop

    // 0x8001036C: beq         $t7, $zero, L_800103E4
    if (ctx->r15 == 0) {
        // 0x80010370: nop
    
            goto L_800103E4;
    }
    // 0x80010370: nop

    // 0x80010374: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80010378: nop

    // 0x8001037C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80010380: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80010384: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80010388: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8001038C: nop

    // 0x80010390: blez        $t0, L_800103D8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80010394: nop
    
            goto L_800103D8;
    }
    // 0x80010394: nop

L_80010398:
    // 0x80010398: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001039C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x800103A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800103A4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800103A8: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x800103AC: jal         0x80010350
    // 0x800103B0: nop

    func_80010350(rdram, ctx);
        goto after_0;
    // 0x800103B0: nop

    after_0:
    // 0x800103B4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800103B8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800103BC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800103C0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800103C4: lw          $t9, 0x10($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X10);
    // 0x800103C8: nop

    // 0x800103CC: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800103D0: bne         $at, $zero, L_80010398
    if (ctx->r1 != 0) {
        // 0x800103D4: nop
    
            goto L_80010398;
    }
    // 0x800103D4: nop

L_800103D8:
    // 0x800103D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800103DC: jal         0x800309D0
    // 0x800103E0: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x800103E0: nop

    after_1:
L_800103E4:
    // 0x800103E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800103E8: jal         0x800309D0
    // 0x800103EC: nop

    free_game(rdram, ctx);
        goto after_2;
    // 0x800103EC: nop

    after_2:
    // 0x800103F0: b           L_800103F8
    // 0x800103F4: nop

        goto L_800103F8;
    // 0x800103F4: nop

L_800103F8:
    // 0x800103F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800103FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80010400: jr          $ra
    // 0x80010404: nop

    return;
    // 0x80010404: nop

;}
RECOMP_FUNC void func_800142F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800142F0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800142F4: lui         $t6, 0xFC00
    ctx->r14 = S32(0XFC00 << 16);
    // 0x800142F8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800142FC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80014300: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x80014304: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80014308: lw          $t4, 0x10($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X10);
    // 0x8001430C: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x80014310: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x80014314: sll         $t2, $t1, 15
    ctx->r10 = S32(ctx->r9 << 15);
    // 0x80014318: sll         $t9, $t8, 20
    ctx->r25 = S32(ctx->r24 << 20);
    // 0x8001431C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x80014320: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x80014324: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80014328: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8001432C: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x80014330: or          $t0, $t6, $t8
    ctx->r8 = ctx->r14 | ctx->r24;
    // 0x80014334: or          $t9, $t1, $t0
    ctx->r25 = ctx->r9 | ctx->r8;
    // 0x80014338: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8001433C: lw          $t2, 0x20($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X20);
    // 0x80014340: lw          $t5, 0x28($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X28);
    // 0x80014344: andi        $t4, $t2, 0xF
    ctx->r12 = ctx->r10 & 0XF;
    // 0x80014348: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8001434C: sll         $t3, $t4, 5
    ctx->r11 = S32(ctx->r12 << 5);
    // 0x80014350: andi        $t7, $t5, 0x1F
    ctx->r15 = ctx->r13 & 0X1F;
    // 0x80014354: or          $t6, $t3, $t7
    ctx->r14 = ctx->r11 | ctx->r15;
    // 0x80014358: or          $t1, $t8, $t6
    ctx->r9 = ctx->r24 | ctx->r14;
    // 0x8001435C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80014360: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80014364: nop

    // 0x80014368: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8001436C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x80014370: lw          $t5, 0xC($a1)
    ctx->r13 = MEM_W(ctx->r5, 0XC);
    // 0x80014374: andi        $t2, $t9, 0xF
    ctx->r10 = ctx->r25 & 0XF;
    // 0x80014378: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x8001437C: andi        $t3, $t5, 0x7
    ctx->r11 = ctx->r13 & 0X7;
    // 0x80014380: lw          $t9, 0x1C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X1C);
    // 0x80014384: sll         $t7, $t3, 15
    ctx->r15 = S32(ctx->r11 << 15);
    // 0x80014388: sll         $t4, $t2, 28
    ctx->r12 = S32(ctx->r10 << 28);
    // 0x8001438C: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x80014390: sll         $t1, $t6, 12
    ctx->r9 = S32(ctx->r14 << 12);
    // 0x80014394: or          $t0, $t8, $t1
    ctx->r8 = ctx->r24 | ctx->r9;
    // 0x80014398: sll         $t2, $t9, 9
    ctx->r10 = S32(ctx->r25 << 9);
    // 0x8001439C: or          $t5, $t2, $t0
    ctx->r13 = ctx->r10 | ctx->r8;
    // 0x800143A0: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x800143A4: lw          $t3, 0x24($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X24);
    // 0x800143A8: lw          $t6, 0x30($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X30);
    // 0x800143AC: andi        $t4, $t3, 0xF
    ctx->r12 = ctx->r11 & 0XF;
    // 0x800143B0: lw          $t9, 0x38($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X38);
    // 0x800143B4: sll         $t7, $t4, 24
    ctx->r15 = S32(ctx->r12 << 24);
    // 0x800143B8: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x800143BC: lw          $t5, 0x2C($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X2C);
    // 0x800143C0: or          $t1, $t7, $t8
    ctx->r9 = ctx->r15 | ctx->r24;
    // 0x800143C4: sll         $t2, $t9, 18
    ctx->r10 = S32(ctx->r25 << 18);
    // 0x800143C8: lw          $t7, 0x34($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X34);
    // 0x800143CC: or          $t0, $t1, $t2
    ctx->r8 = ctx->r9 | ctx->r10;
    // 0x800143D0: andi        $t3, $t5, 0x7
    ctx->r11 = ctx->r13 & 0X7;
    // 0x800143D4: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x800143D8: lw          $t1, 0x3C($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X3C);
    // 0x800143DC: or          $t6, $t0, $t4
    ctx->r14 = ctx->r8 | ctx->r12;
    // 0x800143E0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800143E4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800143E8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x800143EC: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x800143F0: or          $t3, $t5, $t2
    ctx->r11 = ctx->r13 | ctx->r10;
    // 0x800143F4: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x800143F8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800143FC: nop

    // 0x80014400: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x80014404: b           L_8001440C
    // 0x80014408: nop

        goto L_8001440C;
    // 0x80014408: nop

L_8001440C:
    // 0x8001440C: jr          $ra
    // 0x80014410: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80014410: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80011DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011DD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80011DD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80011DD8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80011DDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80011DE0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80011DE4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80011DE8: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80011DEC: nop

    // 0x80011DF0: blez        $t7, L_80011EB4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80011DF4: nop
    
            goto L_80011EB4;
    }
    // 0x80011DF4: nop

L_80011DF8:
    // 0x80011DF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80011DFC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80011E00: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80011E04: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x80011E08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80011E0C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80011E10: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80011E14: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80011E18: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80011E1C: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x80011E20: lw          $s0, 0x4($t3)
    ctx->r16 = MEM_W(ctx->r11, 0X4);
    // 0x80011E24: nop

    // 0x80011E28: beq         $s0, $at, L_80011E44
    if (ctx->r16 == ctx->r1) {
        // 0x80011E2C: nop
    
            goto L_80011E44;
    }
    // 0x80011E2C: nop

    // 0x80011E30: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x80011E34: beq         $s0, $at, L_80011E88
    if (ctx->r16 == ctx->r1) {
        // 0x80011E38: nop
    
            goto L_80011E88;
    }
    // 0x80011E38: nop

    // 0x80011E3C: b           L_80011E88
    // 0x80011E40: nop

        goto L_80011E88;
    // 0x80011E40: nop

L_80011E44:
    // 0x80011E44: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80011E48: nop

    // 0x80011E4C: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    // 0x80011E50: jal         0x800309D0
    // 0x80011E54: nop

    free_game(rdram, ctx);
        goto after_0;
    // 0x80011E54: nop

    after_0:
    // 0x80011E58: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80011E5C: nop

    // 0x80011E60: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    // 0x80011E64: jal         0x800309D0
    // 0x80011E68: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x80011E68: nop

    after_1:
    // 0x80011E6C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80011E70: nop

    // 0x80011E74: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x80011E78: jal         0x80011D18
    // 0x80011E7C: nop

    func_80011D18(rdram, ctx);
        goto after_2;
    // 0x80011E7C: nop

    after_2:
    // 0x80011E80: b           L_80011E90
    // 0x80011E84: nop

        goto L_80011E90;
    // 0x80011E84: nop

L_80011E88:
    // 0x80011E88: b           L_80011E90
    // 0x80011E8C: nop

        goto L_80011E90;
    // 0x80011E8C: nop

L_80011E90:
    // 0x80011E90: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80011E94: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80011E98: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80011E9C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80011EA0: lw          $t9, 0xC($t0)
    ctx->r25 = MEM_W(ctx->r8, 0XC);
    // 0x80011EA4: nop

    // 0x80011EA8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80011EAC: bne         $at, $zero, L_80011DF8
    if (ctx->r1 != 0) {
        // 0x80011EB0: nop
    
            goto L_80011DF8;
    }
    // 0x80011EB0: nop

L_80011EB4:
    // 0x80011EB4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80011EB8: nop

    // 0x80011EBC: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    // 0x80011EC0: jal         0x800309D0
    // 0x80011EC4: nop

    free_game(rdram, ctx);
        goto after_3;
    // 0x80011EC4: nop

    after_3:
    // 0x80011EC8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80011ECC: jal         0x800309D0
    // 0x80011ED0: nop

    free_game(rdram, ctx);
        goto after_4;
    // 0x80011ED0: nop

    after_4:
    // 0x80011ED4: b           L_80011EDC
    // 0x80011ED8: nop

        goto L_80011EDC;
    // 0x80011ED8: nop

L_80011EDC:
    // 0x80011EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80011EE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80011EE4: jr          $ra
    // 0x80011EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80011EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alSndpGetState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035530: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x80035534: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80035538: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003553C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80035540: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80035544: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80035548: jr          $ra
    // 0x8003554C: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
    return;
    // 0x8003554C: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
;}
RECOMP_FUNC void func_8001BD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BD44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001BD48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001BD4C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001BD50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001BD54: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8001BD58: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8001BD5C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001BD60: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001BD64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001BD68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001BD6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001BD70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001BD74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001BD78: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001BD7C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001BD80: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001BD84: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001BD88: lh          $t1, 0x4290($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4290);
    // 0x8001BD8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001BD90: beq         $t1, $at, L_8001BDA0
    if (ctx->r9 == ctx->r1) {
        // 0x8001BD94: nop
    
            goto L_8001BDA0;
    }
    // 0x8001BD94: nop

    // 0x8001BD98: b           L_8001BE5C
    // 0x8001BD9C: nop

        goto L_8001BE5C;
    // 0x8001BD9C: nop

L_8001BDA0:
    // 0x8001BDA0: jal         0x8001A988
    // 0x8001BDA4: nop

    func_8001A988(rdram, ctx);
        goto after_0;
    // 0x8001BDA4: nop

    after_0:
    // 0x8001BDA8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8001BDAC: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8001BDB0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8001BDB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8001BDB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001BDBC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8001BDC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001BDC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8001BDC8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8001BDCC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BDD0: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x8001BDD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8001BDD8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001BDDC: sh          $t2, 0x4290($at)
    MEM_H(0X4290, ctx->r1) = ctx->r10;
    // 0x8001BDE0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BDE4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BDE8: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001BDEC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001BDF0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001BDF4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001BDF8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001BDFC: sw          $t7, 0x5290($at)
    MEM_W(0X5290, ctx->r1) = ctx->r15;
    // 0x8001BE00: jal         0x8001A2A0
    // 0x8001BE04: nop

    func_8001A2A0(rdram, ctx);
        goto after_1;
    // 0x8001BE04: nop

    after_1:
    // 0x8001BE08: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BE0C: jal         0x800122F0
    // 0x8001BE10: nop

    func_800122F0(rdram, ctx);
        goto after_2;
    // 0x8001BE10: nop

    after_2:
    // 0x8001BE14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001BE18: sw          $v0, -0x1C54($at)
    MEM_W(-0X1C54, ctx->r1) = ctx->r2;
    // 0x8001BE1C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8001BE20: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8001BE24: jal         0x80010408
    // 0x8001BE28: nop

    func_80010408(rdram, ctx);
        goto after_3;
    // 0x8001BE28: nop

    after_3:
    // 0x8001BE2C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BE30: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001BE34: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x8001BE38: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x8001BE3C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001BE40: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001BE44: sw          $v0, 0x52AC($at)
    MEM_W(0X52AC, ctx->r1) = ctx->r2;
    // 0x8001BE48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001BE4C: jal         0x8001A300
    // 0x8001BE50: nop

    func_8001A300(rdram, ctx);
        goto after_4;
    // 0x8001BE50: nop

    after_4:
    // 0x8001BE54: b           L_8001BE5C
    // 0x8001BE58: nop

        goto L_8001BE5C;
    // 0x8001BE58: nop

L_8001BE5C:
    // 0x8001BE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001BE60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001BE64: jr          $ra
    // 0x8001BE68: nop

    return;
    // 0x8001BE68: nop

;}
RECOMP_FUNC void func_80026260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026260: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80026264: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80026268: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002626C: lbu         $t6, 0x5118($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5118);
    // 0x80026270: nop

    // 0x80026274: andi        $t7, $t6, 0xFC
    ctx->r15 = ctx->r14 & 0XFC;
    // 0x80026278: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8002627C: sb          $t8, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r24;
    // 0x80026280: lbu         $v0, 0x7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X7);
    // 0x80026284: b           L_80026294
    // 0x80026288: nop

        goto L_80026294;
    // 0x80026288: nop

    // 0x8002628C: b           L_80026294
    // 0x80026290: nop

        goto L_80026294;
    // 0x80026290: nop

L_80026294:
    // 0x80026294: jr          $ra
    // 0x80026298: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80026298: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002B2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B2D4: jr          $ra
    // 0x8002B2D8: nop

    return;
    // 0x8002B2D8: nop

    // 0x8002B2DC: jr          $ra
    // 0x8002B2E0: nop

    return;
    // 0x8002B2E0: nop

;}
RECOMP_FUNC void func_8001EE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EE64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001EE68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EE6C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001EE70:
    // 0x8001EE70: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001EE74: jal         0x8001A928
    // 0x8001EE78: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8001EE78: nop

    after_0:
    // 0x8001EE7C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001EE80: nop

    // 0x8001EE84: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001EE88: sltiu       $at, $t7, 0xCF
    ctx->r1 = ctx->r15 < 0XCF ? 1 : 0;
    // 0x8001EE8C: bne         $at, $zero, L_8001EE70
    if (ctx->r1 != 0) {
        // 0x8001EE90: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_8001EE70;
    }
    // 0x8001EE90: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001EE94: b           L_8001EE9C
    // 0x8001EE98: nop

        goto L_8001EE9C;
    // 0x8001EE98: nop

L_8001EE9C:
    // 0x8001EE9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EEA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001EEA4: jr          $ra
    // 0x8001EEA8: nop

    return;
    // 0x8001EEA8: nop

;}
RECOMP_FUNC void func_80000CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000CF4: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000CF8: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000CFC: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000D00: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000D04: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000D08: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000D0C: jal         0x8000068C
    // 0x80000D10: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000D10: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000D14: lui         $t8, 0x15
    ctx->r24 = S32(0X15 << 16);
    // 0x80000D18: lui         $t9, 0x15
    ctx->r25 = S32(0X15 << 16);
    // 0x80000D1C: addiu       $t9, $t9, 0x6F90
    ctx->r25 = ADD32(ctx->r25, 0X6F90);
    // 0x80000D20: addiu       $t8, $t8, 0x3B70
    ctx->r24 = ADD32(ctx->r24, 0X3B70);
    // 0x80000D24: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000D28: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000D2C: jal         0x8000068C
    // 0x80000D30: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000D30: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000D34: b           L_80000D3C
    // 0x80000D38: nop

        goto L_80000D3C;
    // 0x80000D38: nop

L_80000D3C:
    // 0x80000D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000D44: jr          $ra
    // 0x80000D48: nop

    return;
    // 0x80000D48: nop

;}
RECOMP_FUNC void _realloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800303C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800303CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800303D0: jal         0x80030AA0
    // 0x800303D4: nop

    realloc_recomp(rdram, ctx);
        goto after_0;
    // 0x800303D4: nop

    after_0:
    // 0x800303D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800303DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800303E0: jr          $ra
    // 0x800303E4: nop

    return;
    // 0x800303E4: nop

;}
RECOMP_FUNC void func_80015944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80015944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80015948: lwc1        $f5, 0x40($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8001594C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80015950: lwc1        $f7, 0x58($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80015954: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80015958: lwc1        $f17, 0x28($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8001595C: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x80015960: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80015964: mul.d       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x80015968: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001596C: lwc1        $f9, 0x38($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80015970: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80015974: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80015978: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x8001597C: mul.d       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x80015980: sub.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d - ctx->f4.d;
    // 0x80015984: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80015988: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8001598C: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x80015990: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80015994: lwc1        $f11, 0x50($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80015998: nop

    // 0x8001599C: mul.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800159A0: add.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f8.d + ctx->f6.d;
    // 0x800159A4: nop

    // 0x800159A8: div.d       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x800159AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800159B0: nop

    // 0x800159B4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800159B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800159BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800159C0: nop

    // 0x800159C4: cvt.w.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_D(ctx->f10.d);
    // 0x800159C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800159CC: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x800159D0: nop

    // 0x800159D4: lwc1        $f9, 0x30($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800159D8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800159DC: lwc1        $f7, 0x48($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x800159E0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800159E4: lwc1        $f5, 0x28($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800159E8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800159EC: sub.d       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f8.d - ctx->f6.d;
    // 0x800159F0: lwc1        $f19, 0x40($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800159F4: mul.d       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x800159F8: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800159FC: sub.d       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f6.d - ctx->f12.d;
    // 0x80015A00: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80015A04: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80015A08: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80015A0C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80015A10: lwc1        $f19, 0x58($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80015A14: sub.d       $f16, $f12, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f12.d - ctx->f8.d;
    // 0x80015A18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015A1C: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x80015A20: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80015A24: mul.d       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80015A28: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x80015A2C: nop

    // 0x80015A30: div.d       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x80015A34: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80015A38: nop

    // 0x80015A3C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80015A40: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015A44: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015A48: nop

    // 0x80015A4C: cvt.w.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_D(ctx->f18.d);
    // 0x80015A50: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80015A54: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x80015A58: nop

    // 0x80015A5C: lwc1        $f7, 0x38($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80015A60: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80015A64: lwc1        $f11, 0x50($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80015A68: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80015A6C: lwc1        $f19, 0x30($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80015A70: sub.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d - ctx->f10.d;
    // 0x80015A74: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80015A78: mul.d       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x80015A7C: sub.d       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f10.d - ctx->f14.d;
    // 0x80015A80: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80015A84: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x80015A88: mul.d       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80015A8C: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80015A90: lwc1        $f19, 0x48($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80015A94: sub.d       $f16, $f14, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f14.d - ctx->f6.d;
    // 0x80015A98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80015A9C: add.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f8.d + ctx->f4.d;
    // 0x80015AA0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80015AA4: mul.d       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f16.d);
    // 0x80015AA8: add.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f10.d + ctx->f8.d;
    // 0x80015AAC: nop

    // 0x80015AB0: div.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80015AB4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80015AB8: nop

    // 0x80015ABC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80015AC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015AC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015AC8: nop

    // 0x80015ACC: cvt.w.d     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_D(ctx->f18.d);
    // 0x80015AD0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80015AD4: swc1        $f16, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f16.u32l;
    // 0x80015AD8: nop

    // 0x80015ADC: lwc1        $f11, 0x38($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80015AE0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80015AE4: lwc1        $f9, 0x58($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80015AE8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80015AEC: lwc1        $f7, 0x40($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80015AF0: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x80015AF4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80015AF8: lwc1        $f19, 0x50($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80015AFC: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80015B00: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80015B04: mul.d       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x80015B08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80015B0C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80015B10: sub.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = ctx->f4.d - ctx->f16.d;
    // 0x80015B14: mul.d       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f12.d);
    // 0x80015B18: nop

    // 0x80015B1C: div.d       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = DIV_D(ctx->f8.d, ctx->f6.d);
    // 0x80015B20: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80015B24: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x80015B28: lwc1        $f5, 0x40($sp)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80015B2C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80015B30: lwc1        $f17, 0x48($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80015B34: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80015B38: lwc1        $f9, 0x30($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80015B3C: mul.d       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x80015B40: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80015B44: lwc1        $f7, 0x58($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80015B48: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80015B4C: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80015B50: mul.d       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x80015B54: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015B58: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80015B5C: sub.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d - ctx->f18.d;
    // 0x80015B60: mul.d       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x80015B64: nop

    // 0x80015B68: div.d       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f16.d, ctx->f8.d);
    // 0x80015B6C: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x80015B70: swc1        $f7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x80015B74: lwc1        $f11, 0x30($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80015B78: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80015B7C: lwc1        $f19, 0x50($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80015B80: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80015B84: lwc1        $f17, 0x38($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80015B88: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80015B8C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80015B90: lwc1        $f9, 0x48($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80015B94: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80015B98: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80015B9C: mul.d       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f16.d, ctx->f8.d);
    // 0x80015BA0: lwc1        $f19, 0x28($sp)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80015BA4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80015BA8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80015BAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015BB0: sub.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d - ctx->f6.d;
    // 0x80015BB4: mul.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80015BB8: nop

    // 0x80015BBC: div.d       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f8.d);
    // 0x80015BC0: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80015BC4: swc1        $f5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x80015BC8: lwc1        $f7, 0x10($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80015BCC: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80015BD0: lwc1        $f11, 0x8($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x80015BD4: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80015BD8: lwc1        $f17, 0x0($sp)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r29, 0X0);
    // 0x80015BDC: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015BE0: add.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f6.d + ctx->f10.d;
    // 0x80015BE4: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x80015BE8: add.d       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f18.d + ctx->f16.d;
    // 0x80015BEC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80015BF0: nop

    // 0x80015BF4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80015BF8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015BFC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015C00: nop

    // 0x80015C04: cvt.w.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_D(ctx->f8.d);
    // 0x80015C08: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80015C0C: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80015C10: nop

    // 0x80015C14: b           L_80015C1C
    // 0x80015C18: nop

        goto L_80015C1C;
    // 0x80015C18: nop

L_80015C1C:
    // 0x80015C1C: jr          $ra
    // 0x80015C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80015C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80019C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80019C84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80019C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80019C8C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80019C90:
    // 0x80019C90: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80019C94: jal         0x80019BC8
    // 0x80019C98: nop

    func_80019BC8(rdram, ctx);
        goto after_0;
    // 0x80019C98: nop

    after_0:
    // 0x80019C9C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80019CA0: nop

    // 0x80019CA4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80019CA8: slti        $at, $t7, 0x100
    ctx->r1 = SIGNED(ctx->r15) < 0X100 ? 1 : 0;
    // 0x80019CAC: bne         $at, $zero, L_80019C90
    if (ctx->r1 != 0) {
        // 0x80019CB0: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80019C90;
    }
    // 0x80019CB0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80019CB4: b           L_80019CBC
    // 0x80019CB8: nop

        goto L_80019CBC;
    // 0x80019CB8: nop

L_80019CBC:
    // 0x80019CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80019CC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80019CC4: jr          $ra
    // 0x80019CC8: nop

    return;
    // 0x80019CC8: nop

;}
RECOMP_FUNC void func_80001894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000189C: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x800018A0: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x800018A4: addiu       $t7, $t7, -0x7290
    ctx->r15 = ADD32(ctx->r15, -0X7290);
    // 0x800018A8: addiu       $t6, $t6, 0x7E80
    ctx->r14 = ADD32(ctx->r14, 0X7E80);
    // 0x800018AC: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x800018B0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x800018B4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800018B8: jal         0x8000068C
    // 0x800018BC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800018BC: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    after_0:
    // 0x800018C0: b           L_800018C8
    // 0x800018C4: nop

        goto L_800018C8;
    // 0x800018C4: nop

L_800018C8:
    // 0x800018C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800018CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800018D0: jr          $ra
    // 0x800018D4: nop

    return;
    // 0x800018D4: nop

;}
RECOMP_FUNC void func_80022B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022B54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80022B58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80022B5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80022B60: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80022B64: nop

    // 0x80022B68: lh          $t7, 0x104($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X104);
    // 0x80022B6C: nop

    // 0x80022B70: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80022B74: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80022B78: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80022B7C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80022B80: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80022B84: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80022B88: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80022B8C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80022B90: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80022B94: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80022B98: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80022B9C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80022BA0: nop

    // 0x80022BA4: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x80022BA8: nop

    // 0x80022BAC: addiu       $t4, $t3, -0x20
    ctx->r12 = ADD32(ctx->r11, -0X20);
    // 0x80022BB0: sltiu       $at, $t4, 0x19
    ctx->r1 = ctx->r12 < 0X19 ? 1 : 0;
    // 0x80022BB4: beq         $at, $zero, L_80023334
    if (ctx->r1 == 0) {
        // 0x80022BB8: nop
    
            goto L_80023334;
    }
    // 0x80022BB8: nop

    // 0x80022BBC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80022BC0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80022BC4: addu        $at, $at, $t4
    gpr jr_addend_80022BD0 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80022BC8: lw          $t4, -0x42C0($at)
    ctx->r12 = ADD32(ctx->r1, -0X42C0);
    // 0x80022BCC: nop

    // 0x80022BD0: jr          $t4
    // 0x80022BD4: nop

    switch (jr_addend_80022BD0 >> 2) {
        case 0: goto L_80022BD8; break;
        case 1: goto L_80022C34; break;
        case 2: goto L_80022C80; break;
        case 3: goto L_80022CC0; break;
        case 4: goto L_80022D1C; break;
        case 5: goto L_80022D54; break;
        case 6: goto L_80022E78; break;
        case 7: goto L_80022EB8; break;
        case 8: goto L_80022F0C; break;
        case 9: goto L_8002319C; break;
        case 10: goto L_800231E0; break;
        case 11: goto L_80023224; break;
        case 12: goto L_80022F38; break;
        case 13: goto L_80023268; break;
        case 14: goto L_800232AC; break;
        case 15: goto L_80022FA0; break;
        case 16: goto L_80022CA0; break;
        case 17: goto L_80022D54; break;
        case 18: goto L_80022FCC; break;
        case 19: goto L_80023028; break;
        case 20: goto L_800232F0; break;
        case 21: goto L_80023074; break;
        case 22: goto L_800230A0; break;
        case 23: goto L_800230F4; break;
        case 24: goto L_80023148; break;
        default: switch_error(__func__, 0x80022BD0, 0x8004BD40);
    }
    // 0x80022BD4: nop

L_80022BD8:
    // 0x80022BD8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80022BDC: lb          $t5, 0x523F($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X523F);
    // 0x80022BE0: nop

    // 0x80022BE4: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80022BE8: beq         $at, $zero, L_80022C04
    if (ctx->r1 == 0) {
        // 0x80022BEC: nop
    
            goto L_80022C04;
    }
    // 0x80022BEC: nop

    // 0x80022BF0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80022BF4: lb          $t6, 0x523F($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523F);
    // 0x80022BF8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022BFC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80022C00: sb          $t7, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r15;
L_80022C04:
    // 0x80022C04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022C08: sb          $zero, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = 0;
    // 0x80022C0C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022C10: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x80022C14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022C18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022C1C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022C20: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022C24: jal         0x800178D4
    // 0x80022C28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80022C28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80022C2C: b           L_80023334
    // 0x80022C30: nop

        goto L_80023334;
    // 0x80022C30: nop

L_80022C34:
    // 0x80022C34: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80022C38: lb          $t8, 0x5240($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5240);
    // 0x80022C3C: nop

    // 0x80022C40: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x80022C44: beq         $at, $zero, L_80022C60
    if (ctx->r1 == 0) {
        // 0x80022C48: nop
    
            goto L_80022C60;
    }
    // 0x80022C48: nop

    // 0x80022C4C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80022C50: lb          $t9, 0x5240($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5240);
    // 0x80022C54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022C58: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80022C5C: sb          $t0, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r8;
L_80022C60:
    // 0x80022C60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022C68: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022C6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022C70: jal         0x800178D4
    // 0x80022C74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80022C74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80022C78: b           L_80023334
    // 0x80022C7C: nop

        goto L_80023334;
    // 0x80022C7C: nop

L_80022C80:
    // 0x80022C80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022C88: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022C8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022C90: jal         0x800178D4
    // 0x80022C94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80022C94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80022C98: b           L_80023334
    // 0x80022C9C: nop

        goto L_80023334;
    // 0x80022C9C: nop

L_80022CA0:
    // 0x80022CA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022CA8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022CAC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022CB0: jal         0x800178D4
    // 0x80022CB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80022CB4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80022CB8: b           L_80023334
    // 0x80022CBC: nop

        goto L_80023334;
    // 0x80022CBC: nop

L_80022CC0:
    // 0x80022CC0: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80022CC4: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80022CC8: lb          $t2, 0x5245($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5245);
    // 0x80022CCC: lb          $t1, 0x5244($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X5244);
    // 0x80022CD0: nop

    // 0x80022CD4: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80022CD8: beq         $at, $zero, L_80022CF4
    if (ctx->r1 == 0) {
        // 0x80022CDC: nop
    
            goto L_80022CF4;
    }
    // 0x80022CDC: nop

    // 0x80022CE0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80022CE4: lb          $t3, 0x5244($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X5244);
    // 0x80022CE8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022CEC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80022CF0: sb          $t4, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r12;
L_80022CF4:
    // 0x80022CF4: jal         0x8008424C
    // 0x80022CF8: nop

    func_8008424C(rdram, ctx);
        goto after_4;
    // 0x80022CF8: nop

    after_4:
    // 0x80022CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022D00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022D04: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80022D08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022D0C: jal         0x800178D4
    // 0x80022D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80022D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80022D14: b           L_80023334
    // 0x80022D18: nop

        goto L_80023334;
    // 0x80022D18: nop

L_80022D1C:
    // 0x80022D1C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80022D20: lb          $t5, 0x5245($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5245);
    // 0x80022D24: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022D28: sb          $t5, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r13;
    // 0x80022D2C: jal         0x8008424C
    // 0x80022D30: nop

    func_8008424C(rdram, ctx);
        goto after_6;
    // 0x80022D30: nop

    after_6:
    // 0x80022D34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022D38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022D3C: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80022D40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022D44: jal         0x800178D4
    // 0x80022D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x80022D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80022D4C: b           L_80023334
    // 0x80022D50: nop

        goto L_80023334;
    // 0x80022D50: nop

L_80022D54:
    // 0x80022D54: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80022D58: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80022D5C: lh          $t7, 0xE4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE4);
    // 0x80022D60: nop

    // 0x80022D64: bne         $t7, $at, L_80022D78
    if (ctx->r15 != ctx->r1) {
        // 0x80022D68: nop
    
            goto L_80022D78;
    }
    // 0x80022D68: nop

    // 0x80022D6C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80022D70: b           L_80022D80
    // 0x80022D74: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_80022D80;
    // 0x80022D74: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80022D78:
    // 0x80022D78: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80022D7C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80022D80:
    // 0x80022D80: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80022D84: lbu         $t0, 0x5241($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5241);
    // 0x80022D88: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80022D8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022D90: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80022D94: sb          $t2, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = ctx->r10;
    // 0x80022D98: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80022D9C: lbu         $t3, 0x5241($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X5241);
    // 0x80022DA0: nop

    // 0x80022DA4: slti        $at, $t3, 0xC8
    ctx->r1 = SIGNED(ctx->r11) < 0XC8 ? 1 : 0;
    // 0x80022DA8: beq         $at, $zero, L_80022DD0
    if (ctx->r1 == 0) {
        // 0x80022DAC: nop
    
            goto L_80022DD0;
    }
    // 0x80022DAC: nop

    // 0x80022DB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022DB8: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x80022DBC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022DC0: jal         0x800178D4
    // 0x80022DC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_8;
    // 0x80022DC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x80022DC8: b           L_80022E70
    // 0x80022DCC: nop

        goto L_80022E70;
    // 0x80022DCC: nop

L_80022DD0:
    // 0x80022DD0: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80022DD4: lb          $t4, 0x5245($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5245);
    // 0x80022DD8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80022DDC: beq         $t4, $at, L_80022E24
    if (ctx->r12 == ctx->r1) {
        // 0x80022DE0: nop
    
            goto L_80022E24;
    }
    // 0x80022DE0: nop

    // 0x80022DE4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80022DE8: lb          $t5, 0x5245($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5245);
    // 0x80022DEC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022DF0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80022DF4: sb          $t6, 0x5245($at)
    MEM_B(0X5245, ctx->r1) = ctx->r14;
    // 0x80022DF8: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80022DFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80022E00: sw          $t7, 0x7A54($at)
    MEM_W(0X7A54, ctx->r1) = ctx->r15;
    // 0x80022E04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022E0C: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80022E10: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022E14: jal         0x800178D4
    // 0x80022E18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_9;
    // 0x80022E18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80022E1C: b           L_80022E5C
    // 0x80022E20: nop

        goto L_80022E5C;
    // 0x80022E20: nop

L_80022E24:
    // 0x80022E24: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80022E28: lbu         $t8, 0x5243($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5243);
    // 0x80022E2C: nop

    // 0x80022E30: slti        $at, $t8, 0x63
    ctx->r1 = SIGNED(ctx->r24) < 0X63 ? 1 : 0;
    // 0x80022E34: beq         $at, $zero, L_80022E5C
    if (ctx->r1 == 0) {
        // 0x80022E38: nop
    
            goto L_80022E5C;
    }
    // 0x80022E38: nop

    // 0x80022E3C: jal         0x80088248
    // 0x80022E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80088248(rdram, ctx);
        goto after_10;
    // 0x80022E40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80022E44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022E4C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x80022E50: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022E54: jal         0x800178D4
    // 0x80022E58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x80022E58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
L_80022E5C:
    // 0x80022E5C: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80022E60: lbu         $t9, 0x5241($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5241);
    // 0x80022E64: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022E68: addiu       $t0, $t9, -0xC8
    ctx->r8 = ADD32(ctx->r25, -0XC8);
    // 0x80022E6C: sb          $t0, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = ctx->r8;
L_80022E70:
    // 0x80022E70: b           L_80023334
    // 0x80022E74: nop

        goto L_80023334;
    // 0x80022E74: nop

L_80022E78:
    // 0x80022E78: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80022E7C: lbu         $t1, 0x5243($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5243);
    // 0x80022E80: nop

    // 0x80022E84: slti        $at, $t1, 0x63
    ctx->r1 = SIGNED(ctx->r9) < 0X63 ? 1 : 0;
    // 0x80022E88: beq         $at, $zero, L_80022E98
    if (ctx->r1 == 0) {
        // 0x80022E8C: nop
    
            goto L_80022E98;
    }
    // 0x80022E8C: nop

    // 0x80022E90: jal         0x80088248
    // 0x80022E94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80088248(rdram, ctx);
        goto after_12;
    // 0x80022E94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
L_80022E98:
    // 0x80022E98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022EA0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x80022EA4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022EA8: jal         0x800178D4
    // 0x80022EAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_13;
    // 0x80022EAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x80022EB0: b           L_80023334
    // 0x80022EB4: nop

        goto L_80023334;
    // 0x80022EB4: nop

L_80022EB8:
    // 0x80022EB8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80022EBC: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x80022EC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80022EC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80022EC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80022ECC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80022ED0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80022ED4: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x80022ED8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80022EDC: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80022EE0: lh          $a1, 0x41F6($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X41F6);
    // 0x80022EE4: jal         0x80025568
    // 0x80022EE8: nop

    func_80025568(rdram, ctx);
        goto after_14;
    // 0x80022EE8: nop

    after_14:
    // 0x80022EEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022EF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022EF4: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022EF8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022EFC: jal         0x800178D4
    // 0x80022F00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_15;
    // 0x80022F00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x80022F04: b           L_80023334
    // 0x80022F08: nop

        goto L_80023334;
    // 0x80022F08: nop

L_80022F0C:
    // 0x80022F0C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80022F10: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022F14: sb          $t4, 0x5246($at)
    MEM_B(0X5246, ctx->r1) = ctx->r12;
    // 0x80022F18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022F1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022F20: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022F24: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022F28: jal         0x800178D4
    // 0x80022F2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_16;
    // 0x80022F2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x80022F30: b           L_80023334
    // 0x80022F34: nop

        goto L_80023334;
    // 0x80022F34: nop

L_80022F38:
    // 0x80022F38: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80022F3C: lb          $t5, 0x5242($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5242);
    // 0x80022F40: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022F44: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80022F48: sb          $t6, 0x5242($at)
    MEM_B(0X5242, ctx->r1) = ctx->r14;
    // 0x80022F4C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80022F50: lb          $t7, 0x5242($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5242);
    // 0x80022F54: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80022F58: bne         $t7, $at, L_80022F80
    if (ctx->r15 != ctx->r1) {
        // 0x80022F5C: nop
    
            goto L_80022F80;
    }
    // 0x80022F5C: nop

    // 0x80022F60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022F68: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x80022F6C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022F70: jal         0x800178D4
    // 0x80022F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_17;
    // 0x80022F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x80022F78: b           L_80022F98
    // 0x80022F7C: nop

        goto L_80022F98;
    // 0x80022F7C: nop

L_80022F80:
    // 0x80022F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022F84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022F88: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x80022F8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022F90: jal         0x800178D4
    // 0x80022F94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_18;
    // 0x80022F94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_18:
L_80022F98:
    // 0x80022F98: b           L_80023334
    // 0x80022F9C: nop

        goto L_80023334;
    // 0x80022F9C: nop

L_80022FA0:
    // 0x80022FA0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80022FA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80022FA8: sb          $t8, 0x5247($at)
    MEM_B(0X5247, ctx->r1) = ctx->r24;
    // 0x80022FAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80022FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80022FB4: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80022FB8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80022FBC: jal         0x800178D4
    // 0x80022FC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_19;
    // 0x80022FC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
    // 0x80022FC4: b           L_80023334
    // 0x80022FC8: nop

        goto L_80023334;
    // 0x80022FC8: nop

L_80022FCC:
    // 0x80022FCC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80022FD0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80022FD4: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x80022FD8: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x80022FDC: nop

    // 0x80022FE0: beq         $t0, $at, L_80023020
    if (ctx->r8 == ctx->r1) {
        // 0x80022FE4: nop
    
            goto L_80023020;
    }
    // 0x80022FE4: nop

    // 0x80022FE8: lh          $t1, 0x108($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X108);
    // 0x80022FEC: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80022FF0: beq         $t1, $at, L_80023020
    if (ctx->r9 == ctx->r1) {
        // 0x80022FF4: nop
    
            goto L_80023020;
    }
    // 0x80022FF4: nop

    // 0x80022FF8: beq         $t1, $zero, L_80023020
    if (ctx->r9 == 0) {
        // 0x80022FFC: nop
    
            goto L_80023020;
    }
    // 0x80022FFC: nop

    // 0x80023000: jal         0x8028491C
    // 0x80023004: nop

    func_8028491C_code_extra_0(rdram, ctx);
        goto after_20;
    // 0x80023004: nop

    after_20:
    // 0x80023008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002300C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023010: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023014: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023018: jal         0x800178D4
    // 0x8002301C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_21;
    // 0x8002301C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_21:
L_80023020:
    // 0x80023020: b           L_80023334
    // 0x80023024: nop

        goto L_80023334;
    // 0x80023024: nop

L_80023028:
    // 0x80023028: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8002302C: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80023030: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80023034: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80023038: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8002303C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80023040: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80023044: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80023048: lh          $a0, 0x41F6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X41F6);
    // 0x8002304C: jal         0x800766B4
    // 0x80023050: nop

    func_800766B4(rdram, ctx);
        goto after_22;
    // 0x80023050: nop

    after_22:
    // 0x80023054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002305C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023060: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023064: jal         0x800178D4
    // 0x80023068: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_23;
    // 0x80023068: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_23:
    // 0x8002306C: b           L_80023334
    // 0x80023070: nop

        goto L_80023334;
    // 0x80023070: nop

L_80023074:
    // 0x80023074: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80023078: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002307C: sb          $t4, 0x5248($at)
    MEM_B(0X5248, ctx->r1) = ctx->r12;
    // 0x80023080: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023084: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023088: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x8002308C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023090: jal         0x800178D4
    // 0x80023094: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_24;
    // 0x80023094: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_24:
    // 0x80023098: b           L_80023334
    // 0x8002309C: nop

        goto L_80023334;
    // 0x8002309C: nop

L_800230A0:
    // 0x800230A0: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800230A4: lui         $a2, 0x8015
    ctx->r6 = S32(0X8015 << 16);
    // 0x800230A8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800230AC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800230B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800230B4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800230B8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800230BC: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x800230C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800230C4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800230C8: lh          $a2, 0x41F6($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X41F6);
    // 0x800230CC: jal         0x80025810
    // 0x800230D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80025810(rdram, ctx);
        goto after_25;
    // 0x800230D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x800230D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800230D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800230DC: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x800230E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800230E4: jal         0x800178D4
    // 0x800230E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_26;
    // 0x800230E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_26:
    // 0x800230EC: b           L_80023334
    // 0x800230F0: nop

        goto L_80023334;
    // 0x800230F0: nop

L_800230F4:
    // 0x800230F4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800230F8: lui         $a2, 0x8015
    ctx->r6 = S32(0X8015 << 16);
    // 0x800230FC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80023100: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80023104: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80023108: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002310C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80023110: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x80023114: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80023118: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8002311C: lh          $a2, 0x41F6($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X41F6);
    // 0x80023120: jal         0x80025810
    // 0x80023124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80025810(rdram, ctx);
        goto after_27;
    // 0x80023124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x80023128: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002312C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023130: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023134: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023138: jal         0x800178D4
    // 0x8002313C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_28;
    // 0x8002313C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_28:
    // 0x80023140: b           L_80023334
    // 0x80023144: nop

        goto L_80023334;
    // 0x80023144: nop

L_80023148:
    // 0x80023148: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8002314C: lui         $a2, 0x8015
    ctx->r6 = S32(0X8015 << 16);
    // 0x80023150: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80023154: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80023158: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002315C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80023160: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80023164: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x80023168: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8002316C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80023170: lh          $a2, 0x41F6($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X41F6);
    // 0x80023174: jal         0x80025810
    // 0x80023178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80025810(rdram, ctx);
        goto after_29;
    // 0x80023178: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_29:
    // 0x8002317C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023180: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023184: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023188: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8002318C: jal         0x800178D4
    // 0x80023190: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_30;
    // 0x80023190: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_30:
    // 0x80023194: b           L_80023334
    // 0x80023198: nop

        goto L_80023334;
    // 0x80023198: nop

L_8002319C:
    // 0x8002319C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800231A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231A4: sb          $t1, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = ctx->r9;
    // 0x800231A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231AC: sb          $zero, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = 0;
    // 0x800231B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231B4: sb          $zero, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = 0;
    // 0x800231B8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231BC: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x800231C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800231C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800231C8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x800231CC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800231D0: jal         0x800178D4
    // 0x800231D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_31;
    // 0x800231D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_31:
    // 0x800231D8: b           L_80023334
    // 0x800231DC: nop

        goto L_80023334;
    // 0x800231DC: nop

L_800231E0:
    // 0x800231E0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800231E4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231E8: sb          $t2, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = ctx->r10;
    // 0x800231EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231F0: sb          $zero, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = 0;
    // 0x800231F4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800231F8: sb          $zero, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = 0;
    // 0x800231FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023200: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x80023204: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002320C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023210: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023214: jal         0x800178D4
    // 0x80023218: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_32;
    // 0x80023218: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_32:
    // 0x8002321C: b           L_80023334
    // 0x80023220: nop

        goto L_80023334;
    // 0x80023220: nop

L_80023224:
    // 0x80023224: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80023228: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002322C: sb          $t3, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = ctx->r11;
    // 0x80023230: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023234: sb          $zero, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = 0;
    // 0x80023238: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002323C: sb          $zero, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = 0;
    // 0x80023240: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023244: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x80023248: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002324C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023250: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023254: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023258: jal         0x800178D4
    // 0x8002325C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_33;
    // 0x8002325C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_33:
    // 0x80023260: b           L_80023334
    // 0x80023264: nop

        goto L_80023334;
    // 0x80023264: nop

L_80023268:
    // 0x80023268: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002326C: sb          $zero, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = 0;
    // 0x80023270: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80023274: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023278: sb          $t4, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = ctx->r12;
    // 0x8002327C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023280: sb          $zero, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = 0;
    // 0x80023284: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023288: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x8002328C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80023294: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023298: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8002329C: jal         0x800178D4
    // 0x800232A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_34;
    // 0x800232A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_34:
    // 0x800232A4: b           L_80023334
    // 0x800232A8: nop

        goto L_80023334;
    // 0x800232A8: nop

L_800232AC:
    // 0x800232AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800232B0: sb          $zero, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = 0;
    // 0x800232B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800232B8: sb          $zero, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = 0;
    // 0x800232BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800232C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800232C4: sb          $t5, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = ctx->r13;
    // 0x800232C8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800232CC: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x800232D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800232D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800232D8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x800232DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800232E0: jal         0x800178D4
    // 0x800232E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_35;
    // 0x800232E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_35:
    // 0x800232E8: b           L_80023334
    // 0x800232EC: nop

        goto L_80023334;
    // 0x800232EC: nop

L_800232F0:
    // 0x800232F0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800232F4: sb          $zero, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = 0;
    // 0x800232F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800232FC: sb          $zero, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = 0;
    // 0x80023300: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023304: sb          $zero, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = 0;
    // 0x80023308: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002330C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80023310: sb          $t6, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = ctx->r14;
    // 0x80023314: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80023318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002331C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80023320: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80023324: jal         0x800178D4
    // 0x80023328: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_36;
    // 0x80023328: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_36:
    // 0x8002332C: b           L_80023334
    // 0x80023330: nop

        goto L_80023334;
    // 0x80023330: nop

L_80023334:
    // 0x80023334: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80023338: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002333C: sw          $t7, 0x7A60($at)
    MEM_W(0X7A60, ctx->r1) = ctx->r15;
    // 0x80023340: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80023344: sw          $zero, 0x7A64($at)
    MEM_W(0X7A64, ctx->r1) = 0;
    // 0x80023348: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8002334C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80023350: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80023354: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80023358: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002335C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80023360: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80023364: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80023368: lh          $t9, 0x4234($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4234);
    // 0x8002336C: nop

    // 0x80023370: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80023374: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80023378: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x8002337C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80023380: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x80023384: lw          $t9, 0x4DAC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4DAC);
    // 0x80023388: nop

    // 0x8002338C: jalr        $t9
    // 0x80023390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_37;
    // 0x80023390: nop

    after_37:
    // 0x80023394: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80023398: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8002339C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800233A0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800233A4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800233A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800233AC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800233B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800233B4: lh          $t4, 0x4234($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4234);
    // 0x800233B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800233BC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800233C0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800233C4: sll         $t5, $t5, 5
    ctx->r13 = S32(ctx->r13 << 5);
    // 0x800233C8: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x800233CC: lbu         $a0, 0x4D96($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4D96);
    // 0x800233D0: jal         0x8006AF18
    // 0x800233D4: nop

    Score_Update(rdram, ctx);
        goto after_38;
    // 0x800233D4: nop

    after_38:
    // 0x800233D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800233DC: lh          $t6, 0x75FA($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X75FA);
    // 0x800233E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800233E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800233E8: sh          $t7, 0x75FA($at)
    MEM_H(0X75FA, ctx->r1) = ctx->r15;
    // 0x800233EC: b           L_800233F4
    // 0x800233F0: nop

        goto L_800233F4;
    // 0x800233F0: nop

L_800233F4:
    // 0x800233F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800233F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800233FC: jr          $ra
    // 0x80023400: nop

    return;
    // 0x80023400: nop

;}
RECOMP_FUNC void func_80025608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025608: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002560C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80025610: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80025614: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80025618: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8002561C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80025620: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80025624: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80025628: lbu         $t8, 0x7495($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7495);
    // 0x8002562C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025630: sb          $t8, 0x7650($at)
    MEM_B(0X7650, ctx->r1) = ctx->r24;
    // 0x80025634: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80025638: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002563C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80025640: lbu         $t0, 0x7496($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7496);
    // 0x80025644: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025648: sb          $t0, 0x7651($at)
    MEM_B(0X7651, ctx->r1) = ctx->r8;
    // 0x8002564C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80025650: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80025654: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80025658: lbu         $t2, 0x7497($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7497);
    // 0x8002565C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80025660: sb          $t2, 0x7652($at)
    MEM_B(0X7652, ctx->r1) = ctx->r10;
    // 0x80025664: b           L_8002566C
    // 0x80025668: nop

        goto L_8002566C;
    // 0x80025668: nop

L_8002566C:
    // 0x8002566C: jr          $ra
    // 0x80025670: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80025670: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80013AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013AE0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80013AE4: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80013AE8: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80013AEC: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80013AF0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80013AF4:
    // 0x80013AF4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80013AF8: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80013AFC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80013B00: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B04: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80013B08: addu        $t9, $a0, $t7
    ctx->r25 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B0C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013B10: lwc1        $f10, 0x10($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80013B14: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80013B18: addu        $t0, $a0, $t7
    ctx->r8 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B1C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80013B20: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80013B24: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80013B28: addu        $t1, $a0, $t7
    ctx->r9 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B2C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80013B30: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80013B34: lwc1        $f18, 0x30($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X30);
    // 0x80013B38: addu        $t2, $a0, $t7
    ctx->r10 = ADD32(ctx->r4, ctx->r15);
    // 0x80013B3C: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80013B40: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80013B44: swc1        $f6, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f6.u32l;
    // 0x80013B48: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80013B4C: nop

    // 0x80013B50: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80013B54: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80013B58: bne         $at, $zero, L_80013AF4
    if (ctx->r1 != 0) {
        // 0x80013B5C: sw          $t4, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r12;
            goto L_80013AF4;
    }
    // 0x80013B5C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x80013B60: b           L_80013B68
    // 0x80013B64: nop

        goto L_80013B68;
    // 0x80013B64: nop

L_80013B68:
    // 0x80013B68: jr          $ra
    // 0x80013B6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80013B6C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80008CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008CF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80008CF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80008CFC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80008D00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80008D04: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008D08: lw          $t6, 0x2D80($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D80);
    // 0x80008D0C: nop

    // 0x80008D10: bne         $t6, $zero, L_80008D20
    if (ctx->r14 != 0) {
        // 0x80008D14: nop
    
            goto L_80008D20;
    }
    // 0x80008D14: nop

    // 0x80008D18: b           L_80009AC0
    // 0x80008D1C: nop

        goto L_80009AC0;
    // 0x80008D1C: nop

L_80008D20:
    // 0x80008D20: lh          $t7, 0x42($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X42);
    // 0x80008D24: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80008D28: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80008D2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80008D30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80008D34: lw          $t9, 0x2D84($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D84);
    // 0x80008D38: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80008D3C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80008D40: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80008D44: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80008D48: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80008D4C: nop

    // 0x80008D50: lh          $t2, 0x8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X8);
    // 0x80008D54: nop

    // 0x80008D58: bgez        $t2, L_80008D68
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80008D5C: nop
    
            goto L_80008D68;
    }
    // 0x80008D5C: nop

    // 0x80008D60: b           L_80009AC0
    // 0x80008D64: nop

        goto L_80009AC0;
    // 0x80008D64: nop

L_80008D68:
    // 0x80008D68: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80008D6C: lb          $t3, 0x2D7D($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X2D7D);
    // 0x80008D70: nop

    // 0x80008D74: beq         $t3, $zero, L_80008DD0
    if (ctx->r11 == 0) {
        // 0x80008D78: nop
    
            goto L_80008DD0;
    }
    // 0x80008D78: nop

    // 0x80008D7C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80008D80: nop

    // 0x80008D84: lb          $t5, 0x53($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X53);
    // 0x80008D88: nop

    // 0x80008D8C: beq         $t5, $zero, L_80008DBC
    if (ctx->r13 == 0) {
        // 0x80008D90: nop
    
            goto L_80008DBC;
    }
    // 0x80008D90: nop

    // 0x80008D94: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80008D98: nop

    // 0x80008D9C: lb          $t7, 0x53($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X53);
    // 0x80008DA0: nop

    // 0x80008DA4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80008DA8: sb          $t8, 0x53($t6)
    MEM_B(0X53, ctx->r14) = ctx->r24;
    // 0x80008DAC: b           L_80009AC0
    // 0x80008DB0: nop

        goto L_80009AC0;
    // 0x80008DB0: nop

    // 0x80008DB4: b           L_80008DD0
    // 0x80008DB8: nop

        goto L_80008DD0;
    // 0x80008DB8: nop

L_80008DBC:
    // 0x80008DBC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80008DC0: lb          $t9, 0x2D7D($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X2D7D);
    // 0x80008DC4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80008DC8: nop

    // 0x80008DCC: sb          $t9, 0x53($t0)
    MEM_B(0X53, ctx->r8) = ctx->r25;
L_80008DD0:
    // 0x80008DD0: lh          $t1, 0x42($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X42);
    // 0x80008DD4: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80008DD8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80008DDC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80008DE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80008DE4: lw          $t3, 0x2D5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D5C);
    // 0x80008DE8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80008DEC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80008DF0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80008DF4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x80008DF8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80008DFC: nop

    // 0x80008E00: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x80008E04: nop

    // 0x80008E08: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80008E0C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80008E10: nop

    // 0x80008E14: lh          $t6, 0xC($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XC);
    // 0x80008E18: nop

    // 0x80008E1C: bne         $t6, $zero, L_8000983C
    if (ctx->r14 != 0) {
        // 0x80008E20: nop
    
            goto L_8000983C;
    }
    // 0x80008E20: nop

L_80008E24:
    // 0x80008E24: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80008E28: nop

    // 0x80008E2C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80008E30: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80008E34: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80008E38: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    // 0x80008E3C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80008E40: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80008E44: lbu         $t4, 0x0($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X0);
    // 0x80008E48: lbu         $t3, 0x1($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X1);
    // 0x80008E4C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80008E50: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x80008E54: sh          $t7, 0xC($t8)
    MEM_H(0XC, ctx->r24) = ctx->r15;
    // 0x80008E58: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80008E5C: nop

    // 0x80008E60: addiu       $t0, $t6, 0x2
    ctx->r8 = ADD32(ctx->r14, 0X2);
    // 0x80008E64: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80008E68: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x80008E6C: nop

    // 0x80008E70: addiu       $t1, $t9, -0x80
    ctx->r9 = ADD32(ctx->r25, -0X80);
    // 0x80008E74: sltiu       $at, $t1, 0x29
    ctx->r1 = ctx->r9 < 0X29 ? 1 : 0;
    // 0x80008E78: beq         $at, $zero, L_800097F4
    if (ctx->r1 == 0) {
        // 0x80008E7C: nop
    
            goto L_800097F4;
    }
    // 0x80008E7C: nop

    // 0x80008E80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80008E84: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008E88: addu        $at, $at, $t1
    gpr jr_addend_80008E94 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80008E8C: lw          $t1, -0x451C($at)
    ctx->r9 = ADD32(ctx->r1, -0X451C);
    // 0x80008E90: nop

    // 0x80008E94: jr          $t1
    // 0x80008E98: nop

    switch (jr_addend_80008E94 >> 2) {
        case 0: goto L_800097A4; break;
        case 1: goto L_800097BC; break;
        case 2: goto L_80008E9C; break;
        case 3: goto L_80008EA4; break;
        case 4: goto L_800090E0; break;
        case 5: goto L_800091D8; break;
        case 6: goto L_800097F4; break;
        case 7: goto L_800097F4; break;
        case 8: goto L_8000920C; break;
        case 9: goto L_80009280; break;
        case 10: goto L_800097F4; break;
        case 11: goto L_800097F4; break;
        case 12: goto L_800097F4; break;
        case 13: goto L_800097F4; break;
        case 14: goto L_800097F4; break;
        case 15: goto L_800097F4; break;
        case 16: goto L_800092D4; break;
        case 17: goto L_80009300; break;
        case 18: goto L_800097F4; break;
        case 19: goto L_800097F4; break;
        case 20: goto L_800097F4; break;
        case 21: goto L_800097F4; break;
        case 22: goto L_800097F4; break;
        case 23: goto L_800097F4; break;
        case 24: goto L_80009334; break;
        case 25: goto L_80009360; break;
        case 26: goto L_80009394; break;
        case 27: goto L_800097F4; break;
        case 28: goto L_800097F4; break;
        case 29: goto L_800097F4; break;
        case 30: goto L_800097F4; break;
        case 31: goto L_800097F4; break;
        case 32: goto L_80009450; break;
        case 33: goto L_80009484; break;
        case 34: goto L_800094C8; break;
        case 35: goto L_800095A0; break;
        case 36: goto L_80009620; break;
        case 37: goto L_800096EC; break;
        case 38: goto L_80009740; break;
        case 39: goto L_800097F4; break;
        case 40: goto L_80009760; break;
        default: switch_error(__func__, 0x80008E94, 0x8004BAE4);
    }
    // 0x80008E98: nop

L_80008E9C:
    // 0x80008E9C: b           L_80009824
    // 0x80008EA0: nop

        goto L_80009824;
    // 0x80008EA0: nop

L_80008EA4:
    // 0x80008EA4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80008EA8: nop

    // 0x80008EAC: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80008EB0: lbu         $t4, 0x1($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1);
    // 0x80008EB4: sll         $t5, $t3, 8
    ctx->r13 = S32(ctx->r11 << 8);
    // 0x80008EB8: addu        $t7, $t4, $t5
    ctx->r15 = ADD32(ctx->r12, ctx->r13);
    // 0x80008EBC: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x80008EC0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80008EC4: nop

    // 0x80008EC8: addiu       $t6, $t8, 0x2
    ctx->r14 = ADD32(ctx->r24, 0X2);
    // 0x80008ECC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80008ED0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80008ED4: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x80008ED8: lh          $t1, 0x14($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X14);
    // 0x80008EDC: nop

    // 0x80008EE0: beq         $t0, $t1, L_800090D8
    if (ctx->r8 == ctx->r9) {
        // 0x80008EE4: nop
    
            goto L_800090D8;
    }
    // 0x80008EE4: nop

    // 0x80008EE8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80008EEC: nop

    // 0x80008EF0: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x80008EF4: nop

    // 0x80008EF8: bgez        $t3, L_800090D8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80008EFC: nop
    
            goto L_800090D8;
    }
    // 0x80008EFC: nop

    // 0x80008F00: lh          $t4, 0x1A($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X1A);
    // 0x80008F04: nop

    // 0x80008F08: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80008F0C: beq         $at, $zero, L_800090D8
    if (ctx->r1 == 0) {
        // 0x80008F10: nop
    
            goto L_800090D8;
    }
    // 0x80008F10: nop

    // 0x80008F14: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80008F18: jal         0x80009AD0
    // 0x80008F1C: nop

    func_80009AD0(rdram, ctx);
        goto after_0;
    // 0x80008F1C: nop

    after_0:
    // 0x80008F20: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80008F24: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x80008F28: nop

    // 0x80008F2C: bltz        $t5, L_80008F44
    if (SIGNED(ctx->r13) < 0) {
        // 0x80008F30: nop
    
            goto L_80008F44;
    }
    // 0x80008F30: nop

    // 0x80008F34: lh          $t7, 0x42($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X42);
    // 0x80008F38: nop

    // 0x80008F3C: bne         $t5, $t7, L_80008F4C
    if (ctx->r13 != ctx->r15) {
        // 0x80008F40: nop
    
            goto L_80008F4C;
    }
    // 0x80008F40: nop

L_80008F44:
    // 0x80008F44: b           L_80009824
    // 0x80008F48: nop

        goto L_80009824;
    // 0x80008F48: nop

L_80008F4C:
    // 0x80008F4C: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80008F50: jal         0x8000AC1C
    // 0x80008F54: nop

    func_8000AC1C(rdram, ctx);
        goto after_1;
    // 0x80008F54: nop

    after_1:
    // 0x80008F58: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80008F5C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80008F60: lh          $t8, 0x28($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X28);
    // 0x80008F64: lh          $t9, 0x1A($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X1A);
    // 0x80008F68: nop

    // 0x80008F6C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80008F70: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x80008F74: sh          $t8, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r24;
    // 0x80008F78: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80008F7C: nop

    // 0x80008F80: lh          $t2, 0x1A($t3)
    ctx->r10 = MEM_H(ctx->r11, 0X1A);
    // 0x80008F84: nop

    // 0x80008F88: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80008F8C: sh          $t4, 0x1A($t3)
    MEM_H(0X1A, ctx->r11) = ctx->r12;
    // 0x80008F90: lh          $t9, 0x28($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X28);
    // 0x80008F94: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80008F98: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80008F9C: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80008FA0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80008FA4: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x80008FA8: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80008FAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80008FB0: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80008FB4: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80008FB8: sb          $t5, 0x29($t0)
    MEM_B(0X29, ctx->r8) = ctx->r13;
    // 0x80008FBC: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x80008FC0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80008FC4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80008FC8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80008FCC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80008FD0: lw          $t1, 0x2D84($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D84);
    // 0x80008FD4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80008FD8: lh          $t8, 0x42($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X42);
    // 0x80008FDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80008FE0: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x80008FE4: sh          $t8, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r24;
    // 0x80008FE8: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x80008FEC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80008FF0: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x80008FF4: subu        $t0, $t0, $t5
    ctx->r8 = SUB32(ctx->r8, ctx->r13);
    // 0x80008FF8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80008FFC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80009000: lw          $t6, 0x2D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D5C);
    // 0x80009004: subu        $t0, $t0, $t5
    ctx->r8 = SUB32(ctx->r8, ctx->r13);
    // 0x80009008: lb          $t7, 0x22($t9)
    ctx->r15 = MEM_B(ctx->r25, 0X22);
    // 0x8000900C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80009010: addu        $t2, $t6, $t0
    ctx->r10 = ADD32(ctx->r14, ctx->r8);
    // 0x80009014: sb          $t7, 0x22($t2)
    MEM_B(0X22, ctx->r10) = ctx->r15;
    // 0x80009018: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x8000901C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80009020: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80009024: subu        $t9, $t9, $t3
    ctx->r25 = SUB32(ctx->r25, ctx->r11);
    // 0x80009028: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000902C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80009030: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x80009034: subu        $t9, $t9, $t3
    ctx->r25 = SUB32(ctx->r25, ctx->r11);
    // 0x80009038: lb          $t4, 0x23($t1)
    ctx->r12 = MEM_B(ctx->r9, 0X23);
    // 0x8000903C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80009040: addu        $t5, $t8, $t9
    ctx->r13 = ADD32(ctx->r24, ctx->r25);
    // 0x80009044: sb          $t4, 0x23($t5)
    MEM_B(0X23, ctx->r13) = ctx->r12;
    // 0x80009048: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x8000904C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80009050: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80009054: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x80009058: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8000905C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80009060: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x80009064: subu        $t1, $t1, $t2
    ctx->r9 = SUB32(ctx->r9, ctx->r10);
    // 0x80009068: lbu         $t0, 0x25($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X25);
    // 0x8000906C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80009070: addu        $t3, $t7, $t1
    ctx->r11 = ADD32(ctx->r15, ctx->r9);
    // 0x80009074: sb          $t0, 0x25($t3)
    MEM_B(0X25, ctx->r11) = ctx->r8;
    // 0x80009078: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x8000907C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80009080: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80009084: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80009088: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000908C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80009090: lw          $t4, 0x2D5C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D5C);
    // 0x80009094: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80009098: lh          $t9, 0x1A($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X1A);
    // 0x8000909C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800090A0: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x800090A4: sh          $t9, 0x1A($t2)
    MEM_H(0X1A, ctx->r10) = ctx->r25;
    // 0x800090A8: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x800090AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800090B0: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800090B4: subu        $t8, $t8, $t3
    ctx->r24 = SUB32(ctx->r24, ctx->r11);
    // 0x800090B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800090BC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800090C0: lw          $t0, 0x2D5C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D5C);
    // 0x800090C4: subu        $t8, $t8, $t3
    ctx->r24 = SUB32(ctx->r24, ctx->r11);
    // 0x800090C8: lbu         $t1, 0x28($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X28);
    // 0x800090CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800090D0: addu        $t5, $t0, $t8
    ctx->r13 = ADD32(ctx->r8, ctx->r24);
    // 0x800090D4: sb          $t1, 0x28($t5)
    MEM_B(0X28, ctx->r13) = ctx->r9;
L_800090D8:
    // 0x800090D8: b           L_80009824
    // 0x800090DC: nop

        goto L_80009824;
    // 0x800090DC: nop

L_800090E0:
    // 0x800090E0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800090E4: nop

    // 0x800090E8: addiu       $t6, $t4, 0x1C
    ctx->r14 = ADD32(ctx->r12, 0X1C);
    // 0x800090EC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x800090F0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800090F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800090F8: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x800090FC: nop

    // 0x80009100: bne         $t2, $at, L_8000912C
    if (ctx->r10 != ctx->r1) {
        // 0x80009104: nop
    
            goto L_8000912C;
    }
    // 0x80009104: nop

    // 0x80009108: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8000910C: nop

    // 0x80009110: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80009114: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80009118: nop

    // 0x8000911C: addiu       $t0, $t3, 0x3
    ctx->r8 = ADD32(ctx->r11, 0X3);
    // 0x80009120: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80009124: b           L_80009824
    // 0x80009128: nop

        goto L_80009824;
    // 0x80009128: nop

L_8000912C:
    // 0x8000912C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80009130: nop

    // 0x80009134: lbu         $t1, 0x0($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X0);
    // 0x80009138: nop

    // 0x8000913C: beq         $t1, $zero, L_80009160
    if (ctx->r9 == 0) {
        // 0x80009140: nop
    
            goto L_80009160;
    }
    // 0x80009140: nop

    // 0x80009144: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80009148: nop

    // 0x8000914C: lbu         $t4, 0x0($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X0);
    // 0x80009150: nop

    // 0x80009154: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x80009158: b           L_800091A4
    // 0x8000915C: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
        goto L_800091A4;
    // 0x8000915C: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
L_80009160:
    // 0x80009160: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009164: nop

    // 0x80009168: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x8000916C: nop

    // 0x80009170: bne         $t2, $zero, L_80009190
    if (ctx->r10 != 0) {
        // 0x80009174: nop
    
            goto L_80009190;
    }
    // 0x80009174: nop

    // 0x80009178: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8000917C: nop

    // 0x80009180: addiu       $t3, $t7, 0x3
    ctx->r11 = ADD32(ctx->r15, 0X3);
    // 0x80009184: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80009188: b           L_80009824
    // 0x8000918C: nop

        goto L_80009824;
    // 0x8000918C: nop

L_80009190:
    // 0x80009190: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80009194: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80009198: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x8000919C: nop

    // 0x800091A0: sb          $t8, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r24;
L_800091A4:
    // 0x800091A4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800091A8: nop

    // 0x800091AC: lbu         $t5, 0x1($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X1);
    // 0x800091B0: lbu         $t6, 0x2($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X2);
    // 0x800091B4: sll         $t9, $t5, 8
    ctx->r25 = S32(ctx->r13 << 8);
    // 0x800091B8: addu        $t2, $t6, $t9
    ctx->r10 = ADD32(ctx->r14, ctx->r25);
    // 0x800091BC: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x800091C0: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800091C4: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x800091C8: addiu       $t8, $t0, -0x3
    ctx->r24 = ADD32(ctx->r8, -0X3);
    // 0x800091CC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800091D0: b           L_80009824
    // 0x800091D4: nop

        goto L_80009824;
    // 0x800091D4: nop

L_800091D8:
    // 0x800091D8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800091DC: nop

    // 0x800091E0: lbu         $t6, 0x0($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0X0);
    // 0x800091E4: lbu         $t5, 0x1($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X1);
    // 0x800091E8: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x800091EC: addu        $t2, $t5, $t9
    ctx->r10 = ADD32(ctx->r13, ctx->r25);
    // 0x800091F0: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x800091F4: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800091F8: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x800091FC: addiu       $t0, $t4, -0x3
    ctx->r8 = ADD32(ctx->r12, -0X3);
    // 0x80009200: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80009204: b           L_80009824
    // 0x80009208: nop

        goto L_80009824;
    // 0x80009208: nop

L_8000920C:
    // 0x8000920C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009210: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80009214: lbu         $t6, 0x0($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X0);
    // 0x80009218: nop

    // 0x8000921C: sb          $t6, 0x1D($t5)
    MEM_B(0X1D, ctx->r13) = ctx->r14;
    // 0x80009220: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009224: nop

    // 0x80009228: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x8000922C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80009230: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80009234: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80009238: lbu         $t3, 0x0($t7)
    ctx->r11 = MEM_BU(ctx->r15, 0X0);
    // 0x8000923C: nop

    // 0x80009240: sb          $t3, 0x1F($t1)
    MEM_B(0X1F, ctx->r9) = ctx->r11;
    // 0x80009244: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80009248: nop

    // 0x8000924C: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x80009250: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80009254: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009258: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8000925C: lbu         $t6, 0x0($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X0);
    // 0x80009260: nop

    // 0x80009264: sb          $t6, 0x1E($t5)
    MEM_B(0X1E, ctx->r13) = ctx->r14;
    // 0x80009268: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8000926C: nop

    // 0x80009270: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x80009274: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80009278: b           L_80009824
    // 0x8000927C: nop

        goto L_80009824;
    // 0x8000927C: nop

L_80009280:
    // 0x80009280: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80009284: nop

    // 0x80009288: lbu         $t1, 0x0($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X0);
    // 0x8000928C: lbu         $t3, 0x1($t7)
    ctx->r11 = MEM_BU(ctx->r15, 0X1);
    // 0x80009290: sll         $t4, $t1, 8
    ctx->r12 = S32(ctx->r9 << 8);
    // 0x80009294: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x80009298: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    // 0x8000929C: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x800092A0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800092A4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800092A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800092AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800092B0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800092B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800092B8: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x800092BC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800092C0: nop

    // 0x800092C4: addiu       $t9, $t5, 0x2
    ctx->r25 = ADD32(ctx->r13, 0X2);
    // 0x800092C8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800092CC: b           L_80009824
    // 0x800092D0: nop

        goto L_80009824;
    // 0x800092D0: nop

L_800092D4:
    // 0x800092D4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800092D8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800092DC: lbu         $t7, 0x0($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X0);
    // 0x800092E0: nop

    // 0x800092E4: sh          $t7, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r15;
    // 0x800092E8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800092EC: nop

    // 0x800092F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800092F4: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x800092F8: b           L_80009824
    // 0x800092FC: nop

        goto L_80009824;
    // 0x800092FC: nop

L_80009300:
    // 0x80009300: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80009304: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80009308: lh          $t8, 0x10($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X10);
    // 0x8000930C: lb          $t5, 0x0($t6)
    ctx->r13 = MEM_B(ctx->r14, 0X0);
    // 0x80009310: nop

    // 0x80009314: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x80009318: sh          $t9, 0x10($t0)
    MEM_H(0X10, ctx->r8) = ctx->r25;
    // 0x8000931C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80009320: nop

    // 0x80009324: addiu       $t7, $t2, 0x1
    ctx->r15 = ADD32(ctx->r10, 0X1);
    // 0x80009328: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8000932C: b           L_80009824
    // 0x80009330: nop

        goto L_80009824;
    // 0x80009330: nop

L_80009334:
    // 0x80009334: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80009338: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8000933C: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x80009340: nop

    // 0x80009344: sh          $t3, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r11;
    // 0x80009348: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000934C: nop

    // 0x80009350: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80009354: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80009358: b           L_80009824
    // 0x8000935C: nop

        goto L_80009824;
    // 0x8000935C: nop

L_80009360:
    // 0x80009360: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80009364: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80009368: lh          $t9, 0x12($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X12);
    // 0x8000936C: lb          $t2, 0x0($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X0);
    // 0x80009370: nop

    // 0x80009374: addu        $t7, $t9, $t2
    ctx->r15 = ADD32(ctx->r25, ctx->r10);
    // 0x80009378: sh          $t7, 0x12($t5)
    MEM_H(0X12, ctx->r13) = ctx->r15;
    // 0x8000937C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80009380: nop

    // 0x80009384: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80009388: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8000938C: b           L_80009824
    // 0x80009390: nop

        goto L_80009824;
    // 0x80009390: nop

L_80009394:
    // 0x80009394: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80009398: nop

    // 0x8000939C: lbu         $s0, 0x0($t4)
    ctx->r16 = MEM_BU(ctx->r12, 0X0);
    // 0x800093A0: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x800093A4: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x800093A8: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800093AC: beq         $s0, $zero, L_800093D0
    if (ctx->r16 == 0) {
        // 0x800093B0: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_800093D0;
    }
    // 0x800093B0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800093B4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800093B8: nop

    // 0x800093BC: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x800093C0: nop

    // 0x800093C4: ori         $t2, $t9, 0x8
    ctx->r10 = ctx->r25 | 0X8;
    // 0x800093C8: b           L_800093E8
    // 0x800093CC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
        goto L_800093E8;
    // 0x800093CC: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
L_800093D0:
    // 0x800093D0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800093D4: nop

    // 0x800093D8: lw          $t5, 0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X4);
    // 0x800093DC: nop

    // 0x800093E0: ori         $t1, $t5, 0x10
    ctx->r9 = ctx->r13 | 0X10;
    // 0x800093E4: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
L_800093E8:
    // 0x800093E8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800093EC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800093F0: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x800093F4: lbu         $t6, 0x1($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X1);
    // 0x800093F8: sll         $t8, $t4, 8
    ctx->r24 = S32(ctx->r12 << 8);
    // 0x800093FC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80009400: sh          $t9, 0x50($t2)
    MEM_H(0X50, ctx->r10) = ctx->r25;
    // 0x80009404: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80009408: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8000940C: lh          $t5, 0x50($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X50);
    // 0x80009410: lh          $t1, 0x12($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X12);
    // 0x80009414: nop

    // 0x80009418: multu       $t5, $t1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000941C: mflo        $t7
    ctx->r15 = lo;
    // 0x80009420: nop

    // 0x80009424: nop

    // 0x80009428: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8000942C: mflo        $t3
    ctx->r11 = lo;
    // 0x80009430: sh          $t3, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r11;
    // 0x80009434: nop

    // 0x80009438: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8000943C: nop

    // 0x80009440: addiu       $t6, $t4, 0x2
    ctx->r14 = ADD32(ctx->r12, 0X2);
    // 0x80009444: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80009448: b           L_80009824
    // 0x8000944C: nop

        goto L_80009824;
    // 0x8000944C: nop

L_80009450:
    // 0x80009450: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009454: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80009458: lbu         $t2, 0x0($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X0);
    // 0x8000945C: lbu         $t9, 0x1($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1);
    // 0x80009460: sll         $t5, $t2, 8
    ctx->r13 = S32(ctx->r10 << 8);
    // 0x80009464: addu        $t1, $t9, $t5
    ctx->r9 = ADD32(ctx->r25, ctx->r13);
    // 0x80009468: sh          $t1, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r9;
    // 0x8000946C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80009470: nop

    // 0x80009474: addiu       $t0, $t3, 0x2
    ctx->r8 = ADD32(ctx->r11, 0X2);
    // 0x80009478: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8000947C: b           L_80009824
    // 0x80009480: nop

        goto L_80009824;
    // 0x80009480: nop

L_80009484:
    // 0x80009484: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80009488: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8000948C: lbu         $t6, 0x0($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X0);
    // 0x80009490: lbu         $t2, 0x1($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X1);
    // 0x80009494: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80009498: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x8000949C: lh          $t3, 0xE($t7)
    ctx->r11 = MEM_H(ctx->r15, 0XE);
    // 0x800094A0: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x800094A4: sra         $t1, $t5, 16
    ctx->r9 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800094A8: addu        $t0, $t3, $t1
    ctx->r8 = ADD32(ctx->r11, ctx->r9);
    // 0x800094AC: sh          $t0, 0xE($t7)
    MEM_H(0XE, ctx->r15) = ctx->r8;
    // 0x800094B0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800094B4: nop

    // 0x800094B8: addiu       $t4, $t6, 0x2
    ctx->r12 = ADD32(ctx->r14, 0X2);
    // 0x800094BC: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x800094C0: b           L_80009824
    // 0x800094C4: nop

        goto L_80009824;
    // 0x800094C4: nop

L_800094C8:
    // 0x800094C8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800094CC: nop

    // 0x800094D0: lbu         $s0, 0x0($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X0);
    // 0x800094D4: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x800094D8: beq         $s0, $zero, L_80009580
    if (ctx->r16 == 0) {
        // 0x800094DC: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_80009580;
    }
    // 0x800094DC: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x800094E0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800094E4: nop

    // 0x800094E8: sh          $zero, 0x26($t9)
    MEM_H(0X26, ctx->r25) = 0;
    // 0x800094EC: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x800094F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800094F4: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800094F8: nop

    // 0x800094FC: swc1        $f16, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f16.u32l;
    // 0x80009500: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80009504: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    // 0x80009508: lbu         $t1, 0x1F($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X1F);
    // 0x8000950C: nop

    // 0x80009510: subu        $t7, $t0, $t1
    ctx->r15 = SUB32(ctx->r8, ctx->r9);
    // 0x80009514: sh          $t7, 0x22($t3)
    MEM_H(0X22, ctx->r11) = ctx->r15;
    // 0x80009518: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8000951C: nop

    // 0x80009520: lbu         $a0, 0x1E($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X1E);
    // 0x80009524: jal         0x80005A80
    // 0x80009528: nop

    _depth2Cents(rdram, ctx);
        goto after_2;
    // 0x80009528: nop

    after_2:
    // 0x8000952C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80009530: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80009534: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80009538: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000953C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009540: nop

    // 0x80009544: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80009548: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x8000954C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80009550: sh          $t8, 0x24($t2)
    MEM_H(0X24, ctx->r10) = ctx->r24;
    // 0x80009554: nop

    // 0x80009558: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8000955C: nop

    // 0x80009560: sh          $zero, 0x20($t9)
    MEM_H(0X20, ctx->r25) = 0;
    // 0x80009564: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80009568: nop

    // 0x8000956C: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x80009570: nop

    // 0x80009574: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80009578: b           L_80009598
    // 0x8000957C: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
        goto L_80009598;
    // 0x8000957C: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
L_80009580:
    // 0x80009580: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80009584: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80009588: lw          $t3, 0x4($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X4);
    // 0x8000958C: nop

    // 0x80009590: and         $t6, $t3, $at
    ctx->r14 = ctx->r11 & ctx->r1;
    // 0x80009594: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
L_80009598:
    // 0x80009598: b           L_80009824
    // 0x8000959C: nop

        goto L_80009824;
    // 0x8000959C: nop

L_800095A0:
    // 0x800095A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800095A4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800095A8: lbu         $t8, 0x0($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X0);
    // 0x800095AC: nop

    // 0x800095B0: sh          $t8, 0x30($t2)
    MEM_H(0X30, ctx->r10) = ctx->r24;
    // 0x800095B4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800095B8: nop

    // 0x800095BC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800095C0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x800095C4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800095C8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800095CC: lbu         $t3, 0x0($t1)
    ctx->r11 = MEM_BU(ctx->r9, 0X0);
    // 0x800095D0: lbu         $t5, 0x1($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X1);
    // 0x800095D4: sll         $t6, $t3, 8
    ctx->r14 = S32(ctx->r11 << 8);
    // 0x800095D8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800095DC: sh          $t7, 0x32($t4)
    MEM_H(0X32, ctx->r12) = ctx->r15;
    // 0x800095E0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800095E4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800095E8: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x800095EC: lbu         $t2, 0x3($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X3);
    // 0x800095F0: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x800095F4: addu        $t1, $t2, $t0
    ctx->r9 = ADD32(ctx->r10, ctx->r8);
    // 0x800095F8: sh          $t1, 0x36($t3)
    MEM_H(0X36, ctx->r11) = ctx->r9;
    // 0x800095FC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80009600: nop

    // 0x80009604: sh          $zero, 0x34($t5)
    MEM_H(0X34, ctx->r13) = 0;
    // 0x80009608: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000960C: nop

    // 0x80009610: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80009614: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80009618: b           L_80009824
    // 0x8000961C: nop

        goto L_80009824;
    // 0x8000961C: nop

L_80009620:
    // 0x80009620: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80009624: lw          $t4, 0x2D80($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D80);
    // 0x80009628: nop

    // 0x8000962C: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x80009630: nop

    // 0x80009634: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80009638: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000963C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80009640: lbu         $t0, 0x0($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X0);
    // 0x80009644: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80009648: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8000964C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80009650: lhu         $t5, 0x0($t3)
    ctx->r13 = MEM_HU(ctx->r11, 0X0);
    // 0x80009654: nop

    // 0x80009658: addu        $s0, $t5, $t9
    ctx->r16 = ADD32(ctx->r13, ctx->r25);
    // 0x8000965C: sw          $s0, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r16;
    // 0x80009660: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80009664: nop

    // 0x80009668: sw          $s0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r16;
    // 0x8000966C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80009670: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80009674: lbu         $t2, 0x1($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X1);
    // 0x80009678: lbu         $t8, 0x2($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X2);
    // 0x8000967C: sll         $t0, $t2, 8
    ctx->r8 = S32(ctx->r10 << 8);
    // 0x80009680: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80009684: sh          $t1, 0x44($t3)
    MEM_H(0X44, ctx->r11) = ctx->r9;
    // 0x80009688: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000968C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80009690: lbu         $t6, 0x3($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X3);
    // 0x80009694: lbu         $t9, 0x4($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X4);
    // 0x80009698: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8000969C: addu        $t4, $t9, $t7
    ctx->r12 = ADD32(ctx->r25, ctx->r15);
    // 0x800096A0: sh          $t4, 0x46($t2)
    MEM_H(0X46, ctx->r10) = ctx->r12;
    // 0x800096A4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800096A8: nop

    // 0x800096AC: sh          $zero, 0x4C($t8)
    MEM_H(0X4C, ctx->r24) = 0;
    // 0x800096B0: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800096B4: nop

    // 0x800096B8: sh          $zero, 0x4A($t0)
    MEM_H(0X4A, ctx->r8) = 0;
    // 0x800096BC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800096C0: nop

    // 0x800096C4: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x800096C8: nop

    // 0x800096CC: ori         $t5, $t3, 0x20
    ctx->r13 = ctx->r11 | 0X20;
    // 0x800096D0: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x800096D4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800096D8: nop

    // 0x800096DC: addiu       $t9, $t6, 0x5
    ctx->r25 = ADD32(ctx->r14, 0X5);
    // 0x800096E0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800096E4: b           L_80009824
    // 0x800096E8: nop

        goto L_80009824;
    // 0x800096E8: nop

L_800096EC:
    // 0x800096EC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800096F0: nop

    // 0x800096F4: lbu         $t2, 0x0($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X0);
    // 0x800096F8: lbu         $t4, 0x1($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X1);
    // 0x800096FC: sll         $t8, $t2, 8
    ctx->r24 = S32(ctx->r10 << 8);
    // 0x80009700: addu        $t0, $t4, $t8
    ctx->r8 = ADD32(ctx->r12, ctx->r24);
    // 0x80009704: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    // 0x80009708: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x8000970C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80009710: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80009714: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80009718: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000971C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x80009720: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80009724: swc1        $f10, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f10.u32l;
    // 0x80009728: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000972C: nop

    // 0x80009730: addiu       $t6, $t1, 0x2
    ctx->r14 = ADD32(ctx->r9, 0X2);
    // 0x80009734: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80009738: b           L_80009824
    // 0x8000973C: nop

        goto L_80009824;
    // 0x8000973C: nop

L_80009740:
    // 0x80009740: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80009744: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x80009748: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x8000974C: nop

    // 0x80009750: and         $t2, $t7, $at
    ctx->r10 = ctx->r15 & ctx->r1;
    // 0x80009754: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x80009758: b           L_80009824
    // 0x8000975C: nop

        goto L_80009824;
    // 0x8000975C: nop

L_80009760:
    // 0x80009760: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80009764: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80009768: lbu         $t8, 0x0($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X0);
    // 0x8000976C: nop

    // 0x80009770: sb          $t8, 0x28($t0)
    MEM_B(0X28, ctx->r8) = ctx->r24;
    // 0x80009774: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80009778: nop

    // 0x8000977C: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80009780: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80009784: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80009788: nop

    // 0x8000978C: lw          $t6, 0x8($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X8);
    // 0x80009790: nop

    // 0x80009794: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x80009798: sw          $t7, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r15;
    // 0x8000979C: b           L_80009824
    // 0x800097A0: nop

        goto L_80009824;
    // 0x800097A0: nop

L_800097A4:
    // 0x800097A4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800097A8: nop

    // 0x800097AC: lw          $t9, 0x4($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X4);
    // 0x800097B0: nop

    // 0x800097B4: ori         $t4, $t9, 0x100
    ctx->r12 = ctx->r25 | 0X100;
    // 0x800097B8: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
L_800097BC:
    // 0x800097BC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800097C0: nop

    // 0x800097C4: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x800097C8: nop

    // 0x800097CC: ori         $t3, $t0, 0x200
    ctx->r11 = ctx->r8 | 0X200;
    // 0x800097D0: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x800097D4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800097D8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800097DC: sh          $t5, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r13;
    // 0x800097E0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800097E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800097E8: sh          $t7, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r15;
    // 0x800097EC: b           L_80009824
    // 0x800097F0: nop

        goto L_80009824;
    // 0x800097F0: nop

L_800097F4:
    // 0x800097F4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800097F8: nop

    // 0x800097FC: lw          $t4, 0x4($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X4);
    // 0x80009800: nop

    // 0x80009804: ori         $t2, $t4, 0x300
    ctx->r10 = ctx->r12 | 0X300;
    // 0x80009808: sw          $t2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r10;
    // 0x8000980C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80009810: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80009814: sh          $t0, 0x8($t3)
    MEM_H(0X8, ctx->r11) = ctx->r8;
    // 0x80009818: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8000981C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80009820: sh          $t8, 0xC($t5)
    MEM_H(0XC, ctx->r13) = ctx->r24;
L_80009824:
    // 0x80009824: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80009828: nop

    // 0x8000982C: lh          $t7, 0xC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XC);
    // 0x80009830: nop

    // 0x80009834: beq         $t7, $zero, L_80008E24
    if (ctx->r15 == 0) {
        // 0x80009838: nop
    
            goto L_80008E24;
    }
    // 0x80009838: nop

L_8000983C:
    // 0x8000983C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80009840: nop

    // 0x80009844: lh          $t4, 0xC($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XC);
    // 0x80009848: nop

    // 0x8000984C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x80009850: sh          $t2, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r10;
    // 0x80009854: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009858: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8000985C: nop

    // 0x80009860: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80009864: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80009868: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8000986C: jal         0x80009BA4
    // 0x80009870: nop

    func_80009BA4(rdram, ctx);
        goto after_3;
    // 0x80009870: nop

    after_3:
    // 0x80009874: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80009878: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8000987C: jal         0x8000A534
    // 0x80009880: nop

    func_8000A534(rdram, ctx);
        goto after_4;
    // 0x80009880: nop

    after_4:
    // 0x80009884: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80009888: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8000988C: jal         0x8000A724
    // 0x80009890: nop

    func_8000A724(rdram, ctx);
        goto after_5;
    // 0x80009890: nop

    after_5:
    // 0x80009894: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80009898: nop

    // 0x8000989C: lw          $t8, 0x4($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X4);
    // 0x800098A0: nop

    // 0x800098A4: andi        $t5, $t8, 0x100
    ctx->r13 = ctx->r24 & 0X100;
    // 0x800098A8: beq         $t5, $zero, L_80009AB8
    if (ctx->r13 == 0) {
        // 0x800098AC: nop
    
            goto L_80009AB8;
    }
    // 0x800098AC: nop

    // 0x800098B0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800098B4: nop

    // 0x800098B8: lh          $t7, 0x1A($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X1A);
    // 0x800098BC: nop

    // 0x800098C0: blez        $t7, L_80009A44
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800098C4: nop
    
            goto L_80009A44;
    }
    // 0x800098C4: nop

L_800098C8:
    // 0x800098C8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800098CC: nop

    // 0x800098D0: lh          $t2, 0x1A($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X1A);
    // 0x800098D4: nop

    // 0x800098D8: addiu       $t1, $t2, -0x1
    ctx->r9 = ADD32(ctx->r10, -0X1);
    // 0x800098DC: sh          $t1, 0x1A($t4)
    MEM_H(0X1A, ctx->r12) = ctx->r9;
    // 0x800098E0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800098E4: nop

    // 0x800098E8: lh          $t0, 0x1A($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X1A);
    // 0x800098EC: nop

    // 0x800098F0: sll         $t3, $t0, 1
    ctx->r11 = S32(ctx->r8 << 1);
    // 0x800098F4: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x800098F8: lh          $t5, 0x14($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X14);
    // 0x800098FC: nop

    // 0x80009900: sh          $t5, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r13;
    // 0x80009904: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x80009908: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000990C: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x80009910: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80009914: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80009918: lw          $t6, 0x2D84($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D84);
    // 0x8000991C: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x80009920: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80009924: addu        $t1, $t6, $t2
    ctx->r9 = ADD32(ctx->r14, ctx->r10);
    // 0x80009928: lh          $t4, 0xA($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA);
    // 0x8000992C: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x80009930: nop

    // 0x80009934: beq         $t4, $t0, L_80009944
    if (ctx->r12 == ctx->r8) {
        // 0x80009938: nop
    
            goto L_80009944;
    }
    // 0x80009938: nop

    // 0x8000993C: b           L_80009A2C
    // 0x80009940: nop

        goto L_80009A2C;
    // 0x80009940: nop

L_80009944:
    // 0x80009944: lh          $t9, 0x2A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2A);
    // 0x80009948: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000994C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80009950: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80009954: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80009958: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000995C: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80009960: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80009964: addu        $t5, $t3, $t8
    ctx->r13 = ADD32(ctx->r11, ctx->r24);
    // 0x80009968: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x8000996C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80009970: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80009974: lw          $t6, 0xC($t7)
    ctx->r14 = MEM_W(ctx->r15, 0XC);
    // 0x80009978: nop

    // 0x8000997C: beq         $t6, $at, L_8000998C
    if (ctx->r14 == ctx->r1) {
        // 0x80009980: nop
    
            goto L_8000998C;
    }
    // 0x80009980: nop

    // 0x80009984: b           L_80009A2C
    // 0x80009988: nop

        goto L_80009A2C;
    // 0x80009988: nop

L_8000998C:
    // 0x8000998C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80009990: nop

    // 0x80009994: lw          $t1, 0x8($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X8);
    // 0x80009998: nop

    // 0x8000999C: andi        $t4, $t1, 0x1000
    ctx->r12 = ctx->r9 & 0X1000;
    // 0x800099A0: beq         $t4, $zero, L_800099D4
    if (ctx->r12 == 0) {
        // 0x800099A4: nop
    
            goto L_800099D4;
    }
    // 0x800099A4: nop

    // 0x800099A8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800099AC: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x800099B0: lw          $t9, 0x8($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X8);
    // 0x800099B4: nop

    // 0x800099B8: and         $t3, $t9, $at
    ctx->r11 = ctx->r25 & ctx->r1;
    // 0x800099BC: sw          $t3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r11;
    // 0x800099C0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800099C4: nop

    // 0x800099C8: lw          $t5, 0x10($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X10);
    // 0x800099CC: b           L_80009A14
    // 0x800099D0: sw          $t5, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r13;
        goto L_80009A14;
    // 0x800099D0: sw          $t5, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r13;
L_800099D4:
    // 0x800099D4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800099D8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800099DC: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x800099E0: lh          $a1, 0x16($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X16);
    // 0x800099E4: jal         0x80035310
    // 0x800099E8: nop

    alSndpSetSound(rdram, ctx);
        goto after_6;
    // 0x800099E8: nop

    after_6:
    // 0x800099EC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800099F0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x800099F4: jal         0x800355A0
    // 0x800099F8: nop

    alSndpStop(rdram, ctx);
        goto after_7;
    // 0x800099F8: nop

    after_7:
    // 0x800099FC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80009A00: nop

    // 0x80009A04: lw          $t2, 0x8($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X8);
    // 0x80009A08: nop

    // 0x80009A0C: ori         $t1, $t2, 0x2000
    ctx->r9 = ctx->r10 | 0X2000;
    // 0x80009A10: sw          $t1, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r9;
L_80009A14:
    // 0x80009A14: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80009A18: nop

    // 0x80009A1C: sb          $zero, 0x29($t4)
    MEM_B(0X29, ctx->r12) = 0;
    // 0x80009A20: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x80009A24: jal         0x80009B4C
    // 0x80009A28: nop

    func_80009B4C(rdram, ctx);
        goto after_8;
    // 0x80009A28: nop

    after_8:
L_80009A2C:
    // 0x80009A2C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80009A30: nop

    // 0x80009A34: lh          $t3, 0x1A($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X1A);
    // 0x80009A38: nop

    // 0x80009A3C: bgtz        $t3, L_800098C8
    if (SIGNED(ctx->r11) > 0) {
        // 0x80009A40: nop
    
            goto L_800098C8;
    }
    // 0x80009A40: nop

L_80009A44:
    // 0x80009A44: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x80009A48: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80009A4C: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x80009A50: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80009A54: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80009A58: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x80009A5C: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x80009A60: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80009A64: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x80009A68: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80009A6C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80009A70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80009A74: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80009A78: lh          $a1, 0x16($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X16);
    // 0x80009A7C: jal         0x80035310
    // 0x80009A80: nop

    alSndpSetSound(rdram, ctx);
        goto after_9;
    // 0x80009A80: nop

    after_9:
    // 0x80009A84: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80009A88: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80009A8C: jal         0x800355A0
    // 0x80009A90: nop

    alSndpStop(rdram, ctx);
        goto after_10;
    // 0x80009A90: nop

    after_10:
    // 0x80009A94: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80009A98: nop

    // 0x80009A9C: lw          $t6, 0x8($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X8);
    // 0x80009AA0: nop

    // 0x80009AA4: ori         $t4, $t6, 0x2000
    ctx->r12 = ctx->r14 | 0X2000;
    // 0x80009AA8: sw          $t4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r12;
    // 0x80009AAC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80009AB0: nop

    // 0x80009AB4: sb          $zero, 0x29($t9)
    MEM_B(0X29, ctx->r25) = 0;
L_80009AB8:
    // 0x80009AB8: b           L_80009AC0
    // 0x80009ABC: nop

        goto L_80009AC0;
    // 0x80009ABC: nop

L_80009AC0:
    // 0x80009AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80009AC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80009AC8: jr          $ra
    // 0x80009ACC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009ACC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800146F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800146F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800146FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80014700: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80014704: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80014708: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8001470C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80014710: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014714: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80014718: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8001471C: nop

    // 0x80014720: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80014724: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80014728: nop

    // 0x8001472C: lbu         $s0, 0x0($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0X0);
    // 0x80014730: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80014734: xori        $t8, $s0, 0x31
    ctx->r24 = ctx->r16 ^ 0X31;
    // 0x80014738: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x8001473C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80014740: beq         $s0, $zero, L_80014758
    if (ctx->r16 == 0) {
        // 0x80014744: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80014758;
    }
    // 0x80014744: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80014748: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001474C: nop

    // 0x80014750: ori         $t1, $t0, 0x8
    ctx->r9 = ctx->r8 | 0X8;
    // 0x80014754: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80014758:
    // 0x80014758: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001475C: nop

    // 0x80014760: lbu         $s0, 0x0($t2)
    ctx->r16 = MEM_BU(ctx->r10, 0X0);
    // 0x80014764: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80014768: xori        $t3, $s0, 0x31
    ctx->r11 = ctx->r16 ^ 0X31;
    // 0x8001476C: sltiu       $t3, $t3, 0x1
    ctx->r11 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x80014770: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80014774: beq         $s0, $zero, L_8001478C
    if (ctx->r16 == 0) {
        // 0x80014778: sw          $t4, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r12;
            goto L_8001478C;
    }
    // 0x80014778: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8001477C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80014780: nop

    // 0x80014784: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x80014788: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_8001478C:
    // 0x8001478C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80014790: nop

    // 0x80014794: lbu         $s0, 0x0($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X0);
    // 0x80014798: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001479C: xori        $t7, $s0, 0x31
    ctx->r15 = ctx->r16 ^ 0X31;
    // 0x800147A0: sltiu       $t7, $t7, 0x1
    ctx->r15 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x800147A4: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x800147A8: beq         $s0, $zero, L_800147C0
    if (ctx->r16 == 0) {
        // 0x800147AC: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_800147C0;
    }
    // 0x800147AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800147B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800147B4: nop

    // 0x800147B8: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x800147BC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_800147C0:
    // 0x800147C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800147C4: nop

    // 0x800147C8: lbu         $s0, 0x0($t3)
    ctx->r16 = MEM_BU(ctx->r11, 0X0);
    // 0x800147CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800147D0: xori        $t2, $s0, 0x31
    ctx->r10 = ctx->r16 ^ 0X31;
    // 0x800147D4: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x800147D8: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800147DC: beq         $s0, $zero, L_800147F4
    if (ctx->r16 == 0) {
        // 0x800147E0: sw          $t4, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r12;
            goto L_800147F4;
    }
    // 0x800147E0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800147E4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800147E8: nop

    // 0x800147EC: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x800147F0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_800147F4:
    // 0x800147F4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800147F8: nop

    // 0x800147FC: lbu         $s0, 0x0($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0X0);
    // 0x80014800: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80014804: xori        $t8, $s0, 0x31
    ctx->r24 = ctx->r16 ^ 0X31;
    // 0x80014808: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x8001480C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80014810: beq         $s0, $zero, L_80014828
    if (ctx->r16 == 0) {
        // 0x80014814: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80014828;
    }
    // 0x80014814: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80014818: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001481C: nop

    // 0x80014820: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x80014824: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80014828:
    // 0x80014828: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001482C: nop

    // 0x80014830: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80014834: nop

    // 0x80014838: slti        $at, $t3, 0x30
    ctx->r1 = SIGNED(ctx->r11) < 0X30 ? 1 : 0;
    // 0x8001483C: bne         $at, $zero, L_80014870
    if (ctx->r1 != 0) {
        // 0x80014840: nop
    
            goto L_80014870;
    }
    // 0x80014840: nop

    // 0x80014844: slti        $at, $t3, 0x34
    ctx->r1 = SIGNED(ctx->r11) < 0X34 ? 1 : 0;
    // 0x80014848: beq         $at, $zero, L_80014870
    if (ctx->r1 == 0) {
        // 0x8001484C: nop
    
            goto L_80014870;
    }
    // 0x8001484C: nop

    // 0x80014850: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80014854: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80014858: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8001485C: nop

    // 0x80014860: addiu       $t8, $t6, -0x30
    ctx->r24 = ADD32(ctx->r14, -0X30);
    // 0x80014864: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x80014868: or          $t9, $t4, $t7
    ctx->r25 = ctx->r12 | ctx->r15;
    // 0x8001486C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80014870:
    // 0x80014870: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80014874: nop

    // 0x80014878: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8001487C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80014880: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80014884: nop

    // 0x80014888: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8001488C: nop

    // 0x80014890: slti        $at, $t3, 0x30
    ctx->r1 = SIGNED(ctx->r11) < 0X30 ? 1 : 0;
    // 0x80014894: bne         $at, $zero, L_800148C8
    if (ctx->r1 != 0) {
        // 0x80014898: nop
    
            goto L_800148C8;
    }
    // 0x80014898: nop

    // 0x8001489C: slti        $at, $t3, 0x34
    ctx->r1 = SIGNED(ctx->r11) < 0X34 ? 1 : 0;
    // 0x800148A0: beq         $at, $zero, L_800148C8
    if (ctx->r1 == 0) {
        // 0x800148A4: nop
    
            goto L_800148C8;
    }
    // 0x800148A4: nop

    // 0x800148A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800148AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800148B0: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x800148B4: nop

    // 0x800148B8: addiu       $t4, $t8, -0x30
    ctx->r12 = ADD32(ctx->r24, -0X30);
    // 0x800148BC: sll         $t7, $t4, 10
    ctx->r15 = S32(ctx->r12 << 10);
    // 0x800148C0: or          $t9, $t5, $t7
    ctx->r25 = ctx->r13 | ctx->r15;
    // 0x800148C4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_800148C8:
    // 0x800148C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800148CC: nop

    // 0x800148D0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800148D4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800148D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800148DC: nop

    // 0x800148E0: lbu         $s0, 0x0($t2)
    ctx->r16 = MEM_BU(ctx->r10, 0X0);
    // 0x800148E4: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x800148E8: xori        $t3, $s0, 0x31
    ctx->r11 = ctx->r16 ^ 0X31;
    // 0x800148EC: sltiu       $t3, $t3, 0x1
    ctx->r11 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x800148F0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800148F4: beq         $s0, $zero, L_8001490C
    if (ctx->r16 == 0) {
        // 0x800148F8: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_8001490C;
    }
    // 0x800148F8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x800148FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80014900: nop

    // 0x80014904: ori         $t4, $t8, 0x1000
    ctx->r12 = ctx->r24 | 0X1000;
    // 0x80014908: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_8001490C:
    // 0x8001490C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80014910: nop

    // 0x80014914: lbu         $s0, 0x0($t5)
    ctx->r16 = MEM_BU(ctx->r13, 0X0);
    // 0x80014918: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x8001491C: xori        $t7, $s0, 0x31
    ctx->r15 = ctx->r16 ^ 0X31;
    // 0x80014920: sltiu       $t7, $t7, 0x1
    ctx->r15 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80014924: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80014928: beq         $s0, $zero, L_80014940
    if (ctx->r16 == 0) {
        // 0x8001492C: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_80014940;
    }
    // 0x8001492C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80014930: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80014934: nop

    // 0x80014938: ori         $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 | 0X2000;
    // 0x8001493C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80014940:
    // 0x80014940: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80014944: nop

    // 0x80014948: lbu         $s0, 0x0($t3)
    ctx->r16 = MEM_BU(ctx->r11, 0X0);
    // 0x8001494C: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x80014950: xori        $t2, $s0, 0x31
    ctx->r10 = ctx->r16 ^ 0X31;
    // 0x80014954: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x80014958: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x8001495C: beq         $s0, $zero, L_80014974
    if (ctx->r16 == 0) {
        // 0x80014960: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80014974;
    }
    // 0x80014960: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80014964: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80014968: nop

    // 0x8001496C: ori         $t4, $t8, 0x4000
    ctx->r12 = ctx->r24 | 0X4000;
    // 0x80014970: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_80014974:
    // 0x80014974: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80014978: nop

    // 0x8001497C: lbu         $s0, 0x0($t7)
    ctx->r16 = MEM_BU(ctx->r15, 0X0);
    // 0x80014980: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80014984: xori        $t5, $s0, 0x31
    ctx->r13 = ctx->r16 ^ 0X31;
    // 0x80014988: sltiu       $t5, $t5, 0x1
    ctx->r13 = ctx->r13 < 0X1 ? 1 : 0;
    // 0x8001498C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80014990: beq         $s0, $zero, L_800149A4
    if (ctx->r16 == 0) {
        // 0x80014994: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_800149A4;
    }
    // 0x80014994: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80014998: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8001499C: nop

    // 0x800149A0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_800149A4:
    // 0x800149A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800149A8: jal         0x800145C8
    // 0x800149AC: nop

    func_800145C8(rdram, ctx);
        goto after_0;
    // 0x800149AC: nop

    after_0:
    // 0x800149B0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800149B4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800149B8: jal         0x800145C8
    // 0x800149BC: nop

    func_800145C8(rdram, ctx);
        goto after_1;
    // 0x800149BC: nop

    after_1:
    // 0x800149C0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800149C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800149C8: srl         $t2, $s0, 2
    ctx->r10 = S32(U32(ctx->r16) >> 2);
    // 0x800149CC: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x800149D0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x800149D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800149D8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800149DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800149E0: jal         0x800145A8
    // 0x800149E4: or          $a1, $t6, $t8
    ctx->r5 = ctx->r14 | ctx->r24;
    func_800145A8(rdram, ctx);
        goto after_2;
    // 0x800149E4: or          $a1, $t6, $t8
    ctx->r5 = ctx->r14 | ctx->r24;
    after_2:
    // 0x800149E8: b           L_800149F0
    // 0x800149EC: nop

        goto L_800149F0;
    // 0x800149EC: nop

L_800149F0:
    // 0x800149F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800149F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800149F8: jr          $ra
    // 0x800149FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800149FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000AF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000AF40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000AF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000AF48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000AF4C: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8000AF50: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000AF54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000AF58: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000AF5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000AF60: lw          $t8, 0x2D5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D5C);
    // 0x8000AF64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8000AF68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000AF6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000AF70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8000AF74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8000AF78: nop

    // 0x8000AF7C: lh          $t1, 0x16($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X16);
    // 0x8000AF80: nop

    // 0x8000AF84: bgez        $t1, L_8000AF94
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8000AF88: nop
    
            goto L_8000AF94;
    }
    // 0x8000AF88: nop

    // 0x8000AF8C: b           L_8000B1EC
    // 0x8000AF90: nop

        goto L_8000B1EC;
    // 0x8000AF90: nop

L_8000AF94:
    // 0x8000AF94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000AF98: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000AF9C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000AFA0: lh          $a1, 0x16($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X16);
    // 0x8000AFA4: jal         0x80035310
    // 0x8000AFA8: nop

    alSndpSetSound(rdram, ctx);
        goto after_0;
    // 0x8000AFA8: nop

    after_0:
    // 0x8000AFAC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000AFB0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000AFB4: jal         0x800355A0
    // 0x8000AFB8: nop

    alSndpStop(rdram, ctx);
        goto after_1;
    // 0x8000AFB8: nop

    after_1:
    // 0x8000AFBC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8000AFC0: addiu       $t3, $zero, 0x2000
    ctx->r11 = ADD32(0, 0X2000);
    // 0x8000AFC4: sw          $t3, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r11;
    // 0x8000AFC8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8000AFCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000AFD0: lb          $t6, 0x29($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X29);
    // 0x8000AFD4: nop

    // 0x8000AFD8: bne         $t6, $at, L_8000B19C
    if (ctx->r14 != ctx->r1) {
        // 0x8000AFDC: nop
    
            goto L_8000B19C;
    }
    // 0x8000AFDC: nop

    // 0x8000AFE0: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x8000AFE4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000AFE8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000AFEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8000AFF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000AFF4: lw          $t9, 0x2D84($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D84);
    // 0x8000AFF8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8000AFFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B000: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000B004: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8000B008: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8000B00C: nop

    // 0x8000B010: lh          $t2, 0x1A($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X1A);
    // 0x8000B014: nop

    // 0x8000B018: blez        $t2, L_8000B19C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000B01C: nop
    
            goto L_8000B19C;
    }
    // 0x8000B01C: nop

L_8000B020:
    // 0x8000B020: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8000B024: nop

    // 0x8000B028: lh          $t4, 0x1A($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X1A);
    // 0x8000B02C: nop

    // 0x8000B030: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8000B034: sh          $t5, 0x1A($t3)
    MEM_H(0X1A, ctx->r11) = ctx->r13;
    // 0x8000B038: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000B03C: nop

    // 0x8000B040: lh          $t7, 0x1A($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X1A);
    // 0x8000B044: nop

    // 0x8000B048: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8000B04C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8000B050: lh          $t0, 0x14($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X14);
    // 0x8000B054: nop

    // 0x8000B058: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x8000B05C: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B060: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000B064: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x8000B068: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8000B06C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8000B070: lw          $t1, 0x2D84($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D84);
    // 0x8000B074: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8000B078: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8000B07C: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x8000B080: lh          $t3, 0xA($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XA);
    // 0x8000B084: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B088: nop

    // 0x8000B08C: beq         $t3, $t7, L_8000B09C
    if (ctx->r11 == ctx->r15) {
        // 0x8000B090: nop
    
            goto L_8000B09C;
    }
    // 0x8000B090: nop

    // 0x8000B094: b           L_8000B184
    // 0x8000B098: nop

        goto L_8000B184;
    // 0x8000B098: nop

L_8000B09C:
    // 0x8000B09C: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B0A0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000B0A4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8000B0A8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8000B0AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B0B0: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000B0B4: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x8000B0B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000B0BC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000B0C0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8000B0C4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000B0C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000B0CC: lw          $t1, 0xC($t2)
    ctx->r9 = MEM_W(ctx->r10, 0XC);
    // 0x8000B0D0: nop

    // 0x8000B0D4: beq         $t1, $at, L_8000B0E4
    if (ctx->r9 == ctx->r1) {
        // 0x8000B0D8: nop
    
            goto L_8000B0E4;
    }
    // 0x8000B0D8: nop

    // 0x8000B0DC: b           L_8000B184
    // 0x8000B0E0: nop

        goto L_8000B184;
    // 0x8000B0E0: nop

L_8000B0E4:
    // 0x8000B0E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8000B0E8: nop

    // 0x8000B0EC: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8000B0F0: nop

    // 0x8000B0F4: andi        $t3, $t5, 0x1000
    ctx->r11 = ctx->r13 & 0X1000;
    // 0x8000B0F8: beq         $t3, $zero, L_8000B12C
    if (ctx->r11 == 0) {
        // 0x8000B0FC: nop
    
            goto L_8000B12C;
    }
    // 0x8000B0FC: nop

    // 0x8000B100: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8000B104: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8000B108: lw          $t6, 0x8($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X8);
    // 0x8000B10C: nop

    // 0x8000B110: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8000B114: sw          $t8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r24;
    // 0x8000B118: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8000B11C: nop

    // 0x8000B120: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x8000B124: b           L_8000B16C
    // 0x8000B128: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
        goto L_8000B16C;
    // 0x8000B128: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
L_8000B12C:
    // 0x8000B12C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8000B130: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B134: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B138: lh          $a1, 0x16($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X16);
    // 0x8000B13C: jal         0x80035310
    // 0x8000B140: nop

    alSndpSetSound(rdram, ctx);
        goto after_2;
    // 0x8000B140: nop

    after_2:
    // 0x8000B144: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000B148: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x8000B14C: jal         0x800355A0
    // 0x8000B150: nop

    alSndpStop(rdram, ctx);
        goto after_3;
    // 0x8000B150: nop

    after_3:
    // 0x8000B154: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8000B158: nop

    // 0x8000B15C: lw          $t4, 0x8($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X8);
    // 0x8000B160: nop

    // 0x8000B164: ori         $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 | 0X2000;
    // 0x8000B168: sw          $t5, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r13;
L_8000B16C:
    // 0x8000B16C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8000B170: nop

    // 0x8000B174: sb          $zero, 0x29($t3)
    MEM_B(0X29, ctx->r11) = 0;
    // 0x8000B178: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x8000B17C: jal         0x80009B4C
    // 0x8000B180: nop

    func_80009B4C(rdram, ctx);
        goto after_4;
    // 0x8000B180: nop

    after_4:
L_8000B184:
    // 0x8000B184: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8000B188: nop

    // 0x8000B18C: lh          $t8, 0x1A($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X1A);
    // 0x8000B190: nop

    // 0x8000B194: bgtz        $t8, L_8000B020
    if (SIGNED(ctx->r24) > 0) {
        // 0x8000B198: nop
    
            goto L_8000B020;
    }
    // 0x8000B198: nop

L_8000B19C:
    // 0x8000B19C: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B1A0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000B1A4: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8000B1A8: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x8000B1AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000B1B0: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x8000B1B4: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x8000B1B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8000B1BC: addu        $t2, $t7, $t9
    ctx->r10 = ADD32(ctx->r15, ctx->r25);
    // 0x8000B1C0: sb          $zero, 0x29($t2)
    MEM_B(0X29, ctx->r10) = 0;
    // 0x8000B1C4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000B1C8: lw          $t4, 0x2D80($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D80);
    // 0x8000B1CC: nop

    // 0x8000B1D0: beq         $t4, $zero, L_8000B1E4
    if (ctx->r12 == 0) {
        // 0x8000B1D4: nop
    
            goto L_8000B1E4;
    }
    // 0x8000B1D4: nop

    // 0x8000B1D8: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x8000B1DC: jal         0x80009B4C
    // 0x8000B1E0: nop

    func_80009B4C(rdram, ctx);
        goto after_5;
    // 0x8000B1E0: nop

    after_5:
L_8000B1E4:
    // 0x8000B1E4: b           L_8000B1EC
    // 0x8000B1E8: nop

        goto L_8000B1EC;
    // 0x8000B1E8: nop

L_8000B1EC:
    // 0x8000B1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000B1F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8000B1F4: jr          $ra
    // 0x8000B1F8: nop

    return;
    // 0x8000B1F8: nop

;}
RECOMP_FUNC void func_8001B6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B6BC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8001B6C0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B6C4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B6C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B6CC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B6D0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B6D4: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001B6D8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B6DC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001B6E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B6E4: lh          $t9, 0x4290($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4290);
    // 0x8001B6E8: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8001B6EC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8001B6F0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8001B6F4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8001B6F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001B6FC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001B700: swc1        $f4, 0x52B4($at)
    MEM_W(0X52B4, ctx->r1) = ctx->f4.u32l;
    // 0x8001B704: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8001B708: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001B70C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001B710: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001B714: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001B718: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x8001B71C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8001B720: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8001B724: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001B728: lh          $t4, 0x4290($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4290);
    // 0x8001B72C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001B730: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001B734: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8001B738: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8001B73C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001B740: sb          $zero, 0x52A6($at)
    MEM_B(0X52A6, ctx->r1) = 0;
    // 0x8001B744: b           L_8001B74C
    // 0x8001B748: nop

        goto L_8001B74C;
    // 0x8001B748: nop

L_8001B74C:
    // 0x8001B74C: jr          $ra
    // 0x8001B750: nop

    return;
    // 0x8001B750: nop

;}
RECOMP_FUNC void func_8000CAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CAD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CAE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000CAE4: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8000CAE8: jal         0x80002D90
    // 0x8000CAEC: nop

    func_80002D90(rdram, ctx);
        goto after_0;
    // 0x8000CAEC: nop

    after_0:
    // 0x8000CAF0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CAF4: sh          $v0, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = ctx->r2;
    // 0x8000CAF8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000CAFC: lh          $t6, 0x2D76($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D76);
    // 0x8000CB00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CB04: sh          $t6, 0x2D74($at)
    MEM_H(0X2D74, ctx->r1) = ctx->r14;
    // 0x8000CB08: jal         0x8000678C
    // 0x8000CB0C: nop

    func_8000678C(rdram, ctx);
        goto after_1;
    // 0x8000CB0C: nop

    after_1:
    // 0x8000CB10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000CB14: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CB18: swc1        $f4, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f4.u32l;
    // 0x8000CB1C: b           L_8000CB24
    // 0x8000CB20: nop

        goto L_8000CB24;
    // 0x8000CB20: nop

L_8000CB24:
    // 0x8000CB24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000CB28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000CB2C: jr          $ra
    // 0x8000CB30: nop

    return;
    // 0x8000CB30: nop

;}
RECOMP_FUNC void alFilterNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046400: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80046404: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80046408: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8004640C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x80046410: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80046414: jr          $ra
    // 0x80046418: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    return;
    // 0x80046418: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_80022454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80022454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80022458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002245C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80022460: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80022464: nop

    // 0x80022468: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8002246C: nop

    // 0x80022470: bne         $t7, $zero, L_80022480
    if (ctx->r15 != 0) {
        // 0x80022474: nop
    
            goto L_80022480;
    }
    // 0x80022474: nop

    // 0x80022478: b           L_80022548
    // 0x8002247C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80022548;
    // 0x8002247C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80022480:
    // 0x80022480: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80022484: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80022488: addiu       $t0, $t9, 0x2A0
    ctx->r8 = ADD32(ctx->r25, 0X2A0);
    // 0x8002248C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80022490: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80022494: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_80022498:
    // 0x80022498: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8002249C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800224A0: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x800224A4: nop

    // 0x800224A8: beq         $t2, $at, L_800224E0
    if (ctx->r10 == ctx->r1) {
        // 0x800224AC: nop
    
            goto L_800224E0;
    }
    // 0x800224AC: nop

    // 0x800224B0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x800224B4: beq         $t2, $at, L_800224E0
    if (ctx->r10 == ctx->r1) {
        // 0x800224B8: nop
    
            goto L_800224E0;
    }
    // 0x800224B8: nop

    // 0x800224BC: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x800224C0: beq         $t2, $at, L_800224E0
    if (ctx->r10 == ctx->r1) {
        // 0x800224C4: nop
    
            goto L_800224E0;
    }
    // 0x800224C4: nop

    // 0x800224C8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x800224CC: beq         $t2, $at, L_800224E0
    if (ctx->r10 == ctx->r1) {
        // 0x800224D0: nop
    
            goto L_800224E0;
    }
    // 0x800224D0: nop

    // 0x800224D4: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x800224D8: bne         $t2, $at, L_80022518
    if (ctx->r10 != ctx->r1) {
        // 0x800224DC: nop
    
            goto L_80022518;
    }
    // 0x800224DC: nop

L_800224E0:
    // 0x800224E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800224E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800224E8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800224EC: jal         0x80077CB0
    // 0x800224F0: addiu       $a3, $sp, 0x22
    ctx->r7 = ADD32(ctx->r29, 0X22);
    func_80077CB0(rdram, ctx);
        goto after_0;
    // 0x800224F0: addiu       $a3, $sp, 0x22
    ctx->r7 = ADD32(ctx->r29, 0X22);
    after_0:
    // 0x800224F4: beq         $v0, $zero, L_80022518
    if (ctx->r2 == 0) {
        // 0x800224F8: nop
    
            goto L_80022518;
    }
    // 0x800224F8: nop

    // 0x800224FC: lh          $t3, 0x24($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X24);
    // 0x80022500: nop

    // 0x80022504: bne         $t3, $zero, L_80022518
    if (ctx->r11 != 0) {
        // 0x80022508: nop
    
            goto L_80022518;
    }
    // 0x80022508: nop

    // 0x8002250C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80022510: b           L_80022548
    // 0x80022514: nop

        goto L_80022548;
    // 0x80022514: nop

L_80022518:
    // 0x80022518: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8002251C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80022520: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80022524: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x80022528: addiu       $t7, $t6, 0x150
    ctx->r15 = ADD32(ctx->r14, 0X150);
    // 0x8002252C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80022530: bne         $at, $zero, L_80022498
    if (ctx->r1 != 0) {
        // 0x80022534: sw          $t5, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r13;
            goto L_80022498;
    }
    // 0x80022534: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80022538: b           L_80022548
    // 0x8002253C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80022548;
    // 0x8002253C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80022540: b           L_80022548
    // 0x80022544: nop

        goto L_80022548;
    // 0x80022544: nop

L_80022548:
    // 0x80022548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002254C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80022550: jr          $ra
    // 0x80022554: nop

    return;
    // 0x80022554: nop

;}
RECOMP_FUNC void Math_TaylorSeries(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014A48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80014A4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80014A50: nop

    // 0x80014A54: swc1        $f4, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f4.u32l;
    // 0x80014A58: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x80014A5C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80014A60: swc1        $f6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f6.u32l;
    // 0x80014A64: swc1        $f12, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f12.u32l;
    // 0x80014A68: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80014A6C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
L_80014A70:
    // 0x80014A70: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80014A74: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80014A78: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80014A7C: multu       $t8, $t7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014A80: mflo        $t9
    ctx->r25 = lo;
    // 0x80014A84: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80014A88: nop

    // 0x80014A8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80014A90: mul.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80014A94: swc1        $f18, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f18.u32l;
    // 0x80014A98: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80014A9C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80014AA0: nop

    // 0x80014AA4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80014AA8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80014AAC: lwc1        $f16, 0x10($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80014AB0: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80014AB4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80014AB8: div.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80014ABC: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x80014AC0: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80014AC4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80014AC8: nop

    // 0x80014ACC: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x80014AD0: slti        $at, $t1, 0x7
    ctx->r1 = SIGNED(ctx->r9) < 0X7 ? 1 : 0;
    // 0x80014AD4: bne         $at, $zero, L_80014A70
    if (ctx->r1 != 0) {
        // 0x80014AD8: sw          $t1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r9;
            goto L_80014A70;
    }
    // 0x80014AD8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80014ADC: lwc1        $f0, 0x4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80014AE0: b           L_80014AF0
    // 0x80014AE4: nop

        goto L_80014AF0;
    // 0x80014AE4: nop

    // 0x80014AE8: b           L_80014AF0
    // 0x80014AEC: nop

        goto L_80014AF0;
    // 0x80014AEC: nop

L_80014AF0:
    // 0x80014AF0: jr          $ra
    // 0x80014AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80014AF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80029A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029A9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80029AA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80029AA4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80029AA8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80029AAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80029AB0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80029AB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029AB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029ABC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029AC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80029AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029AC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029ACC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029AD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80029AD4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80029AD8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80029ADC: nop

    // 0x80029AE0: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80029AE4: nop

    // 0x80029AE8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80029AEC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80029AF0: nop

    // 0x80029AF4: bne         $t1, $zero, L_80029B14
    if (ctx->r9 != 0) {
        // 0x80029AF8: nop
    
            goto L_80029B14;
    }
    // 0x80029AF8: nop

    // 0x80029AFC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80029B00: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80029B04: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029B08: jal         0x80015538
    // 0x80029B0C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80029B0C: nop

    after_0:
    // 0x80029B10: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_80029B14:
    // 0x80029B14: jal         0x80014E80
    // 0x80029B18: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80029B18: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    after_1:
    // 0x80029B1C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80029B20: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x80029B24: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x80029B28: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80029B2C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80029B30: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029B34: jal         0x80015538
    // 0x80029B38: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80029B38: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_2:
    // 0x80029B3C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80029B40: nop

    // 0x80029B44: swc1        $f0, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f0.u32l;
    // 0x80029B48: b           L_80029B50
    // 0x80029B4C: nop

        goto L_80029B50;
    // 0x80029B4C: nop

L_80029B50:
    // 0x80029B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80029B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80029B58: jr          $ra
    // 0x80029B5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80029B5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001A928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001A92C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A930: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001A934: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001A938: jal         0x8001A88C
    // 0x8001A93C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001A88C(rdram, ctx);
        goto after_0;
    // 0x8001A93C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8001A940: b           L_8001A948
    // 0x8001A944: nop

        goto L_8001A948;
    // 0x8001A944: nop

L_8001A948:
    // 0x8001A948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001A950: jr          $ra
    // 0x8001A954: nop

    return;
    // 0x8001A954: nop

;}
RECOMP_FUNC void func_800065B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800065B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800065BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800065C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800065C4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800065C8: nop

    // 0x800065CC: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x800065D0: nop

    // 0x800065D4: beq         $t7, $zero, L_800065EC
    if (ctx->r15 == 0) {
        // 0x800065D8: nop
    
            goto L_800065EC;
    }
    // 0x800065D8: nop

    // 0x800065DC: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x800065E0: nop

    // 0x800065E4: bne         $t8, $zero, L_800065F4
    if (ctx->r24 != 0) {
        // 0x800065E8: nop
    
            goto L_800065F4;
    }
    // 0x800065E8: nop

L_800065EC:
    // 0x800065EC: b           L_8000677C
    // 0x800065F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000677C;
    // 0x800065F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800065F4:
    // 0x800065F4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800065F8: nop

    // 0x800065FC: lw          $t0, 0x18($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X18);
    // 0x80006600: nop

    // 0x80006604: sh          $t0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r8;
    // 0x80006608: lh          $t1, 0x1C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1C);
    // 0x8000660C: nop

    // 0x80006610: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80006614: beq         $t2, $zero, L_8000662C
    if (ctx->r10 == 0) {
        // 0x80006618: nop
    
            goto L_8000662C;
    }
    // 0x80006618: nop

    // 0x8000661C: lh          $t3, 0x1C($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1C);
    // 0x80006620: nop

    // 0x80006624: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80006628: sh          $t4, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r12;
L_8000662C:
    // 0x8000662C: lh          $a0, 0x1C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1C);
    // 0x80006630: jal         0x8000D84C
    // 0x80006634: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x80006634: nop

    after_0:
    // 0x80006638: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000663C: sw          $v0, 0x2D80($at)
    MEM_W(0X2D80, ctx->r1) = ctx->r2;
    // 0x80006640: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80006644: lw          $t5, 0x2D80($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D80);
    // 0x80006648: nop

    // 0x8000664C: bne         $t5, $zero, L_8000665C
    if (ctx->r13 != 0) {
        // 0x80006650: nop
    
            goto L_8000665C;
    }
    // 0x80006650: nop

    // 0x80006654: b           L_8000677C
    // 0x80006658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000677C;
    // 0x80006658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000665C:
    // 0x8000665C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80006660: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006664: lw          $t8, -0x5CAC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CAC);
    // 0x80006668: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x8000666C: nop

    // 0x80006670: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80006674: sw          $t9, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r25;
    // 0x80006678: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8000667C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80006680: lw          $a1, 0x2D80($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2D80);
    // 0x80006684: lh          $a2, 0x1C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1C);
    // 0x80006688: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8000668C: jal         0x80002CD0
    // 0x80006690: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x80006690: nop

    after_1:
    // 0x80006694: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80006698: lw          $t1, 0x2D80($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D80);
    // 0x8000669C: nop

    // 0x800066A0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800066A4: nop

    // 0x800066A8: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x800066AC: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x800066B0: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800066B4: lw          $t4, 0x2D80($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D80);
    // 0x800066B8: nop

    // 0x800066BC: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x800066C0: nop

    // 0x800066C4: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x800066C8: sw          $t6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r14;
    // 0x800066CC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800066D0: lw          $t8, -0x5CF4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CF4);
    // 0x800066D4: nop

    // 0x800066D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800066DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800066E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800066E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800066E8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800066EC: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    // 0x800066F0: lh          $a0, 0x1C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1C);
    // 0x800066F4: jal         0x8000D84C
    // 0x800066F8: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_2;
    // 0x800066F8: nop

    after_2:
    // 0x800066FC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80006700: sw          $v0, 0x2D84($at)
    MEM_W(0X2D84, ctx->r1) = ctx->r2;
    // 0x80006704: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80006708: lw          $t7, 0x2D84($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D84);
    // 0x8000670C: nop

    // 0x80006710: bne         $t7, $zero, L_80006720
    if (ctx->r15 != 0) {
        // 0x80006714: nop
    
            goto L_80006720;
    }
    // 0x80006714: nop

    // 0x80006718: b           L_8000677C
    // 0x8000671C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000677C;
    // 0x8000671C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80006720:
    // 0x80006720: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80006724: lw          $t0, -0x5CF4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CF4);
    // 0x80006728: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x8000672C: blez        $t0, L_80006764
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80006730: nop
    
            goto L_80006764;
    }
    // 0x80006730: nop

L_80006734:
    // 0x80006734: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80006738: jal         0x80009B4C
    // 0x8000673C: nop

    func_80009B4C(rdram, ctx);
        goto after_3;
    // 0x8000673C: nop

    after_3:
    // 0x80006740: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80006744: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80006748: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000674C: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x80006750: sll         $t1, $t3, 16
    ctx->r9 = S32(ctx->r11 << 16);
    // 0x80006754: sra         $t5, $t1, 16
    ctx->r13 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80006758: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8000675C: bne         $at, $zero, L_80006734
    if (ctx->r1 != 0) {
        // 0x80006760: sh          $t3, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r11;
            goto L_80006734;
    }
    // 0x80006760: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
L_80006764:
    // 0x80006764: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80006768: sb          $zero, 0x2D7D($at)
    MEM_B(0X2D7D, ctx->r1) = 0;
    // 0x8000676C: b           L_8000677C
    // 0x80006770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000677C;
    // 0x80006770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80006774: b           L_8000677C
    // 0x80006778: nop

        goto L_8000677C;
    // 0x80006778: nop

L_8000677C:
    // 0x8000677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006780: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80006784: jr          $ra
    // 0x80006788: nop

    return;
    // 0x80006788: nop

;}
RECOMP_FUNC void func_8002D768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002D76C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D770: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002D774: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002D778: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x8002D77C: nop

    // 0x8002D780: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x8002D784: beq         $t7, $zero, L_8002D800
    if (ctx->r15 == 0) {
        // 0x8002D788: nop
    
            goto L_8002D800;
    }
    // 0x8002D788: nop

    // 0x8002D78C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002D790: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x8002D794: nop

    // 0x8002D798: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8002D79C: beq         $t9, $zero, L_8002D7B0
    if (ctx->r25 == 0) {
        // 0x8002D7A0: nop
    
            goto L_8002D7B0;
    }
    // 0x8002D7A0: nop

    // 0x8002D7A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002D7A8: b           L_8002D7D0
    // 0x8002D7AC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_8002D7D0;
    // 0x8002D7AC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8002D7B0:
    // 0x8002D7B0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002D7B4: lhu         $t1, -0x1C82($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C82);
    // 0x8002D7B8: nop

    // 0x8002D7BC: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x8002D7C0: beq         $t2, $zero, L_8002D7D0
    if (ctx->r10 == 0) {
        // 0x8002D7C4: nop
    
            goto L_8002D7D0;
    }
    // 0x8002D7C4: nop

    // 0x8002D7C8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8002D7CC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_8002D7D0:
    // 0x8002D7D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002D7D4: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x8002D7D8: nop

    // 0x8002D7DC: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x8002D7E0: beq         $t5, $zero, L_8002D800
    if (ctx->r13 == 0) {
        // 0x8002D7E4: nop
    
            goto L_8002D800;
    }
    // 0x8002D7E4: nop

    // 0x8002D7E8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D7EC: nop

    // 0x8002D7F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002D7F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002D7F8: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8002D7FC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8002D800:
    // 0x8002D800: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D804: nop

    // 0x8002D808: beq         $t8, $zero, L_8002D8E4
    if (ctx->r24 == 0) {
        // 0x8002D80C: nop
    
            goto L_8002D8E4;
    }
    // 0x8002D80C: nop

L_8002D810:
    // 0x8002D810: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002D814: lh          $t9, 0x7690($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7690);
    // 0x8002D818: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D81C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D820: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8002D824: sh          $t1, 0x7690($at)
    MEM_H(0X7690, ctx->r1) = ctx->r9;
    // 0x8002D828: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002D82C: lh          $t2, 0x7690($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7690);
    // 0x8002D830: nop

    // 0x8002D834: slti        $at, $t2, 0x20
    ctx->r1 = SIGNED(ctx->r10) < 0X20 ? 1 : 0;
    // 0x8002D838: beq         $at, $zero, L_8002D850
    if (ctx->r1 == 0) {
        // 0x8002D83C: nop
    
            goto L_8002D850;
    }
    // 0x8002D83C: nop

    // 0x8002D840: addiu       $t3, $zero, 0x287
    ctx->r11 = ADD32(0, 0X287);
    // 0x8002D844: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D848: b           L_8002D874
    // 0x8002D84C: sh          $t3, 0x7690($at)
    MEM_H(0X7690, ctx->r1) = ctx->r11;
        goto L_8002D874;
    // 0x8002D84C: sh          $t3, 0x7690($at)
    MEM_H(0X7690, ctx->r1) = ctx->r11;
L_8002D850:
    // 0x8002D850: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002D854: lh          $t4, 0x7690($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7690);
    // 0x8002D858: nop

    // 0x8002D85C: slti        $at, $t4, 0x288
    ctx->r1 = SIGNED(ctx->r12) < 0X288 ? 1 : 0;
    // 0x8002D860: bne         $at, $zero, L_8002D874
    if (ctx->r1 != 0) {
        // 0x8002D864: nop
    
            goto L_8002D874;
    }
    // 0x8002D864: nop

    // 0x8002D868: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x8002D86C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D870: sh          $t5, 0x7690($at)
    MEM_H(0X7690, ctx->r1) = ctx->r13;
L_8002D874:
    // 0x8002D874: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002D878: lh          $t6, 0x7690($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7690);
    // 0x8002D87C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8002D880: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002D884: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002D888: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x8002D88C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002D890: lw          $t8, 0x4DC8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4DC8);
    // 0x8002D894: nop

    // 0x8002D898: beq         $t8, $zero, L_8002D8A8
    if (ctx->r24 == 0) {
        // 0x8002D89C: nop
    
            goto L_8002D8A8;
    }
    // 0x8002D89C: nop

    // 0x8002D8A0: b           L_8002D8B0
    // 0x8002D8A4: nop

        goto L_8002D8B0;
    // 0x8002D8A4: nop

L_8002D8A8:
    // 0x8002D8A8: b           L_8002D810
    // 0x8002D8AC: nop

        goto L_8002D810;
    // 0x8002D8AC: nop

L_8002D8B0:
    // 0x8002D8B0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D8B4: sh          $zero, 0x7694($at)
    MEM_H(0X7694, ctx->r1) = 0;
    // 0x8002D8B8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D8BC: sh          $zero, 0x7696($at)
    MEM_H(0X7696, ctx->r1) = 0;
    // 0x8002D8C0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D8C4: sh          $zero, 0x7698($at)
    MEM_H(0X7698, ctx->r1) = 0;
    // 0x8002D8C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D8CC: sh          $zero, 0x769A($at)
    MEM_H(0X769A, ctx->r1) = 0;
    // 0x8002D8D0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8002D8D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002D8D8: sh          $t9, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = ctx->r25;
    // 0x8002D8DC: jal         0x8002D538
    // 0x8002D8E0: nop

    func_8002D538(rdram, ctx);
        goto after_0;
    // 0x8002D8E0: nop

    after_0:
L_8002D8E4:
    // 0x8002D8E4: b           L_8002D8EC
    // 0x8002D8E8: nop

        goto L_8002D8EC;
    // 0x8002D8E8: nop

L_8002D8EC:
    // 0x8002D8EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D8F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002D8F4: jr          $ra
    // 0x8002D8F8: nop

    return;
    // 0x8002D8F8: nop

;}
RECOMP_FUNC void alInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003583C: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80035840: addiu       $v0, $v0, -0x4AF0
    ctx->r2 = ADD32(ctx->r2, -0X4AF0);
    // 0x80035844: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80035848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003584C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035850: bnel        $t6, $zero, L_80035864
    if (ctx->r14 != 0) {
        // 0x80035854: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80035864;
    }
    goto skip_0;
    // 0x80035854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80035858: jal         0x80035DF0
    // 0x8003585C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    alSynNew(rdram, ctx);
        goto after_0;
    // 0x8003585C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x80035860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035864:
    // 0x80035864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035868: jr          $ra
    // 0x8003586C: nop

    return;
    // 0x8003586C: nop

;}
RECOMP_FUNC void __seqpStopOsc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E3F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003E3F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003E3F8: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8003E3FC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8003E400: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003E404: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003E408: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003E40C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003E410: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003E414: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003E418: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x8003E41C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8003E420: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8003E424: beq         $s0, $zero, L_8003E4C8
    if (ctx->r16 == 0) {
        // 0x8003E428: addiu       $s7, $zero, 0x17
        ctx->r23 = ADD32(0, 0X17);
            goto L_8003E4C8;
    }
    // 0x8003E428: addiu       $s7, $zero, 0x17
    ctx->r23 = ADD32(0, 0X17);
    // 0x8003E42C: addiu       $s6, $zero, 0x16
    ctx->r22 = ADD32(0, 0X16);
L_8003E430:
    // 0x8003E430: lh          $s3, 0xC($s0)
    ctx->r19 = MEM_H(ctx->r16, 0XC);
    // 0x8003E434: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8003E438: beql        $s3, $s6, L_8003E44C
    if (ctx->r19 == ctx->r22) {
        // 0x8003E43C: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_8003E44C;
    }
    goto skip_0;
    // 0x8003E43C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x8003E440: bne         $s3, $s7, L_8003E4C0
    if (ctx->r19 != ctx->r23) {
        // 0x8003E444: nop
    
            goto L_8003E4C0;
    }
    // 0x8003E444: nop

    // 0x8003E448: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_8003E44C:
    // 0x8003E44C: bne         $s2, $t6, L_8003E4C0
    if (ctx->r18 != ctx->r14) {
        // 0x8003E450: nop
    
            goto L_8003E4C0;
    }
    // 0x8003E450: nop

    // 0x8003E454: lw          $t9, 0x78($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X78);
    // 0x8003E458: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8003E45C: addiu       $s4, $s5, 0x48
    ctx->r20 = ADD32(ctx->r21, 0X48);
    // 0x8003E460: jalr        $t9
    // 0x8003E464: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8003E464: nop

    after_0:
    // 0x8003E468: jal         0x800357B0
    // 0x8003E46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8003E46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003E470: beq         $s1, $zero, L_8003E488
    if (ctx->r17 == 0) {
        // 0x8003E474: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8003E488;
    }
    // 0x8003E474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E478: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8003E47C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8003E480: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E484: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_8003E488:
    // 0x8003E488: jal         0x800357E0
    // 0x8003E48C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8003E48C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8003E490: bnel        $s3, $s6, L_8003E4AC
    if (ctx->r19 != ctx->r22) {
        // 0x8003E494: lbu         $t3, 0x37($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X37);
            goto L_8003E4AC;
    }
    goto skip_1;
    // 0x8003E494: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
    skip_1:
    // 0x8003E498: lbu         $t1, 0x37($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X37);
    // 0x8003E49C: andi        $t2, $t1, 0xFE
    ctx->r10 = ctx->r9 & 0XFE;
    // 0x8003E4A0: b           L_8003E4B4
    // 0x8003E4A4: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
        goto L_8003E4B4;
    // 0x8003E4A4: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
    // 0x8003E4A8: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
L_8003E4AC:
    // 0x8003E4AC: andi        $t4, $t3, 0xFD
    ctx->r12 = ctx->r11 & 0XFD;
    // 0x8003E4B0: sb          $t4, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r12;
L_8003E4B4:
    // 0x8003E4B4: lbu         $t5, 0x37($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X37);
    // 0x8003E4B8: beql        $t5, $zero, L_8003E4CC
    if (ctx->r13 == 0) {
        // 0x8003E4BC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_8003E4CC;
    }
    goto skip_2;
    // 0x8003E4BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
L_8003E4C0:
    // 0x8003E4C0: bne         $s1, $zero, L_8003E430
    if (ctx->r17 != 0) {
        // 0x8003E4C4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8003E430;
    }
    // 0x8003E4C4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8003E4C8:
    // 0x8003E4C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8003E4CC:
    // 0x8003E4CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003E4D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003E4D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E4D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003E4DC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003E4E0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003E4E4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E4E8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8003E4EC: jr          $ra
    // 0x8003E4F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003E4F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80001A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001A20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001A28: lui         $t6, 0x21
    ctx->r14 = S32(0X21 << 16);
    // 0x80001A2C: lui         $t7, 0x21
    ctx->r15 = S32(0X21 << 16);
    // 0x80001A30: addiu       $t7, $t7, -0xA50
    ctx->r15 = ADD32(ctx->r15, -0XA50);
    // 0x80001A34: addiu       $t6, $t6, -0x25A0
    ctx->r14 = ADD32(ctx->r14, -0X25A0);
    // 0x80001A38: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80001A3C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80001A40: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001A44: jal         0x8000068C
    // 0x80001A48: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001A48: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    after_0:
    // 0x80001A4C: b           L_80001A54
    // 0x80001A50: nop

        goto L_80001A54;
    // 0x80001A50: nop

L_80001A54:
    // 0x80001A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001A5C: jr          $ra
    // 0x80001A60: nop

    return;
    // 0x80001A60: nop

;}
RECOMP_FUNC void func_8002B670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B670: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8002B674: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8002B678:
    // 0x8002B678: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8002B67C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B680: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8002B684: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002B688: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8002B68C: sh          $t6, 0x76A8($at)
    MEM_H(0X76A8, ctx->r1) = ctx->r14;
    // 0x8002B690: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8002B694: nop

    // 0x8002B698: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8002B69C: slti        $at, $t0, 0x81
    ctx->r1 = SIGNED(ctx->r8) < 0X81 ? 1 : 0;
    // 0x8002B6A0: bne         $at, $zero, L_8002B678
    if (ctx->r1 != 0) {
        // 0x8002B6A4: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_8002B678;
    }
    // 0x8002B6A4: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8002B6A8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8002B6AC:
    // 0x8002B6AC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8002B6B0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002B6B4: lw          $t1, 0x796C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X796C);
    // 0x8002B6B8: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8002B6BC: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8002B6C0: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8002B6C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002B6C8: bne         $t5, $at, L_8002B6D8
    if (ctx->r13 != ctx->r1) {
        // 0x8002B6CC: nop
    
            goto L_8002B6D8;
    }
    // 0x8002B6CC: nop

    // 0x8002B6D0: b           L_8002B810
    // 0x8002B6D4: nop

        goto L_8002B810;
    // 0x8002B6D4: nop

L_8002B6D8:
    // 0x8002B6D8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8002B6DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002B6E0: lw          $t7, 0x796C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X796C);
    // 0x8002B6E4: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8002B6E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002B6EC: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8002B6F0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B6F4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002B6F8: sh          $t0, 0x76A8($at)
    MEM_H(0X76A8, ctx->r1) = ctx->r8;
    // 0x8002B6FC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8002B700: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002B704: lw          $t2, 0x796C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X796C);
    // 0x8002B708: sll         $t3, $t1, 4
    ctx->r11 = S32(ctx->r9 << 4);
    // 0x8002B70C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8002B710: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x8002B714: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B718: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8002B71C: sh          $t5, 0x76AA($at)
    MEM_H(0X76AA, ctx->r1) = ctx->r13;
    // 0x8002B720: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8002B724: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002B728: lw          $t6, 0x796C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X796C);
    // 0x8002B72C: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x8002B730: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x8002B734: lh          $t8, 0x4($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X4);
    // 0x8002B738: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B73C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002B740: sh          $t8, 0x76AC($at)
    MEM_H(0X76AC, ctx->r1) = ctx->r24;
    // 0x8002B744: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8002B748: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002B74C: lw          $t1, 0x796C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X796C);
    // 0x8002B750: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x8002B754: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x8002B758: lh          $t3, 0x6($t5)
    ctx->r11 = MEM_H(ctx->r13, 0X6);
    // 0x8002B75C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B760: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8002B764: sh          $t3, 0x76AE($at)
    MEM_H(0X76AE, ctx->r1) = ctx->r11;
    // 0x8002B768: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8002B76C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002B770: lw          $t7, 0x796C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X796C);
    // 0x8002B774: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x8002B778: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x8002B77C: lh          $t9, 0x8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8);
    // 0x8002B780: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B784: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002B788: sh          $t9, 0x76B0($at)
    MEM_H(0X76B0, ctx->r1) = ctx->r25;
    // 0x8002B78C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8002B790: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002B794: lw          $t2, 0x796C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X796C);
    // 0x8002B798: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x8002B79C: addu        $t3, $t2, $t5
    ctx->r11 = ADD32(ctx->r10, ctx->r13);
    // 0x8002B7A0: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x8002B7A4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B7A8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8002B7AC: sh          $t4, 0x76B2($at)
    MEM_H(0X76B2, ctx->r1) = ctx->r12;
    // 0x8002B7B0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8002B7B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002B7B8: lw          $t6, 0x796C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X796C);
    // 0x8002B7BC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8002B7C0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8002B7C4: lh          $t0, 0xC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC);
    // 0x8002B7C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B7CC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002B7D0: sh          $t0, 0x76B4($at)
    MEM_H(0X76B4, ctx->r1) = ctx->r8;
    // 0x8002B7D4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8002B7D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002B7DC: lw          $t1, 0x796C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X796C);
    // 0x8002B7E0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8002B7E4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8002B7E8: lh          $t5, 0xE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE);
    // 0x8002B7EC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002B7F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8002B7F4: sh          $t5, 0x76B6($at)
    MEM_H(0X76B6, ctx->r1) = ctx->r13;
    // 0x8002B7F8: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8002B7FC: nop

    // 0x8002B800: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8002B804: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x8002B808: bne         $at, $zero, L_8002B6AC
    if (ctx->r1 != 0) {
        // 0x8002B80C: sw          $t6, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r14;
            goto L_8002B6AC;
    }
    // 0x8002B80C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_8002B810:
    // 0x8002B810: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002B814: addiu       $t9, $t9, 0x76A8
    ctx->r25 = ADD32(ctx->r25, 0X76A8);
    // 0x8002B818: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002B81C: sw          $t9, 0x796C($at)
    MEM_W(0X796C, ctx->r1) = ctx->r25;
    // 0x8002B820: b           L_8002B828
    // 0x8002B824: nop

        goto L_8002B828;
    // 0x8002B824: nop

L_8002B828:
    // 0x8002B828: jr          $ra
    // 0x8002B82C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8002B82C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80001E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001E78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80001E7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001E80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80001E84: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80001E88: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80001E8C: jal         0x80031F70
    // 0x80001E90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80001E90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80001E94: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80001E98: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80001E9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80001EA0: nop

    // 0x80001EA4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80001EA8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80001EAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80001EB0: lw          $t9, 0x260($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X260);
    // 0x80001EB4: nop

    // 0x80001EB8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80001EBC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80001EC0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80001EC4: nop

    // 0x80001EC8: sw          $t1, 0x260($t2)
    MEM_W(0X260, ctx->r10) = ctx->r9;
    // 0x80001ECC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80001ED0: jal         0x80031F70
    // 0x80001ED4: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80001ED4: nop

    after_1:
    // 0x80001ED8: b           L_80001EE0
    // 0x80001EDC: nop

        goto L_80001EE0;
    // 0x80001EDC: nop

L_80001EE0:
    // 0x80001EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001EE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80001EE8: jr          $ra
    // 0x80001EEC: nop

    return;
    // 0x80001EEC: nop

;}
RECOMP_FUNC void func_8001D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D2C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D2C4: lb          $t6, -0x1EE4($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1EE4);
    // 0x8001D2C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001D2CC: beq         $t6, $at, L_8001D2EC
    if (ctx->r14 == ctx->r1) {
        // 0x8001D2D0: nop
    
            goto L_8001D2EC;
    }
    // 0x8001D2D0: nop

    // 0x8001D2D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001D2D8: beq         $t6, $at, L_8001D2EC
    if (ctx->r14 == ctx->r1) {
        // 0x8001D2DC: nop
    
            goto L_8001D2EC;
    }
    // 0x8001D2DC: nop

    // 0x8001D2E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8001D2E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D2E8: sb          $t7, -0x1EE4($at)
    MEM_B(-0X1EE4, ctx->r1) = ctx->r15;
L_8001D2EC:
    // 0x8001D2EC: jr          $ra
    // 0x8001D2F0: nop

    return;
    // 0x8001D2F0: nop

    // 0x8001D2F4: jr          $ra
    // 0x8001D2F8: nop

    return;
    // 0x8001D2F8: nop

;}
RECOMP_FUNC void func_80026F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80026F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026F14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_80026F18:
    // 0x80026F18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80026F1C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026F20: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80026F24: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80026F28: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026F2C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80026F30: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80026F34: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80026F38: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80026F3C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80026F40: lh          $t0, 0x425E($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X425E);
    // 0x80026F44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80026F48: bne         $t0, $at, L_80026F84
    if (ctx->r8 != ctx->r1) {
        // 0x80026F4C: nop
    
            goto L_80026F84;
    }
    // 0x80026F4C: nop

    // 0x80026F50: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x80026F54: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80026F58: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80026F5C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80026F60: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80026F64: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80026F68: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80026F6C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80026F70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80026F74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80026F78: sh          $a1, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r5;
    // 0x80026F7C: b           L_80026F9C
    // 0x80026F80: nop

        goto L_80026F9C;
    // 0x80026F80: nop

L_80026F84:
    // 0x80026F84: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80026F88: nop

    // 0x80026F8C: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80026F90: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x80026F94: bne         $at, $zero, L_80026F18
    if (ctx->r1 != 0) {
        // 0x80026F98: sw          $t7, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r15;
            goto L_80026F18;
    }
    // 0x80026F98: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
L_80026F9C:
    // 0x80026F9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_80026FA0:
    // 0x80026FA0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80026FA4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026FA8: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80026FAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80026FB0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80026FB4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80026FB8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80026FBC: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80026FC0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80026FC4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80026FC8: lh          $t2, 0x425E($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X425E);
    // 0x80026FCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80026FD0: beq         $t2, $at, L_800272C0
    if (ctx->r10 == ctx->r1) {
        // 0x80026FD4: sw          $t2, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r10;
            goto L_800272C0;
    }
    // 0x80026FD4: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80026FD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_80026FDC:
    // 0x80026FDC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80026FE0: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80026FE4: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80026FE8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80026FEC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80026FF0: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x80026FF4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80026FF8: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80026FFC: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x80027000: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80027004: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80027008: lh          $t8, 0x425E($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X425E);
    // 0x8002700C: nop

    // 0x80027010: bne         $t8, $a0, L_80027020
    if (ctx->r24 != ctx->r4) {
        // 0x80027014: nop
    
            goto L_80027020;
    }
    // 0x80027014: nop

    // 0x80027018: b           L_80027038
    // 0x8002701C: nop

        goto L_80027038;
    // 0x8002701C: nop

L_80027020:
    // 0x80027020: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80027024: nop

    // 0x80027028: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8002702C: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x80027030: bne         $at, $zero, L_80026FDC
    if (ctx->r1 != 0) {
        // 0x80027034: sw          $t9, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r25;
            goto L_80026FDC;
    }
    // 0x80027034: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
L_80027038:
    // 0x80027038: lw          $t0, 0x10($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X10);
    // 0x8002703C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80027040: bne         $t0, $at, L_800270D8
    if (ctx->r8 != ctx->r1) {
        // 0x80027044: nop
    
            goto L_800270D8;
    }
    // 0x80027044: nop

    // 0x80027048: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_8002704C:
    // 0x8002704C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80027050: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80027054: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80027058: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8002705C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80027060: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80027064: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80027068: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x8002706C: addu        $t5, $t1, $t3
    ctx->r13 = ADD32(ctx->r9, ctx->r11);
    // 0x80027070: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80027074: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80027078: lh          $t7, 0x425E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X425E);
    // 0x8002707C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027080: bne         $t7, $at, L_800270C0
    if (ctx->r15 != ctx->r1) {
        // 0x80027084: nop
    
            goto L_800270C0;
    }
    // 0x80027084: nop

    // 0x80027088: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8002708C: lw          $t9, 0x10($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X10);
    // 0x80027090: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80027094: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80027098: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002709C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800270A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800270A4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800270A8: addu        $t2, $t6, $t0
    ctx->r10 = ADD32(ctx->r14, ctx->r8);
    // 0x800270AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800270B0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800270B4: sh          $a0, 0x425E($at)
    MEM_H(0X425E, ctx->r1) = ctx->r4;
    // 0x800270B8: b           L_800270D8
    // 0x800270BC: nop

        goto L_800270D8;
    // 0x800270BC: nop

L_800270C0:
    // 0x800270C0: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x800270C4: nop

    // 0x800270C8: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x800270CC: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x800270D0: bne         $at, $zero, L_8002704C
    if (ctx->r1 != 0) {
        // 0x800270D4: sw          $t1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r9;
            goto L_8002704C;
    }
    // 0x800270D4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
L_800270D8:
    // 0x800270D8: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_800270DC:
    // 0x800270DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
L_800270E0:
    // 0x800270E0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800270E4: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x800270E8: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x800270EC: lw          $t5, 0xC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC);
    // 0x800270F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800270F4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800270F8: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x800270FC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80027100: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x80027104: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80027108: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002710C: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80027110: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80027114: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80027118: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8002711C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80027120: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80027124: sll         $t5, $t1, 1
    ctx->r13 = S32(ctx->r9 << 1);
    // 0x80027128: addu        $t3, $t4, $t5
    ctx->r11 = ADD32(ctx->r12, ctx->r13);
    // 0x8002712C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80027130: addu        $t7, $t3, $t9
    ctx->r15 = ADD32(ctx->r11, ctx->r25);
    // 0x80027134: lh          $t8, 0x10E($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X10E);
    // 0x80027138: lh          $t0, 0x10E($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X10E);
    // 0x8002713C: nop

    // 0x80027140: bne         $t0, $t8, L_80027188
    if (ctx->r8 != ctx->r24) {
        // 0x80027144: nop
    
            goto L_80027188;
    }
    // 0x80027144: nop

    // 0x80027148: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002714C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80027150: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80027154: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80027158: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002715C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80027160: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x80027164: addu        $t4, $t6, $t1
    ctx->r12 = ADD32(ctx->r14, ctx->r9);
    // 0x80027168: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8002716C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80027170: lh          $t5, 0x425E($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X425E);
    // 0x80027174: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027178: beq         $t5, $at, L_80027188
    if (ctx->r13 == ctx->r1) {
        // 0x8002717C: nop
    
            goto L_80027188;
    }
    // 0x8002717C: nop

    // 0x80027180: b           L_800271A0
    // 0x80027184: nop

        goto L_800271A0;
    // 0x80027184: nop

L_80027188:
    // 0x80027188: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x8002718C: nop

    // 0x80027190: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x80027194: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x80027198: bne         $at, $zero, L_800270E0
    if (ctx->r1 != 0) {
        // 0x8002719C: sw          $t9, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r25;
            goto L_800270E0;
    }
    // 0x8002719C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
L_800271A0:
    // 0x800271A0: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x800271A4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800271A8: bne         $t7, $at, L_800272A8
    if (ctx->r15 != ctx->r1) {
        // 0x800271AC: nop
    
            goto L_800272A8;
    }
    // 0x800271AC: nop

    // 0x800271B0: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x800271B4: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x800271B8: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800271BC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800271C0: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x800271C4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800271C8: sll         $t2, $t8, 1
    ctx->r10 = S32(ctx->r24 << 1);
    // 0x800271CC: addu        $t6, $t0, $t2
    ctx->r14 = ADD32(ctx->r8, ctx->r10);
    // 0x800271D0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800271D4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800271D8: lh          $t1, 0x425E($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X425E);
    // 0x800271DC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800271E0: nop

    // 0x800271E4: beq         $t1, $t4, L_800272A8
    if (ctx->r9 == ctx->r12) {
        // 0x800271E8: nop
    
            goto L_800272A8;
    }
    // 0x800271E8: nop

    // 0x800271EC: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_800271F0:
    // 0x800271F0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800271F4: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x800271F8: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x800271FC: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80027200: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80027204: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80027208: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002720C: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x80027210: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80027214: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80027218: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8002721C: lh          $t0, 0x425E($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X425E);
    // 0x80027220: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027224: bne         $t0, $at, L_80027290
    if (ctx->r8 != ctx->r1) {
        // 0x80027228: nop
    
            goto L_80027290;
    }
    // 0x80027228: nop

    // 0x8002722C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80027230: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x80027234: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80027238: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8002723C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80027240: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027244: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80027248: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002724C: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80027250: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80027254: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80027258: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8002725C: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x80027260: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x80027264: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80027268: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8002726C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80027270: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x80027274: sll         $t6, $t0, 1
    ctx->r14 = S32(ctx->r8 << 1);
    // 0x80027278: lh          $t3, 0x10E($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X10E);
    // 0x8002727C: addu        $t2, $t8, $t6
    ctx->r10 = ADD32(ctx->r24, ctx->r14);
    // 0x80027280: addu        $t1, $t2, $t5
    ctx->r9 = ADD32(ctx->r10, ctx->r13);
    // 0x80027284: sh          $t3, 0x10E($t1)
    MEM_H(0X10E, ctx->r9) = ctx->r11;
    // 0x80027288: b           L_800272A8
    // 0x8002728C: nop

        goto L_800272A8;
    // 0x8002728C: nop

L_80027290:
    // 0x80027290: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x80027294: nop

    // 0x80027298: addiu       $t9, $t4, 0x1
    ctx->r25 = ADD32(ctx->r12, 0X1);
    // 0x8002729C: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x800272A0: bne         $at, $zero, L_800271F0
    if (ctx->r1 != 0) {
        // 0x800272A4: sw          $t9, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r25;
            goto L_800271F0;
    }
    // 0x800272A4: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
L_800272A8:
    // 0x800272A8: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x800272AC: nop

    // 0x800272B0: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x800272B4: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x800272B8: bne         $at, $zero, L_800270DC
    if (ctx->r1 != 0) {
        // 0x800272BC: sw          $t0, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r8;
            goto L_800270DC;
    }
    // 0x800272BC: sw          $t0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r8;
L_800272C0:
    // 0x800272C0: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x800272C4: nop

    // 0x800272C8: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800272CC: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x800272D0: bne         $at, $zero, L_80026FA0
    if (ctx->r1 != 0) {
        // 0x800272D4: sw          $t6, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r14;
            goto L_80026FA0;
    }
    // 0x800272D4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800272D8: b           L_800272E0
    // 0x800272DC: nop

        goto L_800272E0;
    // 0x800272DC: nop

L_800272E0:
    // 0x800272E0: jr          $ra
    // 0x800272E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800272E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8000BA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BA54: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8000BA58: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8000BA5C: bgez        $a0, L_8000BA68
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8000BA60: nop
    
            goto L_8000BA68;
    }
    // 0x8000BA60: nop

    // 0x8000BA64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8000BA68:
    // 0x8000BA68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000BA6C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BA70: swc1        $f4, 0x2D70($at)
    MEM_W(0X2D70, ctx->r1) = ctx->f4.u32l;
    // 0x8000BA74: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000BA78: lh          $t6, 0x2D74($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D74);
    // 0x8000BA7C: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x8000BA80: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8000BA84: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000BA88: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BA8C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000BA90: nop

    // 0x8000BA94: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8000BA98: swc1        $f18, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f18.u32l;
    // 0x8000BA9C: jr          $ra
    // 0x8000BAA0: nop

    return;
    // 0x8000BAA0: nop

    // 0x8000BAA4: jr          $ra
    // 0x8000BAA8: nop

    return;
    // 0x8000BAA8: nop

;}
RECOMP_FUNC void func_8001EC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EC08: sw          $zero, -0x1F68($at)
    MEM_W(-0X1F68, ctx->r1) = 0;
    // 0x8001EC0C: jr          $ra
    // 0x8001EC10: nop

    return;
    // 0x8001EC10: nop

    // 0x8001EC14: jr          $ra
    // 0x8001EC18: nop

    return;
    // 0x8001EC18: nop

;}
RECOMP_FUNC void guRotateF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800372A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800372A4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800372A8: lwc1        $f4, -0x3C00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3C00);
    // 0x800372AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800372B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800372B4: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x800372B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800372BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800372C0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800372C4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800372C8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x800372CC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800372D0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800372D4: jal         0x80042540
    // 0x800372D8: swc1        $f4, -0x5BC0($at)
    MEM_W(-0X5BC0, ctx->r1) = ctx->f4.u32l;
    guNormalize(rdram, ctx);
        goto after_0;
    // 0x800372D8: swc1        $f4, -0x5BC0($at)
    MEM_W(-0X5BC0, ctx->r1) = ctx->f4.u32l;
    after_0:
    // 0x800372DC: lui         $at, 0x8006
    ctx->r1 = S32(0X8006 << 16);
    // 0x800372E0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800372E4: lwc1        $f6, -0x5BC0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5BC0);
    // 0x800372E8: mul.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x800372EC: jal         0x80034970
    // 0x800372F0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x800372F0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x800372F4: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800372F8: jal         0x80036570
    // 0x800372FC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x800372FC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80037300: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80037304: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80037308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003730C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80037310: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80037314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80037318: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8003731C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80037320: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80037324: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80037328: nop

    // 0x8003732C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80037330: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80037334: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80037338: nop

    // 0x8003733C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80037340: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80037344: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80037348: jal         0x800361F0
    // 0x8003734C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_3;
    // 0x8003734C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80037350: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80037354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80037358: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003735C: mul.s       $f0, $f8, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80037360: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80037364: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80037368: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8003736C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80037370: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80037374: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80037378: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8003737C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80037380: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80037384: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80037388: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8003738C: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x80037390: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80037394: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80037398: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003739C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800373A0: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x800373A4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800373A8: mul.s       $f2, $f6, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x800373AC: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800373B0: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800373B4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x800373B8: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x800373BC: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800373C0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800373C4: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800373C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800373CC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x800373D0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800373D4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800373D8: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800373DC: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x800373E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800373E4: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800373E8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800373EC: mul.s       $f0, $f10, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x800373F0: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800373F4: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800373F8: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x800373FC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x80037400: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80037404: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80037408: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8003740C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80037410: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80037414: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80037418: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8003741C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80037420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80037424: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80037428: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8003742C: jr          $ra
    // 0x80037430: nop

    return;
    // 0x80037430: nop

;}
RECOMP_FUNC void __freeParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035B08: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80035B0C: lw          $v0, -0x4AF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4AF0);
    // 0x80035B10: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x80035B14: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80035B18: jr          $ra
    // 0x80035B1C: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    return;
    // 0x80035B1C: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
;}
