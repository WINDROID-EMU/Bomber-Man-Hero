#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800B8EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8EBC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800B8EC0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800B8EC4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800B8EC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8ECC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B8ED0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8ED4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8EDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B8EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8EE4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8EE8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B8EEC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B8EF0: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x800B8EF4: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x800B8EF8: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800B8EFC: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x800B8F00: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800B8F04: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800B8F08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B8F0C: beq         $t3, $at, L_800B8F1C
    if (ctx->r11 == ctx->r1) {
        // 0x800B8F10: nop
    
            goto L_800B8F1C;
    }
    // 0x800B8F10: nop

    // 0x800B8F14: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B8F18: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
L_800B8F1C:
    // 0x800B8F1C: lb          $v0, 0x7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X7);
    // 0x800B8F20: b           L_800B8F30
    // 0x800B8F24: nop

        goto L_800B8F30;
    // 0x800B8F24: nop

    // 0x800B8F28: b           L_800B8F30
    // 0x800B8F2C: nop

        goto L_800B8F30;
    // 0x800B8F2C: nop

L_800B8F30:
    // 0x800B8F30: jr          $ra
    // 0x800B8F34: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800B8F34: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800D4268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4268: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D426C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D4270: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D4274: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D4278: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D427C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4280: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D4284: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4288: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D428C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4290: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4294: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4298: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D429C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D42A0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D42A4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D42A8: nop

    // 0x800D42AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D42B0: nop

    // 0x800D42B4: bne         $t1, $zero, L_800D4378
    if (ctx->r9 != 0) {
        // 0x800D42B8: nop
    
            goto L_800D4378;
    }
    // 0x800D42B8: nop

    // 0x800D42BC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D42C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D42C4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D42C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D42CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800D42D0: addiu       $t4, $t4, -0x7838
    ctx->r12 = ADD32(ctx->r12, -0X7838);
    // 0x800D42D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D42D8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800D42DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800D42E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D42E4: jal         0x8001C0EC
    // 0x800D42E8: addiu       $a3, $zero, 0x98
    ctx->r7 = ADD32(0, 0X98);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D42E8: addiu       $a3, $zero, 0x98
    ctx->r7 = ADD32(0, 0X98);
    after_0:
    // 0x800D42EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D42F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D42F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D42F8: addiu       $a3, $a3, -0x77B8
    ctx->r7 = ADD32(ctx->r7, -0X77B8);
    // 0x800D42FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D4300: jal         0x8001ABF4
    // 0x800D4304: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D4304: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800D4308: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D430C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4310: jal         0x8001BB34
    // 0x800D4314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x800D4314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D4318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D431C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4320: jal         0x8001BBDC
    // 0x800D4324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800D4324: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800D4328: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800D432C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4330: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D4334: nop

    // 0x800D4338: swc1        $f4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f4.u32l;
    // 0x800D433C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D4340: nop

    // 0x800D4344: lwc1        $f20, 0x14($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X14);
    // 0x800D4348: nop

    // 0x800D434C: swc1        $f20, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f20.u32l;
    // 0x800D4350: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D4354: nop

    // 0x800D4358: swc1        $f20, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f20.u32l;
    // 0x800D435C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D4360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D4368: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x800D436C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D4370: jal         0x800175F0
    // 0x800D4374: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x800D4374: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800D4378:
    // 0x800D4378: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D437C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D4380: jal         0x8001B62C
    // 0x800D4384: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_5;
    // 0x800D4384: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x800D4388: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800D438C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800D4390: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D4394: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D4398: nop

    // 0x800D439C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800D43A0: nop

    // 0x800D43A4: bc1f        L_800D43D8
    if (!c1cs) {
        // 0x800D43A8: nop
    
            goto L_800D43D8;
    }
    // 0x800D43A8: nop

    // 0x800D43AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D43B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D43B4: nop

    // 0x800D43B8: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x800D43BC: nop

    // 0x800D43C0: bc1f        L_800D43D8
    if (!c1cs) {
        // 0x800D43C4: nop
    
            goto L_800D43D8;
    }
    // 0x800D43C4: nop

    // 0x800D43C8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800D43CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800D43D0: b           L_800D43E4
    // 0x800D43D4: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
        goto L_800D43E4;
    // 0x800D43D4: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_800D43D8:
    // 0x800D43D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D43DC: nop

    // 0x800D43E0: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
L_800D43E4:
    // 0x800D43E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D43E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D43EC: jal         0x8001B44C
    // 0x800D43F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800D43F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x800D43F4: beq         $v0, $zero, L_800D4414
    if (ctx->r2 == 0) {
        // 0x800D43F8: nop
    
            goto L_800D4414;
    }
    // 0x800D43F8: nop

    // 0x800D43FC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800D4400: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800D4404: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800D4408: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D440C: nop

    // 0x800D4410: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800D4414:
    // 0x800D4414: b           L_800D441C
    // 0x800D4418: nop

        goto L_800D441C;
    // 0x800D4418: nop

L_800D441C:
    // 0x800D441C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D4420: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D4424: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D4428: jr          $ra
    // 0x800D442C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D442C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800C907C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C907C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9080: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9084: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C9088: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C908C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C9090: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C9094: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C9098: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C909C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C90A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C90A4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C90A8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C90AC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C90B0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C90B4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C90B8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C90BC: addiu       $a1, $a1, 0x3F88
    ctx->r5 = ADD32(ctx->r5, 0X3F88);
    // 0x800C90C0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C90C4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C90C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C90CC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C90D0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C90D4: jal         0x80027464
    // 0x800C90D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C90D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C90DC: b           L_800C90E4
    // 0x800C90E0: nop

        goto L_800C90E4;
    // 0x800C90E0: nop

L_800C90E4:
    // 0x800C90E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C90E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C90EC: jr          $ra
    // 0x800C90F0: nop

    return;
    // 0x800C90F0: nop

;}
RECOMP_FUNC void func_800E5824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5824: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E5828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E582C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E5830: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E5834: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E5838: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E583C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E5840: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E5844: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E5848: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E584C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E5850: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E5854: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E5858: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E585C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E5860: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E5864: addiu       $a1, $a1, 0x43CC
    ctx->r5 = ADD32(ctx->r5, 0X43CC);
    // 0x800E5868: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E586C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E5870: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E5874: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E5878: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E587C: jal         0x80027464
    // 0x800E5880: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E5880: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E5884: b           L_800E588C
    // 0x800E5888: nop

        goto L_800E588C;
    // 0x800E5888: nop

L_800E588C:
    // 0x800E588C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5890: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E5894: jr          $ra
    // 0x800E5898: nop

    return;
    // 0x800E5898: nop

;}
RECOMP_FUNC void func_8006F780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F780: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8006F784: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006F788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006F78C: lw          $t6, 0x65F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65F4);
    // 0x8006F790: nop

    // 0x8006F794: bne         $t6, $zero, L_8006F7A4
    if (ctx->r14 != 0) {
        // 0x8006F798: nop
    
            goto L_8006F7A4;
    }
    // 0x8006F798: nop

    // 0x8006F79C: b           L_80070634
    // 0x8006F7A0: nop

        goto L_80070634;
    // 0x8006F7A0: nop

L_8006F7A4:
    // 0x8006F7A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006F7A8: lb          $t7, 0x7630($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7630);
    // 0x8006F7AC: nop

    // 0x8006F7B0: bne         $t7, $zero, L_8006F7C8
    if (ctx->r15 != 0) {
        // 0x8006F7B4: nop
    
            goto L_8006F7C8;
    }
    // 0x8006F7B4: nop

    // 0x8006F7B8: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8006F7BC: addiu       $t8, $t8, 0x5420
    ctx->r24 = ADD32(ctx->r24, 0X5420);
    // 0x8006F7C0: b           L_8006F7F8
    // 0x8006F7C4: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
        goto L_8006F7F8;
    // 0x8006F7C4: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
L_8006F7C8:
    // 0x8006F7C8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006F7CC: lb          $t9, 0x7630($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7630);
    // 0x8006F7D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006F7D4: bne         $t9, $at, L_8006F7EC
    if (ctx->r25 != ctx->r1) {
        // 0x8006F7D8: nop
    
            goto L_8006F7EC;
    }
    // 0x8006F7D8: nop

    // 0x8006F7DC: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x8006F7E0: addiu       $t0, $t0, 0x5484
    ctx->r8 = ADD32(ctx->r8, 0X5484);
    // 0x8006F7E4: b           L_8006F7F8
    // 0x8006F7E8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
        goto L_8006F7F8;
    // 0x8006F7E8: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
L_8006F7EC:
    // 0x8006F7EC: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8006F7F0: addiu       $t1, $t1, 0x54E8
    ctx->r9 = ADD32(ctx->r9, 0X54E8);
    // 0x8006F7F4: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
L_8006F7F8:
    // 0x8006F7F8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006F7FC: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006F800: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F804: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006F808: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006F80C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x8006F810: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8006F814: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8006F818: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006F81C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8006F820: nop

    // 0x8006F824: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8006F828: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006F82C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006F830: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F834: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8006F838: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006F83C: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8006F840: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8006F844: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8006F848: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x8006F84C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006F850: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8006F854: nop

    // 0x8006F858: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8006F85C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006F860: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006F864: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F868: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006F86C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006F870: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x8006F874: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x8006F878: lui         $t4, 0xB600
    ctx->r12 = S32(0XB600 << 16);
    // 0x8006F87C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006F880: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x8006F884: lui         $t6, 0x1F
    ctx->r14 = S32(0X1F << 16);
    // 0x8006F888: ori         $t6, $t6, 0x3204
    ctx->r14 = ctx->r14 | 0X3204;
    // 0x8006F88C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8006F890: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006F894: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006F898: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F89C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8006F8A0: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006F8A4: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x8006F8A8: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8006F8AC: lui         $t0, 0xB700
    ctx->r8 = S32(0XB700 << 16);
    // 0x8006F8B0: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006F8B4: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8006F8B8: addiu       $t2, $zero, 0x2204
    ctx->r10 = ADD32(0, 0X2204);
    // 0x8006F8BC: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8006F8C0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006F8C4: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006F8C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F8CC: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8006F8D0: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006F8D4: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x8006F8D8: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8006F8DC: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8006F8E0: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x8006F8E4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006F8E8: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8006F8EC: lui         $t8, 0xFFFD
    ctx->r24 = S32(0XFFFD << 16);
    // 0x8006F8F0: ori         $t8, $t8, 0xF6FB
    ctx->r24 = ctx->r24 | 0XF6FB;
    // 0x8006F8F4: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006F8F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006F8FC: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006F900: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F904: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006F908: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006F90C: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8006F910: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8006F914: lui         $t2, 0xB900
    ctx->r10 = S32(0XB900 << 16);
    // 0x8006F918: ori         $t2, $t2, 0x31D
    ctx->r10 = ctx->r10 | 0X31D;
    // 0x8006F91C: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006F920: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8006F924: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x8006F928: ori         $t4, $t4, 0x41C8
    ctx->r12 = ctx->r12 | 0X41C8;
    // 0x8006F92C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8006F930: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006F934: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006F938: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F93C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006F940: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006F944: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8006F948: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8006F94C: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x8006F950: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006F954: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8006F958: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x8006F95C: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006F960: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8006F964: nop

    // 0x8006F968: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x8006F96C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_8006F970:
    // 0x8006F970: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8006F974: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006F978: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8006F97C: nop

    // 0x8006F980: beq         $t4, $at, L_8006F9F8
    if (ctx->r12 == ctx->r1) {
        // 0x8006F984: nop
    
            goto L_8006F9F8;
    }
    // 0x8006F984: nop

    // 0x8006F988: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006F98C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006F990: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006F994: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006F998: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006F99C: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8006F9A0: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8006F9A4: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8006F9A8: lw          $t1, 0x8($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X8);
    // 0x8006F9AC: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x8006F9B0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x8006F9B4: sll         $t3, $t2, 14
    ctx->r11 = S32(ctx->r10 << 14);
    // 0x8006F9B8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8006F9BC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8006F9C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006F9C4: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x8006F9C8: or          $t5, $t0, $t4
    ctx->r13 = ctx->r8 | ctx->r12;
    // 0x8006F9CC: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006F9D0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8006F9D4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8006F9D8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8006F9DC: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x8006F9E0: andi        $t7, $t9, 0x3FF
    ctx->r15 = ctx->r25 & 0X3FF;
    // 0x8006F9E4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x8006F9E8: sll         $t0, $t3, 14
    ctx->r8 = S32(ctx->r11 << 14);
    // 0x8006F9EC: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x8006F9F0: or          $t4, $t1, $t0
    ctx->r12 = ctx->r9 | ctx->r8;
    // 0x8006F9F4: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
L_8006F9F8:
    // 0x8006F9F8: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8006F9FC: nop

    // 0x8006FA00: addiu       $t9, $t6, 0x14
    ctx->r25 = ADD32(ctx->r14, 0X14);
    // 0x8006FA04: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8006FA08: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8006FA0C: nop

    // 0x8006FA10: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006FA14: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x8006FA18: bne         $at, $zero, L_8006F970
    if (ctx->r1 != 0) {
        // 0x8006FA1C: sw          $t8, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r24;
            goto L_8006F970;
    }
    // 0x8006FA1C: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x8006FA20: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006FA24: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006FA28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FA2C: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006FA30: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006FA34: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x8006FA38: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8006FA3C: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x8006FA40: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x8006FA44: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x8006FA48: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8006FA4C: lui         $t4, 0x55
    ctx->r12 = S32(0X55 << 16);
    // 0x8006FA50: ori         $t4, $t4, 0x2048
    ctx->r12 = ctx->r12 | 0X2048;
    // 0x8006FA54: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8006FA58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006FA5C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006FA60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FA64: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x8006FA68: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006FA6C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8006FA70: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FA74: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8006FA78: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006FA7C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FA80: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8006FA84: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8006FA88: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8006FA8C: nop

    // 0x8006FA90: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x8006FA94: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_8006FA98:
    // 0x8006FA98: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8006FA9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006FAA0: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x8006FAA4: nop

    // 0x8006FAA8: beq         $t4, $at, L_8006FC80
    if (ctx->r12 == ctx->r1) {
        // 0x8006FAAC: nop
    
            goto L_8006FC80;
    }
    // 0x8006FAAC: nop

    // 0x8006FAB0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006FAB4: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006FAB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FABC: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006FAC0: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006FAC4: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x8006FAC8: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8006FACC: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8006FAD0: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x8006FAD4: lw          $t1, 0x8($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X8);
    // 0x8006FAD8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006FADC: andi        $t0, $t1, 0x3FF
    ctx->r8 = ctx->r9 & 0X3FF;
    // 0x8006FAE0: sll         $t4, $t0, 14
    ctx->r12 = S32(ctx->r8 << 14);
    // 0x8006FAE4: andi        $t2, $t8, 0x3FF
    ctx->r10 = ctx->r24 & 0X3FF;
    // 0x8006FAE8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006FAEC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8006FAF0: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8006FAF4: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8006FAF8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006FAFC: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8006FB00: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006FB04: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x8006FB08: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x8006FB0C: andi        $t9, $t2, 0x3FF
    ctx->r25 = ctx->r10 & 0X3FF;
    // 0x8006FB10: andi        $t4, $t0, 0x3FF
    ctx->r12 = ctx->r8 & 0X3FF;
    // 0x8006FB14: sll         $t3, $t4, 14
    ctx->r11 = S32(ctx->r12 << 14);
    // 0x8006FB18: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8006FB1C: or          $t5, $t1, $t3
    ctx->r13 = ctx->r9 | ctx->r11;
    // 0x8006FB20: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8006FB24: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006FB28: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006FB2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FB30: addiu       $t2, $t7, 0x8
    ctx->r10 = ADD32(ctx->r15, 0X8);
    // 0x8006FB34: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006FB38: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8006FB3C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8006FB40: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8006FB44: lw          $t1, 0x8($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X8);
    // 0x8006FB48: lw          $t8, 0xC($t9)
    ctx->r24 = MEM_W(ctx->r25, 0XC);
    // 0x8006FB4C: andi        $t3, $t1, 0x3FF
    ctx->r11 = ctx->r9 & 0X3FF;
    // 0x8006FB50: sll         $t5, $t3, 14
    ctx->r13 = S32(ctx->r11 << 14);
    // 0x8006FB54: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x8006FB58: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8006FB5C: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x8006FB60: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8006FB64: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8006FB68: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x8006FB6C: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8006FB70: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8006FB74: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x8006FB78: lw          $t5, 0x0($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X0);
    // 0x8006FB7C: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x8006FB80: andi        $t1, $t9, 0x3FF
    ctx->r9 = ctx->r25 & 0X3FF;
    // 0x8006FB84: andi        $t4, $t5, 0x3FF
    ctx->r12 = ctx->r13 & 0X3FF;
    // 0x8006FB88: sll         $t6, $t4, 14
    ctx->r14 = S32(ctx->r12 << 14);
    // 0x8006FB8C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8006FB90: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x8006FB94: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8006FB98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006FB9C: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006FBA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FBA4: addiu       $t9, $t0, 0x8
    ctx->r25 = ADD32(ctx->r8, 0X8);
    // 0x8006FBA8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006FBAC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8006FBB0: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8006FBB4: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8006FBB8: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x8006FBBC: lw          $t8, 0xC($t1)
    ctx->r24 = MEM_W(ctx->r9, 0XC);
    // 0x8006FBC0: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x8006FBC4: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x8006FBC8: andi        $t5, $t8, 0x3FF
    ctx->r13 = ctx->r24 & 0X3FF;
    // 0x8006FBCC: sll         $t2, $t7, 14
    ctx->r10 = S32(ctx->r15 << 14);
    // 0x8006FBD0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8006FBD4: or          $t0, $t2, $at
    ctx->r8 = ctx->r10 | ctx->r1;
    // 0x8006FBD8: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8006FBDC: or          $t9, $t4, $t0
    ctx->r25 = ctx->r12 | ctx->r8;
    // 0x8006FBE0: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x8006FBE4: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8006FBE8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8006FBEC: lw          $t1, 0x4($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X4);
    // 0x8006FBF0: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x8006FBF4: andi        $t3, $t1, 0x3FF
    ctx->r11 = ctx->r9 & 0X3FF;
    // 0x8006FBF8: andi        $t2, $t7, 0x3FF
    ctx->r10 = ctx->r15 & 0X3FF;
    // 0x8006FBFC: sll         $t4, $t2, 14
    ctx->r12 = S32(ctx->r10 << 14);
    // 0x8006FC00: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8006FC04: or          $t0, $t6, $t4
    ctx->r8 = ctx->r14 | ctx->r12;
    // 0x8006FC08: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x8006FC0C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006FC10: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006FC14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FC18: addiu       $t1, $t8, 0x8
    ctx->r9 = ADD32(ctx->r24, 0X8);
    // 0x8006FC1C: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006FC20: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8006FC24: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8006FC28: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8006FC2C: lw          $t6, 0x8($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X8);
    // 0x8006FC30: lw          $t5, 0xC($t3)
    ctx->r13 = MEM_W(ctx->r11, 0XC);
    // 0x8006FC34: andi        $t4, $t6, 0x3FF
    ctx->r12 = ctx->r14 & 0X3FF;
    // 0x8006FC38: sll         $t0, $t4, 14
    ctx->r8 = S32(ctx->r12 << 14);
    // 0x8006FC3C: andi        $t7, $t5, 0x3FF
    ctx->r15 = ctx->r13 & 0X3FF;
    // 0x8006FC40: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8006FC44: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x8006FC48: or          $t9, $t0, $at
    ctx->r25 = ctx->r8 | ctx->r1;
    // 0x8006FC4C: or          $t8, $t2, $t9
    ctx->r24 = ctx->r10 | ctx->r25;
    // 0x8006FC50: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x8006FC54: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8006FC58: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8006FC5C: lw          $t4, 0x8($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X8);
    // 0x8006FC60: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x8006FC64: addiu       $t0, $t4, -0x1
    ctx->r8 = ADD32(ctx->r12, -0X1);
    // 0x8006FC68: andi        $t2, $t0, 0x3FF
    ctx->r10 = ctx->r8 & 0X3FF;
    // 0x8006FC6C: andi        $t3, $t7, 0x3FF
    ctx->r11 = ctx->r15 & 0X3FF;
    // 0x8006FC70: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8006FC74: sll         $t9, $t2, 14
    ctx->r25 = S32(ctx->r10 << 14);
    // 0x8006FC78: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x8006FC7C: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
L_8006FC80:
    // 0x8006FC80: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8006FC84: nop

    // 0x8006FC88: addiu       $t3, $t7, 0x14
    ctx->r11 = ADD32(ctx->r15, 0X14);
    // 0x8006FC8C: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x8006FC90: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8006FC94: nop

    // 0x8006FC98: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x8006FC9C: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x8006FCA0: bne         $at, $zero, L_8006FA98
    if (ctx->r1 != 0) {
        // 0x8006FCA4: sw          $t4, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r12;
            goto L_8006FA98;
    }
    // 0x8006FCA4: sw          $t4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r12;
    // 0x8006FCA8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006FCAC: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006FCB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006FCB4: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x8006FCB8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006FCBC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8006FCC0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8006FCC4: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x8006FCC8: sw          $t6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r14;
    // 0x8006FCCC: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006FCD0: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8006FCD4: addiu       $t8, $t8, 0x53D0
    ctx->r24 = ADD32(ctx->r24, 0X53D0);
    // 0x8006FCD8: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x8006FCDC: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8006FCE0: nop

    // 0x8006FCE4: addiu       $t3, $t7, 0x3C
    ctx->r11 = ADD32(ctx->r15, 0X3C);
    // 0x8006FCE8: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x8006FCEC: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8006FCF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FCF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006FCF8: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x8006FCFC: lw          $a2, 0x10($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X10);
    // 0x8006FD00: addiu       $a0, $zero, 0x3E
    ctx->r4 = ADD32(0, 0X3E);
    // 0x8006FD04: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FD08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8006FD0C: jal         0x8006F570
    // 0x8006FD10: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    func_8006F570(rdram, ctx);
        goto after_0;
    // 0x8006FD10: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    after_0:
    // 0x8006FD14: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8006FD18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FD1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006FD20: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x8006FD24: lw          $a2, 0x10($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X10);
    // 0x8006FD28: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    // 0x8006FD2C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FD30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8006FD34: jal         0x8006F570
    // 0x8006FD38: addiu       $a1, $a1, 0x62
    ctx->r5 = ADD32(ctx->r5, 0X62);
    func_8006F570(rdram, ctx);
        goto after_1;
    // 0x8006FD38: addiu       $a1, $a1, 0x62
    ctx->r5 = ADD32(ctx->r5, 0X62);
    after_1:
    // 0x8006FD3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006FD40: lb          $t6, 0x6602($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X6602);
    // 0x8006FD44: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8006FD48: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x8006FD4C: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8006FD50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FD54: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8006FD58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006FD5C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8006FD60: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x8006FD64: addu        $a1, $t2, $t9
    ctx->r5 = ADD32(ctx->r10, ctx->r25);
    // 0x8006FD68: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8006FD6C: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x8006FD70: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FD74: jal         0x8006F570
    // 0x8006FD78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8006F570(rdram, ctx);
        goto after_2;
    // 0x8006FD78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8006FD7C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006FD80: lw          $t8, -0x1DBC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DBC);
    // 0x8006FD84: nop

    // 0x8006FD88: andi        $t1, $t8, 0x10
    ctx->r9 = ctx->r24 & 0X10;
    // 0x8006FD8C: beq         $t1, $zero, L_8006FDC8
    if (ctx->r9 == 0) {
        // 0x8006FD90: nop
    
            goto L_8006FDC8;
    }
    // 0x8006FD90: nop

    // 0x8006FD94: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8006FD98: nop

    // 0x8006FD9C: addiu       $t3, $t7, 0x50
    ctx->r11 = ADD32(ctx->r15, 0X50);
    // 0x8006FDA0: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x8006FDA4: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x8006FDA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FDAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006FDB0: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x8006FDB4: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x8006FDB8: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x8006FDBC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FDC0: jal         0x8006F570
    // 0x8006FDC4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_3;
    // 0x8006FDC4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
L_8006FDC8:
    // 0x8006FDC8: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8006FDCC: nop

    // 0x8006FDD0: addiu       $t6, $t4, 0x14
    ctx->r14 = ADD32(ctx->r12, 0X14);
    // 0x8006FDD4: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x8006FDD8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x8006FDDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FDE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006FDE4: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8006FDE8: lw          $a2, 0x10($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X10);
    // 0x8006FDEC: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    // 0x8006FDF0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FDF4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8006FDF8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8006FDFC: jal         0x8006F570
    // 0x8006FE00: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    func_8006F570(rdram, ctx);
        goto after_4;
    // 0x8006FE00: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    after_4:
    // 0x8006FE04: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8006FE08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FE0C: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x8006FE10: lw          $a3, 0x10($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X10);
    // 0x8006FE14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006FE18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006FE1C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8006FE20: lbu         $a0, 0x5243($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5243);
    // 0x8006FE24: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8006FE28: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8006FE2C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8006FE30: addiu       $a2, $a2, 0x3E
    ctx->r6 = ADD32(ctx->r6, 0X3E);
    // 0x8006FE34: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8006FE38: jal         0x8006F664
    // 0x8006FE3C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8006F664(rdram, ctx);
        goto after_5;
    // 0x8006FE3C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8006FE40: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8006FE44: nop

    // 0x8006FE48: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x8006FE4C: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8006FE50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006FE54: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8006FE58: nop

    // 0x8006FE5C: beq         $t7, $at, L_80070014
    if (ctx->r15 == ctx->r1) {
        // 0x8006FE60: nop
    
            goto L_80070014;
    }
    // 0x8006FE60: nop

    // 0x8006FE64: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006FE68: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x8006FE6C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8006FE70: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8006FE74: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x8006FE78: lw          $t4, -0x4C04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4C04);
    // 0x8006FE7C: nop

    // 0x8006FE80: lb          $t6, 0x32($t4)
    ctx->r14 = MEM_B(ctx->r12, 0X32);
    // 0x8006FE84: nop

    // 0x8006FE88: sb          $t6, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r14;
    // 0x8006FE8C: lb          $t2, 0x67($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X67);
    // 0x8006FE90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006FE94: bne         $t2, $at, L_8006FF6C
    if (ctx->r10 != ctx->r1) {
        // 0x8006FE98: nop
    
            goto L_8006FF6C;
    }
    // 0x8006FE98: nop

    // 0x8006FE9C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8006FEA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FEA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006FEA8: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8006FEAC: lw          $a2, 0x10($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X10);
    // 0x8006FEB0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    // 0x8006FEB4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FEB8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8006FEBC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8006FEC0: jal         0x8006F570
    // 0x8006FEC4: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    func_8006F570(rdram, ctx);
        goto after_6;
    // 0x8006FEC4: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    after_6:
    // 0x8006FEC8: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8006FECC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FED0: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x8006FED4: lw          $a3, 0x10($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X10);
    // 0x8006FED8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006FEDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006FEE0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8006FEE4: lb          $a0, 0x5242($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X5242);
    // 0x8006FEE8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8006FEEC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8006FEF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8006FEF4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    // 0x8006FEF8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8006FEFC: jal         0x8006F664
    // 0x8006FF00: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8006F664(rdram, ctx);
        goto after_7;
    // 0x8006FF00: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x8006FF04: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8006FF08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FF0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006FF10: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8006FF14: lw          $a2, 0x10($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X10);
    // 0x8006FF18: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x8006FF1C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FF20: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8006FF24: jal         0x8006F570
    // 0x8006FF28: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_8006F570(rdram, ctx);
        goto after_8;
    // 0x8006FF28: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_8:
    // 0x8006FF2C: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8006FF30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FF34: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x8006FF38: lw          $a3, 0x10($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X10);
    // 0x8006FF3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006FF40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006FF44: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006FF48: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8006FF4C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8006FF50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8006FF54: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x8006FF58: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8006FF5C: jal         0x8006F664
    // 0x8006FF60: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8006F664(rdram, ctx);
        goto after_9;
    // 0x8006FF60: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x8006FF64: b           L_80070014
    // 0x8006FF68: nop

        goto L_80070014;
    // 0x8006FF68: nop

L_8006FF6C:
    // 0x8006FF6C: lb          $t5, 0x67($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X67);
    // 0x8006FF70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006FF74: bne         $t5, $at, L_8006FFC4
    if (ctx->r13 != ctx->r1) {
        // 0x8006FF78: nop
    
            goto L_8006FFC4;
    }
    // 0x8006FF78: nop

    // 0x8006FF7C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8006FF80: lb          $t4, 0x5248($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5248);
    // 0x8006FF84: nop

    // 0x8006FF88: beq         $t4, $zero, L_8006FFBC
    if (ctx->r12 == 0) {
        // 0x8006FF8C: nop
    
            goto L_8006FFBC;
    }
    // 0x8006FF8C: nop

    // 0x8006FF90: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8006FF94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FF98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006FF9C: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8006FFA0: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x8006FFA4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x8006FFA8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8006FFAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8006FFB0: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8006FFB4: jal         0x8006F570
    // 0x8006FFB8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    func_8006F570(rdram, ctx);
        goto after_10;
    // 0x8006FFB8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    after_10:
L_8006FFBC:
    // 0x8006FFBC: b           L_80070014
    // 0x8006FFC0: nop

        goto L_80070014;
    // 0x8006FFC0: nop

L_8006FFC4:
    // 0x8006FFC4: lb          $t2, 0x67($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X67);
    // 0x8006FFC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006FFCC: bne         $t2, $at, L_80070014
    if (ctx->r10 != ctx->r1) {
        // 0x8006FFD0: nop
    
            goto L_80070014;
    }
    // 0x8006FFD0: nop

    // 0x8006FFD4: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8006FFD8: lb          $t9, 0x5247($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5247);
    // 0x8006FFDC: nop

    // 0x8006FFE0: beq         $t9, $zero, L_80070014
    if (ctx->r25 == 0) {
        // 0x8006FFE4: nop
    
            goto L_80070014;
    }
    // 0x8006FFE4: nop

    // 0x8006FFE8: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8006FFEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FFF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006FFF4: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x8006FFF8: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    // 0x8006FFFC: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x80070000: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070004: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80070008: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x8007000C: jal         0x8006F570
    // 0x80070010: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    func_8006F570(rdram, ctx);
        goto after_11;
    // 0x80070010: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    after_11:
L_80070014:
    // 0x80070014: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80070018: lb          $t8, 0x7630($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7630);
    // 0x8007001C: nop

    // 0x80070020: bne         $t8, $zero, L_80070230
    if (ctx->r24 != 0) {
        // 0x80070024: nop
    
            goto L_80070230;
    }
    // 0x80070024: nop

    // 0x80070028: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x8007002C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_80070030:
    // 0x80070030: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80070034: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80070038: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x8007003C: jal         0x80025460
    // 0x80070040: nop

    func_80025460(rdram, ctx);
        goto after_12;
    // 0x80070040: nop

    after_12:
    // 0x80070044: beq         $v0, $zero, L_8007005C
    if (ctx->r2 == 0) {
        // 0x80070048: nop
    
            goto L_8007005C;
    }
    // 0x80070048: nop

    // 0x8007004C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80070050: nop

    // 0x80070054: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x80070058: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
L_8007005C:
    // 0x8007005C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80070060: nop

    // 0x80070064: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80070068: slti        $at, $t5, 0x18
    ctx->r1 = SIGNED(ctx->r13) < 0X18 ? 1 : 0;
    // 0x8007006C: bne         $at, $zero, L_80070030
    if (ctx->r1 != 0) {
        // 0x80070070: sw          $t5, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r13;
            goto L_80070030;
    }
    // 0x80070070: sw          $t5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r13;
    // 0x80070074: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070078: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007007C: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x80070080: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80070084: addiu       $a2, $zero, 0x7C
    ctx->r6 = ADD32(0, 0X7C);
    // 0x80070088: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8007008C: jal         0x8006F570
    // 0x80070090: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_13;
    // 0x80070090: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x80070094: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070098: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007009C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800700A0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x800700A4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800700A8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800700AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x800700B0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x800700B4: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    // 0x800700B8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800700BC: jal         0x8006F664
    // 0x800700C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8006F664(rdram, ctx);
        goto after_14;
    // 0x800700C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_14:
    // 0x800700C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800700C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800700CC: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x800700D0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x800700D4: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    // 0x800700D8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800700DC: jal         0x8006F570
    // 0x800700E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_15;
    // 0x800700E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x800700E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800700E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800700EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800700F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800700F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800700F8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x800700FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070100: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x80070104: addiu       $a3, $zero, 0x9C
    ctx->r7 = ADD32(0, 0X9C);
    // 0x80070108: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8007010C: jal         0x8006F664
    // 0x80070110: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8006F664(rdram, ctx);
        goto after_16;
    // 0x80070110: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80070114: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_80070118:
    // 0x80070118: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x8007011C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80070120: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80070124: mfhi        $t9
    ctx->r25 = hi;
    // 0x80070128: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007012C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80070130: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80070134: addiu       $t8, $t0, 0xA4
    ctx->r24 = ADD32(ctx->r8, 0XA4);
    // 0x80070138: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x8007013C: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80070140: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80070144: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80070148: mflo        $t7
    ctx->r15 = lo;
    // 0x8007014C: sll         $t3, $t7, 4
    ctx->r11 = S32(ctx->r15 << 4);
    // 0x80070150: addiu       $t5, $t3, 0x78
    ctx->r13 = ADD32(ctx->r11, 0X78);
    // 0x80070154: sw          $t5, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r13;
    // 0x80070158: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8007015C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80070160: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x80070164: mfhi        $t6
    ctx->r14 = hi;
    // 0x80070168: bne         $t6, $zero, L_800701A4
    if (ctx->r14 != 0) {
        // 0x8007016C: nop
    
            goto L_800701A4;
    }
    // 0x8007016C: nop

    // 0x80070170: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80070174: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80070178: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x8007017C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070184: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x80070188: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    // 0x8007018C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070190: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80070194: mflo        $t2
    ctx->r10 = lo;
    // 0x80070198: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8007019C: jal         0x8006F570
    // 0x800701A0: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    func_8006F570(rdram, ctx);
        goto after_17;
    // 0x800701A0: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    after_17:
L_800701A4:
    // 0x800701A4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800701A8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800701AC: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x800701B0: jal         0x80025460
    // 0x800701B4: nop

    func_80025460(rdram, ctx);
        goto after_18;
    // 0x800701B4: nop

    after_18:
    // 0x800701B8: beq         $v0, $zero, L_800701EC
    if (ctx->r2 == 0) {
        // 0x800701BC: nop
    
            goto L_800701EC;
    }
    // 0x800701BC: nop

    // 0x800701C0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800701C4: lwc1        $f16, 0x55E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X55E0);
    // 0x800701C8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800701CC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x800701D0: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x800701D4: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x800701D8: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x800701DC: jal         0x8006F570
    // 0x800701E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8006F570(rdram, ctx);
        goto after_19;
    // 0x800701E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_19:
    // 0x800701E4: b           L_80070210
    // 0x800701E8: nop

        goto L_80070210;
    // 0x800701E8: nop

L_800701EC:
    // 0x800701EC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800701F0: lwc1        $f18, 0x55E4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X55E4);
    // 0x800701F4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800701F8: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x800701FC: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80070200: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80070204: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x80070208: jal         0x8006F570
    // 0x8007020C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_8006F570(rdram, ctx);
        goto after_20;
    // 0x8007020C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_20:
L_80070210:
    // 0x80070210: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80070214: nop

    // 0x80070218: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007021C: slti        $at, $t0, 0x18
    ctx->r1 = SIGNED(ctx->r8) < 0X18 ? 1 : 0;
    // 0x80070220: bne         $at, $zero, L_80070118
    if (ctx->r1 != 0) {
        // 0x80070224: sw          $t0, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r8;
            goto L_80070118;
    }
    // 0x80070224: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x80070228: b           L_8007062C
    // 0x8007022C: nop

        goto L_8007062C;
    // 0x8007022C: nop

L_80070230:
    // 0x80070230: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80070234: lb          $t8, 0x7630($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7630);
    // 0x80070238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007023C: bne         $t8, $at, L_8007062C
    if (ctx->r24 != ctx->r1) {
        // 0x80070240: nop
    
            goto L_8007062C;
    }
    // 0x80070240: nop

    // 0x80070244: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
L_80070248:
    // 0x80070248: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8007024C: nop

    // 0x80070250: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x80070254: addu        $t3, $sp, $t7
    ctx->r11 = ADD32(ctx->r29, ctx->r15);
    // 0x80070258: sw          $zero, 0x70($t3)
    MEM_W(0X70, ctx->r11) = 0;
    // 0x8007025C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_80070260:
    // 0x80070260: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80070264: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80070268: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x8007026C: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x80070270: jal         0x800256E0
    // 0x80070274: nop

    func_800256E0(rdram, ctx);
        goto after_21;
    // 0x80070274: nop

    after_21:
    // 0x80070278: beq         $v0, $zero, L_800702A0
    if (ctx->r2 == 0) {
        // 0x8007027C: nop
    
            goto L_800702A0;
    }
    // 0x8007027C: nop

    // 0x80070280: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x80070284: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x80070288: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x8007028C: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x80070290: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x80070294: nop

    // 0x80070298: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007029C: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
L_800702A0:
    // 0x800702A0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x800702A4: nop

    // 0x800702A8: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x800702AC: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x800702B0: bne         $at, $zero, L_80070260
    if (ctx->r1 != 0) {
        // 0x800702B4: sw          $t1, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r9;
            goto L_80070260;
    }
    // 0x800702B4: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x800702B8: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x800702BC: nop

    // 0x800702C0: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x800702C4: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800702C8: bne         $at, $zero, L_80070248
    if (ctx->r1 != 0) {
        // 0x800702CC: sw          $t3, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r11;
            goto L_80070248;
    }
    // 0x800702CC: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
    // 0x800702D0: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x800702D4: nop

    // 0x800702D8: addiu       $t4, $t5, 0x28
    ctx->r12 = ADD32(ctx->r13, 0X28);
    // 0x800702DC: sw          $t4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r12;
    // 0x800702E0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800702E4: lwc1        $f4, 0x55E8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55E8);
    // 0x800702E8: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x800702EC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x800702F0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x800702F4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x800702F8: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    // 0x800702FC: jal         0x8006F570
    // 0x80070300: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_22;
    // 0x80070300: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_22:
    // 0x80070304: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x80070308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007030C: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x80070310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070314: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070318: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007031C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80070320: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070324: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80070328: addiu       $a3, $zero, 0x7A
    ctx->r7 = ADD32(0, 0X7A);
    // 0x8007032C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80070330: jal         0x8006F664
    // 0x80070334: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8006F664(rdram, ctx);
        goto after_23;
    // 0x80070334: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_23:
    // 0x80070338: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007033C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070340: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x80070344: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80070348: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8007034C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070350: jal         0x8006F570
    // 0x80070354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_24;
    // 0x80070354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_24:
    // 0x80070358: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007035C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80070360: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80070364: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80070368: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007036C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80070370: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070374: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x80070378: addiu       $a3, $zero, 0x7A
    ctx->r7 = ADD32(0, 0X7A);
    // 0x8007037C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80070380: jal         0x8006F664
    // 0x80070384: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8006F664(rdram, ctx);
        goto after_25;
    // 0x80070384: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_25:
    // 0x80070388: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007038C: lwc1        $f4, 0x55EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55EC);
    // 0x80070390: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80070394: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80070398: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x8007039C: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x800703A0: addiu       $a2, $zero, 0x8E
    ctx->r6 = ADD32(0, 0X8E);
    // 0x800703A4: jal         0x8006F570
    // 0x800703A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_26;
    // 0x800703A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_26:
    // 0x800703AC: addiu       $t2, $sp, 0x70
    ctx->r10 = ADD32(ctx->r29, 0X70);
    // 0x800703B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800703B4: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x800703B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800703BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800703C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800703C4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x800703C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x800703CC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x800703D0: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    // 0x800703D4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800703D8: jal         0x8006F664
    // 0x800703DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8006F664(rdram, ctx);
        goto after_27;
    // 0x800703DC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_27:
    // 0x800703E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800703E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800703E8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x800703EC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x800703F0: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    // 0x800703F4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800703F8: jal         0x8006F570
    // 0x800703FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_28;
    // 0x800703FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_28:
    // 0x80070400: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070404: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80070408: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007040C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80070410: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80070414: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80070418: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8007041C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x80070420: addiu       $a3, $zero, 0x90
    ctx->r7 = ADD32(0, 0X90);
    // 0x80070424: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80070428: jal         0x8006F664
    // 0x8007042C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8006F664(rdram, ctx);
        goto after_29;
    // 0x8007042C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_29:
    // 0x80070430: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80070434: lwc1        $f4, 0x55F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X55F0);
    // 0x80070438: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x8007043C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80070440: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x80070444: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    // 0x80070448: addiu       $a2, $zero, 0xA4
    ctx->r6 = ADD32(0, 0XA4);
    // 0x8007044C: jal         0x8006F570
    // 0x80070450: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_30;
    // 0x80070450: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x80070454: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x80070458: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007045C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80070460: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80070464: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070468: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007046C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80070470: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80070474: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80070478: addiu       $a3, $zero, 0xA6
    ctx->r7 = ADD32(0, 0XA6);
    // 0x8007047C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80070480: jal         0x8006F664
    // 0x80070484: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8006F664(rdram, ctx);
        goto after_31;
    // 0x80070484: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_31:
    // 0x80070488: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007048C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070490: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x80070494: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80070498: addiu       $a2, $zero, 0xA6
    ctx->r6 = ADD32(0, 0XA6);
    // 0x8007049C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800704A0: jal         0x8006F570
    // 0x800704A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_32;
    // 0x800704A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_32:
    // 0x800704A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800704AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800704B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800704B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800704B8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x800704BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x800704C0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x800704C4: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    // 0x800704C8: addiu       $a3, $zero, 0xA6
    ctx->r7 = ADD32(0, 0XA6);
    // 0x800704CC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800704D0: jal         0x8006F664
    // 0x800704D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8006F664(rdram, ctx);
        goto after_33;
    // 0x800704D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_33:
    // 0x800704D8: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_800704DC:
    // 0x800704DC: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x800704E0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800704E4: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x800704E8: mfhi        $t6
    ctx->r14 = hi;
    // 0x800704EC: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800704F0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800704F4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800704F8: addiu       $t0, $t9, 0xA4
    ctx->r8 = ADD32(ctx->r25, 0XA4);
    // 0x800704FC: sw          $t0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r8;
    // 0x80070500: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80070504: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80070508: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8007050C: mflo        $t8
    ctx->r24 = lo;
    // 0x80070510: sll         $t1, $t8, 4
    ctx->r9 = S32(ctx->r24 << 4);
    // 0x80070514: addiu       $t7, $t1, 0x78
    ctx->r15 = ADD32(ctx->r9, 0X78);
    // 0x80070518: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    // 0x8007051C: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x80070520: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80070524: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x80070528: mfhi        $t5
    ctx->r13 = hi;
    // 0x8007052C: bne         $t5, $zero, L_80070568
    if (ctx->r13 != 0) {
        // 0x80070530: nop
    
            goto L_80070568;
    }
    // 0x80070530: nop

    // 0x80070534: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80070538: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8007053C: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x80070540: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070544: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070548: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x8007054C: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    // 0x80070550: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070554: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80070558: mflo        $t4
    ctx->r12 = lo;
    // 0x8007055C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80070560: jal         0x8006F570
    // 0x80070564: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    func_8006F570(rdram, ctx);
        goto after_34;
    // 0x80070564: addiu       $a0, $a0, 0x3A
    ctx->r4 = ADD32(ctx->r4, 0X3A);
    after_34:
L_80070568:
    // 0x80070568: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8007056C: lui         $t0, 0x8010
    ctx->r8 = S32(0X8010 << 16);
    // 0x80070570: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x80070574: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80070578: lb          $t0, 0x554C($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X554C);
    // 0x8007057C: nop

    // 0x80070580: sb          $t0, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r8;
    // 0x80070584: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x80070588: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8007058C: sll         $t8, $t2, 1
    ctx->r24 = S32(ctx->r10 << 1);
    // 0x80070590: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80070594: lb          $t1, 0x554D($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X554D);
    // 0x80070598: nop

    // 0x8007059C: sb          $t1, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r9;
    // 0x800705A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800705A4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800705A8: lb          $a1, 0x66($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X66);
    // 0x800705AC: lb          $a2, 0x65($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X65);
    // 0x800705B0: jal         0x800256E0
    // 0x800705B4: nop

    func_800256E0(rdram, ctx);
        goto after_35;
    // 0x800705B4: nop

    after_35:
    // 0x800705B8: beq         $v0, $zero, L_800705F0
    if (ctx->r2 == 0) {
        // 0x800705BC: nop
    
            goto L_800705F0;
    }
    // 0x800705BC: nop

    // 0x800705C0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800705C4: lwc1        $f6, 0x55F4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55F4);
    // 0x800705C8: lb          $a0, 0x66($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X66);
    // 0x800705CC: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800705D0: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x800705D4: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x800705D8: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x800705DC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800705E0: jal         0x8006F570
    // 0x800705E4: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_8006F570(rdram, ctx);
        goto after_36;
    // 0x800705E4: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_36:
    // 0x800705E8: b           L_80070614
    // 0x800705EC: nop

        goto L_80070614;
    // 0x800705EC: nop

L_800705F0:
    // 0x800705F0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800705F4: lwc1        $f8, 0x55F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X55F8);
    // 0x800705F8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800705FC: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    // 0x80070600: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80070604: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80070608: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x8007060C: jal         0x8006F570
    // 0x80070610: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8006F570(rdram, ctx);
        goto after_37;
    // 0x80070610: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_37:
L_80070614:
    // 0x80070614: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x80070618: nop

    // 0x8007061C: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x80070620: slti        $at, $t3, 0x18
    ctx->r1 = SIGNED(ctx->r11) < 0X18 ? 1 : 0;
    // 0x80070624: bne         $at, $zero, L_800704DC
    if (ctx->r1 != 0) {
        // 0x80070628: sw          $t3, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r11;
            goto L_800704DC;
    }
    // 0x80070628: sw          $t3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r11;
L_8007062C:
    // 0x8007062C: b           L_80070634
    // 0x80070630: nop

        goto L_80070634;
    // 0x80070630: nop

L_80070634:
    // 0x80070634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80070638: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x8007063C: jr          $ra
    // 0x80070640: nop

    return;
    // 0x80070640: nop

;}
RECOMP_FUNC void func_8007A024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007A02C: jal         0x8007944C
    // 0x8007A030: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007A030: nop

    after_0:
    // 0x8007A034: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007A038: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A03C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007A040: beq         $t6, $at, L_8007A100
    if (ctx->r14 == ctx->r1) {
        // 0x8007A044: nop
    
            goto L_8007A100;
    }
    // 0x8007A044: nop

    // 0x8007A048: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A04C: jal         0x80079E9C
    // 0x8007A050: nop

    func_80079E9C(rdram, ctx);
        goto after_1;
    // 0x8007A050: nop

    after_1:
    // 0x8007A054: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A058: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007A05C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007A060: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007A064: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007A068: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007A06C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007A070: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007A074: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007A078: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007A07C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007A080: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x8007A084: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007A088: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007A08C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007A090: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007A094: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8007A098: nop

    // 0x8007A09C: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x8007A0A0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007A0A4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007A0A8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8007A0AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007A0B0: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8007A0B4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007A0B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007A0BC: swc1        $f10, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f10.u32l;
    // 0x8007A0C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007A0C4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007A0C8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007A0CC: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8007A0D0: nop

    // 0x8007A0D4: swc1        $f16, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f16.u32l;
    // 0x8007A0D8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007A0DC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8007A0E0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007A0E4: lwc1        $f18, 0x1C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8007A0E8: nop

    // 0x8007A0EC: swc1        $f18, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f18.u32l;
    // 0x8007A0F0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A0F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A0F8: b           L_8007A108
    // 0x8007A0FC: sh          $t1, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r9;
        goto L_8007A108;
    // 0x8007A0FC: sh          $t1, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r9;
L_8007A100:
    // 0x8007A100: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A104: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
L_8007A108:
    // 0x8007A108: b           L_8007A110
    // 0x8007A10C: nop

        goto L_8007A110;
    // 0x8007A10C: nop

L_8007A110:
    // 0x8007A110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A118: jr          $ra
    // 0x8007A11C: nop

    return;
    // 0x8007A11C: nop

;}
RECOMP_FUNC void func_8009149C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009149C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800914A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800914A4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800914A8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800914AC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800914B0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800914B4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800914B8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800914BC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800914C0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800914C4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800914C8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800914CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800914D0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800914D4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800914D8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800914DC: addiu       $a1, $a1, 0x1564
    ctx->r5 = ADD32(ctx->r5, 0X1564);
    // 0x800914E0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800914E4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800914E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800914EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800914F0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800914F4: jal         0x80027464
    // 0x800914F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800914F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800914FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091500: b           L_80091508
    // 0x80091504: nop

        goto L_80091508;
    // 0x80091504: nop

L_80091508:
    // 0x80091508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009150C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091510: jr          $ra
    // 0x80091514: nop

    return;
    // 0x80091514: nop

;}
RECOMP_FUNC void func_800EC260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EC264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EC268: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC26C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC270: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC274: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC278: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC27C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC280: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC284: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC288: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC28C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC290: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EC294: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EC298: nop

    // 0x800EC29C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EC2A0: nop

    // 0x800EC2A4: bne         $t1, $zero, L_800EC2EC
    if (ctx->r9 != 0) {
        // 0x800EC2A8: nop
    
            goto L_800EC2EC;
    }
    // 0x800EC2A8: nop

    // 0x800EC2AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EC2B0: nop

    // 0x800EC2B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EC2B8: nop

    // 0x800EC2BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EC2C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EC2C4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800EC2C8: addiu       $t5, $zero, 0xB4
    ctx->r13 = ADD32(0, 0XB4);
    // 0x800EC2CC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800EC2D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC2D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC2D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC2DC: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x800EC2E0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EC2E4: jal         0x800175F0
    // 0x800EC2E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800EC2E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800EC2EC:
    // 0x800EC2EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800EC2F0: nop

    // 0x800EC2F4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800EC2F8: nop

    // 0x800EC2FC: bne         $t8, $zero, L_800EC318
    if (ctx->r24 != 0) {
        // 0x800EC300: nop
    
            goto L_800EC318;
    }
    // 0x800EC300: nop

    // 0x800EC304: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800EC308: jal         0x80069D88
    // 0x800EC30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80069D88(rdram, ctx);
        goto after_1;
    // 0x800EC30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800EC310: b           L_800EC330
    // 0x800EC314: nop

        goto L_800EC330;
    // 0x800EC314: nop

L_800EC318:
    // 0x800EC318: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800EC31C: nop

    // 0x800EC320: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800EC324: nop

    // 0x800EC328: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800EC32C: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_800EC330:
    // 0x800EC330: b           L_800EC338
    // 0x800EC334: nop

        goto L_800EC338;
    // 0x800EC334: nop

L_800EC338:
    // 0x800EC338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC33C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EC340: jr          $ra
    // 0x800EC344: nop

    return;
    // 0x800EC344: nop

;}
RECOMP_FUNC void Skybox_DrawWave(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CC5C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8006CC60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006CC64: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x8006CC68: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x8006CC6C: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x8006CC70: swc1        $f14, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f14.u32l;
    // 0x8006CC74: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006CC78: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006CC7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CC80: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006CC84: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006CC88: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x8006CC8C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8006CC90: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x8006CC94: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006CC98: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8006CC9C: lui         $t0, 0x1F
    ctx->r8 = S32(0X1F << 16);
    // 0x8006CCA0: ori         $t0, $t0, 0x3204
    ctx->r8 = ctx->r8 | 0X3204;
    // 0x8006CCA4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006CCA8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006CCAC: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006CCB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CCB4: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006CCB8: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006CCBC: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x8006CCC0: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8006CCC4: lui         $t4, 0xB700
    ctx->r12 = S32(0XB700 << 16);
    // 0x8006CCC8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006CCCC: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8006CCD0: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x8006CCD4: ori         $t6, $t6, 0x2205
    ctx->r14 = ctx->r14 | 0X2205;
    // 0x8006CCD8: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8006CCDC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006CCE0: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006CCE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CCE8: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8006CCEC: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006CCF0: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8006CCF4: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8006CCF8: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x8006CCFC: ori         $t0, $t0, 0x1301
    ctx->r8 = ctx->r8 | 0X1301;
    // 0x8006CD00: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006CD04: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x8006CD08: nop

    // 0x8006CD0C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8006CD10: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006CD14: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006CD18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CD1C: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006CD20: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006CD24: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x8006CD28: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8006CD2C: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x8006CD30: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x8006CD34: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006CD38: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8006CD3C: lui         $t7, 0x55
    ctx->r15 = S32(0X55 << 16);
    // 0x8006CD40: ori         $t7, $t7, 0x2048
    ctx->r15 = ctx->r15 | 0X2048;
    // 0x8006CD44: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006CD48: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006CD4C: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006CD50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CD54: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006CD58: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006CD5C: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8006CD60: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8006CD64: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
    // 0x8006CD68: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8006CD6C: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006CD70: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8006CD74: lui         $t3, 0xFFFC
    ctx->r11 = S32(0XFFFC << 16);
    // 0x8006CD78: ori         $t3, $t3, 0xF87C
    ctx->r11 = ctx->r11 | 0XF87C;
    // 0x8006CD7C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8006CD80: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006CD84: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006CD88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CD8C: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006CD90: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006CD94: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x8006CD98: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8006CD9C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8006CDA0: ori         $t7, $t7, 0x602
    ctx->r15 = ctx->r15 | 0X602;
    // 0x8006CDA4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006CDA8: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8006CDAC: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x8006CDB0: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006CDB4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006CDB8: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006CDBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CDC0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8006CDC4: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006CDC8: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x8006CDCC: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x8006CDD0: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8006CDD4: ori         $t3, $t3, 0xC02
    ctx->r11 = ctx->r11 | 0XC02;
    // 0x8006CDD8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006CDDC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8006CDE0: addiu       $t5, $zero, 0x2000
    ctx->r13 = ADD32(0, 0X2000);
    // 0x8006CDE4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8006CDE8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006CDEC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006CDF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CDF4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8006CDF8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006CDFC: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8006CE00: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8006CE04: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8006CE08: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x8006CE0C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006CE10: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8006CE14: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x8006CE18: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006CE1C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006CE20: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006CE24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CE28: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006CE2C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006CE30: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x8006CE34: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8006CE38: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x8006CE3C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006CE40: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006CE44: lw          $t7, 0x75AC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X75AC);
    // 0x8006CE48: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8006CE4C: nop

    // 0x8006CE50: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006CE54: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006CE58: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006CE5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CE60: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006CE64: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006CE68: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x8006CE6C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8006CE70: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8006CE74: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006CE78: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8006CE7C: nop

    // 0x8006CE80: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8006CE84: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006CE88: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006CE8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CE90: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8006CE94: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006CE98: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
    // 0x8006CE9C: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8006CEA0: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8006CEA4: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8006CEA8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006CEAC: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8006CEB0: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8006CEB4: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006CEB8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006CEBC: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006CEC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CEC4: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006CEC8: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006CECC: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x8006CED0: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x8006CED4: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8006CED8: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006CEDC: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8006CEE0: nop

    // 0x8006CEE4: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8006CEE8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006CEEC: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006CEF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CEF4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006CEF8: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006CEFC: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x8006CF00: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8006CF04: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8006CF08: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006CF0C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8006CF10: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x8006CF14: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8006CF18: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006CF1C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006CF20: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006CF24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CF28: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8006CF2C: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006CF30: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8006CF34: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8006CF38: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8006CF3C: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006CF40: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8006CF44: nop

    // 0x8006CF48: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006CF4C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006CF50: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8006CF54: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006CF58: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006CF5C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006CF60: nop

    // 0x8006CF64: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006CF68: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8006CF6C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006CF70: bgez        $t7, L_8006CF80
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8006CF74: sra         $t8, $t7, 2
        ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
            goto L_8006CF80;
    }
    // 0x8006CF74: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8006CF78: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x8006CF7C: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_8006CF80:
    // 0x8006CF80: sw          $t8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r24;
    // 0x8006CF84: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006CF88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006CF8C: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8006CF90: nop

    // 0x8006CF94: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006CF98: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8006CF9C: nop

    // 0x8006CFA0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8006CFA4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006CFA8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006CFAC: nop

    // 0x8006CFB0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006CFB4: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8006CFB8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8006CFBC: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x8006CFC0: sw          $t1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r9;
    // 0x8006CFC4: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8006CFC8: nop

    // 0x8006CFCC: beq         $t2, $zero, L_8006CFF4
    if (ctx->r10 == 0) {
        // 0x8006CFD0: nop
    
            goto L_8006CFF4;
    }
    // 0x8006CFD0: nop

    // 0x8006CFD4: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x8006CFD8: nop

    // 0x8006CFDC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8006CFE0: sw          $t4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r12;
    // 0x8006CFE4: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x8006CFE8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8006CFEC: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x8006CFF0: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
L_8006CFF4:
    // 0x8006CFF4: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8006CFF8: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
    // 0x8006CFFC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8006D000: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
    // 0x8006D004: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8006D008: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8006D00C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8006D010: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006D014: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006D018: nop

    // 0x8006D01C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006D020: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8006D024: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8006D028: bgez        $t1, L_8006D038
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8006D02C: sra         $t2, $t1, 3
        ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
            goto L_8006D038;
    }
    // 0x8006D02C: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8006D030: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x8006D034: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8006D038:
    // 0x8006D038: sw          $t2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r10;
    // 0x8006D03C: lw          $t3, 0xAC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D040: nop

    // 0x8006D044: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8006D048: sw          $t4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r12;
    // 0x8006D04C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006D050: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006D054: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8006D058: nop

    // 0x8006D05C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006D060: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006D064: nop

    // 0x8006D068: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006D06C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006D070: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006D074: nop

    // 0x8006D078: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8006D07C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8006D080: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006D084: andi        $t7, $t5, 0x1F
    ctx->r15 = ctx->r13 & 0X1F;
    // 0x8006D088: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x8006D08C: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8006D090: nop

    // 0x8006D094: beq         $t8, $zero, L_8006D0BC
    if (ctx->r24 == 0) {
        // 0x8006D098: nop
    
            goto L_8006D0BC;
    }
    // 0x8006D098: nop

    // 0x8006D09C: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D0A0: nop

    // 0x8006D0A4: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8006D0A8: sw          $t0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r8;
    // 0x8006D0AC: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8006D0B0: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8006D0B4: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x8006D0B8: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
L_8006D0BC:
    // 0x8006D0BC: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x8006D0C0: sw          $t4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r12;
    // 0x8006D0C4: addiu       $t6, $zero, 0x500
    ctx->r14 = ADD32(0, 0X500);
    // 0x8006D0C8: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x8006D0CC: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
L_8006D0D0:
    // 0x8006D0D0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006D0D4: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006D0D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D0DC: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8006D0E0: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006D0E4: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x8006D0E8: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8006D0EC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8006D0F0: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8006D0F4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006D0F8: andi        $t2, $t0, 0xFFF
    ctx->r10 = ctx->r8 & 0XFFF;
    // 0x8006D0FC: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8006D100: or          $t1, $t2, $at
    ctx->r9 = ctx->r10 | ctx->r1;
    // 0x8006D104: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x8006D108: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006D10C: lw          $t4, 0x75B4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X75B4);
    // 0x8006D110: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8006D114: nop

    // 0x8006D118: sw          $t4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r12;
    // 0x8006D11C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006D120: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006D124: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D128: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8006D12C: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006D130: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x8006D134: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D138: lw          $t9, 0xA4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA4);
    // 0x8006D13C: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8006D140: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8006D144: subu        $t2, $t0, $t8
    ctx->r10 = SUB32(ctx->r8, ctx->r24);
    // 0x8006D148: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x8006D14C: sra         $t3, $t1, 1
    ctx->r11 = S32(SIGNED(ctx->r9) >> 1);
    // 0x8006D150: addiu       $t4, $t3, 0x7
    ctx->r12 = ADD32(ctx->r11, 0X7);
    // 0x8006D154: sra         $t6, $t4, 3
    ctx->r14 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8006D158: andi        $t5, $t6, 0x1FF
    ctx->r13 = ctx->r14 & 0X1FF;
    // 0x8006D15C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8006D160: sll         $t7, $t5, 9
    ctx->r15 = S32(ctx->r13 << 9);
    // 0x8006D164: or          $t9, $t7, $at
    ctx->r25 = ctx->r15 | ctx->r1;
    // 0x8006D168: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006D16C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8006D170: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8006D174: sw          $t8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r24;
    // 0x8006D178: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006D17C: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006D180: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D184: addiu       $t3, $t1, 0x8
    ctx->r11 = ADD32(ctx->r9, 0X8);
    // 0x8006D188: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006D18C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8006D190: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8006D194: lui         $t4, 0xE600
    ctx->r12 = S32(0XE600 << 16);
    // 0x8006D198: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x8006D19C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8006D1A0: nop

    // 0x8006D1A4: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006D1A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006D1AC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006D1B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D1B4: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x8006D1B8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006D1BC: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8006D1C0: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D1C4: lw          $t4, 0xA8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA8);
    // 0x8006D1C8: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x8006D1CC: andi        $t2, $t8, 0xFFF
    ctx->r10 = ctx->r24 & 0XFFF;
    // 0x8006D1D0: sll         $t1, $t2, 12
    ctx->r9 = S32(ctx->r10 << 12);
    // 0x8006D1D4: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8006D1D8: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8006D1DC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006D1E0: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8006D1E4: or          $t3, $t1, $at
    ctx->r11 = ctx->r9 | ctx->r1;
    // 0x8006D1E8: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x8006D1EC: sw          $t7, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r15;
    // 0x8006D1F0: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D1F4: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x8006D1F8: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    // 0x8006D1FC: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x8006D200: addu        $t2, $t0, $t8
    ctx->r10 = ADD32(ctx->r8, ctx->r24);
    // 0x8006D204: sll         $t1, $t2, 1
    ctx->r9 = S32(ctx->r10 << 1);
    // 0x8006D208: andi        $t4, $t1, 0xFFF
    ctx->r12 = ctx->r9 & 0XFFF;
    // 0x8006D20C: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8006D210: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006D214: sll         $t6, $t4, 12
    ctx->r14 = S32(ctx->r12 << 12);
    // 0x8006D218: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8006D21C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8006D220: or          $t3, $t6, $at
    ctx->r11 = ctx->r14 | ctx->r1;
    // 0x8006D224: andi        $t8, $t0, 0xFFF
    ctx->r24 = ctx->r8 & 0XFFF;
    // 0x8006D228: or          $t2, $t3, $t8
    ctx->r10 = ctx->r11 | ctx->r24;
    // 0x8006D22C: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
    // 0x8006D230: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006D234: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006D238: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D23C: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8006D240: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006D244: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8006D248: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8006D24C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8006D250: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8006D254: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8006D258: nop

    // 0x8006D25C: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8006D260: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006D264: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006D268: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D26C: addiu       $t3, $t0, 0x8
    ctx->r11 = ADD32(ctx->r8, 0X8);
    // 0x8006D270: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006D274: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8006D278: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D27C: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x8006D280: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8006D284: addu        $t1, $t8, $t2
    ctx->r9 = ADD32(ctx->r24, ctx->r10);
    // 0x8006D288: subu        $t4, $t1, $t8
    ctx->r12 = SUB32(ctx->r9, ctx->r24);
    // 0x8006D28C: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x8006D290: sra         $t5, $t6, 1
    ctx->r13 = S32(SIGNED(ctx->r14) >> 1);
    // 0x8006D294: addiu       $t7, $t5, 0x7
    ctx->r15 = ADD32(ctx->r13, 0X7);
    // 0x8006D298: sra         $t9, $t7, 3
    ctx->r25 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8006D29C: andi        $t0, $t9, 0x1FF
    ctx->r8 = ctx->r25 & 0X1FF;
    // 0x8006D2A0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8006D2A4: sll         $t3, $t0, 9
    ctx->r11 = S32(ctx->r8 << 9);
    // 0x8006D2A8: or          $t2, $t3, $at
    ctx->r10 = ctx->r11 | ctx->r1;
    // 0x8006D2AC: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x8006D2B0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8006D2B4: nop

    // 0x8006D2B8: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006D2BC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006D2C0: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006D2C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D2C8: addiu       $t6, $t4, 0x8
    ctx->r14 = ADD32(ctx->r12, 0X8);
    // 0x8006D2CC: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006D2D0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8006D2D4: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D2D8: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x8006D2DC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8006D2E0: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8006D2E4: sll         $t0, $t9, 12
    ctx->r8 = S32(ctx->r25 << 12);
    // 0x8006D2E8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8006D2EC: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8006D2F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D2F4: andi        $t8, $t1, 0xFFF
    ctx->r24 = ctx->r9 & 0XFFF;
    // 0x8006D2F8: or          $t3, $t0, $at
    ctx->r11 = ctx->r8 | ctx->r1;
    // 0x8006D2FC: or          $t4, $t3, $t8
    ctx->r12 = ctx->r11 | ctx->r24;
    // 0x8006D300: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x8006D304: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8006D308: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8006D30C: lw          $t3, 0xA8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA8);
    // 0x8006D310: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x8006D314: addu        $t9, $t5, $t7
    ctx->r25 = ADD32(ctx->r13, ctx->r15);
    // 0x8006D318: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006D31C: addu        $t4, $t3, $t8
    ctx->r12 = ADD32(ctx->r11, ctx->r24);
    // 0x8006D320: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8006D324: andi        $t2, $t0, 0xFFF
    ctx->r10 = ctx->r8 & 0XFFF;
    // 0x8006D328: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D32C: sll         $t1, $t2, 12
    ctx->r9 = S32(ctx->r10 << 12);
    // 0x8006D330: andi        $t5, $t6, 0xFFF
    ctx->r13 = ctx->r14 & 0XFFF;
    // 0x8006D334: or          $t7, $t1, $t5
    ctx->r15 = ctx->r9 | ctx->r13;
    // 0x8006D338: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8006D33C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006D340: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006D344: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D348: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x8006D34C: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006D350: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8006D354: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006D358: lui         $t3, 0xF200
    ctx->r11 = S32(0XF200 << 16);
    // 0x8006D35C: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x8006D360: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x8006D364: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x8006D368: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8006D36C: andi        $t1, $t6, 0xFFF
    ctx->r9 = ctx->r14 & 0XFFF;
    // 0x8006D370: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8006D374: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8006D378: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006D37C: sll         $t5, $t1, 12
    ctx->r13 = S32(ctx->r9 << 12);
    // 0x8006D380: or          $t2, $t5, $t0
    ctx->r10 = ctx->r13 | ctx->r8;
    // 0x8006D384: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8006D388: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
L_8006D38C:
    // 0x8006D38C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006D390: lh          $t9, 0x7A1E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7A1E);
    // 0x8006D394: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x8006D398: div         $zero, $t5, $t9
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r25))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r25)));
    // 0x8006D39C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x8006D3A0: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8006D3A4: sll         $t4, $t8, 4
    ctx->r12 = S32(ctx->r24 << 4);
    // 0x8006D3A8: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x8006D3AC: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8006D3B0: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x8006D3B4: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8006D3B8: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x8006D3BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006D3C0: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x8006D3C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006D3C8: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x8006D3CC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006D3D0: bne         $t9, $zero, L_8006D3DC
    if (ctx->r25 != 0) {
        // 0x8006D3D4: nop
    
            goto L_8006D3DC;
    }
    // 0x8006D3D4: nop

    // 0x8006D3D8: break       7
    do_break(2147931096);
L_8006D3DC:
    // 0x8006D3DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006D3E0: bne         $t9, $at, L_8006D3F4
    if (ctx->r25 != ctx->r1) {
        // 0x8006D3E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006D3F4;
    }
    // 0x8006D3E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006D3E8: bne         $t5, $at, L_8006D3F4
    if (ctx->r13 != ctx->r1) {
        // 0x8006D3EC: nop
    
            goto L_8006D3F4;
    }
    // 0x8006D3EC: nop

    // 0x8006D3F0: break       6
    do_break(2147931120);
L_8006D3F4:
    // 0x8006D3F4: mflo        $t0
    ctx->r8 = lo;
    // 0x8006D3F8: nop

    // 0x8006D3FC: nop

    // 0x8006D400: div         $zero, $t7, $t0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r8)));
    // 0x8006D404: bne         $t0, $zero, L_8006D410
    if (ctx->r8 != 0) {
        // 0x8006D408: nop
    
            goto L_8006D410;
    }
    // 0x8006D408: nop

    // 0x8006D40C: break       7
    do_break(2147931148);
L_8006D410:
    // 0x8006D410: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006D414: bne         $t0, $at, L_8006D428
    if (ctx->r8 != ctx->r1) {
        // 0x8006D418: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006D428;
    }
    // 0x8006D418: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006D41C: bne         $t7, $at, L_8006D428
    if (ctx->r15 != ctx->r1) {
        // 0x8006D420: nop
    
            goto L_8006D428;
    }
    // 0x8006D420: nop

    // 0x8006D424: break       6
    do_break(2147931172);
L_8006D428:
    // 0x8006D428: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D42C: lwc1        $f8, 0x7A14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A14);
    // 0x8006D430: mflo        $t2
    ctx->r10 = lo;
    // 0x8006D434: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8006D438: nop

    // 0x8006D43C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006D440: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006D444: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    // 0x8006D448: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D44C: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006D450: lwc1        $f5, 0x5580($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5580);
    // 0x8006D454: lwc1        $f4, 0x5584($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5584);
    // 0x8006D458: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8006D45C: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x8006D460: nop

    // 0x8006D464: bc1f        L_8006D48C
    if (!c1cs) {
        // 0x8006D468: nop
    
            goto L_8006D48C;
    }
    // 0x8006D468: nop

    // 0x8006D46C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D470: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006D474: lwc1        $f11, 0x5588($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5588);
    // 0x8006D478: lwc1        $f10, 0x558C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X558C);
    // 0x8006D47C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8006D480: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8006D484: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8006D488: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
L_8006D48C:
    // 0x8006D48C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D490: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006D494: lwc1        $f9, 0x5590($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5590);
    // 0x8006D498: lwc1        $f8, 0x5594($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5594);
    // 0x8006D49C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006D4A0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8006D4A4: jal         0x80034970
    // 0x8006D4A8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8006D4A8: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x8006D4AC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006D4B0: lh          $t3, 0x7A1A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7A1A);
    // 0x8006D4B4: nop

    // 0x8006D4B8: bgez        $t3, L_8006D4C8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8006D4BC: sra         $t8, $t3, 1
        ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
            goto L_8006D4C8;
    }
    // 0x8006D4BC: sra         $t8, $t3, 1
    ctx->r24 = S32(SIGNED(ctx->r11) >> 1);
    // 0x8006D4C0: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x8006D4C4: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8006D4C8:
    // 0x8006D4C8: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8006D4CC: nop

    // 0x8006D4D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006D4D4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8006D4D8: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x8006D4DC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x8006D4E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006D4E4: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006D4E8: nop

    // 0x8006D4EC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006D4F0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8006D4F4: nop

    // 0x8006D4F8: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8006D4FC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006D500: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006D504: nop

    // 0x8006D508: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8006D50C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x8006D510: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8006D514: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x8006D518: nop

    // 0x8006D51C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D520: lwc1        $f18, 0x7A14($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A14);
    // 0x8006D524: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D528: lwc1        $f4, 0x7A24($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A24);
    // 0x8006D52C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D530: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8006D534: swc1        $f6, 0x7A14($at)
    MEM_W(0X7A14, ctx->r1) = ctx->f6.u32l;
    // 0x8006D538: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D53C: lwc1        $f8, 0x7A14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A14);
    // 0x8006D540: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D544: lwc1        $f17, 0x5598($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5598);
    // 0x8006D548: lwc1        $f16, 0x559C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X559C);
    // 0x8006D54C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006D550: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x8006D554: nop

    // 0x8006D558: bc1f        L_8006D588
    if (!c1cs) {
        // 0x8006D55C: nop
    
            goto L_8006D588;
    }
    // 0x8006D55C: nop

    // 0x8006D560: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D564: lwc1        $f18, 0x7A14($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A14);
    // 0x8006D568: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006D56C: lwc1        $f7, 0x55A0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X55A0);
    // 0x8006D570: lwc1        $f6, 0x55A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X55A4);
    // 0x8006D574: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8006D578: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8006D57C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D580: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8006D584: swc1        $f10, 0x7A14($at)
    MEM_W(0X7A14, ctx->r1) = ctx->f10.u32l;
L_8006D588:
    // 0x8006D588: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006D58C: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006D590: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D594: addiu       $t5, $t1, 0x8
    ctx->r13 = ADD32(ctx->r9, 0X8);
    // 0x8006D598: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006D59C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8006D5A0: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8006D5A4: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8006D5A8: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x8006D5AC: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x8006D5B0: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x8006D5B4: andi        $t2, $t0, 0xFFF
    ctx->r10 = ctx->r8 & 0XFFF;
    // 0x8006D5B8: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8006D5BC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8006D5C0: addu        $t1, $t4, $t6
    ctx->r9 = ADD32(ctx->r12, ctx->r14);
    // 0x8006D5C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8006D5C8: andi        $t5, $t1, 0xFFF
    ctx->r13 = ctx->r9 & 0XFFF;
    // 0x8006D5CC: or          $t8, $t3, $at
    ctx->r24 = ctx->r11 | ctx->r1;
    // 0x8006D5D0: or          $t9, $t8, $t5
    ctx->r25 = ctx->r24 | ctx->r13;
    // 0x8006D5D4: sw          $t9, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r25;
    // 0x8006D5D8: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x8006D5DC: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x8006D5E0: andi        $t2, $t0, 0xFFF
    ctx->r10 = ctx->r8 & 0XFFF;
    // 0x8006D5E4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8006D5E8: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x8006D5EC: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8006D5F0: or          $t1, $t3, $t6
    ctx->r9 = ctx->r11 | ctx->r14;
    // 0x8006D5F4: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8006D5F8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006D5FC: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006D600: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D604: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x8006D608: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006D60C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x8006D610: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006D614: lui         $t7, 0xB400
    ctx->r15 = S32(0XB400 << 16);
    // 0x8006D618: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x8006D61C: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x8006D620: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x8006D624: sll         $t1, $t6, 5
    ctx->r9 = S32(ctx->r14 << 5);
    // 0x8006D628: andi        $t4, $t2, 0xFFFF
    ctx->r12 = ctx->r10 & 0XFFFF;
    // 0x8006D62C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8006D630: sll         $t3, $t4, 16
    ctx->r11 = S32(ctx->r12 << 16);
    // 0x8006D634: bgez        $t1, L_8006D644
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8006D638: sra         $t8, $t1, 2
        ctx->r24 = S32(SIGNED(ctx->r9) >> 2);
            goto L_8006D644;
    }
    // 0x8006D638: sra         $t8, $t1, 2
    ctx->r24 = S32(SIGNED(ctx->r9) >> 2);
    // 0x8006D63C: addiu       $at, $t1, 0x3
    ctx->r1 = ADD32(ctx->r9, 0X3);
    // 0x8006D640: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_8006D644:
    // 0x8006D644: andi        $t5, $t8, 0xFFFF
    ctx->r13 = ctx->r24 & 0XFFFF;
    // 0x8006D648: or          $t9, $t3, $t5
    ctx->r25 = ctx->r11 | ctx->r13;
    // 0x8006D64C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x8006D650: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006D654: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006D658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006D65C: addiu       $t2, $t0, 0x8
    ctx->r10 = ADD32(ctx->r8, 0X8);
    // 0x8006D660: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006D664: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8006D668: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D66C: lui         $t4, 0xB300
    ctx->r12 = S32(0XB300 << 16);
    // 0x8006D670: sw          $t4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r12;
    // 0x8006D674: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D678: lui         $t1, 0x100
    ctx->r9 = S32(0X100 << 16);
    // 0x8006D67C: ori         $t1, $t1, 0x100
    ctx->r9 = ctx->r9 | 0X100;
    // 0x8006D680: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x8006D684: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x8006D688: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x8006D68C: nop

    // 0x8006D690: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x8006D694: sw          $t9, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r25;
    // 0x8006D698: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x8006D69C: nop

    // 0x8006D6A0: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8006D6A4: slti        $at, $t0, 0x78
    ctx->r1 = SIGNED(ctx->r8) < 0X78 ? 1 : 0;
    // 0x8006D6A8: bne         $at, $zero, L_8006D38C
    if (ctx->r1 != 0) {
        // 0x8006D6AC: sw          $t0, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r8;
            goto L_8006D38C;
    }
    // 0x8006D6AC: sw          $t0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r8;
    // 0x8006D6B0: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x8006D6B4: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x8006D6B8: nop

    // 0x8006D6BC: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x8006D6C0: sw          $t6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r14;
    // 0x8006D6C4: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8006D6C8: nop

    // 0x8006D6CC: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x8006D6D0: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8006D6D4: bne         $at, $zero, L_8006D0D0
    if (ctx->r1 != 0) {
        // 0x8006D6D8: sw          $t8, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r24;
            goto L_8006D0D0;
    }
    // 0x8006D6D8: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x8006D6DC: b           L_8006D6E4
    // 0x8006D6E0: nop

        goto L_8006D6E4;
    // 0x8006D6E0: nop

L_8006D6E4:
    // 0x8006D6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006D6E8: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x8006D6EC: jr          $ra
    // 0x8006D6F0: nop

    return;
    // 0x8006D6F0: nop

;}
RECOMP_FUNC void func_800B7720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7720: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B7724: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B7728: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800B772C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800B7730: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800B7734: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B7738: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B773C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800B7740: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800B7744: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B7748: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B774C: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B7750: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800B7754: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B7758: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B775C: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800B7760: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800B7764: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B7768: addiu       $a1, $a1, 0x3A18
    ctx->r5 = ADD32(ctx->r5, 0X3A18);
    // 0x800B776C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B7770: jal         0x80027464
    // 0x800B7774: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B7774: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800B7778: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800B777C: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800B7780: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B7784: beq         $t7, $at, L_800B787C
    if (ctx->r15 == ctx->r1) {
        // 0x800B7788: nop
    
            goto L_800B787C;
    }
    // 0x800B7788: nop

    // 0x800B778C: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x800B7790: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x800B7794: jal         0x80026F10
    // 0x800B7798: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800B7798: nop

    after_1:
    // 0x800B779C: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800B77A0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800B77A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B77A8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B77AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B77B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B77B4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B77B8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800B77BC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800B77C0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x800B77C4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800B77C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B77CC: lwc1        $f18, 0x40($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X40);
    // 0x800B77D0: nop

    // 0x800B77D4: swc1        $f18, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f18.u32l;
    // 0x800B77D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800B77DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B77E0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B77E4: nop

    // 0x800B77E8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B77EC: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800B77F0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B77F4: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800B77F8: nop

    // 0x800B77FC: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x800B7800: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B7804: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800B7808: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800B780C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B7810: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x800B7814: sh          $t9, 0xB2($t0)
    MEM_H(0XB2, ctx->r8) = ctx->r25;
    // 0x800B7818: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B781C: nop

    // 0x800B7820: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800B7824: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B7828: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B782C: sh          $t2, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r10;
    // 0x800B7830: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800B7834: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B7838: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B783C: nop

    // 0x800B7840: swc1        $f8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f8.u32l;
    // 0x800B7844: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B7848: nop

    // 0x800B784C: lwc1        $f20, 0xC($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800B7850: nop

    // 0x800B7854: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x800B7858: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B785C: nop

    // 0x800B7860: swc1        $f20, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f20.u32l;
    // 0x800B7864: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B7868: jal         0x80029C40
    // 0x800B786C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B786C: nop

    after_2:
    // 0x800B7870: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800B7874: jal         0x80029D04
    // 0x800B7878: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B7878: nop

    after_3:
L_800B787C:
    // 0x800B787C: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x800B7880: b           L_800B7890
    // 0x800B7884: nop

        goto L_800B7890;
    // 0x800B7884: nop

    // 0x800B7888: b           L_800B7890
    // 0x800B788C: nop

        goto L_800B7890;
    // 0x800B788C: nop

L_800B7890:
    // 0x800B7890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B7894: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B7898: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B789C: jr          $ra
    // 0x800B78A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B78A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80087D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80087D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087D78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087D7C: jal         0x8001C248
    // 0x80087D80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001C248(rdram, ctx);
        goto after_0;
    // 0x80087D80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80087D84: beq         $v0, $zero, L_80087DAC
    if (ctx->r2 == 0) {
        // 0x80087D88: nop
    
            goto L_80087DAC;
    }
    // 0x80087D88: nop

    // 0x80087D8C: jal         0x8001838C
    // 0x80087D90: nop

    func_8001838C(rdram, ctx);
        goto after_1;
    // 0x80087D90: nop

    after_1:
    // 0x80087D94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087D98: jal         0x8001B014
    // 0x80087D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B014(rdram, ctx);
        goto after_2;
    // 0x80087D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80087DA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80087DA4: jal         0x8001C384
    // 0x80087DA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001C384(rdram, ctx);
        goto after_3;
    // 0x80087DA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_80087DAC:
    // 0x80087DAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087DB0: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x80087DB4: nop

    // 0x80087DB8: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80087DBC: nop

    // 0x80087DC0: beq         $t7, $zero, L_80087DFC
    if (ctx->r15 == 0) {
        // 0x80087DC4: nop
    
            goto L_80087DFC;
    }
    // 0x80087DC4: nop

    // 0x80087DC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087DCC: jal         0x8001C248
    // 0x80087DD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001C248(rdram, ctx);
        goto after_4;
    // 0x80087DD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80087DD4: beq         $v0, $zero, L_80087DFC
    if (ctx->r2 == 0) {
        // 0x80087DD8: nop
    
            goto L_80087DFC;
    }
    // 0x80087DD8: nop

    // 0x80087DDC: jal         0x8001838C
    // 0x80087DE0: nop

    func_8001838C(rdram, ctx);
        goto after_5;
    // 0x80087DE0: nop

    after_5:
    // 0x80087DE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087DE8: jal         0x8001B014
    // 0x80087DEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B014(rdram, ctx);
        goto after_6;
    // 0x80087DEC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80087DF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087DF4: jal         0x8001C384
    // 0x80087DF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x80087DF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
L_80087DFC:
    // 0x80087DFC: b           L_80087E04
    // 0x80087E00: nop

        goto L_80087E04;
    // 0x80087E00: nop

L_80087E04:
    // 0x80087E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087E0C: jr          $ra
    // 0x80087E10: nop

    return;
    // 0x80087E10: nop

;}
RECOMP_FUNC void func_800DD6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DD6C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DD6C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DD6C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DD6CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DD6D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DD6D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD6D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DD6DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DD6E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DD6E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DD6E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DD6EC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DD6F0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DD6F4: nop

    // 0x800DD6F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DD6FC: nop

    // 0x800DD700: bne         $t1, $zero, L_800DD7A0
    if (ctx->r9 != 0) {
        // 0x800DD704: nop
    
            goto L_800DD7A0;
    }
    // 0x800DD704: nop

    // 0x800DD708: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DD70C: nop

    // 0x800DD710: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DD714: nop

    // 0x800DD718: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DD71C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DD720: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DD724: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DD728: nop

    // 0x800DD72C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800DD730: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DD734: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DD738: nop

    // 0x800DD73C: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800DD740: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800DD744: nop

    // 0x800DD748: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800DD74C: nop

    // 0x800DD750: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x800DD754: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800DD758: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DD75C: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800DD760: nop

    // 0x800DD764: bne         $t9, $at, L_800DD788
    if (ctx->r25 != ctx->r1) {
        // 0x800DD768: nop
    
            goto L_800DD788;
    }
    // 0x800DD768: nop

    // 0x800DD76C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DD770: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800DD774: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800DD778: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DD77C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800DD780: b           L_800DD7A0
    // 0x800DD784: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
        goto L_800DD7A0;
    // 0x800DD784: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_800DD788:
    // 0x800DD788: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DD78C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800DD790: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DD794: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DD798: nop

    // 0x800DD79C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800DD7A0:
    // 0x800DD7A0: b           L_800DD7A8
    // 0x800DD7A4: nop

        goto L_800DD7A8;
    // 0x800DD7A4: nop

L_800DD7A8:
    // 0x800DD7A8: jr          $ra
    // 0x800DD7AC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DD7AC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DC3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DC3D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DC3D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DC3D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DC3DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DC3E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DC3E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DC3E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC3EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DC3F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DC3F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DC3F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DC3FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DC400: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800DC404: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC408: nop

    // 0x800DC40C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DC410: nop

    // 0x800DC414: bne         $t1, $zero, L_800DC448
    if (ctx->r9 != 0) {
        // 0x800DC418: nop
    
            goto L_800DC448;
    }
    // 0x800DC418: nop

    // 0x800DC41C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC420: nop

    // 0x800DC424: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DC428: nop

    // 0x800DC42C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DC430: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DC434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC43C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x800DC440: jal         0x80029EF8
    // 0x800DC444: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800DC444: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
L_800DC448:
    // 0x800DC448: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC44C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC450: jal         0x8002A46C
    // 0x800DC454: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800DC454: nop

    after_1:
    // 0x800DC458: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC45C: nop

    // 0x800DC460: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x800DC464: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC468: nop

    // 0x800DC46C: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800DC470: nop

    // 0x800DC474: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x800DC478: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DC47C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DC480: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DC484: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DC488: jal         0x8002A0D0
    // 0x800DC48C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_2;
    // 0x800DC48C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_2:
    // 0x800DC490: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DC494: bne         $v0, $at, L_800DC4B4
    if (ctx->r2 != ctx->r1) {
        // 0x800DC498: nop
    
            goto L_800DC4B4;
    }
    // 0x800DC498: nop

    // 0x800DC49C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC4A0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800DC4A4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800DC4A8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800DC4AC: nop

    // 0x800DC4B0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800DC4B4:
    // 0x800DC4B4: b           L_800DC4BC
    // 0x800DC4B8: nop

        goto L_800DC4BC;
    // 0x800DC4B8: nop

L_800DC4BC:
    // 0x800DC4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DC4C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DC4C4: jr          $ra
    // 0x800DC4C8: nop

    return;
    // 0x800DC4C8: nop

;}
RECOMP_FUNC void func_800DECE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DECE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800DECE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800DECE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800DECEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DECF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DECF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DECF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DECFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DED00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DED04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DED08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DED0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DED10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DED14: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800DED18: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DED1C: nop

    // 0x800DED20: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DED24: nop

    // 0x800DED28: bne         $t1, $zero, L_800DEDF0
    if (ctx->r9 != 0) {
        // 0x800DED2C: nop
    
            goto L_800DEDF0;
    }
    // 0x800DED2C: nop

    // 0x800DED30: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DED34: nop

    // 0x800DED38: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DED3C: nop

    // 0x800DED40: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DED44: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DED48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DED4C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DED50: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DED54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DED58: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DED5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DED60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800DED64: jal         0x8001C0EC
    // 0x800DED68: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DED68: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DED6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DED70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DED74: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DED78: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DED7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DED80: jal         0x8001ABF4
    // 0x800DED84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DED84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DED88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DED8C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DED90: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DED94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DED98: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DED9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DEDA0: jal         0x8001ABF4
    // 0x800DEDA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DEDA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DEDA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEDAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEDB0: jal         0x8002A46C
    // 0x800DEDB4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800DEDB4: nop

    after_3:
    // 0x800DEDB8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEDBC: nop

    // 0x800DEDC0: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800DEDC4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEDC8: nop

    // 0x800DEDCC: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DEDD0: nop

    // 0x800DEDD4: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800DEDD8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEDDC: nop

    // 0x800DEDE0: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800DEDE4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEDE8: nop

    // 0x800DEDEC: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
L_800DEDF0:
    // 0x800DEDF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEDF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEDF8: jal         0x80028FA0
    // 0x800DEDFC: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DEDFC: nop

    after_4:
    // 0x800DEE00: beq         $v0, $zero, L_800DEE3C
    if (ctx->r2 == 0) {
        // 0x800DEE04: nop
    
            goto L_800DEE3C;
    }
    // 0x800DEE04: nop

    // 0x800DEE08: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEE0C: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DEE10: lh          $t1, 0x106($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X106);
    // 0x800DEE14: nop

    // 0x800DEE18: beq         $t1, $at, L_800DEE2C
    if (ctx->r9 == ctx->r1) {
        // 0x800DEE1C: nop
    
            goto L_800DEE2C;
    }
    // 0x800DEE1C: nop

    // 0x800DEE20: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DEE24: bne         $t1, $at, L_800DEE3C
    if (ctx->r9 != ctx->r1) {
        // 0x800DEE28: nop
    
            goto L_800DEE3C;
    }
    // 0x800DEE28: nop

L_800DEE2C:
    // 0x800DEE2C: jal         0x800E3EE4
    // 0x800DEE30: nop

    func_800E3EE4(rdram, ctx);
        goto after_5;
    // 0x800DEE30: nop

    after_5:
    // 0x800DEE34: b           L_800DF024
    // 0x800DEE38: nop

        goto L_800DF024;
    // 0x800DEE38: nop

L_800DEE3C:
    // 0x800DEE3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEE40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEE44: jal         0x8001B62C
    // 0x800DEE48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_6;
    // 0x800DEE48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800DEE4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800DEE50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DEE54: nop

    // 0x800DEE58: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x800DEE5C: nop

    // 0x800DEE60: bc1f        L_800DEFD4
    if (!c1cs) {
        // 0x800DEE64: nop
    
            goto L_800DEFD4;
    }
    // 0x800DEE64: nop

    // 0x800DEE68: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEE6C: nop

    // 0x800DEE70: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800DEE74: nop

    // 0x800DEE78: bne         $t4, $zero, L_800DEEA0
    if (ctx->r12 != 0) {
        // 0x800DEE7C: nop
    
            goto L_800DEEA0;
    }
    // 0x800DEE7C: nop

    // 0x800DEE80: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEE84: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DEE88: sh          $t2, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r10;
    // 0x800DEE8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEE90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEE94: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x800DEE98: jal         0x80029EF8
    // 0x800DEE9C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800DEE9C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
L_800DEEA0:
    // 0x800DEEA0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEEA4: nop

    // 0x800DEEA8: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800DEEAC: nop

    // 0x800DEEB0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x800DEEB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DEEB8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEEBC: nop

    // 0x800DEEC0: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
    // 0x800DEEC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DEEC8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DEECC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEED0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DEED8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DEEDC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DEEE0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800DEEE4: jal         0x80029018
    // 0x800DEEE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800DEEE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x800DEEEC: beq         $v0, $zero, L_800DEF10
    if (ctx->r2 == 0) {
        // 0x800DEEF0: nop
    
            goto L_800DEF10;
    }
    // 0x800DEEF0: nop

    // 0x800DEEF4: jal         0x800297DC
    // 0x800DEEF8: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800DEEF8: nop

    after_9:
    // 0x800DEEFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEF00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEF04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DEF08: jal         0x80029824
    // 0x800DEF0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800DEF0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
L_800DEF10:
    // 0x800DEF10: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800DEF14: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEF18: nop

    // 0x800DEF1C: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x800DEF20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800DEF24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DEF28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEF2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEF30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DEF34: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DEF38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DEF3C: jal         0x80029F58
    // 0x800DEF40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_11;
    // 0x800DEF40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x800DEF44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DEF48: bne         $v0, $at, L_800DEF60
    if (ctx->r2 != ctx->r1) {
        // 0x800DEF4C: nop
    
            goto L_800DEF60;
    }
    // 0x800DEF4C: nop

    // 0x800DEF50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800DEF54: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEF58: nop

    // 0x800DEF5C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_800DEF60:
    // 0x800DEF60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEF64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEF68: jal         0x8001B4AC
    // 0x800DEF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_12;
    // 0x800DEF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800DEF70: beq         $v0, $zero, L_800DEFCC
    if (ctx->r2 == 0) {
        // 0x800DEF74: nop
    
            goto L_800DEFCC;
    }
    // 0x800DEF74: nop

    // 0x800DEF78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEF7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEF80: jal         0x8002A1FC
    // 0x800DEF84: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_13;
    // 0x800DEF84: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_13:
    // 0x800DEF88: beq         $v0, $zero, L_800DEFC0
    if (ctx->r2 == 0) {
        // 0x800DEF8C: nop
    
            goto L_800DEFC0;
    }
    // 0x800DEF8C: nop

    // 0x800DEF90: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEF94: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x800DEF98: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800DEF9C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEFA0: nop

    // 0x800DEFA4: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
    // 0x800DEFA8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEFAC: nop

    // 0x800DEFB0: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x800DEFB4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEFB8: b           L_800DEFCC
    // 0x800DEFBC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800DEFCC;
    // 0x800DEFBC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800DEFC0:
    // 0x800DEFC0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEFC4: nop

    // 0x800DEFC8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800DEFCC:
    // 0x800DEFCC: b           L_800DF01C
    // 0x800DEFD0: nop

        goto L_800DF01C;
    // 0x800DEFD0: nop

L_800DEFD4:
    // 0x800DEFD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEFD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEFDC: jal         0x8002A1FC
    // 0x800DEFE0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_14;
    // 0x800DEFE0: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_14:
    // 0x800DEFE4: beq         $v0, $zero, L_800DF01C
    if (ctx->r2 == 0) {
        // 0x800DEFE8: nop
    
            goto L_800DF01C;
    }
    // 0x800DEFE8: nop

    // 0x800DEFEC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEFF0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800DEFF4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800DEFF8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800DEFFC: nop

    // 0x800DF000: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800DF004: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800DF008: nop

    // 0x800DF00C: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x800DF010: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800DF014: nop

    // 0x800DF018: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800DF01C:
    // 0x800DF01C: b           L_800DF024
    // 0x800DF020: nop

        goto L_800DF024;
    // 0x800DF020: nop

L_800DF024:
    // 0x800DF024: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800DF028: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800DF02C: jr          $ra
    // 0x800DF030: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800DF030: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8007BE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BE30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BE34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BE38: jal         0x8007944C
    // 0x8007BE3C: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007BE3C: nop

    after_0:
    // 0x8007BE40: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007BE44: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BE48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007BE4C: beq         $t6, $at, L_8007BF00
    if (ctx->r14 == ctx->r1) {
        // 0x8007BE50: nop
    
            goto L_8007BF00;
    }
    // 0x8007BE50: nop

    // 0x8007BE54: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BE58: jal         0x8007BD30
    // 0x8007BE5C: nop

    func_8007BD30(rdram, ctx);
        goto after_1;
    // 0x8007BE5C: nop

    after_1:
    // 0x8007BE60: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BE64: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007BE68: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007BE6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007BE70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007BE74: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007BE78: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007BE7C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007BE80: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007BE84: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007BE88: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007BE8C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8007BE90: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007BE94: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007BE98: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007BE9C: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007BEA0: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8007BEA4: nop

    // 0x8007BEA8: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x8007BEAC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007BEB0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8007BEB4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007BEB8: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8007BEBC: nop

    // 0x8007BEC0: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x8007BEC4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007BEC8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007BECC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007BED0: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8007BED4: nop

    // 0x8007BED8: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x8007BEDC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007BEE0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8007BEE4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8007BEE8: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8007BEEC: nop

    // 0x8007BEF0: swc1        $f10, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f10.u32l;
    // 0x8007BEF4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BEF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007BEFC: sh          $t1, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = ctx->r9;
L_8007BF00:
    // 0x8007BF00: b           L_8007BF08
    // 0x8007BF04: nop

        goto L_8007BF08;
    // 0x8007BF04: nop

L_8007BF08:
    // 0x8007BF08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BF0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007BF10: jr          $ra
    // 0x8007BF14: nop

    return;
    // 0x8007BF14: nop

;}
RECOMP_FUNC void func_800FF7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FF7B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FF7B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FF7BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FF7C0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x800FF7C4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800FF7C8: jal         0x8005F96C
    // 0x800FF7CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    Debug_SetTextColor(rdram, ctx);
        goto after_0;
    // 0x800FF7CC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
    // 0x800FF7D0: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x800FF7D4: lb          $s0, -0x1C14($s0)
    ctx->r16 = MEM_B(ctx->r16, -0X1C14);
    // 0x800FF7D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FF7DC: beq         $s0, $at, L_800FF81C
    if (ctx->r16 == ctx->r1) {
        // 0x800FF7E0: nop
    
            goto L_800FF81C;
    }
    // 0x800FF7E0: nop

    // 0x800FF7E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FF7E8: beq         $s0, $at, L_800FF82C
    if (ctx->r16 == ctx->r1) {
        // 0x800FF7EC: nop
    
            goto L_800FF82C;
    }
    // 0x800FF7EC: nop

    // 0x800FF7F0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x800FF7F4: beq         $s0, $at, L_800FF83C
    if (ctx->r16 == ctx->r1) {
        // 0x800FF7F8: nop
    
            goto L_800FF83C;
    }
    // 0x800FF7F8: nop

    // 0x800FF7FC: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x800FF800: beq         $s0, $at, L_800FF84C
    if (ctx->r16 == ctx->r1) {
        // 0x800FF804: nop
    
            goto L_800FF84C;
    }
    // 0x800FF804: nop

    // 0x800FF808: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x800FF80C: beq         $s0, $at, L_800FF85C
    if (ctx->r16 == ctx->r1) {
        // 0x800FF810: nop
    
            goto L_800FF85C;
    }
    // 0x800FF810: nop

    // 0x800FF814: b           L_800FF86C
    // 0x800FF818: nop

        goto L_800FF86C;
    // 0x800FF818: nop

L_800FF81C:
    // 0x800FF81C: jal         0x800FEFA0
    // 0x800FF820: nop

    func_800FEFA0(rdram, ctx);
        goto after_1;
    // 0x800FF820: nop

    after_1:
    // 0x800FF824: b           L_800FF86C
    // 0x800FF828: nop

        goto L_800FF86C;
    // 0x800FF828: nop

L_800FF82C:
    // 0x800FF82C: jal         0x800FF43C
    // 0x800FF830: nop

    func_800FF43C(rdram, ctx);
        goto after_2;
    // 0x800FF830: nop

    after_2:
    // 0x800FF834: b           L_800FF86C
    // 0x800FF838: nop

        goto L_800FF86C;
    // 0x800FF838: nop

L_800FF83C:
    // 0x800FF83C: jal         0x800FE9BC
    // 0x800FF840: nop

    func_800FE9BC(rdram, ctx);
        goto after_3;
    // 0x800FF840: nop

    after_3:
    // 0x800FF844: b           L_800FF86C
    // 0x800FF848: nop

        goto L_800FF86C;
    // 0x800FF848: nop

L_800FF84C:
    // 0x800FF84C: jal         0x800FEB6C
    // 0x800FF850: nop

    func_800FEB6C(rdram, ctx);
        goto after_4;
    // 0x800FF850: nop

    after_4:
    // 0x800FF854: b           L_800FF86C
    // 0x800FF858: nop

        goto L_800FF86C;
    // 0x800FF858: nop

L_800FF85C:
    // 0x800FF85C: jal         0x800FEE34
    // 0x800FF860: nop

    Debug_FogEdit_Menu(rdram, ctx);
        goto after_5;
    // 0x800FF860: nop

    after_5:
    // 0x800FF864: b           L_800FF86C
    // 0x800FF868: nop

        goto L_800FF86C;
    // 0x800FF868: nop

L_800FF86C:
    // 0x800FF86C: jal         0x8005FA90
    // 0x800FF870: nop

    stub_8005FA90(rdram, ctx);
        goto after_6;
    // 0x800FF870: nop

    after_6:
    // 0x800FF874: b           L_800FF87C
    // 0x800FF878: nop

        goto L_800FF87C;
    // 0x800FF878: nop

L_800FF87C:
    // 0x800FF87C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FF880: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FF884: jr          $ra
    // 0x800FF888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FF888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E7C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7C54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7C58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7C5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7C60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7C64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E7C68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7C70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7C74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7C78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7C7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7C80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7C84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E7C88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7C8C: nop

    // 0x800E7C90: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E7C94: nop

    // 0x800E7C98: bne         $t1, $zero, L_800E7CF0
    if (ctx->r9 != 0) {
        // 0x800E7C9C: nop
    
            goto L_800E7CF0;
    }
    // 0x800E7C9C: nop

    // 0x800E7CA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E7CA4: nop

    // 0x800E7CA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E7CAC: nop

    // 0x800E7CB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E7CB4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E7CB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E7CBC: nop

    // 0x800E7CC0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E7CC4: nop

    // 0x800E7CC8: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E7CCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7CD0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E7CD4: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E7CD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7CDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E7CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7CE4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x800E7CE8: jal         0x8001C0EC
    // 0x800E7CEC: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E7CEC: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E7CF0:
    // 0x800E7CF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7CF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7CF8: jal         0x8002A8B4
    // 0x800E7CFC: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800E7CFC: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_1:
    // 0x800E7D00: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E7D04: nop

    // 0x800E7D08: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800E7D0C: nop

    // 0x800E7D10: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
    // 0x800E7D14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7D18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7D1C: jal         0x8001B4AC
    // 0x800E7D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E7D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E7D24: beq         $v0, $zero, L_800E7D44
    if (ctx->r2 == 0) {
        // 0x800E7D28: nop
    
            goto L_800E7D44;
    }
    // 0x800E7D28: nop

    // 0x800E7D2C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7D30: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800E7D34: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E7D38: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E7D3C: nop

    // 0x800E7D40: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E7D44:
    // 0x800E7D44: b           L_800E7D4C
    // 0x800E7D48: nop

        goto L_800E7D4C;
    // 0x800E7D48: nop

L_800E7D4C:
    // 0x800E7D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7D50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E7D54: jr          $ra
    // 0x800E7D58: nop

    return;
    // 0x800E7D58: nop

;}
RECOMP_FUNC void func_800B2C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B2C54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B2C58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B2C5C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B2C60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B2C64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B2C68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B2C6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B2C70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2C74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B2C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2C7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B2C80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B2C84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B2C88: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B2C8C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B2C90: nop

    // 0x800B2C94: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800B2C98: nop

    // 0x800B2C9C: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x800B2CA0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B2CA4: nop

    // 0x800B2CA8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B2CAC: nop

    // 0x800B2CB0: bne         $t3, $zero, L_800B2D44
    if (ctx->r11 != 0) {
        // 0x800B2CB4: nop
    
            goto L_800B2D44;
    }
    // 0x800B2CB4: nop

    // 0x800B2CB8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B2CBC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B2CC0: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B2CC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2CC8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B2CCC: nop

    // 0x800B2CD0: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800B2CD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B2CD8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B2CDC: nop

    // 0x800B2CE0: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800B2CE4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B2CE8: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x800B2CEC: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800B2CF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2CF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2CF8: jal         0x8001BB34
    // 0x800B2CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B2CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B2D00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2D04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2D08: jal         0x8001BBDC
    // 0x800B2D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800B2D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800B2D10: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800B2D14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B2D18: beq         $t0, $at, L_800B2D44
    if (ctx->r8 == ctx->r1) {
        // 0x800B2D1C: nop
    
            goto L_800B2D44;
    }
    // 0x800B2D1C: nop

    // 0x800B2D20: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x800B2D24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B2D28: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800B2D2C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800B2D30: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800B2D34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800B2D38: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800B2D3C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800B2D40: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800B2D44:
    // 0x800B2D44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2D48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2D4C: jal         0x80029C40
    // 0x800B2D50: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B2D50: nop

    after_2:
    // 0x800B2D54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2D58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2D5C: jal         0x80029D04
    // 0x800B2D60: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B2D60: nop

    after_3:
    // 0x800B2D64: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B2D68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2D6C: lh          $s0, 0x108($t3)
    ctx->r16 = MEM_H(ctx->r11, 0X108);
    // 0x800B2D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2D74: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x800B2D78: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800B2D7C: sltiu       $t5, $s0, 0x1
    ctx->r13 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800B2D80: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x800B2D84: jal         0x8001BB34
    // 0x800B2D88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800B2D88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x800B2D8C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B2D90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B2D94: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x800B2D98: nop

    // 0x800B2D9C: bne         $t7, $at, L_800B2E44
    if (ctx->r15 != ctx->r1) {
        // 0x800B2DA0: nop
    
            goto L_800B2E44;
    }
    // 0x800B2DA0: nop

    // 0x800B2DA4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B2DA8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B2DAC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800B2DB0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B2DB4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800B2DB8: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x800B2DBC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B2DC0: nop

    // 0x800B2DC4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B2DC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2DCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2DD0: jal         0x8001BBDC
    // 0x800B2DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_5;
    // 0x800B2DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800B2DD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2DDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2DE0: jal         0x8001BB34
    // 0x800B2DE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x800B2DE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800B2DE8: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x800B2DEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B2DF0: beq         $t3, $at, L_800B2E20
    if (ctx->r11 == ctx->r1) {
        // 0x800B2DF4: nop
    
            goto L_800B2E20;
    }
    // 0x800B2DF4: nop

    // 0x800B2DF8: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x800B2DFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B2E00: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800B2E04: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800B2E08: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800B2E0C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800B2E10: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800B2E14: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800B2E18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B2E1C: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
L_800B2E20:
    // 0x800B2E20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2E24: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B2E28: addiu       $t7, $t7, 0x7884
    ctx->r15 = ADD32(ctx->r15, 0X7884);
    // 0x800B2E2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2E30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B2E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B2E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B2E3C: jal         0x8001C0EC
    // 0x800B2E40: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800B2E40: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_7:
L_800B2E44:
    // 0x800B2E44: b           L_800B2E4C
    // 0x800B2E48: nop

        goto L_800B2E4C;
    // 0x800B2E48: nop

L_800B2E4C:
    // 0x800B2E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B2E50: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B2E54: jr          $ra
    // 0x800B2E58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B2E58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DDE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DDE08: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800DDE0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DDE10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800DDE14: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DDE18: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800DDE1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DDE20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DDE24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DDE28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DDE2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDE30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DDE34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDE38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DDE3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DDE40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DDE44: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800DDE48: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DDE4C: nop

    // 0x800DDE50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DDE54: nop

    // 0x800DDE58: bne         $t1, $zero, L_800DDF34
    if (ctx->r9 != 0) {
        // 0x800DDE5C: nop
    
            goto L_800DDF34;
    }
    // 0x800DDE5C: nop

    // 0x800DDE60: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DDE64: nop

    // 0x800DDE68: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DDE6C: nop

    // 0x800DDE70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DDE74: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DDE78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDE7C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DDE80: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DDE84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDE88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DDE8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDE90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800DDE94: jal         0x8001C0EC
    // 0x800DDE98: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DDE98: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DDE9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDEA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDEA4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDEA8: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDEAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDEB0: jal         0x8001ABF4
    // 0x800DDEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DDEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DDEB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDEBC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDEC0: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDEC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDEC8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DDECC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DDED0: jal         0x8001ABF4
    // 0x800DDED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DDED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DDED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDEDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDEE0: jal         0x8002A46C
    // 0x800DDEE4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800DDEE4: nop

    after_3:
    // 0x800DDEE8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DDEEC: nop

    // 0x800DDEF0: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800DDEF4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DDEF8: nop

    // 0x800DDEFC: lwc1        $f4, 0x3C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800DDF00: nop

    // 0x800DDF04: swc1        $f4, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f4.u32l;
    // 0x800DDF08: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800DDF0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DDF10: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DDF14: nop

    // 0x800DDF18: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
    // 0x800DDF1C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DDF20: nop

    // 0x800DDF24: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800DDF28: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DDF2C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800DDF30: sh          $t0, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r8;
L_800DDF34:
    // 0x800DDF34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDF38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDF3C: jal         0x80028FA0
    // 0x800DDF40: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DDF40: nop

    after_4:
    // 0x800DDF44: beq         $v0, $zero, L_800DDF98
    if (ctx->r2 == 0) {
        // 0x800DDF48: nop
    
            goto L_800DDF98;
    }
    // 0x800DDF48: nop

    // 0x800DDF4C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DDF50: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DDF54: lh          $t4, 0x106($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X106);
    // 0x800DDF58: nop

    // 0x800DDF5C: beq         $t4, $at, L_800DDF70
    if (ctx->r12 == ctx->r1) {
        // 0x800DDF60: nop
    
            goto L_800DDF70;
    }
    // 0x800DDF60: nop

    // 0x800DDF64: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DDF68: bne         $t4, $at, L_800DDF88
    if (ctx->r12 != ctx->r1) {
        // 0x800DDF6C: nop
    
            goto L_800DDF88;
    }
    // 0x800DDF6C: nop

L_800DDF70:
    // 0x800DDF70: jal         0x800E3EE4
    // 0x800DDF74: nop

    func_800E3EE4(rdram, ctx);
        goto after_5;
    // 0x800DDF74: nop

    after_5:
    // 0x800DDF78: b           L_800DE1D0
    // 0x800DDF7C: nop

        goto L_800DE1D0;
    // 0x800DDF7C: nop

    // 0x800DDF80: b           L_800DDF98
    // 0x800DDF84: nop

        goto L_800DDF98;
    // 0x800DDF84: nop

L_800DDF88:
    // 0x800DDF88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDF8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDF90: jal         0x80029B60
    // 0x800DDF94: nop

    func_80029B60(rdram, ctx);
        goto after_6;
    // 0x800DDF94: nop

    after_6:
L_800DDF98:
    // 0x800DDF98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDF9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDFA0: jal         0x8001B62C
    // 0x800DDFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_7;
    // 0x800DDFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800DDFA8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800DDFAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800DDFB0: nop

    // 0x800DDFB4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800DDFB8: nop

    // 0x800DDFBC: bc1f        L_800DE180
    if (!c1cs) {
        // 0x800DDFC0: nop
    
            goto L_800DE180;
    }
    // 0x800DDFC0: nop

    // 0x800DDFC4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DDFC8: nop

    // 0x800DDFCC: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800DDFD0: nop

    // 0x800DDFD4: bne         $t5, $zero, L_800DDFFC
    if (ctx->r13 != 0) {
        // 0x800DDFD8: nop
    
            goto L_800DDFFC;
    }
    // 0x800DDFD8: nop

    // 0x800DDFDC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DDFE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800DDFE4: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800DDFE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDFEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDFF0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x800DDFF4: jal         0x80029EF8
    // 0x800DDFF8: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_8;
    // 0x800DDFF8: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_8:
L_800DDFFC:
    // 0x800DDFFC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DE000: nop

    // 0x800DE004: lwc1        $f10, 0x28($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X28);
    // 0x800DE008: nop

    // 0x800DE00C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x800DE010: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DE014: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DE018: nop

    // 0x800DE01C: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
    // 0x800DE020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE028: jal         0x80029C40
    // 0x800DE02C: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800DE02C: nop

    after_9:
    // 0x800DE030: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DE034: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DE038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE03C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE044: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x800DE048: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DE04C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800DE050: jal         0x80029018
    // 0x800DE054: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x800DE054: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x800DE058: beq         $v0, $zero, L_800DE07C
    if (ctx->r2 == 0) {
        // 0x800DE05C: nop
    
            goto L_800DE07C;
    }
    // 0x800DE05C: nop

    // 0x800DE060: jal         0x800297DC
    // 0x800DE064: nop

    func_800297DC(rdram, ctx);
        goto after_11;
    // 0x800DE064: nop

    after_11:
    // 0x800DE068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE06C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE070: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DE074: jal         0x80029824
    // 0x800DE078: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_12;
    // 0x800DE078: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
L_800DE07C:
    // 0x800DE07C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800DE080: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DE084: nop

    // 0x800DE088: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x800DE08C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800DE090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE098: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DE09C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DE0A0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DE0A4: jal         0x80029F58
    // 0x800DE0A8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_13;
    // 0x800DE0A8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x800DE0AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DE0B0: bne         $v0, $at, L_800DE0E8
    if (ctx->r2 != ctx->r1) {
        // 0x800DE0B4: nop
    
            goto L_800DE0E8;
    }
    // 0x800DE0B4: nop

    // 0x800DE0B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DE0BC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DE0C0: nop

    // 0x800DE0C4: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
    // 0x800DE0C8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DE0CC: nop

    // 0x800DE0D0: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800DE0D4: nop

    // 0x800DE0D8: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800DE0DC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DE0E0: nop

    // 0x800DE0E4: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_800DE0E8:
    // 0x800DE0E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE0EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE0F0: jal         0x8001B4AC
    // 0x800DE0F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_14;
    // 0x800DE0F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x800DE0F8: beq         $v0, $zero, L_800DE178
    if (ctx->r2 == 0) {
        // 0x800DE0FC: nop
    
            goto L_800DE178;
    }
    // 0x800DE0FC: nop

    // 0x800DE100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE104: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE108: jal         0x8002A1FC
    // 0x800DE10C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_15;
    // 0x800DE10C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_15:
    // 0x800DE110: beq         $v0, $zero, L_800DE148
    if (ctx->r2 == 0) {
        // 0x800DE114: nop
    
            goto L_800DE148;
    }
    // 0x800DE114: nop

    // 0x800DE118: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DE11C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800DE120: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DE124: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DE128: nop

    // 0x800DE12C: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800DE130: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DE134: nop

    // 0x800DE138: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800DE13C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DE140: b           L_800DE178
    // 0x800DE144: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
        goto L_800DE178;
    // 0x800DE144: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
L_800DE148:
    // 0x800DE148: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DE14C: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800DE150: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800DE154: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DE158: nop

    // 0x800DE15C: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x800DE160: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DE164: nop

    // 0x800DE168: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800DE16C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DE170: nop

    // 0x800DE174: sh          $zero, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = 0;
L_800DE178:
    // 0x800DE178: b           L_800DE1C8
    // 0x800DE17C: nop

        goto L_800DE1C8;
    // 0x800DE17C: nop

L_800DE180:
    // 0x800DE180: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE184: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE188: jal         0x8002A1FC
    // 0x800DE18C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_16;
    // 0x800DE18C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_16:
    // 0x800DE190: beq         $v0, $zero, L_800DE1C8
    if (ctx->r2 == 0) {
        // 0x800DE194: nop
    
            goto L_800DE1C8;
    }
    // 0x800DE194: nop

    // 0x800DE198: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DE19C: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800DE1A0: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DE1A4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DE1A8: nop

    // 0x800DE1AC: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800DE1B0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DE1B4: nop

    // 0x800DE1B8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800DE1BC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DE1C0: nop

    // 0x800DE1C4: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
L_800DE1C8:
    // 0x800DE1C8: b           L_800DE1D0
    // 0x800DE1CC: nop

        goto L_800DE1D0;
    // 0x800DE1CC: nop

L_800DE1D0:
    // 0x800DE1D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800DE1D4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800DE1D8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800DE1DC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800DE1E0: jr          $ra
    // 0x800DE1E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800DE1E4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80073784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073784: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80073788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007378C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80073790: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80073794: nop

    // 0x80073798: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8007379C: nop

    // 0x800737A0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x800737A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800737A8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800737AC: nop

    // 0x800737B0: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800737B4: nop

    // 0x800737B8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x800737BC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800737C0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800737C4: nop

    // 0x800737C8: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800737CC: nop

    // 0x800737D0: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x800737D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800737D8: lh          $t9, 0x77E8($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X77E8);
    // 0x800737DC: nop

    // 0x800737E0: addiu       $t0, $t9, 0x3C0
    ctx->r8 = ADD32(ctx->r25, 0X3C0);
    // 0x800737E4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800737E8: nop

    // 0x800737EC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800737F0: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x800737F4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800737F8: lh          $t1, 0x7900($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7900);
    // 0x800737FC: nop

    // 0x80073800: addiu       $t2, $t1, -0x3C0
    ctx->r10 = ADD32(ctx->r9, -0X3C0);
    // 0x80073804: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x80073808: nop

    // 0x8007380C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80073810: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x80073814: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80073818: lh          $t3, 0x78F0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X78F0);
    // 0x8007381C: nop

    // 0x80073820: addiu       $t4, $t3, 0x3C0
    ctx->r12 = ADD32(ctx->r11, 0X3C0);
    // 0x80073824: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80073828: nop

    // 0x8007382C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80073830: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80073834: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80073838: lh          $t5, 0x7908($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7908);
    // 0x8007383C: nop

    // 0x80073840: addiu       $t6, $t5, -0x3C0
    ctx->r14 = ADD32(ctx->r13, -0X3C0);
    // 0x80073844: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80073848: nop

    // 0x8007384C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80073850: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x80073854: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80073858: lh          $t7, 0x78F8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X78F8);
    // 0x8007385C: nop

    // 0x80073860: addiu       $t8, $t7, 0x3C0
    ctx->r24 = ADD32(ctx->r15, 0X3C0);
    // 0x80073864: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x80073868: nop

    // 0x8007386C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80073870: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x80073874: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80073878: lh          $t9, 0x790C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X790C);
    // 0x8007387C: nop

    // 0x80073880: addiu       $t0, $t9, -0x3C0
    ctx->r8 = ADD32(ctx->r25, -0X3C0);
    // 0x80073884: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80073888: nop

    // 0x8007388C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80073890: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80073894: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80073898: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007389C: nop

    // 0x800738A0: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x800738A4: nop

    // 0x800738A8: bc1f        L_800738D4
    if (!c1cs) {
        // 0x800738AC: nop
    
            goto L_800738D4;
    }
    // 0x800738AC: nop

    // 0x800738B0: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800738B4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800738B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800738BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800738C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800738C4: nop

    // 0x800738C8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800738CC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x800738D0: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
L_800738D4:
    // 0x800738D4: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800738D8: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800738DC: nop

    // 0x800738E0: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x800738E4: nop

    // 0x800738E8: bc1f        L_80073908
    if (!c1cs) {
        // 0x800738EC: nop
    
            goto L_80073908;
    }
    // 0x800738EC: nop

    // 0x800738F0: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800738F4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800738F8: nop

    // 0x800738FC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80073900: b           L_80073948
    // 0x80073904: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
        goto L_80073948;
    // 0x80073904: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_80073908:
    // 0x80073908: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007390C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80073910: nop

    // 0x80073914: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80073918: nop

    // 0x8007391C: bc1f        L_8007393C
    if (!c1cs) {
        // 0x80073920: nop
    
            goto L_8007393C;
    }
    // 0x80073920: nop

    // 0x80073924: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80073928: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007392C: nop

    // 0x80073930: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80073934: b           L_80073948
    // 0x80073938: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
        goto L_80073948;
    // 0x80073938: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_8007393C:
    // 0x8007393C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80073940: nop

    // 0x80073944: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_80073948:
    // 0x80073948: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007394C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80073950: nop

    // 0x80073954: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80073958: nop

    // 0x8007395C: bc1f        L_80073974
    if (!c1cs) {
        // 0x80073960: nop
    
            goto L_80073974;
    }
    // 0x80073960: nop

    // 0x80073964: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073968: nop

    // 0x8007396C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80073970: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_80073974:
    // 0x80073974: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80073978: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007397C: nop

    // 0x80073980: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80073984: nop

    // 0x80073988: bc1f        L_800739A0
    if (!c1cs) {
        // 0x8007398C: nop
    
            goto L_800739A0;
    }
    // 0x8007398C: nop

    // 0x80073990: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80073994: lwc1        $f10, 0x5634($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5634);
    // 0x80073998: b           L_800739E4
    // 0x8007399C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
        goto L_800739E4;
    // 0x8007399C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
L_800739A0:
    // 0x800739A0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800739A4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800739A8: lwc1        $f5, 0x5638($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5638);
    // 0x800739AC: lwc1        $f4, 0x563C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X563C);
    // 0x800739B0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800739B4: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800739B8: lui         $at, 0x408E
    ctx->r1 = S32(0X408E << 16);
    // 0x800739BC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800739C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800739C4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800739C8: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x800739CC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800739D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800739D4: nop

    // 0x800739D8: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800739DC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800739E0: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
L_800739E4:
    // 0x800739E4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800739E8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x800739EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800739F0: lwc1        $f6, 0x51C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51C4);
    // 0x800739F4: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800739F8: nop

    // 0x800739FC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80073A00: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80073A04: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80073A08: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80073A0C: nop

    // 0x80073A10: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80073A14: nop

    // 0x80073A18: bc1f        L_80073A34
    if (!c1cs) {
        // 0x80073A1C: nop
    
            goto L_80073A34;
    }
    // 0x80073A1C: nop

    // 0x80073A20: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x80073A24: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80073A28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073A2C: b           L_80073C50
    // 0x80073A30: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
        goto L_80073C50;
    // 0x80073A30: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
L_80073A34:
    // 0x80073A34: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80073A38: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80073A3C: nop

    // 0x80073A40: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80073A44: nop

    // 0x80073A48: bc1f        L_80073A68
    if (!c1cs) {
        // 0x80073A4C: nop
    
            goto L_80073A68;
    }
    // 0x80073A4C: nop

    // 0x80073A50: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80073A54: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    // 0x80073A58: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80073A5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80073A60: b           L_80073C50
    // 0x80073A64: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
        goto L_80073C50;
    // 0x80073A64: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
L_80073A68:
    // 0x80073A68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80073A6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80073A70: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80073A74: nop

    // 0x80073A78: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80073A7C: nop

    // 0x80073A80: bc1f        L_80073B64
    if (!c1cs) {
        // 0x80073A84: nop
    
            goto L_80073B64;
    }
    // 0x80073A84: nop

    // 0x80073A88: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80073A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073A90: nop

    // 0x80073A94: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x80073A98: nop

    // 0x80073A9C: bc1f        L_80073B64
    if (!c1cs) {
        // 0x80073AA0: nop
    
            goto L_80073B64;
    }
    // 0x80073AA0: nop

    // 0x80073AA4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80073AA8: lh          $t3, -0x1F64($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F64);
    // 0x80073AAC: nop

    // 0x80073AB0: bne         $t3, $zero, L_80073B44
    if (ctx->r11 != 0) {
        // 0x80073AB4: nop
    
            goto L_80073B44;
    }
    // 0x80073AB4: nop

    // 0x80073AB8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80073ABC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80073AC0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80073AC4: lwc1        $f6, 0x51CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X51CC);
    // 0x80073AC8: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x80073ACC: nop

    // 0x80073AD0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80073AD4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x80073AD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80073ADC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80073AE0: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80073AE4: nop

    // 0x80073AE8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80073AEC: nop

    // 0x80073AF0: bc1f        L_80073B28
    if (!c1cs) {
        // 0x80073AF4: nop
    
            goto L_80073B28;
    }
    // 0x80073AF4: nop

    // 0x80073AF8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80073AFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073B00: nop

    // 0x80073B04: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80073B08: nop

    // 0x80073B0C: bc1f        L_80073B28
    if (!c1cs) {
        // 0x80073B10: nop
    
            goto L_80073B28;
    }
    // 0x80073B10: nop

    // 0x80073B14: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80073B18: sb          $t5, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r13;
    // 0x80073B1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80073B20: b           L_80073B3C
    // 0x80073B24: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
        goto L_80073B3C;
    // 0x80073B24: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
L_80073B28:
    // 0x80073B28: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80073B2C: sb          $t6, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r14;
    // 0x80073B30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80073B34: nop

    // 0x80073B38: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
L_80073B3C:
    // 0x80073B3C: b           L_80073B5C
    // 0x80073B40: nop

        goto L_80073B5C;
    // 0x80073B40: nop

L_80073B44:
    // 0x80073B44: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80073B48: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    // 0x80073B4C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80073B50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80073B54: nop

    // 0x80073B58: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
L_80073B5C:
    // 0x80073B5C: b           L_80073C50
    // 0x80073B60: nop

        goto L_80073C50;
    // 0x80073B60: nop

L_80073B64:
    // 0x80073B64: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80073B68: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80073B6C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80073B70: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80073B74: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80073B78: nop

    // 0x80073B7C: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80073B80: nop

    // 0x80073B84: bc1t        L_80073BE0
    if (c1cs) {
        // 0x80073B88: nop
    
            goto L_80073BE0;
    }
    // 0x80073B88: nop

    // 0x80073B8C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80073B90: lwc1        $f4, 0x5640($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5640);
    // 0x80073B94: nop

    // 0x80073B98: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x80073B9C: nop

    // 0x80073BA0: bc1t        L_80073BE0
    if (c1cs) {
        // 0x80073BA4: nop
    
            goto L_80073BE0;
    }
    // 0x80073BA4: nop

    // 0x80073BA8: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x80073BAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80073BB0: nop

    // 0x80073BB4: c.le.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl <= ctx->f16.fl;
    // 0x80073BB8: nop

    // 0x80073BBC: bc1f        L_80073BF8
    if (!c1cs) {
        // 0x80073BC0: nop
    
            goto L_80073BF8;
    }
    // 0x80073BC0: nop

    // 0x80073BC4: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80073BC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80073BCC: nop

    // 0x80073BD0: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x80073BD4: nop

    // 0x80073BD8: bc1f        L_80073BF8
    if (!c1cs) {
        // 0x80073BDC: nop
    
            goto L_80073BF8;
    }
    // 0x80073BDC: nop

L_80073BE0:
    // 0x80073BE0: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80073BE4: sb          $t9, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r25;
    // 0x80073BE8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80073BEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80073BF0: b           L_80073C50
    // 0x80073BF4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
        goto L_80073C50;
    // 0x80073BF4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
L_80073BF8:
    // 0x80073BF8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80073BFC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80073C00: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80073C04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073C08: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80073C0C: nop

    // 0x80073C10: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80073C14: nop

    // 0x80073C18: bc1f        L_80073C38
    if (!c1cs) {
        // 0x80073C1C: nop
    
            goto L_80073C38;
    }
    // 0x80073C1C: nop

    // 0x80073C20: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80073C24: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x80073C28: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80073C2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80073C30: b           L_80073C50
    // 0x80073C34: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
        goto L_80073C50;
    // 0x80073C34: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
L_80073C38:
    // 0x80073C38: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80073C3C: sb          $t2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r10;
    // 0x80073C40: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x80073C44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80073C48: nop

    // 0x80073C4C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
L_80073C50:
    // 0x80073C50: lb          $t3, 0x1F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X1F);
    // 0x80073C54: nop

    // 0x80073C58: bne         $t3, $zero, L_80073D14
    if (ctx->r11 != 0) {
        // 0x80073C5C: nop
    
            goto L_80073D14;
    }
    // 0x80073C5C: nop

    // 0x80073C60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073C64: lwc1        $f8, 0x75E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073C68: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073C6C: nop

    // 0x80073C70: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80073C74: nop

    // 0x80073C78: bc1f        L_80073C9C
    if (!c1cs) {
        // 0x80073C7C: nop
    
            goto L_80073C9C;
    }
    // 0x80073C7C: nop

    // 0x80073C80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073C84: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073C88: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073C8C: nop

    // 0x80073C90: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80073C94: b           L_80073CE4
    // 0x80073C98: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
        goto L_80073CE4;
    // 0x80073C98: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
L_80073C9C:
    // 0x80073C9C: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073CA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073CA4: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073CA8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80073CAC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80073CB0: nop

    // 0x80073CB4: bc1f        L_80073CD8
    if (!c1cs) {
        // 0x80073CB8: nop
    
            goto L_80073CD8;
    }
    // 0x80073CB8: nop

    // 0x80073CBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073CC0: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073CC4: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073CC8: nop

    // 0x80073CCC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80073CD0: b           L_80073CE4
    // 0x80073CD4: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
        goto L_80073CE4;
    // 0x80073CD4: swc1        $f6, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f6.u32l;
L_80073CD8:
    // 0x80073CD8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80073CDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073CE0: swc1        $f8, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f8.u32l;
L_80073CE4:
    // 0x80073CE4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073CE8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073CEC: neg.s       $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = -ctx->f16.fl;
    // 0x80073CF0: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80073CF4: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80073CF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073CFC: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073D00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80073D04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073D08: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80073D0C: b           L_80073F30
    // 0x80073D10: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
        goto L_80073F30;
    // 0x80073D10: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
L_80073D14:
    // 0x80073D14: lb          $t4, 0x1F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X1F);
    // 0x80073D18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80073D1C: bne         $t4, $at, L_80073DD4
    if (ctx->r12 != ctx->r1) {
        // 0x80073D20: nop
    
            goto L_80073DD4;
    }
    // 0x80073D20: nop

    // 0x80073D24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073D28: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073D2C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073D30: nop

    // 0x80073D34: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80073D38: nop

    // 0x80073D3C: bc1f        L_80073D60
    if (!c1cs) {
        // 0x80073D40: nop
    
            goto L_80073D60;
    }
    // 0x80073D40: nop

    // 0x80073D44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073D48: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073D4C: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073D50: nop

    // 0x80073D54: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80073D58: b           L_80073DA8
    // 0x80073D5C: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
        goto L_80073DA8;
    // 0x80073D5C: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
L_80073D60:
    // 0x80073D60: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073D64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073D68: lwc1        $f10, 0x75E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073D6C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80073D70: c.le.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl <= ctx->f4.fl;
    // 0x80073D74: nop

    // 0x80073D78: bc1f        L_80073D9C
    if (!c1cs) {
        // 0x80073D7C: nop
    
            goto L_80073D9C;
    }
    // 0x80073D7C: nop

    // 0x80073D80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073D84: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073D88: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073D8C: nop

    // 0x80073D90: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80073D94: b           L_80073DA8
    // 0x80073D98: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
        goto L_80073DA8;
    // 0x80073D98: swc1        $f16, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f16.u32l;
L_80073D9C:
    // 0x80073D9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80073DA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073DA4: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
L_80073DA8:
    // 0x80073DA8: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80073DAC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80073DB0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80073DB4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80073DB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073DBC: lwc1        $f18, 0x75E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073DC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073DC4: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80073DC8: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80073DCC: b           L_80073F30
    // 0x80073DD0: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
        goto L_80073F30;
    // 0x80073DD0: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
L_80073DD4:
    // 0x80073DD4: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x80073DD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80073DDC: bne         $t5, $at, L_80073E84
    if (ctx->r13 != ctx->r1) {
        // 0x80073DE0: nop
    
            goto L_80073E84;
    }
    // 0x80073DE0: nop

    // 0x80073DE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073DE8: lwc1        $f4, 0x75E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073DEC: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073DF0: nop

    // 0x80073DF4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80073DF8: nop

    // 0x80073DFC: bc1f        L_80073E20
    if (!c1cs) {
        // 0x80073E00: nop
    
            goto L_80073E20;
    }
    // 0x80073E00: nop

    // 0x80073E04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E08: lwc1        $f8, 0x75E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073E0C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073E10: nop

    // 0x80073E14: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80073E18: b           L_80073E68
    // 0x80073E1C: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
        goto L_80073E68;
    // 0x80073E1C: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
L_80073E20:
    // 0x80073E20: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073E24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E28: lwc1        $f10, 0x75E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073E2C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80073E30: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x80073E34: nop

    // 0x80073E38: bc1f        L_80073E5C
    if (!c1cs) {
        // 0x80073E3C: nop
    
            goto L_80073E5C;
    }
    // 0x80073E3C: nop

    // 0x80073E40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E44: lwc1        $f8, 0x75E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073E48: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073E4C: nop

    // 0x80073E50: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80073E54: b           L_80073E68
    // 0x80073E58: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
        goto L_80073E68;
    // 0x80073E58: swc1        $f18, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f18.u32l;
L_80073E5C:
    // 0x80073E5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80073E60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E64: swc1        $f4, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f4.u32l;
L_80073E68:
    // 0x80073E68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E6C: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073E70: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80073E74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E78: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80073E7C: b           L_80073F30
    // 0x80073E80: swc1        $f8, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f8.u32l;
        goto L_80073F30;
    // 0x80073E80: swc1        $f8, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f8.u32l;
L_80073E84:
    // 0x80073E84: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x80073E88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80073E8C: bne         $t6, $at, L_80073F30
    if (ctx->r14 != ctx->r1) {
        // 0x80073E90: nop
    
            goto L_80073F30;
    }
    // 0x80073E90: nop

    // 0x80073E94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073E98: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073E9C: lwc1        $f18, 0x18($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80073EA0: nop

    // 0x80073EA4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80073EA8: swc1        $f4, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f4.u32l;
    // 0x80073EAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073EB0: lwc1        $f10, 0x75E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073EB4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80073EB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80073EBC: nop

    // 0x80073EC0: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x80073EC4: nop

    // 0x80073EC8: bc1f        L_80073EE4
    if (!c1cs) {
        // 0x80073ECC: nop
    
            goto L_80073EE4;
    }
    // 0x80073ECC: nop

    // 0x80073ED0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80073ED4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80073ED8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073EDC: b           L_80073F18
    // 0x80073EE0: swc1        $f8, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f8.u32l;
        goto L_80073F18;
    // 0x80073EE0: swc1        $f8, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f8.u32l;
L_80073EE4:
    // 0x80073EE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073EE8: lwc1        $f16, 0x75E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073EEC: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x80073EF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80073EF4: nop

    // 0x80073EF8: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x80073EFC: nop

    // 0x80073F00: bc1f        L_80073F18
    if (!c1cs) {
        // 0x80073F04: nop
    
            goto L_80073F18;
    }
    // 0x80073F04: nop

    // 0x80073F08: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x80073F0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073F10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073F14: swc1        $f4, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f4.u32l;
L_80073F18:
    // 0x80073F18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073F1C: lwc1        $f6, 0x75E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75E0);
    // 0x80073F20: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80073F24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073F28: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80073F2C: swc1        $f8, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f8.u32l;
L_80073F30:
    // 0x80073F30: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80073F34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073F38: swc1        $f16, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f16.u32l;
    // 0x80073F3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80073F40: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80073F44: nop

    // 0x80073F48: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x80073F4C: nop

    // 0x80073F50: beq         $t8, $zero, L_800740B8
    if (ctx->r24 == 0) {
        // 0x80073F54: nop
    
            goto L_800740B8;
    }
    // 0x80073F54: nop

    // 0x80073F58: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80073F5C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073F60: nop

    // 0x80073F64: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80073F68: nop

    // 0x80073F6C: bc1f        L_80073F8C
    if (!c1cs) {
        // 0x80073F70: nop
    
            goto L_80073F8C;
    }
    // 0x80073F70: nop

    // 0x80073F74: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80073F78: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073F7C: nop

    // 0x80073F80: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80073F84: b           L_80073F98
    // 0x80073F88: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
        goto L_80073F98;
    // 0x80073F88: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_80073F8C:
    // 0x80073F8C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80073F90: nop

    // 0x80073F94: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_80073F98:
    // 0x80073F98: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80073F9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80073FA0: nop

    // 0x80073FA4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80073FA8: nop

    // 0x80073FAC: bc1f        L_80073FC4
    if (!c1cs) {
        // 0x80073FB0: nop
    
            goto L_80073FC4;
    }
    // 0x80073FB0: nop

    // 0x80073FB4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80073FB8: nop

    // 0x80073FBC: neg.s       $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = -ctx->f10.fl;
    // 0x80073FC0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_80073FC4:
    // 0x80073FC4: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80073FC8: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80073FCC: nop

    // 0x80073FD0: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80073FD4: nop

    // 0x80073FD8: bc1f        L_80074078
    if (!c1cs) {
        // 0x80073FDC: nop
    
            goto L_80074078;
    }
    // 0x80073FDC: nop

    // 0x80073FE0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80073FE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80073FE8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80073FEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80073FF0: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80073FF4: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80073FF8: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80073FFC: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80074000: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80074004: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074008: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8007400C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80074010: swc1        $f6, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f6.u32l;
    // 0x80074014: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80074018: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007401C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80074020: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80074024: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80074028: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007402C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074030: lwc1        $f6, 0x7A58($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80074034: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074038: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8007403C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80074040: swc1        $f8, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f8.u32l;
    // 0x80074044: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80074048: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007404C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80074050: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x80074054: mul.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80074058: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007405C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074060: lwc1        $f8, 0x7A5C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80074064: div.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80074068: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007406C: sub.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80074070: b           L_800740B0
    // 0x80074074: swc1        $f16, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f16.u32l;
        goto L_800740B0;
    // 0x80074074: swc1        $f16, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f16.u32l;
L_80074078:
    // 0x80074078: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8007407C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074080: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80074084: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074088: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8007408C: swc1        $f6, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f6.u32l;
    // 0x80074090: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074094: lwc1        $f8, 0x7A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80074098: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007409C: swc1        $f8, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f8.u32l;
    // 0x800740A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800740A4: lwc1        $f4, 0x7A5C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x800740A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800740AC: swc1        $f4, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f4.u32l;
L_800740B0:
    // 0x800740B0: b           L_800740F8
    // 0x800740B4: nop

        goto L_800740F8;
    // 0x800740B4: nop

L_800740B8:
    // 0x800740B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800740BC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800740C0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x800740C4: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x800740C8: nop

    // 0x800740CC: beq         $t0, $at, L_800740E0
    if (ctx->r8 == ctx->r1) {
        // 0x800740D0: nop
    
            goto L_800740E0;
    }
    // 0x800740D0: nop

    // 0x800740D4: addiu       $at, $zero, 0x26D
    ctx->r1 = ADD32(0, 0X26D);
    // 0x800740D8: bne         $t0, $at, L_800740F0
    if (ctx->r8 != ctx->r1) {
        // 0x800740DC: nop
    
            goto L_800740F0;
    }
    // 0x800740DC: nop

L_800740E0:
    // 0x800740E0: jal         0x80071CF4
    // 0x800740E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80071CF4(rdram, ctx);
        goto after_0;
    // 0x800740E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800740E8: b           L_800740F8
    // 0x800740EC: nop

        goto L_800740F8;
    // 0x800740EC: nop

L_800740F0:
    // 0x800740F0: jal         0x80071CF4
    // 0x800740F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80071CF4(rdram, ctx);
        goto after_1;
    // 0x800740F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
L_800740F8:
    // 0x800740F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800740FC: lwc1        $f12, -0x1EBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80074100: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074104: lwc1        $f14, 0x75B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x80074108: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x8007410C: jal         0x80071A88
    // 0x80074110: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    func_80071A88(rdram, ctx);
        goto after_2;
    // 0x80074110: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    after_2:
    // 0x80074114: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074118: swc1        $f0, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f0.u32l;
    // 0x8007411C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074120: lwc1        $f16, 0x75A8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x80074124: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074128: swc1        $f16, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f16.u32l;
    // 0x8007412C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074130: lwc1        $f18, 0x75B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80074134: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074138: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x8007413C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074140: lwc1        $f10, 0x75D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80074144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074148: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8007414C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074150: lwc1        $f6, 0x75C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x80074154: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074158: swc1        $f6, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f6.u32l;
    // 0x8007415C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074160: lwc1        $f8, 0x75C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x80074164: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074168: swc1        $f8, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f8.u32l;
    // 0x8007416C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074170: lwc1        $f4, 0x75D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75D0);
    // 0x80074174: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074178: swc1        $f4, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f4.u32l;
    // 0x8007417C: b           L_80074184
    // 0x80074180: nop

        goto L_80074184;
    // 0x80074180: nop

L_80074184:
    // 0x80074184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074188: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8007418C: jr          $ra
    // 0x80074190: nop

    return;
    // 0x80074190: nop

;}
RECOMP_FUNC void func_800F57C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F57C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F57C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F57CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F57D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F57D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F57D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F57DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F57E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F57E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F57E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F57EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F57F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F57F4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800F57F8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F57FC: nop

    // 0x800F5800: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F5804: nop

    // 0x800F5808: bne         $t1, $zero, L_800F58EC
    if (ctx->r9 != 0) {
        // 0x800F580C: nop
    
            goto L_800F58EC;
    }
    // 0x800F580C: nop

    // 0x800F5810: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F5814: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F5818: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F581C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F5820: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800F5824: sh          $t4, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r12;
    // 0x800F5828: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F582C: nop

    // 0x800F5830: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F5834: nop

    // 0x800F5838: sh          $t7, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r15;
    // 0x800F583C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5844: jal         0x8001BB34
    // 0x800F5848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800F5848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800F584C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F5850: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
    // 0x800F5854: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800F5858: nop

    // 0x800F585C: blez        $t9, L_800F58EC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x800F5860: nop
    
            goto L_800F58EC;
    }
    // 0x800F5860: nop

L_800F5864:
    // 0x800F5864: lh          $t0, 0x2E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2E);
    // 0x800F5868: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F586C: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x800F5870: subu        $t2, $t2, $t0
    ctx->r10 = SUB32(ctx->r10, ctx->r8);
    // 0x800F5874: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800F5878: addiu       $t3, $t2, 0x78
    ctx->r11 = ADD32(ctx->r10, 0X78);
    // 0x800F587C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800F5880: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800F5884: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F5888: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800F588C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F5890: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800F5894: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800F5898: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800F589C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F58A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F58A4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800F58A8: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800F58AC: addiu       $a2, $a2, 0x3748
    ctx->r6 = ADD32(ctx->r6, 0X3748);
    // 0x800F58B0: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800F58B4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x800F58B8: jal         0x80027C00
    // 0x800F58BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027C00(rdram, ctx);
        goto after_1;
    // 0x800F58BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x800F58C0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800F58C4: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800F58C8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F58CC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800F58D0: sh          $t5, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r13;
    // 0x800F58D4: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800F58D8: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x800F58DC: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800F58E0: slt         $at, $t6, $t9
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800F58E4: bne         $at, $zero, L_800F5864
    if (ctx->r1 != 0) {
        // 0x800F58E8: nop
    
            goto L_800F5864;
    }
    // 0x800F58E8: nop

L_800F58EC:
    // 0x800F58EC: b           L_800F58F4
    // 0x800F58F0: nop

        goto L_800F58F4;
    // 0x800F58F0: nop

L_800F58F4:
    // 0x800F58F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F58F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800F58FC: jr          $ra
    // 0x800F5900: nop

    return;
    // 0x800F5900: nop

;}
RECOMP_FUNC void func_80060BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80060BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060BAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80060BB0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80060BB4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80060BB8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80060BBC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80060BC0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80060BC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060BC8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80060BCC: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80060BD0: nop

    // 0x80060BD4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80060BD8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80060BDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060BE0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80060BE4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060BE8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060BEC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060BF0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80060BF4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80060BF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80060BFC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
    // 0x80060C00: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80060C04: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80060C08: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x80060C0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80060C10: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80060C14: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80060C18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80060C1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80060C20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060C24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80060C28: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80060C2C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80060C30: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80060C34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060C38: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80060C3C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80060C40: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80060C44: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80060C48: sll         $t1, $t2, 3
    ctx->r9 = S32(ctx->r10 << 3);
    // 0x80060C4C: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x80060C50: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80060C54: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80060C58: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80060C5C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80060C60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80060C64: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x80060C68: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x80060C6C: lwc1        $f6, 0xC($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC);
    // 0x80060C70: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80060C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060C78: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80060C7C: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80060C80: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80060C84: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80060C88: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x80060C8C: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x80060C90: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80060C94: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80060C98: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80060C9C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80060CA0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060CA4: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x80060CA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80060CAC: lwc1        $f8, 0x10($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X10);
    // 0x80060CB0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80060CB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060CB8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80060CBC: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80060CC0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80060CC4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80060CC8: sll         $t5, $t3, 3
    ctx->r13 = S32(ctx->r11 << 3);
    // 0x80060CCC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80060CD0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80060CD4: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x80060CD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060CDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060CE0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80060CE4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060CE8: addu        $t4, $t1, $t5
    ctx->r12 = ADD32(ctx->r9, ctx->r13);
    // 0x80060CEC: lwc1        $f10, 0x14($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X14);
    // 0x80060CF0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80060CF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060CF8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80060CFC: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x80060D00: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80060D04: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80060D08: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x80060D0C: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80060D10: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80060D14: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80060D18: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80060D1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80060D20: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80060D24: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80060D28: addu        $t0, $t8, $t2
    ctx->r8 = ADD32(ctx->r24, ctx->r10);
    // 0x80060D2C: lwc1        $f16, 0x18($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80060D30: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80060D34: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060D38: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80060D3C: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x80060D40: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80060D44: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80060D48: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80060D4C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80060D50: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80060D54: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80060D58: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80060D5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060D60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80060D64: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x80060D68: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80060D6C: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80060D70: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80060D74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060D78: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80060D7C: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x80060D80: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80060D84: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80060D88: sll         $t3, $t0, 3
    ctx->r11 = S32(ctx->r8 << 3);
    // 0x80060D8C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80060D90: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80060D94: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x80060D98: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060D9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80060DA0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060DA4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060DA8: addu        $t1, $t2, $t3
    ctx->r9 = ADD32(ctx->r10, ctx->r11);
    // 0x80060DAC: lwc1        $f4, 0x20($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X20);
    // 0x80060DB0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80060DB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060DB8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80060DBC: swc1        $f4, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f4.u32l;
    // 0x80060DC0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80060DC4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80060DC8: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x80060DCC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80060DD0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80060DD4: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80060DD8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060DDC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060DE0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80060DE4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060DE8: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x80060DEC: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80060DF0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80060DF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060DF8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80060DFC: sh          $t0, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r8;
    // 0x80060E00: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80060E04: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80060E08: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80060E0C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060E10: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80060E14: addu        $t7, $t1, $t5
    ctx->r15 = ADD32(ctx->r9, ctx->r13);
    // 0x80060E18: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80060E1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80060E20: jal         0x80060808
    // 0x80060E24: nop

    func_80060808(rdram, ctx);
        goto after_0;
    // 0x80060E24: nop

    after_0:
    // 0x80060E28: b           L_80060E30
    // 0x80060E2C: nop

        goto L_80060E30;
    // 0x80060E2C: nop

L_80060E30:
    // 0x80060E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80060E38: jr          $ra
    // 0x80060E3C: nop

    return;
    // 0x80060E3C: nop

;}
RECOMP_FUNC void func_800E445C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E445C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E4460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4464: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E4468: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E446C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E4470: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E4474: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E4478: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E447C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E4480: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E4484: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E4488: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E448C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E4490: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E4494: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E4498: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E449C: addiu       $a1, $a1, 0x43C0
    ctx->r5 = ADD32(ctx->r5, 0X43C0);
    // 0x800E44A0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E44A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E44A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E44AC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E44B0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E44B4: jal         0x80027464
    // 0x800E44B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E44B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E44BC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E44C0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E44C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E44C8: beq         $t1, $at, L_800E44F4
    if (ctx->r9 == ctx->r1) {
        // 0x800E44CC: nop
    
            goto L_800E44F4;
    }
    // 0x800E44CC: nop

    // 0x800E44D0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E44D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E44D8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800E44DC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E44E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800E44E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800E44E8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800E44EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800E44F0: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
L_800E44F4:
    // 0x800E44F4: b           L_800E44FC
    // 0x800E44F8: nop

        goto L_800E44FC;
    // 0x800E44F8: nop

L_800E44FC:
    // 0x800E44FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E4500: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E4504: jr          $ra
    // 0x800E4508: nop

    return;
    // 0x800E4508: nop

;}
RECOMP_FUNC void func_8005FE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FE88: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8005FE8C: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x8005FE90: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8005FE94: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8005FE98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8005FE9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8005FEA0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005FEA4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8005FEA8: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x8005FEAC: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x8005FEB0: addiu       $t9, $t9, 0x3B3C
    ctx->r25 = ADD32(ctx->r25, 0X3B3C);
    // 0x8005FEB4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8005FEB8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8005FEBC: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8005FEC0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8005FEC4: sb          $zero, 0x2($sp)
    MEM_B(0X2, ctx->r29) = 0;
    // 0x8005FEC8: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8005FECC: nop

    // 0x8005FED0: blez        $t2, L_800600A0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8005FED4: nop
    
            goto L_800600A0;
    }
    // 0x8005FED4: nop

L_8005FED8:
    // 0x8005FED8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8005FEDC: lb          $t5, 0x2($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2);
    // 0x8005FEE0: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x8005FEE4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8005FEE8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8005FEEC: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8005FEF0: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8005FEF4: nop

    // 0x8005FEF8: beq         $t8, $zero, L_80060018
    if (ctx->r24 == 0) {
        // 0x8005FEFC: nop
    
            goto L_80060018;
    }
    // 0x8005FEFC: nop

    // 0x8005FF00: sb          $zero, 0x3($sp)
    MEM_B(0X3, ctx->r29) = 0;
    // 0x8005FF04: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8005FF08: lb          $t9, 0x2($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2);
    // 0x8005FF0C: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8005FF10: nop

    // 0x8005FF14: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8005FF18: beq         $at, $zero, L_8005FFF8
    if (ctx->r1 == 0) {
        // 0x8005FF1C: nop
    
            goto L_8005FFF8;
    }
    // 0x8005FF1C: nop

L_8005FF20:
    // 0x8005FF20: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x8005FF24: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x8005FF28: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8005FF2C: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x8005FF30: lb          $t4, 0x2($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2);
    // 0x8005FF34: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x8005FF38: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x8005FF3C: addu        $t5, $t2, $t3
    ctx->r13 = ADD32(ctx->r10, ctx->r11);
    // 0x8005FF40: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005FF44: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x8005FF48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005FF4C: lbu         $t7, 0x4808($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X4808);
    // 0x8005FF50: nop

    // 0x8005FF54: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8005FF58: sb          $t8, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r24;
    // 0x8005FF5C: lbu         $t0, 0x1($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1);
    // 0x8005FF60: nop

    // 0x8005FF64: beq         $t0, $zero, L_8005FF80
    if (ctx->r8 == 0) {
        // 0x8005FF68: nop
    
            goto L_8005FF80;
    }
    // 0x8005FF68: nop

    // 0x8005FF6C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8005FF70: beq         $t0, $at, L_8005FF80
    if (ctx->r8 == ctx->r1) {
        // 0x8005FF74: nop
    
            goto L_8005FF80;
    }
    // 0x8005FF74: nop

    // 0x8005FF78: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8005FF7C: sb          $t9, 0x3($sp)
    MEM_B(0X3, ctx->r29) = ctx->r25;
L_8005FF80:
    // 0x8005FF80: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8005FF84: lb          $t1, 0x2($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2);
    // 0x8005FF88: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x8005FF8C: nop

    // 0x8005FF90: addiu       $t5, $t3, -0x1
    ctx->r13 = ADD32(ctx->r11, -0X1);
    // 0x8005FF94: slt         $at, $t5, $t1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8005FF98: bne         $at, $zero, L_8005FFD0
    if (ctx->r1 != 0) {
        // 0x8005FF9C: nop
    
            goto L_8005FFD0;
    }
    // 0x8005FF9C: nop

    // 0x8005FFA0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8005FFA4: lb          $t7, 0x2($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2);
    // 0x8005FFA8: lw          $t6, 0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X4);
    // 0x8005FFAC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8005FFB0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8005FFB4: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x8005FFB8: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x8005FFBC: nop

    // 0x8005FFC0: bne         $t9, $zero, L_8005FFD0
    if (ctx->r25 != 0) {
        // 0x8005FFC4: nop
    
            goto L_8005FFD0;
    }
    // 0x8005FFC4: nop

    // 0x8005FFC8: b           L_8005FFF8
    // 0x8005FFCC: nop

        goto L_8005FFF8;
    // 0x8005FFCC: nop

L_8005FFD0:
    // 0x8005FFD0: lb          $t2, 0x2($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2);
    // 0x8005FFD4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8005FFD8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8005FFDC: sb          $t3, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r11;
    // 0x8005FFE0: lbu         $t7, 0x0($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X0);
    // 0x8005FFE4: sll         $t1, $t3, 24
    ctx->r9 = S32(ctx->r11 << 24);
    // 0x8005FFE8: sra         $t5, $t1, 24
    ctx->r13 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8005FFEC: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8005FFF0: bne         $at, $zero, L_8005FF20
    if (ctx->r1 != 0) {
        // 0x8005FFF4: nop
    
            goto L_8005FF20;
    }
    // 0x8005FFF4: nop

L_8005FFF8:
    // 0x8005FFF8: lb          $t6, 0x3($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3);
    // 0x8005FFFC: nop

    // 0x80060000: bne         $t6, $zero, L_80060010
    if (ctx->r14 != 0) {
        // 0x80060004: nop
    
            goto L_80060010;
    }
    // 0x80060004: nop

    // 0x80060008: b           L_800600B0
    // 0x8006000C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800600B0;
    // 0x8006000C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80060010:
    // 0x80060010: b           L_80060078
    // 0x80060014: nop

        goto L_80060078;
    // 0x80060014: nop

L_80060018:
    // 0x80060018: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x8006001C: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80060020: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060024: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x80060028: lb          $t2, 0x2($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2);
    // 0x8006002C: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x80060030: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80060034: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80060038: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8006003C: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80060040: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x80060044: lbu         $t1, 0x4808($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X4808);
    // 0x80060048: nop

    // 0x8006004C: andi        $t4, $t1, 0xF
    ctx->r12 = ctx->r9 & 0XF;
    // 0x80060050: sb          $t4, 0x1($sp)
    MEM_B(0X1, ctx->r29) = ctx->r12;
    // 0x80060054: lbu         $t5, 0x1($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1);
    // 0x80060058: nop

    // 0x8006005C: beq         $t5, $zero, L_80060070
    if (ctx->r13 == 0) {
        // 0x80060060: nop
    
            goto L_80060070;
    }
    // 0x80060060: nop

    // 0x80060064: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80060068: bne         $t5, $at, L_80060078
    if (ctx->r13 != ctx->r1) {
        // 0x8006006C: nop
    
            goto L_80060078;
    }
    // 0x8006006C: nop

L_80060070:
    // 0x80060070: b           L_800600B0
    // 0x80060074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800600B0;
    // 0x80060074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80060078:
    // 0x80060078: lb          $t7, 0x2($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X2);
    // 0x8006007C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80060080: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80060084: sb          $t6, 0x2($sp)
    MEM_B(0X2, ctx->r29) = ctx->r14;
    // 0x80060088: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x8006008C: sll         $t8, $t6, 24
    ctx->r24 = S32(ctx->r14 << 24);
    // 0x80060090: sra         $t0, $t8, 24
    ctx->r8 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80060094: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80060098: bne         $at, $zero, L_8005FED8
    if (ctx->r1 != 0) {
        // 0x8006009C: nop
    
            goto L_8005FED8;
    }
    // 0x8006009C: nop

L_800600A0:
    // 0x800600A0: b           L_800600B0
    // 0x800600A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800600B0;
    // 0x800600A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800600A8: b           L_800600B0
    // 0x800600AC: nop

        goto L_800600B0;
    // 0x800600AC: nop

L_800600B0:
    // 0x800600B0: jr          $ra
    // 0x800600B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800600B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F8418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F8418: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F841C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F8420: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F8424: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F8428: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F842C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8430: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F8434: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8438: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F843C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F8440: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F8444: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F8448: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F844C: nop

    // 0x800F8450: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F8454: nop

    // 0x800F8458: bne         $t1, $zero, L_800F8478
    if (ctx->r9 != 0) {
        // 0x800F845C: nop
    
            goto L_800F8478;
    }
    // 0x800F845C: nop

    // 0x800F8460: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F8464: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F8468: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F846C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800F8470: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800F8474: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
L_800F8478:
    // 0x800F8478: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F847C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8480: lh          $t7, 0xE8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE8);
    // 0x800F8484: nop

    // 0x800F8488: bne         $t7, $at, L_800F84E8
    if (ctx->r15 != ctx->r1) {
        // 0x800F848C: nop
    
            goto L_800F84E8;
    }
    // 0x800F848C: nop

    // 0x800F8490: lh          $t8, 0xEA($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XEA);
    // 0x800F8494: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8498: bne         $t8, $at, L_800F84E8
    if (ctx->r24 != ctx->r1) {
        // 0x800F849C: nop
    
            goto L_800F84E8;
    }
    // 0x800F849C: nop

    // 0x800F84A0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800F84A4: nop

    // 0x800F84A8: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800F84AC: nop

    // 0x800F84B0: bne         $t0, $zero, L_800F84D0
    if (ctx->r8 != 0) {
        // 0x800F84B4: nop
    
            goto L_800F84D0;
    }
    // 0x800F84B4: nop

    // 0x800F84B8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800F84BC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800F84C0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800F84C4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F84C8: b           L_800F84E8
    // 0x800F84CC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_800F84E8;
    // 0x800F84CC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800F84D0:
    // 0x800F84D0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F84D4: nop

    // 0x800F84D8: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800F84DC: nop

    // 0x800F84E0: addiu       $t7, $t5, -0x1
    ctx->r15 = ADD32(ctx->r13, -0X1);
    // 0x800F84E4: sh          $t7, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r15;
L_800F84E8:
    // 0x800F84E8: b           L_800F84F0
    // 0x800F84EC: nop

        goto L_800F84F0;
    // 0x800F84EC: nop

L_800F84F0:
    // 0x800F84F0: jr          $ra
    // 0x800F84F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F84F4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800699B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800699B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800699B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800699B8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800699BC: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800699C0: jal         0x800254E8
    // 0x800699C4: nop

    func_800254E8(rdram, ctx);
        goto after_0;
    // 0x800699C4: nop

    after_0:
    // 0x800699C8: beq         $v0, $zero, L_80069A34
    if (ctx->r2 == 0) {
        // 0x800699CC: nop
    
            goto L_80069A34;
    }
    // 0x800699CC: nop

    // 0x800699D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x800699D4: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_800699D8:
    // 0x800699D8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x800699DC: jal         0x800697F0
    // 0x800699E0: nop

    func_800697F0(rdram, ctx);
        goto after_1;
    // 0x800699E0: nop

    after_1:
    // 0x800699E4: bne         $v0, $zero, L_800699FC
    if (ctx->r2 != 0) {
        // 0x800699E8: nop
    
            goto L_800699FC;
    }
    // 0x800699E8: nop

    // 0x800699EC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800699F0: nop

    // 0x800699F4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800699F8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_800699FC:
    // 0x800699FC: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80069A00: nop

    // 0x80069A04: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80069A08: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80069A0C: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x80069A10: bne         $at, $zero, L_800699D8
    if (ctx->r1 != 0) {
        // 0x80069A14: sb          $t9, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r25;
            goto L_800699D8;
    }
    // 0x80069A14: sb          $t9, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r25;
    // 0x80069A18: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80069A1C: nop

    // 0x80069A20: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x80069A24: bne         $at, $zero, L_80069A34
    if (ctx->r1 != 0) {
        // 0x80069A28: nop
    
            goto L_80069A34;
    }
    // 0x80069A28: nop

    // 0x80069A2C: b           L_80069A44
    // 0x80069A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80069A44;
    // 0x80069A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069A34:
    // 0x80069A34: b           L_80069A44
    // 0x80069A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80069A44;
    // 0x80069A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80069A3C: b           L_80069A44
    // 0x80069A40: nop

        goto L_80069A44;
    // 0x80069A40: nop

L_80069A44:
    // 0x80069A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069A48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80069A4C: jr          $ra
    // 0x80069A50: nop

    return;
    // 0x80069A50: nop

;}
RECOMP_FUNC void func_800BD4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD4B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BD4B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BD4B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800BD4BC: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x800BD4C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BD4C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BD4C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD4CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD4D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD4D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD4D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD4DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD4E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD4E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BD4E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BD4EC: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x800BD4F0: sb          $t0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r8;
L_800BD4F4:
    // 0x800BD4F4: lb          $a0, 0x22($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X22);
    // 0x800BD4F8: jal         0x800BD558
    // 0x800BD4FC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_800BD558(rdram, ctx);
        goto after_0;
    // 0x800BD4FC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x800BD500: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800BD504: lb          $t2, 0x23($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X23);
    // 0x800BD508: sra         $t1, $s0, 16
    ctx->r9 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800BD50C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800BD510: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x800BD514: sb          $t3, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r11;
    // 0x800BD518: lb          $t4, 0x22($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X22);
    // 0x800BD51C: nop

    // 0x800BD520: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800BD524: sll         $t6, $t5, 24
    ctx->r14 = S32(ctx->r13 << 24);
    // 0x800BD528: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800BD52C: bgtz        $t7, L_800BD4F4
    if (SIGNED(ctx->r15) > 0) {
        // 0x800BD530: sb          $t5, 0x22($sp)
        MEM_B(0X22, ctx->r29) = ctx->r13;
            goto L_800BD4F4;
    }
    // 0x800BD530: sb          $t5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r13;
    // 0x800BD534: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x800BD538: b           L_800BD548
    // 0x800BD53C: nop

        goto L_800BD548;
    // 0x800BD53C: nop

    // 0x800BD540: b           L_800BD548
    // 0x800BD544: nop

        goto L_800BD548;
    // 0x800BD544: nop

L_800BD548:
    // 0x800BD548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BD54C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800BD550: jr          $ra
    // 0x800BD554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800BD554: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CAE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CAE40: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800CAE44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800CAE48: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800CAE4C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800CAE50: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800CAE54: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800CAE58: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CAE5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800CAE60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CAE64: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CAE68: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CAE6C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CAE70: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAE74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CAE78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CAE7C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CAE80: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CAE84: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CAE88: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x800CAE8C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAE90: nop

    // 0x800CAE94: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CAE98: nop

    // 0x800CAE9C: bne         $t1, $zero, L_800CAF34
    if (ctx->r9 != 0) {
        // 0x800CAEA0: nop
    
            goto L_800CAF34;
    }
    // 0x800CAEA0: nop

    // 0x800CAEA4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAEA8: nop

    // 0x800CAEAC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CAEB0: nop

    // 0x800CAEB4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CAEB8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CAEBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CAEC0: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAEC4: nop

    // 0x800CAEC8: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800CAECC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CAED0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAED4: nop

    // 0x800CAED8: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800CAEDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CAEE0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAEE4: nop

    // 0x800CAEE8: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800CAEEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAEF0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800CAEF4: addiu       $t8, $t8, -0x7E10
    ctx->r24 = ADD32(ctx->r24, -0X7E10);
    // 0x800CAEF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAEFC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800CAF00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CAF04: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800CAF08: jal         0x8001C0EC
    // 0x800CAF0C: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CAF0C: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CAF10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAF14: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800CAF18: addiu       $t9, $t9, -0x7E00
    ctx->r25 = ADD32(ctx->r25, -0X7E00);
    // 0x800CAF1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAF20: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800CAF24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CAF28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800CAF2C: jal         0x8001C0EC
    // 0x800CAF30: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CAF30: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
L_800CAF34:
    // 0x800CAF34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CAF38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CAF3C: jal         0x8001B62C
    // 0x800CAF40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800CAF40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800CAF44: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800CAF48: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CAF4C: nop

    // 0x800CAF50: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x800CAF54: nop

    // 0x800CAF58: bc1f        L_800CB080
    if (!c1cs) {
        // 0x800CAF5C: nop
    
            goto L_800CB080;
    }
    // 0x800CAF5C: nop

    // 0x800CAF60: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAF64: nop

    // 0x800CAF68: lwc1        $f16, 0x3C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800CAF6C: nop

    // 0x800CAF70: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x800CAF74: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAF78: nop

    // 0x800CAF7C: lwc1        $f18, 0x40($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X40);
    // 0x800CAF80: nop

    // 0x800CAF84: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x800CAF88: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CAF8C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800CAF90: lwc1        $f9, 0x4FB0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4FB0);
    // 0x800CAF94: lwc1        $f8, 0x4FB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4FB4);
    // 0x800CAF98: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800CAF9C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800CAFA0: jal         0x80034970
    // 0x800CAFA4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_3;
    // 0x800CAFA4: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x800CAFA8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CAFAC: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800CAFB0: lwc1        $f5, 0x4FB8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4FB8);
    // 0x800CAFB4: lwc1        $f4, 0x4FBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4FBC);
    // 0x800CAFB8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800CAFBC: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800CAFC0: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x800CAFC4: jal         0x80034970
    // 0x800CAFC8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    sinf_game(rdram, ctx);
        goto after_4;
    // 0x800CAFC8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    after_4:
    // 0x800CAFCC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CAFD0: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800CAFD4: lwc1        $f17, 0x4FC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4FC0);
    // 0x800CAFD8: lwc1        $f16, 0x4FC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4FC4);
    // 0x800CAFDC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800CAFE0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800CAFE4: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800CAFE8: jal         0x80036570
    // 0x800CAFEC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    cosf_game(rdram, ctx);
        goto after_5;
    // 0x800CAFEC: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_5:
    // 0x800CAFF0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800CAFF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CAFF8: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800CAFFC: mul.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f4.fl);
    // 0x800CB000: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800CB004: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800CB008: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CB00C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800CB010: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800CB014: mul.s       $f18, $f22, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x800CB018: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800CB01C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x800CB020: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800CB024: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800CB028: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x800CB02C: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800CB030: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CB034: addiu       $a1, $a1, 0x3FF4
    ctx->r5 = ADD32(ctx->r5, 0X3FF4);
    // 0x800CB038: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800CB03C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CB040: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800CB044: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CB048: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800CB04C: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800CB050: jal         0x80027464
    // 0x800CB054: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_6;
    // 0x800CB054: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800CB058: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x800CB05C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x800CB060: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CB064: beq         $t4, $at, L_800CB080
    if (ctx->r12 == ctx->r1) {
        // 0x800CB068: nop
    
            goto L_800CB080;
    }
    // 0x800CB068: nop

    // 0x800CB06C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800CB070: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800CB074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CB078: jal         0x80019448
    // 0x800CB07C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_7;
    // 0x800CB07C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
L_800CB080:
    // 0x800CB080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB088: jal         0x8001B44C
    // 0x800CB08C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x800CB08C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800CB090: beq         $v0, $zero, L_800CB0B0
    if (ctx->r2 == 0) {
        // 0x800CB094: nop
    
            goto L_800CB0B0;
    }
    // 0x800CB094: nop

    // 0x800CB098: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CB09C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800CB0A0: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800CB0A4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CB0A8: nop

    // 0x800CB0AC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800CB0B0:
    // 0x800CB0B0: b           L_800CB0B8
    // 0x800CB0B4: nop

        goto L_800CB0B8;
    // 0x800CB0B4: nop

L_800CB0B8:
    // 0x800CB0B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800CB0BC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800CB0C0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CB0C4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800CB0C8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800CB0CC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800CB0D0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800CB0D4: jr          $ra
    // 0x800CB0D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800CB0D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800F87B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F87B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F87B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F87BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F87C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F87C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F87C8: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800F87CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F87D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F87D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F87D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F87DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F87E0: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F87E4: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800F87E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F87EC: beq         $s0, $at, L_800F8820
    if (ctx->r16 == ctx->r1) {
        // 0x800F87F0: nop
    
            goto L_800F8820;
    }
    // 0x800F87F0: nop

    // 0x800F87F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F87F8: beq         $s0, $at, L_800F8830
    if (ctx->r16 == ctx->r1) {
        // 0x800F87FC: nop
    
            goto L_800F8830;
    }
    // 0x800F87FC: nop

    // 0x800F8800: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F8804: beq         $s0, $at, L_800F8840
    if (ctx->r16 == ctx->r1) {
        // 0x800F8808: nop
    
            goto L_800F8840;
    }
    // 0x800F8808: nop

    // 0x800F880C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800F8810: beq         $s0, $at, L_800F8850
    if (ctx->r16 == ctx->r1) {
        // 0x800F8814: nop
    
            goto L_800F8850;
    }
    // 0x800F8814: nop

    // 0x800F8818: b           L_800F8860
    // 0x800F881C: nop

        goto L_800F8860;
    // 0x800F881C: nop

L_800F8820:
    // 0x800F8820: jal         0x800F8418
    // 0x800F8824: nop

    func_800F8418(rdram, ctx);
        goto after_0;
    // 0x800F8824: nop

    after_0:
    // 0x800F8828: b           L_800F8860
    // 0x800F882C: nop

        goto L_800F8860;
    // 0x800F882C: nop

L_800F8830:
    // 0x800F8830: jal         0x800F84F8
    // 0x800F8834: nop

    func_800F84F8(rdram, ctx);
        goto after_1;
    // 0x800F8834: nop

    after_1:
    // 0x800F8838: b           L_800F8860
    // 0x800F883C: nop

        goto L_800F8860;
    // 0x800F883C: nop

L_800F8840:
    // 0x800F8840: jal         0x800F8660
    // 0x800F8844: nop

    func_800F8660(rdram, ctx);
        goto after_2;
    // 0x800F8844: nop

    after_2:
    // 0x800F8848: b           L_800F8860
    // 0x800F884C: nop

        goto L_800F8860;
    // 0x800F884C: nop

L_800F8850:
    // 0x800F8850: jal         0x800F8720
    // 0x800F8854: nop

    func_800F8720(rdram, ctx);
        goto after_3;
    // 0x800F8854: nop

    after_3:
    // 0x800F8858: b           L_800F8860
    // 0x800F885C: nop

        goto L_800F8860;
    // 0x800F885C: nop

L_800F8860:
    // 0x800F8860: b           L_800F8868
    // 0x800F8864: nop

        goto L_800F8868;
    // 0x800F8864: nop

L_800F8868:
    // 0x800F8868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F886C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F8870: jr          $ra
    // 0x800F8874: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F8874: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C99CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C99CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C99D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C99D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C99D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C99DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C99E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C99E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C99E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C99EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C99F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C99F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C99F8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C99FC: nop

    // 0x800C9A00: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C9A04: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x800C9A08: beq         $at, $zero, L_800C9A7C
    if (ctx->r1 == 0) {
        // 0x800C9A0C: nop
    
            goto L_800C9A7C;
    }
    // 0x800C9A0C: nop

    // 0x800C9A10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C9A14: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9A18: addu        $at, $at, $t9
    gpr jr_addend_800C9A24 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C9A1C: lw          $t9, 0x4F68($at)
    ctx->r25 = ADD32(ctx->r1, 0X4F68);
    // 0x800C9A20: nop

    // 0x800C9A24: jr          $t9
    // 0x800C9A28: nop

    switch (jr_addend_800C9A24 >> 2) {
        case 0: goto L_800C9A2C; break;
        case 1: goto L_800C9A3C; break;
        case 2: goto L_800C9A4C; break;
        case 3: goto L_800C9A5C; break;
        case 4: goto L_800C9A6C; break;
        default: switch_error(__func__, 0x800C9A24, 0x80114F68);
    }
    // 0x800C9A28: nop

L_800C9A2C:
    // 0x800C9A2C: jal         0x800C9160
    // 0x800C9A30: nop

    func_800C9160(rdram, ctx);
        goto after_0;
    // 0x800C9A30: nop

    after_0:
    // 0x800C9A34: b           L_800C9A84
    // 0x800C9A38: nop

        goto L_800C9A84;
    // 0x800C9A38: nop

L_800C9A3C:
    // 0x800C9A3C: jal         0x800C92BC
    // 0x800C9A40: nop

    func_800C92BC(rdram, ctx);
        goto after_1;
    // 0x800C9A40: nop

    after_1:
    // 0x800C9A44: b           L_800C9A84
    // 0x800C9A48: nop

        goto L_800C9A84;
    // 0x800C9A48: nop

L_800C9A4C:
    // 0x800C9A4C: jal         0x800C9420
    // 0x800C9A50: nop

    func_800C9420(rdram, ctx);
        goto after_2;
    // 0x800C9A50: nop

    after_2:
    // 0x800C9A54: b           L_800C9A84
    // 0x800C9A58: nop

        goto L_800C9A84;
    // 0x800C9A58: nop

L_800C9A5C:
    // 0x800C9A5C: jal         0x800C980C
    // 0x800C9A60: nop

    func_800C980C(rdram, ctx);
        goto after_3;
    // 0x800C9A60: nop

    after_3:
    // 0x800C9A64: b           L_800C9A84
    // 0x800C9A68: nop

        goto L_800C9A84;
    // 0x800C9A68: nop

L_800C9A6C:
    // 0x800C9A6C: jal         0x800C9970
    // 0x800C9A70: nop

    func_800C9970(rdram, ctx);
        goto after_4;
    // 0x800C9A70: nop

    after_4:
    // 0x800C9A74: b           L_800C9A84
    // 0x800C9A78: nop

        goto L_800C9A84;
    // 0x800C9A78: nop

L_800C9A7C:
    // 0x800C9A7C: b           L_800C9A84
    // 0x800C9A80: nop

        goto L_800C9A84;
    // 0x800C9A80: nop

L_800C9A84:
    // 0x800C9A84: b           L_800C9A8C
    // 0x800C9A88: nop

        goto L_800C9A8C;
    // 0x800C9A88: nop

L_800C9A8C:
    // 0x800C9A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C9A94: jr          $ra
    // 0x800C9A98: nop

    return;
    // 0x800C9A98: nop

;}
RECOMP_FUNC void func_800C9A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9A9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9AA0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800C9AA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C9AA8: bne         $t6, $at, L_800C9B04
    if (ctx->r14 != ctx->r1) {
        // 0x800C9AAC: nop
    
            goto L_800C9B04;
    }
    // 0x800C9AAC: nop

    // 0x800C9AB0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800C9AB4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800C9AB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C9ABC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C9AC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C9AC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C9AC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C9ACC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C9AD0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C9AD4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800C9AD8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800C9ADC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C9AE0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C9AE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C9AE8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C9AEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C9AF0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C9AF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C9AF8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C9AFC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C9B00: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800C9B04:
    // 0x800C9B04: jr          $ra
    // 0x800C9B08: nop

    return;
    // 0x800C9B08: nop

    // 0x800C9B0C: jr          $ra
    // 0x800C9B10: nop

    return;
    // 0x800C9B10: nop

;}
RECOMP_FUNC void func_800BCBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCBC0: jr          $ra
    // 0x800BCBC4: nop

    return;
    // 0x800BCBC4: nop

    // 0x800BCBC8: jr          $ra
    // 0x800BCBCC: nop

    return;
    // 0x800BCBCC: nop

;}
RECOMP_FUNC void func_800BCBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCBD0: jr          $ra
    // 0x800BCBD4: nop

    return;
    // 0x800BCBD4: nop

    // 0x800BCBD8: jr          $ra
    // 0x800BCBDC: nop

    return;
    // 0x800BCBDC: nop

;}
RECOMP_FUNC void func_8005F024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F024: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005F028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005F02C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005F030: jal         0x8003C940
    // 0x8005F034: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F034: nop

    after_0:
    // 0x8005F038: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005F03C: lw          $t6, -0x1DC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DC4);
    // 0x8005F040: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005F044: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005F048: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8005F04C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8005F050: addiu       $t0, $t0, -0x1DE0
    ctx->r8 = ADD32(ctx->r8, -0X1DE0);
    // 0x8005F054: lw          $t8, -0x1DD0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1DD0);
    // 0x8005F058: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8005F05C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8005F060: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005F064: subu        $t9, $s0, $t8
    ctx->r25 = SUB32(ctx->r16, ctx->r24);
    // 0x8005F068: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8005F06C: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x8005F070: b           L_8005F078
    // 0x8005F074: nop

        goto L_8005F078;
    // 0x8005F074: nop

L_8005F078:
    // 0x8005F078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F07C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005F080: jr          $ra
    // 0x8005F084: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005F084: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800E7EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7EE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7EE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E7EEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7EF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7EF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E7EF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7EFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7F00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7F04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7F08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7F0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7F10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7F14: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E7F18: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7F1C: nop

    // 0x800E7F20: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800E7F24: nop

    // 0x800E7F28: bne         $t1, $zero, L_800E7F48
    if (ctx->r9 != 0) {
        // 0x800E7F2C: nop
    
            goto L_800E7F48;
    }
    // 0x800E7F2C: nop

    // 0x800E7F30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7F34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7F38: jal         0x8001BB34
    // 0x800E7F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800E7F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E7F40: b           L_800E7F70
    // 0x800E7F44: nop

        goto L_800E7F70;
    // 0x800E7F44: nop

L_800E7F48:
    // 0x800E7F48: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E7F4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7F50: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800E7F54: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7F58: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x800E7F5C: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800E7F60: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800E7F64: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800E7F68: jal         0x8001BB34
    // 0x800E7F6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800E7F6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_800E7F70:
    // 0x800E7F70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E7F74: nop

    // 0x800E7F78: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E7F7C: nop

    // 0x800E7F80: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800E7F84: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x800E7F88: beq         $at, $zero, L_800E800C
    if (ctx->r1 == 0) {
        // 0x800E7F8C: nop
    
            goto L_800E800C;
    }
    // 0x800E7F8C: nop

    // 0x800E7F90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7F94: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E7F98: addu        $at, $at, $t7
    gpr jr_addend_800E7FA4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E7F9C: lw          $t7, 0x54F4($at)
    ctx->r15 = ADD32(ctx->r1, 0X54F4);
    // 0x800E7FA0: nop

    // 0x800E7FA4: jr          $t7
    // 0x800E7FA8: nop

    switch (jr_addend_800E7FA4 >> 2) {
        case 0: goto L_800E7FAC; break;
        case 1: goto L_800E7FBC; break;
        case 2: goto L_800E7FCC; break;
        case 3: goto L_800E7FDC; break;
        case 4: goto L_800E7FEC; break;
        case 5: goto L_800E7FFC; break;
        default: switch_error(__func__, 0x800E7FA4, 0x801154F4);
    }
    // 0x800E7FA8: nop

L_800E7FAC:
    // 0x800E7FAC: jal         0x800E764C
    // 0x800E7FB0: nop

    func_800E764C(rdram, ctx);
        goto after_2;
    // 0x800E7FB0: nop

    after_2:
    // 0x800E7FB4: b           L_800E8014
    // 0x800E7FB8: nop

        goto L_800E8014;
    // 0x800E7FB8: nop

L_800E7FBC:
    // 0x800E7FBC: jal         0x800E778C
    // 0x800E7FC0: nop

    func_800E778C(rdram, ctx);
        goto after_3;
    // 0x800E7FC0: nop

    after_3:
    // 0x800E7FC4: b           L_800E8014
    // 0x800E7FC8: nop

        goto L_800E8014;
    // 0x800E7FC8: nop

L_800E7FCC:
    // 0x800E7FCC: jal         0x800E7974
    // 0x800E7FD0: nop

    func_800E7974(rdram, ctx);
        goto after_4;
    // 0x800E7FD0: nop

    after_4:
    // 0x800E7FD4: b           L_800E8014
    // 0x800E7FD8: nop

        goto L_800E8014;
    // 0x800E7FD8: nop

L_800E7FDC:
    // 0x800E7FDC: jal         0x800E7A7C
    // 0x800E7FE0: nop

    func_800E7A7C(rdram, ctx);
        goto after_5;
    // 0x800E7FE0: nop

    after_5:
    // 0x800E7FE4: b           L_800E8014
    // 0x800E7FE8: nop

        goto L_800E8014;
    // 0x800E7FE8: nop

L_800E7FEC:
    // 0x800E7FEC: jal         0x800E7C54
    // 0x800E7FF0: nop

    func_800E7C54(rdram, ctx);
        goto after_6;
    // 0x800E7FF0: nop

    after_6:
    // 0x800E7FF4: b           L_800E8014
    // 0x800E7FF8: nop

        goto L_800E8014;
    // 0x800E7FF8: nop

L_800E7FFC:
    // 0x800E7FFC: jal         0x800E7D5C
    // 0x800E8000: nop

    func_800E7D5C(rdram, ctx);
        goto after_7;
    // 0x800E8000: nop

    after_7:
    // 0x800E8004: b           L_800E8014
    // 0x800E8008: nop

        goto L_800E8014;
    // 0x800E8008: nop

L_800E800C:
    // 0x800E800C: b           L_800E8014
    // 0x800E8010: nop

        goto L_800E8014;
    // 0x800E8010: nop

L_800E8014:
    // 0x800E8014: b           L_800E801C
    // 0x800E8018: nop

        goto L_800E801C;
    // 0x800E8018: nop

L_800E801C:
    // 0x800E801C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E8024: jr          $ra
    // 0x800E8028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E8028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C66B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C66B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C66B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C66BC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C66C0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C66C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C66C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C66CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C66D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C66D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C66D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C66DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C66E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C66E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C66E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C66EC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C66F0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C66F4: nop

    // 0x800C66F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C66FC: nop

    // 0x800C6700: bne         $t1, $zero, L_800C67C0
    if (ctx->r9 != 0) {
        // 0x800C6704: nop
    
            goto L_800C67C0;
    }
    // 0x800C6704: nop

    // 0x800C6708: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C670C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C6710: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C6714: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C6718: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C671C: nop

    // 0x800C6720: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800C6724: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C6728: nop

    // 0x800C672C: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800C6730: nop

    // 0x800C6734: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800C6738: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C673C: nop

    // 0x800C6740: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800C6744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C674C: jal         0x8002A46C
    // 0x800C6750: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800C6750: nop

    after_0:
    // 0x800C6754: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800C6758: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C675C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800C6760: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C6764: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C6768: nop

    // 0x800C676C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C6770: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x800C6774: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800C6778: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800C677C: nop

    // 0x800C6780: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C6784: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C6788: jal         0x8002A640
    // 0x800C678C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_1;
    // 0x800C678C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x800C6790: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6794: nop

    // 0x800C6798: sh          $v0, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r2;
    // 0x800C679C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C67A0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800C67A4: addiu       $t1, $t1, -0x7E90
    ctx->r9 = ADD32(ctx->r9, -0X7E90);
    // 0x800C67A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C67AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800C67B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C67B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C67B8: jal         0x8001C0EC
    // 0x800C67BC: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C67BC: addiu       $a3, $zero, 0x58
    ctx->r7 = ADD32(0, 0X58);
    after_2:
L_800C67C0:
    // 0x800C67C0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C67C4: nop

    // 0x800C67C8: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800C67CC: lwc1        $f16, 0x1C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800C67D0: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800C67D4: nop

    // 0x800C67D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C67DC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800C67E0: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x800C67E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800C67E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C67EC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C67F0: nop

    // 0x800C67F4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x800C67F8: nop

    // 0x800C67FC: bc1f        L_800C6838
    if (!c1cs) {
        // 0x800C6800: nop
    
            goto L_800C6838;
    }
    // 0x800C6800: nop

    // 0x800C6804: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800C6808: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C680C: nop

    // 0x800C6810: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x800C6814: nop

    // 0x800C6818: bc1f        L_800C6838
    if (!c1cs) {
        // 0x800C681C: nop
    
            goto L_800C6838;
    }
    // 0x800C681C: nop

    // 0x800C6820: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C6824: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x800C6828: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800C682C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C6830: b           L_800C6880
    // 0x800C6834: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800C6880;
    // 0x800C6834: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800C6838:
    // 0x800C6838: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C683C: nop

    // 0x800C6840: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800C6844: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800C6848: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800C684C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800C6850: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800C6854: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800C6858: jal         0x80015538
    // 0x800C685C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800C685C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_3:
    // 0x800C6860: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C6864: nop

    // 0x800C6868: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800C686C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C6870: nop

    // 0x800C6874: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800C6878: nop

    // 0x800C687C: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
L_800C6880:
    // 0x800C6880: b           L_800C6888
    // 0x800C6884: nop

        goto L_800C6888;
    // 0x800C6884: nop

L_800C6888:
    // 0x800C6888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C688C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C6890: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C6894: jr          $ra
    // 0x800C6898: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C6898: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800761FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800761FC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80076200: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80076204: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076208: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x8007620C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80076210: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076214: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x80076218: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007621C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076220: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x80076224: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80076228: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007622C: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x80076230: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80076234: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80076238: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007623C: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x80076240: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80076244: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076248: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x8007624C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80076250: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80076254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076258: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x8007625C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076260: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80076264: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076268: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8007626C: nop

    // 0x80076270: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x80076274: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80076278: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8007627C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80076280: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80076284: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80076288: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007628C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80076290: swc1        $f16, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f16.u32l;
    // 0x80076294: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80076298: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8007629C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800762A0: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800762A4: nop

    // 0x800762A8: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x800762AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800762B0: sb          $zero, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = 0;
    // 0x800762B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800762B8: sb          $zero, 0x75F4($at)
    MEM_B(0X75F4, ctx->r1) = 0;
    // 0x800762BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800762C0: sb          $zero, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = 0;
    // 0x800762C4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800762C8: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x800762CC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800762D0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800762D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800762D8: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x800762DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800762E0: lh          $t2, 0x30($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X30);
    // 0x800762E4: nop

    // 0x800762E8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800762EC: nop

    // 0x800762F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800762F4: swc1        $f6, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f6.u32l;
    // 0x800762F8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800762FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80076300: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076304: swc1        $f8, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f8.u32l;
    // 0x80076308: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007630C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076310: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x80076314: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80076318: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007631C: swc1        $f16, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f16.u32l;
    // 0x80076320: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80076324: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076328: swc1        $f18, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f18.u32l;
    // 0x8007632C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80076330: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80076334: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076338: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x8007633C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80076340: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076344: swc1        $f6, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f6.u32l;
    // 0x80076348: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007634C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076350: swc1        $f8, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->f8.u32l;
    // 0x80076354: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80076358: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007635C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076360: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80076364: jr          $ra
    // 0x80076368: nop

    return;
    // 0x80076368: nop

    // 0x8007636C: jr          $ra
    // 0x80076370: nop

    return;
    // 0x80076370: nop

;}
RECOMP_FUNC void func_8005F0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F0B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F0BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F0C0: jal         0x8003C940
    // 0x8005F0C4: nop

    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F0C4: nop

    after_0:
    // 0x8005F0C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005F0CC: lw          $t6, -0x1DB4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DB4);
    // 0x8005F0D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005F0D4: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x8005F0D8: sw          $t7, -0x1DAC($at)
    MEM_W(-0X1DAC, ctx->r1) = ctx->r15;
    // 0x8005F0DC: b           L_8005F0E4
    // 0x8005F0E0: nop

        goto L_8005F0E4;
    // 0x8005F0E0: nop

L_8005F0E4:
    // 0x8005F0E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F0E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F0EC: jr          $ra
    // 0x8005F0F0: nop

    return;
    // 0x8005F0F0: nop

;}
RECOMP_FUNC void func_800673D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800673D4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800673D8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x800673DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800673E0: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x800673E4: nop

    // 0x800673E8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800673EC: beq         $t7, $zero, L_80067450
    if (ctx->r15 == 0) {
        // 0x800673F0: nop
    
            goto L_80067450;
    }
    // 0x800673F0: nop

    // 0x800673F4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800673F8: addiu       $t8, $t8, 0x7740
    ctx->r24 = ADD32(ctx->r24, 0X7740);
    // 0x800673FC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80067400: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80067404: beq         $t9, $at, L_80067418
    if (ctx->r25 == ctx->r1) {
        // 0x80067408: nop
    
            goto L_80067418;
    }
    // 0x80067408: nop

    // 0x8006740C: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x80067410: bne         $t9, $at, L_80067450
    if (ctx->r25 != ctx->r1) {
        // 0x80067414: nop
    
            goto L_80067450;
    }
    // 0x80067414: nop

L_80067418:
    // 0x80067418: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006741C: addiu       $t0, $t0, 0x7730
    ctx->r8 = ADD32(ctx->r8, 0X7730);
    // 0x80067420: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80067424: nop

    // 0x80067428: blez        $t1, L_80067450
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8006742C: nop
    
            goto L_80067450;
    }
    // 0x8006742C: nop

    // 0x80067430: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80067434: addiu       $t2, $t2, 0x7750
    ctx->r10 = ADD32(ctx->r10, 0X7750);
    // 0x80067438: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8006743C: nop

    // 0x80067440: bne         $t3, $zero, L_80067450
    if (ctx->r11 != 0) {
        // 0x80067444: nop
    
            goto L_80067450;
    }
    // 0x80067444: nop

    // 0x80067448: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8006744C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
L_80067450:
    // 0x80067450: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80067454: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x80067458: nop

    // 0x8006745C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80067460: beq         $t6, $zero, L_800674A4
    if (ctx->r14 == 0) {
        // 0x80067464: nop
    
            goto L_800674A4;
    }
    // 0x80067464: nop

    // 0x80067468: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006746C: lbu         $t7, 0x76E4($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E4);
    // 0x80067470: nop

    // 0x80067474: beq         $t7, $zero, L_800674A4
    if (ctx->r15 == 0) {
        // 0x80067478: nop
    
            goto L_800674A4;
    }
    // 0x80067478: nop

    // 0x8006747C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80067480: lbu         $t8, 0x76E4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E4);
    // 0x80067484: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80067488: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006748C: lbu         $t9, 0x791B($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X791B);
    // 0x80067490: nop

    // 0x80067494: beq         $t9, $zero, L_800674A4
    if (ctx->r25 == 0) {
        // 0x80067498: nop
    
            goto L_800674A4;
    }
    // 0x80067498: nop

    // 0x8006749C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800674A0: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_800674A4:
    // 0x800674A4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800674A8: nop

    // 0x800674AC: beq         $t1, $zero, L_800675CC
    if (ctx->r9 == 0) {
        // 0x800674B0: nop
    
            goto L_800675CC;
    }
    // 0x800674B0: nop

    // 0x800674B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800674B8: sb          $zero, 0x76E0($at)
    MEM_B(0X76E0, ctx->r1) = 0;
    // 0x800674BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800674C0: addiu       $t2, $t2, 0x76F0
    ctx->r10 = ADD32(ctx->r10, 0X76F0);
    // 0x800674C4: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x800674C8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800674CC: addiu       $t4, $t4, 0x7700
    ctx->r12 = ADD32(ctx->r12, 0X7700);
    // 0x800674D0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800674D4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800674D8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800674DC: addiu       $t5, $t5, 0x7710
    ctx->r13 = ADD32(ctx->r13, 0X7710);
    // 0x800674E0: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x800674E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800674E8: addiu       $t7, $t7, 0x7720
    ctx->r15 = ADD32(ctx->r15, 0X7720);
    // 0x800674EC: addiu       $t6, $zero, -0x7530
    ctx->r14 = ADD32(0, -0X7530);
    // 0x800674F0: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800674F4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800674F8: addiu       $t9, $t9, 0x7730
    ctx->r25 = ADD32(ctx->r25, 0X7730);
    // 0x800674FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80067500: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80067504: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80067508: lwc1        $f4, 0x4F68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F68);
    // 0x8006750C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80067510: addiu       $t0, $t0, 0x7760
    ctx->r8 = ADD32(ctx->r8, 0X7760);
    // 0x80067514: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x80067518: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006751C: addiu       $t2, $t2, 0x7740
    ctx->r10 = ADD32(ctx->r10, 0X7740);
    // 0x80067520: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80067524: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80067528: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006752C: addiu       $t3, $t3, 0x7750
    ctx->r11 = ADD32(ctx->r11, 0X7750);
    // 0x80067530: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x80067534: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80067538: addiu       $t5, $t5, 0x7770
    ctx->r13 = ADD32(ctx->r13, 0X7770);
    // 0x8006753C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80067540: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80067544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80067548: addiu       $t6, $t6, 0x76F0
    ctx->r14 = ADD32(ctx->r14, 0X76F0);
    // 0x8006754C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80067550: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80067554: addiu       $t8, $t8, 0x7700
    ctx->r24 = ADD32(ctx->r24, 0X7700);
    // 0x80067558: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006755C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80067560: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80067564: addiu       $t9, $t9, 0x7710
    ctx->r25 = ADD32(ctx->r25, 0X7710);
    // 0x80067568: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x8006756C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80067570: addiu       $t1, $t1, 0x7720
    ctx->r9 = ADD32(ctx->r9, 0X7720);
    // 0x80067574: addiu       $t0, $zero, 0x7530
    ctx->r8 = ADD32(0, 0X7530);
    // 0x80067578: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006757C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80067580: addiu       $t3, $t3, 0x7730
    ctx->r11 = ADD32(ctx->r11, 0X7730);
    // 0x80067584: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80067588: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8006758C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80067590: lwc1        $f6, 0x4F6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F6C);
    // 0x80067594: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80067598: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x8006759C: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x800675A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800675A4: addiu       $t6, $t6, 0x7740
    ctx->r14 = ADD32(ctx->r14, 0X7740);
    // 0x800675A8: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800675AC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800675B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800675B4: addiu       $t7, $t7, 0x7750
    ctx->r15 = ADD32(ctx->r15, 0X7750);
    // 0x800675B8: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x800675BC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800675C0: addiu       $t9, $t9, 0x7770
    ctx->r25 = ADD32(ctx->r25, 0X7770);
    // 0x800675C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800675C8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
L_800675CC:
    // 0x800675CC: b           L_800675D4
    // 0x800675D0: nop

        goto L_800675D4;
    // 0x800675D0: nop

L_800675D4:
    // 0x800675D4: jr          $ra
    // 0x800675D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800675D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80094680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80094684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094688: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009468C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80094690: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80094694: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80094698: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009469C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800946A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800946A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800946A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800946AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800946B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800946B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800946B8: nop

    // 0x800946BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800946C0: nop

    // 0x800946C4: bne         $t1, $zero, L_80094700
    if (ctx->r9 != 0) {
        // 0x800946C8: nop
    
            goto L_80094700;
    }
    // 0x800946C8: nop

    // 0x800946CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800946D0: nop

    // 0x800946D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800946D8: nop

    // 0x800946DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800946E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800946E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800946E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800946EC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800946F0: addiu       $a3, $a3, 0x33B8
    ctx->r7 = ADD32(ctx->r7, 0X33B8);
    // 0x800946F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800946F8: jal         0x8001ABF4
    // 0x800946FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800946FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
L_80094700:
    // 0x80094700: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80094704: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80094708: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009470C: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80094710: jal         0x80015538
    // 0x80094714: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80094714: nop

    after_1:
    // 0x80094718: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009471C: nop

    // 0x80094720: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80094724: b           L_8009472C
    // 0x80094728: nop

        goto L_8009472C;
    // 0x80094728: nop

L_8009472C:
    // 0x8009472C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094730: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80094734: jr          $ra
    // 0x80094738: nop

    return;
    // 0x80094738: nop

;}
RECOMP_FUNC void func_800C1E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C1E8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1E90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C1E94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C1E98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C1E9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1EA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C1EA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1EA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C1EAC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C1EB0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C1EB4: nop

    // 0x800C1EB8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C1EBC: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x800C1EC0: beq         $at, $zero, L_800C1F44
    if (ctx->r1 == 0) {
        // 0x800C1EC4: nop
    
            goto L_800C1F44;
    }
    // 0x800C1EC4: nop

    // 0x800C1EC8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C1ECC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C1ED0: addu        $at, $at, $t9
    gpr jr_addend_800C1EDC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C1ED4: lw          $t9, 0x4D30($at)
    ctx->r25 = ADD32(ctx->r1, 0X4D30);
    // 0x800C1ED8: nop

    // 0x800C1EDC: jr          $t9
    // 0x800C1EE0: nop

    switch (jr_addend_800C1EDC >> 2) {
        case 0: goto L_800C1EE4; break;
        case 1: goto L_800C1EF4; break;
        case 2: goto L_800C1F04; break;
        case 3: goto L_800C1F14; break;
        case 4: goto L_800C1F24; break;
        case 5: goto L_800C1F34; break;
        default: switch_error(__func__, 0x800C1EDC, 0x80114D30);
    }
    // 0x800C1EE0: nop

L_800C1EE4:
    // 0x800C1EE4: jal         0x800C156C
    // 0x800C1EE8: nop

    func_800C156C(rdram, ctx);
        goto after_0;
    // 0x800C1EE8: nop

    after_0:
    // 0x800C1EEC: b           L_800C1F4C
    // 0x800C1EF0: nop

        goto L_800C1F4C;
    // 0x800C1EF0: nop

L_800C1EF4:
    // 0x800C1EF4: jal         0x800C16BC
    // 0x800C1EF8: nop

    func_800C16BC(rdram, ctx);
        goto after_1;
    // 0x800C1EF8: nop

    after_1:
    // 0x800C1EFC: b           L_800C1F4C
    // 0x800C1F00: nop

        goto L_800C1F4C;
    // 0x800C1F00: nop

L_800C1F04:
    // 0x800C1F04: jal         0x800C187C
    // 0x800C1F08: nop

    func_800C187C(rdram, ctx);
        goto after_2;
    // 0x800C1F08: nop

    after_2:
    // 0x800C1F0C: b           L_800C1F4C
    // 0x800C1F10: nop

        goto L_800C1F4C;
    // 0x800C1F10: nop

L_800C1F14:
    // 0x800C1F14: jal         0x800C1B5C
    // 0x800C1F18: nop

    func_800C1B5C(rdram, ctx);
        goto after_3;
    // 0x800C1F18: nop

    after_3:
    // 0x800C1F1C: b           L_800C1F4C
    // 0x800C1F20: nop

        goto L_800C1F4C;
    // 0x800C1F20: nop

L_800C1F24:
    // 0x800C1F24: jal         0x800C1D38
    // 0x800C1F28: nop

    func_800C1D38(rdram, ctx);
        goto after_4;
    // 0x800C1F28: nop

    after_4:
    // 0x800C1F2C: b           L_800C1F4C
    // 0x800C1F30: nop

        goto L_800C1F4C;
    // 0x800C1F30: nop

L_800C1F34:
    // 0x800C1F34: jal         0x800C1E54
    // 0x800C1F38: nop

    func_800C1E54(rdram, ctx);
        goto after_5;
    // 0x800C1F38: nop

    after_5:
    // 0x800C1F3C: b           L_800C1F4C
    // 0x800C1F40: nop

        goto L_800C1F4C;
    // 0x800C1F40: nop

L_800C1F44:
    // 0x800C1F44: b           L_800C1F4C
    // 0x800C1F48: nop

        goto L_800C1F4C;
    // 0x800C1F48: nop

L_800C1F4C:
    // 0x800C1F4C: b           L_800C1F54
    // 0x800C1F50: nop

        goto L_800C1F54;
    // 0x800C1F50: nop

L_800C1F54:
    // 0x800C1F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C1F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C1F5C: jr          $ra
    // 0x800C1F60: nop

    return;
    // 0x800C1F60: nop

;}
RECOMP_FUNC void func_800F49D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F49D0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F49D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F49D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F49DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F49E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F49E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F49E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F49EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F49F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F49F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F49F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F49FC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F4A00: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A04: nop

    // 0x800F4A08: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F4A0C: nop

    // 0x800F4A10: bne         $t1, $zero, L_800F4A3C
    if (ctx->r9 != 0) {
        // 0x800F4A14: nop
    
            goto L_800F4A3C;
    }
    // 0x800F4A14: nop

    // 0x800F4A18: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A1C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F4A20: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F4A24: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A28: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x800F4A2C: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
    // 0x800F4A30: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A34: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800F4A38: sh          $t6, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r14;
L_800F4A3C:
    // 0x800F4A3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F4A40: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A44: nop

    // 0x800F4A48: swc1        $f4, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f4.u32l;
    // 0x800F4A4C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A50: nop

    // 0x800F4A54: lwc1        $f12, 0x2C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800F4A58: nop

    // 0x800F4A5C: swc1        $f12, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f12.u32l;
    // 0x800F4A60: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A64: nop

    // 0x800F4A68: swc1        $f12, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f12.u32l;
    // 0x800F4A6C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A70: nop

    // 0x800F4A74: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x800F4A78: nop

    // 0x800F4A7C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800F4A80: sh          $t3, 0xAE($t1)
    MEM_H(0XAE, ctx->r9) = ctx->r11;
    // 0x800F4A84: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F4A88: nop

    // 0x800F4A8C: lh          $t5, 0xAE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XAE);
    // 0x800F4A90: nop

    // 0x800F4A94: bne         $t5, $zero, L_800F4AC4
    if (ctx->r13 != 0) {
        // 0x800F4A98: nop
    
            goto L_800F4AC4;
    }
    // 0x800F4A98: nop

    // 0x800F4A9C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F4AA0: nop

    // 0x800F4AA4: lh          $t7, 0xB4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB4);
    // 0x800F4AA8: nop

    // 0x800F4AAC: sb          $t7, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r15;
    // 0x800F4AB0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F4AB4: nop

    // 0x800F4AB8: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800F4ABC: nop

    // 0x800F4AC0: sh          $t9, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r25;
L_800F4AC4:
    // 0x800F4AC4: b           L_800F4ACC
    // 0x800F4AC8: nop

        goto L_800F4ACC;
    // 0x800F4AC8: nop

L_800F4ACC:
    // 0x800F4ACC: jr          $ra
    // 0x800F4AD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F4AD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BD3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD3B8: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800BD3BC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800BD3C0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800BD3C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BD3C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BD3CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BD3D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BD3D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD3D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BD3DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BD3E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BD3E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BD3E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BD3EC: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x800BD3F0: sb          $zero, 0x7($sp)
    MEM_B(0X7, ctx->r29) = 0;
    // 0x800BD3F4: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800BD3F8: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x800BD3FC: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800BD400: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800BD404: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BD408: beq         $t3, $at, L_800BD418
    if (ctx->r11 == ctx->r1) {
        // 0x800BD40C: nop
    
            goto L_800BD418;
    }
    // 0x800BD40C: nop

    // 0x800BD410: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800BD414: sb          $t4, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r12;
L_800BD418:
    // 0x800BD418: lb          $v0, 0x7($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X7);
    // 0x800BD41C: b           L_800BD42C
    // 0x800BD420: nop

        goto L_800BD42C;
    // 0x800BD420: nop

    // 0x800BD424: b           L_800BD42C
    // 0x800BD428: nop

        goto L_800BD42C;
    // 0x800BD428: nop

L_800BD42C:
    // 0x800BD42C: jr          $ra
    // 0x800BD430: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800BD430: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800C9160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C9164: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9168: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C916C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C9170: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9174: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9178: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C917C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9184: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C918C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9190: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C9194: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C9198: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C919C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C91A0: nop

    // 0x800C91A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C91A8: nop

    // 0x800C91AC: bne         $t1, $zero, L_800C9270
    if (ctx->r9 != 0) {
        // 0x800C91B0: nop
    
            goto L_800C9270;
    }
    // 0x800C91B0: nop

    // 0x800C91B4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C91B8: nop

    // 0x800C91BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C91C0: nop

    // 0x800C91C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C91C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C91CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C91D0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C91D4: addiu       $t5, $t5, -0x7E84
    ctx->r13 = ADD32(ctx->r13, -0X7E84);
    // 0x800C91D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C91DC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C91E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C91E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C91E8: jal         0x8001C0EC
    // 0x800C91EC: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C91EC: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x800C91F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C91F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C91F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C91FC: addiu       $a3, $a3, -0x7E4C
    ctx->r7 = ADD32(ctx->r7, -0X7E4C);
    // 0x800C9200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C9204: jal         0x8001ABF4
    // 0x800C9208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C9208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C920C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9210: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9214: jal         0x8001BBDC
    // 0x800C9218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800C9218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C921C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9220: lwc1        $f4, 0x4F20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F20);
    // 0x800C9224: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C9228: nop

    // 0x800C922C: swc1        $f4, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f4.u32l;
    // 0x800C9230: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C9234: nop

    // 0x800C9238: lwc1        $f20, 0x14($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800C923C: nop

    // 0x800C9240: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x800C9244: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C9248: nop

    // 0x800C924C: swc1        $f20, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f20.u32l;
    // 0x800C9250: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9254: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9258: jal         0x8001BB34
    // 0x800C925C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800C925C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800C9260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9268: jal         0x8001BB04
    // 0x800C926C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_4;
    // 0x800C926C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_800C9270:
    // 0x800C9270: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9274: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9278: jal         0x8002A1FC
    // 0x800C927C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800C927C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x800C9280: beq         $v0, $zero, L_800C92A0
    if (ctx->r2 == 0) {
        // 0x800C9284: nop
    
            goto L_800C92A0;
    }
    // 0x800C9284: nop

    // 0x800C9288: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C928C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C9290: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800C9294: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C9298: nop

    // 0x800C929C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800C92A0:
    // 0x800C92A0: b           L_800C92A8
    // 0x800C92A4: nop

        goto L_800C92A8;
    // 0x800C92A4: nop

L_800C92A8:
    // 0x800C92A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C92AC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C92B0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C92B4: jr          $ra
    // 0x800C92B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C92B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006828C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006828C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80068290: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80068294:
    // 0x80068294: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80068298: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006829C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800682A0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800682A4: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x800682A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800682AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800682B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800682B4: sh          $zero, 0x6610($at)
    MEM_H(0X6610, ctx->r1) = 0;
    // 0x800682B8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800682BC: nop

    // 0x800682C0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800682C4: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x800682C8: bne         $at, $zero, L_80068294
    if (ctx->r1 != 0) {
        // 0x800682CC: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_80068294;
    }
    // 0x800682CC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800682D0: b           L_800682D8
    // 0x800682D4: nop

        goto L_800682D8;
    // 0x800682D4: nop

L_800682D8:
    // 0x800682D8: jr          $ra
    // 0x800682DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800682DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009C85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C85C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009C860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C864: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C868: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009C86C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009C870: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009C874: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C878: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C87C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C880: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C884: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009C888: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009C88C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009C890: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C894: nop

    // 0x8009C898: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009C89C: nop

    // 0x8009C8A0: bne         $t1, $zero, L_8009C954
    if (ctx->r9 != 0) {
        // 0x8009C8A4: nop
    
            goto L_8009C954;
    }
    // 0x8009C8A4: nop

    // 0x8009C8A8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C8AC: nop

    // 0x8009C8B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009C8B4: nop

    // 0x8009C8B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009C8BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009C8C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C8C4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009C8C8: addiu       $a3, $a3, 0x6A50
    ctx->r7 = ADD32(ctx->r7, 0X6A50);
    // 0x8009C8CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C8D0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8009C8D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009C8D8: jal         0x8001ABF4
    // 0x8009C8DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8009C8DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8009C8E0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C8E4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8009C8E8: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x8009C8EC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C8F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C8F4: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x8009C8F8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8009C8FC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8009C900: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8009C904: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009C908: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8009C90C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009C910: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8009C914: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8009C918: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C91C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009C920: lh          $t3, 0xE8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XE8);
    // 0x8009C924: nop

    // 0x8009C928: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8009C92C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009C930: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8009C934: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009C938: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8009C93C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8009C940: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x8009C944: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C948: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C94C: jal         0x800281A4
    // 0x8009C950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_1;
    // 0x8009C950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_8009C954:
    // 0x8009C954: b           L_8009C95C
    // 0x8009C958: nop

        goto L_8009C95C;
    // 0x8009C958: nop

L_8009C95C:
    // 0x8009C95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009C964: jr          $ra
    // 0x8009C968: nop

    return;
    // 0x8009C968: nop

;}
RECOMP_FUNC void func_80068CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068CC4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80068CC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80068CCC: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x80068CD0: swc1        $f12, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f12.u32l;
    // 0x80068CD4: swc1        $f14, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f14.u32l;
    // 0x80068CD8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80068CDC: addiu       $t7, $sp, 0x90
    ctx->r15 = ADD32(ctx->r29, 0X90);
    // 0x80068CE0: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80068CE4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80068CE8: addiu       $t9, $sp, 0x90
    ctx->r25 = ADD32(ctx->r29, 0X90);
    // 0x80068CEC: sb          $t8, 0x1($t9)
    MEM_B(0X1, ctx->r25) = ctx->r24;
    // 0x80068CF0: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_80068CF4:
    // 0x80068CF4: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80068CF8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80068CFC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80068D00: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80068D04: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80068D08: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80068D0C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80068D10: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80068D14: lh          $t2, 0x6610($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X6610);
    // 0x80068D18: nop

    // 0x80068D1C: beq         $t2, $zero, L_80069154
    if (ctx->r10 == 0) {
        // 0x80068D20: nop
    
            goto L_80069154;
    }
    // 0x80068D20: nop

    // 0x80068D24: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x80068D28: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80068D2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80068D30: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80068D34: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x80068D38: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80068D3C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80068D40: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80068D44: lh          $t5, 0x6610($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X6610);
    // 0x80068D48: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80068D4C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80068D50: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80068D54: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80068D58: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80068D5C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80068D60: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80068D64: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80068D68: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
    // 0x80068D6C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80068D70:
    // 0x80068D70: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x80068D74: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80068D78: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80068D7C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80068D80: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x80068D84: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80068D88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80068D8C: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x80068D90: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80068D94: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80068D98: addiu       $t5, $t5, 0x6610
    ctx->r13 = ADD32(ctx->r13, 0X6610);
    // 0x80068D9C: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x80068DA0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80068DA4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80068DA8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80068DAC: nop

    // 0x80068DB0: lw          $t8, 0x34($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X34);
    // 0x80068DB4: nop

    // 0x80068DB8: beq         $t8, $zero, L_8006913C
    if (ctx->r24 == 0) {
        // 0x80068DBC: nop
    
            goto L_8006913C;
    }
    // 0x80068DBC: nop

    // 0x80068DC0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80068DC4: nop

    // 0x80068DC8: lw          $t1, 0x34($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X34);
    // 0x80068DCC: nop

    // 0x80068DD0: bltz        $t1, L_80068E34
    if (SIGNED(ctx->r9) < 0) {
        // 0x80068DD4: nop
    
            goto L_80068E34;
    }
    // 0x80068DD4: nop

    // 0x80068DD8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80068DDC: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80068DE0: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80068DE4: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80068DE8: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80068DEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80068DF0: lwc1        $f6, 0x14($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X14);
    // 0x80068DF4: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80068DF8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80068DFC: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80068E00: nop

    // 0x80068E04: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80068E08: lwc1        $f10, 0x20($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80068E0C: nop

    // 0x80068E10: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80068E14: lwc1        $f16, 0x24($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80068E18: nop

    // 0x80068E1C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80068E20: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80068E24: jal         0x800163AC
    // 0x80068E28: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_800163AC(rdram, ctx);
        goto after_0;
    // 0x80068E28: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80068E2C: b           L_80068E8C
    // 0x80068E30: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
        goto L_80068E8C;
    // 0x80068E30: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80068E34:
    // 0x80068E34: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80068E38: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80068E3C: lwc1        $f4, 0xC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XC);
    // 0x80068E40: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80068E44: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x80068E48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80068E4C: lwc1        $f6, 0x14($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80068E50: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80068E54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80068E58: lwc1        $f8, 0x18($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X18);
    // 0x80068E5C: nop

    // 0x80068E60: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80068E64: lwc1        $f10, 0x20($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80068E68: nop

    // 0x80068E6C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80068E70: lwc1        $f16, 0x24($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X24);
    // 0x80068E74: nop

    // 0x80068E78: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80068E7C: lwc1        $f18, 0x2C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80068E80: jal         0x80016560
    // 0x80068E84: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_80016560(rdram, ctx);
        goto after_1;
    // 0x80068E84: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x80068E88: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
L_80068E8C:
    // 0x80068E8C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80068E90: nop

    // 0x80068E94: beq         $t3, $zero, L_8006913C
    if (ctx->r11 == 0) {
        // 0x80068E98: nop
    
            goto L_8006913C;
    }
    // 0x80068E98: nop

    // 0x80068E9C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80068EA0: nop

    // 0x80068EA4: lw          $t5, 0x30($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X30);
    // 0x80068EA8: nop

    // 0x80068EAC: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x80068EB0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80068EB4: nop

    // 0x80068EB8: lw          $t7, 0x34($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X34);
    // 0x80068EBC: nop

    // 0x80068EC0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80068EC4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80068EC8: nop

    // 0x80068ECC: lw          $t9, 0x38($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X38);
    // 0x80068ED0: nop

    // 0x80068ED4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x80068ED8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80068EDC: nop

    // 0x80068EE0: lw          $t0, 0x3C($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X3C);
    // 0x80068EE4: nop

    // 0x80068EE8: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    // 0x80068EEC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80068EF0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80068EF4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80068EF8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80068EFC: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80068F00: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80068F04: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x80068F08: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x80068F0C: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x80068F10: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80068F14: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x80068F18: sra         $t0, $t7, 31
    ctx->r8 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80068F1C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80068F20: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x80068F24: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80068F28: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80068F2C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80068F30: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80068F34: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80068F38: jal         0x80015D2C
    // 0x80068F3C: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    Math_SolvePlaneY(rdram, ctx);
        goto after_2;
    // 0x80068F3C: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    after_2:
    // 0x80068F40: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x80068F44: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x80068F48: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80068F4C: nop

    // 0x80068F50: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80068F54: nop

    // 0x80068F58: bc1f        L_80068F68
    if (!c1cs) {
        // 0x80068F5C: nop
    
            goto L_80068F68;
    }
    // 0x80068F5C: nop

    // 0x80068F60: b           L_80068F70
    // 0x80068F64: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
        goto L_80068F70;
    // 0x80068F64: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_80068F68:
    // 0x80068F68: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80068F6C: sw          $t2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r10;
L_80068F70:
    // 0x80068F70: sh          $zero, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = 0;
    // 0x80068F74: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x80068F78: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80068F7C: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x80068F80: lbu         $t4, 0x90($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X90);
    // 0x80068F84: nop

    // 0x80068F88: beq         $t4, $at, L_80069068
    if (ctx->r12 == ctx->r1) {
        // 0x80068F8C: nop
    
            goto L_80069068;
    }
    // 0x80068F8C: nop

    // 0x80068F90: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x80068F94: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80068F98: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80068F9C: addu        $t9, $sp, $t6
    ctx->r25 = ADD32(ctx->r29, ctx->r14);
    // 0x80068FA0: lw          $t9, 0x80($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X80);
    // 0x80068FA4: addu        $t8, $sp, $t6
    ctx->r24 = ADD32(ctx->r29, ctx->r14);
    // 0x80068FA8: lw          $t8, 0x88($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X88);
    // 0x80068FAC: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x80068FB0: sra         $t0, $t9, 31
    ctx->r8 = S32(SIGNED(ctx->r25) >> 31);
    // 0x80068FB4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80068FB8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80068FBC: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80068FC0: lw          $t7, 0x78($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X78);
    // 0x80068FC4: addu        $t4, $sp, $t6
    ctx->r12 = ADD32(ctx->r29, ctx->r14);
    // 0x80068FC8: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
    // 0x80068FCC: sra         $t2, $t7, 31
    ctx->r10 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80068FD0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80068FD4: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80068FD8: lw          $t4, 0x70($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X70);
    // 0x80068FDC: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80068FE0: sra         $a2, $t8, 31
    ctx->r6 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80068FE4: lwc1        $f14, 0xA8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80068FE8: sra         $t8, $t4, 31
    ctx->r24 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80068FEC: or          $t9, $t4, $zero
    ctx->r25 = ctx->r12 | 0;
    // 0x80068FF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80068FF4: jal         0x80015D2C
    // 0x80068FF8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    Math_SolvePlaneY(rdram, ctx);
        goto after_3;
    // 0x80068FF8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_3:
    // 0x80068FFC: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x80069000: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x80069004: nop

    // 0x80069008: bne         $t5, $zero, L_8006903C
    if (ctx->r13 != 0) {
        // 0x8006900C: nop
    
            goto L_8006903C;
    }
    // 0x8006900C: nop

    // 0x80069010: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80069014: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80069018: nop

    // 0x8006901C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80069020: nop

    // 0x80069024: bc1f        L_80069034
    if (!c1cs) {
        // 0x80069028: nop
    
            goto L_80069034;
    }
    // 0x80069028: nop

    // 0x8006902C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80069030: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
L_80069034:
    // 0x80069034: b           L_80069060
    // 0x80069038: nop

        goto L_80069060;
    // 0x80069038: nop

L_8006903C:
    // 0x8006903C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80069040: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80069044: nop

    // 0x80069048: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8006904C: nop

    // 0x80069050: bc1f        L_80069060
    if (!c1cs) {
        // 0x80069054: nop
    
            goto L_80069060;
    }
    // 0x80069054: nop

    // 0x80069058: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8006905C: sh          $t1, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r9;
L_80069060:
    // 0x80069060: b           L_80069070
    // 0x80069064: nop

        goto L_80069070;
    // 0x80069064: nop

L_80069068:
    // 0x80069068: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006906C: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
L_80069070:
    // 0x80069070: lh          $t2, 0x3E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X3E);
    // 0x80069074: nop

    // 0x80069078: beq         $t2, $zero, L_8006913C
    if (ctx->r10 == 0) {
        // 0x8006907C: nop
    
            goto L_8006913C;
    }
    // 0x8006907C: nop

    // 0x80069080: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x80069084: nop

    // 0x80069088: addu        $t6, $sp, $t3
    ctx->r14 = ADD32(ctx->r29, ctx->r11);
    // 0x8006908C: sb          $zero, 0x90($t6)
    MEM_B(0X90, ctx->r14) = 0;
    // 0x80069090: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x80069094: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80069098: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006909C: addu        $t5, $sp, $t9
    ctx->r13 = ADD32(ctx->r29, ctx->r25);
    // 0x800690A0: sw          $t4, 0x88($t5)
    MEM_W(0X88, ctx->r13) = ctx->r12;
    // 0x800690A4: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x800690A8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800690AC: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800690B0: addu        $t2, $sp, $t7
    ctx->r10 = ADD32(ctx->r29, ctx->r15);
    // 0x800690B4: sw          $t0, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->r8;
    // 0x800690B8: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x800690BC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800690C0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800690C4: addu        $t4, $sp, $t8
    ctx->r12 = ADD32(ctx->r29, ctx->r24);
    // 0x800690C8: sw          $t3, 0x78($t4)
    MEM_W(0X78, ctx->r12) = ctx->r11;
    // 0x800690CC: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x800690D0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x800690D4: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x800690D8: addu        $t0, $sp, $t1
    ctx->r8 = ADD32(ctx->r29, ctx->r9);
    // 0x800690DC: sw          $t9, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r25;
    // 0x800690E0: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x800690E4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x800690E8: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800690EC: addu        $t3, $sp, $t6
    ctx->r11 = ADD32(ctx->r29, ctx->r14);
    // 0x800690F0: sw          $t7, 0x68($t3)
    MEM_W(0X68, ctx->r11) = ctx->r15;
    // 0x800690F4: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x800690F8: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800690FC: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80069100: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x80069104: swc1        $f4, 0x60($t5)
    MEM_W(0X60, ctx->r13) = ctx->f4.u32l;
    // 0x80069108: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8006910C: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x80069110: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80069114: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80069118: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x8006911C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80069120: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80069124: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80069128: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8006912C: lh          $t0, 0x6610($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X6610);
    // 0x80069130: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80069134: addu        $t6, $sp, $t7
    ctx->r14 = ADD32(ctx->r29, ctx->r15);
    // 0x80069138: sw          $t0, 0x58($t6)
    MEM_W(0X58, ctx->r14) = ctx->r8;
L_8006913C:
    // 0x8006913C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80069140: nop

    // 0x80069144: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x80069148: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x8006914C: bne         $at, $zero, L_80068D70
    if (ctx->r1 != 0) {
        // 0x80069150: sw          $t8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r24;
            goto L_80068D70;
    }
    // 0x80069150: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_80069154:
    // 0x80069154: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x80069158: nop

    // 0x8006915C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80069160: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x80069164: bne         $at, $zero, L_80068CF4
    if (ctx->r1 != 0) {
        // 0x80069168: sw          $t5, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r13;
            goto L_80068CF4;
    }
    // 0x80069168: sw          $t5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r13;
    // 0x8006916C: addiu       $t9, $sp, 0x90
    ctx->r25 = ADD32(ctx->r29, 0X90);
    // 0x80069170: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x80069174: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80069178: bne         $t1, $at, L_800691C4
    if (ctx->r9 != ctx->r1) {
        // 0x8006917C: nop
    
            goto L_800691C4;
    }
    // 0x8006917C: nop

    // 0x80069180: addiu       $t2, $sp, 0x88
    ctx->r10 = ADD32(ctx->r29, 0X88);
    // 0x80069184: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x80069188: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8006918C: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x80069190: sw          $t0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r8;
    // 0x80069194: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x80069198: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8006919C: addiu       $t3, $zero, -0x7530
    ctx->r11 = ADD32(0, -0X7530);
    // 0x800691A0: addiu       $t8, $sp, 0x70
    ctx->r24 = ADD32(ctx->r29, 0X70);
    // 0x800691A4: sw          $t3, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r11;
    // 0x800691A8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800691AC: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x800691B0: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x800691B4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800691B8: lwc1        $f6, 0x4F80($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F80);
    // 0x800691BC: addiu       $t9, $sp, 0x60
    ctx->r25 = ADD32(ctx->r29, 0X60);
    // 0x800691C0: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
L_800691C4:
    // 0x800691C4: addiu       $t1, $sp, 0x90
    ctx->r9 = ADD32(ctx->r29, 0X90);
    // 0x800691C8: lbu         $t2, 0x1($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X1);
    // 0x800691CC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800691D0: bne         $t2, $at, L_8006921C
    if (ctx->r10 != ctx->r1) {
        // 0x800691D4: nop
    
            goto L_8006921C;
    }
    // 0x800691D4: nop

    // 0x800691D8: addiu       $t0, $sp, 0x88
    ctx->r8 = ADD32(ctx->r29, 0X88);
    // 0x800691DC: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800691E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800691E4: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x800691E8: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x800691EC: addiu       $t3, $sp, 0x78
    ctx->r11 = ADD32(ctx->r29, 0X78);
    // 0x800691F0: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x800691F4: addiu       $t8, $zero, 0x7530
    ctx->r24 = ADD32(0, 0X7530);
    // 0x800691F8: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x800691FC: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x80069200: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80069204: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x80069208: sw          $t5, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r13;
    // 0x8006920C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80069210: lwc1        $f8, 0x4F84($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F84);
    // 0x80069214: addiu       $t1, $sp, 0x60
    ctx->r9 = ADD32(ctx->r29, 0X60);
    // 0x80069218: swc1        $f8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f8.u32l;
L_8006921C:
    // 0x8006921C: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_80069220:
    // 0x80069220: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x80069224: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069228: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x8006922C: addu        $t7, $sp, $t0
    ctx->r15 = ADD32(ctx->r29, ctx->r8);
    // 0x80069230: lw          $t7, 0x88($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X88);
    // 0x80069234: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80069238: sw          $t7, 0x7780($at)
    MEM_W(0X7780, ctx->r1) = ctx->r15;
    // 0x8006923C: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80069240: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069244: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x80069248: addu        $t8, $sp, $t3
    ctx->r24 = ADD32(ctx->r29, ctx->r11);
    // 0x8006924C: lw          $t8, 0x80($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X80);
    // 0x80069250: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80069254: sw          $t8, 0x7790($at)
    MEM_W(0X7790, ctx->r1) = ctx->r24;
    // 0x80069258: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x8006925C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069260: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80069264: addu        $t9, $sp, $t5
    ctx->r25 = ADD32(ctx->r29, ctx->r13);
    // 0x80069268: lw          $t9, 0x78($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X78);
    // 0x8006926C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80069270: sw          $t9, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = ctx->r25;
    // 0x80069274: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x80069278: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006927C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80069280: addu        $t7, $sp, $t2
    ctx->r15 = ADD32(ctx->r29, ctx->r10);
    // 0x80069284: lw          $t7, 0x70($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X70);
    // 0x80069288: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8006928C: sw          $t7, 0x77B0($at)
    MEM_W(0X77B0, ctx->r1) = ctx->r15;
    // 0x80069290: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x80069294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80069298: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x8006929C: addu        $t8, $sp, $t6
    ctx->r24 = ADD32(ctx->r29, ctx->r14);
    // 0x800692A0: lw          $t8, 0x68($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X68);
    // 0x800692A4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800692A8: sw          $t8, 0x77C0($at)
    MEM_W(0X77C0, ctx->r1) = ctx->r24;
    // 0x800692AC: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x800692B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800692B4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800692B8: addu        $t9, $sp, $t4
    ctx->r25 = ADD32(ctx->r29, ctx->r12);
    // 0x800692BC: lwc1        $f10, 0x60($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X60);
    // 0x800692C0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800692C4: swc1        $f10, 0x77D0($at)
    MEM_W(0X77D0, ctx->r1) = ctx->f10.u32l;
    // 0x800692C8: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x800692CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800692D0: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x800692D4: addu        $t7, $sp, $t1
    ctx->r15 = ADD32(ctx->r29, ctx->r9);
    // 0x800692D8: lw          $t7, 0x58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X58);
    // 0x800692DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800692E0: sw          $t7, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = ctx->r15;
    // 0x800692E4: lw          $t2, 0x94($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X94);
    // 0x800692E8: nop

    // 0x800692EC: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x800692F0: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800692F4: bne         $at, $zero, L_80069220
    if (ctx->r1 != 0) {
        // 0x800692F8: sw          $t0, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r8;
            goto L_80069220;
    }
    // 0x800692F8: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x800692FC: b           L_80069304
    // 0x80069300: nop

        goto L_80069304;
    // 0x80069300: nop

L_80069304:
    // 0x80069304: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80069308: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8006930C: jr          $ra
    // 0x80069310: nop

    return;
    // 0x80069310: nop

;}
RECOMP_FUNC void func_800B09C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B09C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B09CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B09D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B09D4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B09D8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B09DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B09E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B09E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B09E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B09EC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B09F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B09F4: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800B09F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B09FC: bne         $t8, $at, L_800B0A60
    if (ctx->r24 != ctx->r1) {
        // 0x800B0A00: nop
    
            goto L_800B0A60;
    }
    // 0x800B0A00: nop

    // 0x800B0A04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800B0A08: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800B0A0C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800B0A10: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800B0A14: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B0A18: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B0A1C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800B0A20: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B0A24: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800B0A28: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x800B0A2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B0A30: bne         $t1, $at, L_800B0A50
    if (ctx->r9 != ctx->r1) {
        // 0x800B0A34: nop
    
            goto L_800B0A50;
    }
    // 0x800B0A34: nop

    // 0x800B0A38: b           L_800B0A40
    // 0x800B0A3C: nop

        goto L_800B0A40;
    // 0x800B0A3C: nop

L_800B0A40:
    // 0x800B0A40: jal         0x800B068C
    // 0x800B0A44: nop

    func_800B068C(rdram, ctx);
        goto after_0;
    // 0x800B0A44: nop

    after_0:
    // 0x800B0A48: b           L_800B0A60
    // 0x800B0A4C: nop

        goto L_800B0A60;
    // 0x800B0A4C: nop

L_800B0A50:
    // 0x800B0A50: jal         0x800B08FC
    // 0x800B0A54: nop

    func_800B08FC(rdram, ctx);
        goto after_1;
    // 0x800B0A54: nop

    after_1:
    // 0x800B0A58: b           L_800B0A60
    // 0x800B0A5C: nop

        goto L_800B0A60;
    // 0x800B0A5C: nop

L_800B0A60:
    // 0x800B0A60: b           L_800B0A68
    // 0x800B0A64: nop

        goto L_800B0A68;
    // 0x800B0A64: nop

L_800B0A68:
    // 0x800B0A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B0A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B0A70: jr          $ra
    // 0x800B0A74: nop

    return;
    // 0x800B0A74: nop

;}
RECOMP_FUNC void func_800E3704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800E3708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E370C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3714: jal         0x8002B0E4
    // 0x800E3718: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800E3718: nop

    after_0:
    // 0x800E371C: b           L_800E3724
    // 0x800E3720: nop

        goto L_800E3724;
    // 0x800E3720: nop

L_800E3724:
    // 0x800E3724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E3728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800E372C: jr          $ra
    // 0x800E3730: nop

    return;
    // 0x800E3730: nop

;}
RECOMP_FUNC void func_800D9650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D9654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D9658: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D965C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D9660: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D9664: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D9668: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D966C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D9670: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9674: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D9678: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D967C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800D9680: nop

    // 0x800D9684: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800D9688: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x800D968C: beq         $at, $zero, L_800D9700
    if (ctx->r1 == 0) {
        // 0x800D9690: nop
    
            goto L_800D9700;
    }
    // 0x800D9690: nop

    // 0x800D9694: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D9698: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D969C: addu        $at, $at, $t9
    gpr jr_addend_800D96A8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D96A0: lw          $t9, 0x5134($at)
    ctx->r25 = ADD32(ctx->r1, 0X5134);
    // 0x800D96A4: nop

    // 0x800D96A8: jr          $t9
    // 0x800D96AC: nop

    switch (jr_addend_800D96A8 >> 2) {
        case 0: goto L_800D96B0; break;
        case 1: goto L_800D96C0; break;
        case 2: goto L_800D96D0; break;
        case 3: goto L_800D96E0; break;
        case 4: goto L_800D96F0; break;
        default: switch_error(__func__, 0x800D96A8, 0x80115134);
    }
    // 0x800D96AC: nop

L_800D96B0:
    // 0x800D96B0: jal         0x800D9134
    // 0x800D96B4: nop

    func_800D9134(rdram, ctx);
        goto after_0;
    // 0x800D96B4: nop

    after_0:
    // 0x800D96B8: b           L_800D9708
    // 0x800D96BC: nop

        goto L_800D9708;
    // 0x800D96BC: nop

L_800D96C0:
    // 0x800D96C0: jal         0x800D9298
    // 0x800D96C4: nop

    func_800D9298(rdram, ctx);
        goto after_1;
    // 0x800D96C4: nop

    after_1:
    // 0x800D96C8: b           L_800D9708
    // 0x800D96CC: nop

        goto L_800D9708;
    // 0x800D96CC: nop

L_800D96D0:
    // 0x800D96D0: jal         0x800D9420
    // 0x800D96D4: nop

    func_800D9420(rdram, ctx);
        goto after_2;
    // 0x800D96D4: nop

    after_2:
    // 0x800D96D8: b           L_800D9708
    // 0x800D96DC: nop

        goto L_800D9708;
    // 0x800D96DC: nop

L_800D96E0:
    // 0x800D96E0: jal         0x800D9520
    // 0x800D96E4: nop

    func_800D9520(rdram, ctx);
        goto after_3;
    // 0x800D96E4: nop

    after_3:
    // 0x800D96E8: b           L_800D9708
    // 0x800D96EC: nop

        goto L_800D9708;
    // 0x800D96EC: nop

L_800D96F0:
    // 0x800D96F0: jal         0x800D9620
    // 0x800D96F4: nop

    func_800D9620(rdram, ctx);
        goto after_4;
    // 0x800D96F4: nop

    after_4:
    // 0x800D96F8: b           L_800D9708
    // 0x800D96FC: nop

        goto L_800D9708;
    // 0x800D96FC: nop

L_800D9700:
    // 0x800D9700: b           L_800D9708
    // 0x800D9704: nop

        goto L_800D9708;
    // 0x800D9704: nop

L_800D9708:
    // 0x800D9708: b           L_800D9710
    // 0x800D970C: nop

        goto L_800D9710;
    // 0x800D970C: nop

L_800D9710:
    // 0x800D9710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D9714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D9718: jr          $ra
    // 0x800D971C: nop

    return;
    // 0x800D971C: nop

;}
