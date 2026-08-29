#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001A88C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A88C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001A890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001A894: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001A898: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001A89C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001A8A0:
    // 0x8001A8A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001A8A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A8A8: jal         0x8001A738
    // 0x8001A8AC: nop

    func_8001A738(rdram, ctx);
        goto after_0;
    // 0x8001A8AC: nop

    after_0:
    // 0x8001A8B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A8B4: nop

    // 0x8001A8B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8001A8BC: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x8001A8C0: bne         $at, $zero, L_8001A8A0
    if (ctx->r1 != 0) {
        // 0x8001A8C4: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_8001A8A0;
    }
    // 0x8001A8C4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001A8C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001A8CC:
    // 0x8001A8CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001A8D0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A8D4: jal         0x8001A7E8
    // 0x8001A8D8: nop

    func_8001A7E8(rdram, ctx);
        goto after_1;
    // 0x8001A8D8: nop

    after_1:
    // 0x8001A8DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001A8E0: nop

    // 0x8001A8E4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001A8E8: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8001A8EC: bne         $at, $zero, L_8001A8CC
    if (ctx->r1 != 0) {
        // 0x8001A8F0: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_8001A8CC;
    }
    // 0x8001A8F0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8001A8F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001A8F8: nop

    // 0x8001A8FC: beq         $t0, $zero, L_8001A910
    if (ctx->r8 == 0) {
        // 0x8001A900: nop
    
            goto L_8001A910;
    }
    // 0x8001A900: nop

    // 0x8001A904: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8001A908: jal         0x80019D74
    // 0x8001A90C: nop

    Init_Obj(rdram, ctx);
        goto after_2;
    // 0x8001A90C: nop

    after_2:
L_8001A910:
    // 0x8001A910: b           L_8001A918
    // 0x8001A914: nop

        goto L_8001A918;
    // 0x8001A914: nop

L_8001A918:
    // 0x8001A918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001A91C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001A920: jr          $ra
    // 0x8001A924: nop

    return;
    // 0x8001A924: nop

;}
RECOMP_FUNC void alSynSetFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EFA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EFA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003EFAC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003EFB0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8003EFB4: beql        $t6, $zero, L_8003F028
    if (ctx->r14 == 0) {
        // 0x8003EFB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003F028;
    }
    goto skip_0;
    // 0x8003EFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003EFBC: jal         0x80035B20
    // 0x8003EFC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003EFC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003EFC4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EFC8: beq         $v0, $zero, L_8003F024
    if (ctx->r2 == 0) {
        // 0x8003EFCC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003F024;
    }
    // 0x8003EFCC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EFD0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003EFD4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8003EFD8: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8003EFDC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8003EFE0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8003EFE4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8003EFE8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8003EFEC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8003EFF0: lbu         $v1, 0x23($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X23);
    // 0x8003EFF4: bgez        $v1, L_8003F004
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003EFF8: negu        $t3, $v1
        ctx->r11 = SUB32(0, ctx->r3);
            goto L_8003F004;
    }
    // 0x8003EFF8: negu        $t3, $v1
    ctx->r11 = SUB32(0, ctx->r3);
    // 0x8003EFFC: b           L_8003F008
    // 0x8003F000: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
        goto L_8003F008;
    // 0x8003F000: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
L_8003F004:
    // 0x8003F004: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_8003F008:
    // 0x8003F008: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8003F00C: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x8003F010: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003F014: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8003F018: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003F01C: jalr        $t9
    // 0x8003F020: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003F020: nop

    after_1:
L_8003F024:
    // 0x8003F024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003F028:
    // 0x8003F028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F02C: jr          $ra
    // 0x8003F030: nop

    return;
    // 0x8003F030: nop

;}
RECOMP_FUNC void func_8001A300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A300: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001A304: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8001A308: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8001A30C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8001A310: addiu       $t7, $t7, 0x5290
    ctx->r15 = ADD32(ctx->r15, 0X5290);
    // 0x8001A314: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001A318: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001A31C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8001A320: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001A324: lw          $t9, -0x1C54($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1C54);
    // 0x8001A328: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8001A32C: nop

    // 0x8001A330: sw          $t9, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r25;
    // 0x8001A334: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001A338: lw          $t1, 0x5D50($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D50);
    // 0x8001A33C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8001A340: nop

    // 0x8001A344: sw          $t1, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r9;
    // 0x8001A348: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001A34C: lw          $t3, 0x5D54($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5D54);
    // 0x8001A350: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001A354: nop

    // 0x8001A358: sw          $t3, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r11;
    // 0x8001A35C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8001A360: lw          $t5, 0x5D58($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5D58);
    // 0x8001A364: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8001A368: nop

    // 0x8001A36C: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8001A370: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001A374: lw          $t7, 0x5D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5D5C);
    // 0x8001A378: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8001A37C: nop

    // 0x8001A380: sw          $t7, 0x34($t8)
    MEM_W(0X34, ctx->r24) = ctx->r15;
    // 0x8001A384: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001A388: lw          $t9, 0x5D60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D60);
    // 0x8001A38C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8001A390: nop

    // 0x8001A394: sw          $t9, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r25;
    // 0x8001A398: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001A39C: lw          $t1, -0x5C30($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5C30);
    // 0x8001A3A0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8001A3A4: nop

    // 0x8001A3A8: sw          $t1, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r9;
    // 0x8001A3AC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001A3B0: lw          $t3, 0x5D64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5D64);
    // 0x8001A3B4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001A3B8: nop

    // 0x8001A3BC: sw          $t3, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->r11;
    // 0x8001A3C0: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8001A3C4: lw          $t5, -0x5C2C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5C2C);
    // 0x8001A3C8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8001A3CC: nop

    // 0x8001A3D0: sw          $t5, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->r13;
    // 0x8001A3D4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001A3D8: lw          $t7, 0x5D68($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5D68);
    // 0x8001A3DC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8001A3E0: nop

    // 0x8001A3E4: sw          $t7, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->r15;
    // 0x8001A3E8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001A3EC: addiu       $t9, $t9, 0x5D30
    ctx->r25 = ADD32(ctx->r25, 0X5D30);
    // 0x8001A3F0: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8001A3F4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8001A3F8: nop

    // 0x8001A3FC: sw          $t0, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r8;
    // 0x8001A400: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001A404: addiu       $t2, $t2, 0x5D30
    ctx->r10 = ADD32(ctx->r10, 0X5D30);
    // 0x8001A408: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8001A40C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001A410: nop

    // 0x8001A414: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    // 0x8001A418: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8001A41C: addiu       $t5, $t5, 0x5D30
    ctx->r13 = ADD32(ctx->r13, 0X5D30);
    // 0x8001A420: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8001A424: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8001A428: nop

    // 0x8001A42C: sw          $t6, 0x54($t7)
    MEM_W(0X54, ctx->r15) = ctx->r14;
    // 0x8001A430: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8001A434: addiu       $t8, $t8, 0x5D40
    ctx->r24 = ADD32(ctx->r24, 0X5D40);
    // 0x8001A438: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8001A43C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8001A440: nop

    // 0x8001A444: sw          $t9, 0x58($t0)
    MEM_W(0X58, ctx->r8) = ctx->r25;
    // 0x8001A448: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001A44C: addiu       $t1, $t1, 0x5D40
    ctx->r9 = ADD32(ctx->r9, 0X5D40);
    // 0x8001A450: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8001A454: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8001A458: nop

    // 0x8001A45C: sw          $t2, 0x5C($t3)
    MEM_W(0X5C, ctx->r11) = ctx->r10;
    // 0x8001A460: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8001A464: addiu       $t4, $t4, 0x5D40
    ctx->r12 = ADD32(ctx->r12, 0X5D40);
    // 0x8001A468: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8001A46C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8001A470: nop

    // 0x8001A474: sw          $t5, 0x60($t6)
    MEM_W(0X60, ctx->r14) = ctx->r13;
    // 0x8001A478: b           L_8001A480
    // 0x8001A47C: nop

        goto L_8001A480;
    // 0x8001A47C: nop

L_8001A480:
    // 0x8001A480: jr          $ra
    // 0x8001A484: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001A484: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001EC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC84: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EC88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EC8C: sw          $t6, -0x1F50($at)
    MEM_W(-0X1F50, ctx->r1) = ctx->r14;
    // 0x8001EC90: jr          $ra
    // 0x8001EC94: nop

    return;
    // 0x8001EC94: nop

    // 0x8001EC98: jr          $ra
    // 0x8001EC9C: nop

    return;
    // 0x8001EC9C: nop

;}
RECOMP_FUNC void func_8001B4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B4AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B4B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001B4B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8001B4B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8001B4BC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001B4C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001B4C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001B4C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001B4CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001B4D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001B4D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001B4D8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8001B4DC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8001B4E0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8001B4E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001B4E8: lh          $t1, 0x4290($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4290);
    // 0x8001B4EC: nop

    // 0x8001B4F0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001B4F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B4F8: jal         0x8001A488
    // 0x8001B4FC: nop

    func_8001A488(rdram, ctx);
        goto after_0;
    // 0x8001B4FC: nop

    after_0:
    // 0x8001B500: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B504: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8001B508: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001B50C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8001B510: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8001B514: addiu       $t4, $t4, 0x5290
    ctx->r12 = ADD32(ctx->r12, 0X5290);
    // 0x8001B518: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001B51C: lbu         $t8, 0x15($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X15);
    // 0x8001B520: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001B524: lw          $t6, 0x5D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D5C);
    // 0x8001B528: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x8001B52C: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x8001B530: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x8001B534: lwc1        $f4, 0x24($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X24);
    // 0x8001B538: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x8001B53C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8001B540: nop

    // 0x8001B544: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001B548: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x8001B54C: nop

    // 0x8001B550: bc1f        L_8001B560
    if (!c1cs) {
        // 0x8001B554: nop
    
            goto L_8001B560;
    }
    // 0x8001B554: nop

    // 0x8001B558: b           L_8001B570
    // 0x8001B55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8001B570;
    // 0x8001B55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001B560:
    // 0x8001B560: b           L_8001B570
    // 0x8001B564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001B570;
    // 0x8001B564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001B568: b           L_8001B570
    // 0x8001B56C: nop

        goto L_8001B570;
    // 0x8001B56C: nop

L_8001B570:
    // 0x8001B570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001B574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001B578: jr          $ra
    // 0x8001B57C: nop

    return;
    // 0x8001B57C: nop

;}
RECOMP_FUNC void func_80024EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024EA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80024EAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80024EB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80024EB4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80024EB8: addiu       $a1, $a1, 0x7450
    ctx->r5 = ADD32(ctx->r5, 0X7450);
    // 0x80024EBC: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x80024EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80024EC4: jal         0x8001F814
    // 0x80024EC8: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    Eeprom_Read(rdram, ctx);
        goto after_0;
    // 0x80024EC8: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_0:
    // 0x80024ECC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80024ED0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80024ED4: b           L_80024EE4
    // 0x80024ED8: nop

        goto L_80024EE4;
    // 0x80024ED8: nop

    // 0x80024EDC: b           L_80024EE4
    // 0x80024EE0: nop

        goto L_80024EE4;
    // 0x80024EE0: nop

L_80024EE4:
    // 0x80024EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80024EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80024EEC: jr          $ra
    // 0x80024EF0: nop

    return;
    // 0x80024EF0: nop

;}
RECOMP_FUNC void func_800031B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800031B4: jr          $ra
    // 0x800031B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800031B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800031BC: jr          $ra
    // 0x800031C0: nop

    return;
    // 0x800031C0: nop

    // 0x800031C4: jr          $ra
    // 0x800031C8: nop

    return;
    // 0x800031C8: nop

;}
RECOMP_FUNC void func_8000F888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000F888: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8000F88C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000F890: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8000F894: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8000F898: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x8000F89C: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x8000F8A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000F8A4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8000F8A8: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8000F8AC: nop

    // 0x8000F8B0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8000F8B4: nop

    // 0x8000F8B8: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x8000F8BC: jal         0x800361F0
    // 0x8000F8C0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8000F8C0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x8000F8C4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8000F8C8:
    // 0x8000F8C8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8000F8CC: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x8000F8D0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000F8D4: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x8000F8D8: lw          $s0, 0x5D30($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5D30);
    // 0x8000F8DC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8000F8E0: beq         $s0, $at, L_8000F908
    if (ctx->r16 == ctx->r1) {
        // 0x8000F8E4: nop
    
            goto L_8000F908;
    }
    // 0x8000F8E4: nop

    // 0x8000F8E8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8000F8EC: beq         $s0, $at, L_8000F998
    if (ctx->r16 == ctx->r1) {
        // 0x8000F8F0: nop
    
            goto L_8000F998;
    }
    // 0x8000F8F0: nop

    // 0x8000F8F4: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8000F8F8: beq         $s0, $at, L_8000FAC0
    if (ctx->r16 == ctx->r1) {
        // 0x8000F8FC: nop
    
            goto L_8000FAC0;
    }
    // 0x8000F8FC: nop

    // 0x8000F900: b           L_8000FB60
    // 0x8000F904: nop

        goto L_8000FB60;
    // 0x8000F904: nop

L_8000F908:
    // 0x8000F908: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8000F90C: nop

    // 0x8000F910: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x8000F914: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x8000F918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000F91C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8000F920: nop

    // 0x8000F924: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000F928: nop

    // 0x8000F92C: bc1f        L_8000F96C
    if (!c1cs) {
        // 0x8000F930: nop
    
            goto L_8000F96C;
    }
    // 0x8000F930: nop

    // 0x8000F934: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8000F938: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000F93C: nop

    // 0x8000F940: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000F944: nop

    // 0x8000F948: bc1f        L_8000F96C
    if (!c1cs) {
        // 0x8000F94C: nop
    
            goto L_8000F96C;
    }
    // 0x8000F94C: nop

    // 0x8000F950: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8000F954: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000F958: nop

    // 0x8000F95C: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8000F960: nop

    // 0x8000F964: bc1t        L_8000F990
    if (c1cs) {
        // 0x8000F968: nop
    
            goto L_8000F990;
    }
    // 0x8000F968: nop

L_8000F96C:
    // 0x8000F96C: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8000F970: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8000F974: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8000F978: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8000F97C: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x8000F980: jal         0x80013AE0
    // 0x8000F984: nop

    func_80013AE0(rdram, ctx);
        goto after_1;
    // 0x8000F984: nop

    after_1:
    // 0x8000F988: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000F98C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_8000F990:
    // 0x8000F990: b           L_8000FB60
    // 0x8000F994: nop

        goto L_8000FB60;
    // 0x8000F994: nop

L_8000F998:
    // 0x8000F998: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x8000F99C: nop

    // 0x8000F9A0: addiu       $t5, $t4, 0xC
    ctx->r13 = ADD32(ctx->r12, 0XC);
    // 0x8000F9A4: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x8000F9A8: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8000F9AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000F9B0: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8000F9B4: nop

    // 0x8000F9B8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000F9BC: nop

    // 0x8000F9C0: bc1f        L_8000FA00
    if (!c1cs) {
        // 0x8000F9C4: nop
    
            goto L_8000FA00;
    }
    // 0x8000F9C4: nop

    // 0x8000F9C8: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8000F9CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000F9D0: nop

    // 0x8000F9D4: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000F9D8: nop

    // 0x8000F9DC: bc1f        L_8000FA00
    if (!c1cs) {
        // 0x8000F9E0: nop
    
            goto L_8000FA00;
    }
    // 0x8000F9E0: nop

    // 0x8000F9E4: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8000F9E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000F9EC: nop

    // 0x8000F9F0: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8000F9F4: nop

    // 0x8000F9F8: bc1t        L_8000FAB8
    if (c1cs) {
        // 0x8000F9FC: nop
    
            goto L_8000FAB8;
    }
    // 0x8000F9FC: nop

L_8000FA00:
    // 0x8000FA00: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8000FA04:
    // 0x8000FA04: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FA08: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x8000FA0C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000FA10: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x8000FA14: lw          $s0, 0x5D40($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5D40);
    // 0x8000FA18: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x8000FA1C: beq         $s0, $at, L_8000FA44
    if (ctx->r16 == ctx->r1) {
        // 0x8000FA20: nop
    
            goto L_8000FA44;
    }
    // 0x8000FA20: nop

    // 0x8000FA24: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x8000FA28: beq         $s0, $at, L_8000FA60
    if (ctx->r16 == ctx->r1) {
        // 0x8000FA2C: nop
    
            goto L_8000FA60;
    }
    // 0x8000FA2C: nop

    // 0x8000FA30: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x8000FA34: beq         $s0, $at, L_8000FA7C
    if (ctx->r16 == ctx->r1) {
        // 0x8000FA38: nop
    
            goto L_8000FA7C;
    }
    // 0x8000FA38: nop

    // 0x8000FA3C: b           L_8000FA98
    // 0x8000FA40: nop

        goto L_8000FA98;
    // 0x8000FA40: nop

L_8000FA44:
    // 0x8000FA44: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x8000FA48: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8000FA4C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8000FA50: jal         0x80013F6C
    // 0x8000FA54: nop

    Math_Mat3f_RotatePitch(rdram, ctx);
        goto after_2;
    // 0x8000FA54: nop

    after_2:
    // 0x8000FA58: b           L_8000FA98
    // 0x8000FA5C: nop

        goto L_8000FA98;
    // 0x8000FA5C: nop

L_8000FA60:
    // 0x8000FA60: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x8000FA64: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8000FA68: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x8000FA6C: jal         0x80014098
    // 0x8000FA70: nop

    Math_Mat3f_RotateYaw(rdram, ctx);
        goto after_3;
    // 0x8000FA70: nop

    after_3:
    // 0x8000FA74: b           L_8000FA98
    // 0x8000FA78: nop

        goto L_8000FA98;
    // 0x8000FA78: nop

L_8000FA7C:
    // 0x8000FA7C: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8000FA80: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8000FA84: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    // 0x8000FA88: jal         0x800141C4
    // 0x8000FA8C: nop

    Math_Mat3f_RotateRoll(rdram, ctx);
        goto after_4;
    // 0x8000FA8C: nop

    after_4:
    // 0x8000FA90: b           L_8000FA98
    // 0x8000FA94: nop

        goto L_8000FA98;
    // 0x8000FA94: nop

L_8000FA98:
    // 0x8000FA98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FA9C: nop

    // 0x8000FAA0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000FAA4: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8000FAA8: bne         $at, $zero, L_8000FA04
    if (ctx->r1 != 0) {
        // 0x8000FAAC: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_8000FA04;
    }
    // 0x8000FAAC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8000FAB0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8000FAB4: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
L_8000FAB8:
    // 0x8000FAB8: b           L_8000FB60
    // 0x8000FABC: nop

        goto L_8000FB60;
    // 0x8000FABC: nop

L_8000FAC0:
    // 0x8000FAC0: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x8000FAC4: nop

    // 0x8000FAC8: addiu       $t6, $t5, 0x18
    ctx->r14 = ADD32(ctx->r13, 0X18);
    // 0x8000FACC: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x8000FAD0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8000FAD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FAD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000FADC: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8000FAE0: nop

    // 0x8000FAE4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000FAE8: nop

    // 0x8000FAEC: bc1f        L_8000FB34
    if (!c1cs) {
        // 0x8000FAF0: nop
    
            goto L_8000FB34;
    }
    // 0x8000FAF0: nop

    // 0x8000FAF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FAF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000FAFC: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8000FB00: nop

    // 0x8000FB04: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000FB08: nop

    // 0x8000FB0C: bc1f        L_8000FB34
    if (!c1cs) {
        // 0x8000FB10: nop
    
            goto L_8000FB34;
    }
    // 0x8000FB10: nop

    // 0x8000FB14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000FB18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000FB1C: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8000FB20: nop

    // 0x8000FB24: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8000FB28: nop

    // 0x8000FB2C: bc1t        L_8000FB58
    if (c1cs) {
        // 0x8000FB30: nop
    
            goto L_8000FB58;
    }
    // 0x8000FB30: nop

L_8000FB34:
    // 0x8000FB34: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8000FB38: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8000FB3C: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8000FB40: lw          $a2, 0x4($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X4);
    // 0x8000FB44: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x8000FB48: jal         0x80013B70
    // 0x8000FB4C: nop

    Math_Mat3f_Scale(rdram, ctx);
        goto after_5;
    // 0x8000FB4C: nop

    after_5:
    // 0x8000FB50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8000FB54: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_8000FB58:
    // 0x8000FB58: b           L_8000FB60
    // 0x8000FB5C: nop

        goto L_8000FB60;
    // 0x8000FB5C: nop

L_8000FB60:
    // 0x8000FB60: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8000FB64: nop

    // 0x8000FB68: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8000FB6C: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x8000FB70: bne         $at, $zero, L_8000F8C8
    if (ctx->r1 != 0) {
        // 0x8000FB74: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_8000F8C8;
    }
    // 0x8000FB74: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8000FB78: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8000FB7C: nop

    // 0x8000FB80: beq         $t2, $zero, L_8000FBC4
    if (ctx->r10 == 0) {
        // 0x8000FB84: nop
    
            goto L_8000FBC4;
    }
    // 0x8000FB84: nop

    // 0x8000FB88: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000FB8C: lw          $t3, 0x5820($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5820);
    // 0x8000FB90: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000FB94: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000FB98: sw          $t4, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r12;
    // 0x8000FB9C: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000FBA0: lw          $t5, 0x5820($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5820);
    // 0x8000FBA4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000FBA8: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x8000FBAC: addiu       $t7, $t6, -0x40
    ctx->r15 = ADD32(ctx->r14, -0X40);
    // 0x8000FBB0: addiu       $t8, $t8, 0x5828
    ctx->r24 = ADD32(ctx->r24, 0X5828);
    // 0x8000FBB4: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8000FBB8: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
    // 0x8000FBBC: jal         0x80036400
    // 0x8000FBC0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x8000FBC0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_6:
L_8000FBC4:
    // 0x8000FBC4: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8000FBC8: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8000FBCC: nop

    // 0x8000FBD0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8000FBD4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8000FBD8: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x8000FBDC: nop

    // 0x8000FBE0: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8000FBE4: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x8000FBE8: b           L_8000FBF8
    // 0x8000FBEC: nop

        goto L_8000FBF8;
    // 0x8000FBEC: nop

    // 0x8000FBF0: b           L_8000FBF8
    // 0x8000FBF4: nop

        goto L_8000FBF8;
    // 0x8000FBF4: nop

L_8000FBF8:
    // 0x8000FBF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000FBFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000FC00: jr          $ra
    // 0x8000FC04: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8000FC04: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void guMtxF2L(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800360F0: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x800360F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800360F8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x800360FC: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x80036100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80036104: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80036108: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8003610C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80036110: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_80036114:
    // 0x80036114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80036118: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x8003611C: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80036120: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80036124: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80036128: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8003612C: beq         $a0, $t3, L_80036194
    if (ctx->r4 == ctx->r11) {
        // 0x80036130: nop
    
            goto L_80036194;
    }
    // 0x80036130: nop

L_80036134:
    // 0x80036134: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80036138: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003613C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80036140: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80036144: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80036148: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8003614C: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x80036150: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x80036154: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x80036158: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003615C: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x80036160: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x80036164: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x80036168: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8003616C: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x80036170: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x80036174: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x80036178: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8003617C: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x80036180: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80036184: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80036188: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8003618C: bne         $a0, $t3, L_80036134
    if (ctx->r4 != ctx->r11) {
        // 0x80036190: nop
    
            goto L_80036134;
    }
    // 0x80036190: nop

L_80036194:
    // 0x80036194: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80036198: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8003619C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800361A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800361A4: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x800361A8: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x800361AC: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x800361B0: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x800361B4: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800361B8: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x800361BC: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x800361C0: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x800361C4: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x800361C8: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x800361CC: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x800361D0: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x800361D4: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x800361D8: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x800361DC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800361E0: bne         $a2, $t4, L_80036114
    if (ctx->r6 != ctx->r12) {
        // 0x800361E4: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_80036114;
    }
    // 0x800361E4: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x800361E8: jr          $ra
    // 0x800361EC: nop

    return;
    // 0x800361EC: nop

;}
RECOMP_FUNC void func_8001F68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F68C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001F694: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001F698: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001F69C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8001F6A0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8001F6A4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F6A8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001F6AC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F6B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F6B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F6B8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001F6BC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8001F6C0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8001F6C4: lw          $a1, 0x68($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X68);
    // 0x8001F6C8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8001F6CC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001F6D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001F6D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8001F6D8: jal         0x8003939C
    // 0x8001F6DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    osPfsReadWriteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F6DC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_0:
    // 0x8001F6E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001F6E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F6E8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8001F6EC: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x8001F6F0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8001F6F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8001F6F8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001F6FC: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x8001F700: sw          $t2, 0x80($t7)
    MEM_W(0X80, ctx->r15) = ctx->r10;
    // 0x8001F704: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8001F708: b           L_8001F718
    // 0x8001F70C: nop

        goto L_8001F718;
    // 0x8001F70C: nop

    // 0x8001F710: b           L_8001F718
    // 0x8001F714: nop

        goto L_8001F718;
    // 0x8001F714: nop

L_8001F718:
    // 0x8001F718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F71C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001F720: jr          $ra
    // 0x8001F724: nop

    return;
    // 0x8001F724: nop

;}
RECOMP_FUNC void func_8002CF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CF78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002CF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CF80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002CF84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002CF88: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002CF8C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002CF90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002CF94: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8002CF98: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002CF9C: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x8002CFA0: jal         0x8002C144
    // 0x8002CFA4: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8002C144(rdram, ctx);
        goto after_0;
    // 0x8002CFA4: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x8002CFA8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002CFAC: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x8002CFB0: nop

    // 0x8002CFB4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8002CFB8: beq         $t8, $zero, L_8002CFD0
    if (ctx->r24 == 0) {
        // 0x8002CFBC: nop
    
            goto L_8002CFD0;
    }
    // 0x8002CFBC: nop

    // 0x8002CFC0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CFC4: nop

    // 0x8002CFC8: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x8002CFCC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8002CFD0:
    // 0x8002CFD0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002CFD4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002CFD8: nop

    // 0x8002CFDC: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8002CFE0: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8002CFE4: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x8002CFE8: jal         0x8002C144
    // 0x8002CFEC: nop

    func_8002C144(rdram, ctx);
        goto after_1;
    // 0x8002CFEC: nop

    after_1:
    // 0x8002CFF0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002CFF4: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x8002CFF8: nop

    // 0x8002CFFC: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8002D000: bne         $t3, $zero, L_8002D04C
    if (ctx->r11 != 0) {
        // 0x8002D004: nop
    
            goto L_8002D04C;
    }
    // 0x8002D004: nop

    // 0x8002D008: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002D00C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002D010: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002D014: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x8002D018: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8002D01C: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8002D020: nop

    // 0x8002D024: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8002D028: nop

    // 0x8002D02C: bc1f        L_8002D044
    if (!c1cs) {
        // 0x8002D030: nop
    
            goto L_8002D044;
    }
    // 0x8002D030: nop

    // 0x8002D034: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D038: nop

    // 0x8002D03C: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8002D040: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_8002D044:
    // 0x8002D044: b           L_8002D05C
    // 0x8002D048: nop

        goto L_8002D05C;
    // 0x8002D048: nop

L_8002D04C:
    // 0x8002D04C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D050: nop

    // 0x8002D054: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8002D058: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_8002D05C:
    // 0x8002D05C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D060: b           L_8002D070
    // 0x8002D064: nop

        goto L_8002D070;
    // 0x8002D064: nop

    // 0x8002D068: b           L_8002D070
    // 0x8002D06C: nop

        goto L_8002D070;
    // 0x8002D06C: nop

L_8002D070:
    // 0x8002D070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002D078: jr          $ra
    // 0x8002D07C: nop

    return;
    // 0x8002D07C: nop

;}
RECOMP_FUNC void func_800254E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800254E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800254EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800254F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800254F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800254F8:
    // 0x800254F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800254FC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80025500: jal         0x80025460
    // 0x80025504: nop

    func_80025460(rdram, ctx);
        goto after_0;
    // 0x80025504: nop

    after_0:
    // 0x80025508: bne         $v0, $zero, L_80025518
    if (ctx->r2 != 0) {
        // 0x8002550C: nop
    
            goto L_80025518;
    }
    // 0x8002550C: nop

    // 0x80025510: b           L_80025530
    // 0x80025514: nop

        goto L_80025530;
    // 0x80025514: nop

L_80025518:
    // 0x80025518: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002551C: nop

    // 0x80025520: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80025524: slti        $at, $t7, 0x18
    ctx->r1 = SIGNED(ctx->r15) < 0X18 ? 1 : 0;
    // 0x80025528: bne         $at, $zero, L_800254F8
    if (ctx->r1 != 0) {
        // 0x8002552C: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_800254F8;
    }
    // 0x8002552C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_80025530:
    // 0x80025530: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80025534: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80025538: bne         $t8, $at, L_80025548
    if (ctx->r24 != ctx->r1) {
        // 0x8002553C: nop
    
            goto L_80025548;
    }
    // 0x8002553C: nop

    // 0x80025540: b           L_80025558
    // 0x80025544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80025558;
    // 0x80025544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80025548:
    // 0x80025548: b           L_80025558
    // 0x8002554C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80025558;
    // 0x8002554C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80025550: b           L_80025558
    // 0x80025554: nop

        goto L_80025558;
    // 0x80025554: nop

L_80025558:
    // 0x80025558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002555C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80025560: jr          $ra
    // 0x80025564: nop

    return;
    // 0x80025564: nop

;}
RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000400: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80000404: addiu       $t0, $t0, -0x2C10
    ctx->r8 = ADD32(ctx->r8, -0X2C10);
    // 0x80000408: ori         $t1, $zero, 0xE6E0
    ctx->r9 = 0 | 0XE6E0;
L_8000040C:
    // 0x8000040C: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x80000410: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80000414: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80000418: bne         $t1, $zero, L_8000040C
    if (ctx->r9 != 0) {
        // 0x8000041C: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_8000040C;
    }
    // 0x8000041C: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80000420: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x80000424: lui         $sp, 0x8005
    ctx->r29 = S32(0X8005 << 16);
    // 0x80000428: addiu       $t2, $t2, 0x450
    ctx->r10 = ADD32(ctx->r10, 0X450);
    // 0x8000042C: jr          $t2
    // 0x80000430: addiu       $sp, $sp, 0xD38
    ctx->r29 = ADD32(ctx->r29, 0XD38);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x80000430: addiu       $sp, $sp, 0xD38
    ctx->r29 = ADD32(ctx->r29, 0XD38);
;}
RECOMP_FUNC void alFxNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F5D0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8003F5D4: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8003F5D8: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8003F5DC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8003F5E0: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8003F5E4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8003F5E8: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x8003F5EC: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8003F5F0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8003F5F4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8003F5F8: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8003F5FC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8003F600: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8003F604: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8003F608: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8003F60C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8003F610: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8003F614: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8003F618: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8003F61C: addiu       $a2, $a2, 0x6D14
    ctx->r6 = ADD32(ctx->r6, 0X6D14);
    // 0x8003F620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F624: jal         0x80046400
    // 0x8003F628: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8003F628: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8003F62C: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8003F630: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8003F634: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x8003F638: addiu       $t6, $t6, 0x6D2C
    ctx->r14 = ADD32(ctx->r14, 0X6D2C);
    // 0x8003F63C: addiu       $t7, $t7, 0x6AB8
    ctx->r15 = ADD32(ctx->r15, 0X6AB8);
    // 0x8003F640: sw          $t6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r14;
    // 0x8003F644: sw          $t7, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r15;
    // 0x8003F648: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x8003F64C: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x8003F650: addiu       $s3, $s3, -0x4878
    ctx->r19 = ADD32(ctx->r19, -0X4878);
    // 0x8003F654: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003F658: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x8003F65C: beq         $at, $zero, L_8003F6BC
    if (ctx->r1 == 0) {
        // 0x8003F660: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8003F6BC;
    }
    // 0x8003F660: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003F664: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8003F668: addu        $at, $at, $t9
    gpr jr_addend_8003F670 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8003F66C: lw          $t9, -0x3930($at)
    ctx->r25 = ADD32(ctx->r1, -0X3930);
    // 0x8003F670: jr          $t9
    // 0x8003F674: nop

    switch (jr_addend_8003F670 >> 2) {
        case 0: goto L_8003F678; break;
        case 1: goto L_8003F684; break;
        case 2: goto L_8003F69C; break;
        case 3: goto L_8003F6A8; break;
        case 4: goto L_8003F690; break;
        case 5: goto L_8003F6B4; break;
        default: switch_error(__func__, 0x8003F670, 0x8004C6D0);
    }
    // 0x8003F674: nop

L_8003F678:
    // 0x8003F678: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x8003F67C: b           L_8003F6BC
    // 0x8003F680: addiu       $s3, $s3, -0x49E0
    ctx->r19 = ADD32(ctx->r19, -0X49E0);
        goto L_8003F6BC;
    // 0x8003F680: addiu       $s3, $s3, -0x49E0
    ctx->r19 = ADD32(ctx->r19, -0X49E0);
L_8003F684:
    // 0x8003F684: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x8003F688: b           L_8003F6BC
    // 0x8003F68C: addiu       $s3, $s3, -0x4978
    ctx->r19 = ADD32(ctx->r19, -0X4978);
        goto L_8003F6BC;
    // 0x8003F68C: addiu       $s3, $s3, -0x4978
    ctx->r19 = ADD32(ctx->r19, -0X4978);
L_8003F690:
    // 0x8003F690: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x8003F694: b           L_8003F6BC
    // 0x8003F698: addiu       $s3, $s3, -0x48F0
    ctx->r19 = ADD32(ctx->r19, -0X48F0);
        goto L_8003F6BC;
    // 0x8003F698: addiu       $s3, $s3, -0x48F0
    ctx->r19 = ADD32(ctx->r19, -0X48F0);
L_8003F69C:
    // 0x8003F69C: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x8003F6A0: b           L_8003F6BC
    // 0x8003F6A4: addiu       $s3, $s3, -0x48C8
    ctx->r19 = ADD32(ctx->r19, -0X48C8);
        goto L_8003F6BC;
    // 0x8003F6A4: addiu       $s3, $s3, -0x48C8
    ctx->r19 = ADD32(ctx->r19, -0X48C8);
L_8003F6A8:
    // 0x8003F6A8: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x8003F6AC: b           L_8003F6BC
    // 0x8003F6B0: addiu       $s3, $s3, -0x48A0
    ctx->r19 = ADD32(ctx->r19, -0X48A0);
        goto L_8003F6BC;
    // 0x8003F6B0: addiu       $s3, $s3, -0x48A0
    ctx->r19 = ADD32(ctx->r19, -0X48A0);
L_8003F6B4:
    // 0x8003F6B4: b           L_8003F6BC
    // 0x8003F6B8: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
        goto L_8003F6BC;
    // 0x8003F6B8: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
L_8003F6BC:
    // 0x8003F6BC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x8003F6C0: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x8003F6C4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8003F6C8: sb          $t0, 0x24($s5)
    MEM_B(0X24, ctx->r21) = ctx->r8;
    // 0x8003F6CC: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x8003F6D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F6D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F6D8: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x8003F6DC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8003F6E0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003F6E4: jal         0x80035870
    // 0x8003F6E8: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8003F6E8: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_1:
    // 0x8003F6EC: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    // 0x8003F6F0: lw          $a3, 0x1C($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X1C);
    // 0x8003F6F4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8003F6F8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8003F6FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F704: jal         0x80035870
    // 0x8003F708: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8003F708: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x8003F70C: lw          $t4, 0x1C($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X1C);
    // 0x8003F710: sw          $v0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r2;
    // 0x8003F714: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x8003F718: beq         $t4, $zero, L_8003F74C
    if (ctx->r12 == 0) {
        // 0x8003F71C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003F74C;
    }
    // 0x8003F71C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003F720: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
L_8003F724:
    // 0x8003F724: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x8003F728: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003F72C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8003F730: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x8003F734: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x8003F738: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x8003F73C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8003F740: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x8003F744: bnel        $at, $zero, L_8003F724
    if (ctx->r1 != 0) {
        // 0x8003F748: lw          $t5, 0x14($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X14);
            goto L_8003F724;
    }
    goto skip_0;
    // 0x8003F748: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
    skip_0:
L_8003F74C:
    // 0x8003F74C: lbu         $t0, 0x24($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X24);
    // 0x8003F750: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003F754: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8003F758: blez        $t0, L_8003F9CC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8003F75C: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_8003F9CC;
    }
    // 0x8003F75C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8003F760: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8003F764: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8003F768: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8003F76C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8003F770: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x8003F774: ldc1        $f20, -0x3918($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X3918);
    // 0x8003F778: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
L_8003F77C:
    // 0x8003F77C: multu       $s4, $s7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003F780: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x8003F784: lw          $t1, 0x20($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X20);
    // 0x8003F788: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8003F78C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8003F790: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003F794: andi        $t6, $s1, 0xFFFF
    ctx->r14 = ctx->r17 & 0XFFFF;
    // 0x8003F798: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003F79C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x8003F7A0: addiu       $s1, $t6, 0x1
    ctx->r17 = ADD32(ctx->r14, 0X1);
    // 0x8003F7A4: mflo        $t2
    ctx->r10 = lo;
    // 0x8003F7A8: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x8003F7AC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8003F7B0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8003F7B4: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8003F7B8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8003F7BC: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8003F7C0: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x8003F7C4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8003F7C8: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x8003F7CC: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8003F7D0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003F7D4: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x8003F7D8: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x8003F7DC: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8003F7E0: addiu       $s1, $t4, 0x1
    ctx->r17 = ADD32(ctx->r12, 0X1);
    // 0x8003F7E4: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8003F7E8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003F7EC: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8003F7F0: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x8003F7F4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8003F7F8: addiu       $s1, $t8, 0x1
    ctx->r17 = ADD32(ctx->r24, 0X1);
    // 0x8003F7FC: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x8003F800: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8003F804: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8003F808: sh          $t1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r9;
    // 0x8003F80C: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8003F810: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8003F814: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x8003F818: beq         $v0, $zero, L_8003F91C
    if (ctx->r2 == 0) {
        // 0x8003F81C: addiu       $s1, $t0, 0x2
        ctx->r17 = ADD32(ctx->r8, 0X2);
            goto L_8003F91C;
    }
    // 0x8003F81C: addiu       $s1, $t0, 0x2
    ctx->r17 = ADD32(ctx->r8, 0X2);
    // 0x8003F820: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8003F824: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8003F828: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8003F82C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003F830: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x8003F834: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8003F838: addiu       $s1, $t2, 0x1
    ctx->r17 = ADD32(ctx->r10, 0X1);
    // 0x8003F83C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x8003F840: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x8003F844: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8003F848: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8003F84C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8003F850: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x8003F854: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x8003F858: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8003F85C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8003F860: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x8003F864: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8003F868: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x8003F86C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x8003F870: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x8003F874: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8003F878: bgez        $t0, L_8003F890
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8003F87C: swc1        $f6, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
            goto L_8003F890;
    }
    // 0x8003F87C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x8003F880: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8003F884: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8003F888: nop

    // 0x8003F88C: add.d       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f16.d + ctx->f10.d;
L_8003F890:
    // 0x8003F890: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8003F894: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003F898: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8003F89C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8003F8A0: swc1        $f24, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f24.u32l;
    // 0x8003F8A4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8003F8A8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8003F8AC: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x8003F8B0: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x8003F8B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F8B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F8BC: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003F8C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8003F8C4: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8003F8C8: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x8003F8CC: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8003F8D0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8003F8D4: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x8003F8D8: jal         0x80035870
    // 0x8003F8DC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8003F8DC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x8003F8E0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8003F8E4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8003F8E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8003F8EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F8F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F8F4: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003F8F8: jal         0x80035870
    // 0x8003F8FC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8003F8FC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x8003F900: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8003F904: sw          $v0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r2;
    // 0x8003F908: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8003F90C: swc1        $f26, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f26.u32l;
    // 0x8003F910: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x8003F914: b           L_8003F928
    // 0x8003F918: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
        goto L_8003F928;
    // 0x8003F918: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
L_8003F91C:
    // 0x8003F91C: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x8003F920: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x8003F924: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_8003F928:
    // 0x8003F928: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8003F92C: addu        $s2, $s3, $t2
    ctx->r18 = ADD32(ctx->r19, ctx->r10);
    // 0x8003F930: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x8003F934: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F93C: beq         $t3, $zero, L_8003F9A4
    if (ctx->r11 == 0) {
        // 0x8003F940: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_8003F9A4;
    }
    // 0x8003F940: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003F944: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x8003F948: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8003F94C: jal         0x80035870
    // 0x8003F950: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x8003F950: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_5:
    // 0x8003F954: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8003F958: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8003F95C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8003F960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003F964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003F968: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8003F96C: jal         0x80035870
    // 0x8003F970: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x8003F970: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_6:
    // 0x8003F974: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x8003F978: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003F97C: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x8003F980: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x8003F984: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x8003F988: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8003F98C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x8003F990: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8003F994: jal         0x8003F530
    // 0x8003F998: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    init_lpfilter(rdram, ctx);
        goto after_7;
    // 0x8003F998: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x8003F99C: b           L_8003F9B8
    // 0x8003F9A0: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
        goto L_8003F9B8;
    // 0x8003F9A0: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_8003F9A4:
    // 0x8003F9A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003F9A8: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8003F9AC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x8003F9B0: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x8003F9B4: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_8003F9B8:
    // 0x8003F9B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003F9BC: andi        $t1, $s4, 0xFFFF
    ctx->r9 = ctx->r20 & 0XFFFF;
    // 0x8003F9C0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8003F9C4: bne         $at, $zero, L_8003F77C
    if (ctx->r1 != 0) {
        // 0x8003F9C8: or          $s4, $t1, $zero
        ctx->r20 = ctx->r9 | 0;
            goto L_8003F77C;
    }
    // 0x8003F9C8: or          $s4, $t1, $zero
    ctx->r20 = ctx->r9 | 0;
L_8003F9CC:
    // 0x8003F9CC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8003F9D0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8003F9D4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8003F9D8: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8003F9DC: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8003F9E0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8003F9E4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8003F9E8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8003F9EC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8003F9F0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8003F9F4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8003F9F8: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8003F9FC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8003FA00: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8003FA04: jr          $ra
    // 0x8003FA08: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8003FA08: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8001FF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FF80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001FF84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001FF88: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8001FF8C: addiu       $t6, $zero, 0x7B00
    ctx->r14 = ADD32(0, 0X7B00);
    // 0x8001FF90: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001FF94: sw          $t6, -0x5A10($at)
    MEM_W(-0X5A10, ctx->r1) = ctx->r14;
    // 0x8001FF98: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FF9C: jal         0x8001F238
    // 0x8001FFA0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F238(rdram, ctx);
        goto after_0;
    // 0x8001FFA0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_0:
    // 0x8001FFA4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8001FFA8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8001FFAC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001FFB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001FFB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001FFB8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001FFBC: lw          $t9, 0x6E98($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6E98);
    // 0x8001FFC0: nop

    // 0x8001FFC4: beq         $t9, $zero, L_8001FFD4
    if (ctx->r25 == 0) {
        // 0x8001FFC8: nop
    
            goto L_8001FFD4;
    }
    // 0x8001FFC8: nop

    // 0x8001FFCC: b           L_800200C0
    // 0x8001FFD0: nop

        goto L_800200C0;
    // 0x8001FFD0: nop

L_8001FFD4:
    // 0x8001FFD4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001FFD8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8001FFDC: jal         0x8001F174
    // 0x8001FFE0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F174(rdram, ctx);
        goto after_1;
    // 0x8001FFE0: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_1:
    // 0x8001FFE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001FFE8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8001FFEC: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8001FFF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8001FFF4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001FFF8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8001FFFC: lw          $t2, 0x6E9C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6E9C);
    // 0x80020000: nop

    // 0x80020004: beq         $t2, $zero, L_80020014
    if (ctx->r10 == 0) {
        // 0x80020008: nop
    
            goto L_80020014;
    }
    // 0x80020008: nop

    // 0x8002000C: b           L_800200C0
    // 0x80020010: nop

        goto L_800200C0;
    // 0x80020010: nop

L_80020014:
    // 0x80020014: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020018: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002001C: jal         0x8001F4B8
    // 0x80020020: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_2;
    // 0x80020020: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_2:
    // 0x80020024: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80020028: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002002C: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x80020030: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80020034: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80020038: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002003C: lw          $t5, 0x6EA4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6EA4);
    // 0x80020040: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80020044: bne         $t5, $at, L_8002006C
    if (ctx->r13 != ctx->r1) {
        // 0x80020048: nop
    
            goto L_8002006C;
    }
    // 0x80020048: nop

    // 0x8002004C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020050: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80020054: jal         0x8001F550
    // 0x80020058: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F550(rdram, ctx);
        goto after_3;
    // 0x80020058: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_3:
    // 0x8002005C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020060: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80020064: jal         0x8001F4B8
    // 0x80020068: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_4;
    // 0x80020068: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_4:
L_8002006C:
    // 0x8002006C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80020070: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80020074: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80020078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002007C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80020080: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80020084: lw          $t8, 0x6EA4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6EA4);
    // 0x80020088: nop

    // 0x8002008C: bne         $t8, $zero, L_800200B8
    if (ctx->r24 != 0) {
        // 0x80020090: nop
    
            goto L_800200B8;
    }
    // 0x80020090: nop

    // 0x80020094: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020098: addiu       $t9, $t9, -0x59F0
    ctx->r25 = ADD32(ctx->r25, -0X59F0);
    // 0x8002009C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800200A0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800200A4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    // 0x800200A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800200AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800200B0: jal         0x8001F5F0
    // 0x800200B4: addiu       $a3, $zero, 0x7B00
    ctx->r7 = ADD32(0, 0X7B00);
    func_8001F5F0(rdram, ctx);
        goto after_5;
    // 0x800200B4: addiu       $a3, $zero, 0x7B00
    ctx->r7 = ADD32(0, 0X7B00);
    after_5:
L_800200B8:
    // 0x800200B8: b           L_800200C8
    // 0x800200BC: nop

        goto L_800200C8;
    // 0x800200BC: nop

L_800200C0:
    // 0x800200C0: b           L_800200C8
    // 0x800200C4: nop

        goto L_800200C8;
    // 0x800200C4: nop

L_800200C8:
    // 0x800200C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800200CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800200D0: jr          $ra
    // 0x800200D4: nop

    return;
    // 0x800200D4: nop

;}
RECOMP_FUNC void func_80021210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021210: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80021214: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021218: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002121C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021220: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80021224: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80021228: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002122C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80021230: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80021234: nop

    // 0x80021238: beq         $t9, $zero, L_800212C4
    if (ctx->r25 == 0) {
        // 0x8002123C: nop
    
            goto L_800212C4;
    }
    // 0x8002123C: nop

    // 0x80021240: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x80021244: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80021248: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002124C: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80021250: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80021254: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x80021258: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x8002125C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80021260: beq         $t2, $at, L_80021290
    if (ctx->r10 == ctx->r1) {
        // 0x80021264: nop
    
            goto L_80021290;
    }
    // 0x80021264: nop

    // 0x80021268: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8002126C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80021270: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80021274: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80021278: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8002127C: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x80021280: lh          $t5, 0x108($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X108);
    // 0x80021284: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021288: bne         $t5, $at, L_800212C4
    if (ctx->r13 != ctx->r1) {
        // 0x8002128C: nop
    
            goto L_800212C4;
    }
    // 0x8002128C: nop

L_80021290:
    // 0x80021290: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80021294: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80021298: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002129C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800212A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800212A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800212A8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800212AC: lh          $t8, 0x4254($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4254);
    // 0x800212B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800212B4: bne         $t8, $at, L_800212C4
    if (ctx->r24 != ctx->r1) {
        // 0x800212B8: nop
    
            goto L_800212C4;
    }
    // 0x800212B8: nop

    // 0x800212BC: jr          $ra
    // 0x800212C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800212C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800212C4:
    // 0x800212C4: jr          $ra
    // 0x800212C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800212C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800212CC: jr          $ra
    // 0x800212D0: nop

    return;
    // 0x800212D0: nop

    // 0x800212D4: jr          $ra
    // 0x800212D8: nop

    return;
    // 0x800212D8: nop

;}
RECOMP_FUNC void func_8001C300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C300: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001C304: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001C308: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001C30C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001C310: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8001C314: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8001C318: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001C31C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001C320: lbu         $t9, 0x130($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X130);
    // 0x8001C324: nop

    // 0x8001C328: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8001C32C: bne         $t0, $zero, L_8001C36C
    if (ctx->r8 != 0) {
        // 0x8001C330: nop
    
            goto L_8001C36C;
    }
    // 0x8001C330: nop

    // 0x8001C334: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8001C338: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001C33C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8001C340: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x8001C344: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8001C348: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x8001C34C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8001C350: addu        $t4, $t3, $t7
    ctx->r12 = ADD32(ctx->r11, ctx->r15);
    // 0x8001C354: lh          $t5, 0x140($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X140);
    // 0x8001C358: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001C35C: beq         $t5, $at, L_8001C36C
    if (ctx->r13 == ctx->r1) {
        // 0x8001C360: nop
    
            goto L_8001C36C;
    }
    // 0x8001C360: nop

    // 0x8001C364: jr          $ra
    // 0x8001C368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8001C368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8001C36C:
    // 0x8001C36C: jr          $ra
    // 0x8001C370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8001C370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001C374: jr          $ra
    // 0x8001C378: nop

    return;
    // 0x8001C378: nop

    // 0x8001C37C: jr          $ra
    // 0x8001C380: nop

    return;
    // 0x8001C380: nop

;}
RECOMP_FUNC void func_80016E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016E84: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80016E88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016E8C: sh          $zero, 0x76DA($at)
    MEM_H(0X76DA, ctx->r1) = 0;
    // 0x80016E90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016E94: sh          $zero, 0x76DE($at)
    MEM_H(0X76DE, ctx->r1) = 0;
    // 0x80016E98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016E9C: sh          $zero, 0x76E2($at)
    MEM_H(0X76E2, ctx->r1) = 0;
    // 0x80016EA0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80016EA4:
    // 0x80016EA4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80016EA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80016EAC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80016EB0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80016EB4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80016EB8: sh          $t6, 0x76E8($at)
    MEM_H(0X76E8, ctx->r1) = ctx->r14;
    // 0x80016EBC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80016EC0: nop

    // 0x80016EC4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80016EC8: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80016ECC: bne         $at, $zero, L_80016EA4
    if (ctx->r1 != 0) {
        // 0x80016ED0: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_80016EA4;
    }
    // 0x80016ED0: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80016ED4: b           L_80016EDC
    // 0x80016ED8: nop

        goto L_80016EDC;
    // 0x80016ED8: nop

L_80016EDC:
    // 0x80016EDC: jr          $ra
    // 0x80016EE0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80016EE0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80029824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029824: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80029828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002982C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80029830: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80029834: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80029838: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8002983C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80029840: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80029844: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029848: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002984C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80029850: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80029854: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80029858: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002985C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80029860: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80029864: nop

    // 0x80029868: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8002986C: nop

    // 0x80029870: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80029874: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80029878: nop

    // 0x8002987C: bne         $t1, $zero, L_800298A0
    if (ctx->r9 != 0) {
        // 0x80029880: nop
    
            goto L_800298A0;
    }
    // 0x80029880: nop

    // 0x80029884: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80029888: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002988C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029890: nop

    // 0x80029894: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80029898: b           L_80029A50
    // 0x8002989C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
        goto L_80029A50;
    // 0x8002989C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_800298A0:
    // 0x800298A0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800298A4: nop

    // 0x800298A8: bgez        $t2, L_80029984
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800298AC: nop
    
            goto L_80029984;
    }
    // 0x800298AC: nop

    // 0x800298B0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800298B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800298B8: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800298BC: nop

    // 0x800298C0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800298C4: nop

    // 0x800298C8: bc1f        L_800298EC
    if (!c1cs) {
        // 0x800298CC: nop
    
            goto L_800298EC;
    }
    // 0x800298CC: nop

    // 0x800298D0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800298D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800298D8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800298DC: nop

    // 0x800298E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800298E4: b           L_8002997C
    // 0x800298E8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
        goto L_8002997C;
    // 0x800298E8: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_800298EC:
    // 0x800298EC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800298F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800298F4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800298F8: nop

    // 0x800298FC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80029900: nop

    // 0x80029904: bc1f        L_80029928
    if (!c1cs) {
        // 0x80029908: nop
    
            goto L_80029928;
    }
    // 0x80029908: nop

    // 0x8002990C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80029910: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80029914: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029918: nop

    // 0x8002991C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80029920: b           L_8002997C
    // 0x80029924: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
        goto L_8002997C;
    // 0x80029924: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_80029928:
    // 0x80029928: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8002992C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80029930: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029934: nop

    // 0x80029938: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8002993C: nop

    // 0x80029940: bc1f        L_80029964
    if (!c1cs) {
        // 0x80029944: nop
    
            goto L_80029964;
    }
    // 0x80029944: nop

    // 0x80029948: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002994C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80029950: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029954: nop

    // 0x80029958: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8002995C: b           L_8002997C
    // 0x80029960: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
        goto L_8002997C;
    // 0x80029960: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80029964:
    // 0x80029964: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80029968: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002996C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029970: nop

    // 0x80029974: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80029978: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_8002997C:
    // 0x8002997C: b           L_80029A50
    // 0x80029980: nop

        goto L_80029A50;
    // 0x80029980: nop

L_80029984:
    // 0x80029984: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80029988: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002998C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029990: nop

    // 0x80029994: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80029998: nop

    // 0x8002999C: bc1f        L_800299C0
    if (!c1cs) {
        // 0x800299A0: nop
    
            goto L_800299C0;
    }
    // 0x800299A0: nop

    // 0x800299A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800299A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800299AC: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800299B0: nop

    // 0x800299B4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800299B8: b           L_80029A50
    // 0x800299BC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
        goto L_80029A50;
    // 0x800299BC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_800299C0:
    // 0x800299C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800299C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800299C8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800299CC: nop

    // 0x800299D0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800299D4: nop

    // 0x800299D8: bc1f        L_800299FC
    if (!c1cs) {
        // 0x800299DC: nop
    
            goto L_800299FC;
    }
    // 0x800299DC: nop

    // 0x800299E0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800299E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800299E8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800299EC: nop

    // 0x800299F0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800299F4: b           L_80029A50
    // 0x800299F8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
        goto L_80029A50;
    // 0x800299F8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_800299FC:
    // 0x800299FC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80029A00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80029A04: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029A08: nop

    // 0x80029A0C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80029A10: nop

    // 0x80029A14: bc1f        L_80029A38
    if (!c1cs) {
        // 0x80029A18: nop
    
            goto L_80029A38;
    }
    // 0x80029A18: nop

    // 0x80029A1C: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x80029A20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80029A24: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029A28: nop

    // 0x80029A2C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80029A30: b           L_80029A50
    // 0x80029A34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
        goto L_80029A50;
    // 0x80029A34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80029A38:
    // 0x80029A38: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80029A3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80029A40: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029A44: nop

    // 0x80029A48: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80029A4C: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
L_80029A50:
    // 0x80029A50: jal         0x80014E80
    // 0x80029A54: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80029A54: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    after_0:
    // 0x80029A58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80029A5C: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80029A60: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x80029A64: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80029A68: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80029A6C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80029A70: jal         0x80015538
    // 0x80029A74: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80029A74: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_1:
    // 0x80029A78: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80029A7C: nop

    // 0x80029A80: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x80029A84: b           L_80029A8C
    // 0x80029A88: nop

        goto L_80029A8C;
    // 0x80029A88: nop

L_80029A8C:
    // 0x80029A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80029A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80029A94: jr          $ra
    // 0x80029A98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80029A98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void Debug_BackupMemTest_Unk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80020424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020428: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002042C: addiu       $t6, $t6, -0x1D10
    ctx->r14 = ADD32(ctx->r14, -0X1D10);
    // 0x80020430: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020434: nop

    // 0x80020438: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x8002043C: beq         $t8, $zero, L_80020478
    if (ctx->r24 == 0) {
        // 0x80020440: nop
    
            goto L_80020478;
    }
    // 0x80020440: nop

    // 0x80020444: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020448: lb          $t9, 0x7440($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7440);
    // 0x8002044C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020450: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80020454: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x80020458: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8002045C: bgez        $t2, L_80020470
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80020460: sb          $t0, 0x7440($at)
        MEM_B(0X7440, ctx->r1) = ctx->r8;
            goto L_80020470;
    }
    // 0x80020460: sb          $t0, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r8;
    // 0x80020464: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x80020468: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002046C: sb          $t3, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r11;
L_80020470:
    // 0x80020470: b           L_800204C4
    // 0x80020474: nop

        goto L_800204C4;
    // 0x80020474: nop

L_80020478:
    // 0x80020478: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002047C: addiu       $t4, $t4, -0x1D10
    ctx->r12 = ADD32(ctx->r12, -0X1D10);
    // 0x80020480: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80020484: nop

    // 0x80020488: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x8002048C: beq         $t6, $zero, L_800204C4
    if (ctx->r14 == 0) {
        // 0x80020490: nop
    
            goto L_800204C4;
    }
    // 0x80020490: nop

    // 0x80020494: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80020498: lb          $t7, 0x7440($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7440);
    // 0x8002049C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800204A0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800204A4: sll         $t9, $t8, 24
    ctx->r25 = S32(ctx->r24 << 24);
    // 0x800204A8: sra         $t0, $t9, 24
    ctx->r8 = S32(SIGNED(ctx->r25) >> 24);
    // 0x800204AC: sb          $t8, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r24;
    // 0x800204B0: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x800204B4: bne         $at, $zero, L_800204C4
    if (ctx->r1 != 0) {
        // 0x800204B8: nop
    
            goto L_800204C4;
    }
    // 0x800204B8: nop

    // 0x800204BC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800204C0: sb          $zero, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = 0;
L_800204C4:
    // 0x800204C4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800204C8: addiu       $t1, $t1, -0x1D50
    ctx->r9 = ADD32(ctx->r9, -0X1D50);
    // 0x800204CC: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x800204D0: nop

    // 0x800204D4: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x800204D8: beq         $t3, $zero, L_80020538
    if (ctx->r11 == 0) {
        // 0x800204DC: nop
    
            goto L_80020538;
    }
    // 0x800204DC: nop

    // 0x800204E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800204E4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800204E8: lb          $t4, 0x7440($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7440);
    // 0x800204EC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800204F0: addiu       $t6, $t6, 0x7040
    ctx->r14 = ADD32(ctx->r14, 0X7040);
    // 0x800204F4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800204F8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800204FC: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x80020500: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x80020504: jal         0x8001F728
    // 0x80020508: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F728(rdram, ctx);
        goto after_0;
    // 0x80020508: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_0:
    // 0x8002050C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80020510: lb          $t7, 0x7440($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7440);
    // 0x80020514: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80020518: addiu       $t9, $t9, 0x7040
    ctx->r25 = ADD32(ctx->r25, 0X7040);
    // 0x8002051C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020520: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80020524: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80020528: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x8002052C: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    // 0x80020530: jal         0x8001F328
    // 0x80020534: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8001F328(rdram, ctx);
        goto after_1;
    // 0x80020534: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
L_80020538:
    // 0x80020538: b           L_80020540
    // 0x8002053C: nop

        goto L_80020540;
    // 0x8002053C: nop

L_80020540:
    // 0x80020540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020544: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80020548: jr          $ra
    // 0x8002054C: nop

    return;
    // 0x8002054C: nop

;}
RECOMP_FUNC void func_8001E80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E80C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E814: jal         0x8001E208
    // 0x8001E818: nop

    UpdateRawControllers(rdram, ctx);
        goto after_0;
    // 0x8001E818: nop

    after_0:
    // 0x8001E81C: jal         0x8001DCEC
    // 0x8001E820: nop

    func_8001DCEC(rdram, ctx);
        goto after_1;
    // 0x8001E820: nop

    after_1:
    // 0x8001E824: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8001E828: lw          $t6, 0x5284($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5284);
    // 0x8001E82C: nop

    // 0x8001E830: bne         $t6, $zero, L_8001E8A4
    if (ctx->r14 != 0) {
        // 0x8001E834: nop
    
            goto L_8001E8A4;
    }
    // 0x8001E834: nop

    // 0x8001E838: jal         0x8005F088
    // 0x8001E83C: nop

    func_8005F088(rdram, ctx);
        goto after_2;
    // 0x8001E83C: nop

    after_2:
    // 0x8001E840: jal         0x8001E560
    // 0x8001E844: nop

    UpdateControllers(rdram, ctx);
        goto after_3;
    // 0x8001E844: nop

    after_3:
    // 0x8001E848: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001E84C: lw          $t7, -0x1F50($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F50);
    // 0x8001E850: nop

    // 0x8001E854: beq         $t7, $zero, L_8001E89C
    if (ctx->r15 == 0) {
        // 0x8001E858: nop
    
            goto L_8001E89C;
    }
    // 0x8001E858: nop

    // 0x8001E85C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001E860: lw          $t8, 0x5274($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5274);
    // 0x8001E864: nop

    // 0x8001E868: beq         $t8, $zero, L_8001E884
    if (ctx->r24 == 0) {
        // 0x8001E86C: nop
    
            goto L_8001E884;
    }
    // 0x8001E86C: nop

    // 0x8001E870: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001E874: lw          $t9, 0x5274($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5274);
    // 0x8001E878: nop

    // 0x8001E87C: jalr        $t9
    // 0x8001E880: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8001E880: nop

    after_4:
L_8001E884:
    // 0x8001E884: jal         0x8001D2FC
    // 0x8001E888: nop

    func_8001D2FC(rdram, ctx);
        goto after_5;
    // 0x8001E888: nop

    after_5:
    // 0x8001E88C: jal         0x80016EE4
    // 0x8001E890: nop

    func_80016EE4(rdram, ctx);
        goto after_6;
    // 0x8001E890: nop

    after_6:
    // 0x8001E894: jal         0x8001FBAC
    // 0x8001E898: nop

    func_8001FBAC(rdram, ctx);
        goto after_7;
    // 0x8001E898: nop

    after_7:
L_8001E89C:
    // 0x8001E89C: jal         0x8005F0B8
    // 0x8001E8A0: nop

    func_8005F0B8(rdram, ctx);
        goto after_8;
    // 0x8001E8A0: nop

    after_8:
L_8001E8A4:
    // 0x8001E8A4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8001E8A8: lw          $t0, 0x525C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X525C);
    // 0x8001E8AC: nop

    // 0x8001E8B0: beq         $t0, $zero, L_8001E8EC
    if (ctx->r8 == 0) {
        // 0x8001E8B4: nop
    
            goto L_8001E8EC;
    }
    // 0x8001E8B4: nop

    // 0x8001E8B8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8001E8BC: lw          $t1, 0x525C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X525C);
    // 0x8001E8C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8001E8C4: bne         $t1, $at, L_8001E8D8
    if (ctx->r9 != ctx->r1) {
        // 0x8001E8C8: nop
    
            goto L_8001E8D8;
    }
    // 0x8001E8C8: nop

    // 0x8001E8CC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001E8D0: b           L_8001E8EC
    // 0x8001E8D4: sw          $zero, 0x525C($at)
    MEM_W(0X525C, ctx->r1) = 0;
        goto L_8001E8EC;
    // 0x8001E8D4: sw          $zero, 0x525C($at)
    MEM_W(0X525C, ctx->r1) = 0;
L_8001E8D8:
    // 0x8001E8D8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8001E8DC: lw          $t2, 0x525C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X525C);
    // 0x8001E8E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001E8E4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001E8E8: sw          $t3, 0x525C($at)
    MEM_W(0X525C, ctx->r1) = ctx->r11;
L_8001E8EC:
    // 0x8001E8EC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8001E8F0: lw          $t4, 0x5284($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5284);
    // 0x8001E8F4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001E8F8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8001E8FC: sw          $t5, 0x5284($at)
    MEM_W(0X5284, ctx->r1) = ctx->r13;
    // 0x8001E900: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8001E904: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8001E908: lw          $t7, 0x527C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X527C);
    // 0x8001E90C: lw          $t6, 0x5284($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5284);
    // 0x8001E910: nop

    // 0x8001E914: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8001E918: bne         $at, $zero, L_8001E928
    if (ctx->r1 != 0) {
        // 0x8001E91C: nop
    
            goto L_8001E928;
    }
    // 0x8001E91C: nop

    // 0x8001E920: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001E924: sw          $zero, 0x5284($at)
    MEM_W(0X5284, ctx->r1) = 0;
L_8001E928:
    // 0x8001E928: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001E92C: lw          $t8, -0x1DBC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DBC);
    // 0x8001E930: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001E934: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8001E938: sw          $t9, -0x1DBC($at)
    MEM_W(-0X1DBC, ctx->r1) = ctx->r25;
    // 0x8001E93C: b           L_8001E944
    // 0x8001E940: nop

        goto L_8001E944;
    // 0x8001E940: nop

L_8001E944:
    // 0x8001E944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E94C: jr          $ra
    // 0x8001E950: nop

    return;
    // 0x8001E950: nop

;}
RECOMP_FUNC void PakRead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002021C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80020220: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80020224: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80020228: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x8002022C: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80020230: nop

    // 0x80020234: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80020238: beq         $t8, $zero, L_80020348
    if (ctx->r24 == 0) {
        // 0x8002023C: nop
    
            goto L_80020348;
    }
    // 0x8002023C: nop

    // 0x80020240: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80020244: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80020248:
    // 0x80020248: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8002024C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80020250: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80020254: sb          $zero, 0x7240($at)
    MEM_B(0X7240, ctx->r1) = 0;
    // 0x80020258: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002025C: nop

    // 0x80020260: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80020264: slti        $at, $t1, 0x20
    ctx->r1 = SIGNED(ctx->r9) < 0X20 ? 1 : 0;
    // 0x80020268: bne         $at, $zero, L_80020248
    if (ctx->r1 != 0) {
        // 0x8002026C: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_80020248;
    }
    // 0x8002026C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x80020270: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80020274: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80020278: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x8002027C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80020280: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80020284: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80020288: lw          $t4, 0x6E98($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6E98);
    // 0x8002028C: nop

    // 0x80020290: bne         $t4, $zero, L_8002032C
    if (ctx->r12 != 0) {
        // 0x80020294: nop
    
            goto L_8002032C;
    }
    // 0x80020294: nop

    // 0x80020298: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002029C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800202A0: jal         0x8001F174
    // 0x800202A4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F174(rdram, ctx);
        goto after_0;
    // 0x800202A4: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_0:
    // 0x800202A8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800202AC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800202B0: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x800202B4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800202B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800202BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800202C0: lw          $t7, 0x6E9C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6E9C);
    // 0x800202C4: nop

    // 0x800202C8: bne         $t7, $zero, L_8002032C
    if (ctx->r15 != 0) {
        // 0x800202CC: nop
    
            goto L_8002032C;
    }
    // 0x800202CC: nop

    // 0x800202D0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800202D4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800202D8: jal         0x8001F4B8
    // 0x800202DC: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    func_8001F4B8(rdram, ctx);
        goto after_1;
    // 0x800202DC: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    after_1:
    // 0x800202E0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800202E4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800202E8: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x800202EC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800202F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800202F4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800202F8: lw          $t0, 0x6EA4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6EA4);
    // 0x800202FC: nop

    // 0x80020300: bne         $t0, $zero, L_8002032C
    if (ctx->r8 != 0) {
        // 0x80020304: nop
    
            goto L_8002032C;
    }
    // 0x80020304: nop

    // 0x80020308: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002030C: addiu       $t1, $t1, 0x7240
    ctx->r9 = ADD32(ctx->r9, 0X7240);
    // 0x80020310: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80020314: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80020318: addiu       $a0, $a0, 0x6E28
    ctx->r4 = ADD32(ctx->r4, 0X6E28);
    // 0x8002031C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80020320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80020324: jal         0x8001F68C
    // 0x80020328: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8001F68C(rdram, ctx);
        goto after_2;
    // 0x80020328: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
L_8002032C:
    // 0x8002032C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80020330:
    // 0x80020330: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80020334: nop

    // 0x80020338: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8002033C: slti        $at, $t3, 0x20
    ctx->r1 = SIGNED(ctx->r11) < 0X20 ? 1 : 0;
    // 0x80020340: bne         $at, $zero, L_80020330
    if (ctx->r1 != 0) {
        // 0x80020344: sw          $t3, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r11;
            goto L_80020330;
    }
    // 0x80020344: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_80020348:
    // 0x80020348: b           L_80020350
    // 0x8002034C: nop

        goto L_80020350;
    // 0x8002034C: nop

L_80020350:
    // 0x80020350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80020354: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80020358: jr          $ra
    // 0x8002035C: nop

    return;
    // 0x8002035C: nop

;}
RECOMP_FUNC void func_8002EA68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EA68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EA6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EA70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002EA74: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x8002EA78: nop

    // 0x8002EA7C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8002EA80: beq         $t7, $zero, L_8002EB40
    if (ctx->r15 == 0) {
        // 0x8002EA84: nop
    
            goto L_8002EB40;
    }
    // 0x8002EA84: nop

    // 0x8002EA88: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002EA8C: lb          $t8, 0x7688($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7688);
    // 0x8002EA90: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EA94: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002EA98: sb          $t9, 0x7688($at)
    MEM_B(0X7688, ctx->r1) = ctx->r25;
    // 0x8002EA9C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002EAA0: lb          $t0, 0x7688($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7688);
    // 0x8002EAA4: nop

    // 0x8002EAA8: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8002EAAC: bne         $at, $zero, L_8002EABC
    if (ctx->r1 != 0) {
        // 0x8002EAB0: nop
    
            goto L_8002EABC;
    }
    // 0x8002EAB0: nop

    // 0x8002EAB4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EAB8: sb          $zero, 0x7688($at)
    MEM_B(0X7688, ctx->r1) = 0;
L_8002EABC:
    // 0x8002EABC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002EAC0: lb          $t1, 0x7688($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7688);
    // 0x8002EAC4: nop

    // 0x8002EAC8: bne         $t1, $zero, L_8002EB0C
    if (ctx->r9 != 0) {
        // 0x8002EACC: nop
    
            goto L_8002EB0C;
    }
    // 0x8002EACC: nop

    // 0x8002EAD0: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8002EAD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EAD8: sh          $t2, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = ctx->r10;
    // 0x8002EADC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EAE0: sh          $zero, 0x7694($at)
    MEM_H(0X7694, ctx->r1) = 0;
    // 0x8002EAE4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EAE8: sh          $zero, 0x7696($at)
    MEM_H(0X7696, ctx->r1) = 0;
    // 0x8002EAEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EAF0: sh          $zero, 0x7698($at)
    MEM_H(0X7698, ctx->r1) = 0;
    // 0x8002EAF4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EAF8: sh          $zero, 0x769A($at)
    MEM_H(0X769A, ctx->r1) = 0;
    // 0x8002EAFC: jal         0x8002B9B8
    // 0x8002EB00: nop

    func_8002B9B8(rdram, ctx);
        goto after_0;
    // 0x8002EB00: nop

    after_0:
    // 0x8002EB04: b           L_8002EB40
    // 0x8002EB08: nop

        goto L_8002EB40;
    // 0x8002EB08: nop

L_8002EB0C:
    // 0x8002EB0C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002EB10: lb          $t3, 0x7688($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7688);
    // 0x8002EB14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002EB18: bne         $t3, $at, L_8002EB2C
    if (ctx->r11 != ctx->r1) {
        // 0x8002EB1C: nop
    
            goto L_8002EB2C;
    }
    // 0x8002EB1C: nop

    // 0x8002EB20: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002EB24: b           L_8002EB40
    // 0x8002EB28: sh          $zero, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = 0;
        goto L_8002EB40;
    // 0x8002EB28: sh          $zero, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = 0;
L_8002EB2C:
    // 0x8002EB2C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002EB30: lb          $t4, 0x7688($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7688);
    // 0x8002EB34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002EB38: bne         $t4, $at, L_8002EB40
    if (ctx->r12 != ctx->r1) {
        // 0x8002EB3C: nop
    
            goto L_8002EB40;
    }
    // 0x8002EB3C: nop

L_8002EB40:
    // 0x8002EB40: b           L_8002EB48
    // 0x8002EB44: nop

        goto L_8002EB48;
    // 0x8002EB44: nop

L_8002EB48:
    // 0x8002EB48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EB4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EB50: jr          $ra
    // 0x8002EB54: nop

    return;
    // 0x8002EB54: nop

;}
RECOMP_FUNC void alCopy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046380: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80046384: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80046388: blez        $a2, L_800463EC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8004638C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_800463EC;
    }
    // 0x8004638C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80046390: andi        $a1, $a2, 0x3
    ctx->r5 = ctx->r6 & 0X3;
    // 0x80046394: beq         $a1, $zero, L_800463BC
    if (ctx->r5 == 0) {
        // 0x80046398: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_800463BC;
    }
    // 0x80046398: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_8004639C:
    // 0x8004639C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800463A0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800463A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800463A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800463AC: bne         $a0, $a3, L_8004639C
    if (ctx->r4 != ctx->r7) {
        // 0x800463B0: sb          $t6, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r14;
            goto L_8004639C;
    }
    // 0x800463B0: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
    // 0x800463B4: beq         $a3, $a2, L_800463EC
    if (ctx->r7 == ctx->r6) {
        // 0x800463B8: nop
    
            goto L_800463EC;
    }
    // 0x800463B8: nop

L_800463BC:
    // 0x800463BC: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x800463C0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800463C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800463C8: sb          $t7, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r15;
    // 0x800463CC: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x800463D0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800463D4: sb          $t8, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r24;
    // 0x800463D8: lbu         $t9, -0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X2);
    // 0x800463DC: sb          $t9, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r25;
    // 0x800463E0: lbu         $t0, -0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, -0X1);
    // 0x800463E4: bne         $a3, $a2, L_800463BC
    if (ctx->r7 != ctx->r6) {
        // 0x800463E8: sb          $t0, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r8;
            goto L_800463BC;
    }
    // 0x800463E8: sb          $t0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r8;
L_800463EC:
    // 0x800463EC: jr          $ra
    // 0x800463F0: nop

    return;
    // 0x800463F0: nop

;}
RECOMP_FUNC void _Litob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047070: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80047074: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80047078: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8004707C: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
    // 0x80047080: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80047084: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80047088: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004708C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80047090: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80047094: bne         $v1, $v0, L_800470A8
    if (ctx->r3 != ctx->r2) {
        // 0x80047098: sw          $a1, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r5;
            goto L_800470A8;
    }
    // 0x80047098: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8004709C: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x800470A0: b           L_800470B0
    // 0x800470A4: addiu       $s3, $s3, -0x45AC
    ctx->r19 = ADD32(ctx->r19, -0X45AC);
        goto L_800470B0;
    // 0x800470A4: addiu       $s3, $s3, -0x45AC
    ctx->r19 = ADD32(ctx->r19, -0X45AC);
L_800470A8:
    // 0x800470A8: lui         $s3, 0x8005
    ctx->r19 = S32(0X8005 << 16);
    // 0x800470AC: addiu       $s3, $s3, -0x45C0
    ctx->r19 = ADD32(ctx->r19, -0X45C0);
L_800470B0:
    // 0x800470B0: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x800470B4: bne         $v0, $at, L_800470C4
    if (ctx->r2 != ctx->r1) {
        // 0x800470B8: addiu       $s0, $zero, 0x18
        ctx->r16 = ADD32(0, 0X18);
            goto L_800470C4;
    }
    // 0x800470B8: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x800470BC: b           L_800470E4
    // 0x800470C0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
        goto L_800470E4;
    // 0x800470C0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
L_800470C4:
    // 0x800470C4: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x800470C8: beq         $v0, $at, L_800470E0
    if (ctx->r2 == ctx->r1) {
        // 0x800470CC: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_800470E0;
    }
    // 0x800470CC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x800470D0: beq         $v1, $v0, L_800470E0
    if (ctx->r3 == ctx->r2) {
        // 0x800470D4: nop
    
            goto L_800470E0;
    }
    // 0x800470D4: nop

    // 0x800470D8: b           L_800470E0
    // 0x800470DC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_800470E0;
    // 0x800470DC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_800470E0:
    // 0x800470E0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_800470E4:
    // 0x800470E4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800470E8: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x800470EC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x800470F0: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x800470F4: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x800470F8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800470FC: beq         $v0, $at, L_80047110
    if (ctx->r2 == ctx->r1) {
        // 0x80047100: sw          $t9, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r25;
            goto L_80047110;
    }
    // 0x80047100: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x80047104: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80047108: bnel        $v0, $at, L_8004714C
    if (ctx->r2 != ctx->r1) {
        // 0x8004710C: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_8004714C;
    }
    goto skip_0;
    // 0x8004710C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_0:
L_80047110:
    // 0x80047110: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80047114: bgtzl       $t4, L_8004714C
    if (SIGNED(ctx->r12) > 0) {
        // 0x80047118: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_8004714C;
    }
    goto skip_1;
    // 0x80047118: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x8004711C: bltz        $t4, L_8004712C
    if (SIGNED(ctx->r12) < 0) {
        // 0x80047120: lw          $t6, 0x60($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X60);
            goto L_8004712C;
    }
    // 0x80047120: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80047124: b           L_8004714C
    // 0x80047128: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
        goto L_8004714C;
    // 0x80047128: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_8004712C:
    // 0x8004712C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80047130: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x80047134: sltiu       $at, $t7, 0x1
    ctx->r1 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80047138: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x8004713C: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x80047140: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x80047144: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x80047148: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_8004714C:
    // 0x8004714C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80047150: addiu       $t0, $zero, 0x17
    ctx->r8 = ADD32(0, 0X17);
    // 0x80047154: bne         $t2, $zero, L_80047170
    if (ctx->r10 != 0) {
        // 0x80047158: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_80047170;
    }
    // 0x80047158: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8004715C: bnel        $t3, $zero, L_80047174
    if (ctx->r11 != 0) {
        // 0x80047160: addiu       $s0, $zero, 0x17
        ctx->r16 = ADD32(0, 0X17);
            goto L_80047174;
    }
    goto skip_2;
    // 0x80047160: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
    skip_2:
    // 0x80047164: lw          $t4, 0x24($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X24);
    // 0x80047168: beql        $t4, $zero, L_800471AC
    if (ctx->r12 == 0) {
        // 0x8004716C: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_800471AC;
    }
    goto skip_3;
    // 0x8004716C: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    skip_3:
L_80047170:
    // 0x80047170: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
L_80047174:
    // 0x80047174: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80047178: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8004717C: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80047180: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x80047184: jal         0x8003692C
    // 0x80047188: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_rem_recomp(rdram, ctx);
        goto after_0;
    // 0x80047188: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_0:
    // 0x8004718C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80047190: addu        $t6, $v1, $s3
    ctx->r14 = ADD32(ctx->r3, ctx->r19);
    // 0x80047194: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80047198: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x8004719C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800471A0: addu        $t8, $s2, $t0
    ctx->r24 = ADD32(ctx->r18, ctx->r8);
    // 0x800471A4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800471A8: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
L_800471AC:
    // 0x800471AC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800471B0: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800471B4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800471B8: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800471BC: jal         0x80036968
    // 0x800471C0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_div_recomp(rdram, ctx);
        goto after_1;
    // 0x800471C0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_1:
    // 0x800471C4: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800471C8: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x800471CC: bltz        $v0, L_8004727C
    if (SIGNED(ctx->r2) < 0) {
        // 0x800471D0: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_8004727C;
    }
    // 0x800471D0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800471D4: bgtz        $v0, L_800471E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x800471D8: nop
    
            goto L_800471E4;
    }
    // 0x800471D8: nop

    // 0x800471DC: beql        $v1, $zero, L_80047280
    if (ctx->r3 == 0) {
        // 0x800471E0: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_80047280;
    }
    goto skip_4;
    // 0x800471E0: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_4:
L_800471E4:
    // 0x800471E4: blez        $s0, L_8004727C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800471E8: sra         $t4, $t1, 31
        ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
            goto L_8004727C;
    }
    // 0x800471E8: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800471EC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x800471F0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x800471F4: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x800471F8: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x800471FC: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80047200: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80047204: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_80047208:
    // 0x80047208: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8004720C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80047210: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80047214: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80047218: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004721C: jal         0x80047DD0
    // 0x80047220: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    lldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x80047220: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x80047224: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80047228: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8004722C: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x80047230: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80047234: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x80047238: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8004723C: addu        $t7, $s2, $a0
    ctx->r15 = ADD32(ctx->r18, ctx->r4);
    // 0x80047240: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80047244: addu        $t5, $t3, $s3
    ctx->r13 = ADD32(ctx->r11, ctx->r19);
    // 0x80047248: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x8004724C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80047250: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80047254: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80047258: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8004725C: bltz        $t8, L_8004727C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80047260: sw          $t9, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r25;
            goto L_8004727C;
    }
    // 0x80047260: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80047264: bgtz        $t8, L_80047274
    if (SIGNED(ctx->r24) > 0) {
        // 0x80047268: nop
    
            goto L_80047274;
    }
    // 0x80047268: nop

    // 0x8004726C: beql        $t9, $zero, L_80047280
    if (ctx->r25 == 0) {
        // 0x80047270: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_80047280;
    }
    goto skip_5;
    // 0x80047270: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_5:
L_80047274:
    // 0x80047274: bgtzl       $s0, L_80047208
    if (SIGNED(ctx->r16) > 0) {
        // 0x80047278: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_80047208;
    }
    goto skip_6;
    // 0x80047278: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_6:
L_8004727C:
    // 0x8004727C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
L_80047280:
    // 0x80047280: subu        $a2, $t4, $s0
    ctx->r6 = SUB32(ctx->r12, ctx->r16);
    // 0x80047284: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    // 0x80047288: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x8004728C: jal         0x8003A840
    // 0x80047290: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80047290: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    after_3:
    // 0x80047294: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x80047298: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8004729C: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800472A0: beq         $at, $zero, L_800472AC
    if (ctx->r1 == 0) {
        // 0x800472A4: subu        $t5, $a0, $a1
        ctx->r13 = SUB32(ctx->r4, ctx->r5);
            goto L_800472AC;
    }
    // 0x800472A4: subu        $t5, $a0, $a1
    ctx->r13 = SUB32(ctx->r4, ctx->r5);
    // 0x800472A8: sw          $t5, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r13;
L_800472AC:
    // 0x800472AC: bgezl       $a0, L_800472F0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800472B0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800472F0;
    }
    goto skip_7;
    // 0x800472B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x800472B4: lw          $t6, 0x30($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X30);
    // 0x800472B8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800472BC: andi        $t7, $t6, 0x14
    ctx->r15 = ctx->r14 & 0X14;
    // 0x800472C0: bnel        $t7, $at, L_800472F0
    if (ctx->r15 != ctx->r1) {
        // 0x800472C4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800472F0;
    }
    goto skip_8;
    // 0x800472C4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x800472C8: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x800472CC: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x800472D0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x800472D4: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x800472D8: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x800472DC: subu        $s0, $t3, $a1
    ctx->r16 = SUB32(ctx->r11, ctx->r5);
    // 0x800472E0: blez        $s0, L_800472EC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800472E4: addu        $t4, $v0, $s0
        ctx->r12 = ADD32(ctx->r2, ctx->r16);
            goto L_800472EC;
    }
    // 0x800472E4: addu        $t4, $v0, $s0
    ctx->r12 = ADD32(ctx->r2, ctx->r16);
    // 0x800472E8: sw          $t4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r12;
L_800472EC:
    // 0x800472EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800472F0:
    // 0x800472F0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800472F4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800472F8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800472FC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80047300: jr          $ra
    // 0x80047304: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80047304: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8000199C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000199C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800019A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800019A4: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x800019A8: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x800019AC: addiu       $t7, $t7, 0x5F30
    ctx->r15 = ADD32(ctx->r15, 0X5F30);
    // 0x800019B0: addiu       $t6, $t6, 0x1C00
    ctx->r14 = ADD32(ctx->r14, 0X1C00);
    // 0x800019B4: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x800019B8: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x800019BC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800019C0: jal         0x8000068C
    // 0x800019C4: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x800019C4: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    after_0:
    // 0x800019C8: b           L_800019D0
    // 0x800019CC: nop

        goto L_800019D0;
    // 0x800019CC: nop

L_800019D0:
    // 0x800019D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800019D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800019D8: jr          $ra
    // 0x800019DC: nop

    return;
    // 0x800019DC: nop

;}
RECOMP_FUNC void func_800183E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800183E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800183EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800183F0: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800183F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800183F8: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800183FC: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80018400: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80018404: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80018408: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8001840C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80018410: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80018414: nop

    // 0x80018418: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8001841C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80018420: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x80018424: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018428: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8001842C: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80018430: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80018434: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80018438: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8001843C: ori         $t3, $t3, 0x1402
    ctx->r11 = ctx->r11 | 0X1402;
    // 0x80018440: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80018444: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80018448: nop

    // 0x8001844C: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x80018450: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80018454: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80018458: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001845C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80018460: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80018464: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80018468: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8001846C: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x80018470: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80018474: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80018478: lui         $t0, 0x1F
    ctx->r8 = S32(0X1F << 16);
    // 0x8001847C: ori         $t0, $t0, 0x3204
    ctx->r8 = ctx->r8 | 0X3204;
    // 0x80018480: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80018484: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80018488: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8001848C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018490: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80018494: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80018498: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8001849C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800184A0: lui         $t4, 0xB700
    ctx->r12 = S32(0XB700 << 16);
    // 0x800184A4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x800184A8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800184AC: lui         $t6, 0x3
    ctx->r14 = S32(0X3 << 16);
    // 0x800184B0: ori         $t6, $t6, 0x2205
    ctx->r14 = ctx->r14 | 0X2205;
    // 0x800184B4: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x800184B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800184BC: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x800184C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800184C4: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x800184C8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x800184CC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800184D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800184D4: lui         $t0, 0xFC12
    ctx->r8 = S32(0XFC12 << 16);
    // 0x800184D8: ori         $t0, $t0, 0x7E24
    ctx->r8 = ctx->r8 | 0X7E24;
    // 0x800184DC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x800184E0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800184E4: addiu       $t2, $zero, -0x202
    ctx->r10 = ADD32(0, -0X202);
    // 0x800184E8: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x800184EC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800184F0: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x800184F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800184F8: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x800184FC: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80018500: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80018504: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80018508: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x8001850C: ori         $t6, $t6, 0x31D
    ctx->r14 = ctx->r14 | 0X31D;
    // 0x80018510: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80018514: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80018518: lui         $t8, 0xC811
    ctx->r24 = S32(0XC811 << 16);
    // 0x8001851C: ori         $t8, $t8, 0x7038
    ctx->r24 = ctx->r24 | 0X7038;
    // 0x80018520: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x80018524: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018528: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8001852C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018530: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80018534: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x80018538: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8001853C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80018540: lui         $t2, 0xF800
    ctx->r10 = S32(0XF800 << 16);
    // 0x80018544: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80018548: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x8001854C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80018550: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80018554: sll         $t5, $t4, 24
    ctx->r13 = S32(ctx->r12 << 24);
    // 0x80018558: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x8001855C: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x80018560: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80018564: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80018568: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8001856C: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x80018570: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80018574: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80018578: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001857C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80018580: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018584: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x80018588: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8001858C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80018590: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80018594: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x80018598: ori         $t7, $t7, 0x8
    ctx->r15 = ctx->r15 | 0X8;
    // 0x8001859C: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x800185A0: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800185A4: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800185A8: lui         $t2, 0x1
    ctx->r10 = S32(0X1 << 16);
    // 0x800185AC: ori         $t2, $t2, 0xF400
    ctx->r10 = ctx->r10 | 0XF400;
    // 0x800185B0: subu        $t1, $t8, $t0
    ctx->r9 = SUB32(ctx->r24, ctx->r8);
    // 0x800185B4: div         $zero, $t2, $t1
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r9)));
    // 0x800185B8: bne         $t1, $zero, L_800185C4
    if (ctx->r9 != 0) {
        // 0x800185BC: nop
    
            goto L_800185C4;
    }
    // 0x800185BC: nop

    // 0x800185C0: break       7
    do_break(2147583424);
L_800185C4:
    // 0x800185C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800185C8: bne         $t1, $at, L_800185DC
    if (ctx->r9 != ctx->r1) {
        // 0x800185CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800185DC;
    }
    // 0x800185CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800185D0: bne         $t2, $at, L_800185DC
    if (ctx->r10 != ctx->r1) {
        // 0x800185D4: nop
    
            goto L_800185DC;
    }
    // 0x800185D4: nop

    // 0x800185D8: break       6
    do_break(2147583448);
L_800185DC:
    // 0x800185DC: negu        $t5, $t0
    ctx->r13 = SUB32(0, ctx->r8);
    // 0x800185E0: sll         $t7, $t5, 8
    ctx->r15 = S32(ctx->r13 << 8);
    // 0x800185E4: addu        $at, $t2, $zero
    ctx->r1 = ADD32(ctx->r10, 0);
    // 0x800185E8: addu        $t9, $t7, $at
    ctx->r25 = ADD32(ctx->r15, ctx->r1);
    // 0x800185EC: mflo        $t3
    ctx->r11 = lo;
    // 0x800185F0: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x800185F4: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x800185F8: div         $zero, $t9, $t1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r9)));
    // 0x800185FC: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80018600: bne         $t1, $zero, L_8001860C
    if (ctx->r9 != 0) {
        // 0x80018604: nop
    
            goto L_8001860C;
    }
    // 0x80018604: nop

    // 0x80018608: break       7
    do_break(2147583496);
L_8001860C:
    // 0x8001860C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80018610: bne         $t1, $at, L_80018624
    if (ctx->r9 != ctx->r1) {
        // 0x80018614: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80018624;
    }
    // 0x80018614: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80018618: bne         $t9, $at, L_80018624
    if (ctx->r25 != ctx->r1) {
        // 0x8001861C: nop
    
            goto L_80018624;
    }
    // 0x8001861C: nop

    // 0x80018620: break       6
    do_break(2147583520);
L_80018624:
    // 0x80018624: mflo        $t8
    ctx->r24 = lo;
    // 0x80018628: andi        $t2, $t8, 0xFFFF
    ctx->r10 = ctx->r24 & 0XFFFF;
    // 0x8001862C: or          $t3, $t6, $t2
    ctx->r11 = ctx->r14 | ctx->r10;
    // 0x80018630: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80018634: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80018638: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8001863C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018640: addiu       $t5, $t0, 0x8
    ctx->r13 = ADD32(ctx->r8, 0X8);
    // 0x80018644: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80018648: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8001864C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80018650: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80018654: ori         $t7, $t7, 0xC02
    ctx->r15 = ctx->r15 | 0XC02;
    // 0x80018658: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8001865C: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80018660: addiu       $t1, $zero, 0x2000
    ctx->r9 = ADD32(0, 0X2000);
    // 0x80018664: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x80018668: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001866C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80018670: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018674: addiu       $t2, $t6, 0x8
    ctx->r10 = ADD32(ctx->r14, 0X8);
    // 0x80018678: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8001867C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80018680: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x80018684: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x80018688: ori         $t3, $t3, 0x1301
    ctx->r11 = ctx->r11 | 0X1301;
    // 0x8001868C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80018690: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x80018694: lui         $t0, 0x8
    ctx->r8 = S32(0X8 << 16);
    // 0x80018698: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x8001869C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800186A0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x800186A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800186A8: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x800186AC: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x800186B0: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x800186B4: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800186B8: lui         $t1, 0xBC00
    ctx->r9 = S32(0XBC00 << 16);
    // 0x800186BC: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x800186C0: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x800186C4: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x800186C8: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x800186CC: ori         $t6, $t6, 0x60
    ctx->r14 = ctx->r14 | 0X60;
    // 0x800186D0: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x800186D4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800186D8: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x800186DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800186E0: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800186E4: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x800186E8: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x800186EC: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800186F0: lui         $t0, 0x386
    ctx->r8 = S32(0X386 << 16);
    // 0x800186F4: ori         $t0, $t0, 0x10
    ctx->r8 = ctx->r8 | 0X10;
    // 0x800186F8: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x800186FC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80018700: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x80018704: addiu       $t7, $t7, -0x5A48
    ctx->r15 = ADD32(ctx->r15, -0X5A48);
    // 0x80018708: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8001870C: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80018710: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80018714: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80018718: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001871C: addiu       $t6, $t8, 0x8
    ctx->r14 = ADD32(ctx->r24, 0X8);
    // 0x80018720: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x80018724: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80018728: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8001872C: lui         $t2, 0x388
    ctx->r10 = S32(0X388 << 16);
    // 0x80018730: ori         $t2, $t2, 0x10
    ctx->r10 = ctx->r10 | 0X10;
    // 0x80018734: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80018738: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8001873C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80018740: addiu       $t4, $t4, -0x5A48
    ctx->r12 = ADD32(ctx->r12, -0X5A48);
    // 0x80018744: addiu       $t0, $t4, 0x18
    ctx->r8 = ADD32(ctx->r12, 0X18);
    // 0x80018748: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x8001874C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80018750: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80018754: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80018758: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8001875C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80018760: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x80018764: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x80018768: lui         $t1, 0x38A
    ctx->r9 = S32(0X38A << 16);
    // 0x8001876C: ori         $t1, $t1, 0x10
    ctx->r9 = ctx->r9 | 0X10;
    // 0x80018770: sw          $t1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r9;
    // 0x80018774: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x80018778: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001877C: addiu       $t6, $t6, -0x5A48
    ctx->r14 = ADD32(ctx->r14, -0X5A48);
    // 0x80018780: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x80018784: b           L_8001878C
    // 0x80018788: nop

        goto L_8001878C;
    // 0x80018788: nop

L_8001878C:
    // 0x8001878C: jr          $ra
    // 0x80018790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80018790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80025E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80025E28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80025E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80025E30: jal         0x80024EA8
    // 0x80025E34: nop

    func_80024EA8(rdram, ctx);
        goto after_0;
    // 0x80025E34: nop

    after_0:
    // 0x80025E38: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80025E3C:
    // 0x80025E3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80025E40: jal         0x80025A1C
    // 0x80025E44: nop

    func_80025A1C(rdram, ctx);
        goto after_1;
    // 0x80025E44: nop

    after_1:
    // 0x80025E48: beq         $v0, $zero, L_80025E5C
    if (ctx->r2 == 0) {
        // 0x80025E4C: nop
    
            goto L_80025E5C;
    }
    // 0x80025E4C: nop

    // 0x80025E50: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80025E54: jal         0x80025D4C
    // 0x80025E58: nop

    func_80025D4C(rdram, ctx);
        goto after_2;
    // 0x80025E58: nop

    after_2:
L_80025E5C:
    // 0x80025E5C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80025E60: nop

    // 0x80025E64: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80025E68: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x80025E6C: bne         $at, $zero, L_80025E3C
    if (ctx->r1 != 0) {
        // 0x80025E70: sw          $t7, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r15;
            goto L_80025E3C;
    }
    // 0x80025E70: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80025E74: b           L_80025E7C
    // 0x80025E78: nop

        goto L_80025E7C;
    // 0x80025E78: nop

L_80025E7C:
    // 0x80025E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80025E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80025E84: jr          $ra
    // 0x80025E88: nop

    return;
    // 0x80025E88: nop

;}
RECOMP_FUNC void guMtxIdentF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800361F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800361F4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800361F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800361FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80036200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80036204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80036208: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8003620C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80036210: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80036214:
    // 0x80036214: bnel        $v0, $zero, L_80036228
    if (ctx->r2 != 0) {
        // 0x80036218: swc1        $f2, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
            goto L_80036228;
    }
    goto skip_0;
    // 0x80036218: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    skip_0:
    // 0x8003621C: b           L_80036228
    // 0x80036220: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
        goto L_80036228;
    // 0x80036220: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x80036224: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_80036228:
    // 0x80036228: bnel        $v0, $a0, L_8003623C
    if (ctx->r2 != ctx->r4) {
        // 0x8003622C: swc1        $f2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
            goto L_8003623C;
    }
    goto skip_1;
    // 0x8003622C: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x80036230: b           L_8003623C
    // 0x80036234: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
        goto L_8003623C;
    // 0x80036234: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x80036238: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
L_8003623C:
    // 0x8003623C: bnel        $v0, $a1, L_80036250
    if (ctx->r2 != ctx->r5) {
        // 0x80036240: swc1        $f2, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
            goto L_80036250;
    }
    goto skip_2;
    // 0x80036240: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    skip_2:
    // 0x80036244: b           L_80036250
    // 0x80036248: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
        goto L_80036250;
    // 0x80036248: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x8003624C: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
L_80036250:
    // 0x80036250: bnel        $v0, $a2, L_80036264
    if (ctx->r2 != ctx->r6) {
        // 0x80036254: swc1        $f2, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
            goto L_80036264;
    }
    goto skip_3;
    // 0x80036254: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    skip_3:
    // 0x80036258: b           L_80036264
    // 0x8003625C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
        goto L_80036264;
    // 0x8003625C: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x80036260: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
L_80036264:
    // 0x80036264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80036268: bne         $v0, $a3, L_80036214
    if (ctx->r2 != ctx->r7) {
        // 0x8003626C: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_80036214;
    }
    // 0x8003626C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80036270: jr          $ra
    // 0x80036274: nop

    return;
    // 0x80036274: nop

;}
RECOMP_FUNC void __vsVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CF64: lbu         $t6, 0x36($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X36);
    // 0x8003CF68: lbu         $t7, 0x33($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X33);
    // 0x8003CF6C: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x8003CF70: lbu         $t2, 0x31($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X31);
    // 0x8003CF74: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CF78: lw          $t1, 0x60($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X60);
    // 0x8003CF7C: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x8003CF80: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8003CF84: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8003CF88: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x8003CF8C: lbu         $t7, 0xD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD);
    // 0x8003CF90: mflo        $t8
    ctx->r24 = lo;
    // 0x8003CF94: nop

    // 0x8003CF98: nop

    // 0x8003CF9C: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CFA0: lh          $t9, 0x32($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X32);
    // 0x8003CFA4: mflo        $v1
    ctx->r3 = lo;
    // 0x8003CFA8: sra         $t0, $v1, 6
    ctx->r8 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8003CFAC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8003CFB0: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CFB4: mflo        $t8
    ctx->r24 = lo;
    // 0x8003CFB8: nop

    // 0x8003CFBC: nop

    // 0x8003CFC0: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CFC4: mflo        $a2
    ctx->r6 = lo;
    // 0x8003CFC8: sra         $t0, $a2, 14
    ctx->r8 = S32(SIGNED(ctx->r6) >> 14);
    // 0x8003CFCC: nop

    // 0x8003CFD0: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CFD4: mflo        $v1
    ctx->r3 = lo;
    // 0x8003CFD8: srl         $t2, $v1, 15
    ctx->r10 = S32(U32(ctx->r3) >> 15);
    // 0x8003CFDC: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8003CFE0: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003CFE4: jr          $ra
    // 0x8003CFE8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x8003CFE8: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void func_8000826C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000826C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80008270: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80008274: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80008278: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000827C: lh          $t6, -0x5C9C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5C9C);
    // 0x80008280: nop

    // 0x80008284: bne         $t6, $zero, L_80008294
    if (ctx->r14 != 0) {
        // 0x80008288: nop
    
            goto L_80008294;
    }
    // 0x80008288: nop

    // 0x8000828C: b           L_80008358
    // 0x80008290: nop

        goto L_80008358;
    // 0x80008290: nop

L_80008294:
    // 0x80008294: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80008298: lh          $t7, -0x5C9C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5C9C);
    // 0x8000829C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x800082A0: blez        $t7, L_80008350
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800082A4: nop
    
            goto L_80008350;
    }
    // 0x800082A4: nop

L_800082A8:
    // 0x800082A8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800082AC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800082B0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800082B4: lw          $t0, 0x2DA8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2DA8);
    // 0x800082B8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800082BC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800082C0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800082C4: sw          $t1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r9;
    // 0x800082C8: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x800082CC: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x800082D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800082D4: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800082D8: lw          $t2, 0x2D5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D5C);
    // 0x800082DC: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x800082E0: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x800082E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800082E8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800082EC: lh          $t5, 0x14($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X14);
    // 0x800082F0: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x800082F4: nop

    // 0x800082F8: beq         $t5, $t7, L_80008308
    if (ctx->r13 == ctx->r15) {
        // 0x800082FC: nop
    
            goto L_80008308;
    }
    // 0x800082FC: nop

    // 0x80008300: b           L_80008334
    // 0x80008304: nop

        goto L_80008334;
    // 0x80008304: nop

L_80008308:
    // 0x80008308: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8000830C: nop

    // 0x80008310: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x80008314: nop

    // 0x80008318: bne         $t9, $a0, L_80008334
    if (ctx->r25 != ctx->r4) {
        // 0x8000831C: nop
    
            goto L_80008334;
    }
    // 0x8000831C: nop

    // 0x80008320: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x80008324: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80008328: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x8000832C: b           L_80008358
    // 0x80008330: nop

        goto L_80008358;
    // 0x80008330: nop

L_80008334:
    // 0x80008334: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80008338: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000833C: lh          $t4, -0x5C9C($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X5C9C);
    // 0x80008340: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80008344: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80008348: bne         $at, $zero, L_800082A8
    if (ctx->r1 != 0) {
        // 0x8000834C: sw          $t3, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r11;
            goto L_800082A8;
    }
    // 0x8000834C: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_80008350:
    // 0x80008350: b           L_80008358
    // 0x80008354: nop

        goto L_80008358;
    // 0x80008354: nop

L_80008358:
    // 0x80008358: jr          $ra
    // 0x8000835C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000835C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Math_Mat3f_RotateYaw(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014098: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001409C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800140A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800140A4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800140A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800140AC: lwc1        $f6, -0x5C08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5C08);
    // 0x800140B0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800140B4: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x800140B8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800140BC: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x800140C0: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x800140C4: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800140C8: jal         0x80034970
    // 0x800140CC: nop

    sinf_game(rdram, ctx);
        goto after_0;
    // 0x800140CC: nop

    after_0:
    // 0x800140D0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800140D4: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x800140D8: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800140DC: jal         0x80036570
    // 0x800140E0: nop

    cosf_game(rdram, ctx);
        goto after_1;
    // 0x800140E0: nop

    after_1:
    // 0x800140E4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x800140E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_800140EC:
    // 0x800140EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800140F0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800140F4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800140F8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800140FC: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80014100: addu        $t3, $sp, $t1
    ctx->r11 = ADD32(ctx->r29, ctx->r9);
    // 0x80014104: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x80014108: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8001410C: nop

    // 0x80014110: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80014114: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80014118: bne         $at, $zero, L_800140EC
    if (ctx->r1 != 0) {
        // 0x8001411C: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_800140EC;
    }
    // 0x8001411C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80014120: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80014124:
    // 0x80014124: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80014128: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001412C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80014130: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x80014134: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80014138: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8001413C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80014140: addu        $t9, $t0, $t7
    ctx->r25 = ADD32(ctx->r8, ctx->r15);
    // 0x80014144: lwc1        $f6, 0x20($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80014148: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8001414C: nop

    // 0x80014150: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80014154: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80014158: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x8001415C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80014160: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80014164: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80014168: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001416C: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x80014170: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80014174: addu        $t5, $sp, $t3
    ctx->r13 = ADD32(ctx->r29, ctx->r11);
    // 0x80014178: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8001417C: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80014180: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80014184: nop

    // 0x80014188: mul.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8001418C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80014190: swc1        $f18, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f18.u32l;
    // 0x80014194: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80014198: nop

    // 0x8001419C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800141A0: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x800141A4: bne         $at, $zero, L_80014124
    if (ctx->r1 != 0) {
        // 0x800141A8: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_80014124;
    }
    // 0x800141A8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800141AC: b           L_800141B4
    // 0x800141B0: nop

        goto L_800141B4;
    // 0x800141B0: nop

L_800141B4:
    // 0x800141B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800141B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800141BC: jr          $ra
    // 0x800141C0: nop

    return;
    // 0x800141C0: nop

;}
RECOMP_FUNC void Math_Mat3f_RotateRoll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800141C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800141C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800141CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800141D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800141D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800141D8: lwc1        $f6, -0x5C04($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5C04);
    // 0x800141DC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800141E0: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x800141E4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800141E8: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x800141EC: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x800141F0: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800141F4: jal         0x80034970
    // 0x800141F8: nop

    sinf_game(rdram, ctx);
        goto after_0;
    // 0x800141F8: nop

    after_0:
    // 0x800141FC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80014200: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x80014204: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80014208: jal         0x80036570
    // 0x8001420C: nop

    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8001420C: nop

    after_1:
    // 0x80014210: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80014214: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80014218:
    // 0x80014218: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8001421C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80014220: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80014224: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80014228: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8001422C: addu        $t3, $sp, $t1
    ctx->r11 = ADD32(ctx->r29, ctx->r9);
    // 0x80014230: swc1        $f10, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f10.u32l;
    // 0x80014234: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80014238: nop

    // 0x8001423C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80014240: slti        $at, $t5, 0x3
    ctx->r1 = SIGNED(ctx->r13) < 0X3 ? 1 : 0;
    // 0x80014244: bne         $at, $zero, L_80014218
    if (ctx->r1 != 0) {
        // 0x80014248: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_80014218;
    }
    // 0x80014248: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x8001424C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80014250:
    // 0x80014250: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80014254: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80014258: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001425C: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80014260: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80014264: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80014268: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x8001426C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80014270: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80014274: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80014278: nop

    // 0x8001427C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80014280: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80014284: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
    // 0x80014288: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8001428C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80014290: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80014294: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80014298: lwc1        $f18, 0x10($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X10);
    // 0x8001429C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800142A0: addu        $t5, $sp, $t3
    ctx->r13 = ADD32(ctx->r29, ctx->r11);
    // 0x800142A4: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x800142A8: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800142AC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800142B0: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x800142B4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800142B8: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x800142BC: swc1        $f6, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f6.u32l;
    // 0x800142C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800142C4: nop

    // 0x800142C8: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x800142CC: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x800142D0: bne         $at, $zero, L_80014250
    if (ctx->r1 != 0) {
        // 0x800142D4: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_80014250;
    }
    // 0x800142D4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800142D8: b           L_800142E0
    // 0x800142DC: nop

        goto L_800142E0;
    // 0x800142DC: nop

L_800142E0:
    // 0x800142E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800142E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800142E8: jr          $ra
    // 0x800142EC: nop

    return;
    // 0x800142EC: nop

;}
RECOMP_FUNC void memcpy_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A840: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8003A844: beq         $a2, $zero, L_8003A864
    if (ctx->r6 == 0) {
        // 0x8003A848: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_8003A864;
    }
    // 0x8003A848: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_8003A84C:
    // 0x8003A84C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8003A850: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003A854: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003A858: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003A85C: bne         $a2, $zero, L_8003A84C
    if (ctx->r6 != 0) {
        // 0x8003A860: sb          $t6, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r14;
            goto L_8003A84C;
    }
    // 0x8003A860: sb          $t6, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r14;
L_8003A864:
    // 0x8003A864: jr          $ra
    // 0x8003A868: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8003A868: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void alSeqpSetBank(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034620: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034628: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8003462C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034630: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x80034634: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80034638: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8003463C: jal         0x8003E80C
    // 0x80034640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x80034640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034648: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003464C: jr          $ra
    // 0x80034650: nop

    return;
    // 0x80034650: nop

;}
RECOMP_FUNC void Set_BgColor(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D244: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8001D248: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8001D24C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8001D250: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x8001D254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D258: sb          $a0, -0x1EEF($at)
    MEM_B(-0X1EEF, ctx->r1) = ctx->r4;
    // 0x8001D25C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D260: sb          $a1, -0x1EEC($at)
    MEM_B(-0X1EEC, ctx->r1) = ctx->r5;
    // 0x8001D264: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D268: sb          $a2, -0x1EEA($at)
    MEM_B(-0X1EEA, ctx->r1) = ctx->r6;
    // 0x8001D26C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001D270: sb          $a3, -0x1ED4($at)
    MEM_B(-0X1ED4, ctx->r1) = ctx->r7;
    // 0x8001D274: jr          $ra
    // 0x8001D278: nop

    return;
    // 0x8001D278: nop

    // 0x8001D27C: jr          $ra
    // 0x8001D280: nop

    return;
    // 0x8001D280: nop

;}
RECOMP_FUNC void func_80000ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000ED4: lui         $t6, 0x14
    ctx->r14 = S32(0X14 << 16);
    // 0x80000ED8: lui         $t7, 0x15
    ctx->r15 = S32(0X15 << 16);
    // 0x80000EDC: addiu       $t7, $t7, -0x3AC0
    ctx->r15 = ADD32(ctx->r15, -0X3AC0);
    // 0x80000EE0: addiu       $t6, $t6, 0x7BB0
    ctx->r14 = ADD32(ctx->r14, 0X7BB0);
    // 0x80000EE4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80000EE8: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80000EEC: jal         0x8000068C
    // 0x80000EF0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80000EF0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    after_0:
    // 0x80000EF4: lui         $t8, 0x16
    ctx->r24 = S32(0X16 << 16);
    // 0x80000EF8: lui         $t9, 0x16
    ctx->r25 = S32(0X16 << 16);
    // 0x80000EFC: addiu       $t9, $t9, -0x3F30
    ctx->r25 = ADD32(ctx->r25, -0X3F30);
    // 0x80000F00: addiu       $t8, $t8, -0x5830
    ctx->r24 = ADD32(ctx->r24, -0X5830);
    // 0x80000F04: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80000F08: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    // 0x80000F0C: jal         0x8000068C
    // 0x80000F10: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x80000F10: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_1:
    // 0x80000F14: b           L_80000F1C
    // 0x80000F18: nop

        goto L_80000F1C;
    // 0x80000F18: nop

L_80000F1C:
    // 0x80000F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000F24: jr          $ra
    // 0x80000F28: nop

    return;
    // 0x80000F28: nop

;}
RECOMP_FUNC void func_80009BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009BA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80009BA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80009BAC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80009BB0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80009BB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80009BB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80009BBC: nop

    // 0x80009BC0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80009BC4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80009BC8: nop

    // 0x80009BCC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80009BD0: nop

    // 0x80009BD4: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80009BD8: beq         $t8, $zero, L_8000A0F4
    if (ctx->r24 == 0) {
        // 0x80009BDC: nop
    
            goto L_8000A0F4;
    }
    // 0x80009BDC: nop

    // 0x80009BE0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009BE4: nop

    // 0x80009BE8: lbu         $t0, 0x1D($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1D);
    // 0x80009BEC: nop

    // 0x80009BF0: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80009BF4: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x80009BF8: beq         $at, $zero, L_8000A0F4
    if (ctx->r1 == 0) {
        // 0x80009BFC: nop
    
            goto L_8000A0F4;
    }
    // 0x80009BFC: nop

    // 0x80009C00: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80009C04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80009C08: addu        $at, $at, $t1
    gpr jr_addend_80009C14 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80009C0C: lw          $t1, -0x4478($at)
    ctx->r9 = ADD32(ctx->r1, -0X4478);
    // 0x80009C10: nop

    // 0x80009C14: jr          $t1
    // 0x80009C18: nop

    switch (jr_addend_80009C14 >> 2) {
        case 0: goto L_80009C1C; break;
        case 1: goto L_80009CE0; break;
        case 2: goto L_80009E7C; break;
        case 3: goto L_80009F48; break;
        case 4: goto L_8000A010; break;
        default: switch_error(__func__, 0x80009C14, 0x8004BB88);
    }
    // 0x80009C18: nop

L_80009C1C:
    // 0x80009C1C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80009C20: nop

    // 0x80009C24: lh          $t3, 0x20($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X20);
    // 0x80009C28: nop

    // 0x80009C2C: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x80009C30: sh          $t4, 0x20($t2)
    MEM_H(0X20, ctx->r10) = ctx->r12;
    // 0x80009C34: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80009C38: nop

    // 0x80009C3C: lh          $t6, 0x20($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X20);
    // 0x80009C40: lh          $t7, 0x22($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X22);
    // 0x80009C44: nop

    // 0x80009C48: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80009C4C: bne         $at, $zero, L_80009C60
    if (ctx->r1 != 0) {
        // 0x80009C50: nop
    
            goto L_80009C60;
    }
    // 0x80009C50: nop

    // 0x80009C54: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009C58: b           L_80009CD8
    // 0x80009C5C: sh          $zero, 0x20($t8)
    MEM_H(0X20, ctx->r24) = 0;
        goto L_80009CD8;
    // 0x80009C5C: sh          $zero, 0x20($t8)
    MEM_H(0X20, ctx->r24) = 0;
L_80009C60:
    // 0x80009C60: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009C64: nop

    // 0x80009C68: lh          $t0, 0x20($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X20);
    // 0x80009C6C: lh          $t1, 0x22($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X22);
    // 0x80009C70: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80009C74: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80009C78: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80009C7C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80009C80: nop

    // 0x80009C84: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80009C88: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80009C8C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80009C90: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009C94: lwc1        $f11, -0x4460($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4460);
    // 0x80009C98: lwc1        $f10, -0x445C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X445C);
    // 0x80009C9C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80009CA0: mul.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80009CA4: jal         0x80034970
    // 0x80009CA8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80009CA8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_0:
    // 0x80009CAC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80009CB0: nop

    // 0x80009CB4: lh          $t4, 0x24($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X24);
    // 0x80009CB8: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80009CBC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80009CC0: nop

    // 0x80009CC4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80009CC8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80009CCC: nop

    // 0x80009CD0: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80009CD4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_80009CD8:
    // 0x80009CD8: b           L_8000A0F4
    // 0x80009CDC: nop

        goto L_8000A0F4;
    // 0x80009CDC: nop

L_80009CE0:
    // 0x80009CE0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80009CE4: nop

    // 0x80009CE8: lh          $t6, 0x22($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X22);
    // 0x80009CEC: lh          $t5, 0x20($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X20);
    // 0x80009CF0: bgez        $t6, L_80009D00
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80009CF4: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_80009D00;
    }
    // 0x80009CF4: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80009CF8: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x80009CFC: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_80009D00:
    // 0x80009D00: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80009D04: bne         $at, $zero, L_80009D58
    if (ctx->r1 != 0) {
        // 0x80009D08: nop
    
            goto L_80009D58;
    }
    // 0x80009D08: nop

    // 0x80009D0C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009D10: nop

    // 0x80009D14: lh          $t0, 0x26($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X26);
    // 0x80009D18: nop

    // 0x80009D1C: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80009D20: sh          $t9, 0x26($t8)
    MEM_H(0X26, ctx->r24) = ctx->r25;
    // 0x80009D24: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80009D28: nop

    // 0x80009D2C: lh          $t4, 0x26($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X26);
    // 0x80009D30: nop

    // 0x80009D34: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80009D38: bne         $at, $zero, L_80009D4C
    if (ctx->r1 != 0) {
        // 0x80009D3C: nop
    
            goto L_80009D4C;
    }
    // 0x80009D3C: nop

    // 0x80009D40: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80009D44: nop

    // 0x80009D48: sh          $zero, 0x26($t3)
    MEM_H(0X26, ctx->r11) = 0;
L_80009D4C:
    // 0x80009D4C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80009D50: nop

    // 0x80009D54: sh          $zero, 0x20($t2)
    MEM_H(0X20, ctx->r10) = 0;
L_80009D58:
    // 0x80009D58: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80009D5C: nop

    // 0x80009D60: lh          $t7, 0x22($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X22);
    // 0x80009D64: lh          $t5, 0x20($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X20);
    // 0x80009D68: nop

    // 0x80009D6C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80009D70: nop

    // 0x80009D74: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80009D78: bgez        $t7, L_80009D88
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80009D7C: sra         $t0, $t7, 2
        ctx->r8 = S32(SIGNED(ctx->r15) >> 2);
            goto L_80009D88;
    }
    // 0x80009D7C: sra         $t0, $t7, 2
    ctx->r8 = S32(SIGNED(ctx->r15) >> 2);
    // 0x80009D80: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x80009D84: sra         $t0, $at, 2
    ctx->r8 = S32(SIGNED(ctx->r1) >> 2);
L_80009D88:
    // 0x80009D88: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80009D8C: nop

    // 0x80009D90: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80009D94: nop

    // 0x80009D98: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80009D9C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80009DA0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009DA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80009DA8: lh          $s0, 0x26($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X26);
    // 0x80009DAC: nop

    // 0x80009DB0: beq         $s0, $at, L_80009DD8
    if (ctx->r16 == ctx->r1) {
        // 0x80009DB4: nop
    
            goto L_80009DD8;
    }
    // 0x80009DB4: nop

    // 0x80009DB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80009DBC: beq         $s0, $at, L_80009E10
    if (ctx->r16 == ctx->r1) {
        // 0x80009DC0: nop
    
            goto L_80009E10;
    }
    // 0x80009DC0: nop

    // 0x80009DC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80009DC8: beq         $s0, $at, L_80009DF8
    if (ctx->r16 == ctx->r1) {
        // 0x80009DCC: nop
    
            goto L_80009DF8;
    }
    // 0x80009DCC: nop

    // 0x80009DD0: b           L_80009E30
    // 0x80009DD4: nop

        goto L_80009E30;
    // 0x80009DD4: nop

L_80009DD8:
    // 0x80009DD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80009DDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80009DE0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009DE4: nop

    // 0x80009DE8: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80009DEC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80009DF0: b           L_80009E30
    // 0x80009DF4: nop

        goto L_80009E30;
    // 0x80009DF4: nop

L_80009DF8:
    // 0x80009DF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80009DFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80009E00: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009E04: nop

    // 0x80009E08: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80009E0C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_80009E10:
    // 0x80009E10: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80009E14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80009E18: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009E1C: nop

    // 0x80009E20: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80009E24: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x80009E28: b           L_80009E30
    // 0x80009E2C: nop

        goto L_80009E30;
    // 0x80009E2C: nop

L_80009E30:
    // 0x80009E30: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009E34: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009E38: lh          $t1, 0x24($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X24);
    // 0x80009E3C: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80009E40: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80009E44: nop

    // 0x80009E48: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80009E4C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80009E50: nop

    // 0x80009E54: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80009E58: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80009E5C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80009E60: nop

    // 0x80009E64: lh          $t3, 0x20($t4)
    ctx->r11 = MEM_H(ctx->r12, 0X20);
    // 0x80009E68: nop

    // 0x80009E6C: addiu       $t2, $t3, 0x2
    ctx->r10 = ADD32(ctx->r11, 0X2);
    // 0x80009E70: sh          $t2, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r10;
    // 0x80009E74: b           L_8000A0F4
    // 0x80009E78: nop

        goto L_8000A0F4;
    // 0x80009E78: nop

L_80009E7C:
    // 0x80009E7C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80009E80: nop

    // 0x80009E84: lh          $t6, 0x20($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X20);
    // 0x80009E88: lh          $t7, 0x22($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X22);
    // 0x80009E8C: nop

    // 0x80009E90: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80009E94: bne         $at, $zero, L_80009EA8
    if (ctx->r1 != 0) {
        // 0x80009E98: nop
    
            goto L_80009EA8;
    }
    // 0x80009E98: nop

    // 0x80009E9C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80009EA0: nop

    // 0x80009EA4: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
L_80009EA8:
    // 0x80009EA8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009EAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80009EB0: lh          $t1, 0x22($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X22);
    // 0x80009EB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80009EB8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80009EBC: nop

    // 0x80009EC0: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80009EC4: nop

    // 0x80009EC8: div.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80009ECC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80009ED0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009ED4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80009ED8: lh          $t3, 0x20($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X20);
    // 0x80009EDC: nop

    // 0x80009EE0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80009EE4: nop

    // 0x80009EE8: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80009EEC: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80009EF0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80009EF4: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80009EF8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80009EFC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80009F00: div.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80009F04: lh          $t4, 0x24($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X24);
    // 0x80009F08: lwc1        $f6, 0x2C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80009F0C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80009F10: nop

    // 0x80009F14: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80009F18: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80009F1C: nop

    // 0x80009F20: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80009F24: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80009F28: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80009F2C: nop

    // 0x80009F30: lh          $t6, 0x20($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X20);
    // 0x80009F34: nop

    // 0x80009F38: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x80009F3C: sh          $t7, 0x20($t5)
    MEM_H(0X20, ctx->r13) = ctx->r15;
    // 0x80009F40: b           L_8000A0F4
    // 0x80009F44: nop

        goto L_8000A0F4;
    // 0x80009F44: nop

L_80009F48:
    // 0x80009F48: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80009F4C: nop

    // 0x80009F50: lh          $t9, 0x20($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X20);
    // 0x80009F54: lh          $t1, 0x22($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X22);
    // 0x80009F58: nop

    // 0x80009F5C: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80009F60: bne         $at, $zero, L_80009F8C
    if (ctx->r1 != 0) {
        // 0x80009F64: nop
    
            goto L_80009F8C;
    }
    // 0x80009F64: nop

    // 0x80009F68: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009F6C: nop

    // 0x80009F70: sh          $zero, 0x20($t8)
    MEM_H(0X20, ctx->r24) = 0;
    // 0x80009F74: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80009F78: nop

    // 0x80009F7C: lh          $t4, 0x26($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X26);
    // 0x80009F80: nop

    // 0x80009F84: nor         $t2, $t4, $zero
    ctx->r10 = ~(ctx->r12 | 0);
    // 0x80009F88: sh          $t2, 0x26($t3)
    MEM_H(0X26, ctx->r11) = ctx->r10;
L_80009F8C:
    // 0x80009F8C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80009F90: nop

    // 0x80009F94: lh          $t7, 0x26($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X26);
    // 0x80009F98: nop

    // 0x80009F9C: bne         $t7, $zero, L_80009FCC
    if (ctx->r15 != 0) {
        // 0x80009FA0: nop
    
            goto L_80009FCC;
    }
    // 0x80009FA0: nop

    // 0x80009FA4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80009FA8: nop

    // 0x80009FAC: lh          $t0, 0x24($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X24);
    // 0x80009FB0: lwc1        $f8, 0x2C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x80009FB4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80009FB8: nop

    // 0x80009FBC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80009FC0: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80009FC4: b           L_80009FF0
    // 0x80009FC8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
        goto L_80009FF0;
    // 0x80009FC8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_80009FCC:
    // 0x80009FCC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80009FD0: nop

    // 0x80009FD4: lh          $t1, 0x24($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X24);
    // 0x80009FD8: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x80009FDC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80009FE0: neg.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = -ctx->f18.fl;
    // 0x80009FE4: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80009FE8: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80009FEC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_80009FF0:
    // 0x80009FF0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80009FF4: nop

    // 0x80009FF8: lh          $t4, 0x20($t8)
    ctx->r12 = MEM_H(ctx->r24, 0X20);
    // 0x80009FFC: nop

    // 0x8000A000: addiu       $t2, $t4, 0x2
    ctx->r10 = ADD32(ctx->r12, 0X2);
    // 0x8000A004: sh          $t2, 0x20($t8)
    MEM_H(0X20, ctx->r24) = ctx->r10;
    // 0x8000A008: b           L_8000A0F4
    // 0x8000A00C: nop

        goto L_8000A0F4;
    // 0x8000A00C: nop

L_8000A010:
    // 0x8000A010: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000A014: nop

    // 0x8000A018: lh          $t7, 0x22($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X22);
    // 0x8000A01C: lh          $t6, 0x20($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X20);
    // 0x8000A020: bgez        $t7, L_8000A030
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000A024: sra         $t0, $t7, 1
        ctx->r8 = S32(SIGNED(ctx->r15) >> 1);
            goto L_8000A030;
    }
    // 0x8000A024: sra         $t0, $t7, 1
    ctx->r8 = S32(SIGNED(ctx->r15) >> 1);
    // 0x8000A028: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x8000A02C: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_8000A030:
    // 0x8000A030: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8000A034: beq         $at, $zero, L_8000A05C
    if (ctx->r1 == 0) {
        // 0x8000A038: nop
    
            goto L_8000A05C;
    }
    // 0x8000A038: nop

    // 0x8000A03C: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x8000A040: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000A044: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8000A048: nop

    // 0x8000A04C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000A050: nop

    // 0x8000A054: bc1f        L_8000A0A8
    if (!c1cs) {
        // 0x8000A058: nop
    
            goto L_8000A0A8;
    }
    // 0x8000A058: nop

L_8000A05C:
    // 0x8000A05C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000A060: nop

    // 0x8000A064: sh          $zero, 0x20($t5)
    MEM_H(0X20, ctx->r13) = 0;
    // 0x8000A068: jal         0x800355F0
    // 0x8000A06C: nop

    guRandom(rdram, ctx);
        goto after_1;
    // 0x8000A06C: nop

    after_1:
    // 0x8000A070: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x8000A074: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8000A078: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x8000A07C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8000A080: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8000A084: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000A088: mfhi        $t1
    ctx->r9 = hi;
    // 0x8000A08C: subu        $t4, $t9, $t1
    ctx->r12 = SUB32(ctx->r25, ctx->r9);
    // 0x8000A090: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8000A094: nop

    // 0x8000A098: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000A09C: nop

    // 0x8000A0A0: div.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000A0A4: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
L_8000A0A8:
    // 0x8000A0A8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000A0AC: nop

    // 0x8000A0B0: lh          $t7, 0x24($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X24);
    // 0x8000A0B4: lwc1        $f18, 0x28($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X28);
    // 0x8000A0B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8000A0BC: lwc1        $f16, 0x2C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8000A0C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000A0C4: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8000A0C8: nop

    // 0x8000A0CC: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8000A0D0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8000A0D4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000A0D8: nop

    // 0x8000A0DC: lh          $t0, 0x20($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X20);
    // 0x8000A0E0: nop

    // 0x8000A0E4: addiu       $t3, $t0, 0x2
    ctx->r11 = ADD32(ctx->r8, 0X2);
    // 0x8000A0E8: sh          $t3, 0x20($t6)
    MEM_H(0X20, ctx->r14) = ctx->r11;
    // 0x8000A0EC: b           L_8000A0F4
    // 0x8000A0F0: nop

        goto L_8000A0F4;
    // 0x8000A0F0: nop

L_8000A0F4:
    // 0x8000A0F4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000A0F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000A0FC: lh          $t9, 0x30($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X30);
    // 0x8000A100: nop

    // 0x8000A104: bne         $t9, $at, L_8000A1E0
    if (ctx->r25 != ctx->r1) {
        // 0x8000A108: nop
    
            goto L_8000A1E0;
    }
    // 0x8000A108: nop

    // 0x8000A10C: b           L_8000A114
    // 0x8000A110: nop

        goto L_8000A114;
    // 0x8000A110: nop

L_8000A114:
    // 0x8000A114: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000A118: nop

    // 0x8000A11C: lh          $t4, 0x34($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X34);
    // 0x8000A120: nop

    // 0x8000A124: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x8000A128: sh          $t2, 0x34($t1)
    MEM_H(0X34, ctx->r9) = ctx->r10;
    // 0x8000A12C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8000A130: nop

    // 0x8000A134: lh          $t8, 0x34($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X34);
    // 0x8000A138: lh          $t0, 0x36($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X36);
    // 0x8000A13C: nop

    // 0x8000A140: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8000A144: bne         $at, $zero, L_8000A184
    if (ctx->r1 != 0) {
        // 0x8000A148: nop
    
            goto L_8000A184;
    }
    // 0x8000A148: nop

    // 0x8000A14C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000A150: nop

    // 0x8000A154: sh          $zero, 0x30($t3)
    MEM_H(0X30, ctx->r11) = 0;
    // 0x8000A158: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000A15C: nop

    // 0x8000A160: lh          $t5, 0xE($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XE);
    // 0x8000A164: lh          $t9, 0x32($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X32);
    // 0x8000A168: nop

    // 0x8000A16C: addu        $t4, $t5, $t9
    ctx->r12 = ADD32(ctx->r13, ctx->r25);
    // 0x8000A170: sh          $t4, 0xE($t6)
    MEM_H(0XE, ctx->r14) = ctx->r12;
    // 0x8000A174: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000A178: lwc1        $f4, -0x4458($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4458);
    // 0x8000A17C: b           L_8000A1D8
    // 0x8000A180: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
        goto L_8000A1D8;
    // 0x8000A180: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8000A184:
    // 0x8000A184: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000A188: nop

    // 0x8000A18C: lh          $t1, 0x34($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X34);
    // 0x8000A190: lh          $t7, 0x36($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X36);
    // 0x8000A194: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8000A198: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8000A19C: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000A1A0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000A1A4: nop

    // 0x8000A1A8: div.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8000A1AC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8000A1B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000A1B4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000A1B8: lh          $t0, 0x32($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X32);
    // 0x8000A1BC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A1C0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8000A1C4: nop

    // 0x8000A1C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000A1CC: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000A1D0: add.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x8000A1D4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_8000A1D8:
    // 0x8000A1D8: b           L_8000A1E0
    // 0x8000A1DC: nop

        goto L_8000A1E0;
    // 0x8000A1DC: nop

L_8000A1E0:
    // 0x8000A1E0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000A1E4: nop

    // 0x8000A1E8: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x8000A1EC: nop

    // 0x8000A1F0: andi        $t9, $t5, 0x20
    ctx->r25 = ctx->r13 & 0X20;
    // 0x8000A1F4: beq         $t9, $zero, L_8000A44C
    if (ctx->r25 == 0) {
        // 0x8000A1F8: nop
    
            goto L_8000A44C;
    }
    // 0x8000A1F8: nop

    // 0x8000A1FC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8000A200: nop

    // 0x8000A204: lh          $t6, 0x44($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X44);
    // 0x8000A208: nop

    // 0x8000A20C: beq         $t6, $zero, L_8000A230
    if (ctx->r14 == 0) {
        // 0x8000A210: nop
    
            goto L_8000A230;
    }
    // 0x8000A210: nop

    // 0x8000A214: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000A218: nop

    // 0x8000A21C: lh          $t2, 0x44($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X44);
    // 0x8000A220: nop

    // 0x8000A224: addiu       $t7, $t2, -0x1
    ctx->r15 = ADD32(ctx->r10, -0X1);
    // 0x8000A228: b           L_8000A44C
    // 0x8000A22C: sh          $t7, 0x44($t1)
    MEM_H(0X44, ctx->r9) = ctx->r15;
        goto L_8000A44C;
    // 0x8000A22C: sh          $t7, 0x44($t1)
    MEM_H(0X44, ctx->r9) = ctx->r15;
L_8000A230:
    // 0x8000A230: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000A234: nop

    // 0x8000A238: lh          $t0, 0x4C($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X4C);
    // 0x8000A23C: nop

    // 0x8000A240: bne         $t0, $zero, L_8000A334
    if (ctx->r8 != 0) {
        // 0x8000A244: nop
    
            goto L_8000A334;
    }
    // 0x8000A244: nop

    // 0x8000A248: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000A24C: nop

    // 0x8000A250: lw          $t5, 0x38($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X38);
    // 0x8000A254: nop

    // 0x8000A258: lb          $t9, 0x0($t5)
    ctx->r25 = MEM_B(ctx->r13, 0X0);
    // 0x8000A25C: nop

    // 0x8000A260: sh          $t9, 0x4C($t3)
    MEM_H(0X4C, ctx->r11) = ctx->r25;
    // 0x8000A264: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8000A268: nop

    // 0x8000A26C: lh          $t6, 0x4C($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X4C);
    // 0x8000A270: nop

    // 0x8000A274: bne         $t6, $zero, L_8000A2AC
    if (ctx->r14 != 0) {
        // 0x8000A278: nop
    
            goto L_8000A2AC;
    }
    // 0x8000A278: nop

    // 0x8000A27C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000A280: nop

    // 0x8000A284: lw          $t7, 0x3C($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X3C);
    // 0x8000A288: nop

    // 0x8000A28C: sw          $t7, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r15;
    // 0x8000A290: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000A294: nop

    // 0x8000A298: lw          $t8, 0x38($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X38);
    // 0x8000A29C: nop

    // 0x8000A2A0: lb          $t0, 0x0($t8)
    ctx->r8 = MEM_B(ctx->r24, 0X0);
    // 0x8000A2A4: nop

    // 0x8000A2A8: sh          $t0, 0x4C($t1)
    MEM_H(0X4C, ctx->r9) = ctx->r8;
L_8000A2AC:
    // 0x8000A2AC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000A2B0: nop

    // 0x8000A2B4: lw          $t9, 0x38($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X38);
    // 0x8000A2B8: nop

    // 0x8000A2BC: lbu         $t4, 0x1($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X1);
    // 0x8000A2C0: lbu         $t3, 0x2($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X2);
    // 0x8000A2C4: sll         $t6, $t4, 8
    ctx->r14 = S32(ctx->r12 << 8);
    // 0x8000A2C8: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x8000A2CC: sh          $t7, 0x48($t5)
    MEM_H(0X48, ctx->r13) = ctx->r15;
    // 0x8000A2D0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000A2D4: nop

    // 0x8000A2D8: lh          $t8, 0x48($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X48);
    // 0x8000A2DC: lwc1        $f10, 0x40($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X40);
    // 0x8000A2E0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000A2E4: nop

    // 0x8000A2E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000A2EC: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000A2F0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8000A2F4: nop

    // 0x8000A2F8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8000A2FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000A300: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000A304: nop

    // 0x8000A308: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000A30C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8000A310: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8000A314: sh          $t1, 0x48($t2)
    MEM_H(0X48, ctx->r10) = ctx->r9;
    // 0x8000A318: nop

    // 0x8000A31C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8000A320: nop

    // 0x8000A324: lw          $t4, 0x38($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X38);
    // 0x8000A328: nop

    // 0x8000A32C: addiu       $t3, $t4, 0x3
    ctx->r11 = ADD32(ctx->r12, 0X3);
    // 0x8000A330: sw          $t3, 0x38($t9)
    MEM_W(0X38, ctx->r25) = ctx->r11;
L_8000A334:
    // 0x8000A334: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000A338: addiu       $at, $zero, -0x80
    ctx->r1 = ADD32(0, -0X80);
    // 0x8000A33C: lh          $t7, 0x4C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X4C);
    // 0x8000A340: nop

    // 0x8000A344: bne         $t7, $at, L_8000A37C
    if (ctx->r15 != ctx->r1) {
        // 0x8000A348: nop
    
            goto L_8000A37C;
    }
    // 0x8000A348: nop

    // 0x8000A34C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8000A350: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A354: lh          $t8, 0x46($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X46);
    // 0x8000A358: lh          $t0, 0x4A($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X4A);
    // 0x8000A35C: nop

    // 0x8000A360: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8000A364: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8000A368: nop

    // 0x8000A36C: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000A370: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8000A374: b           L_8000A44C
    // 0x8000A378: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_8000A44C;
    // 0x8000A378: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8000A37C:
    // 0x8000A37C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8000A380: nop

    // 0x8000A384: lh          $t4, 0x4C($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X4C);
    // 0x8000A388: nop

    // 0x8000A38C: blez        $t4, L_8000A3EC
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8000A390: nop
    
            goto L_8000A3EC;
    }
    // 0x8000A390: nop

    // 0x8000A394: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000A398: nop

    // 0x8000A39C: lh          $t9, 0x4C($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X4C);
    // 0x8000A3A0: nop

    // 0x8000A3A4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8000A3A8: sh          $t6, 0x4C($t3)
    MEM_H(0X4C, ctx->r11) = ctx->r14;
    // 0x8000A3AC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8000A3B0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A3B4: lh          $t5, 0x46($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X46);
    // 0x8000A3B8: lh          $t8, 0x48($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X48);
    // 0x8000A3BC: nop

    // 0x8000A3C0: addu        $t0, $t5, $t8
    ctx->r8 = ADD32(ctx->r13, ctx->r24);
    // 0x8000A3C4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8000A3C8: nop

    // 0x8000A3CC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8000A3D0: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8000A3D4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8000A3D8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000A3DC: nop

    // 0x8000A3E0: lh          $t2, 0x48($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X48);
    // 0x8000A3E4: b           L_8000A44C
    // 0x8000A3E8: sh          $t2, 0x4A($t1)
    MEM_H(0X4A, ctx->r9) = ctx->r10;
        goto L_8000A44C;
    // 0x8000A3E8: sh          $t2, 0x4A($t1)
    MEM_H(0X4A, ctx->r9) = ctx->r10;
L_8000A3EC:
    // 0x8000A3EC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8000A3F0: nop

    // 0x8000A3F4: lh          $t9, 0x4C($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X4C);
    // 0x8000A3F8: nop

    // 0x8000A3FC: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8000A400: sh          $t6, 0x4C($t4)
    MEM_H(0X4C, ctx->r12) = ctx->r14;
    // 0x8000A404: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8000A408: nop

    // 0x8000A40C: lh          $t7, 0x4A($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X4A);
    // 0x8000A410: lh          $t5, 0x48($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X48);
    // 0x8000A414: nop

    // 0x8000A418: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x8000A41C: sh          $t8, 0x4A($t3)
    MEM_H(0X4A, ctx->r11) = ctx->r24;
    // 0x8000A420: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8000A424: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A428: lh          $t2, 0x46($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X46);
    // 0x8000A42C: lh          $t1, 0x4A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4A);
    // 0x8000A430: nop

    // 0x8000A434: addu        $t9, $t2, $t1
    ctx->r25 = ADD32(ctx->r10, ctx->r9);
    // 0x8000A438: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8000A43C: nop

    // 0x8000A440: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000A444: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8000A448: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
L_8000A44C:
    // 0x8000A44C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8000A450: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A454: lh          $t4, 0xE($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XE);
    // 0x8000A458: nop

    // 0x8000A45C: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8000A460: nop

    // 0x8000A464: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000A468: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8000A46C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8000A470: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8000A474: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000A478: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A47C: nop

    // 0x8000A480: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8000A484: nop

    // 0x8000A488: bc1f        L_8000A4A0
    if (!c1cs) {
        // 0x8000A48C: nop
    
            goto L_8000A4A0;
    }
    // 0x8000A48C: nop

    // 0x8000A490: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8000A494: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000A498: nop

    // 0x8000A49C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
L_8000A4A0:
    // 0x8000A4A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8000A4A4: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A4A8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8000A4AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000A4B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000A4B4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8000A4B8: cvt.w.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000A4BC: lh          $t5, 0x18($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X18);
    // 0x8000A4C0: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8000A4C4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000A4C8: sll         $t0, $t3, 16
    ctx->r8 = S32(ctx->r11 << 16);
    // 0x8000A4CC: sra         $t2, $t0, 16
    ctx->r10 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8000A4D0: beq         $t5, $t2, L_8000A51C
    if (ctx->r13 == ctx->r10) {
        // 0x8000A4D4: nop
    
            goto L_8000A51C;
    }
    // 0x8000A4D4: nop

    // 0x8000A4D8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000A4DC: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A4E0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8000A4E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000A4E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000A4EC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8000A4F0: cvt.w.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000A4F4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8000A4F8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000A4FC: sh          $t9, 0x18($t6)
    MEM_H(0X18, ctx->r14) = ctx->r25;
    // 0x8000A500: nop

    // 0x8000A504: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8000A508: nop

    // 0x8000A50C: lw          $t7, 0x8($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X8);
    // 0x8000A510: nop

    // 0x8000A514: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8000A518: sw          $t8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r24;
L_8000A51C:
    // 0x8000A51C: b           L_8000A524
    // 0x8000A520: nop

        goto L_8000A524;
    // 0x8000A520: nop

L_8000A524:
    // 0x8000A524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A52C: jr          $ra
    // 0x8000A530: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000A530: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void _malloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003038C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030390: jal         0x8002FC34
    // 0x80030394: nop

    malloc_game(rdram, ctx);
        goto after_0;
    // 0x80030394: nop

    after_0:
    // 0x80030398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003039C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800303A0: jr          $ra
    // 0x800303A4: nop

    return;
    // 0x800303A4: nop

;}
RECOMP_FUNC void func_8001BA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001BA7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001BA80: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BA84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001BA88: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001BA8C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001BA90: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8001BA94: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001BA98: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8001BA9C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8001BAA0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8001BAA4: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001BAA8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8001BAAC: lh          $t1, 0x148($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X148);
    // 0x8001BAB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001BAB4: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8001BAB8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001BABC: addiu       $t3, $t3, -0x3D68
    ctx->r11 = ADD32(ctx->r11, -0X3D68);
    // 0x8001BAC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001BAC4: sll         $t8, $a1, 1
    ctx->r24 = S32(ctx->r5 << 1);
    // 0x8001BAC8: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001BACC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001BAD0: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8001BAD4: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8001BAD8: lh          $t2, 0x148($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X148);
    // 0x8001BADC: lbu         $t5, 0x6($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X6);
    // 0x8001BAE0: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8001BAE4: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x8001BAE8: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8001BAEC: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8001BAF0: sb          $t6, 0x6($t5)
    MEM_B(0X6, ctx->r13) = ctx->r14;
    // 0x8001BAF4: jr          $ra
    // 0x8001BAF8: nop

    return;
    // 0x8001BAF8: nop

    // 0x8001BAFC: jr          $ra
    // 0x8001BB00: nop

    return;
    // 0x8001BB00: nop

;}
RECOMP_FUNC void func_80010C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80010C88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80010C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80010C90: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80010C94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80010C98: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80010C9C: nop

    // 0x80010CA0: bne         $t6, $zero, L_80010CB0
    if (ctx->r14 != 0) {
        // 0x80010CA4: nop
    
            goto L_80010CB0;
    }
    // 0x80010CA4: nop

    // 0x80010CA8: b           L_80010DFC
    // 0x80010CAC: nop

        goto L_80010DFC;
    // 0x80010CAC: nop

L_80010CB0:
    // 0x80010CB0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80010CB4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80010CB8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80010CBC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80010CC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80010CC4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80010CC8: addiu       $t1, $t0, 0x18
    ctx->r9 = ADD32(ctx->r8, 0X18);
    // 0x80010CCC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80010CD0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80010CD4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80010CD8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80010CDC: lw          $t6, 0x5D50($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D50);
    // 0x80010CE0: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x80010CE4: nop

    // 0x80010CE8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80010CEC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80010CF0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80010CF4: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80010CF8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80010CFC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80010D00: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80010D04: lw          $at, 0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X4);
    // 0x80010D08: nop

    // 0x80010D0C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80010D10: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x80010D14: nop

    // 0x80010D18: sw          $t2, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r10;
    // 0x80010D1C: lw          $at, 0xC($t9)
    ctx->r1 = MEM_W(ctx->r25, 0XC);
    // 0x80010D20: nop

    // 0x80010D24: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80010D28: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80010D2C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80010D30: lw          $at, 0x10($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X10);
    // 0x80010D34: nop

    // 0x80010D38: sw          $at, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r1;
    // 0x80010D3C: lw          $t8, 0x14($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X14);
    // 0x80010D40: nop

    // 0x80010D44: sw          $t8, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r24;
    // 0x80010D48: lw          $at, 0x18($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X18);
    // 0x80010D4C: nop

    // 0x80010D50: sw          $at, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r1;
    // 0x80010D54: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80010D58: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80010D5C: lw          $at, 0x1C($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X1C);
    // 0x80010D60: nop

    // 0x80010D64: sw          $at, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r1;
    // 0x80010D68: lw          $t2, 0x20($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X20);
    // 0x80010D6C: nop

    // 0x80010D70: sw          $t2, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r10;
    // 0x80010D74: lw          $at, 0x24($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X24);
    // 0x80010D78: nop

    // 0x80010D7C: sw          $at, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->r1;
    // 0x80010D80: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80010D84: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80010D88: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x80010D8C: addu        $t4, $t6, $t3
    ctx->r12 = ADD32(ctx->r14, ctx->r11);
    // 0x80010D90: sw          $zero, 0x10($t4)
    MEM_W(0X10, ctx->r12) = 0;
    // 0x80010D94: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80010D98: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80010D9C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80010DA0: nop

    // 0x80010DA4: blez        $t9, L_80010DF4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80010DA8: nop
    
            goto L_80010DF4;
    }
    // 0x80010DA8: nop

L_80010DAC:
    // 0x80010DAC: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80010DB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80010DB4: lw          $t1, 0x8($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X8);
    // 0x80010DB8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80010DBC: addu        $t5, $t1, $t2
    ctx->r13 = ADD32(ctx->r9, ctx->r10);
    // 0x80010DC0: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80010DC4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80010DC8: jal         0x80010C88
    // 0x80010DCC: nop

    func_80010C88(rdram, ctx);
        goto after_0;
    // 0x80010DCC: nop

    after_0:
    // 0x80010DD0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80010DD4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80010DD8: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x80010DDC: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80010DE0: lw          $t8, 0xC($t4)
    ctx->r24 = MEM_W(ctx->r12, 0XC);
    // 0x80010DE4: nop

    // 0x80010DE8: slt         $at, $t3, $t8
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80010DEC: bne         $at, $zero, L_80010DAC
    if (ctx->r1 != 0) {
        // 0x80010DF0: nop
    
            goto L_80010DAC;
    }
    // 0x80010DF0: nop

L_80010DF4:
    // 0x80010DF4: b           L_80010DFC
    // 0x80010DF8: nop

        goto L_80010DFC;
    // 0x80010DF8: nop

L_80010DFC:
    // 0x80010DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80010E00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80010E04: jr          $ra
    // 0x80010E08: nop

    return;
    // 0x80010E08: nop

;}
RECOMP_FUNC void alSynSetPitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EC58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003EC5C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003EC60: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8003EC64: beql        $t6, $zero, L_8003ECC8
    if (ctx->r14 == 0) {
        // 0x8003EC68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003ECC8;
    }
    goto skip_0;
    // 0x8003EC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003EC6C: jal         0x80035B20
    // 0x8003EC70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003EC70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003EC74: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EC78: beq         $v0, $zero, L_8003ECC4
    if (ctx->r2 == 0) {
        // 0x8003EC7C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003ECC4;
    }
    // 0x8003EC7C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EC80: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003EC84: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8003EC88: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x8003EC8C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8003EC90: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8003EC94: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8003EC98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EC9C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8003ECA0: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8003ECA4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8003ECA8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003ECAC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x8003ECB0: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8003ECB4: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8003ECB8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003ECBC: jalr        $t9
    // 0x8003ECC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003ECC0: nop

    after_1:
L_8003ECC4:
    // 0x8003ECC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ECC8:
    // 0x8003ECC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ECCC: jr          $ra
    // 0x8003ECD0: nop

    return;
    // 0x8003ECD0: nop

;}
RECOMP_FUNC void func_80017934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80017934: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80017938: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001793C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80017940: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80017944: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80017948: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8001794C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80017950: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017954: jal         0x80017460
    // 0x80017958: nop

    func_80017460(rdram, ctx);
        goto after_0;
    // 0x80017958: nop

    after_0:
    // 0x8001795C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80017960: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80017964: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80017968: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8001796C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80017970: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80017974: lh          $a2, 0x42($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X42);
    // 0x80017978: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x8001797C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80017980: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80017984: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80017988: jal         0x80017028
    // 0x8001798C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80017028(rdram, ctx);
        goto after_1;
    // 0x8001798C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80017990: b           L_800179A0
    // 0x80017994: nop

        goto L_800179A0;
    // 0x80017994: nop

    // 0x80017998: b           L_800179A0
    // 0x8001799C: nop

        goto L_800179A0;
    // 0x8001799C: nop

L_800179A0:
    // 0x800179A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800179A4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800179A8: jr          $ra
    // 0x800179AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800179AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void __osBlockSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80039CB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80039CBC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80039CC0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80039CC4: lbu         $t6, 0x4F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X4F);
    // 0x80039CC8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80039CCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80039CD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80039CD4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80039CD8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80039CDC: sb          $t6, 0x65($t7)
    MEM_B(0X65, ctx->r15) = ctx->r14;
    // 0x80039CE0: jal         0x800436AC
    // 0x80039CE4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_0;
    // 0x80039CE4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x80039CE8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80039CEC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80039CF0: beq         $t8, $zero, L_80039D00
    if (ctx->r24 == 0) {
        // 0x80039CF4: nop
    
            goto L_80039D00;
    }
    // 0x80039CF4: nop

    // 0x80039CF8: b           L_80039D98
    // 0x80039CFC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_80039D98;
    // 0x80039CFC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80039D00:
    // 0x80039D00: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80039D04:
    // 0x80039D04: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x80039D08: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80039D0C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80039D10: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80039D14: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80039D18: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x80039D1C: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x80039D20: jal         0x80043720
    // 0x80039D24: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    __osContRamRead_recomp(rdram, ctx);
        goto after_1;
    // 0x80039D24: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    after_1:
    // 0x80039D28: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80039D2C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80039D30: beq         $t3, $zero, L_80039D50
    if (ctx->r11 == 0) {
        // 0x80039D34: nop
    
            goto L_80039D50;
    }
    // 0x80039D34: nop

    // 0x80039D38: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80039D3C: sb          $zero, 0x65($t4)
    MEM_B(0X65, ctx->r12) = 0;
    // 0x80039D40: jal         0x800436AC
    // 0x80039D44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_2;
    // 0x80039D44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x80039D48: b           L_80039D98
    // 0x80039D4C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
        goto L_80039D98;
    // 0x80039D4C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_80039D50:
    // 0x80039D50: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80039D54: jal         0x800429C0
    // 0x80039D58: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    __osSumcalc(rdram, ctx);
        goto after_3;
    // 0x80039D58: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x80039D5C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80039D60: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80039D64: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80039D68: sh          $t7, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r15;
    // 0x80039D6C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80039D70: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80039D74: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x80039D78: bne         $at, $zero, L_80039D04
    if (ctx->r1 != 0) {
        // 0x80039D7C: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_80039D04;
    }
    // 0x80039D7C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80039D80: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80039D84: sb          $zero, 0x65($t0)
    MEM_B(0X65, ctx->r8) = 0;
    // 0x80039D88: jal         0x800436AC
    // 0x80039D8C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    __osPfsSelectBank_recomp(rdram, ctx);
        goto after_4;
    // 0x80039D8C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x80039D90: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80039D94: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
L_80039D98:
    // 0x80039D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80039D9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80039DA0: jr          $ra
    // 0x80039DA4: nop

    return;
    // 0x80039DA4: nop

;}
RECOMP_FUNC void func_8002E23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E23C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002E240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E244: jal         0x8002BA34
    // 0x8002E248: nop

    func_8002BA34(rdram, ctx);
        goto after_0;
    // 0x8002E248: nop

    after_0:
    // 0x8002E24C: beq         $v0, $zero, L_8002E25C
    if (ctx->r2 == 0) {
        // 0x8002E250: nop
    
            goto L_8002E25C;
    }
    // 0x8002E250: nop

    // 0x8002E254: b           L_8002E514
    // 0x8002E258: nop

        goto L_8002E514;
    // 0x8002E258: nop

L_8002E25C:
    // 0x8002E25C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002E260: lh          $t6, 0x7692($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7692);
    // 0x8002E264: nop

    // 0x8002E268: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8002E26C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002E270: lh          $t7, 0x7692($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7692);
    // 0x8002E274: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002E278: addiu       $t9, $t9, 0x76A8
    ctx->r25 = ADD32(ctx->r25, 0X76A8);
    // 0x8002E27C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8002E280: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8002E284: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8002E288: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E28C: beq         $t1, $at, L_8002E2C4
    if (ctx->r9 == ctx->r1) {
        // 0x8002E290: nop
    
            goto L_8002E2C4;
    }
    // 0x8002E290: nop

    // 0x8002E294: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x8002E298: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E29C: bne         $t2, $at, L_8002E2CC
    if (ctx->r10 != ctx->r1) {
        // 0x8002E2A0: nop
    
            goto L_8002E2CC;
    }
    // 0x8002E2A0: nop

    // 0x8002E2A4: lh          $t3, 0x4($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X4);
    // 0x8002E2A8: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E2AC: bne         $t3, $at, L_8002E2CC
    if (ctx->r11 != ctx->r1) {
        // 0x8002E2B0: nop
    
            goto L_8002E2CC;
    }
    // 0x8002E2B0: nop

    // 0x8002E2B4: lh          $t4, 0x6($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X6);
    // 0x8002E2B8: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E2BC: bne         $t4, $at, L_8002E2CC
    if (ctx->r12 != ctx->r1) {
        // 0x8002E2C0: nop
    
            goto L_8002E2CC;
    }
    // 0x8002E2C0: nop

L_8002E2C4:
    // 0x8002E2C4: b           L_8002E514
    // 0x8002E2C8: nop

        goto L_8002E514;
    // 0x8002E2C8: nop

L_8002E2CC:
    // 0x8002E2CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002E2D0: lhu         $t5, -0x1C7C($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X1C7C);
    // 0x8002E2D4: nop

    // 0x8002E2D8: andi        $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 & 0X1000;
    // 0x8002E2DC: beq         $t6, $zero, L_8002E50C
    if (ctx->r14 == 0) {
        // 0x8002E2E0: nop
    
            goto L_8002E50C;
    }
    // 0x8002E2E0: nop

    // 0x8002E2E4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002E2E8: jal         0x8002B894
    // 0x8002E2EC: nop

    func_8002B894(rdram, ctx);
        goto after_1;
    // 0x8002E2EC: nop

    after_1:
    // 0x8002E2F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8002E2F4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8002E2F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E2FC: beq         $t7, $at, L_8002E3A0
    if (ctx->r15 == ctx->r1) {
        // 0x8002E300: nop
    
            goto L_8002E3A0;
    }
    // 0x8002E300: nop

    // 0x8002E304: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8002E308:
    // 0x8002E308: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8002E30C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E310: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002E314: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002E318: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002E31C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002E320: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8002E324: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8002E328: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8002E32C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8002E330: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8002E334: lh          $t0, 0x4238($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4238);
    // 0x8002E338: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E33C: beq         $t0, $at, L_8002E37C
    if (ctx->r8 == ctx->r1) {
        // 0x8002E340: nop
    
            goto L_8002E37C;
    }
    // 0x8002E340: nop

    // 0x8002E344: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8002E348: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E34C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002E350: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002E354: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002E358: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002E35C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8002E360: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8002E364: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8002E368: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8002E36C: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8002E370: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x8002E374: jal         0x8001A928
    // 0x8002E378: nop

    func_8001A928(rdram, ctx);
        goto after_2;
    // 0x8002E378: nop

    after_2:
L_8002E37C:
    // 0x8002E37C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E380: nop

    // 0x8002E384: addiu       $t9, $t1, 0x1
    ctx->r25 = ADD32(ctx->r9, 0X1);
    // 0x8002E388: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x8002E38C: bne         $at, $zero, L_8002E308
    if (ctx->r1 != 0) {
        // 0x8002E390: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_8002E308;
    }
    // 0x8002E390: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8002E394: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002E398: jal         0x8001A928
    // 0x8002E39C: nop

    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x8002E39C: nop

    after_3:
L_8002E3A0:
    // 0x8002E3A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002E3A4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002E3A8: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8002E3AC: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8002E3B0: lh          $t0, 0x76AA($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X76AA);
    // 0x8002E3B4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8002E3B8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8002E3BC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8002E3C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002E3C4: swc1        $f6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f6.u32l;
    // 0x8002E3C8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8002E3CC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002E3D0: sll         $t5, $t6, 4
    ctx->r13 = S32(ctx->r14 << 4);
    // 0x8002E3D4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8002E3D8: lh          $t7, 0x76AC($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X76AC);
    // 0x8002E3DC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002E3E0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8002E3E4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002E3E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002E3EC: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x8002E3F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8002E3F4: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002E3F8: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x8002E3FC: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x8002E400: lh          $t2, 0x76AE($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X76AE);
    // 0x8002E404: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002E408: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8002E40C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002E410: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002E414: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x8002E418: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8002E41C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002E420: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x8002E424: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8002E428: lh          $t6, 0x76A8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X76A8);
    // 0x8002E42C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E430: sh          $t6, 0x7690($at)
    MEM_H(0X7690, ctx->r1) = ctx->r14;
    // 0x8002E434: jal         0x8002D538
    // 0x8002E438: nop

    func_8002D538(rdram, ctx);
        goto after_4;
    // 0x8002E438: nop

    after_4:
    // 0x8002E43C: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002E440: lh          $a1, 0x7692($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X7692);
    // 0x8002E444: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E448: jal         0x80017FD8
    // 0x8002E44C: addiu       $a0, $a0, -0x41A4
    ctx->r4 = ADD32(ctx->r4, -0X41A4);
    printf_stub(rdram, ctx);
        goto after_5;
    // 0x8002E44C: addiu       $a0, $a0, -0x41A4
    ctx->r4 = ADD32(ctx->r4, -0X41A4);
    after_5:
    // 0x8002E450: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8002E454: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E458: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8002E45C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002E460: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8002E464: sh          $t5, 0x76A8($at)
    MEM_H(0X76A8, ctx->r1) = ctx->r13;
    // 0x8002E468: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8002E46C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E470: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x8002E474: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002E478: sh          $zero, 0x76AA($at)
    MEM_H(0X76AA, ctx->r1) = 0;
    // 0x8002E47C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002E480: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E484: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8002E488: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8002E48C: sh          $zero, 0x76AC($at)
    MEM_H(0X76AC, ctx->r1) = 0;
    // 0x8002E490: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8002E494: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E498: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x8002E49C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8002E4A0: sh          $zero, 0x76AE($at)
    MEM_H(0X76AE, ctx->r1) = 0;
    // 0x8002E4A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8002E4A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E4AC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8002E4B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002E4B4: sh          $zero, 0x76B0($at)
    MEM_H(0X76B0, ctx->r1) = 0;
    // 0x8002E4B8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8002E4BC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E4C0: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x8002E4C4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8002E4C8: sh          $zero, 0x76B2($at)
    MEM_H(0X76B2, ctx->r1) = 0;
    // 0x8002E4CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8002E4D0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E4D4: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x8002E4D8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002E4DC: sh          $zero, 0x76B4($at)
    MEM_H(0X76B4, ctx->r1) = 0;
    // 0x8002E4E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8002E4E4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E4E8: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8002E4EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8002E4F0: sh          $zero, 0x76B6($at)
    MEM_H(0X76B6, ctx->r1) = 0;
    // 0x8002E4F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8002E4F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E4FC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002E500: sb          $zero, 0x5118($at)
    MEM_B(0X5118, ctx->r1) = 0;
    // 0x8002E504: jal         0x8002E8B4
    // 0x8002E508: nop

    func_8002E8B4(rdram, ctx);
        goto after_6;
    // 0x8002E508: nop

    after_6:
L_8002E50C:
    // 0x8002E50C: b           L_8002E514
    // 0x8002E510: nop

        goto L_8002E514;
    // 0x8002E510: nop

L_8002E514:
    // 0x8002E514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E518: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002E51C: jr          $ra
    // 0x8002E520: nop

    return;
    // 0x8002E520: nop

;}
RECOMP_FUNC void alSndpNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035104: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80035108: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003510C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80035110: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80035114: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80035118: addiu       $t8, $zero, 0x3E80
    ctx->r24 = ADD32(0, 0X3E80);
    // 0x8003511C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80035120: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    // 0x80035124: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80035128: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x8003512C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80035130: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80035134: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x80035138: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8003513C: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80035140: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80035144: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80035148: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8003514C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035154: jal         0x80035870
    // 0x80035158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80035158: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8003515C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80035160: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80035164: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80035168: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8003516C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80035170: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035174: beq         $t2, $zero, L_80035198
    if (ctx->r10 == 0) {
        // 0x80035178: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_80035198;
    }
    // 0x80035178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8003517C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_80035180:
    // 0x80035180: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80035184: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80035188: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x8003518C: sltu        $at, $v1, $t3
    ctx->r1 = ctx->r3 < ctx->r11 ? 1 : 0;
    // 0x80035190: bnel        $at, $zero, L_80035180
    if (ctx->r1 != 0) {
        // 0x80035194: sw          $zero, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = 0;
            goto L_80035180;
    }
    goto skip_0;
    // 0x80035194: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    skip_0:
L_80035198:
    // 0x80035198: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x8003519C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x800351A0: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x800351A4: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x800351A8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800351AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800351B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800351B4: jal         0x80035870
    // 0x800351B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x800351B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800351BC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800351C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x800351C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800351C8: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x800351CC: jal         0x8003E9BC
    // 0x800351D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    alEvtqNew(rdram, ctx);
        goto after_2;
    // 0x800351D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_2:
    // 0x800351D4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800351D8: lw          $a0, -0x4AF0($t6)
    ctx->r4 = MEM_W(ctx->r14, -0X4AF0);
    // 0x800351DC: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x800351E0: addiu       $t7, $t7, 0x4BBC
    ctx->r15 = ADD32(ctx->r15, 0X4BBC);
    // 0x800351E4: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x800351E8: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x800351EC: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x800351F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800351F4: jal         0x8003EA30
    // 0x800351F8: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    alSynAddPlayer(rdram, ctx);
        goto after_3;
    // 0x800351F8: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    after_3:
    // 0x800351FC: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80035200: sh          $t8, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r24;
    // 0x80035204: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x80035208: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8003520C: jal         0x8003E80C
    // 0x80035210: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    alEvtqPostEvent(rdram, ctx);
        goto after_4;
    // 0x80035210: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x80035214: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80035218: jal         0x8003E930
    // 0x8003521C: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    alEvtqNextEvent(rdram, ctx);
        goto after_5;
    // 0x8003521C: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    after_5:
    // 0x80035220: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x80035224: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80035228: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003522C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80035230: jr          $ra
    // 0x80035234: nop

    return;
    // 0x80035234: nop

;}
RECOMP_FUNC void alSeqGetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80045D50: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80045D54: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80045D58: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x80045D5C: sh          $t7, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r15;
    // 0x80045D60: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x80045D64: jr          $ra
    // 0x80045D68: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80045D68: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void __setInstChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CDB0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x8003CDB4: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x8003CDB8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8003CDBC: sw          $a1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r5;
    // 0x8003CDC0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8003CDC4: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x8003CDC8: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8003CDCC: sb          $t8, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r24;
    // 0x8003CDD0: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8003CDD4: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x8003CDD8: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8003CDDC: sb          $t1, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r9;
    // 0x8003CDE0: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x8003CDE4: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x8003CDE8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8003CDEC: sb          $t4, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r12;
    // 0x8003CDF0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8003CDF4: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x8003CDF8: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x8003CDFC: jr          $ra
    // 0x8003CE00: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    return;
    // 0x8003CE00: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void func_80007140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007140: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80007144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007148: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8000714C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80007150: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x80007154: nop

    // 0x80007158: lbu         $t7, 0x13($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X13);
    // 0x8000715C: nop

    // 0x80007160: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x80007164: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x80007168: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8000716C: nop

    // 0x80007170: lbu         $t0, 0x13($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X13);
    // 0x80007174: nop

    // 0x80007178: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x8000717C: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x80007180: sb          $t2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r10;
    // 0x80007184: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80007188: lw          $t3, -0x5CF8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5CF8);
    // 0x8000718C: nop

    // 0x80007190: bne         $t3, $zero, L_8000719C
    if (ctx->r11 != 0) {
        // 0x80007194: nop
    
            goto L_8000719C;
    }
    // 0x80007194: nop

    // 0x80007198: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_8000719C:
    // 0x8000719C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800071A0: nop

    // 0x800071A4: bne         $t4, $zero, L_800071C4
    if (ctx->r12 != 0) {
        // 0x800071A8: nop
    
            goto L_800071C4;
    }
    // 0x800071A8: nop

    // 0x800071AC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800071B0: lw          $t5, -0x5CFC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5CFC);
    // 0x800071B4: nop

    // 0x800071B8: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x800071BC: beq         $at, $zero, L_80007280
    if (ctx->r1 == 0) {
        // 0x800071C0: nop
    
            goto L_80007280;
    }
    // 0x800071C0: nop

L_800071C4:
    // 0x800071C4: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800071C8: lw          $t6, -0x5CF8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF8);
    // 0x800071CC: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800071D0: nop

    // 0x800071D4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800071D8: beq         $at, $zero, L_800071E8
    if (ctx->r1 == 0) {
        // 0x800071DC: nop
    
            goto L_800071E8;
    }
    // 0x800071DC: nop

    // 0x800071E0: b           L_80007680
    // 0x800071E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80007680;
    // 0x800071E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800071E8:
    // 0x800071E8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800071EC: lw          $t8, -0x5CFC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CFC);
    // 0x800071F0: nop

    // 0x800071F4: beq         $t8, $zero, L_80007214
    if (ctx->r24 == 0) {
        // 0x800071F8: nop
    
            goto L_80007214;
    }
    // 0x800071F8: nop

    // 0x800071FC: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80007200: nop

    // 0x80007204: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80007208: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8000720C: b           L_80007214
    // 0x80007210: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
        goto L_80007214;
    // 0x80007210: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
L_80007214:
    // 0x80007214: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80007218: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000721C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80007220: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80007224: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80007228: lw          $t4, 0x2D5C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D5C);
    // 0x8000722C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80007230: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80007234: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80007238: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x8000723C: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80007240: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80007244: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x80007248: nop

    // 0x8000724C: bne         $t7, $at, L_80007274
    if (ctx->r15 != ctx->r1) {
        // 0x80007250: nop
    
            goto L_80007274;
    }
    // 0x80007250: nop

    // 0x80007254: lbu         $t8, 0x26($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X26);
    // 0x80007258: lbu         $t9, 0x1B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1B);
    // 0x8000725C: nop

    // 0x80007260: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80007264: beq         $at, $zero, L_80007274
    if (ctx->r1 == 0) {
        // 0x80007268: nop
    
            goto L_80007274;
    }
    // 0x80007268: nop

    // 0x8000726C: b           L_80007680
    // 0x80007270: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80007680;
    // 0x80007270: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80007274:
    // 0x80007274: lh          $v0, 0x5E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X5E);
    // 0x80007278: b           L_80007680
    // 0x8000727C: nop

        goto L_80007680;
    // 0x8000727C: nop

L_80007280:
    // 0x80007280: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80007284: lw          $t0, -0x5CFC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CFC);
    // 0x80007288: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8000728C: blez        $t0, L_80007324
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80007290: nop
    
            goto L_80007324;
    }
    // 0x80007290: nop

L_80007294:
    // 0x80007294: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80007298: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000729C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800072A0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800072A4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800072A8: lw          $t3, 0x2D5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D5C);
    // 0x800072AC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800072B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800072B4: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800072B8: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x800072BC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800072C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800072C4: lw          $t7, 0xC($t5)
    ctx->r15 = MEM_W(ctx->r13, 0XC);
    // 0x800072C8: nop

    // 0x800072CC: beq         $t7, $at, L_800072DC
    if (ctx->r15 == ctx->r1) {
        // 0x800072D0: nop
    
            goto L_800072DC;
    }
    // 0x800072D0: nop

    // 0x800072D4: b           L_80007324
    // 0x800072D8: nop

        goto L_80007324;
    // 0x800072D8: nop

L_800072DC:
    // 0x800072DC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x800072E0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800072E4: lbu         $t8, 0x27($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X27);
    // 0x800072E8: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800072EC: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x800072F0: sh          $t8, 0x3C($t1)
    MEM_H(0X3C, ctx->r9) = ctx->r24;
    // 0x800072F4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800072F8: nop

    // 0x800072FC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80007300: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x80007304: sh          $t2, 0x1C($t4)
    MEM_H(0X1C, ctx->r12) = ctx->r10;
    // 0x80007308: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8000730C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80007310: lw          $t6, -0x5CFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CFC);
    // 0x80007314: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80007318: slt         $at, $t7, $t6
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8000731C: bne         $at, $zero, L_80007294
    if (ctx->r1 != 0) {
        // 0x80007320: sw          $t7, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r15;
            goto L_80007294;
    }
    // 0x80007320: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
L_80007324:
    // 0x80007324: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80007328: lw          $t8, -0x5CFC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CFC);
    // 0x8000732C: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80007330: nop

    // 0x80007334: bne         $t9, $t8, L_80007418
    if (ctx->r25 != ctx->r24) {
        // 0x80007338: nop
    
            goto L_80007418;
    }
    // 0x80007338: nop

    // 0x8000733C: lui         $a3, 0x8005
    ctx->r7 = S32(0X8005 << 16);
    // 0x80007340: lw          $a3, -0x5CFC($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X5CFC);
    // 0x80007344: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80007348: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8000734C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80007350: jal         0x80007690
    // 0x80007354: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    func_80007690(rdram, ctx);
        goto after_0;
    // 0x80007354: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    after_0:
    // 0x80007358: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000735C: lw          $t0, -0x5CFC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CFC);
    // 0x80007360: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x80007364: blez        $t0, L_800073F0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80007368: nop
    
            goto L_800073F0;
    }
    // 0x80007368: nop

L_8000736C:
    // 0x8000736C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80007370: nop

    // 0x80007374: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80007378: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x8000737C: lh          $t3, 0x1C($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X1C);
    // 0x80007380: nop

    // 0x80007384: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80007388: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8000738C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80007390: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80007394: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80007398: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8000739C: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x800073A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800073A4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800073A8: addu        $t6, $t5, $t7
    ctx->r14 = ADD32(ctx->r13, ctx->r15);
    // 0x800073AC: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x800073B0: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x800073B4: lbu         $t0, 0x1B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1B);
    // 0x800073B8: lbu         $t8, 0x26($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X26);
    // 0x800073BC: nop

    // 0x800073C0: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800073C4: bne         $at, $zero, L_800073D4
    if (ctx->r1 != 0) {
        // 0x800073C8: nop
    
            goto L_800073D4;
    }
    // 0x800073C8: nop

    // 0x800073CC: b           L_800073F0
    // 0x800073D0: nop

        goto L_800073F0;
    // 0x800073D0: nop

L_800073D4:
    // 0x800073D4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x800073D8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800073DC: lw          $t3, -0x5CFC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5CFC);
    // 0x800073E0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800073E4: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800073E8: bne         $at, $zero, L_8000736C
    if (ctx->r1 != 0) {
        // 0x800073EC: sw          $t2, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r10;
            goto L_8000736C;
    }
    // 0x800073EC: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
L_800073F0:
    // 0x800073F0: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800073F4: lw          $t5, -0x5CFC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5CFC);
    // 0x800073F8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x800073FC: nop

    // 0x80007400: bne         $t4, $t5, L_80007410
    if (ctx->r12 != ctx->r13) {
        // 0x80007404: nop
    
            goto L_80007410;
    }
    // 0x80007404: nop

    // 0x80007408: b           L_80007680
    // 0x8000740C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80007680;
    // 0x8000740C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80007410:
    // 0x80007410: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80007414: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
L_80007418:
    // 0x80007418: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8000741C: nop

    // 0x80007420: bne         $t6, $zero, L_8000766C
    if (ctx->r14 != 0) {
        // 0x80007424: nop
    
            goto L_8000766C;
    }
    // 0x80007424: nop

    // 0x80007428: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000742C: lbu         $t9, -0x5C98($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X5C98);
    // 0x80007430: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80007434: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80007438: sb          $t9, 0x27($t8)
    MEM_B(0X27, ctx->r24) = ctx->r25;
    // 0x8000743C: lbu         $t0, -0x5C98($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X5C98);
    // 0x80007440: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007444: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80007448: sb          $t1, -0x5C98($at)
    MEM_B(-0X5C98, ctx->r1) = ctx->r9;
    // 0x8000744C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80007450: lbu         $t2, -0x5C98($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X5C98);
    // 0x80007454: nop

    // 0x80007458: bne         $t2, $zero, L_8000766C
    if (ctx->r10 != 0) {
        // 0x8000745C: nop
    
            goto L_8000766C;
    }
    // 0x8000745C: nop

    // 0x80007460: lbu         $t3, 0x1B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1B);
    // 0x80007464: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80007468: bne         $t3, $at, L_80007514
    if (ctx->r11 != ctx->r1) {
        // 0x8000746C: nop
    
            goto L_80007514;
    }
    // 0x8000746C: nop

    // 0x80007470: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80007474: lw          $t4, -0x5CFC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5CFC);
    // 0x80007478: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8000747C: nop

    // 0x80007480: sb          $t4, 0x27($t5)
    MEM_B(0X27, ctx->r13) = ctx->r12;
    // 0x80007484: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80007488: lw          $t7, -0x5CFC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5CFC);
    // 0x8000748C: nop

    // 0x80007490: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80007494: bltz        $t6, L_8000750C
    if (SIGNED(ctx->r14) < 0) {
        // 0x80007498: sw          $t6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r14;
            goto L_8000750C;
    }
    // 0x80007498: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
L_8000749C:
    // 0x8000749C: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x800074A0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800074A4: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x800074A8: addu        $t0, $sp, $t8
    ctx->r8 = ADD32(ctx->r29, ctx->r24);
    // 0x800074AC: lh          $t0, 0x1C($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X1C);
    // 0x800074B0: nop

    // 0x800074B4: bne         $t0, $t1, L_800074C4
    if (ctx->r8 != ctx->r9) {
        // 0x800074B8: nop
    
            goto L_800074C4;
    }
    // 0x800074B8: nop

    // 0x800074BC: b           L_800074F8
    // 0x800074C0: nop

        goto L_800074F8;
    // 0x800074C0: nop

L_800074C4:
    // 0x800074C4: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x800074C8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800074CC: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x800074D0: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x800074D4: lh          $t5, 0x1C($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X1C);
    // 0x800074D8: lw          $t3, 0x2D5C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2D5C);
    // 0x800074DC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800074E0: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x800074E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800074E8: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x800074EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800074F0: addu        $t6, $t3, $t7
    ctx->r14 = ADD32(ctx->r11, ctx->r15);
    // 0x800074F4: sb          $t2, 0x27($t6)
    MEM_B(0X27, ctx->r14) = ctx->r10;
L_800074F8:
    // 0x800074F8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x800074FC: nop

    // 0x80007500: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80007504: bgez        $t8, L_8000749C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80007508: sw          $t8, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r24;
            goto L_8000749C;
    }
    // 0x80007508: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
L_8000750C:
    // 0x8000750C: b           L_8000766C
    // 0x80007510: nop

        goto L_8000766C;
    // 0x80007510: nop

L_80007514:
    // 0x80007514: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
    // 0x80007518: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000751C: lw          $t0, -0x5CFC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CFC);
    // 0x80007520: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x80007524: blez        $t0, L_800075CC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80007528: nop
    
            goto L_800075CC;
    }
    // 0x80007528: nop

L_8000752C:
    // 0x8000752C: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80007530: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80007534: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80007538: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x8000753C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80007540: lw          $t5, 0x2D5C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D5C);
    // 0x80007544: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80007548: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8000754C: addu        $t3, $t4, $t5
    ctx->r11 = ADD32(ctx->r12, ctx->r13);
    // 0x80007550: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
    // 0x80007554: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80007558: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000755C: lw          $t2, 0xC($t7)
    ctx->r10 = MEM_W(ctx->r15, 0XC);
    // 0x80007560: nop

    // 0x80007564: beq         $t2, $at, L_80007574
    if (ctx->r10 == ctx->r1) {
        // 0x80007568: nop
    
            goto L_80007574;
    }
    // 0x80007568: nop

    // 0x8000756C: b           L_800075B0
    // 0x80007570: nop

        goto L_800075B0;
    // 0x80007570: nop

L_80007574:
    // 0x80007574: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80007578: lbu         $t8, 0x1B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1B);
    // 0x8000757C: lbu         $t9, 0x27($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X27);
    // 0x80007580: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80007584: addu        $t1, $sp, $t0
    ctx->r9 = ADD32(ctx->r29, ctx->r8);
    // 0x80007588: sh          $t9, 0x3C($t1)
    MEM_H(0X3C, ctx->r9) = ctx->r25;
    // 0x8000758C: lbu         $t5, 0x1B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1B);
    // 0x80007590: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x80007594: sll         $t3, $t5, 1
    ctx->r11 = S32(ctx->r13 << 1);
    // 0x80007598: addu        $t7, $sp, $t3
    ctx->r15 = ADD32(ctx->r29, ctx->r11);
    // 0x8000759C: sh          $t4, 0x1C($t7)
    MEM_H(0X1C, ctx->r15) = ctx->r12;
    // 0x800075A0: lbu         $t2, 0x1B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1B);
    // 0x800075A4: nop

    // 0x800075A8: addiu       $t6, $t2, 0x1
    ctx->r14 = ADD32(ctx->r10, 0X1);
    // 0x800075AC: sb          $t6, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r14;
L_800075B0:
    // 0x800075B0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x800075B4: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800075B8: lw          $t0, -0x5CFC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CFC);
    // 0x800075BC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800075C0: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800075C4: bne         $at, $zero, L_8000752C
    if (ctx->r1 != 0) {
        // 0x800075C8: sw          $t9, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r25;
            goto L_8000752C;
    }
    // 0x800075C8: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
L_800075CC:
    // 0x800075CC: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
    // 0x800075D0: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800075D4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x800075D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800075DC: jal         0x80007690
    // 0x800075E0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    func_80007690(rdram, ctx);
        goto after_1;
    // 0x800075E0: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    after_1:
    // 0x800075E4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800075E8: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800075EC: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x800075F0: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x800075F4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800075F8: lw          $t5, 0x2D5C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D5C);
    // 0x800075FC: subu        $t3, $t3, $t4
    ctx->r11 = SUB32(ctx->r11, ctx->r12);
    // 0x80007600: lbu         $t1, 0x1B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1B);
    // 0x80007604: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80007608: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x8000760C: sb          $t1, 0x27($t7)
    MEM_B(0X27, ctx->r15) = ctx->r9;
    // 0x80007610: lbu         $t2, 0x1B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1B);
    // 0x80007614: nop

    // 0x80007618: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8000761C: bltz        $t6, L_8000766C
    if (SIGNED(ctx->r14) < 0) {
        // 0x80007620: sw          $t6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r14;
            goto L_8000766C;
    }
    // 0x80007620: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
L_80007624:
    // 0x80007624: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x80007628: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000762C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80007630: addu        $t4, $sp, $t0
    ctx->r12 = ADD32(ctx->r29, ctx->r8);
    // 0x80007634: lh          $t4, 0x1C($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X1C);
    // 0x80007638: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000763C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80007640: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80007644: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80007648: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8000764C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80007650: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x80007654: sb          $t8, 0x27($t3)
    MEM_B(0X27, ctx->r11) = ctx->r24;
    // 0x80007658: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8000765C: nop

    // 0x80007660: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x80007664: bgez        $t7, L_80007624
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80007668: sw          $t7, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r15;
            goto L_80007624;
    }
    // 0x80007668: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
L_8000766C:
    // 0x8000766C: lh          $v0, 0x5E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X5E);
    // 0x80007670: b           L_80007680
    // 0x80007674: nop

        goto L_80007680;
    // 0x80007674: nop

    // 0x80007678: b           L_80007680
    // 0x8000767C: nop

        goto L_80007680;
    // 0x8000767C: nop

L_80007680:
    // 0x80007680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007684: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80007688: jr          $ra
    // 0x8000768C: nop

    return;
    // 0x8000768C: nop

;}
RECOMP_FUNC void func_8000616C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000616C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80006170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006174: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80006178: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000617C: lw          $t7, -0x5CA8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5CA8);
    // 0x80006180: lw          $t6, -0x5CA4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CA4);
    // 0x80006184: nop

    // 0x80006188: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8000618C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80006190: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80006194: nop

    // 0x80006198: bne         $t9, $zero, L_800061B0
    if (ctx->r25 != 0) {
        // 0x8000619C: nop
    
            goto L_800061B0;
    }
    // 0x8000619C: nop

    // 0x800061A0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800061A4: sw          $zero, -0x5CA8($at)
    MEM_W(-0X5CA8, ctx->r1) = 0;
    // 0x800061A8: b           L_80006274
    // 0x800061AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80006274;
    // 0x800061AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800061B0:
    // 0x800061B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800061B4: nop

    // 0x800061B8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800061BC: beq         $t1, $zero, L_800061D4
    if (ctx->r9 == 0) {
        // 0x800061C0: nop
    
            goto L_800061D4;
    }
    // 0x800061C0: nop

    // 0x800061C4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800061C8: nop

    // 0x800061CC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800061D0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_800061D4:
    // 0x800061D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800061D8: jal         0x8000D84C
    // 0x800061DC: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x800061DC: nop

    after_0:
    // 0x800061E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800061E4: sw          $v0, 0x2D50($at)
    MEM_W(0X2D50, ctx->r1) = ctx->r2;
    // 0x800061E8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800061EC: lw          $t4, 0x2D50($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D50);
    // 0x800061F0: nop

    // 0x800061F4: bne         $t4, $zero, L_80006204
    if (ctx->r12 != 0) {
        // 0x800061F8: nop
    
            goto L_80006204;
    }
    // 0x800061F8: nop

    // 0x800061FC: b           L_80006274
    // 0x80006200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80006274;
    // 0x80006200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006204:
    // 0x80006204: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006208: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000620C: lw          $a1, 0x2D50($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2D50);
    // 0x80006210: lw          $a0, -0x5CA8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5CA8);
    // 0x80006214: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80006218: jal         0x80002CD0
    // 0x8000621C: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x8000621C: nop

    after_1:
    // 0x80006220: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80006224: lw          $t5, 0x2D50($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D50);
    // 0x80006228: addiu       $at, $zero, 0x4231
    ctx->r1 = ADD32(0, 0X4231);
    // 0x8000622C: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80006230: nop

    // 0x80006234: beq         $t6, $at, L_8000624C
    if (ctx->r14 == ctx->r1) {
        // 0x80006238: nop
    
            goto L_8000624C;
    }
    // 0x80006238: nop

    // 0x8000623C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80006240: sw          $zero, -0x5CA8($at)
    MEM_W(-0X5CA8, ctx->r1) = 0;
    // 0x80006244: b           L_80006274
    // 0x80006248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80006274;
    // 0x80006248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000624C:
    // 0x8000624C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80006250: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80006254: lw          $a1, -0x5CA0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5CA0);
    // 0x80006258: lw          $a0, 0x2D50($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D50);
    // 0x8000625C: jal         0x80033A14
    // 0x80006260: nop

    alBnkfNew(rdram, ctx);
        goto after_2;
    // 0x80006260: nop

    after_2:
    // 0x80006264: b           L_80006274
    // 0x80006268: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80006274;
    // 0x80006268: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000626C: b           L_80006274
    // 0x80006270: nop

        goto L_80006274;
    // 0x80006270: nop

L_80006274:
    // 0x80006274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000627C: jr          $ra
    // 0x80006280: nop

    return;
    // 0x80006280: nop

;}
