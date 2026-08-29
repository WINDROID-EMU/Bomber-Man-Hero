#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8033B400_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B404: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B408: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B40C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B410: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B414: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B418: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B41C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B420: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B424: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B428: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B42C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B430: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B434: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B438: nop

    // 0x8033B43C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B440: nop

    // 0x8033B444: bne         $t1, $zero, L_8033B4A8
    if (ctx->r9 != 0) {
        // 0x8033B448: nop
    
            goto L_8033B4A8;
    }
    // 0x8033B448: nop

    // 0x8033B44C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B450: nop

    // 0x8033B454: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B458: nop

    // 0x8033B45C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B460: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B464: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B468: nop

    // 0x8033B46C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B470: nop

    // 0x8033B474: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B47C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B480: addiu       $t7, $t7, -0x64E0
    ctx->r15 = ADD32(ctx->r15, -0X64E0);
    // 0x8033B484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B488: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B48C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033B494: jal         0x8001C0EC
    // 0x8033B498: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B498: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    after_0:
    // 0x8033B49C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4A0: nop

    // 0x8033B4A4: sh          $zero, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = 0;
L_8033B4A8:
    // 0x8033B4A8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4AC: nop

    // 0x8033B4B0: lh          $t0, 0xB6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB6);
    // 0x8033B4B4: nop

    // 0x8033B4B8: bne         $t0, $zero, L_8033B4F0
    if (ctx->r8 != 0) {
        // 0x8033B4BC: nop
    
            goto L_8033B4F0;
    }
    // 0x8033B4BC: nop

    // 0x8033B4C0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4C4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8033B4C8: sh          $t1, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r9;
    // 0x8033B4CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B4D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B4D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B4D8: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x8033B4DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B4E0: jal         0x800175F0
    // 0x8033B4E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033B4E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033B4E8: b           L_8033B508
    // 0x8033B4EC: nop

        goto L_8033B508;
    // 0x8033B4EC: nop

L_8033B4F0:
    // 0x8033B4F0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B4F4: nop

    // 0x8033B4F8: lh          $t2, 0xB6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB6);
    // 0x8033B4FC: nop

    // 0x8033B500: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x8033B504: sh          $t6, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r14;
L_8033B508:
    // 0x8033B508: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B50C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033B510: lh          $t7, 0xC2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC2);
    // 0x8033B514: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033B518: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033B51C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033B520: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033B524: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033B528: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033B52C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8033B530: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8033B534: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033B538: nop

    // 0x8033B53C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033B540: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x8033B544: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B548: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033B54C: lh          $t3, 0xC2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XC2);
    // 0x8033B550: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033B554: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x8033B558: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033B55C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033B560: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033B564: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033B568: addu        $t4, $t2, $t6
    ctx->r12 = ADD32(ctx->r10, ctx->r14);
    // 0x8033B56C: lwc1        $f10, 0x28($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X28);
    // 0x8033B570: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8033B574: nop

    // 0x8033B578: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033B57C: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
    // 0x8033B580: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033B584: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8033B588: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x8033B58C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8033B590: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033B594: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033B598: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033B59C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033B5A0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033B5A4: addu        $t5, $t9, $t0
    ctx->r13 = ADD32(ctx->r25, ctx->r8);
    // 0x8033B5A8: lwc1        $f4, 0x2C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8033B5AC: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033B5B0: nop

    // 0x8033B5B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033B5B8: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x8033B5BC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5C0: nop

    // 0x8033B5C4: lwc1        $f10, 0x1C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x8033B5C8: nop

    // 0x8033B5CC: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
    // 0x8033B5D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B5D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B5D8: jal         0x8001B4AC
    // 0x8033B5DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033B5DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033B5E0: beq         $v0, $zero, L_8033B600
    if (ctx->r2 == 0) {
        // 0x8033B5E4: nop
    
            goto L_8033B600;
    }
    // 0x8033B5E4: nop

    // 0x8033B5E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5EC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8033B5F0: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x8033B5F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B5F8: nop

    // 0x8033B5FC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033B600:
    // 0x8033B600: b           L_8033B608
    // 0x8033B604: nop

        goto L_8033B608;
    // 0x8033B604: nop

L_8033B608:
    // 0x8033B608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B60C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B610: jr          $ra
    // 0x8033B614: nop

    return;
    // 0x8033B614: nop

;}
RECOMP_FUNC void func_8033C18C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C18C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033C190: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C194: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C198: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C19C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C1A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C1A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C1A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C1AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C1B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C1B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C1B8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033C1BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033C1C0: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033C1C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C1C8: bne         $t0, $at, L_8033C1E8
    if (ctx->r8 != ctx->r1) {
        // 0x8033C1CC: nop
    
            goto L_8033C1E8;
    }
    // 0x8033C1CC: nop

    // 0x8033C1D0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033C1D4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033C1D8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8033C1DC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033C1E0: nop

    // 0x8033C1E4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033C1E8:
    // 0x8033C1E8: b           L_8033C1F0
    // 0x8033C1EC: nop

        goto L_8033C1F0;
    // 0x8033C1EC: nop

L_8033C1F0:
    // 0x8033C1F0: jr          $ra
    // 0x8033C1F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033C1F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033DE34_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033DE34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033DE38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033DE3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DE40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DE44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033DE48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DE4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DE50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DE54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DE58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DE5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033DE60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033DE64: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033DE68: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DE6C: nop

    // 0x8033DE70: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033DE74: nop

    // 0x8033DE78: bne         $t1, $zero, L_8033DE98
    if (ctx->r9 != 0) {
        // 0x8033DE7C: nop
    
            goto L_8033DE98;
    }
    // 0x8033DE7C: nop

    // 0x8033DE80: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DE84: nop

    // 0x8033DE88: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033DE8C: nop

    // 0x8033DE90: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033DE94: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_8033DE98:
    // 0x8033DE98: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033DE9C: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8033DEA0: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033DEA4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033DEA8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033DEAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033DEB0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033DEB4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033DEB8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033DEBC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8033DEC0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8033DEC4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DEC8: nop

    // 0x8033DECC: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8033DED0: nop

    // 0x8033DED4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8033DED8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DEDC: nop

    // 0x8033DEE0: lh          $t3, 0xEA($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XEA);
    // 0x8033DEE4: nop

    // 0x8033DEE8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8033DEEC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033DEF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033DEF4: beq         $t4, $at, L_8033DF18
    if (ctx->r12 == ctx->r1) {
        // 0x8033DEF8: nop
    
            goto L_8033DF18;
    }
    // 0x8033DEF8: nop

    // 0x8033DEFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF04: jal         0x800281A4
    // 0x8033DF08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x8033DF08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033DF0C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8033DF10: jal         0x8002B0E4
    // 0x8033DF14: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x8033DF14: nop

    after_1:
L_8033DF18:
    // 0x8033DF18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033DF1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033DF20: beq         $t2, $at, L_8033DF44
    if (ctx->r10 == ctx->r1) {
        // 0x8033DF24: nop
    
            goto L_8033DF44;
    }
    // 0x8033DF24: nop

    // 0x8033DF28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF30: jal         0x800281A4
    // 0x8033DF34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x8033DF34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8033DF38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033DF3C: jal         0x8002B0E4
    // 0x8033DF40: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x8033DF40: nop

    after_3:
L_8033DF44:
    // 0x8033DF44: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033DF48: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x8033DF4C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033DF50: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8033DF54: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8033DF58: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033DF5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033DF60: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x8033DF64: jal         0x8007EDF4
    // 0x8033DF68: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    func_8007EDF4(rdram, ctx);
        goto after_4;
    // 0x8033DF68: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    after_4:
    // 0x8033DF6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF74: jal         0x8002B114
    // 0x8033DF78: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x8033DF78: nop

    after_5:
    // 0x8033DF7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DF80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DF84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DF88: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8033DF8C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033DF90: jal         0x800175F0
    // 0x8033DF94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x8033DF94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x8033DF98: b           L_8033DFA0
    // 0x8033DF9C: nop

        goto L_8033DFA0;
    // 0x8033DF9C: nop

L_8033DFA0:
    // 0x8033DFA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033DFA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033DFA8: jr          $ra
    // 0x8033DFAC: nop

    return;
    // 0x8033DFAC: nop

;}
RECOMP_FUNC void func_8033C0E8_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C0E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C0EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C0F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033C0F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C0F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C0FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C100: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C10C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C110: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C114: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C118: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C11C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033C120: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033C124: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C128: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033C12C: nop

    // 0x8033C130: beq         $s0, $at, L_8033C14C
    if (ctx->r16 == ctx->r1) {
        // 0x8033C134: nop
    
            goto L_8033C14C;
    }
    // 0x8033C134: nop

    // 0x8033C138: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C13C: beq         $s0, $at, L_8033C15C
    if (ctx->r16 == ctx->r1) {
        // 0x8033C140: nop
    
            goto L_8033C15C;
    }
    // 0x8033C140: nop

    // 0x8033C144: b           L_8033C16C
    // 0x8033C148: nop

        goto L_8033C16C;
    // 0x8033C148: nop

L_8033C14C:
    // 0x8033C14C: jal         0x8033BD6C
    // 0x8033C150: nop

    func_8033BD6C_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033C150: nop

    after_0:
    // 0x8033C154: b           L_8033C174
    // 0x8033C158: nop

        goto L_8033C174;
    // 0x8033C158: nop

L_8033C15C:
    // 0x8033C15C: jal         0x8033BF18
    // 0x8033C160: nop

    func_8033BF18_unk_bin_49(rdram, ctx);
        goto after_1;
    // 0x8033C160: nop

    after_1:
    // 0x8033C164: b           L_8033C174
    // 0x8033C168: nop

        goto L_8033C174;
    // 0x8033C168: nop

L_8033C16C:
    // 0x8033C16C: b           L_8033C174
    // 0x8033C170: nop

        goto L_8033C174;
    // 0x8033C170: nop

L_8033C174:
    // 0x8033C174: b           L_8033C17C
    // 0x8033C178: nop

        goto L_8033C17C;
    // 0x8033C178: nop

L_8033C17C:
    // 0x8033C17C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C180: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033C184: jr          $ra
    // 0x8033C188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033C188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033B858_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B858: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B85C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B860: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033B864: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B868: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B86C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B870: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B874: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B878: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B87C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B880: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B884: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B888: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B88C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B890: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B894: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033B898: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033B89C: nop

    // 0x8033B8A0: beq         $s0, $at, L_8033B8BC
    if (ctx->r16 == ctx->r1) {
        // 0x8033B8A4: nop
    
            goto L_8033B8BC;
    }
    // 0x8033B8A4: nop

    // 0x8033B8A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033B8AC: beq         $s0, $at, L_8033B8CC
    if (ctx->r16 == ctx->r1) {
        // 0x8033B8B0: nop
    
            goto L_8033B8CC;
    }
    // 0x8033B8B0: nop

    // 0x8033B8B4: b           L_8033B8DC
    // 0x8033B8B8: nop

        goto L_8033B8DC;
    // 0x8033B8B8: nop

L_8033B8BC:
    // 0x8033B8BC: jal         0x8033B400
    // 0x8033B8C0: nop

    func_8033B400_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033B8C0: nop

    after_0:
    // 0x8033B8C4: b           L_8033B8E4
    // 0x8033B8C8: nop

        goto L_8033B8E4;
    // 0x8033B8C8: nop

L_8033B8CC:
    // 0x8033B8CC: jal         0x8033B618
    // 0x8033B8D0: nop

    func_8033B618_unk_bin_49(rdram, ctx);
        goto after_1;
    // 0x8033B8D0: nop

    after_1:
    // 0x8033B8D4: b           L_8033B8E4
    // 0x8033B8D8: nop

        goto L_8033B8E4;
    // 0x8033B8D8: nop

L_8033B8DC:
    // 0x8033B8DC: b           L_8033B8E4
    // 0x8033B8E0: nop

        goto L_8033B8E4;
    // 0x8033B8E0: nop

L_8033B8E4:
    // 0x8033B8E4: b           L_8033B8EC
    // 0x8033B8E8: nop

        goto L_8033B8EC;
    // 0x8033B8E8: nop

L_8033B8EC:
    // 0x8033B8EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B8F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033B8F4: jr          $ra
    // 0x8033B8F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033B8F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033CFD8_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CFD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033CFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033CFE0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CFE4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CFE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CFEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CFF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CFF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CFF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CFFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D000: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D004: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D008: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033D00C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033D010: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D014: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033D018: nop

    // 0x8033D01C: beq         $t1, $at, L_8033D050
    if (ctx->r9 == ctx->r1) {
        // 0x8033D020: sw          $t1, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r9;
            goto L_8033D050;
    }
    // 0x8033D020: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8033D024: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8033D028: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033D02C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033D030: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033D034: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033D038: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033D03C: lwc1        $f4, 0x1C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033D040: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033D044: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D048: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033D04C: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
L_8033D050:
    // 0x8033D050: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D054: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D058: lh          $t6, 0xEA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XEA);
    // 0x8033D05C: nop

    // 0x8033D060: beq         $t6, $at, L_8033D18C
    if (ctx->r14 == ctx->r1) {
        // 0x8033D064: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8033D18C;
    }
    // 0x8033D064: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8033D068: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033D06C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D070: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8033D074: lwc1        $f11, -0x1D08($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1D08);
    // 0x8033D078: lwc1        $f10, -0x1D04($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D04);
    // 0x8033D07C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033D080: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033D084: jal         0x80034970
    // 0x8033D088: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8033D088: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_0:
    // 0x8033D08C: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x8033D090: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033D094: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D098: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8033D09C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D0A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033D0A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D0A8: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033D0AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033D0B0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D0B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033D0B8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033D0BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D0C0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033D0C4: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x8033D0C8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D0CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033D0D0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033D0D4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033D0D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033D0DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D0E0: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033D0E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033D0E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033D0EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033D0F0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033D0F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D0F8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033D0FC: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
    // 0x8033D100: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033D104: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D108: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033D10C: lwc1        $f9, -0x1D00($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1D00);
    // 0x8033D110: lwc1        $f8, -0x1CFC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1CFC);
    // 0x8033D114: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033D118: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033D11C: jal         0x80036570
    // 0x8033D120: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x8033D120: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8033D124: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x8033D128: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D12C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D130: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8033D134: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033D138: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D13C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D140: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033D144: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D148: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D14C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8033D150: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D158: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033D15C: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
    // 0x8033D160: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D164: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033D168: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033D16C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D170: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033D174: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D178: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8033D17C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033D180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D184: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033D188: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
L_8033D18C:
    // 0x8033D18C: b           L_8033D194
    // 0x8033D190: nop

        goto L_8033D194;
    // 0x8033D190: nop

L_8033D194:
    // 0x8033D194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033D198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033D19C: jr          $ra
    // 0x8033D1A0: nop

    return;
    // 0x8033D1A0: nop

;}
RECOMP_FUNC void func_8033C1F8_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C1F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033C1FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C200: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C204: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C208: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C20C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C210: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C214: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C21C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C220: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C224: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C228: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033C22C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C230: nop

    // 0x8033C234: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C238: nop

    // 0x8033C23C: bne         $t1, $zero, L_8033C2E0
    if (ctx->r9 != 0) {
        // 0x8033C240: nop
    
            goto L_8033C2E0;
    }
    // 0x8033C240: nop

    // 0x8033C244: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C248: nop

    // 0x8033C24C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033C250: nop

    // 0x8033C254: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033C258: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033C25C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C260: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8033C264: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x8033C268: jal         0x80014E80
    // 0x8033C26C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8033C26C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x8033C270: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C274: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x8033C278: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x8033C27C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033C280: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033C284: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C288: nop

    // 0x8033C28C: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x8033C290: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C294: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033C298: lwc1        $f6, 0x40($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X40);
    // 0x8033C29C: lwc1        $f11, -0x1D10($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1D10);
    // 0x8033C2A0: lwc1        $f10, -0x1D0C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D0C);
    // 0x8033C2A4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033C2A8: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033C2AC: jal         0x80034970
    // 0x8033C2B0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x8033C2B0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x8033C2B4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033C2B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033C2BC: nop

    // 0x8033C2C0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8033C2C4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8033C2C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C2D0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8033C2D4: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x8033C2D8: jal         0x80029EF8
    // 0x8033C2DC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x8033C2DC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    after_2:
L_8033C2E0:
    // 0x8033C2E0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C2E4: nop

    // 0x8033C2E8: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033C2EC: nop

    // 0x8033C2F0: bne         $t3, $zero, L_8033C33C
    if (ctx->r11 != 0) {
        // 0x8033C2F4: nop
    
            goto L_8033C33C;
    }
    // 0x8033C2F4: nop

    // 0x8033C2F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C2FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C300: jal         0x80028FA0
    // 0x8033C304: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x8033C304: nop

    after_3:
    // 0x8033C308: beq         $v0, $zero, L_8033C334
    if (ctx->r2 == 0) {
        // 0x8033C30C: nop
    
            goto L_8033C334;
    }
    // 0x8033C30C: nop

    // 0x8033C310: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C314: nop

    // 0x8033C318: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x8033C31C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C320: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8033C324: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x8033C328: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C32C: nop

    // 0x8033C330: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_8033C334:
    // 0x8033C334: b           L_8033C354
    // 0x8033C338: nop

        goto L_8033C354;
    // 0x8033C338: nop

L_8033C33C:
    // 0x8033C33C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C340: nop

    // 0x8033C344: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033C348: nop

    // 0x8033C34C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033C350: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
L_8033C354:
    // 0x8033C354: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C358: nop

    // 0x8033C35C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8033C360: nop

    // 0x8033C364: bne         $t1, $zero, L_8033C390
    if (ctx->r9 != 0) {
        // 0x8033C368: nop
    
            goto L_8033C390;
    }
    // 0x8033C368: nop

    // 0x8033C36C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C370: nop

    // 0x8033C374: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x8033C378: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C37C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033C380: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x8033C384: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C388: b           L_8033C3A8
    // 0x8033C38C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_8033C3A8;
    // 0x8033C38C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033C390:
    // 0x8033C390: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C394: nop

    // 0x8033C398: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x8033C39C: nop

    // 0x8033C3A0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033C3A4: sh          $t9, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r25;
L_8033C3A8:
    // 0x8033C3A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C3AC: nop

    // 0x8033C3B0: lwc1        $f6, 0x28($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X28);
    // 0x8033C3B4: nop

    // 0x8033C3B8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8033C3BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C3C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C3C4: jal         0x80029C40
    // 0x8033C3C8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033C3C8: nop

    after_4:
    // 0x8033C3CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033C3D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033C3D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C3D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C3DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033C3E0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033C3E4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033C3E8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033C3EC: jal         0x80029018
    // 0x8033C3F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x8033C3F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x8033C3F4: beq         $v0, $zero, L_8033C444
    if (ctx->r2 == 0) {
        // 0x8033C3F8: nop
    
            goto L_8033C444;
    }
    // 0x8033C3F8: nop

    // 0x8033C3FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033C400: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C404: nop

    // 0x8033C408: swc1        $f16, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f16.u32l;
    // 0x8033C40C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C410: nop

    // 0x8033C414: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8033C418: nop

    // 0x8033C41C: swc1        $f18, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f18.u32l;
    // 0x8033C420: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C424: nop

    // 0x8033C428: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x8033C42C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C430: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033C434: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x8033C438: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C43C: nop

    // 0x8033C440: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033C444:
    // 0x8033C444: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033C448: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C44C: nop

    // 0x8033C450: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x8033C454: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033C458: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033C45C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C460: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C464: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033C468: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033C46C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033C470: jal         0x80029F58
    // 0x8033C474: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x8033C474: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x8033C478: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C47C: bne         $v0, $at, L_8033C4CC
    if (ctx->r2 != ctx->r1) {
        // 0x8033C480: nop
    
            goto L_8033C4CC;
    }
    // 0x8033C480: nop

    // 0x8033C484: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033C488: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C48C: nop

    // 0x8033C490: swc1        $f8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f8.u32l;
    // 0x8033C494: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C498: nop

    // 0x8033C49C: lwc1        $f10, 0x2C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033C4A0: nop

    // 0x8033C4A4: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
    // 0x8033C4A8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C4AC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8033C4B0: sh          $t7, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r15;
    // 0x8033C4B4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C4B8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033C4BC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033C4C0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033C4C4: nop

    // 0x8033C4C8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033C4CC:
    // 0x8033C4CC: b           L_8033C4D4
    // 0x8033C4D0: nop

        goto L_8033C4D4;
    // 0x8033C4D0: nop

L_8033C4D4:
    // 0x8033C4D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C4D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8033C4DC: jr          $ra
    // 0x8033C4E0: nop

    return;
    // 0x8033C4E0: nop

;}
RECOMP_FUNC void func_8033E07C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033E07C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033E080: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033E084: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033E088: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033E08C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033E090: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033E094: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E098: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E09C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E0A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E0A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033E0A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033E0AC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033E0B0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E0B4: nop

    // 0x8033E0B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033E0BC: nop

    // 0x8033E0C0: bne         $t1, $zero, L_8033E108
    if (ctx->r9 != 0) {
        // 0x8033E0C4: nop
    
            goto L_8033E108;
    }
    // 0x8033E0C4: nop

    // 0x8033E0C8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033E0CC: nop

    // 0x8033E0D0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033E0D4: nop

    // 0x8033E0D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033E0DC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033E0E0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033E0E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033E0E8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033E0EC: nop

    // 0x8033E0F0: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x8033E0F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E0F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E0FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033E100: jal         0x80029EF8
    // 0x8033E104: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x8033E104: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_0:
L_8033E108:
    // 0x8033E108: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033E10C: nop

    // 0x8033E110: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x8033E114: nop

    // 0x8033E118: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8033E11C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033E120: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033E124: nop

    // 0x8033E128: swc1        $f8, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f8.u32l;
    // 0x8033E12C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E130: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E134: jal         0x80029C40
    // 0x8033E138: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x8033E138: nop

    after_1:
    // 0x8033E13C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033E140: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033E144: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E148: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E14C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033E150: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8033E154: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033E158: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033E15C: jal         0x80029018
    // 0x8033E160: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x8033E160: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8033E164: beq         $v0, $zero, L_8033E190
    if (ctx->r2 == 0) {
        // 0x8033E168: nop
    
            goto L_8033E190;
    }
    // 0x8033E168: nop

    // 0x8033E16C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033E170: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033E174: nop

    // 0x8033E178: swc1        $f18, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f18.u32l;
    // 0x8033E17C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033E180: nop

    // 0x8033E184: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033E188: nop

    // 0x8033E18C: swc1        $f4, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f4.u32l;
L_8033E190:
    // 0x8033E190: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033E194: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033E198: nop

    // 0x8033E19C: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x8033E1A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033E1A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E1A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E1AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033E1B0: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x8033E1B4: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    // 0x8033E1B8: jal         0x80029F58
    // 0x8033E1BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x8033E1BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8033E1C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033E1C4: bne         $v0, $at, L_8033E1DC
    if (ctx->r2 != ctx->r1) {
        // 0x8033E1C8: nop
    
            goto L_8033E1DC;
    }
    // 0x8033E1C8: nop

    // 0x8033E1CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033E1D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033E1D4: jal         0x8002B0E4
    // 0x8033E1D8: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x8033E1D8: nop

    after_4:
L_8033E1DC:
    // 0x8033E1DC: b           L_8033E1E4
    // 0x8033E1E0: nop

        goto L_8033E1E4;
    // 0x8033E1E0: nop

L_8033E1E4:
    // 0x8033E1E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033E1E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033E1EC: jr          $ra
    // 0x8033E1F0: nop

    return;
    // 0x8033E1F0: nop

;}
RECOMP_FUNC void func_8033B160_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033B164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033B168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B16C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B170: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B17C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B184: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B188: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B18C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B190: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033B194: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B198: nop

    // 0x8033B19C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B1A0: nop

    // 0x8033B1A4: bne         $t1, $zero, L_8033B1D8
    if (ctx->r9 != 0) {
        // 0x8033B1A8: nop
    
            goto L_8033B1D8;
    }
    // 0x8033B1A8: nop

    // 0x8033B1AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B1B0: nop

    // 0x8033B1B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B1B8: nop

    // 0x8033B1BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B1C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B1C4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B1C8: nop

    // 0x8033B1CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B1D0: nop

    // 0x8033B1D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033B1D8:
    // 0x8033B1D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B1DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B1E0: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x8033B1E4: jal         0x8002A2EC
    // 0x8033B1E8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A2EC(rdram, ctx);
        goto after_0;
    // 0x8033B1E8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_0:
    // 0x8033B1EC: beq         $v0, $zero, L_8033B200
    if (ctx->r2 == 0) {
        // 0x8033B1F0: nop
    
            goto L_8033B200;
    }
    // 0x8033B1F0: nop

    // 0x8033B1F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B1F8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033B1FC: sb          $t7, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r15;
L_8033B200:
    // 0x8033B200: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B204: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033B208: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x8033B20C: nop

    // 0x8033B210: bne         $t0, $at, L_8033B27C
    if (ctx->r8 != ctx->r1) {
        // 0x8033B214: nop
    
            goto L_8033B27C;
    }
    // 0x8033B214: nop

    // 0x8033B218: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033B21C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B220: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B224: nop

    // 0x8033B228: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x8033B22C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033B230: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8033B234: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B238: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8033B23C: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033B240: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x8033B244: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033B248: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8033B24C: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033B250: nop

    // 0x8033B254: bc1f        L_8033B27C
    if (!c1cs) {
        // 0x8033B258: nop
    
            goto L_8033B27C;
    }
    // 0x8033B258: nop

    // 0x8033B25C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B260: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B264: jal         0x80017B3C
    // 0x8033B268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_1;
    // 0x8033B268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8033B26C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B274: jal         0x8002B114
    // 0x8033B278: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033B278: nop

    after_2:
L_8033B27C:
    // 0x8033B27C: b           L_8033B284
    // 0x8033B280: nop

        goto L_8033B284;
    // 0x8033B280: nop

L_8033B284:
    // 0x8033B284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033B288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033B28C: jr          $ra
    // 0x8033B290: nop

    return;
    // 0x8033B290: nop

;}
RECOMP_FUNC void func_8033CB98_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CB98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033CB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033CBA0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CBA4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CBA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CBAC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CBB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CBB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CBB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CBBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CBC0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CBC4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CBC8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033CBCC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033CBD0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033CBD4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033CBD8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033CBDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CBE0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033CBE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033CBE8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033CBEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CBF0: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x8033CBF4: nop

    // 0x8033CBF8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8033CBFC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033CC00: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x8033CC04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CC08: bne         $t3, $at, L_8033CCC0
    if (ctx->r11 != ctx->r1) {
        // 0x8033CC0C: nop
    
            goto L_8033CCC0;
    }
    // 0x8033CC0C: nop

    // 0x8033CC10: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033CC14: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x8033CC18: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033CC1C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033CC20: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033CC24: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033CC28: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033CC2C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033CC30: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033CC34: lh          $t6, 0x4258($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4258);
    // 0x8033CC38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CC3C: bne         $t6, $at, L_8033CCB8
    if (ctx->r14 != ctx->r1) {
        // 0x8033CC40: nop
    
            goto L_8033CCB8;
    }
    // 0x8033CC40: nop

    // 0x8033CC44: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CC48: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x8033CC4C: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x8033CC50: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CC54: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x8033CC58: sh          $t9, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = ctx->r25;
    // 0x8033CC5C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033CC60: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x8033CC64: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033CC68: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8033CC6C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CC70: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8033CC74: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033CC78: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033CC7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033CC80: lh          $t3, 0x4238($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4238);
    // 0x8033CC84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033CC88: beq         $t3, $at, L_8033CCB8
    if (ctx->r11 == ctx->r1) {
        // 0x8033CC8C: nop
    
            goto L_8033CCB8;
    }
    // 0x8033CC8C: nop

    // 0x8033CC90: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8033CC94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CC98: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033CC9C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033CCA0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033CCA4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033CCA8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033CCAC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033CCB0: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x8033CCB4: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
L_8033CCB8:
    // 0x8033CCB8: b           L_8033CCFC
    // 0x8033CCBC: nop

        goto L_8033CCFC;
    // 0x8033CCBC: nop

L_8033CCC0:
    // 0x8033CCC0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033CCC4: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x8033CCC8: nop

    // 0x8033CCCC: bne         $t7, $zero, L_8033CCFC
    if (ctx->r15 != 0) {
        // 0x8033CCD0: nop
    
            goto L_8033CCFC;
    }
    // 0x8033CCD0: nop

    // 0x8033CCD4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CCD8: nop

    // 0x8033CCDC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033CCE0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CCE4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8033CCE8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033CCEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8033CCF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033CCF4: jal         0x80069E60
    // 0x8033CCF8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_80069E60(rdram, ctx);
        goto after_0;
    // 0x8033CCF8: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
L_8033CCFC:
    // 0x8033CCFC: b           L_8033CD04
    // 0x8033CD00: nop

        goto L_8033CD04;
    // 0x8033CD00: nop

L_8033CD04:
    // 0x8033CD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033CD08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033CD0C: jr          $ra
    // 0x8033CD10: nop

    return;
    // 0x8033CD10: nop

;}
RECOMP_FUNC void func_8033D57C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D57C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033D580: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033D584: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D588: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D58C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D594: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D598: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D59C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D5A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D5A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D5A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D5AC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033D5B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D5B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D5B8: jal         0x8033CD14
    // 0x8033D5BC: nop

    func_8033CD14_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033D5BC: nop

    after_0:
    // 0x8033D5C0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5C4: nop

    // 0x8033D5C8: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033D5CC: nop

    // 0x8033D5D0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8033D5D4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5D8: nop

    // 0x8033D5DC: lh          $t3, 0xEA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XEA);
    // 0x8033D5E0: nop

    // 0x8033D5E4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8033D5E8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033D5EC: nop

    // 0x8033D5F0: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x8033D5F4: nop

    // 0x8033D5F8: bne         $t5, $zero, L_8033D80C
    if (ctx->r13 != 0) {
        // 0x8033D5FC: nop
    
            goto L_8033D80C;
    }
    // 0x8033D5FC: nop

    // 0x8033D600: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D604: nop

    // 0x8033D608: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033D60C: nop

    // 0x8033D610: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8033D614: sb          $t8, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r24;
    // 0x8033D618: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033D61C: nop

    // 0x8033D620: sh          $zero, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = 0;
    // 0x8033D624: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D628: nop

    // 0x8033D62C: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
    // 0x8033D630: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033D634: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033D638: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D63C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033D640: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033D644: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033D648: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033D64C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033D650: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033D654: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033D658: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033D65C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033D660: addiu       $t3, $sp, 0x20
    ctx->r11 = ADD32(ctx->r29, 0X20);
    // 0x8033D664: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8033D668: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x8033D66C: jal         0x800158B4
    // 0x8033D670: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800158B4(rdram, ctx);
        goto after_1;
    // 0x8033D670: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x8033D674: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033D678: jal         0x80015744
    // 0x8033D67C: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_2;
    // 0x8033D67C: nop

    after_2:
    // 0x8033D680: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8033D684: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8033D688: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033D68C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033D690: nop

    // 0x8033D694: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8033D698: nop

    // 0x8033D69C: bc1f        L_8033D6D0
    if (!c1cs) {
        // 0x8033D6A0: nop
    
            goto L_8033D6D0;
    }
    // 0x8033D6A0: nop

    // 0x8033D6A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033D6A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033D6AC: nop

    // 0x8033D6B0: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x8033D6B4: nop

    // 0x8033D6B8: bc1f        L_8033D6D0
    if (!c1cs) {
        // 0x8033D6BC: nop
    
            goto L_8033D6D0;
    }
    // 0x8033D6BC: nop

    // 0x8033D6C0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8033D6C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D6C8: b           L_8033D71C
    // 0x8033D6CC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
        goto L_8033D71C;
    // 0x8033D6CC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
L_8033D6D0:
    // 0x8033D6D0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033D6D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033D6D8: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033D6DC: nop

    // 0x8033D6E0: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x8033D6E4: nop

    // 0x8033D6E8: bc1f        L_8033D71C
    if (!c1cs) {
        // 0x8033D6EC: nop
    
            goto L_8033D71C;
    }
    // 0x8033D6EC: nop

    // 0x8033D6F0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D6F4: lwc1        $f8, -0x1CF8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1CF8);
    // 0x8033D6F8: nop

    // 0x8033D6FC: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x8033D700: nop

    // 0x8033D704: bc1f        L_8033D71C
    if (!c1cs) {
        // 0x8033D708: nop
    
            goto L_8033D71C;
    }
    // 0x8033D708: nop

    // 0x8033D70C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D710: lwc1        $f6, -0x1CF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1CF4);
    // 0x8033D714: nop

    // 0x8033D718: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_8033D71C:
    // 0x8033D71C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8033D720: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033D724: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033D728: nop

    // 0x8033D72C: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x8033D730: nop

    // 0x8033D734: bc1f        L_8033D768
    if (!c1cs) {
        // 0x8033D738: nop
    
            goto L_8033D768;
    }
    // 0x8033D738: nop

    // 0x8033D73C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033D740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033D744: nop

    // 0x8033D748: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x8033D74C: nop

    // 0x8033D750: bc1f        L_8033D768
    if (!c1cs) {
        // 0x8033D754: nop
    
            goto L_8033D768;
    }
    // 0x8033D754: nop

    // 0x8033D758: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8033D75C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033D760: b           L_8033D7B4
    // 0x8033D764: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
        goto L_8033D7B4;
    // 0x8033D764: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_8033D768:
    // 0x8033D768: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033D76C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033D770: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033D774: nop

    // 0x8033D778: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8033D77C: nop

    // 0x8033D780: bc1f        L_8033D7B4
    if (!c1cs) {
        // 0x8033D784: nop
    
            goto L_8033D7B4;
    }
    // 0x8033D784: nop

    // 0x8033D788: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D78C: lwc1        $f16, -0x1CF0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1CF0);
    // 0x8033D790: nop

    // 0x8033D794: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x8033D798: nop

    // 0x8033D79C: bc1f        L_8033D7B4
    if (!c1cs) {
        // 0x8033D7A0: nop
    
            goto L_8033D7B4;
    }
    // 0x8033D7A0: nop

    // 0x8033D7A4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033D7A8: lwc1        $f10, -0x1CEC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1CEC);
    // 0x8033D7AC: nop

    // 0x8033D7B0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8033D7B4:
    // 0x8033D7B4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8033D7B8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033D7BC: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8033D7C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033D7C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033D7C8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D7CC: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033D7D0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8033D7D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8033D7D8: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
    // 0x8033D7DC: nop

    // 0x8033D7E0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8033D7E4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033D7E8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033D7EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033D7F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033D7F4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033D7F8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8033D7FC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8033D800: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8033D804: sh          $t6, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r14;
    // 0x8033D808: nop

L_8033D80C:
    // 0x8033D80C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033D810: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8033D814: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033D818: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033D81C: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8033D820: jal         0x8002A800
    // 0x8033D824: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    func_8002A800(rdram, ctx);
        goto after_3;
    // 0x8033D824: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_3:
    // 0x8033D828: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8033D82C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8033D830: nop

    // 0x8033D834: bne         $t2, $zero, L_8033D84C
    if (ctx->r10 != 0) {
        // 0x8033D838: nop
    
            goto L_8033D84C;
    }
    // 0x8033D838: nop

    // 0x8033D83C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033D840: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033D844: b           L_8033D870
    // 0x8033D848: sh          $t3, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = ctx->r11;
        goto L_8033D870;
    // 0x8033D848: sh          $t3, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = ctx->r11;
L_8033D84C:
    // 0x8033D84C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8033D850: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033D854: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8033D858: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033D85C: jal         0x80015538
    // 0x8033D860: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033D860: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x8033D864: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033D868: nop

    // 0x8033D86C: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
L_8033D870:
    // 0x8033D870: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8033D874: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D878: beq         $t6, $at, L_8033D938
    if (ctx->r14 == ctx->r1) {
        // 0x8033D87C: nop
    
            goto L_8033D938;
    }
    // 0x8033D87C: nop

    // 0x8033D880: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8033D884: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033D888: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033D88C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D890: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033D894: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x8033D898: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D89C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033D8A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D8A4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8033D8A8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033D8AC: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8033D8B0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    // 0x8033D8B4: jal         0x8002A800
    // 0x8033D8B8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    func_8002A800(rdram, ctx);
        goto after_5;
    // 0x8033D8B8: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_5:
    // 0x8033D8BC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8033D8C0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8033D8C4: nop

    // 0x8033D8C8: bne         $t3, $zero, L_8033D8E0
    if (ctx->r11 != 0) {
        // 0x8033D8CC: nop
    
            goto L_8033D8E0;
    }
    // 0x8033D8CC: nop

    // 0x8033D8D0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033D8D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033D8D8: b           L_8033D938
    // 0x8033D8DC: sh          $t4, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r12;
        goto L_8033D938;
    // 0x8033D8DC: sh          $t4, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r12;
L_8033D8E0:
    // 0x8033D8E0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8033D8E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033D8E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033D8EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033D8F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033D8F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033D8F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033D8FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D900: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x8033D904: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033D908: lwc1        $f12, 0x4168($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8033D90C: jal         0x80015538
    // 0x8033D910: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x8033D910: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_6:
    // 0x8033D914: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8033D918: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033D91C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033D920: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D924: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033D928: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033D92C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033D930: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033D934: swc1        $f0, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f0.u32l;
L_8033D938:
    // 0x8033D938: jal         0x8033CFD8
    // 0x8033D93C: nop

    func_8033CFD8_unk_bin_49(rdram, ctx);
        goto after_7;
    // 0x8033D93C: nop

    after_7:
    // 0x8033D940: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8033D944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D948: beq         $t1, $at, L_8033D998
    if (ctx->r9 == ctx->r1) {
        // 0x8033D94C: nop
    
            goto L_8033D998;
    }
    // 0x8033D94C: nop

    // 0x8033D950: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033D954: nop

    // 0x8033D958: lh          $t3, 0xAE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAE);
    // 0x8033D95C: nop

    // 0x8033D960: beq         $t3, $zero, L_8033D990
    if (ctx->r11 == 0) {
        // 0x8033D964: nop
    
            goto L_8033D990;
    }
    // 0x8033D964: nop

    // 0x8033D968: lh          $t4, 0xB0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XB0);
    // 0x8033D96C: nop

    // 0x8033D970: beq         $t4, $zero, L_8033D990
    if (ctx->r12 == 0) {
        // 0x8033D974: nop
    
            goto L_8033D990;
    }
    // 0x8033D974: nop

    // 0x8033D978: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033D97C: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8033D980: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x8033D984: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033D988: nop

    // 0x8033D98C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_8033D990:
    // 0x8033D990: b           L_8033D9C8
    // 0x8033D994: nop

        goto L_8033D9C8;
    // 0x8033D994: nop

L_8033D998:
    // 0x8033D998: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033D99C: nop

    // 0x8033D9A0: lh          $t9, 0xAE($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XAE);
    // 0x8033D9A4: nop

    // 0x8033D9A8: beq         $t9, $zero, L_8033D9C8
    if (ctx->r25 == 0) {
        // 0x8033D9AC: nop
    
            goto L_8033D9C8;
    }
    // 0x8033D9AC: nop

    // 0x8033D9B0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033D9B4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033D9B8: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033D9BC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033D9C0: nop

    // 0x8033D9C4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033D9C8:
    // 0x8033D9C8: b           L_8033D9D0
    // 0x8033D9CC: nop

        goto L_8033D9D0;
    // 0x8033D9CC: nop

L_8033D9D0:
    // 0x8033D9D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033D9D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033D9D8: jr          $ra
    // 0x8033D9DC: nop

    return;
    // 0x8033D9DC: nop

;}
RECOMP_FUNC void func_8033C618_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C618: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033C61C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C620: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C624: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C628: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C62C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C630: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C634: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C638: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C63C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C640: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C644: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033C648: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033C64C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033C650: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C654: bne         $t0, $at, L_8033C668
    if (ctx->r8 != ctx->r1) {
        // 0x8033C658: nop
    
            goto L_8033C668;
    }
    // 0x8033C658: nop

    // 0x8033C65C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033C660: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033C664: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
L_8033C668:
    // 0x8033C668: b           L_8033C670
    // 0x8033C66C: nop

        goto L_8033C670;
    // 0x8033C66C: nop

L_8033C670:
    // 0x8033C670: jr          $ra
    // 0x8033C674: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033C674: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033A134_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A134: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A138: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A13C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A140: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A144: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A14C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A158: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A15C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A160: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A164: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A168: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033A16C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033A170: nop

    // 0x8033A174: bne         $t0, $zero, L_8033A250
    if (ctx->r8 != 0) {
        // 0x8033A178: nop
    
            goto L_8033A250;
    }
    // 0x8033A178: nop

    // 0x8033A17C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A180: nop

    // 0x8033A184: lh          $t2, 0xBE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XBE);
    // 0x8033A188: nop

    // 0x8033A18C: beq         $t2, $zero, L_8033A1A8
    if (ctx->r10 == 0) {
        // 0x8033A190: nop
    
            goto L_8033A1A8;
    }
    // 0x8033A190: nop

    // 0x8033A194: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033A198: nop

    // 0x8033A19C: lh          $a0, 0xBE($t3)
    ctx->r4 = MEM_H(ctx->r11, 0XBE);
    // 0x8033A1A0: jal         0x8002B114
    // 0x8033A1A4: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x8033A1A4: nop

    after_0:
L_8033A1A8:
    // 0x8033A1A8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1AC: nop

    // 0x8033A1B0: lh          $t5, 0xC0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XC0);
    // 0x8033A1B4: nop

    // 0x8033A1B8: beq         $t5, $zero, L_8033A1F0
    if (ctx->r13 == 0) {
        // 0x8033A1BC: nop
    
            goto L_8033A1F0;
    }
    // 0x8033A1BC: nop

    // 0x8033A1C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A1C8: lh          $a0, 0xC0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0XC0);
    // 0x8033A1CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8033A1D0: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8033A1D4: jal         0x800175F0
    // 0x8033A1D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033A1D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_1:
    // 0x8033A1DC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1E0: nop

    // 0x8033A1E4: lh          $a0, 0xC0($t7)
    ctx->r4 = MEM_H(ctx->r15, 0XC0);
    // 0x8033A1E8: jal         0x8002B114
    // 0x8033A1EC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033A1EC: nop

    after_2:
L_8033A1F0:
    // 0x8033A1F0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A1F4: nop

    // 0x8033A1F8: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033A1FC: nop

    // 0x8033A200: beq         $t9, $zero, L_8033A21C
    if (ctx->r25 == 0) {
        // 0x8033A204: nop
    
            goto L_8033A21C;
    }
    // 0x8033A204: nop

    // 0x8033A208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A20C: nop

    // 0x8033A210: lh          $a0, 0xC2($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XC2);
    // 0x8033A214: jal         0x8002B114
    // 0x8033A218: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x8033A218: nop

    after_3:
L_8033A21C:
    // 0x8033A21C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A220: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A228: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8033A22C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033A230: jal         0x800175F0
    // 0x8033A234: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8033A234: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8033A238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A23C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A240: jal         0x8002B0E4
    // 0x8033A244: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x8033A244: nop

    after_5:
    // 0x8033A248: b           L_8033A270
    // 0x8033A24C: nop

        goto L_8033A270;
    // 0x8033A24C: nop

L_8033A250:
    // 0x8033A250: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033A254: lw          $t1, 0x7A64($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A64);
    // 0x8033A258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A25C: bne         $t1, $at, L_8033A270
    if (ctx->r9 != ctx->r1) {
        // 0x8033A260: nop
    
            goto L_8033A270;
    }
    // 0x8033A260: nop

    // 0x8033A264: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033A268: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x8033A26C: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
L_8033A270:
    // 0x8033A270: b           L_8033A278
    // 0x8033A274: nop

        goto L_8033A278;
    // 0x8033A274: nop

L_8033A278:
    // 0x8033A278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A27C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A280: jr          $ra
    // 0x8033A284: nop

    return;
    // 0x8033A284: nop

;}
RECOMP_FUNC void func_8033C4E4_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C4E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C4E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C4EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C4F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C4F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C4F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C4FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C500: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C508: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C50C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C510: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C514: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033C518: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C51C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033C524: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8033C528: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033C52C: jal         0x800175F0
    // 0x8033C530: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x8033C530: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8033C534: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033C538: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8033C53C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033C540: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033C544: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8033C548: lwc1        $f12, 0x0($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033C54C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033C550: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8033C554: jal         0x8007EDF4
    // 0x8033C558: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    func_8007EDF4(rdram, ctx);
        goto after_1;
    // 0x8033C558: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    after_1:
    // 0x8033C55C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C564: jal         0x8002B0E4
    // 0x8033C568: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x8033C568: nop

    after_2:
    // 0x8033C56C: b           L_8033C574
    // 0x8033C570: nop

        goto L_8033C574;
    // 0x8033C570: nop

L_8033C574:
    // 0x8033C574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033C57C: jr          $ra
    // 0x8033C580: nop

    return;
    // 0x8033C580: nop

;}
RECOMP_FUNC void func_8033BF18_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BF18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033BF1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BF20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BF24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BF28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BF2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BF30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BF34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BF38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BF3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BF40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BF44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BF48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BF4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BF50: nop

    // 0x8033BF54: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BF58: nop

    // 0x8033BF5C: bne         $t1, $zero, L_8033BFB4
    if (ctx->r9 != 0) {
        // 0x8033BF60: nop
    
            goto L_8033BFB4;
    }
    // 0x8033BF60: nop

    // 0x8033BF64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BF68: nop

    // 0x8033BF6C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BF70: nop

    // 0x8033BF74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BF78: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BF7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BF80: nop

    // 0x8033BF84: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BF88: nop

    // 0x8033BF8C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BF90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BF94: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BF98: addiu       $t7, $t7, -0x64D8
    ctx->r15 = ADD32(ctx->r15, -0X64D8);
    // 0x8033BF9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BFA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BFA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033BFA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033BFAC: jal         0x8001C0EC
    // 0x8033BFB0: addiu       $a3, $zero, 0x170
    ctx->r7 = ADD32(0, 0X170);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BFB0: addiu       $a3, $zero, 0x170
    ctx->r7 = ADD32(0, 0X170);
    after_0:
L_8033BFB4:
    // 0x8033BFB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BFB8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033BFBC: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033BFC0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033BFC4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033BFC8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033BFCC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033BFD0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033BFD4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033BFD8: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8033BFDC: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8033BFE0: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033BFE4: nop

    // 0x8033BFE8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BFEC: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x8033BFF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BFF4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033BFF8: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033BFFC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033C000: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033C004: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033C008: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033C00C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033C010: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033C014: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x8033C018: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x8033C01C: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033C020: nop

    // 0x8033C024: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033C028: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x8033C02C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033C030: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033C034: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033C038: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033C03C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033C040: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033C044: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033C048: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033C04C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033C050: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x8033C054: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033C058: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033C05C: nop

    // 0x8033C060: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033C064: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x8033C068: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033C06C: nop

    // 0x8033C070: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033C074: nop

    // 0x8033C078: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
    // 0x8033C07C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C080: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C084: jal         0x8001B4AC
    // 0x8033C088: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033C088: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033C08C: beq         $v0, $zero, L_8033C0D0
    if (ctx->r2 == 0) {
        // 0x8033C090: nop
    
            goto L_8033C0D0;
    }
    // 0x8033C090: nop

    // 0x8033C094: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033C098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033C09C: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x8033C0A0: nop

    // 0x8033C0A4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033C0A8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033C0AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C0B0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033C0B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C0B8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033C0BC: sh          $zero, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = 0;
    // 0x8033C0C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C0C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C0C8: jal         0x8002B114
    // 0x8033C0CC: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x8033C0CC: nop

    after_2:
L_8033C0D0:
    // 0x8033C0D0: b           L_8033C0D8
    // 0x8033C0D4: nop

        goto L_8033C0D8;
    // 0x8033C0D4: nop

L_8033C0D8:
    // 0x8033C0D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C0DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033C0E0: jr          $ra
    // 0x8033C0E4: nop

    return;
    // 0x8033C0E4: nop

;}
RECOMP_FUNC void func_8033BD6C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033BD6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033BD70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033BD74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033BD78: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033BD7C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BD80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033BD84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BD8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033BD90: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BD94: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BD98: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033BD9C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033BDA0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BDA4: nop

    // 0x8033BDA8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033BDAC: nop

    // 0x8033BDB0: bne         $t1, $zero, L_8033BE08
    if (ctx->r9 != 0) {
        // 0x8033BDB4: nop
    
            goto L_8033BE08;
    }
    // 0x8033BDB4: nop

    // 0x8033BDB8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BDBC: nop

    // 0x8033BDC0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033BDC4: nop

    // 0x8033BDC8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033BDCC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033BDD0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BDD4: nop

    // 0x8033BDD8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033BDDC: nop

    // 0x8033BDE0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033BDE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BDE8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033BDEC: addiu       $t7, $t7, -0x64D8
    ctx->r15 = ADD32(ctx->r15, -0X64D8);
    // 0x8033BDF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BDF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033BDF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033BDFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033BE00: jal         0x8001C0EC
    // 0x8033BE04: addiu       $a3, $zero, 0x170
    ctx->r7 = ADD32(0, 0X170);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033BE04: addiu       $a3, $zero, 0x170
    ctx->r7 = ADD32(0, 0X170);
    after_0:
L_8033BE08:
    // 0x8033BE08: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033BE0C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033BE10: lh          $t9, 0xC2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XC2);
    // 0x8033BE14: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8033BE18: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033BE1C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033BE20: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033BE24: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033BE28: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033BE2C: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x8033BE30: lwc1        $f4, 0x24($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X24);
    // 0x8033BE34: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033BE38: nop

    // 0x8033BE3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BE40: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x8033BE44: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033BE48: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033BE4C: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033BE50: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033BE54: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x8033BE58: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033BE5C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033BE60: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x8033BE64: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033BE68: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x8033BE6C: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x8033BE70: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033BE74: nop

    // 0x8033BE78: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033BE7C: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x8033BE80: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033BE84: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8033BE88: lh          $t0, 0xC2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XC2);
    // 0x8033BE8C: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8033BE90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033BE94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BE98: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033BE9C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033BEA0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033BEA4: addu        $t8, $t1, $t3
    ctx->r24 = ADD32(ctx->r9, ctx->r11);
    // 0x8033BEA8: lwc1        $f4, 0x2C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033BEAC: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033BEB0: nop

    // 0x8033BEB4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BEB8: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x8033BEBC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033BEC0: nop

    // 0x8033BEC4: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8033BEC8: nop

    // 0x8033BECC: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
    // 0x8033BED0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BED8: jal         0x8001B4AC
    // 0x8033BEDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x8033BEDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8033BEE0: beq         $v0, $zero, L_8033BF00
    if (ctx->r2 == 0) {
        // 0x8033BEE4: nop
    
            goto L_8033BF00;
    }
    // 0x8033BEE4: nop

    // 0x8033BEE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033BEEC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8033BEF0: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
    // 0x8033BEF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033BEF8: nop

    // 0x8033BEFC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033BF00:
    // 0x8033BF00: b           L_8033BF08
    // 0x8033BF04: nop

        goto L_8033BF08;
    // 0x8033BF04: nop

L_8033BF08:
    // 0x8033BF08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BF0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033BF10: jr          $ra
    // 0x8033BF14: nop

    return;
    // 0x8033BF14: nop

;}
RECOMP_FUNC void func_8033CD14_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CD14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033CD18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CD1C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8033CD20: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8033CD24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CD28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CD2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CD30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CD34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CD38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CD3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033CD40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033CD44: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033CD48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033CD4C: nop

    // 0x8033CD50: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x8033CD54: nop

    // 0x8033CD58: beq         $t1, $zero, L_8033CFC0
    if (ctx->r9 == 0) {
        // 0x8033CD5C: nop
    
            goto L_8033CFC0;
    }
    // 0x8033CD5C: nop

    // 0x8033CD60: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033CD64: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x8033CD68: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x8033CD6C: nop

    // 0x8033CD70: bne         $t3, $at, L_8033CE98
    if (ctx->r11 != ctx->r1) {
        // 0x8033CD74: nop
    
            goto L_8033CE98;
    }
    // 0x8033CD74: nop

    // 0x8033CD78: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8033CD7C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033CD80: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8033CD84: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033CD88: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033CD8C: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033CD90: nop

    // 0x8033CD94: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033CD98: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8033CD9C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8033CDA0: sh          $t6, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = ctx->r14;
    // 0x8033CDA4: nop

    // 0x8033CDA8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8033CDAC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033CDB0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033CDB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033CDB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033CDBC: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033CDC0: nop

    // 0x8033CDC4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8033CDC8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8033CDCC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8033CDD0: sh          $t9, 0xBA($t7)
    MEM_H(0XBA, ctx->r15) = ctx->r25;
    // 0x8033CDD4: nop

    // 0x8033CDD8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8033CDDC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033CDE0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8033CDE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033CDE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033CDEC: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033CDF0: nop

    // 0x8033CDF4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8033CDF8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x8033CDFC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8033CE00: sh          $t2, 0xBC($t0)
    MEM_H(0XBC, ctx->r8) = ctx->r10;
    // 0x8033CE04: nop

    // 0x8033CE08: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033CE0C: nop

    // 0x8033CE10: sh          $zero, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = 0;
    // 0x8033CE14: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033CE18: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8033CE1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033CE20: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033CE24: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8033CE28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033CE2C: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033CE30: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8033CE34: lwc1        $f14, 0x4($t5)
    ctx->f14.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8033CE38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8033CE3C: jal         0x8002AE38
    // 0x8033CE40: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    func_8002AE38(rdram, ctx);
        goto after_0;
    // 0x8033CE40: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_0:
    // 0x8033CE44: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8033CE48: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033CE4C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x8033CE50: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8033CE54: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033CE58: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x8033CE5C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033CE60: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033CE64: lh          $t9, 0x4250($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4250);
    // 0x8033CE68: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033CE6C: bne         $t9, $at, L_8033CE98
    if (ctx->r25 != ctx->r1) {
        // 0x8033CE70: nop
    
            goto L_8033CE98;
    }
    // 0x8033CE70: nop

    // 0x8033CE74: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033CE78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033CE7C: lh          $t1, 0xE8($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XE8);
    // 0x8033CE80: nop

    // 0x8033CE84: beq         $t1, $at, L_8033CE98
    if (ctx->r9 == ctx->r1) {
        // 0x8033CE88: nop
    
            goto L_8033CE98;
    }
    // 0x8033CE88: nop

    // 0x8033CE8C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8033CE90: jal         0x800281A4
    // 0x8033CE94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x8033CE94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8033CE98:
    // 0x8033CE98: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033CE9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CEA0: lh          $t0, 0xB6($t2)
    ctx->r8 = MEM_H(ctx->r10, 0XB6);
    // 0x8033CEA4: nop

    // 0x8033CEA8: bne         $t0, $at, L_8033CF14
    if (ctx->r8 != ctx->r1) {
        // 0x8033CEAC: nop
    
            goto L_8033CF14;
    }
    // 0x8033CEAC: nop

    // 0x8033CEB0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033CEB4: nop

    // 0x8033CEB8: lh          $t5, 0xB8($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XB8);
    // 0x8033CEBC: nop

    // 0x8033CEC0: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8033CEC4: nop

    // 0x8033CEC8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033CECC: swc1        $f16, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f16.u32l;
    // 0x8033CED0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033CED4: nop

    // 0x8033CED8: lh          $t4, 0xBA($t6)
    ctx->r12 = MEM_H(ctx->r14, 0XBA);
    // 0x8033CEDC: nop

    // 0x8033CEE0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8033CEE4: nop

    // 0x8033CEE8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033CEEC: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x8033CEF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033CEF4: nop

    // 0x8033CEF8: lh          $t9, 0xBC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XBC);
    // 0x8033CEFC: nop

    // 0x8033CF00: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8033CF04: nop

    // 0x8033CF08: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033CF0C: b           L_8033CF6C
    // 0x8033CF10: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
        goto L_8033CF6C;
    // 0x8033CF10: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
L_8033CF14:
    // 0x8033CF14: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF18: nop

    // 0x8033CF1C: lh          $t1, 0xBE($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XBE);
    // 0x8033CF20: nop

    // 0x8033CF24: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x8033CF28: beq         $at, $zero, L_8033CF50
    if (ctx->r1 == 0) {
        // 0x8033CF2C: nop
    
            goto L_8033CF50;
    }
    // 0x8033CF2C: nop

    // 0x8033CF30: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF34: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033CF38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033CF3C: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033CF40: nop

    // 0x8033CF44: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033CF48: b           L_8033CF6C
    // 0x8033CF4C: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
        goto L_8033CF6C;
    // 0x8033CF4C: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
L_8033CF50:
    // 0x8033CF50: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF54: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8033CF58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033CF5C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033CF60: nop

    // 0x8033CF64: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033CF68: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_8033CF6C:
    // 0x8033CF6C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF70: nop

    // 0x8033CF74: lh          $t3, 0xBE($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XBE);
    // 0x8033CF78: nop

    // 0x8033CF7C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033CF80: sh          $t4, 0xBE($t5)
    MEM_H(0XBE, ctx->r13) = ctx->r12;
    // 0x8033CF84: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033CF88: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033CF8C: lh          $t9, 0xBE($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XBE);
    // 0x8033CF90: nop

    // 0x8033CF94: bne         $t9, $at, L_8033CFA8
    if (ctx->r25 != ctx->r1) {
        // 0x8033CF98: nop
    
            goto L_8033CFA8;
    }
    // 0x8033CF98: nop

    // 0x8033CF9C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033CFA0: nop

    // 0x8033CFA4: sh          $zero, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = 0;
L_8033CFA8:
    // 0x8033CFA8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033CFAC: nop

    // 0x8033CFB0: lh          $t1, 0xB6($t7)
    ctx->r9 = MEM_H(ctx->r15, 0XB6);
    // 0x8033CFB4: nop

    // 0x8033CFB8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8033CFBC: sh          $t2, 0xB6($t7)
    MEM_H(0XB6, ctx->r15) = ctx->r10;
L_8033CFC0:
    // 0x8033CFC0: b           L_8033CFC8
    // 0x8033CFC4: nop

        goto L_8033CFC8;
    // 0x8033CFC4: nop

L_8033CFC8:
    // 0x8033CFC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CFCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033CFD0: jr          $ra
    // 0x8033CFD4: nop

    return;
    // 0x8033CFD4: nop

;}
RECOMP_FUNC void func_8033A384_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A384: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033A388: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A38C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A390: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A394: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A398: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A39C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A3A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A3A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A3A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A3AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A3B0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033A3B4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A3B8: nop

    // 0x8033A3BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A3C0: nop

    // 0x8033A3C4: bne         $t1, $zero, L_8033A3F8
    if (ctx->r9 != 0) {
        // 0x8033A3C8: nop
    
            goto L_8033A3F8;
    }
    // 0x8033A3C8: nop

    // 0x8033A3CC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A3D0: nop

    // 0x8033A3D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A3D8: nop

    // 0x8033A3DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A3E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A3E4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033A3E8: nop

    // 0x8033A3EC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A3F0: nop

    // 0x8033A3F4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033A3F8:
    // 0x8033A3F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033A3FC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033A400: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8033A404: lwc1        $f4, 0x2C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033A408: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8033A40C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033A410: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033A414: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033A418: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033A41C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8033A420: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
    // 0x8033A424: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033A428: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8033A42C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033A430: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A434: lwc1        $f18, 0x0($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033A438: nop

    // 0x8033A43C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033A440: nop

    // 0x8033A444: bc1f        L_8033A49C
    if (!c1cs) {
        // 0x8033A448: nop
    
            goto L_8033A49C;
    }
    // 0x8033A448: nop

    // 0x8033A44C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A450: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033A454: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A458: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033A45C: nop

    // 0x8033A460: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8033A464: nop

    // 0x8033A468: bc1f        L_8033A480
    if (!c1cs) {
        // 0x8033A46C: nop
    
            goto L_8033A480;
    }
    // 0x8033A46C: nop

    // 0x8033A470: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033A474: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033A478: b           L_8033A494
    // 0x8033A47C: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
        goto L_8033A494;
    // 0x8033A47C: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
L_8033A480:
    // 0x8033A480: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8033A484: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A488: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033A48C: nop

    // 0x8033A490: swc1        $f16, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f16.u32l;
L_8033A494:
    // 0x8033A494: b           L_8033A524
    // 0x8033A498: nop

        goto L_8033A524;
    // 0x8033A498: nop

L_8033A49C:
    // 0x8033A49C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033A4A0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8033A4A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A4A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A4AC: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033A4B0: nop

    // 0x8033A4B4: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x8033A4B8: nop

    // 0x8033A4BC: bc1f        L_8033A514
    if (!c1cs) {
        // 0x8033A4C0: nop
    
            goto L_8033A514;
    }
    // 0x8033A4C0: nop

    // 0x8033A4C4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A4C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A4CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A4D0: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033A4D4: nop

    // 0x8033A4D8: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033A4DC: nop

    // 0x8033A4E0: bc1f        L_8033A4F8
    if (!c1cs) {
        // 0x8033A4E4: nop
    
            goto L_8033A4F8;
    }
    // 0x8033A4E4: nop

    // 0x8033A4E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033A4EC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033A4F0: b           L_8033A50C
    // 0x8033A4F4: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
        goto L_8033A50C;
    // 0x8033A4F4: swc1        $f10, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f10.u32l;
L_8033A4F8:
    // 0x8033A4F8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033A4FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A500: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033A504: nop

    // 0x8033A508: swc1        $f16, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f16.u32l;
L_8033A50C:
    // 0x8033A50C: b           L_8033A524
    // 0x8033A510: nop

        goto L_8033A524;
    // 0x8033A510: nop

L_8033A514:
    // 0x8033A514: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A518: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033A51C: nop

    // 0x8033A520: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
L_8033A524:
    // 0x8033A524: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033A528: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8033A52C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8033A530: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033A534: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033A538: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8033A53C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033A540: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033A544: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8033A548: nop

    // 0x8033A54C: bc1f        L_8033A56C
    if (!c1cs) {
        // 0x8033A550: nop
    
            goto L_8033A56C;
    }
    // 0x8033A550: nop

    // 0x8033A554: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033A558: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8033A55C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033A560: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033A564: nop

    // 0x8033A568: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033A56C:
    // 0x8033A56C: b           L_8033A574
    // 0x8033A570: nop

        goto L_8033A574;
    // 0x8033A570: nop

L_8033A574:
    // 0x8033A574: jr          $ra
    // 0x8033A578: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033A578: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033A000_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A008: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033A00C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033A010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033A014: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033A018: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033A01C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033A020: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033A024: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033A028: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033A02C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033A030: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033A034: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033A038: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033A03C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033A040: addiu       $a1, $a1, 0x45A0
    ctx->r5 = ADD32(ctx->r5, 0X45A0);
    // 0x8033A044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033A048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033A04C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033A050: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033A054: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033A058: jal         0x80027464
    // 0x8033A05C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033A05C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033A060: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033A064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A068: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A06C: beq         $t1, $at, L_8033A11C
    if (ctx->r9 == ctx->r1) {
        // 0x8033A070: nop
    
            goto L_8033A11C;
    }
    // 0x8033A070: nop

    // 0x8033A074: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033A078: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8033A07C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033A080: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A084: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x8033A088: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033A08C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033A090: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8033A094: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033A098: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A09C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033A0A0: sh          $t3, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r11;
    // 0x8033A0A4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8033A0A8: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x8033A0AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A0B0: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x8033A0B4: nop

    // 0x8033A0B8: bne         $t8, $at, L_8033A0E8
    if (ctx->r24 != ctx->r1) {
        // 0x8033A0BC: nop
    
            goto L_8033A0E8;
    }
    // 0x8033A0BC: nop

    // 0x8033A0C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A0C8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033A0CC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033A0D0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A0D4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033A0D8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A0DC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033A0E0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8033A0E4: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_8033A0E8:
    // 0x8033A0E8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033A0EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A0F0: addiu       $a3, $a3, -0x6518
    ctx->r7 = ADD32(ctx->r7, -0X6518);
    // 0x8033A0F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A0F8: jal         0x8001ABF4
    // 0x8033A0FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033A0FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8033A100: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033A104: addiu       $a3, $a3, -0x6518
    ctx->r7 = ADD32(ctx->r7, -0X6518);
    // 0x8033A108: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033A10C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8033A110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8033A114: jal         0x8001ABF4
    // 0x8033A118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8033A118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8033A11C:
    // 0x8033A11C: b           L_8033A124
    // 0x8033A120: nop

        goto L_8033A124;
    // 0x8033A120: nop

L_8033A124:
    // 0x8033A124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A12C: jr          $ra
    // 0x8033A130: nop

    return;
    // 0x8033A130: nop

;}
RECOMP_FUNC void func_8033CA80_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CA80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033CA84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033CA88: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033CA8C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033CA90: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033CA94: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033CA98: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033CA9C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033CAA0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033CAA4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033CAA8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033CAAC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033CAB0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033CAB4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033CAB8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033CABC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033CAC0: addiu       $a1, $a1, 0x45E8
    ctx->r5 = ADD32(ctx->r5, 0X45E8);
    // 0x8033CAC4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033CAC8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033CACC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8033CAD0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033CAD4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033CAD8: jal         0x80027464
    // 0x8033CADC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033CADC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033CAE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033CAE4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033CAE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033CAEC: beq         $t1, $at, L_8033CB80
    if (ctx->r9 == ctx->r1) {
        // 0x8033CAF0: nop
    
            goto L_8033CB80;
    }
    // 0x8033CAF0: nop

    // 0x8033CAF4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033CAF8: lui         $a1, 0x8034
    ctx->r5 = S32(0X8034 << 16);
    // 0x8033CAFC: jal         0x80027B34
    // 0x8033CB00: addiu       $a1, $a1, -0x1D60
    ctx->r5 = ADD32(ctx->r5, -0X1D60);
    func_80027B34(rdram, ctx);
        goto after_1;
    // 0x8033CB00: addiu       $a1, $a1, -0x1D60
    ctx->r5 = ADD32(ctx->r5, -0X1D60);
    after_1:
    // 0x8033CB04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033CB08: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x8033CB0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033CB10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033CB14: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033CB18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033CB1C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033CB20: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x8033CB24: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x8033CB28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033CB2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033CB30: jal         0x80019448
    // 0x8033CB34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x8033CB34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8033CB38: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033CB3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CB40: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033CB44: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033CB48: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033CB4C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033CB50: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033CB54: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033CB58: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x8033CB5C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033CB60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033CB64: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033CB68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033CB6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033CB70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033CB74: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033CB78: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033CB7C: sh          $zero, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = 0;
L_8033CB80:
    // 0x8033CB80: b           L_8033CB88
    // 0x8033CB84: nop

        goto L_8033CB88;
    // 0x8033CB84: nop

L_8033CB88:
    // 0x8033CB88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033CB8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033CB90: jr          $ra
    // 0x8033CB94: nop

    return;
    // 0x8033CB94: nop

;}
RECOMP_FUNC void func_8033A57C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A57C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033A580: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A584: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A588: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A58C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A590: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A594: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A59C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A5A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A5A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A5A8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033A5AC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A5B0: nop

    // 0x8033A5B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A5B8: nop

    // 0x8033A5BC: bne         $t1, $zero, L_8033A5FC
    if (ctx->r9 != 0) {
        // 0x8033A5C0: nop
    
            goto L_8033A5FC;
    }
    // 0x8033A5C0: nop

    // 0x8033A5C4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A5C8: nop

    // 0x8033A5CC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A5D0: nop

    // 0x8033A5D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A5D8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A5DC: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033A5E0: nop

    // 0x8033A5E4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A5E8: nop

    // 0x8033A5EC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A5F0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033A5F4: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x8033A5F8: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_8033A5FC:
    // 0x8033A5FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033A600: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8033A604: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A608: lwc1        $f4, 0x2C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x8033A60C: nop

    // 0x8033A610: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x8033A614: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033A618: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033A61C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033A620: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A624: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033A628: nop

    // 0x8033A62C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8033A630: nop

    // 0x8033A634: bc1f        L_8033A68C
    if (!c1cs) {
        // 0x8033A638: nop
    
            goto L_8033A68C;
    }
    // 0x8033A638: nop

    // 0x8033A63C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033A640: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033A644: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A648: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8033A64C: nop

    // 0x8033A650: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033A654: nop

    // 0x8033A658: bc1f        L_8033A670
    if (!c1cs) {
        // 0x8033A65C: nop
    
            goto L_8033A670;
    }
    // 0x8033A65C: nop

    // 0x8033A660: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A664: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8033A668: b           L_8033A684
    // 0x8033A66C: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
        goto L_8033A684;
    // 0x8033A66C: swc1        $f18, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f18.u32l;
L_8033A670:
    // 0x8033A670: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8033A674: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A678: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A67C: nop

    // 0x8033A680: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
L_8033A684:
    // 0x8033A684: b           L_8033A714
    // 0x8033A688: nop

        goto L_8033A714;
    // 0x8033A688: nop

L_8033A68C:
    // 0x8033A68C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A690: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8033A694: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A698: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A69C: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033A6A0: nop

    // 0x8033A6A4: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033A6A8: nop

    // 0x8033A6AC: bc1f        L_8033A704
    if (!c1cs) {
        // 0x8033A6B0: nop
    
            goto L_8033A704;
    }
    // 0x8033A6B0: nop

    // 0x8033A6B4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033A6B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A6BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A6C0: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033A6C4: nop

    // 0x8033A6C8: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033A6CC: nop

    // 0x8033A6D0: bc1f        L_8033A6E8
    if (!c1cs) {
        // 0x8033A6D4: nop
    
            goto L_8033A6E8;
    }
    // 0x8033A6D4: nop

    // 0x8033A6D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A6DC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033A6E0: b           L_8033A6FC
    // 0x8033A6E4: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
        goto L_8033A6FC;
    // 0x8033A6E4: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
L_8033A6E8:
    // 0x8033A6E8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033A6EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A6F0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033A6F4: nop

    // 0x8033A6F8: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
L_8033A6FC:
    // 0x8033A6FC: b           L_8033A714
    // 0x8033A700: nop

        goto L_8033A714;
    // 0x8033A700: nop

L_8033A704:
    // 0x8033A704: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A708: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8033A70C: nop

    // 0x8033A710: swc1        $f6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f6.u32l;
L_8033A714:
    // 0x8033A714: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A718: nop

    // 0x8033A71C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033A720: nop

    // 0x8033A724: bne         $t1, $zero, L_8033A744
    if (ctx->r9 != 0) {
        // 0x8033A728: nop
    
            goto L_8033A744;
    }
    // 0x8033A728: nop

    // 0x8033A72C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8033A730: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8033A734: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033A738: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A73C: b           L_8033A75C
    // 0x8033A740: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_8033A75C;
    // 0x8033A740: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8033A744:
    // 0x8033A744: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033A748: nop

    // 0x8033A74C: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x8033A750: nop

    // 0x8033A754: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x8033A758: sh          $t7, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r15;
L_8033A75C:
    // 0x8033A75C: b           L_8033A764
    // 0x8033A760: nop

        goto L_8033A764;
    // 0x8033A760: nop

L_8033A764:
    // 0x8033A764: jr          $ra
    // 0x8033A768: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033A768: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033AC24_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AC24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033AC28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033AC2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033AC30: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033AC34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033AC38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033AC3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AC40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033AC44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033AC48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033AC4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033AC50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033AC54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033AC58: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AC5C: nop

    // 0x8033AC60: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033AC64: nop

    // 0x8033AC68: bne         $t1, $zero, L_8033ACB4
    if (ctx->r9 != 0) {
        // 0x8033AC6C: nop
    
            goto L_8033ACB4;
    }
    // 0x8033AC6C: nop

    // 0x8033AC70: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AC74: nop

    // 0x8033AC78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033AC7C: nop

    // 0x8033AC80: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033AC84: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033AC88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033AC8C: nop

    // 0x8033AC90: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033AC94: nop

    // 0x8033AC98: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033AC9C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033ACA0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8033ACA4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x8033ACA8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033ACAC: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x8033ACB0: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_8033ACB4:
    // 0x8033ACB4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033ACB8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033ACBC: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033ACC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033ACC4: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033ACC8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033ACCC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033ACD0: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
    // 0x8033ACD4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033ACD8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8033ACDC: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033ACE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033ACE4: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033ACE8: nop

    // 0x8033ACEC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033ACF0: nop

    // 0x8033ACF4: bc1f        L_8033AD4C
    if (!c1cs) {
        // 0x8033ACF8: nop
    
            goto L_8033AD4C;
    }
    // 0x8033ACF8: nop

    // 0x8033ACFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD00: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033AD04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033AD08: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033AD0C: nop

    // 0x8033AD10: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033AD14: nop

    // 0x8033AD18: bc1f        L_8033AD30
    if (!c1cs) {
        // 0x8033AD1C: nop
    
            goto L_8033AD30;
    }
    // 0x8033AD1C: nop

    // 0x8033AD20: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AD24: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD28: b           L_8033AD44
    // 0x8033AD2C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
        goto L_8033AD44;
    // 0x8033AD2C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
L_8033AD30:
    // 0x8033AD30: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8033AD34: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033AD38: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD3C: nop

    // 0x8033AD40: swc1        $f8, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f8.u32l;
L_8033AD44:
    // 0x8033AD44: b           L_8033ADD4
    // 0x8033AD48: nop

        goto L_8033ADD4;
    // 0x8033AD48: nop

L_8033AD4C:
    // 0x8033AD4C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033AD50: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033AD54: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033AD58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033AD5C: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8033AD60: nop

    // 0x8033AD64: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033AD68: nop

    // 0x8033AD6C: bc1f        L_8033ADC4
    if (!c1cs) {
        // 0x8033AD70: nop
    
            goto L_8033ADC4;
    }
    // 0x8033AD70: nop

    // 0x8033AD74: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD78: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033AD7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033AD80: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033AD84: nop

    // 0x8033AD88: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x8033AD8C: nop

    // 0x8033AD90: bc1f        L_8033ADA8
    if (!c1cs) {
        // 0x8033AD94: nop
    
            goto L_8033ADA8;
    }
    // 0x8033AD94: nop

    // 0x8033AD98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AD9C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033ADA0: b           L_8033ADBC
    // 0x8033ADA4: swc1        $f6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f6.u32l;
        goto L_8033ADBC;
    // 0x8033ADA4: swc1        $f6, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f6.u32l;
L_8033ADA8:
    // 0x8033ADA8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033ADAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033ADB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033ADB4: nop

    // 0x8033ADB8: swc1        $f8, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f8.u32l;
L_8033ADBC:
    // 0x8033ADBC: b           L_8033ADD4
    // 0x8033ADC0: nop

        goto L_8033ADD4;
    // 0x8033ADC0: nop

L_8033ADC4:
    // 0x8033ADC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033ADC8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033ADCC: nop

    // 0x8033ADD0: swc1        $f10, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f10.u32l;
L_8033ADD4:
    // 0x8033ADD4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033ADD8: nop

    // 0x8033ADDC: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x8033ADE0: nop

    // 0x8033ADE4: bne         $t4, $zero, L_8033B048
    if (ctx->r12 != 0) {
        // 0x8033ADE8: nop
    
            goto L_8033B048;
    }
    // 0x8033ADE8: nop

    // 0x8033ADEC: lh          $t2, 0xC0($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XC0);
    // 0x8033ADF0: nop

    // 0x8033ADF4: bne         $t2, $zero, L_8033B048
    if (ctx->r10 != 0) {
        // 0x8033ADF8: nop
    
            goto L_8033B048;
    }
    // 0x8033ADF8: nop

    // 0x8033ADFC: lh          $t6, 0xBE($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XBE);
    // 0x8033AE00: nop

    // 0x8033AE04: bne         $t6, $zero, L_8033B048
    if (ctx->r14 != 0) {
        // 0x8033AE08: nop
    
            goto L_8033B048;
    }
    // 0x8033AE08: nop

    // 0x8033AE0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE10: nop

    // 0x8033AE14: lh          $t7, 0xA6($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA6);
    // 0x8033AE18: nop

    // 0x8033AE1C: bgtz        $t7, L_8033AE3C
    if (SIGNED(ctx->r15) > 0) {
        // 0x8033AE20: nop
    
            goto L_8033AE3C;
    }
    // 0x8033AE20: nop

    // 0x8033AE24: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE28: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8033AE2C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x8033AE30: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE34: b           L_8033B048
    // 0x8033AE38: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_8033B048;
    // 0x8033AE38: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_8033AE3C:
    // 0x8033AE3C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE40: nop

    // 0x8033AE44: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x8033AE48: nop

    // 0x8033AE4C: bne         $t4, $zero, L_8033B00C
    if (ctx->r12 != 0) {
        // 0x8033AE50: nop
    
            goto L_8033B00C;
    }
    // 0x8033AE50: nop

    // 0x8033AE54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033AE58: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE5C: nop

    // 0x8033AE60: swc1        $f16, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f16.u32l;
    // 0x8033AE64: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033AE68: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033AE6C: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033AE70: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x8033AE74: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x8033AE78: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033AE7C: lwc1        $f4, 0x3C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033AE80: addiu       $a1, $a1, 0x45C4
    ctx->r5 = ADD32(ctx->r5, 0X45C4);
    // 0x8033AE84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033AE88: jal         0x80027464
    // 0x8033AE8C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033AE8C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8033AE90: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033AE94: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8033AE98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033AE9C: beq         $t6, $at, L_8033AEE0
    if (ctx->r14 == ctx->r1) {
        // 0x8033AEA0: nop
    
            goto L_8033AEE0;
    }
    // 0x8033AEA0: nop

    // 0x8033AEA4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033AEA8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033AEAC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033AEB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033AEB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033AEB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033AEBC: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8033AEC0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033AEC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AEC8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8033AECC: sh          $t5, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r13;
    // 0x8033AED0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033AED4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AED8: nop

    // 0x8033AEDC: sh          $t9, 0xC2($t0)
    MEM_H(0XC2, ctx->r8) = ctx->r25;
L_8033AEE0:
    // 0x8033AEE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033AEE4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033AEE8: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033AEEC: lw          $a2, 0x0($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X0);
    // 0x8033AEF0: lw          $a3, 0x4($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X4);
    // 0x8033AEF4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8033AEF8: lwc1        $f8, 0x3C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033AEFC: addiu       $a1, $a1, 0x45AC
    ctx->r5 = ADD32(ctx->r5, 0X45AC);
    // 0x8033AF00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033AF04: jal         0x80027464
    // 0x8033AF08: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x8033AF08: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8033AF0C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033AF10: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033AF14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033AF18: beq         $t4, $at, L_8033AF5C
    if (ctx->r12 == ctx->r1) {
        // 0x8033AF1C: nop
    
            goto L_8033AF5C;
    }
    // 0x8033AF1C: nop

    // 0x8033AF20: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8033AF24: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033AF28: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8033AF2C: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033AF30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033AF34: addu        $t6, $t6, $t3
    ctx->r14 = ADD32(ctx->r14, ctx->r11);
    // 0x8033AF38: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8033AF3C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033AF40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AF44: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033AF48: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x8033AF4C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8033AF50: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033AF54: nop

    // 0x8033AF58: sh          $t7, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = ctx->r15;
L_8033AF5C:
    // 0x8033AF5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033AF60: lui         $at, 0x44C3
    ctx->r1 = S32(0X44C3 << 16);
    // 0x8033AF64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033AF68: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033AF6C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x8033AF70: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033AF74: lw          $a3, 0x4($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X4);
    // 0x8033AF78: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033AF7C: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033AF80: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033AF84: addiu       $a1, $a1, 0x45B8
    ctx->r5 = ADD32(ctx->r5, 0X45B8);
    // 0x8033AF88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033AF8C: jal         0x80027464
    // 0x8033AF90: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x8033AF90: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8033AF94: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8033AF98: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8033AF9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033AFA0: beq         $t9, $at, L_8033AFE4
    if (ctx->r25 == ctx->r1) {
        // 0x8033AFA4: nop
    
            goto L_8033AFE4;
    }
    // 0x8033AFA4: nop

    // 0x8033AFA8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8033AFAC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033AFB0: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8033AFB4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8033AFB8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033AFBC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8033AFC0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033AFC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033AFC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033AFCC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033AFD0: sh          $t0, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r8;
    // 0x8033AFD4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8033AFD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AFDC: nop

    // 0x8033AFE0: sh          $t3, 0xBE($t2)
    MEM_H(0XBE, ctx->r10) = ctx->r11;
L_8033AFE4:
    // 0x8033AFE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AFE8: nop

    // 0x8033AFEC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8033AFF0: nop

    // 0x8033AFF4: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x8033AFF8: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x8033AFFC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033B000: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8033B004: b           L_8033B048
    // 0x8033B008: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
        goto L_8033B048;
    // 0x8033B008: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
L_8033B00C:
    // 0x8033B00C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B010: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B014: jal         0x8002A8B4
    // 0x8033B018: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x8033B018: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_3:
    // 0x8033B01C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B020: nop

    // 0x8033B024: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033B028: nop

    // 0x8033B02C: swc1        $f6, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f6.u32l;
    // 0x8033B030: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B034: nop

    // 0x8033B038: lh          $t4, 0xA8($t0)
    ctx->r12 = MEM_H(ctx->r8, 0XA8);
    // 0x8033B03C: nop

    // 0x8033B040: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x8033B044: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
L_8033B048:
    // 0x8033B048: b           L_8033B050
    // 0x8033B04C: nop

        goto L_8033B050;
    // 0x8033B04C: nop

L_8033B050:
    // 0x8033B050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B058: jr          $ra
    // 0x8033B05C: nop

    return;
    // 0x8033B05C: nop

;}
RECOMP_FUNC void func_8033B8FC_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B8FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033B900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B904: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B908: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B90C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B910: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B914: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B918: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B91C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B920: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B924: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B928: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B92C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033B930: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033B934: nop

    // 0x8033B938: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B93C: nop

    // 0x8033B940: bne         $t1, $zero, L_8033B9C8
    if (ctx->r9 != 0) {
        // 0x8033B944: nop
    
            goto L_8033B9C8;
    }
    // 0x8033B944: nop

    // 0x8033B948: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033B94C: nop

    // 0x8033B950: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B954: nop

    // 0x8033B958: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B95C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B960: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033B964: nop

    // 0x8033B968: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B96C: nop

    // 0x8033B970: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B97C: jal         0x8001BB34
    // 0x8033B980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033B980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8033B984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B988: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B98C: addiu       $t7, $t7, -0x64E0
    ctx->r15 = ADD32(ctx->r15, -0X64E0);
    // 0x8033B990: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B994: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B99C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033B9A0: jal         0x8001C0EC
    // 0x8033B9A4: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033B9A4: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    after_1:
    // 0x8033B9A8: lui         $at, 0x439C
    ctx->r1 = S32(0X439C << 16);
    // 0x8033B9AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B9B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033B9B4: nop

    // 0x8033B9B8: swc1        $f4, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f4.u32l;
    // 0x8033B9BC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033B9C0: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x8033B9C4: sh          $t9, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r25;
L_8033B9C8:
    // 0x8033B9C8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033B9CC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B9D0: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8033B9D4: lwc1        $f11, -0x1D30($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X1D30);
    // 0x8033B9D8: lwc1        $f10, -0x1D2C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1D2C);
    // 0x8033B9DC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033B9E0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8033B9E4: jal         0x80034970
    // 0x8033B9E8: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x8033B9E8: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x8033B9EC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033B9F0: nop

    // 0x8033B9F4: lwc1        $f18, 0xD4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x8033B9F8: nop

    // 0x8033B9FC: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8033BA00: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8033BA04: nop

    // 0x8033BA08: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8033BA0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033BA10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033BA14: nop

    // 0x8033BA18: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033BA1C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x8033BA20: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8033BA24: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8033BA28: nop

    // 0x8033BA2C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BA30: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BA34: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033BA38: lwc1        $f17, -0x1D28($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1D28);
    // 0x8033BA3C: lwc1        $f16, -0x1D24($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1D24);
    // 0x8033BA40: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033BA44: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033BA48: jal         0x80036570
    // 0x8033BA4C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_3;
    // 0x8033BA4C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_3:
    // 0x8033BA50: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033BA54: nop

    // 0x8033BA58: lwc1        $f4, 0xD4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XD4);
    // 0x8033BA5C: nop

    // 0x8033BA60: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8033BA64: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8033BA68: nop

    // 0x8033BA6C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8033BA70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033BA74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033BA78: nop

    // 0x8033BA7C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8033BA80: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8033BA84: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8033BA88: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8033BA8C: nop

    // 0x8033BA90: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033BA94: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BA98: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x8033BA9C: lwc1        $f19, -0x1D20($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X1D20);
    // 0x8033BAA0: lwc1        $f18, -0x1D1C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1D1C);
    // 0x8033BAA4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8033BAA8: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033BAAC: jal         0x80034970
    // 0x8033BAB0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x8033BAB0: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_4:
    // 0x8033BAB4: lui         $at, 0x44C3
    ctx->r1 = S32(0X44C3 << 16);
    // 0x8033BAB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033BABC: nop

    // 0x8033BAC0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8033BAC4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8033BAC8: nop

    // 0x8033BACC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8033BAD0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033BAD4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033BAD8: nop

    // 0x8033BADC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8033BAE0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x8033BAE4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8033BAE8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8033BAEC: nop

    // 0x8033BAF0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033BAF4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033BAF8: lwc1        $f16, 0x3C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033BAFC: lwc1        $f5, -0x1D18($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1D18);
    // 0x8033BB00: lwc1        $f4, -0x1D14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1D14);
    // 0x8033BB04: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8033BB08: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8033BB0C: jal         0x80036570
    // 0x8033BB10: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x8033BB10: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_5:
    // 0x8033BB14: lui         $at, 0x44C3
    ctx->r1 = S32(0X44C3 << 16);
    // 0x8033BB18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033BB1C: nop

    // 0x8033BB20: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8033BB24: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8033BB28: nop

    // 0x8033BB2C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8033BB30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033BB34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033BB38: nop

    // 0x8033BB3C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8033BB40: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8033BB44: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8033BB48: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8033BB4C: nop

    // 0x8033BB50: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BB54: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x8033BB58: lh          $t5, 0xA6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XA6);
    // 0x8033BB5C: nop

    // 0x8033BB60: bne         $t5, $at, L_8033BBA4
    if (ctx->r13 != ctx->r1) {
        // 0x8033BB64: nop
    
            goto L_8033BBA4;
    }
    // 0x8033BB64: nop

    // 0x8033BB68: lui         $at, 0x44C3
    ctx->r1 = S32(0X44C3 << 16);
    // 0x8033BB6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033BB70: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033BB74: nop

    // 0x8033BB78: swc1        $f18, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f18.u32l;
    // 0x8033BB7C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033BB80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033BB84: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x8033BB88: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033BB8C: nop

    // 0x8033BB90: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8033BB94: nop

    // 0x8033BB98: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x8033BB9C: b           L_8033BC20
    // 0x8033BBA0: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
        goto L_8033BC20;
    // 0x8033BBA0: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_8033BBA4:
    // 0x8033BBA4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033BBA8: nop

    // 0x8033BBAC: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x8033BBB0: nop

    // 0x8033BBB4: bne         $t2, $zero, L_8033BC08
    if (ctx->r10 != 0) {
        // 0x8033BBB8: nop
    
            goto L_8033BC08;
    }
    // 0x8033BBB8: nop

    // 0x8033BBBC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BBC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033BBC4: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x8033BBC8: nop

    // 0x8033BBCC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033BBD0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033BBD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033BBD8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033BBDC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033BBE0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033BBE4: sh          $zero, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = 0;
    // 0x8033BBE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033BBEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033BBF0: jal         0x8002B114
    // 0x8033BBF4: nop

    func_8002B114(rdram, ctx);
        goto after_6;
    // 0x8033BBF4: nop

    after_6:
    // 0x8033BBF8: b           L_8033BD5C
    // 0x8033BBFC: nop

        goto L_8033BD5C;
    // 0x8033BBFC: nop

    // 0x8033BC00: b           L_8033BC20
    // 0x8033BC04: nop

        goto L_8033BC20;
    // 0x8033BC04: nop

L_8033BC08:
    // 0x8033BC08: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033BC0C: nop

    // 0x8033BC10: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x8033BC14: nop

    // 0x8033BC18: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8033BC1C: sh          $t1, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r9;
L_8033BC20:
    // 0x8033BC20: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033BC24: nop

    // 0x8033BC28: lh          $t0, 0xA8($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XA8);
    // 0x8033BC2C: nop

    // 0x8033BC30: bne         $t0, $zero, L_8033BC54
    if (ctx->r8 != 0) {
        // 0x8033BC34: nop
    
            goto L_8033BC54;
    }
    // 0x8033BC34: nop

    // 0x8033BC38: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033BC3C: lui         $at, 0x439C
    ctx->r1 = S32(0X439C << 16);
    // 0x8033BC40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033BC44: lwc1        $f4, 0xD4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x8033BC48: nop

    // 0x8033BC4C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033BC50: swc1        $f8, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f8.u32l;
L_8033BC54:
    // 0x8033BC54: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033BC58: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033BC5C: lh          $t6, 0xC2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XC2);
    // 0x8033BC60: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033BC64: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8033BC68: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033BC6C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033BC70: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x8033BC74: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033BC78: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8033BC7C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8033BC80: lwc1        $f10, 0x24($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8033BC84: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033BC88: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8033BC8C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8033BC90: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033BC94: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8033BC98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033BC9C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033BCA0: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8033BCA4: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8033BCA8: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x8033BCAC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033BCB0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8033BCB4: lh          $t0, 0xC2($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XC2);
    // 0x8033BCB8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8033BCBC: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x8033BCC0: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8033BCC4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033BCC8: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x8033BCCC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033BCD0: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x8033BCD4: lwc1        $f18, 0x28($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X28);
    // 0x8033BCD8: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8033BCDC: nop

    // 0x8033BCE0: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8033BCE4: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    // 0x8033BCE8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033BCEC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033BCF0: lh          $t9, 0xC2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XC2);
    // 0x8033BCF4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033BCF8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8033BCFC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8033BD00: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033BD04: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8033BD08: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033BD0C: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x8033BD10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033BD14: lwc1        $f8, 0x2C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x8033BD18: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033BD1C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033BD20: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x8033BD24: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8033BD28: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x8033BD2C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033BD30: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033BD34: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033BD38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033BD3C: swc1        $f18, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f18.u32l;
    // 0x8033BD40: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033BD44: nop

    // 0x8033BD48: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x8033BD4C: nop

    // 0x8033BD50: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x8033BD54: b           L_8033BD5C
    // 0x8033BD58: nop

        goto L_8033BD5C;
    // 0x8033BD58: nop

L_8033BD5C:
    // 0x8033BD5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033BD60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033BD64: jr          $ra
    // 0x8033BD68: nop

    return;
    // 0x8033BD68: nop

;}
RECOMP_FUNC void func_8033B060_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B060: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033B064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033B068: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B06C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B070: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B07C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B084: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B088: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B08C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B090: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033B094: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B098: nop

    // 0x8033B09C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B0A0: nop

    // 0x8033B0A4: bne         $t1, $zero, L_8033B0EC
    if (ctx->r9 != 0) {
        // 0x8033B0A8: nop
    
            goto L_8033B0EC;
    }
    // 0x8033B0A8: nop

    // 0x8033B0AC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B0B0: nop

    // 0x8033B0B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B0B8: nop

    // 0x8033B0BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B0C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B0C4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B0C8: nop

    // 0x8033B0CC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B0D0: nop

    // 0x8033B0D4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B0D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033B0DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033B0E0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B0E4: nop

    // 0x8033B0E8: swc1        $f4, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f4.u32l;
L_8033B0EC:
    // 0x8033B0EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033B0F0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8033B0F4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B0F8: lwc1        $f6, 0x2C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033B0FC: nop

    // 0x8033B100: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
    // 0x8033B104: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B108: lui         $at, 0x4516
    ctx->r1 = S32(0X4516 << 16);
    // 0x8033B10C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033B110: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033B114: nop

    // 0x8033B118: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8033B11C: nop

    // 0x8033B120: bc1f        L_8033B148
    if (!c1cs) {
        // 0x8033B124: nop
    
            goto L_8033B148;
    }
    // 0x8033B124: nop

    // 0x8033B128: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B12C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B130: jal         0x80017B3C
    // 0x8033B134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_0;
    // 0x8033B134: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033B138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B13C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B140: jal         0x8002B114
    // 0x8033B144: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x8033B144: nop

    after_1:
L_8033B148:
    // 0x8033B148: b           L_8033B150
    // 0x8033B14C: nop

        goto L_8033B150;
    // 0x8033B14C: nop

L_8033B150:
    // 0x8033B150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033B154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033B158: jr          $ra
    // 0x8033B15C: nop

    return;
    // 0x8033B15C: nop

;}
RECOMP_FUNC void func_8033E1F4_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033E1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033E1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033E1FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033E200: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033E204: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033E208: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033E20C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E210: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033E214: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033E218: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033E21C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033E220: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x8033E224: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033E228: bne         $t8, $at, L_8033E284
    if (ctx->r24 != ctx->r1) {
        // 0x8033E22C: nop
    
            goto L_8033E284;
    }
    // 0x8033E22C: nop

    // 0x8033E230: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033E234: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033E238: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8033E23C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033E240: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033E244: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033E248: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033E24C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033E250: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033E254: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x8033E258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033E25C: bne         $t1, $at, L_8033E27C
    if (ctx->r9 != ctx->r1) {
        // 0x8033E260: nop
    
            goto L_8033E27C;
    }
    // 0x8033E260: nop

    // 0x8033E264: b           L_8033E26C
    // 0x8033E268: nop

        goto L_8033E26C;
    // 0x8033E268: nop

L_8033E26C:
    // 0x8033E26C: jal         0x8033E07C
    // 0x8033E270: nop

    func_8033E07C_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033E270: nop

    after_0:
    // 0x8033E274: b           L_8033E284
    // 0x8033E278: nop

        goto L_8033E284;
    // 0x8033E278: nop

L_8033E27C:
    // 0x8033E27C: b           L_8033E284
    // 0x8033E280: nop

        goto L_8033E284;
    // 0x8033E280: nop

L_8033E284:
    // 0x8033E284: b           L_8033E28C
    // 0x8033E288: nop

        goto L_8033E28C;
    // 0x8033E288: nop

L_8033E28C:
    // 0x8033E28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033E290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033E294: jr          $ra
    // 0x8033E298: nop

    return;
    // 0x8033E298: nop

    // 0x8033E29C: nop

;}
RECOMP_FUNC void func_8033C678_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C678: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8033C67C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033C680: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033C684: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033C688: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C68C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C690: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033C694: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C698: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C69C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C6A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C6A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C6A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033C6AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033C6B0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8033C6B4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C6B8: nop

    // 0x8033C6BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033C6C0: nop

    // 0x8033C6C4: bne         $t1, $zero, L_8033C768
    if (ctx->r9 != 0) {
        // 0x8033C6C8: nop
    
            goto L_8033C768;
    }
    // 0x8033C6C8: nop

    // 0x8033C6CC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C6D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033C6D4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033C6D8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8033C6DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033C6E0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C6E4: nop

    // 0x8033C6E8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033C6EC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8033C6F0: nop

    // 0x8033C6F4: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033C6F8: nop

    // 0x8033C6FC: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x8033C700: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033C704: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033C708: nop

    // 0x8033C70C: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x8033C710: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033C714: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x8033C718: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x8033C71C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8033C720: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033C724: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8033C728: nop

    // 0x8033C72C: swc1        $f10, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f10.u32l;
    // 0x8033C730: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C734: nop

    // 0x8033C738: lwc1        $f20, 0x14($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X14);
    // 0x8033C73C: nop

    // 0x8033C740: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x8033C744: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033C748: nop

    // 0x8033C74C: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x8033C750: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C754: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C758: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033C75C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033C760: jal         0x80019448
    // 0x8033C764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x8033C764: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
L_8033C768:
    // 0x8033C768: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8033C76C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C770: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C774: jal         0x80028FA0
    // 0x8033C778: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x8033C778: nop

    after_1:
    // 0x8033C77C: beq         $v0, $zero, L_8033C78C
    if (ctx->r2 == 0) {
        // 0x8033C780: nop
    
            goto L_8033C78C;
    }
    // 0x8033C780: nop

    // 0x8033C784: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033C788: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
L_8033C78C:
    // 0x8033C78C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C790: nop

    // 0x8033C794: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x8033C798: nop

    // 0x8033C79C: bne         $t4, $zero, L_8033C898
    if (ctx->r12 != 0) {
        // 0x8033C7A0: nop
    
            goto L_8033C898;
    }
    // 0x8033C7A0: nop

    // 0x8033C7A4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033C7A8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8033C7AC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033C7B0: lwc1        $f16, 0x0($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033C7B4: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8033C7B8: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8033C7BC: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033C7C0: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033C7C4: jal         0x80015634
    // 0x8033C7C8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_2;
    // 0x8033C7C8: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_2:
    // 0x8033C7CC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8033C7D0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C7D4: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033C7D8: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8033C7DC: jal         0x800157EC
    // 0x8033C7E0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_3;
    // 0x8033C7E0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x8033C7E4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8033C7E8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033C7EC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8033C7F0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033C7F4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8033C7F8: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8033C7FC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033C800: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8033C804: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033C808: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8033C80C: jal         0x80015538
    // 0x8033C810: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033C810: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_4:
    // 0x8033C814: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C818: nop

    // 0x8033C81C: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x8033C820: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033C824: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033C828: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C82C: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033C830: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033C834: lwc1        $f6, 0x0($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033C838: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033C83C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033C840: jal         0x800156C4
    // 0x8033C844: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_5;
    // 0x8033C844: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_5:
    // 0x8033C848: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8033C84C: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033C850: jal         0x80015744
    // 0x8033C854: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_6;
    // 0x8033C854: nop

    after_6:
    // 0x8033C858: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8033C85C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8033C860: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8033C864: lwc1        $f12, 0x40($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X40);
    // 0x8033C868: jal         0x800157EC
    // 0x8033C86C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_7;
    // 0x8033C86C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
    // 0x8033C870: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8033C874: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033C878: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033C87C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8033C880: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x8033C884: jal         0x80015538
    // 0x8033C888: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x8033C888: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_8:
    // 0x8033C88C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033C890: b           L_8033C8B0
    // 0x8033C894: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
        goto L_8033C8B0;
    // 0x8033C894: swc1        $f0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f0.u32l;
L_8033C898:
    // 0x8033C898: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033C89C: nop

    // 0x8033C8A0: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x8033C8A4: nop

    // 0x8033C8A8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8033C8AC: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
L_8033C8B0:
    // 0x8033C8B0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033C8B4: nop

    // 0x8033C8B8: lwc1        $f18, 0x3C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x8033C8BC: nop

    // 0x8033C8C0: swc1        $f18, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f18.u32l;
    // 0x8033C8C4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033C8C8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033C8CC: lwc1        $f14, 0x40($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X40);
    // 0x8033C8D0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033C8D4: jal         0x80015538
    // 0x8033C8D8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8033C8D8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_9:
    // 0x8033C8DC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8033C8E0: nop

    // 0x8033C8E4: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x8033C8E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C8EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C8F0: jal         0x80029D8C
    // 0x8033C8F4: nop

    func_80029D8C(rdram, ctx);
        goto after_10;
    // 0x8033C8F4: nop

    after_10:
    // 0x8033C8F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033C8FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033C900: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C904: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C908: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033C90C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033C910: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033C914: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033C918: jal         0x80029018
    // 0x8033C91C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_11;
    // 0x8033C91C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x8033C920: beq         $v0, $zero, L_8033C930
    if (ctx->r2 == 0) {
        // 0x8033C924: nop
    
            goto L_8033C930;
    }
    // 0x8033C924: nop

    // 0x8033C928: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8033C92C: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
L_8033C930:
    // 0x8033C930: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8033C934: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033C938: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033C93C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C940: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C944: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8033C948: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x8033C94C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033C950: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033C954: jal         0x800295C0
    // 0x8033C958: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x8033C958: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x8033C95C: beq         $v0, $zero, L_8033C96C
    if (ctx->r2 == 0) {
        // 0x8033C960: nop
    
            goto L_8033C96C;
    }
    // 0x8033C960: nop

    // 0x8033C964: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033C968: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
L_8033C96C:
    // 0x8033C96C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033C970: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033C974: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033C978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C97C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C980: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8033C984: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x8033C988: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033C98C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033C990: jal         0x800295C0
    // 0x8033C994: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x8033C994: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x8033C998: beq         $v0, $zero, L_8033C9A8
    if (ctx->r2 == 0) {
        // 0x8033C99C: nop
    
            goto L_8033C9A8;
    }
    // 0x8033C99C: nop

    // 0x8033C9A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033C9A4: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
L_8033C9A8:
    // 0x8033C9A8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033C9AC: nop

    // 0x8033C9B0: lh          $t8, 0xA6($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA6);
    // 0x8033C9B4: nop

    // 0x8033C9B8: beq         $t8, $zero, L_8033C9C8
    if (ctx->r24 == 0) {
        // 0x8033C9BC: nop
    
            goto L_8033C9C8;
    }
    // 0x8033C9BC: nop

    // 0x8033C9C0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033C9C4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_8033C9C8:
    // 0x8033C9C8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8033C9CC: nop

    // 0x8033C9D0: beq         $t7, $zero, L_8033C9F0
    if (ctx->r15 == 0) {
        // 0x8033C9D4: nop
    
            goto L_8033C9F0;
    }
    // 0x8033C9D4: nop

    // 0x8033C9D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033C9DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033C9E0: jal         0x8002B0E4
    // 0x8033C9E4: nop

    func_8002B0E4(rdram, ctx);
        goto after_14;
    // 0x8033C9E4: nop

    after_14:
    // 0x8033C9E8: b           L_8033C9F8
    // 0x8033C9EC: nop

        goto L_8033C9F8;
    // 0x8033C9EC: nop

L_8033C9F0:
    // 0x8033C9F0: b           L_8033C9F8
    // 0x8033C9F4: nop

        goto L_8033C9F8;
    // 0x8033C9F4: nop

L_8033C9F8:
    // 0x8033C9F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033C9FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033CA00: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033CA04: jr          $ra
    // 0x8033CA08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8033CA08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8033A76C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A76C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8033A770: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A774: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A778: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A77C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A780: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A784: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A78C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A790: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A794: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A798: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8033A79C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A7A0: nop

    // 0x8033A7A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A7A8: nop

    // 0x8033A7AC: bne         $t1, $zero, L_8033A7E0
    if (ctx->r9 != 0) {
        // 0x8033A7B0: nop
    
            goto L_8033A7E0;
    }
    // 0x8033A7B0: nop

    // 0x8033A7B4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A7B8: nop

    // 0x8033A7BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A7C0: nop

    // 0x8033A7C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A7C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A7CC: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033A7D0: nop

    // 0x8033A7D4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A7D8: nop

    // 0x8033A7DC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033A7E0:
    // 0x8033A7E0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033A7E4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033A7E8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033A7EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A7F0: lwc1        $f4, 0x2C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8033A7F4: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8033A7F8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8033A7FC: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x8033A800: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033A804: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8033A808: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033A80C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A810: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033A814: nop

    // 0x8033A818: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033A81C: nop

    // 0x8033A820: bc1f        L_8033A878
    if (!c1cs) {
        // 0x8033A824: nop
    
            goto L_8033A878;
    }
    // 0x8033A824: nop

    // 0x8033A828: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8033A82C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033A830: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A834: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033A838: nop

    // 0x8033A83C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033A840: nop

    // 0x8033A844: bc1f        L_8033A85C
    if (!c1cs) {
        // 0x8033A848: nop
    
            goto L_8033A85C;
    }
    // 0x8033A848: nop

    // 0x8033A84C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A850: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033A854: b           L_8033A870
    // 0x8033A858: swc1        $f6, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f6.u32l;
        goto L_8033A870;
    // 0x8033A858: swc1        $f6, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f6.u32l;
L_8033A85C:
    // 0x8033A85C: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8033A860: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A864: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033A868: nop

    // 0x8033A86C: swc1        $f8, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f8.u32l;
L_8033A870:
    // 0x8033A870: b           L_8033A900
    // 0x8033A874: nop

        goto L_8033A900;
    // 0x8033A874: nop

L_8033A878:
    // 0x8033A878: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033A87C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8033A880: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A884: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033A888: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8033A88C: nop

    // 0x8033A890: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033A894: nop

    // 0x8033A898: bc1f        L_8033A8F0
    if (!c1cs) {
        // 0x8033A89C: nop
    
            goto L_8033A8F0;
    }
    // 0x8033A89C: nop

    // 0x8033A8A0: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8033A8A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033A8A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A8AC: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033A8B0: nop

    // 0x8033A8B4: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x8033A8B8: nop

    // 0x8033A8BC: bc1f        L_8033A8D4
    if (!c1cs) {
        // 0x8033A8C0: nop
    
            goto L_8033A8D4;
    }
    // 0x8033A8C0: nop

    // 0x8033A8C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A8C8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8033A8CC: b           L_8033A8E8
    // 0x8033A8D0: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
        goto L_8033A8E8;
    // 0x8033A8D0: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
L_8033A8D4:
    // 0x8033A8D4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033A8D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A8DC: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033A8E0: nop

    // 0x8033A8E4: swc1        $f8, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f8.u32l;
L_8033A8E8:
    // 0x8033A8E8: b           L_8033A900
    // 0x8033A8EC: nop

        goto L_8033A900;
    // 0x8033A8EC: nop

L_8033A8F0:
    // 0x8033A8F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033A8F4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8033A8F8: nop

    // 0x8033A8FC: swc1        $f10, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f10.u32l;
L_8033A900:
    // 0x8033A900: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033A904: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8033A908: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8033A90C: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033A910: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033A914: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033A918: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A91C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033A920: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8033A924: nop

    // 0x8033A928: bc1f        L_8033A948
    if (!c1cs) {
        // 0x8033A92C: nop
    
            goto L_8033A948;
    }
    // 0x8033A92C: nop

    // 0x8033A930: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033A934: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8033A938: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033A93C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033A940: nop

    // 0x8033A944: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033A948:
    // 0x8033A948: b           L_8033A950
    // 0x8033A94C: nop

        goto L_8033A950;
    // 0x8033A94C: nop

L_8033A950:
    // 0x8033A950: jr          $ra
    // 0x8033A954: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033A954: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033B618_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B61C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B620: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B624: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B628: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B62C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B630: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B634: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B63C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B640: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B644: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B648: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B64C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B650: nop

    // 0x8033B654: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033B658: nop

    // 0x8033B65C: bne         $t1, $zero, L_8033B6B4
    if (ctx->r9 != 0) {
        // 0x8033B660: nop
    
            goto L_8033B6B4;
    }
    // 0x8033B660: nop

    // 0x8033B664: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B668: nop

    // 0x8033B66C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033B670: nop

    // 0x8033B674: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033B678: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033B67C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B680: nop

    // 0x8033B684: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B688: nop

    // 0x8033B68C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033B690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B694: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033B698: addiu       $t7, $t7, -0x64E0
    ctx->r15 = ADD32(ctx->r15, -0X64E0);
    // 0x8033B69C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B6A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033B6A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B6A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033B6AC: jal         0x8001C0EC
    // 0x8033B6B0: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033B6B0: addiu       $a3, $zero, 0x16F
    ctx->r7 = ADD32(0, 0X16F);
    after_0:
L_8033B6B4:
    // 0x8033B6B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033B6B8: nop

    // 0x8033B6BC: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x8033B6C0: nop

    // 0x8033B6C4: bne         $t9, $zero, L_8033B6FC
    if (ctx->r25 != 0) {
        // 0x8033B6C8: nop
    
            goto L_8033B6FC;
    }
    // 0x8033B6C8: nop

    // 0x8033B6CC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B6D0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8033B6D4: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x8033B6D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B6DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B6E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033B6E4: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x8033B6E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033B6EC: jal         0x800175F0
    // 0x8033B6F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033B6F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033B6F4: b           L_8033B714
    // 0x8033B6F8: nop

        goto L_8033B714;
    // 0x8033B6F8: nop

L_8033B6FC:
    // 0x8033B6FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033B700: nop

    // 0x8033B704: lh          $t4, 0xB6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB6);
    // 0x8033B708: nop

    // 0x8033B70C: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x8033B710: sh          $t2, 0xB6($t3)
    MEM_H(0XB6, ctx->r11) = ctx->r10;
L_8033B714:
    // 0x8033B714: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033B718: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B71C: lh          $t5, 0xC2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0XC2);
    // 0x8033B720: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B724: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8033B728: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033B72C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B730: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033B734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B738: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B73C: lwc1        $f4, 0x24($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8033B740: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8033B744: nop

    // 0x8033B748: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033B74C: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    // 0x8033B750: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B754: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033B758: lh          $t1, 0xC2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC2);
    // 0x8033B75C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8033B760: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x8033B764: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8033B768: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033B76C: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8033B770: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033B774: addu        $t3, $t4, $t2
    ctx->r11 = ADD32(ctx->r12, ctx->r10);
    // 0x8033B778: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8033B77C: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8033B780: nop

    // 0x8033B784: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033B788: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x8033B78C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B790: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033B794: lh          $t7, 0xC2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XC2);
    // 0x8033B798: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033B79C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033B7A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033B7A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033B7A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033B7AC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033B7B0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8033B7B4: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033B7B8: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8033B7BC: nop

    // 0x8033B7C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8033B7C4: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x8033B7C8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033B7CC: nop

    // 0x8033B7D0: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8033B7D4: nop

    // 0x8033B7D8: swc1        $f10, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f10.u32l;
    // 0x8033B7DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B7E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B7E4: jal         0x8001B4AC
    // 0x8033B7E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x8033B7E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8033B7EC: beq         $v0, $zero, L_8033B840
    if (ctx->r2 == 0) {
        // 0x8033B7F0: nop
    
            goto L_8033B840;
    }
    // 0x8033B7F0: nop

    // 0x8033B7F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033B7F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033B7FC: lh          $t2, 0xC2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XC2);
    // 0x8033B800: nop

    // 0x8033B804: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033B808: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033B80C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033B810: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033B814: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033B818: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033B81C: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x8033B820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B828: jal         0x80017B3C
    // 0x8033B82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80017B3C(rdram, ctx);
        goto after_3;
    // 0x8033B82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033B830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B838: jal         0x8002B114
    // 0x8033B83C: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x8033B83C: nop

    after_4:
L_8033B840:
    // 0x8033B840: b           L_8033B848
    // 0x8033B844: nop

        goto L_8033B848;
    // 0x8033B844: nop

L_8033B848:
    // 0x8033B848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B84C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033B850: jr          $ra
    // 0x8033B854: nop

    return;
    // 0x8033B854: nop

;}
RECOMP_FUNC void func_8033C584_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033C584: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033C588: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033C58C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033C590: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033C594: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033C598: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033C59C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033C5A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C5A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033C5A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033C5AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033C5B0: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033C5B4: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033C5B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033C5BC: beq         $s0, $at, L_8033C5D8
    if (ctx->r16 == ctx->r1) {
        // 0x8033C5C0: nop
    
            goto L_8033C5D8;
    }
    // 0x8033C5C0: nop

    // 0x8033C5C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033C5C8: beq         $s0, $at, L_8033C5E8
    if (ctx->r16 == ctx->r1) {
        // 0x8033C5CC: nop
    
            goto L_8033C5E8;
    }
    // 0x8033C5CC: nop

    // 0x8033C5D0: b           L_8033C5F8
    // 0x8033C5D4: nop

        goto L_8033C5F8;
    // 0x8033C5D4: nop

L_8033C5D8:
    // 0x8033C5D8: jal         0x8033C1F8
    // 0x8033C5DC: nop

    func_8033C1F8_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033C5DC: nop

    after_0:
    // 0x8033C5E0: b           L_8033C600
    // 0x8033C5E4: nop

        goto L_8033C600;
    // 0x8033C5E4: nop

L_8033C5E8:
    // 0x8033C5E8: jal         0x8033C4E4
    // 0x8033C5EC: nop

    func_8033C4E4_unk_bin_49(rdram, ctx);
        goto after_1;
    // 0x8033C5EC: nop

    after_1:
    // 0x8033C5F0: b           L_8033C600
    // 0x8033C5F4: nop

        goto L_8033C600;
    // 0x8033C5F4: nop

L_8033C5F8:
    // 0x8033C5F8: b           L_8033C600
    // 0x8033C5FC: nop

        goto L_8033C600;
    // 0x8033C5FC: nop

L_8033C600:
    // 0x8033C600: b           L_8033C608
    // 0x8033C604: nop

        goto L_8033C608;
    // 0x8033C604: nop

L_8033C608:
    // 0x8033C608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033C60C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033C610: jr          $ra
    // 0x8033C614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033C614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033A288_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A288: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A28C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A290: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A294: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A298: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A29C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A2A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A2A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A2A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A2AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A2B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A2B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A2B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A2BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A2C0: nop

    // 0x8033A2C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A2C8: nop

    // 0x8033A2CC: bne         $t1, $zero, L_8033A324
    if (ctx->r9 != 0) {
        // 0x8033A2D0: nop
    
            goto L_8033A324;
    }
    // 0x8033A2D0: nop

    // 0x8033A2D4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A2D8: nop

    // 0x8033A2DC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A2E0: nop

    // 0x8033A2E4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A2E8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A2EC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A2F0: nop

    // 0x8033A2F4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A2F8: nop

    // 0x8033A2FC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x8033A300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A304: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033A308: addiu       $t7, $t7, -0x6588
    ctx->r15 = ADD32(ctx->r15, -0X6588);
    // 0x8033A30C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A310: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033A314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A31C: jal         0x8001C0EC
    // 0x8033A320: addiu       $a3, $zero, 0x16E
    ctx->r7 = ADD32(0, 0X16E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033A320: addiu       $a3, $zero, 0x16E
    ctx->r7 = ADD32(0, 0X16E);
    after_0:
L_8033A324:
    // 0x8033A324: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033A328: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8033A32C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A330: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033A334: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8033A338: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x8033A33C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033A340: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033A344: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8033A348: nop

    // 0x8033A34C: bc1f        L_8033A36C
    if (!c1cs) {
        // 0x8033A350: nop
    
            goto L_8033A36C;
    }
    // 0x8033A350: nop

    // 0x8033A354: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A358: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8033A35C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033A360: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033A364: nop

    // 0x8033A368: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033A36C:
    // 0x8033A36C: b           L_8033A374
    // 0x8033A370: nop

        goto L_8033A374;
    // 0x8033A370: nop

L_8033A374:
    // 0x8033A374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033A37C: jr          $ra
    // 0x8033A380: nop

    return;
    // 0x8033A380: nop

;}
RECOMP_FUNC void func_8033A958_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A958: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A95C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A960: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A964: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A968: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A96C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A970: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A974: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A978: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A97C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A980: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A984: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A988: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033A98C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033A990: nop

    // 0x8033A994: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A998: nop

    // 0x8033A99C: bne         $t1, $zero, L_8033A9D0
    if (ctx->r9 != 0) {
        // 0x8033A9A0: nop
    
            goto L_8033A9D0;
    }
    // 0x8033A9A0: nop

    // 0x8033A9A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033A9A8: nop

    // 0x8033A9AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A9B0: nop

    // 0x8033A9B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A9B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A9BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A9C0: nop

    // 0x8033A9C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033A9C8: nop

    // 0x8033A9CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
L_8033A9D0:
    // 0x8033A9D0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033A9D4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033A9D8: lui         $at, 0x4452
    ctx->r1 = S32(0X4452 << 16);
    // 0x8033A9DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A9E0: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8033A9E4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033A9E8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8033A9EC: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x8033A9F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033A9F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A9F8: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x8033A9FC: nop

    // 0x8033AA00: bne         $t0, $at, L_8033AA68
    if (ctx->r8 != ctx->r1) {
        // 0x8033AA04: nop
    
            goto L_8033AA68;
    }
    // 0x8033AA04: nop

    // 0x8033AA08: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033AA0C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8033AA10: sb          $t1, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r9;
    // 0x8033AA14: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8033AA18: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8033AA1C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033AA20: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8033AA24: lwc1        $f10, 0x4($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8033AA28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AA2C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033AA30: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033AA34: nop

    // 0x8033AA38: bc1f        L_8033AA54
    if (!c1cs) {
        // 0x8033AA3C: nop
    
            goto L_8033AA54;
    }
    // 0x8033AA3C: nop

    // 0x8033AA40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033AA44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033AA48: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AA4C: b           L_8033AA68
    // 0x8033AA50: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
        goto L_8033AA68;
    // 0x8033AA50: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
L_8033AA54:
    // 0x8033AA54: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8033AA58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033AA5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033AA60: nop

    // 0x8033AA64: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
L_8033AA68:
    // 0x8033AA68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033AA6C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033AA70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033AA74: lwc1        $f10, 0x18($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8033AA78: nop

    // 0x8033AA7C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8033AA80: nop

    // 0x8033AA84: bc1f        L_8033AAE8
    if (!c1cs) {
        // 0x8033AA88: nop
    
            goto L_8033AAE8;
    }
    // 0x8033AA88: nop

    // 0x8033AA8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AA90: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8033AA94: addiu       $t8, $t8, -0x6588
    ctx->r24 = ADD32(ctx->r24, -0X6588);
    // 0x8033AA98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AA9C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033AAA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033AAA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8033AAA8: jal         0x8001C0EC
    // 0x8033AAAC: addiu       $a3, $zero, 0x16E
    ctx->r7 = ADD32(0, 0X16E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033AAAC: addiu       $a3, $zero, 0x16E
    ctx->r7 = ADD32(0, 0X16E);
    after_0:
    // 0x8033AAB0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033AAB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033AAB8: nop

    // 0x8033AABC: swc1        $f18, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f18.u32l;
    // 0x8033AAC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033AAC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033AAC8: nop

    // 0x8033AACC: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x8033AAD0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033AAD4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x8033AAD8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x8033AADC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033AAE0: b           L_8033AB0C
    // 0x8033AAE4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_8033AB0C;
    // 0x8033AAE4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_8033AAE8:
    // 0x8033AAE8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AAEC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8033AAF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033AAF4: lwc1        $f12, 0x18($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X18);
    // 0x8033AAF8: jal         0x80015538
    // 0x8033AAFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033AAFC: nop

    after_1:
    // 0x8033AB00: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB04: nop

    // 0x8033AB08: swc1        $f0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f0.u32l;
L_8033AB0C:
    // 0x8033AB0C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8033AB10: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8033AB14: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033AB18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033AB1C: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8033AB20: nop

    // 0x8033AB24: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8033AB28: nop

    // 0x8033AB2C: bc1f        L_8033AB84
    if (!c1cs) {
        // 0x8033AB30: nop
    
            goto L_8033AB84;
    }
    // 0x8033AB30: nop

    // 0x8033AB34: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB38: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8033AB3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033AB40: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8033AB44: nop

    // 0x8033AB48: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8033AB4C: nop

    // 0x8033AB50: bc1f        L_8033AB68
    if (!c1cs) {
        // 0x8033AB54: nop
    
            goto L_8033AB68;
    }
    // 0x8033AB54: nop

    // 0x8033AB58: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033AB5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB60: b           L_8033AB7C
    // 0x8033AB64: swc1        $f18, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f18.u32l;
        goto L_8033AB7C;
    // 0x8033AB64: swc1        $f18, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f18.u32l;
L_8033AB68:
    // 0x8033AB68: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8033AB6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033AB70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8033AB74: nop

    // 0x8033AB78: swc1        $f4, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f4.u32l;
L_8033AB7C:
    // 0x8033AB7C: b           L_8033AC0C
    // 0x8033AB80: nop

        goto L_8033AC0C;
    // 0x8033AB80: nop

L_8033AB84:
    // 0x8033AB84: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033AB88: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8033AB8C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033AB90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033AB94: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033AB98: nop

    // 0x8033AB9C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x8033ABA0: nop

    // 0x8033ABA4: bc1f        L_8033ABFC
    if (!c1cs) {
        // 0x8033ABA8: nop
    
            goto L_8033ABFC;
    }
    // 0x8033ABA8: nop

    // 0x8033ABAC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033ABB0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033ABB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033ABB8: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033ABBC: nop

    // 0x8033ABC0: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x8033ABC4: nop

    // 0x8033ABC8: bc1f        L_8033ABE0
    if (!c1cs) {
        // 0x8033ABCC: nop
    
            goto L_8033ABE0;
    }
    // 0x8033ABCC: nop

    // 0x8033ABD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033ABD4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033ABD8: b           L_8033ABF4
    // 0x8033ABDC: swc1        $f18, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f18.u32l;
        goto L_8033ABF4;
    // 0x8033ABDC: swc1        $f18, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f18.u32l;
L_8033ABE0:
    // 0x8033ABE0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033ABE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033ABE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033ABEC: nop

    // 0x8033ABF0: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
L_8033ABF4:
    // 0x8033ABF4: b           L_8033AC0C
    // 0x8033ABF8: nop

        goto L_8033AC0C;
    // 0x8033ABF8: nop

L_8033ABFC:
    // 0x8033ABFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033AC00: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033AC04: nop

    // 0x8033AC08: swc1        $f6, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f6.u32l;
L_8033AC0C:
    // 0x8033AC0C: b           L_8033AC14
    // 0x8033AC10: nop

        goto L_8033AC14;
    // 0x8033AC10: nop

L_8033AC14:
    // 0x8033AC14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AC18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033AC1C: jr          $ra
    // 0x8033AC20: nop

    return;
    // 0x8033AC20: nop

;}
RECOMP_FUNC void func_8033D1A4_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D1A4: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8033D1A8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8033D1AC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033D1B0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8033D1B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033D1B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033D1BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033D1C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033D1C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D1C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033D1CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033D1D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033D1D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033D1D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033D1DC: sw          $t9, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r25;
    // 0x8033D1E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D1E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D1E8: jal         0x8033CD14
    // 0x8033D1EC: nop

    func_8033CD14_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033D1EC: nop

    after_0:
    // 0x8033D1F0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033D1F4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033D1F8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8033D1FC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033D200: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033D204: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033D208: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033D20C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033D210: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033D214: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x8033D218: nop

    // 0x8033D21C: sw          $t2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r10;
    // 0x8033D220: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033D224: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x8033D228: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8033D22C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033D230: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033D234: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033D238: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033D23C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033D240: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033D244: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x8033D248: nop

    // 0x8033D24C: sw          $t5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r13;
    // 0x8033D250: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D254: nop

    // 0x8033D258: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8033D25C: nop

    // 0x8033D260: bne         $t7, $zero, L_8033D374
    if (ctx->r15 != 0) {
        // 0x8033D264: nop
    
            goto L_8033D374;
    }
    // 0x8033D264: nop

    // 0x8033D268: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D26C: nop

    // 0x8033D270: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033D274: nop

    // 0x8033D278: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8033D27C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8033D280: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D284: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x8033D288: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8033D28C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033D290: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D294: nop

    // 0x8033D298: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x8033D29C: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D2A0: nop

    // 0x8033D2A4: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033D2A8: nop

    // 0x8033D2AC: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x8033D2B0: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D2B4: nop

    // 0x8033D2B8: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x8033D2BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D2C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8033D2C4: addiu       $t6, $t6, -0x757C
    ctx->r14 = ADD32(ctx->r14, -0X757C);
    // 0x8033D2C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D2CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8033D2D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033D2D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033D2D8: jal         0x8001C0EC
    // 0x8033D2DC: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033D2DC: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_1:
    // 0x8033D2E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D2E4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8033D2E8: addiu       $t7, $t7, -0x7580
    ctx->r15 = ADD32(ctx->r15, -0X7580);
    // 0x8033D2EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D2F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D2F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D2F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033D2FC: jal         0x8001C0EC
    // 0x8033D300: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8033D300: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_2:
    // 0x8033D304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D30C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8033D310: addiu       $a3, $a3, -0x755C
    ctx->r7 = ADD32(ctx->r7, -0X755C);
    // 0x8033D314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D318: jal         0x8001ABF4
    // 0x8033D31C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8033D31C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x8033D320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D328: jal         0x8001BBDC
    // 0x8033D32C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x8033D32C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8033D330: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D334: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D338: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x8033D33C: nop

    // 0x8033D340: beq         $t0, $at, L_8033D374
    if (ctx->r8 == ctx->r1) {
        // 0x8033D344: nop
    
            goto L_8033D374;
    }
    // 0x8033D344: nop

    // 0x8033D348: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8033D34C: addiu       $t8, $t8, -0x7540
    ctx->r24 = ADD32(ctx->r24, -0X7540);
    // 0x8033D350: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8033D354: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033D358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033D35C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033D360: jal         0x8001C0EC
    // 0x8033D364: addiu       $a3, $zero, 0x79
    ctx->r7 = ADD32(0, 0X79);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x8033D364: addiu       $a3, $zero, 0x79
    ctx->r7 = ADD32(0, 0X79);
    after_5:
    // 0x8033D368: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8033D36C: jal         0x8001BBDC
    // 0x8033D370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x8033D370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_8033D374:
    // 0x8033D374: jal         0x8033CFD8
    // 0x8033D378: nop

    func_8033CFD8_unk_bin_49(rdram, ctx);
        goto after_7;
    // 0x8033D378: nop

    after_7:
    // 0x8033D37C: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D380: nop

    // 0x8033D384: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8033D388: nop

    // 0x8033D38C: bne         $t2, $zero, L_8033D3AC
    if (ctx->r10 != 0) {
        // 0x8033D390: nop
    
            goto L_8033D3AC;
    }
    // 0x8033D390: nop

    // 0x8033D394: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D398: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8033D39C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8033D3A0: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D3A4: b           L_8033D560
    // 0x8033D3A8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_8033D560;
    // 0x8033D3A8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8033D3AC:
    // 0x8033D3AC: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D3B0: nop

    // 0x8033D3B4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8033D3B8: nop

    // 0x8033D3BC: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8033D3C0: sh          $t9, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r25;
    // 0x8033D3C4: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D3C8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8033D3CC: lh          $t8, 0xA6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA6);
    // 0x8033D3D0: nop

    // 0x8033D3D4: bne         $t8, $at, L_8033D560
    if (ctx->r24 != ctx->r1) {
        // 0x8033D3D8: nop
    
            goto L_8033D560;
    }
    // 0x8033D3D8: nop

    // 0x8033D3DC: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D3E0: nop

    // 0x8033D3E4: lh          $t2, 0xB4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB4);
    // 0x8033D3E8: nop

    // 0x8033D3EC: bne         $t2, $zero, L_8033D554
    if (ctx->r10 != 0) {
        // 0x8033D3F0: nop
    
            goto L_8033D554;
    }
    // 0x8033D3F0: nop

    // 0x8033D3F4: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D3F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033D3FC: lw          $a1, 0x1C($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X1C);
    // 0x8033D400: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8033D404: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8033D408: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8033D40C: jal         0x800372A0
    // 0x8033D410: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_8;
    // 0x8033D410: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x8033D414: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D418: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8033D41C: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x8033D420: lw          $a2, 0x4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X4);
    // 0x8033D424: lw          $a3, 0x8($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X8);
    // 0x8033D428: jal         0x80037200
    // 0x8033D42C: nop

    guTranslateF(rdram, ctx);
        goto after_9;
    // 0x8033D42C: nop

    after_9:
    // 0x8033D430: addiu       $t5, $sp, 0x80
    ctx->r13 = ADD32(ctx->r29, 0X80);
    // 0x8033D434: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8033D438: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8033D43C: jal         0x80036400
    // 0x8033D440: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    guMtxCatF(rdram, ctx);
        goto after_10;
    // 0x8033D440: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_10:
    // 0x8033D444: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x8033D448: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x8033D44C: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x8033D450: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8033D454: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8033D458: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8033D45C: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8033D460: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x8033D464: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x8033D468: jal         0x80036360
    // 0x8033D46C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    guMtxXFMF(rdram, ctx);
        goto after_11;
    // 0x8033D46C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_11:
    // 0x8033D470: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8033D474: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D478: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033D47C: lwc1        $f10, 0x1C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033D480: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033D484: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8033D488: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8033D48C: addiu       $a1, $a1, 0x45DC
    ctx->r5 = ADD32(ctx->r5, 0X45DC);
    // 0x8033D490: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033D494: jal         0x80027464
    // 0x8033D498: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_12;
    // 0x8033D498: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x8033D49C: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    // 0x8033D4A0: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x8033D4A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D4A8: beq         $t8, $at, L_8033D4C4
    if (ctx->r24 == ctx->r1) {
        // 0x8033D4AC: nop
    
            goto L_8033D4C4;
    }
    // 0x8033D4AC: nop

    // 0x8033D4B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D4B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D4B8: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8033D4BC: jal         0x80026F10
    // 0x8033D4C0: nop

    func_80026F10(rdram, ctx);
        goto after_13;
    // 0x8033D4C0: nop

    after_13:
L_8033D4C4:
    // 0x8033D4C4: addiu       $t1, $sp, 0x3C
    ctx->r9 = ADD32(ctx->r29, 0X3C);
    // 0x8033D4C8: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x8033D4CC: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x8033D4D0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8033D4D4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8033D4D8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033D4DC: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x8033D4E0: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    // 0x8033D4E4: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    // 0x8033D4E8: jal         0x80036360
    // 0x8033D4EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    guMtxXFMF(rdram, ctx);
        goto after_14;
    // 0x8033D4EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_14:
    // 0x8033D4F0: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8033D4F4: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D4F8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033D4FC: lwc1        $f18, 0x1C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x8033D500: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033D504: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8033D508: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x8033D50C: addiu       $a1, $a1, 0x45DC
    ctx->r5 = ADD32(ctx->r5, 0X45DC);
    // 0x8033D510: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033D514: jal         0x80027464
    // 0x8033D518: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_15;
    // 0x8033D518: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_15:
    // 0x8033D51C: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    // 0x8033D520: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x8033D524: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033D528: beq         $t5, $at, L_8033D544
    if (ctx->r13 == ctx->r1) {
        // 0x8033D52C: nop
    
            goto L_8033D544;
    }
    // 0x8033D52C: nop

    // 0x8033D530: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033D534: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033D538: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8033D53C: jal         0x80026F10
    // 0x8033D540: nop

    func_80026F10(rdram, ctx);
        goto after_16;
    // 0x8033D540: nop

    after_16:
L_8033D544:
    // 0x8033D544: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D548: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8033D54C: b           L_8033D560
    // 0x8033D550: sh          $t7, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r15;
        goto L_8033D560;
    // 0x8033D550: sh          $t7, 0xB4($t9)
    MEM_H(0XB4, ctx->r25) = ctx->r15;
L_8033D554:
    // 0x8033D554: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x8033D558: nop

    // 0x8033D55C: sh          $zero, 0xB4($t6)
    MEM_H(0XB4, ctx->r14) = 0;
L_8033D560:
    // 0x8033D560: b           L_8033D568
    // 0x8033D564: nop

        goto L_8033D568;
    // 0x8033D564: nop

L_8033D568:
    // 0x8033D568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8033D56C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8033D570: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033D574: jr          $ra
    // 0x8033D578: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8033D578: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8033DFB0_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033DFB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033DFB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033DFB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033DFBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DFC0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DFC4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033DFC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DFCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DFD0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DFD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DFD8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DFDC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033DFE0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033DFE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033DFE8: beq         $s0, $at, L_8033E01C
    if (ctx->r16 == ctx->r1) {
        // 0x8033DFEC: nop
    
            goto L_8033E01C;
    }
    // 0x8033DFEC: nop

    // 0x8033DFF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033DFF4: beq         $s0, $at, L_8033E02C
    if (ctx->r16 == ctx->r1) {
        // 0x8033DFF8: nop
    
            goto L_8033E02C;
    }
    // 0x8033DFF8: nop

    // 0x8033DFFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033E000: beq         $s0, $at, L_8033E03C
    if (ctx->r16 == ctx->r1) {
        // 0x8033E004: nop
    
            goto L_8033E03C;
    }
    // 0x8033E004: nop

    // 0x8033E008: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8033E00C: beq         $s0, $at, L_8033E04C
    if (ctx->r16 == ctx->r1) {
        // 0x8033E010: nop
    
            goto L_8033E04C;
    }
    // 0x8033E010: nop

    // 0x8033E014: b           L_8033E05C
    // 0x8033E018: nop

        goto L_8033E05C;
    // 0x8033E018: nop

L_8033E01C:
    // 0x8033E01C: jal         0x8033D1A4
    // 0x8033E020: nop

    func_8033D1A4_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033E020: nop

    after_0:
    // 0x8033E024: b           L_8033E064
    // 0x8033E028: nop

        goto L_8033E064;
    // 0x8033E028: nop

L_8033E02C:
    // 0x8033E02C: jal         0x8033D57C
    // 0x8033E030: nop

    func_8033D57C_unk_bin_49(rdram, ctx);
        goto after_1;
    // 0x8033E030: nop

    after_1:
    // 0x8033E034: b           L_8033E064
    // 0x8033E038: nop

        goto L_8033E064;
    // 0x8033E038: nop

L_8033E03C:
    // 0x8033E03C: jal         0x8033D9E0
    // 0x8033E040: nop

    func_8033D9E0_unk_bin_49(rdram, ctx);
        goto after_2;
    // 0x8033E040: nop

    after_2:
    // 0x8033E044: b           L_8033E064
    // 0x8033E048: nop

        goto L_8033E064;
    // 0x8033E048: nop

L_8033E04C:
    // 0x8033E04C: jal         0x8033DE34
    // 0x8033E050: nop

    func_8033DE34_unk_bin_49(rdram, ctx);
        goto after_3;
    // 0x8033E050: nop

    after_3:
    // 0x8033E054: b           L_8033E064
    // 0x8033E058: nop

        goto L_8033E064;
    // 0x8033E058: nop

L_8033E05C:
    // 0x8033E05C: b           L_8033E064
    // 0x8033E060: nop

        goto L_8033E064;
    // 0x8033E060: nop

L_8033E064:
    // 0x8033E064: b           L_8033E06C
    // 0x8033E068: nop

        goto L_8033E06C;
    // 0x8033E068: nop

L_8033E06C:
    // 0x8033E06C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033E070: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033E074: jr          $ra
    // 0x8033E078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033E078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033D9E0_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033D9E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8033D9E4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8033D9E8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8033D9EC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8033D9F0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8033D9F4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8033D9F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033D9FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033DA00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033DA04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033DA08: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033DA0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033DA10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DA14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033DA18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033DA1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033DA20: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033DA24: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033DA28: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8033DA2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DA30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DA34: jal         0x8033CD14
    // 0x8033DA38: nop

    func_8033CD14_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033DA38: nop

    after_0:
    // 0x8033DA3C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8033DA40: nop

    // 0x8033DA44: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x8033DA48: nop

    // 0x8033DA4C: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x8033DA50: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x8033DA54: nop

    // 0x8033DA58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033DA5C: nop

    // 0x8033DA60: bne         $t3, $zero, L_8033DB74
    if (ctx->r11 != 0) {
        // 0x8033DA64: nop
    
            goto L_8033DB74;
    }
    // 0x8033DA64: nop

    // 0x8033DA68: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8033DA6C: nop

    // 0x8033DA70: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x8033DA74: nop

    // 0x8033DA78: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8033DA7C: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x8033DA80: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8033DA84: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x8033DA88: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x8033DA8C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033DA90: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8033DA94: nop

    // 0x8033DA98: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x8033DA9C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8033DAA0: nop

    // 0x8033DAA4: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x8033DAA8: nop

    // 0x8033DAAC: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x8033DAB0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8033DAB4: nop

    // 0x8033DAB8: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x8033DABC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8033DAC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033DAC4: beq         $t2, $at, L_8033DB74
    if (ctx->r10 == ctx->r1) {
        // 0x8033DAC8: nop
    
            goto L_8033DB74;
    }
    // 0x8033DAC8: nop

    // 0x8033DACC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8033DAD0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8033DAD4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8033DAD8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033DADC: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x8033DAE0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033DAE4: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8033DAE8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033DAEC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033DAF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033DAF4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033DAF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033DAFC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8033DB00: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8033DB04: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033DB08: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8033DB0C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033DB10: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x8033DB14: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x8033DB18: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8033DB1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033DB20: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x8033DB24: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8033DB28: nop

    // 0x8033DB2C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033DB30: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033DB34: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033DB38: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033DB3C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033DB40: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033DB44: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x8033DB48: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8033DB4C: addiu       $t1, $t1, -0x7540
    ctx->r9 = ADD32(ctx->r9, -0X7540);
    // 0x8033DB50: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8033DB54: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8033DB58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DB5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033DB60: jal         0x8001C0EC
    // 0x8033DB64: addiu       $a3, $zero, 0x79
    ctx->r7 = ADD32(0, 0X79);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033DB64: addiu       $a3, $zero, 0x79
    ctx->r7 = ADD32(0, 0X79);
    after_1:
    // 0x8033DB68: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8033DB6C: jal         0x8001BBDC
    // 0x8033DB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x8033DB70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_8033DB74:
    // 0x8033DB74: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8033DB78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033DB7C: beq         $t2, $at, L_8033DDF0
    if (ctx->r10 == ctx->r1) {
        // 0x8033DB80: nop
    
            goto L_8033DDF0;
    }
    // 0x8033DB80: nop

    // 0x8033DB84: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8033DB88: jal         0x8001B62C
    // 0x8033DB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x8033DB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8033DB90: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8033DB94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033DB98: nop

    // 0x8033DB9C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x8033DBA0: nop

    // 0x8033DBA4: bc1f        L_8033DDB0
    if (!c1cs) {
        // 0x8033DBA8: nop
    
            goto L_8033DDB0;
    }
    // 0x8033DBA8: nop

    // 0x8033DBAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033DBB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033DBB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033DBB8: addiu       $a2, $zero, 0x42
    ctx->r6 = ADD32(0, 0X42);
    // 0x8033DBBC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033DBC0: jal         0x800175F0
    // 0x8033DBC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x8033DBC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8033DBC8: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8033DBCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033DBD0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8033DBD4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033DBD8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033DBDC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8033DBE0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033DBE4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033DBE8: lwc1        $f10, 0x416C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8033DBEC: nop

    // 0x8033DBF0: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x8033DBF4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8033DBF8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033DBFC: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x8033DC00: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8033DC04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033DC08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033DC0C: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x8033DC10: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8033DC14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033DC18: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033DC1C: lwc1        $f18, 0x4168($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4168);
    // 0x8033DC20: nop

    // 0x8033DC24: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033DC28: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x8033DC2C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033DC30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033DC34: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033DC38: nop

    // 0x8033DC3C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8033DC40: nop

    // 0x8033DC44: bc1f        L_8033DC64
    if (!c1cs) {
        // 0x8033DC48: nop
    
            goto L_8033DC64;
    }
    // 0x8033DC48: nop

    // 0x8033DC4C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033DC50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8033DC54: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033DC58: nop

    // 0x8033DC5C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8033DC60: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
L_8033DC64:
    // 0x8033DC64: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033DC68: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8033DC6C: lwc1        $f9, -0x1CE8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X1CE8);
    // 0x8033DC70: lwc1        $f8, -0x1CE4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1CE4);
    // 0x8033DC74: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033DC78: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033DC7C: jal         0x80034970
    // 0x8033DC80: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x8033DC80: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_5:
    // 0x8033DC84: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033DC88: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033DC8C: lwc1        $f5, -0x1CE0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X1CE0);
    // 0x8033DC90: lwc1        $f4, -0x1CDC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1CDC);
    // 0x8033DC94: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8033DC98: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8033DC9C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8033DCA0: jal         0x80034970
    // 0x8033DCA4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x8033DCA4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_6:
    // 0x8033DCA8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033DCAC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8033DCB0: lwc1        $f17, -0x1CD8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X1CD8);
    // 0x8033DCB4: lwc1        $f16, -0x1CD4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1CD4);
    // 0x8033DCB8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033DCBC: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033DCC0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8033DCC4: jal         0x80036570
    // 0x8033DCC8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_7;
    // 0x8033DCC8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_7:
    // 0x8033DCCC: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8033DCD0: lui         $at, 0x4425
    ctx->r1 = S32(0X4425 << 16);
    // 0x8033DCD4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8033DCD8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033DCDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033DCE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033DCE4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033DCE8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033DCEC: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x8033DCF0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033DCF4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033DCF8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8033DCFC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8033DD00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033DD04: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8033DD08: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033DD0C: mul.s       $f6, $f18, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x8033DD10: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8033DD14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033DD18: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8033DD1C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8033DD20: mul.s       $f18, $f10, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8033DD24: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8033DD28: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033DD2C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8033DD30: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x8033DD34: addiu       $a1, $a1, 0x45D0
    ctx->r5 = ADD32(ctx->r5, 0X45D0);
    // 0x8033DD38: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033DD3C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8033DD40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033DD44: jal         0x80027464
    // 0x8033DD48: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_8;
    // 0x8033DD48: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x8033DD4C: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8033DD50: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8033DD54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033DD58: beq         $t1, $at, L_8033DDB0
    if (ctx->r9 == ctx->r1) {
        // 0x8033DD5C: nop
    
            goto L_8033DDB0;
    }
    // 0x8033DD5C: nop

    // 0x8033DD60: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8033DD64: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8033DD68: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033DD6C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033DD70: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033DD74: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033DD78: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033DD7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033DD80: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033DD84: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x8033DD88: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8033DD8C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8033DD90: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8033DD94: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033DD98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033DD9C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8033DDA0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033DDA4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033DDA8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033DDAC: swc1        $f10, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f10.u32l;
L_8033DDB0:
    // 0x8033DDB0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8033DDB4: jal         0x8001B44C
    // 0x8033DDB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_9;
    // 0x8033DDB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8033DDBC: beq         $v0, $zero, L_8033DDE8
    if (ctx->r2 == 0) {
        // 0x8033DDC0: nop
    
            goto L_8033DDE8;
    }
    // 0x8033DDC0: nop

    // 0x8033DDC4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8033DDC8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8033DDCC: sh          $t4, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r12;
    // 0x8033DDD0: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8033DDD4: nop

    // 0x8033DDD8: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8033DDDC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8033DDE0: jal         0x8001BBDC
    // 0x8033DDE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_10;
    // 0x8033DDE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
L_8033DDE8:
    // 0x8033DDE8: b           L_8033DE08
    // 0x8033DDEC: nop

        goto L_8033DE08;
    // 0x8033DDEC: nop

L_8033DDF0:
    // 0x8033DDF0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x8033DDF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033DDF8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8033DDFC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8033DE00: nop

    // 0x8033DE04: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033DE08:
    // 0x8033DE08: b           L_8033DE10
    // 0x8033DE0C: nop

        goto L_8033DE10;
    // 0x8033DE0C: nop

L_8033DE10:
    // 0x8033DE10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8033DE14: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033DE18: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033DE1C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8033DE20: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033DE24: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8033DE28: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8033DE2C: jr          $ra
    // 0x8033DE30: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8033DE30: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8033B294_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033B294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033B298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033B29C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033B2A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033B2A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033B2A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033B2AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033B2B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B2B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B2B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033B2BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033B2C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033B2C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033B2C8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033B2CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033B2D0: nop

    // 0x8033B2D4: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x8033B2D8: nop

    // 0x8033B2DC: bne         $t1, $zero, L_8033B2FC
    if (ctx->r9 != 0) {
        // 0x8033B2E0: nop
    
            goto L_8033B2FC;
    }
    // 0x8033B2E0: nop

    // 0x8033B2E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B2E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B2EC: jal         0x8001BB34
    // 0x8033B2F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033B2F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8033B2F4: b           L_8033B324
    // 0x8033B2F8: nop

        goto L_8033B324;
    // 0x8033B2F8: nop

L_8033B2FC:
    // 0x8033B2FC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033B300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033B304: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x8033B308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033B30C: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x8033B310: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x8033B314: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8033B318: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x8033B31C: jal         0x8001BB34
    // 0x8033B320: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x8033B320: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_8033B324:
    // 0x8033B324: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033B328: nop

    // 0x8033B32C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8033B330: nop

    // 0x8033B334: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8033B338: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x8033B33C: beq         $at, $zero, L_8033B3E0
    if (ctx->r1 == 0) {
        // 0x8033B340: nop
    
            goto L_8033B3E0;
    }
    // 0x8033B340: nop

    // 0x8033B344: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033B348: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033B34C: addu        $at, $at, $t7
    gpr jr_addend_8033B358 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8033B350: lw          $t7, -0x1D50($at)
    ctx->r15 = ADD32(ctx->r1, -0X1D50);
    // 0x8033B354: nop

    // 0x8033B358: jr          $t7
    // 0x8033B35C: nop

    switch (jr_addend_8033B358 >> 2) {
        case 0: goto L_8033B360; break;
        case 1: goto L_8033B370; break;
        case 2: goto L_8033B380; break;
        case 3: goto L_8033B390; break;
        case 4: goto L_8033B3A0; break;
        case 5: goto L_8033B3B0; break;
        case 6: goto L_8033B3C0; break;
        case 7: goto L_8033B3D0; break;
        default: switch_error(__func__, 0x8033B358, 0x8033E2B0);
    }
    // 0x8033B35C: nop

L_8033B360:
    // 0x8033B360: jal         0x8033A288
    // 0x8033B364: nop

    func_8033A288_unk_bin_49(rdram, ctx);
        goto after_2;
    // 0x8033B364: nop

    after_2:
    // 0x8033B368: b           L_8033B3E8
    // 0x8033B36C: nop

        goto L_8033B3E8;
    // 0x8033B36C: nop

L_8033B370:
    // 0x8033B370: jal         0x8033A384
    // 0x8033B374: nop

    func_8033A384_unk_bin_49(rdram, ctx);
        goto after_3;
    // 0x8033B374: nop

    after_3:
    // 0x8033B378: b           L_8033B3E8
    // 0x8033B37C: nop

        goto L_8033B3E8;
    // 0x8033B37C: nop

L_8033B380:
    // 0x8033B380: jal         0x8033A57C
    // 0x8033B384: nop

    func_8033A57C_unk_bin_49(rdram, ctx);
        goto after_4;
    // 0x8033B384: nop

    after_4:
    // 0x8033B388: b           L_8033B3E8
    // 0x8033B38C: nop

        goto L_8033B3E8;
    // 0x8033B38C: nop

L_8033B390:
    // 0x8033B390: jal         0x8033A76C
    // 0x8033B394: nop

    func_8033A76C_unk_bin_49(rdram, ctx);
        goto after_5;
    // 0x8033B394: nop

    after_5:
    // 0x8033B398: b           L_8033B3E8
    // 0x8033B39C: nop

        goto L_8033B3E8;
    // 0x8033B39C: nop

L_8033B3A0:
    // 0x8033B3A0: jal         0x8033A958
    // 0x8033B3A4: nop

    func_8033A958_unk_bin_49(rdram, ctx);
        goto after_6;
    // 0x8033B3A4: nop

    after_6:
    // 0x8033B3A8: b           L_8033B3E8
    // 0x8033B3AC: nop

        goto L_8033B3E8;
    // 0x8033B3AC: nop

L_8033B3B0:
    // 0x8033B3B0: jal         0x8033AC24
    // 0x8033B3B4: nop

    func_8033AC24_unk_bin_49(rdram, ctx);
        goto after_7;
    // 0x8033B3B4: nop

    after_7:
    // 0x8033B3B8: b           L_8033B3E8
    // 0x8033B3BC: nop

        goto L_8033B3E8;
    // 0x8033B3BC: nop

L_8033B3C0:
    // 0x8033B3C0: jal         0x8033B060
    // 0x8033B3C4: nop

    func_8033B060_unk_bin_49(rdram, ctx);
        goto after_8;
    // 0x8033B3C4: nop

    after_8:
    // 0x8033B3C8: b           L_8033B3E8
    // 0x8033B3CC: nop

        goto L_8033B3E8;
    // 0x8033B3CC: nop

L_8033B3D0:
    // 0x8033B3D0: jal         0x8033B160
    // 0x8033B3D4: nop

    func_8033B160_unk_bin_49(rdram, ctx);
        goto after_9;
    // 0x8033B3D4: nop

    after_9:
    // 0x8033B3D8: b           L_8033B3E8
    // 0x8033B3DC: nop

        goto L_8033B3E8;
    // 0x8033B3DC: nop

L_8033B3E0:
    // 0x8033B3E0: b           L_8033B3E8
    // 0x8033B3E4: nop

        goto L_8033B3E8;
    // 0x8033B3E4: nop

L_8033B3E8:
    // 0x8033B3E8: b           L_8033B3F0
    // 0x8033B3EC: nop

        goto L_8033B3F0;
    // 0x8033B3EC: nop

L_8033B3F0:
    // 0x8033B3F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033B3F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033B3F8: jr          $ra
    // 0x8033B3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033B3FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033CA0C_unk_bin_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033CA0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033CA10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033CA14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033CA18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033CA1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033CA20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033CA24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CA28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033CA2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033CA30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033CA34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033CA38: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x8033CA3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033CA40: bne         $t8, $at, L_8033CA60
    if (ctx->r24 != ctx->r1) {
        // 0x8033CA44: nop
    
            goto L_8033CA60;
    }
    // 0x8033CA44: nop

    // 0x8033CA48: b           L_8033CA50
    // 0x8033CA4C: nop

        goto L_8033CA50;
    // 0x8033CA4C: nop

L_8033CA50:
    // 0x8033CA50: jal         0x8033C678
    // 0x8033CA54: nop

    func_8033C678_unk_bin_49(rdram, ctx);
        goto after_0;
    // 0x8033CA54: nop

    after_0:
    // 0x8033CA58: b           L_8033CA68
    // 0x8033CA5C: nop

        goto L_8033CA68;
    // 0x8033CA5C: nop

L_8033CA60:
    // 0x8033CA60: b           L_8033CA68
    // 0x8033CA64: nop

        goto L_8033CA68;
    // 0x8033CA64: nop

L_8033CA68:
    // 0x8033CA68: b           L_8033CA70
    // 0x8033CA6C: nop

        goto L_8033CA70;
    // 0x8033CA6C: nop

L_8033CA70:
    // 0x8033CA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033CA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033CA78: jr          $ra
    // 0x8033CA7C: nop

    return;
    // 0x8033CA7C: nop

;}
RECOMP_FUNC void func_80330100_unk_bin_50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330100: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330104: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330108: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033010C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330110: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330114: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330118: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033011C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330120: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330124: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330128: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033012C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330130: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330134: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330138: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033013C: nop

    // 0x80330140: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80330144: nop

    // 0x80330148: bne         $t1, $zero, L_80330184
    if (ctx->r9 != 0) {
        // 0x8033014C: nop
    
            goto L_80330184;
    }
    // 0x8033014C: nop

    // 0x80330150: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330154: nop

    // 0x80330158: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033015C: nop

    // 0x80330160: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80330164: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80330168: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033016C: nop

    // 0x80330170: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x80330174: jal         0x80014E80
    // 0x80330178: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80330178: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8033017C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330180: sh          $v0, 0x5A0($at)
    MEM_H(0X5A0, ctx->r1) = ctx->r2;
L_80330184:
    // 0x80330184: lui         $s0, 0x8033
    ctx->r16 = S32(0X8033 << 16);
    // 0x80330188: lh          $s0, 0x5A0($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X5A0);
    // 0x8033018C: nop

    // 0x80330190: beq         $s0, $zero, L_803301B8
    if (ctx->r16 == 0) {
        // 0x80330194: nop
    
            goto L_803301B8;
    }
    // 0x80330194: nop

    // 0x80330198: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033019C: beq         $s0, $at, L_803302DC
    if (ctx->r16 == ctx->r1) {
        // 0x803301A0: nop
    
            goto L_803302DC;
    }
    // 0x803301A0: nop

    // 0x803301A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x803301A8: beq         $s0, $at, L_80330400
    if (ctx->r16 == ctx->r1) {
        // 0x803301AC: nop
    
            goto L_80330400;
    }
    // 0x803301AC: nop

    // 0x803301B0: b           L_80330524
    // 0x803301B4: nop

        goto L_80330524;
    // 0x803301B4: nop

L_803301B8:
    // 0x803301B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803301BC: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x803301C0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x803301C4: addiu       $at, $zero, -0x270F
    ctx->r1 = ADD32(0, -0X270F);
    // 0x803301C8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x803301CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803301D0: lh          $t9, 0x5A4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X5A4);
    // 0x803301D4: nop

    // 0x803301D8: bne         $t9, $at, L_80330208
    if (ctx->r25 != ctx->r1) {
        // 0x803301DC: nop
    
            goto L_80330208;
    }
    // 0x803301DC: nop

    // 0x803301E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803301E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803301E8: jal         0x8002B114
    // 0x803301EC: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x803301EC: nop

    after_1:
    // 0x803301F0: jal         0x8006AA24
    // 0x803301F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006AA24(rdram, ctx);
        goto after_2;
    // 0x803301F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x803301F8: b           L_80330588
    // 0x803301FC: nop

        goto L_80330588;
    // 0x803301FC: nop

    // 0x80330200: b           L_803302D4
    // 0x80330204: nop

        goto L_803302D4;
    // 0x80330204: nop

L_80330208:
    // 0x80330208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033020C: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330210: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80330214: nop

    // 0x80330218: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x8033021C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330220: lh          $t4, 0x5A4($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X5A4);
    // 0x80330224: nop

    // 0x80330228: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8033022C: nop

    // 0x80330230: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330234: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    // 0x80330238: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033023C: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x80330240: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80330244: nop

    // 0x80330248: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8033024C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330250: lh          $t7, 0x5A6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5A6);
    // 0x80330254: nop

    // 0x80330258: addiu       $t8, $t7, 0xF
    ctx->r24 = ADD32(ctx->r15, 0XF);
    // 0x8033025C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80330260: nop

    // 0x80330264: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330268: swc1        $f10, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f10.u32l;
    // 0x8033026C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330270: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x80330274: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x80330278: nop

    // 0x8033027C: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x80330280: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330284: lh          $t4, 0x5A8($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X5A8);
    // 0x80330288: nop

    // 0x8033028C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80330290: nop

    // 0x80330294: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330298: swc1        $f18, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f18.u32l;
    // 0x8033029C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803302A0: lui         $t7, 0x8033
    ctx->r15 = S32(0X8033 << 16);
    // 0x803302A4: lh          $t5, 0xA6($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XA6);
    // 0x803302A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803302AC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x803302B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302B4: lh          $t7, 0x5AA($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X5AA);
    // 0x803302B8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803302BC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803302C0: jal         0x80015538
    // 0x803302C4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803302C4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x803302C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803302CC: nop

    // 0x803302D0: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
L_803302D4:
    // 0x803302D4: b           L_80330524
    // 0x803302D8: nop

        goto L_80330524;
    // 0x803302D8: nop

L_803302DC:
    // 0x803302DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803302E0: lui         $t4, 0x8033
    ctx->r12 = S32(0X8033 << 16);
    // 0x803302E4: lh          $t1, 0xA6($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XA6);
    // 0x803302E8: addiu       $at, $zero, -0x270F
    ctx->r1 = ADD32(0, -0X270F);
    // 0x803302EC: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x803302F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803302F4: lh          $t4, 0x2D84($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2D84);
    // 0x803302F8: nop

    // 0x803302FC: bne         $t4, $at, L_8033032C
    if (ctx->r12 != ctx->r1) {
        // 0x80330300: nop
    
            goto L_8033032C;
    }
    // 0x80330300: nop

    // 0x80330304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330308: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033030C: jal         0x8002B114
    // 0x80330310: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80330310: nop

    after_4:
    // 0x80330314: jal         0x8006AA24
    // 0x80330318: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006AA24(rdram, ctx);
        goto after_5;
    // 0x80330318: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x8033031C: b           L_80330588
    // 0x80330320: nop

        goto L_80330588;
    // 0x80330320: nop

    // 0x80330324: b           L_803303F8
    // 0x80330328: nop

        goto L_803303F8;
    // 0x80330328: nop

L_8033032C:
    // 0x8033032C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80330330: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330334: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80330338: nop

    // 0x8033033C: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x80330340: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330344: lh          $t6, 0x2D84($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D84);
    // 0x80330348: nop

    // 0x8033034C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80330350: nop

    // 0x80330354: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330358: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
    // 0x8033035C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330360: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x80330364: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80330368: nop

    // 0x8033036C: sll         $t2, $t8, 3
    ctx->r10 = S32(ctx->r24 << 3);
    // 0x80330370: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80330374: lh          $t1, 0x2D86($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X2D86);
    // 0x80330378: nop

    // 0x8033037C: addiu       $t3, $t1, 0xF
    ctx->r11 = ADD32(ctx->r9, 0XF);
    // 0x80330380: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80330384: nop

    // 0x80330388: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8033038C: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
    // 0x80330390: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330394: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330398: lh          $t0, 0xA6($t4)
    ctx->r8 = MEM_H(ctx->r12, 0XA6);
    // 0x8033039C: nop

    // 0x803303A0: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x803303A4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x803303A8: lh          $t6, 0x2D88($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D88);
    // 0x803303AC: nop

    // 0x803303B0: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x803303B4: nop

    // 0x803303B8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803303BC: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x803303C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803303C4: lui         $t1, 0x8033
    ctx->r9 = S32(0X8033 << 16);
    // 0x803303C8: lh          $t8, 0xA6($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA6);
    // 0x803303CC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803303D0: sll         $t2, $t8, 3
    ctx->r10 = S32(ctx->r24 << 3);
    // 0x803303D4: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x803303D8: lh          $t1, 0x2D8A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X2D8A);
    // 0x803303DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803303E0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x803303E4: jal         0x80015538
    // 0x803303E8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x803303E8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_6:
    // 0x803303EC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803303F0: nop

    // 0x803303F4: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
L_803303F8:
    // 0x803303F8: b           L_80330524
    // 0x803303FC: nop

        goto L_80330524;
    // 0x803303FC: nop

L_80330400:
    // 0x80330400: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80330404: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80330408: lh          $t0, 0xA6($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA6);
    // 0x8033040C: addiu       $at, $zero, -0x270F
    ctx->r1 = ADD32(0, -0X270F);
    // 0x80330410: sll         $t5, $t0, 3
    ctx->r13 = S32(ctx->r8 << 3);
    // 0x80330414: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80330418: lh          $t6, 0x52E4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X52E4);
    // 0x8033041C: nop

    // 0x80330420: bne         $t6, $at, L_80330450
    if (ctx->r14 != ctx->r1) {
        // 0x80330424: nop
    
            goto L_80330450;
    }
    // 0x80330424: nop

    // 0x80330428: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033042C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330430: jal         0x8002B114
    // 0x80330434: nop

    func_8002B114(rdram, ctx);
        goto after_7;
    // 0x80330434: nop

    after_7:
    // 0x80330438: jal         0x8006AA24
    // 0x8033043C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006AA24(rdram, ctx);
        goto after_8;
    // 0x8033043C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x80330440: b           L_80330588
    // 0x80330444: nop

        goto L_80330588;
    // 0x80330444: nop

    // 0x80330448: b           L_8033051C
    // 0x8033044C: nop

        goto L_8033051C;
    // 0x8033044C: nop

L_80330450:
    // 0x80330450: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80330454: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x80330458: lh          $t9, 0xA6($t4)
    ctx->r25 = MEM_H(ctx->r12, 0XA6);
    // 0x8033045C: nop

    // 0x80330460: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x80330464: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80330468: lh          $t2, 0x52E4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X52E4);
    // 0x8033046C: nop

    // 0x80330470: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80330474: nop

    // 0x80330478: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033047C: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x80330480: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330484: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x80330488: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033048C: nop

    // 0x80330490: sll         $t7, $t3, 3
    ctx->r15 = S32(ctx->r11 << 3);
    // 0x80330494: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80330498: lh          $t0, 0x52E6($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X52E6);
    // 0x8033049C: nop

    // 0x803304A0: addiu       $t5, $t0, 0xF
    ctx->r13 = ADD32(ctx->r8, 0XF);
    // 0x803304A4: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x803304A8: nop

    // 0x803304AC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803304B0: swc1        $f18, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f18.u32l;
    // 0x803304B4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803304B8: lui         $t2, 0x8033
    ctx->r10 = S32(0X8033 << 16);
    // 0x803304BC: lh          $t9, 0xA6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XA6);
    // 0x803304C0: nop

    // 0x803304C4: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x803304C8: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x803304CC: lh          $t2, 0x52E8($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X52E8);
    // 0x803304D0: nop

    // 0x803304D4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x803304D8: nop

    // 0x803304DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803304E0: swc1        $f6, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f6.u32l;
    // 0x803304E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803304E8: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x803304EC: lh          $t3, 0xA6($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XA6);
    // 0x803304F0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803304F4: sll         $t7, $t3, 3
    ctx->r15 = S32(ctx->r11 << 3);
    // 0x803304F8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x803304FC: lh          $t0, 0x52EA($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X52EA);
    // 0x80330500: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80330504: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80330508: jal         0x80015538
    // 0x8033050C: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8033050C: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_9:
    // 0x80330510: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330514: nop

    // 0x80330518: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
L_8033051C:
    // 0x8033051C: b           L_80330524
    // 0x80330520: nop

        goto L_80330524;
    // 0x80330520: nop

L_80330524:
    // 0x80330524: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80330528: lh          $t1, 0x7618($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7618);
    // 0x8033052C: nop

    // 0x80330530: bne         $t1, $zero, L_80330580
    if (ctx->r9 != 0) {
        // 0x80330534: nop
    
            goto L_80330580;
    }
    // 0x80330534: nop

    // 0x80330538: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033053C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80330540: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330544: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80330548: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033054C: lui         $at, 0x8033
    ctx->r1 = S32(0X8033 << 16);
    // 0x80330550: lwc1        $f4, 0x7B20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7B20);
    // 0x80330554: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80330558: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x8033055C: nop

    // 0x80330560: bc1f        L_80330580
    if (!c1cs) {
        // 0x80330564: nop
    
            goto L_80330580;
    }
    // 0x80330564: nop

    // 0x80330568: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033056C: nop

    // 0x80330570: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x80330574: nop

    // 0x80330578: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x8033057C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80330580:
    // 0x80330580: b           L_80330588
    // 0x80330584: nop

        goto L_80330588;
    // 0x80330584: nop

L_80330588:
    // 0x80330588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033058C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330590: jr          $ra
    // 0x80330594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80330594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330598: nop

    // 0x8033059C: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_50(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330010: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
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
    // 0x80330040: addiu       $a1, $a1, 0x47E0
    ctx->r5 = ADD32(ctx->r5, 0X47E0);
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
    // 0x80330064: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330068: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8033006C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330070: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330074: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330078: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033007C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330080: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330084: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330088: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033008C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80330090: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80330094: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330098: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033009C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803300A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803300A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803300AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803300B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300B4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803300B8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803300BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803300C0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803300C4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803300C8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803300D4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803300E4: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x803300E8: b           L_803300F0
    // 0x803300EC: nop

        goto L_803300F0;
    // 0x803300EC: nop

L_803300F0:
    // 0x803300F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803300F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803300F8: jr          $ra
    // 0x803300FC: nop

    return;
    // 0x803300FC: nop

;}
RECOMP_FUNC void func_80338938_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338938: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8033893C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338940: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338944: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338948: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033894C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338950: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338954: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338958: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033895C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338960: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338964: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338968: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033896C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80338970: nop

    // 0x80338974: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338978: nop

    // 0x8033897C: bne         $t1, $zero, L_803389C8
    if (ctx->r9 != 0) {
        // 0x80338980: nop
    
            goto L_803389C8;
    }
    // 0x80338980: nop

    // 0x80338984: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338988: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033898C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80338990: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80338994: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338998: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8033899C: nop

    // 0x803389A0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803389A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803389A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803389AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803389B0: nop

    // 0x803389B4: swc1        $f6, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f6.u32l;
    // 0x803389B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389C0: jal         0x8001BB34
    // 0x803389C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803389C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_803389C8:
    // 0x803389C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389D0: jal         0x80029C40
    // 0x803389D4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x803389D4: nop

    after_1:
    // 0x803389D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389E0: jal         0x80029D04
    // 0x803389E4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x803389E4: nop

    after_2:
    // 0x803389E8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803389EC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803389F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803389F4: lwc1        $f12, 0xD4($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x803389F8: jal         0x80015538
    // 0x803389FC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803389FC: nop

    after_3:
    // 0x80338A00: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338A04: nop

    // 0x80338A08: swc1        $f0, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f0.u32l;
    // 0x80338A0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80338A10: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80338A14: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x80338A18: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338A1C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338A20: jal         0x80015538
    // 0x80338A24: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80338A24: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_4:
    // 0x80338A28: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80338A2C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80338A30: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80338A34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80338A38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80338A3C: nop

    // 0x80338A40: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80338A44: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80338A48: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80338A4C: sh          $t1, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = ctx->r9;
    // 0x80338A50: nop

    // 0x80338A54: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338A58: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338A5C: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x80338A60: lwc1        $f5, -0x64F8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X64F8);
    // 0x80338A64: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80338A68: lwc1        $f4, -0x64F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64F4);
    // 0x80338A6C: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80338A70: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80338A74: jal         0x80034970
    // 0x80338A78: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x80338A78: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_5:
    // 0x80338A7C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338A80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80338A84: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80338A88: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80338A8C: swc1        $f10, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f10.u32l;
    // 0x80338A90: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80338A94: nop

    // 0x80338A98: lh          $t8, 0xAC($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAC);
    // 0x80338A9C: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x80338AA0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80338AA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338AA8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80338AAC: addiu       $t0, $t9, 0x50
    ctx->r8 = ADD32(ctx->r25, 0X50);
    // 0x80338AB0: bne         $t7, $t0, L_80338B3C
    if (ctx->r15 != ctx->r8) {
        // 0x80338AB4: nop
    
            goto L_80338B3C;
    }
    // 0x80338AB4: nop

    // 0x80338AB8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80338ABC: nop

    // 0x80338AC0: lh          $t2, 0x100($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X100);
    // 0x80338AC4: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x80338AC8: nop

    // 0x80338ACC: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80338AD0: beq         $at, $zero, L_80338B24
    if (ctx->r1 == 0) {
        // 0x80338AD4: nop
    
            goto L_80338B24;
    }
    // 0x80338AD4: nop

    // 0x80338AD8: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80338ADC: beq         $at, $zero, L_80338B24
    if (ctx->r1 == 0) {
        // 0x80338AE0: nop
    
            goto L_80338B24;
    }
    // 0x80338AE0: nop

    // 0x80338AE4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80338AE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338AEC: lh          $t5, 0xAC($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAC);
    // 0x80338AF0: nop

    // 0x80338AF4: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80338AF8: addu        $t8, $t4, $t6
    ctx->r24 = ADD32(ctx->r12, ctx->r14);
    // 0x80338AFC: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x80338B00: nop

    // 0x80338B04: bne         $t9, $at, L_80338B24
    if (ctx->r25 != ctx->r1) {
        // 0x80338B08: nop
    
            goto L_80338B24;
    }
    // 0x80338B08: nop

    // 0x80338B0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338B10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B18: lh          $a1, 0xAC($t7)
    ctx->r5 = MEM_H(ctx->r15, 0XAC);
    // 0x80338B1C: jal         0x8033852C
    // 0x80338B20: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8033852C_unk_bin_51(rdram, ctx);
        goto after_6;
    // 0x80338B20: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_6:
L_80338B24:
    // 0x80338B24: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80338B28: nop

    // 0x80338B2C: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x80338B30: nop

    // 0x80338B34: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80338B38: sh          $t2, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = ctx->r10;
L_80338B3C:
    // 0x80338B3C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338B40: nop

    // 0x80338B44: lh          $t5, 0xAA($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XAA);
    // 0x80338B48: nop

    // 0x80338B4C: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x80338B50: sh          $t4, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r12;
    // 0x80338B54: jal         0x8033908C
    // 0x80338B58: nop

    func_8033908C_unk_bin_51(rdram, ctx);
        goto after_7;
    // 0x80338B58: nop

    after_7:
    // 0x80338B5C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80338B60: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x80338B64: nop

    // 0x80338B68: bne         $t6, $zero, L_80338B98
    if (ctx->r14 != 0) {
        // 0x80338B6C: nop
    
            goto L_80338B98;
    }
    // 0x80338B6C: nop

    // 0x80338B70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B78: jal         0x8001BB34
    // 0x80338B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x80338B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80338B80: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80338B84: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80338B88: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80338B8C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338B90: b           L_80338BF8
    // 0x80338B94: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
        goto L_80338BF8;
    // 0x80338B94: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
L_80338B98:
    // 0x80338B98: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80338B9C: nop

    // 0x80338BA0: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x80338BA4: nop

    // 0x80338BA8: andi        $t0, $t2, 0x3
    ctx->r8 = ctx->r10 & 0X3;
    // 0x80338BAC: bne         $t0, $zero, L_80338BCC
    if (ctx->r8 != 0) {
        // 0x80338BB0: nop
    
            goto L_80338BCC;
    }
    // 0x80338BB0: nop

    // 0x80338BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338BBC: jal         0x8001BB34
    // 0x80338BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_9;
    // 0x80338BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80338BC4: b           L_80338BDC
    // 0x80338BC8: nop

        goto L_80338BDC;
    // 0x80338BC8: nop

L_80338BCC:
    // 0x80338BCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338BD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338BD4: jal         0x8001BB34
    // 0x80338BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_10;
    // 0x80338BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_80338BDC:
    // 0x80338BDC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80338BE0: nop

    // 0x80338BE4: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x80338BE8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80338BEC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80338BF0: nop

    // 0x80338BF4: swc1        $f16, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f16.u32l;
L_80338BF8:
    // 0x80338BF8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338BFC: nop

    // 0x80338C00: lh          $t6, 0xAA($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XAA);
    // 0x80338C04: nop

    // 0x80338C08: slti        $at, $t6, 0xC8
    ctx->r1 = SIGNED(ctx->r14) < 0XC8 ? 1 : 0;
    // 0x80338C0C: bne         $at, $zero, L_80338C28
    if (ctx->r1 != 0) {
        // 0x80338C10: nop
    
            goto L_80338C28;
    }
    // 0x80338C10: nop

    // 0x80338C14: jal         0x80339150
    // 0x80338C18: nop

    func_80339150_unk_bin_51(rdram, ctx);
        goto after_11;
    // 0x80338C18: nop

    after_11:
    // 0x80338C1C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80338C20: nop

    // 0x80338C24: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
L_80338C28:
    // 0x80338C28: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80338C2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80338C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338C34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338C38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80338C3C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80338C40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80338C44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80338C48: jal         0x80029018
    // 0x80338C4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_12;
    // 0x80338C4C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x80338C50: beq         $v0, $zero, L_80338CE0
    if (ctx->r2 == 0) {
        // 0x80338C54: nop
    
            goto L_80338CE0;
    }
    // 0x80338C54: nop

    // 0x80338C58: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338C5C: addiu       $t9, $zero, 0x348
    ctx->r25 = ADD32(0, 0X348);
    // 0x80338C60: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x80338C64: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80338C68: nop

    // 0x80338C6C: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80338C70: nop

    // 0x80338C74: addiu       $t0, $t2, 0x2
    ctx->r8 = ADD32(ctx->r10, 0X2);
    // 0x80338C78: bgez        $t0, L_80338C8C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80338C7C: andi        $t5, $t0, 0x3
        ctx->r13 = ctx->r8 & 0X3;
            goto L_80338C8C;
    }
    // 0x80338C7C: andi        $t5, $t0, 0x3
    ctx->r13 = ctx->r8 & 0X3;
    // 0x80338C80: beq         $t5, $zero, L_80338C8C
    if (ctx->r13 == 0) {
        // 0x80338C84: nop
    
            goto L_80338C8C;
    }
    // 0x80338C84: nop

    // 0x80338C88: addiu       $t5, $t5, -0x4
    ctx->r13 = ADD32(ctx->r13, -0X4);
L_80338C8C:
    // 0x80338C8C: sh          $t5, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r13;
    // 0x80338C90: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80338C94: nop

    // 0x80338C98: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x80338C9C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338CA0: nop

    // 0x80338CA4: lh          $t6, 0xA8($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XA8);
    // 0x80338CA8: nop

    // 0x80338CAC: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80338CB0: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80338CB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338CB8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80338CBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338CC0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80338CC4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x80338CC8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338CCC: nop

    // 0x80338CD0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338CD4: swc1        $f8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f8.u32l;
    // 0x80338CD8: b           L_80338DAC
    // 0x80338CDC: nop

        goto L_80338DAC;
    // 0x80338CDC: nop

L_80338CE0:
    // 0x80338CE0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80338CE4: nop

    // 0x80338CE8: lh          $t7, 0xA6($t9)
    ctx->r15 = MEM_H(ctx->r25, 0XA6);
    // 0x80338CEC: nop

    // 0x80338CF0: addiu       $t2, $t7, -0x4
    ctx->r10 = ADD32(ctx->r15, -0X4);
    // 0x80338CF4: sh          $t2, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r10;
    // 0x80338CF8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80338CFC: nop

    // 0x80338D00: lh          $t5, 0xA6($t0)
    ctx->r13 = MEM_H(ctx->r8, 0XA6);
    // 0x80338D04: nop

    // 0x80338D08: bgtz        $t5, L_80338DA4
    if (SIGNED(ctx->r13) > 0) {
        // 0x80338D0C: nop
    
            goto L_80338DA4;
    }
    // 0x80338D0C: nop

    // 0x80338D10: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80338D14: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80338D18: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x80338D1C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80338D20: nop

    // 0x80338D24: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80338D28: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80338D2C: addiu       $t8, $zero, 0x348
    ctx->r24 = ADD32(0, 0X348);
    // 0x80338D30: sh          $t8, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r24;
    // 0x80338D34: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80338D38: nop

    // 0x80338D3C: lh          $t2, 0xA8($t7)
    ctx->r10 = MEM_H(ctx->r15, 0XA8);
    // 0x80338D40: nop

    // 0x80338D44: addiu       $t9, $t2, 0x2
    ctx->r25 = ADD32(ctx->r10, 0X2);
    // 0x80338D48: bgez        $t9, L_80338D5C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80338D4C: andi        $t0, $t9, 0x3
        ctx->r8 = ctx->r25 & 0X3;
            goto L_80338D5C;
    }
    // 0x80338D4C: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80338D50: beq         $t0, $zero, L_80338D5C
    if (ctx->r8 == 0) {
        // 0x80338D54: nop
    
            goto L_80338D5C;
    }
    // 0x80338D54: nop

    // 0x80338D58: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_80338D5C:
    // 0x80338D5C: sh          $t0, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r8;
    // 0x80338D60: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80338D64: nop

    // 0x80338D68: lh          $t1, 0xA8($t5)
    ctx->r9 = MEM_H(ctx->r13, 0XA8);
    // 0x80338D6C: nop

    // 0x80338D70: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80338D74: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80338D78: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338D7C: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x80338D80: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338D84: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80338D88: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x80338D8C: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80338D90: nop

    // 0x80338D94: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80338D98: swc1        $f16, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f16.u32l;
    // 0x80338D9C: b           L_80338DAC
    // 0x80338DA0: nop

        goto L_80338DAC;
    // 0x80338DA0: nop

L_80338DA4:
    // 0x80338DA4: b           L_80338DAC
    // 0x80338DA8: nop

        goto L_80338DAC;
    // 0x80338DA8: nop

L_80338DAC:
    // 0x80338DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338DB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80338DB4: jr          $ra
    // 0x80338DB8: nop

    return;
    // 0x80338DB8: nop

;}
RECOMP_FUNC void func_80339310_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339310: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80339314: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80339318: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033931C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339320: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339324: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339328: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033932C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339330: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339334: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339338: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033933C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339340: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339344: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80339348: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033934C: nop

    // 0x80339350: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80339354: nop

    // 0x80339358: bne         $t1, $zero, L_80339378
    if (ctx->r9 != 0) {
        // 0x8033935C: nop
    
            goto L_80339378;
    }
    // 0x8033935C: nop

    // 0x80339360: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80339364: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80339368: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033936C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339370: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x80339374: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
L_80339378:
    // 0x80339378: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033937C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339380: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x80339384: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339388: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x8033938C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80339390: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80339394: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80339398: jal         0x8001BB34
    // 0x8033939C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8033939C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x803393A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803393A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803393A8: jal         0x80029C40
    // 0x803393AC: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x803393AC: nop

    after_1:
    // 0x803393B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803393B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803393B8: jal         0x80029D04
    // 0x803393BC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x803393BC: nop

    after_2:
    // 0x803393C0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803393C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803393C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803393CC: lwc1        $f12, 0xD4($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0XD4);
    // 0x803393D0: jal         0x80015538
    // 0x803393D4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x803393D4: nop

    after_3:
    // 0x803393D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803393DC: nop

    // 0x803393E0: swc1        $f0, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f0.u32l;
    // 0x803393E4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803393E8: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x803393EC: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x803393F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803393F4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x803393F8: jal         0x80015538
    // 0x803393FC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803393FC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x80339400: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80339404: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339408: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8033940C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80339410: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80339414: nop

    // 0x80339418: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033941C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80339420: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80339424: sh          $t4, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r12;
    // 0x80339428: nop

    // 0x8033942C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80339430: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80339434: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x80339438: lwc1        $f17, -0x64D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X64D8);
    // 0x8033943C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80339440: lwc1        $f16, -0x64D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X64D4);
    // 0x80339444: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80339448: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8033944C: jal         0x80034970
    // 0x80339450: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x80339450: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_5:
    // 0x80339454: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80339458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033945C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339460: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80339464: swc1        $f6, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f6.u32l;
    // 0x80339468: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033946C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80339470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339478: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033947C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80339480: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80339484: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80339488: jal         0x80029018
    // 0x8033948C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x8033948C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80339490: beq         $v0, $zero, L_8033950C
    if (ctx->r2 == 0) {
        // 0x80339494: nop
    
            goto L_8033950C;
    }
    // 0x80339494: nop

    // 0x80339498: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033949C: nop

    // 0x803394A0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x803394A4: nop

    // 0x803394A8: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x803394AC: bgez        $t1, L_803394C0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x803394B0: andi        $t2, $t1, 0x3
        ctx->r10 = ctx->r9 & 0X3;
            goto L_803394C0;
    }
    // 0x803394B0: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x803394B4: beq         $t2, $zero, L_803394C0
    if (ctx->r10 == 0) {
        // 0x803394B8: nop
    
            goto L_803394C0;
    }
    // 0x803394B8: nop

    // 0x803394BC: addiu       $t2, $t2, -0x4
    ctx->r10 = ADD32(ctx->r10, -0X4);
L_803394C0:
    // 0x803394C0: sh          $t2, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r10;
    // 0x803394C4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803394C8: nop

    // 0x803394CC: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x803394D0: nop

    // 0x803394D4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803394D8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803394DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803394E0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803394E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803394E8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803394EC: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x803394F0: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x803394F4: nop

    // 0x803394F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803394FC: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
    // 0x80339500: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339504: addiu       $t6, $zero, 0x348
    ctx->r14 = ADD32(0, 0X348);
    // 0x80339508: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
L_8033950C:
    // 0x8033950C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80339510: nop

    // 0x80339514: lh          $t0, 0xA6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA6);
    // 0x80339518: nop

    // 0x8033951C: addiu       $t1, $t0, -0x4
    ctx->r9 = ADD32(ctx->r8, -0X4);
    // 0x80339520: sh          $t1, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r9;
    // 0x80339524: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80339528: nop

    // 0x8033952C: lh          $t9, 0xA6($t2)
    ctx->r25 = MEM_H(ctx->r10, 0XA6);
    // 0x80339530: nop

    // 0x80339534: bgtz        $t9, L_803395B0
    if (SIGNED(ctx->r25) > 0) {
        // 0x80339538: nop
    
            goto L_803395B0;
    }
    // 0x80339538: nop

    // 0x8033953C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80339540: nop

    // 0x80339544: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x80339548: nop

    // 0x8033954C: addiu       $t3, $t5, 0x2
    ctx->r11 = ADD32(ctx->r13, 0X2);
    // 0x80339550: bgez        $t3, L_80339564
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80339554: andi        $t6, $t3, 0x3
        ctx->r14 = ctx->r11 & 0X3;
            goto L_80339564;
    }
    // 0x80339554: andi        $t6, $t3, 0x3
    ctx->r14 = ctx->r11 & 0X3;
    // 0x80339558: beq         $t6, $zero, L_80339564
    if (ctx->r14 == 0) {
        // 0x8033955C: nop
    
            goto L_80339564;
    }
    // 0x8033955C: nop

    // 0x80339560: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_80339564:
    // 0x80339564: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
    // 0x80339568: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033956C: nop

    // 0x80339570: lh          $t0, 0xA8($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA8);
    // 0x80339574: nop

    // 0x80339578: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033957C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80339580: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80339584: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80339588: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033958C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339590: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80339594: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80339598: nop

    // 0x8033959C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803395A0: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x803395A4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803395A8: addiu       $t8, $zero, 0x348
    ctx->r24 = ADD32(0, 0X348);
    // 0x803395AC: sh          $t8, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r24;
L_803395B0:
    // 0x803395B0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803395B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803395B8: lh          $t5, 0x108($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X108);
    // 0x803395BC: nop

    // 0x803395C0: bne         $t5, $at, L_80339610
    if (ctx->r13 != ctx->r1) {
        // 0x803395C4: nop
    
            goto L_80339610;
    }
    // 0x803395C4: nop

    // 0x803395C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803395CC: nop

    // 0x803395D0: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x803395D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803395D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803395DC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803395E0: nop

    // 0x803395E4: swc1        $f8, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f8.u32l;
    // 0x803395E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803395EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803395F0: sh          $t4, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r12;
    // 0x803395F4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803395F8: nop

    // 0x803395FC: sh          $zero, 0xAC($t1)
    MEM_H(0XAC, ctx->r9) = 0;
    // 0x80339600: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339604: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339608: jal         0x8001BB34
    // 0x8033960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x8033960C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_80339610:
    // 0x80339610: b           L_80339618
    // 0x80339614: nop

        goto L_80339618;
    // 0x80339614: nop

L_80339618:
    // 0x80339618: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033961C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80339620: jr          $ra
    // 0x80339624: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80339624: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803382E0_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803382E0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x803382E4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x803382E8: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x803382EC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x803382F0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803382F4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x803382F8: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x803382FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338300: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80338304: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338308: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033830C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80338310: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80338314: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80338318: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8033831C: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80338320: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338324: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80338328: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033832C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338330: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338334: sh          $a1, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r5;
    // 0x80338338: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8033833C: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80338340: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80338344: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80338348: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033834C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338350: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80338354: sh          $zero, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = 0;
    // 0x80338358: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x8033835C: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80338360: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338364: addu        $t0, $t0, $a0
    ctx->r8 = ADD32(ctx->r8, ctx->r4);
    // 0x80338368: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033836C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338370: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338374: sh          $zero, 0x4202($at)
    MEM_H(0X4202, ctx->r1) = 0;
    // 0x80338378: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8033837C: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80338380: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80338384: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80338388: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033838C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338390: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80338394: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80338398: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x8033839C: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x803383A0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803383A4: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x803383A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803383AC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x803383B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803383B4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x803383B8: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x803383BC: sll         $t4, $a0, 2
    ctx->r12 = S32(ctx->r4 << 2);
    // 0x803383C0: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x803383C4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803383C8: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x803383CC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803383D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803383D4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803383D8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803383DC: sh          $t3, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r11;
    // 0x803383E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x803383E4: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x803383E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803383EC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x803383F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803383F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803383F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803383FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80338400: sb          $t5, 0x4253($at)
    MEM_B(0X4253, ctx->r1) = ctx->r13;
    // 0x80338404: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80338408: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8033840C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338410: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338414: lwc1        $f6, -0x6500($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6500);
    // 0x80338418: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8033841C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338420: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338424: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80338428: swc1        $f6, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f6.u32l;
    // 0x8033842C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80338430: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80338434: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338438: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8033843C: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80338440: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80338444: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80338448: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x8033844C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80338450: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80338454: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338458: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033845C: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x80338460: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80338464: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80338468: lwc1        $f12, 0xC($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8033846C: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x80338470: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80338474: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x80338478: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033847C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338480: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80338484: swc1        $f12, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f12.u32l;
    // 0x80338488: swc1        $f12, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f12.u32l;
    // 0x8033848C: b           L_80338494
    // 0x80338490: nop

        goto L_80338494;
    // 0x80338490: nop

L_80338494:
    // 0x80338494: jr          $ra
    // 0x80338498: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80338498: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80339234_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80339238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033923C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339240: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80339244: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339248: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033924C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339250: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339254: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339258: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033925C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339260: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339264: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80339268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033926C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339270: jal         0x8001BB34
    // 0x80339274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80339274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80339278: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
L_8033927C:
    // 0x8033927C: lh          $t1, 0x18($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X18);
    // 0x80339280: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80339284: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80339288: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8033928C: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80339290: nop

    // 0x80339294: sh          $t4, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r12;
    // 0x80339298: lh          $t5, 0x1A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1A);
    // 0x8033929C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803392A0: beq         $t5, $at, L_803392C8
    if (ctx->r13 == ctx->r1) {
        // 0x803392A4: nop
    
            goto L_803392C8;
    }
    // 0x803392A4: nop

    // 0x803392A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803392AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803392B0: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x803392B4: jal         0x800281A4
    // 0x803392B8: nop

    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x803392B8: nop

    after_1:
    // 0x803392BC: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x803392C0: jal         0x8002B0E4
    // 0x803392C4: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x803392C4: nop

    after_2:
L_803392C8:
    // 0x803392C8: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x803392CC: nop

    // 0x803392D0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803392D4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x803392D8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803392DC: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x803392E0: bne         $at, $zero, L_8033927C
    if (ctx->r1 != 0) {
        // 0x803392E4: sh          $t7, 0x18($sp)
        MEM_H(0X18, ctx->r29) = ctx->r15;
            goto L_8033927C;
    }
    // 0x803392E4: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x803392E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803392EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803392F0: jal         0x8002B0E4
    // 0x803392F4: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x803392F4: nop

    after_3:
    // 0x803392F8: b           L_80339300
    // 0x803392FC: nop

        goto L_80339300;
    // 0x803392FC: nop

L_80339300:
    // 0x80339300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80339308: jr          $ra
    // 0x8033930C: nop

    return;
    // 0x8033930C: nop

;}
RECOMP_FUNC void func_8033908C_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033908C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80339090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80339094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80339098: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033909C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803390A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803390A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803390A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803390AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803390B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803390B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803390B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803390BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803390C0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x803390C4: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x803390C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x803390CC: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x803390D0: lh          $t1, 0x100($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X100);
    // 0x803390D4: nop

    // 0x803390D8: blez        $t1, L_8033912C
    if (SIGNED(ctx->r9) <= 0) {
        // 0x803390DC: nop
    
            goto L_8033912C;
    }
    // 0x803390DC: nop

L_803390E0:
    // 0x803390E0: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x803390E4: jal         0x80338DBC
    // 0x803390E8: nop

    func_80338DBC_unk_bin_51(rdram, ctx);
        goto after_0;
    // 0x803390E8: nop

    after_0:
    // 0x803390EC: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x803390F0: lh          $t3, 0x2A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2A);
    // 0x803390F4: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x803390F8: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x803390FC: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x80339100: sh          $t4, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r12;
    // 0x80339104: lh          $t5, 0x28($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X28);
    // 0x80339108: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033910C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80339110: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x80339114: lh          $t0, 0x100($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X100);
    // 0x80339118: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8033911C: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80339120: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80339124: bne         $at, $zero, L_803390E0
    if (ctx->r1 != 0) {
        // 0x80339128: nop
    
            goto L_803390E0;
    }
    // 0x80339128: nop

L_8033912C:
    // 0x8033912C: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x80339130: b           L_80339140
    // 0x80339134: nop

        goto L_80339140;
    // 0x80339134: nop

    // 0x80339138: b           L_80339140
    // 0x8033913C: nop

        goto L_80339140;
    // 0x8033913C: nop

L_80339140:
    // 0x80339140: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339144: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80339148: jr          $ra
    // 0x8033914C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8033914C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803399E4_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803399E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803399E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803399EC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803399F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x803399F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803399F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803399FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339A00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339A04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339A0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339A10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339A14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339A18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339A1C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80339A20: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80339A24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80339A28: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x80339A2C: nop

    // 0x80339A30: bne         $t1, $at, L_80339A48
    if (ctx->r9 != ctx->r1) {
        // 0x80339A34: nop
    
            goto L_80339A48;
    }
    // 0x80339A34: nop

    // 0x80339A38: jal         0x80339734
    // 0x80339A3C: nop

    func_80339734_unk_bin_51(rdram, ctx);
        goto after_0;
    // 0x80339A3C: nop

    after_0:
    // 0x80339A40: b           L_80339AD8
    // 0x80339A44: nop

        goto L_80339AD8;
    // 0x80339A44: nop

L_80339A48:
    // 0x80339A48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339A4C: nop

    // 0x80339A50: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80339A54: nop

    // 0x80339A58: blez        $t3, L_80339AD8
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80339A5C: nop
    
            goto L_80339AD8;
    }
    // 0x80339A5C: nop

    // 0x80339A60: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339A64: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80339A68: lwc1        $f6, -0x64C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X64C0);
    // 0x80339A6C: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80339A70: nop

    // 0x80339A74: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80339A78: nop

    // 0x80339A7C: bc1f        L_80339AC0
    if (!c1cs) {
        // 0x80339A80: nop
    
            goto L_80339AC0;
    }
    // 0x80339A80: nop

    // 0x80339A84: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80339A88: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80339A8C: lwc1        $f10, -0x64BC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X64BC);
    // 0x80339A90: lwc1        $f8, 0xC($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0XC);
    // 0x80339A94: nop

    // 0x80339A98: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80339A9C: swc1        $f16, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f16.u32l;
    // 0x80339AA0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80339AA4: nop

    // 0x80339AA8: lwc1        $f20, 0xC($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80339AAC: nop

    // 0x80339AB0: swc1        $f20, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f20.u32l;
    // 0x80339AB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80339AB8: nop

    // 0x80339ABC: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
L_80339AC0:
    // 0x80339AC0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80339AC4: nop

    // 0x80339AC8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x80339ACC: nop

    // 0x80339AD0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80339AD4: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_80339AD8:
    // 0x80339AD8: b           L_80339AE0
    // 0x80339ADC: nop

        goto L_80339AE0;
    // 0x80339ADC: nop

L_80339AE0:
    // 0x80339AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339AE4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80339AE8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80339AEC: jr          $ra
    // 0x80339AF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80339AF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803385B0_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803385B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803385B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803385B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803385BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803385C0: jal         0x8001BB34
    // 0x803385C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x803385C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x803385C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803385CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803385D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803385D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803385D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803385DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803385E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803385E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803385E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803385EC: lh          $t8, 0x4258($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4258);
    // 0x803385F0: nop

    // 0x803385F4: sh          $t8, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r24;
    // 0x803385F8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803385FC: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80338600: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338604: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338608: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033860C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338610: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338614: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338618: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033861C: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80338620: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_80338624:
    // 0x80338624: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80338628: jal         0x8033882C
    // 0x8033862C: nop

    func_8033882C_unk_bin_51(rdram, ctx);
        goto after_1;
    // 0x8033862C: nop

    after_1:
    // 0x80338630: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x80338634: nop

    // 0x80338638: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8033863C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x80338640: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80338644: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x80338648: bne         $at, $zero, L_80338624
    if (ctx->r1 != 0) {
        // 0x8033864C: sh          $t2, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r10;
            goto L_80338624;
    }
    // 0x8033864C: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x80338650: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80338654: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x80338658: nop

    // 0x8033865C: beq         $t5, $zero, L_803386A4
    if (ctx->r13 == 0) {
        // 0x80338660: nop
    
            goto L_803386A4;
    }
    // 0x80338660: nop

    // 0x80338664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338668: beq         $t5, $at, L_803386A4
    if (ctx->r13 == ctx->r1) {
        // 0x8033866C: nop
    
            goto L_803386A4;
    }
    // 0x8033866C: nop

    // 0x80338670: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80338674: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80338678: lh          $t6, 0x1C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1C);
    // 0x8033867C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80338680: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338684: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80338688: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033868C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80338690: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338694: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80338698: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x8033869C: b           L_8033881C
    // 0x803386A0: nop

        goto L_8033881C;
    // 0x803386A0: nop

L_803386A4:
    // 0x803386A4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803386A8: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x803386AC: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803386B0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803386B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803386B8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803386BC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803386C0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803386C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803386C8: lh          $t1, 0x4256($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4256);
    // 0x803386CC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x803386D0: beq         $t1, $at, L_803386E4
    if (ctx->r9 == ctx->r1) {
        // 0x803386D4: nop
    
            goto L_803386E4;
    }
    // 0x803386D4: nop

    // 0x803386D8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x803386DC: bne         $t1, $at, L_80338814
    if (ctx->r9 != ctx->r1) {
        // 0x803386E0: nop
    
            goto L_80338814;
    }
    // 0x803386E0: nop

L_803386E4:
    // 0x803386E4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803386E8: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x803386EC: nop

    // 0x803386F0: bne         $t2, $zero, L_8033877C
    if (ctx->r10 != 0) {
        // 0x803386F4: nop
    
            goto L_8033877C;
    }
    // 0x803386F4: nop

    // 0x803386F8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803386FC: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80338700: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338704: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80338708: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033870C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338710: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80338714: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338718: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033871C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80338720: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80338724: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80338728: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8033872C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338730: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80338734: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80338738: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033873C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80338740: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80338744: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80338748: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8033874C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80338750: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80338754: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338758: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033875C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338760: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80338764: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80338768: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033876C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80338770: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80338774: b           L_8033881C
    // 0x80338778: nop

        goto L_8033881C;
    // 0x80338778: nop

L_8033877C:
    // 0x8033877C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80338780: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80338784: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338788: bne         $t0, $at, L_80338814
    if (ctx->r8 != ctx->r1) {
        // 0x8033878C: nop
    
            goto L_80338814;
    }
    // 0x8033878C: nop

    // 0x80338790: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80338794: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80338798: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033879C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803387A0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803387A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803387A8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803387AC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803387B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803387B4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x803387B8: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x803387BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x803387C0: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x803387C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803387C8: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x803387CC: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803387D0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803387D4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x803387D8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803387DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803387E0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803387E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x803387E8: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x803387EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803387F0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x803387F4: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x803387F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803387FC: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80338800: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80338804: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80338808: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x8033880C: b           L_8033881C
    // 0x80338810: nop

        goto L_8033881C;
    // 0x80338810: nop

L_80338814:
    // 0x80338814: b           L_8033881C
    // 0x80338818: nop

        goto L_8033881C;
    // 0x80338818: nop

L_8033881C:
    // 0x8033881C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338820: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80338824: jr          $ra
    // 0x80338828: nop

    return;
    // 0x80338828: nop

;}
RECOMP_FUNC void func_80339734_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339734: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80339738: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033973C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80339740: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80339744: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339748: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033974C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80339750: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80339754: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339758: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033975C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80339760: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339764: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339768: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033976C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80339770: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80339774: nop

    // 0x80339778: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033977C: nop

    // 0x80339780: bne         $t1, $zero, L_803397F8
    if (ctx->r9 != 0) {
        // 0x80339784: nop
    
            goto L_803397F8;
    }
    // 0x80339784: nop

    // 0x80339788: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033978C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80339790: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80339794: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80339798: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033979C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803397A0: nop

    // 0x803397A4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803397A8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x803397AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803397B0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803397B4: nop

    // 0x803397B8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x803397BC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803397C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803397C4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803397C8: nop

    // 0x803397CC: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x803397D0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803397D4: nop

    // 0x803397D8: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x803397DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803397E0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803397E4: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x803397E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803397EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803397F0: jal         0x800272E8
    // 0x803397F4: nop

    func_800272E8(rdram, ctx);
        goto after_0;
    // 0x803397F4: nop

    after_0:
L_803397F8:
    // 0x803397F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803397FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339800: jal         0x8002A8B4
    // 0x80339804: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80339804: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_1:
    // 0x80339808: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033980C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80339810: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80339814: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80339818: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8033981C: jal         0x80015538
    // 0x80339820: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80339820: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x80339824: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80339828: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033982C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80339830: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80339834: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80339838: nop

    // 0x8033983C: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80339840: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x80339844: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80339848: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x8033984C: nop

    // 0x80339850: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80339854: nop

    // 0x80339858: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8033985C: nop

    // 0x80339860: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x80339864: jal         0x80034970
    // 0x80339868: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x80339868: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    after_3:
    // 0x8033986C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80339870: nop

    // 0x80339874: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80339878: nop

    // 0x8033987C: bc1f        L_803398A8
    if (!c1cs) {
        // 0x80339880: nop
    
            goto L_803398A8;
    }
    // 0x80339880: nop

    // 0x80339884: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80339888: nop

    // 0x8033988C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80339890: nop

    // 0x80339894: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80339898: jal         0x80034970
    // 0x8033989C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x8033989C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x803398A0: b           L_803398C8
    // 0x803398A4: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
        goto L_803398C8;
    // 0x803398A4: neg.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = -ctx->f0.fl;
L_803398A8:
    // 0x803398A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803398AC: nop

    // 0x803398B0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x803398B4: nop

    // 0x803398B8: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x803398BC: jal         0x80034970
    // 0x803398C0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    sinf_game(rdram, ctx);
        goto after_5;
    // 0x803398C0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_5:
    // 0x803398C4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_803398C8:
    // 0x803398C8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803398CC: lwc1        $f10, -0x64D0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X64D0);
    // 0x803398D0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803398D4: mul.s       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x803398D8: lwc1        $f5, -0x64C8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X64C8);
    // 0x803398DC: lwc1        $f4, -0x64C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X64C4);
    // 0x803398E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803398E4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803398E8: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x803398EC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x803398F0: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
    // 0x803398F4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803398F8: nop

    // 0x803398FC: lwc1        $f20, 0xC($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80339900: nop

    // 0x80339904: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x80339908: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033990C: nop

    // 0x80339910: swc1        $f20, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f20.u32l;
    // 0x80339914: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339918: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033991C: jal         0x80029C40
    // 0x80339920: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x80339920: nop

    after_6:
    // 0x80339924: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339928: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033992C: jal         0x80029D04
    // 0x80339930: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80339930: nop

    after_7:
    // 0x80339934: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80339938: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033993C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80339940: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339944: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339948: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8033994C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80339950: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80339954: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80339958: jal         0x800295C0
    // 0x8033995C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x8033995C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80339960: beq         $v0, $zero, L_80339980
    if (ctx->r2 == 0) {
        // 0x80339964: nop
    
            goto L_80339980;
    }
    // 0x80339964: nop

    // 0x80339968: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033996C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339970: jal         0x8002B0E4
    // 0x80339974: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80339974: nop

    after_9:
    // 0x80339978: b           L_803399D0
    // 0x8033997C: nop

        goto L_803399D0;
    // 0x8033997C: nop

L_80339980:
    // 0x80339980: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80339984: nop

    // 0x80339988: lh          $t5, 0xB2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB2);
    // 0x8033998C: nop

    // 0x80339990: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80339994: sh          $t6, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r14;
    // 0x80339998: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033999C: nop

    // 0x803399A0: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x803399A4: nop

    // 0x803399A8: bgtz        $t8, L_803399C8
    if (SIGNED(ctx->r24) > 0) {
        // 0x803399AC: nop
    
            goto L_803399C8;
    }
    // 0x803399AC: nop

    // 0x803399B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803399B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803399B8: jal         0x8002B0E4
    // 0x803399BC: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x803399BC: nop

    after_10:
    // 0x803399C0: b           L_803399D0
    // 0x803399C4: nop

        goto L_803399D0;
    // 0x803399C4: nop

L_803399C8:
    // 0x803399C8: b           L_803399D0
    // 0x803399CC: nop

        goto L_803399D0;
    // 0x803399CC: nop

L_803399D0:
    // 0x803399D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803399D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803399D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803399DC: jr          $ra
    // 0x803399E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803399E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80338000_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80338004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338008: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033800C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80338010: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80338014: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80338018: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033801C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80338020: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80338024: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80338028: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033802C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338030: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80338034: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80338038: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033803C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80338040: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80338044: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80338048: addiu       $a1, $a1, 0x3B20
    ctx->r5 = ADD32(ctx->r5, 0X3B20);
    // 0x8033804C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80338050: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80338054: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80338058: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033805C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80338060: jal         0x80027464
    // 0x80338064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80338064: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80338068: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x8033806C: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x80338070: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338074: beq         $t1, $at, L_803382C4
    if (ctx->r9 == ctx->r1) {
        // 0x80338078: nop
    
            goto L_803382C4;
    }
    // 0x80338078: nop

    // 0x8033807C: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80338080: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338084: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80338088: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033808C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80338090: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80338094: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80338098: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8033809C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803380A0: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x803380A4: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x803380A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803380AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803380B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803380B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803380B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803380BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803380C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803380C4: addiu       $t5, $zero, 0x348
    ctx->r13 = ADD32(0, 0X348);
    // 0x803380C8: sh          $t5, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r13;
    // 0x803380CC: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x803380D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803380D4: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x803380D8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803380DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803380E0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x803380E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803380E8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803380EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x803380F0: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
    // 0x803380F4: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x803380F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803380FC: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x80338100: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x80338104: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80338108: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x8033810C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80338110: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80338114: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x80338118: sh          $t1, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r9;
    // 0x8033811C: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x80338120: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338124: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x80338128: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x8033812C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80338130: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x80338134: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80338138: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8033813C: addiu       $t4, $zero, 0x2000
    ctx->r12 = ADD32(0, 0X2000);
    // 0x80338140: sh          $t4, 0x41FC($at)
    MEM_H(0X41FC, ctx->r1) = ctx->r12;
    // 0x80338144: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80338148: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8033814C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80338150: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80338154: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80338158: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033815C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x80338160: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80338164: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338168: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8033816C: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80338170: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80338174: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338178: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033817C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338180: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338184: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338188: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033818C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338190: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x80338194: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x80338198: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033819C: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x803381A0: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x803381A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803381A8: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x803381AC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803381B0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803381B4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803381B8: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x803381BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803381C0: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x803381C4: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x803381C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803381CC: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x803381D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803381D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803381D8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803381DC: swc1        $f6, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f6.u32l;
    // 0x803381E0: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x803381E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803381E8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803381EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803381F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803381F4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803381F8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803381FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338200: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80338204: lh          $t9, 0xA8($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XA8);
    // 0x80338208: nop

    // 0x8033820C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338210: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80338214: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338218: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8033821C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338220: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338224: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80338228: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8033822C: nop

    // 0x80338230: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80338234: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
    // 0x80338238: lh          $t3, 0x2E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X2E);
    // 0x8033823C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80338240: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80338244: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80338248: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033824C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338250: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80338254: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80338258: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033825C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80338260: swc1        $f16, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f16.u32l;
    // 0x80338264: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80338268: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033826C: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80338270: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x80338274: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338278: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x8033827C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338280: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80338284: addu        $t5, $t7, $t4
    ctx->r13 = ADD32(ctx->r15, ctx->r12);
    // 0x80338288: lwc1        $f20, 0xC($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0XC);
    // 0x8033828C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80338290: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x80338294: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x80338298: nop

    // 0x8033829C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803382A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803382A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803382A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803382AC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803382B0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803382B4: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x803382B8: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x803382BC: jal         0x8033849C
    // 0x803382C0: nop

    func_8033849C_unk_bin_51(rdram, ctx);
        goto after_1;
    // 0x803382C0: nop

    after_1:
L_803382C4:
    // 0x803382C4: b           L_803382CC
    // 0x803382C8: nop

        goto L_803382CC;
    // 0x803382C8: nop

L_803382CC:
    // 0x803382CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803382D0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803382D4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803382D8: jr          $ra
    // 0x803382DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803382DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033849C_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033849C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803384A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803384A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803384A8: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
L_803384AC:
    // 0x803384AC: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x803384B0: lh          $t8, 0x1C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1C);
    // 0x803384B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803384B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803384BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803384C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803384C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803384C8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x803384CC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803384D0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x803384D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803384D8: lh          $t1, 0x4238($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4238);
    // 0x803384DC: nop

    // 0x803384E0: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x803384E4: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x803384E8: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x803384EC: jal         0x803382E0
    // 0x803384F0: nop

    func_803382E0_unk_bin_51(rdram, ctx);
        goto after_0;
    // 0x803384F0: nop

    after_0:
    // 0x803384F4: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x803384F8: nop

    // 0x803384FC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80338500: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80338504: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80338508: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x8033850C: bne         $at, $zero, L_803384AC
    if (ctx->r1 != 0) {
        // 0x80338510: sh          $t3, 0x1C($sp)
        MEM_H(0X1C, ctx->r29) = ctx->r11;
            goto L_803384AC;
    }
    // 0x80338510: sh          $t3, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r11;
    // 0x80338514: b           L_8033851C
    // 0x80338518: nop

        goto L_8033851C;
    // 0x80338518: nop

L_8033851C:
    // 0x8033851C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338520: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80338524: jr          $ra
    // 0x80338528: nop

    return;
    // 0x80338528: nop

;}
RECOMP_FUNC void func_8033852C_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033852C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80338530: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338534: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80338538: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8033853C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80338540: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80338544: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80338548: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8033854C: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x80338550: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80338554: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80338558: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8033855C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80338560: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x80338564: addiu       $a2, $a2, 0x3B5C
    ctx->r6 = ADD32(ctx->r6, 0X3B5C);
    // 0x80338568: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8033856C: jal         0x80027C00
    // 0x80338570: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027C00(rdram, ctx);
        goto after_0;
    // 0x80338570: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80338574: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80338578: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8033857C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338580: beq         $t7, $at, L_80338598
    if (ctx->r15 == ctx->r1) {
        // 0x80338584: nop
    
            goto L_80338598;
    }
    // 0x80338584: nop

    // 0x80338588: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8033858C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80338590: jal         0x803382E0
    // 0x80338594: nop

    func_803382E0_unk_bin_51(rdram, ctx);
        goto after_1;
    // 0x80338594: nop

    after_1:
L_80338598:
    // 0x80338598: b           L_803385A0
    // 0x8033859C: nop

        goto L_803385A0;
    // 0x8033859C: nop

L_803385A0:
    // 0x803385A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803385A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803385A8: jr          $ra
    // 0x803385AC: nop

    return;
    // 0x803385AC: nop

;}
RECOMP_FUNC void func_80338DBC_unk_bin_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338DBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338DC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80338DC8: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
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
    // 0x80338DF4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338DF8: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x80338DFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338E00: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80338E04: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80338E08: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x80338E0C: nop

    // 0x80338E10: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x80338E14: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x80338E18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338E1C: beq         $t5, $at, L_80339068
    if (ctx->r13 == ctx->r1) {
        // 0x80338E20: nop
    
            goto L_80339068;
    }
    // 0x80338E20: nop

    // 0x80338E24: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x80338E28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338E2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338E30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338E38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338E40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338E44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338E48: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80338E4C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80338E50: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80338E54: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x80338E58: lwc1        $f12, 0xD4($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x80338E5C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80338E60: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80338E64: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80338E68: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80338E6C: jal         0x80015538
    // 0x80338E70: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80338E70: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x80338E74: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80338E78: nop

    // 0x80338E7C: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x80338E80: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80338E84: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338E88: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80338E8C: lwc1        $f11, -0x64F0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X64F0);
    // 0x80338E90: lwc1        $f10, -0x64EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X64EC);
    // 0x80338E94: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80338E98: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80338E9C: jal         0x80034970
    // 0x80338EA0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80338EA0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x80338EA4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80338EA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80338EAC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80338EB0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80338EB4: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
    // 0x80338EB8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80338EBC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338EC0: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80338EC4: lwc1        $f11, -0x64E8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X64E8);
    // 0x80338EC8: lwc1        $f10, -0x64E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X64E4);
    // 0x80338ECC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80338ED0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80338ED4: jal         0x80036570
    // 0x80338ED8: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80338ED8: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x80338EDC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80338EE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80338EE4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80338EE8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80338EEC: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x80338EF0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80338EF4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80338EF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80338EFC: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x80338F00: jal         0x80015538
    // 0x80338F04: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80338F04: nop

    after_3:
    // 0x80338F08: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80338F0C: nop

    // 0x80338F10: swc1        $f0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f0.u32l;
    // 0x80338F14: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80338F18: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338F1C: lwc1        $f6, 0x40($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80338F20: lwc1        $f11, -0x64E0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X64E0);
    // 0x80338F24: lwc1        $f10, -0x64DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X64DC);
    // 0x80338F28: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80338F2C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80338F30: jal         0x80036570
    // 0x80338F34: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_4;
    // 0x80338F34: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_4:
    // 0x80338F38: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80338F3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80338F40: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80338F44: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80338F48: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80338F4C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338F50: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80338F54: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80338F58: lwc1        $f8, 0x24($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X24);
    // 0x80338F5C: nop

    // 0x80338F60: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80338F64: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x80338F68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338F6C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80338F70: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80338F74: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80338F78: nop

    // 0x80338F7C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80338F80: swc1        $f4, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f4.u32l;
    // 0x80338F84: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338F88: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80338F8C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80338F90: lwc1        $f8, 0x28($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80338F94: nop

    // 0x80338F98: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80338F9C: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x80338FA0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338FA4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80338FA8: lwc1        $f16, 0x1C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80338FAC: nop

    // 0x80338FB0: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x80338FB4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80338FB8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80338FBC: nop

    // 0x80338FC0: swc1        $f18, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f18.u32l;
    // 0x80338FC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80338FC8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80338FCC: nop

    // 0x80338FD0: swc1        $f4, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f4.u32l;
    // 0x80338FD4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80338FD8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80338FDC: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x80338FE0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80338FE4: sh          $t5, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r13;
    // 0x80338FE8: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80338FEC: jal         0x80029C40
    // 0x80338FF0: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80338FF0: nop

    after_5:
    // 0x80338FF4: lh          $a0, 0x1E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1E);
    // 0x80338FF8: jal         0x80029D04
    // 0x80338FFC: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x80338FFC: nop

    after_6:
    // 0x80339000: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80339004: nop

    // 0x80339008: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x8033900C: nop

    // 0x80339010: blez        $t7, L_80339068
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80339014: nop
    
            goto L_80339068;
    }
    // 0x80339014: nop

    // 0x80339018: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8033901C: nop

    // 0x80339020: lh          $t9, 0xAC($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAC);
    // 0x80339024: nop

    // 0x80339028: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8033902C: sh          $t1, 0xAC($t8)
    MEM_H(0XAC, ctx->r24) = ctx->r9;
    // 0x80339030: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80339034: nop

    // 0x80339038: lh          $t2, 0xAC($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XAC);
    // 0x8033903C: nop

    // 0x80339040: bne         $t2, $zero, L_80339068
    if (ctx->r10 != 0) {
        // 0x80339044: nop
    
            goto L_80339068;
    }
    // 0x80339044: nop

    // 0x80339048: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8033904C: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x80339050: sh          $t3, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r11;
    // 0x80339054: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339058: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033905C: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x80339060: jal         0x800281A4
    // 0x80339064: nop

    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x80339064: nop

    after_7:
L_80339068:
    // 0x80339068: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8033906C: b           L_8033907C
    // 0x80339070: nop

        goto L_8033907C;
    // 0x80339070: nop

    // 0x80339074: b           L_8033907C
    // 0x80339078: nop

        goto L_8033907C;
    // 0x80339078: nop

L_8033907C:
    // 0x8033907C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80339080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80339084: jr          $ra
    // 0x80339088: nop

    return;
    // 0x80339088: nop

;}
