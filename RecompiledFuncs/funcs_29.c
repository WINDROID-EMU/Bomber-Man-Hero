#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800D660C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D660C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6610: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D6614: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D6618: bne         $t6, $at, L_800D6674
    if (ctx->r14 != ctx->r1) {
        // 0x800D661C: nop
    
            goto L_800D6674;
    }
    // 0x800D661C: nop

    // 0x800D6620: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D6624: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D6628: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D662C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D6630: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D6634: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D6638: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D663C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D6640: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D6644: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800D6648: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800D664C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D6650: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D6654: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D6658: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D665C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D6660: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D6664: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D6668: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D666C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D6670: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D6674:
    // 0x800D6674: jr          $ra
    // 0x800D6678: nop

    return;
    // 0x800D6678: nop

    // 0x800D667C: jr          $ra
    // 0x800D6680: nop

    return;
    // 0x800D6680: nop

;}
RECOMP_FUNC void func_800F90A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F90A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F90AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F90B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F90B4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F90B8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F90BC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F90C0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F90C4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F90C8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F90CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F90D0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F90D4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F90D8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F90DC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F90E0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F90E4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F90E8: addiu       $a1, $a1, 0x37D8
    ctx->r5 = ADD32(ctx->r5, 0X37D8);
    // 0x800F90EC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F90F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F90F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F90F8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F90FC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F9100: jal         0x80027464
    // 0x800F9104: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F9104: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F9108: b           L_800F9110
    // 0x800F910C: nop

        goto L_800F9110;
    // 0x800F910C: nop

L_800F9110:
    // 0x800F9110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F9118: jr          $ra
    // 0x800F911C: nop

    return;
    // 0x800F911C: nop

;}
RECOMP_FUNC void func_800B0008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B000C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B0010: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B0014: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B0018: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B001C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B0020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B0024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B0028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B002C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B0030: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B0034: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B0038: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B003C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0040: nop

    // 0x800B0044: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B0048: nop

    // 0x800B004C: bne         $t1, $zero, L_800B008C
    if (ctx->r9 != 0) {
        // 0x800B0050: nop
    
            goto L_800B008C;
    }
    // 0x800B0050: nop

    // 0x800B0054: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0058: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B005C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B0060: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B0064: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0068: nop

    // 0x800B006C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B0070: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B0074: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0078: nop

    // 0x800B007C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B0080: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800B0084: nop

    // 0x800B0088: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800B008C:
    // 0x800B008C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0090: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0094: jal         0x80029C40
    // 0x800B0098: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800B0098: nop

    after_0:
    // 0x800B009C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B00A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B00A4: jal         0x80029D04
    // 0x800B00A8: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800B00A8: nop

    after_1:
    // 0x800B00AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B00B0: nop

    // 0x800B00B4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800B00B8: nop

    // 0x800B00BC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800B00C0: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800B00C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B00C8: nop

    // 0x800B00CC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800B00D0: nop

    // 0x800B00D4: slti        $at, $t1, 0x78
    ctx->r1 = SIGNED(ctx->r9) < 0X78 ? 1 : 0;
    // 0x800B00D8: bne         $at, $zero, L_800B00F8
    if (ctx->r1 != 0) {
        // 0x800B00DC: nop
    
            goto L_800B00F8;
    }
    // 0x800B00DC: nop

    // 0x800B00E0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B00E4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800B00E8: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800B00EC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B00F0: nop

    // 0x800B00F4: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800B00F8:
    // 0x800B00F8: b           L_800B0100
    // 0x800B00FC: nop

        goto L_800B0100;
    // 0x800B00FC: nop

L_800B0100:
    // 0x800B0100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B0104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B0108: jr          $ra
    // 0x800B010C: nop

    return;
    // 0x800B010C: nop

;}
RECOMP_FUNC void func_8007FC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FC98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007FC9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007FCA0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007FCA4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007FCA8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007FCAC: jal         0x80014E80
    // 0x8007FCB0: addiu       $a0, $zero, -0x7
    ctx->r4 = ADD32(0, -0X7);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8007FCB0: addiu       $a0, $zero, -0x7
    ctx->r4 = ADD32(0, -0X7);
    after_0:
    // 0x8007FCB4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8007FCB8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007FCBC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007FCC0: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x8007FCC4: jal         0x80014E80
    // 0x8007FCC8: addiu       $a0, $zero, -0x7
    ctx->r4 = ADD32(0, -0X7);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x8007FCC8: addiu       $a0, $zero, -0x7
    ctx->r4 = ADD32(0, -0X7);
    after_1:
    // 0x8007FCCC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8007FCD0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007FCD4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007FCD8: swc1        $f10, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f10.u32l;
    // 0x8007FCDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007FCE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007FCE4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8007FCE8: nop

    // 0x8007FCEC: swc1        $f16, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f16.u32l;
    // 0x8007FCF0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8007FCF4: nop

    // 0x8007FCF8: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8007FCFC: nop

    // 0x8007FD00: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x8007FD04: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8007FD08: nop

    // 0x8007FD0C: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x8007FD10: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8007FD14: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x8007FD18: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x8007FD1C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8007FD20: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8007FD24: sh          $t3, 0xBE($t4)
    MEM_H(0XBE, ctx->r12) = ctx->r11;
    // 0x8007FD28: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8007FD2C: nop

    // 0x8007FD30: sh          $zero, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = 0;
    // 0x8007FD34: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8007FD38: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x8007FD3C: sh          $t6, 0xC2($t7)
    MEM_H(0XC2, ctx->r15) = ctx->r14;
    // 0x8007FD40: b           L_8007FD48
    // 0x8007FD44: nop

        goto L_8007FD48;
    // 0x8007FD44: nop

L_8007FD48:
    // 0x8007FD48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FD4C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007FD50: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007FD54: jr          $ra
    // 0x8007FD58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007FD58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80098590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80098598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8009859C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800985A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800985A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800985A8: jal         0x8001B6BC
    // 0x800985AC: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x800985AC: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_0:
    // 0x800985B0: b           L_800985B8
    // 0x800985B4: nop

        goto L_800985B8;
    // 0x800985B4: nop

L_800985B8:
    // 0x800985B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800985BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800985C0: jr          $ra
    // 0x800985C4: nop

    return;
    // 0x800985C4: nop

;}
RECOMP_FUNC void func_800EE7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE7A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EE7A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EE7AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EE7B0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EE7B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EE7B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EE7BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE7C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EE7C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE7C8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EE7CC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EE7D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EE7D4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800EE7D8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE7DC: nop

    // 0x800EE7E0: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800EE7E4: nop

    // 0x800EE7E8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800EE7EC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE7F0: nop

    // 0x800EE7F4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EE7F8: nop

    // 0x800EE7FC: bne         $t3, $zero, L_800EE970
    if (ctx->r11 != 0) {
        // 0x800EE800: nop
    
            goto L_800EE970;
    }
    // 0x800EE800: nop

    // 0x800EE804: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE808: nop

    // 0x800EE80C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EE810: nop

    // 0x800EE814: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EE818: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EE81C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE820: nop

    // 0x800EE824: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800EE828: nop

    // 0x800EE82C: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800EE830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE834: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800EE838: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800EE83C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE840: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800EE844: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EE848: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EE84C: jal         0x8001C0EC
    // 0x800EE850: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EE850: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800EE854: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800EE858: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800EE85C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EE860: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800EE864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EE868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EE86C: jal         0x8001C0EC
    // 0x800EE870: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EE870: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800EE874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE878: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EE87C: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EE880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE884: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EE888: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EE88C: jal         0x8001ABF4
    // 0x800EE890: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EE890: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800EE894: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EE898: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EE89C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800EE8A0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800EE8A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EE8A8: jal         0x8001ABF4
    // 0x800EE8AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800EE8AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800EE8B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE8B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EE8B8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE8BC: nop

    // 0x800EE8C0: swc1        $f4, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f4.u32l;
    // 0x800EE8C4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE8C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800EE8CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE8D0: nop

    // 0x800EE8D4: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800EE8D8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE8DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EE8E0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE8E4: nop

    // 0x800EE8E8: swc1        $f8, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f8.u32l;
    // 0x800EE8EC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800EE8F0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE8F4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800EE8F8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800EE8FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EE900: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800EE904: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800EE908: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EE90C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE910: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800EE914: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x800EE918: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800EE91C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE920: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800EE924: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800EE928: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EE92C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800EE930: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800EE934: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EE938: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE93C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800EE940: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x800EE944: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800EE948: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800EE94C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800EE950: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EE954: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800EE958: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EE95C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800EE960: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800EE964: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE968: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800EE96C: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
L_800EE970:
    // 0x800EE970: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EE974: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EE978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE97C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE980: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800EE984: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800EE988: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EE98C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EE990: jal         0x800295C0
    // 0x800EE994: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800EE994: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800EE998: beq         $v0, $zero, L_800EE9B0
    if (ctx->r2 == 0) {
        // 0x800EE99C: nop
    
            goto L_800EE9B0;
    }
    // 0x800EE99C: nop

    // 0x800EE9A0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800EE9A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE9A8: b           L_800EE9C0
    // 0x800EE9AC: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_800EE9C0;
    // 0x800EE9AC: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800EE9B0:
    // 0x800EE9B0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE9B4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE9B8: nop

    // 0x800EE9BC: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800EE9C0:
    // 0x800EE9C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE9C4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800EE9C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EE9CC: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800EE9D0: nop

    // 0x800EE9D4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EE9D8: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
    // 0x800EE9DC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800EE9E0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800EE9E4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800EE9E8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800EE9EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EE9F0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800EE9F4: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800EE9F8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EE9FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EEA00: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800EEA04: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800EEA08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EEA0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EEA10: jal         0x8002A1FC
    // 0x800EEA14: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800EEA14: lui         $a1, 0x4452
    ctx->r5 = S32(0X4452 << 16);
    after_5:
    // 0x800EEA18: beq         $v0, $zero, L_800EEA38
    if (ctx->r2 == 0) {
        // 0x800EEA1C: nop
    
            goto L_800EEA38;
    }
    // 0x800EEA1C: nop

    // 0x800EEA20: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEA24: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800EEA28: sh          $t4, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r12;
    // 0x800EEA2C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EEA30: nop

    // 0x800EEA34: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800EEA38:
    // 0x800EEA38: b           L_800EEA40
    // 0x800EEA3C: nop

        goto L_800EEA40;
    // 0x800EEA3C: nop

L_800EEA40:
    // 0x800EEA40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EEA44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EEA48: jr          $ra
    // 0x800EEA4C: nop

    return;
    // 0x800EEA4C: nop

;}
RECOMP_FUNC void Demo_Start(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005E230: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005E234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005E238: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005E23C: jal         0x8001ECB8
    // 0x8005E240: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x8005E240: nop

    after_0:
    // 0x8005E244: lui         $t6, 0x8006
    ctx->r14 = S32(0X8006 << 16);
    // 0x8005E248: addiu       $t6, $t6, -0x1FC0
    ctx->r14 = ADD32(ctx->r14, -0X1FC0);
    // 0x8005E24C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8005E250: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x8005E254: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x8005E258: addiu       $t7, $t7, -0x2280
    ctx->r15 = ADD32(ctx->r15, -0X2280);
    // 0x8005E25C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8005E260: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x8005E264: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005E268: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E26C: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x8005E270: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8005E274: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E278: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x8005E27C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8005E280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E284: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x8005E288: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8005E28C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E290: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
    // 0x8005E294: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8005E298: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E29C: swc1        $f16, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f16.u32l;
    // 0x8005E2A0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8005E2A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E2A8: swc1        $f18, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f18.u32l;
    // 0x8005E2AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005E2B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E2B4: swc1        $f4, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f4.u32l;
    // 0x8005E2B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005E2BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005E2C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E2C4: swc1        $f6, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f6.u32l;
    // 0x8005E2C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8005E2CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E2D0: swc1        $f8, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f8.u32l;
    // 0x8005E2D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005E2D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8005E2DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005E2E0: swc1        $f10, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f10.u32l;
    // 0x8005E2E4: jal         0x80019B7C
    // 0x8005E2E8: nop

    func_80019B7C(rdram, ctx);
        goto after_1;
    // 0x8005E2E8: nop

    after_1:
    // 0x8005E2EC: jal         0x80019C84
    // 0x8005E2F0: nop

    func_80019C84(rdram, ctx);
        goto after_2;
    // 0x8005E2F0: nop

    after_2:
    // 0x8005E2F4: jal         0x80019D2C
    // 0x8005E2F8: nop

    func_80019D2C(rdram, ctx);
        goto after_3;
    // 0x8005E2F8: nop

    after_3:
    // 0x8005E2FC: jal         0x8001A258
    // 0x8005E300: nop

    func_8001A258(rdram, ctx);
        goto after_4;
    // 0x8005E300: nop

    after_4:
    // 0x8005E304: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8005E308: jal         0x8001E954
    // 0x8005E30C: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    Set_DecompressHeap(rdram, ctx);
        goto after_5;
    // 0x8005E30C: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    after_5:
    // 0x8005E310: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x8005E314: lui         $a2, 0x13
    ctx->r6 = S32(0X13 << 16);
    // 0x8005E318: addiu       $a2, $a2, -0x72E0
    ctx->r6 = ADD32(ctx->r6, -0X72E0);
    // 0x8005E31C: addiu       $a1, $a1, 0x7FF0
    ctx->r5 = ADD32(ctx->r5, 0X7FF0);
    // 0x8005E320: jal         0x8001E98C
    // 0x8005E324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LoadFile(rdram, ctx);
        goto after_6;
    // 0x8005E324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x8005E328: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x8005E32C: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x8005E330: addiu       $a2, $a2, -0x13A0
    ctx->r6 = ADD32(ctx->r6, -0X13A0);
    // 0x8005E334: addiu       $a1, $a1, -0x3C40
    ctx->r5 = ADD32(ctx->r5, -0X3C40);
    // 0x8005E338: jal         0x8001EA68
    // 0x8005E33C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    DecompressFile(rdram, ctx);
        goto after_7;
    // 0x8005E33C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x8005E340: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005E344: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E348: sb          $t8, 0x4790($at)
    MEM_B(0X4790, ctx->r1) = ctx->r24;
    // 0x8005E34C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005E350: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E354: sb          $t9, 0x4799($at)
    MEM_B(0X4799, ctx->r1) = ctx->r25;
    // 0x8005E358: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005E35C: lb          $t0, 0x4799($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4799);
    // 0x8005E360: nop

    // 0x8005E364: bne         $t0, $zero, L_8005E39C
    if (ctx->r8 != 0) {
        // 0x8005E368: nop
    
            goto L_8005E39C;
    }
    // 0x8005E368: nop

    // 0x8005E36C: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8005E370: addiu       $t1, $t1, 0x1F18
    ctx->r9 = ADD32(ctx->r9, 0X1F18);
    // 0x8005E374: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E378: sw          $t1, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r9;
    // 0x8005E37C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E380: sb          $zero, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = 0;
    // 0x8005E384: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x8005E388: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E38C: jal         0x80016F38
    // 0x8005E390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_8;
    // 0x8005E390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8005E394: b           L_8005E618
    // 0x8005E398: nop

        goto L_8005E618;
    // 0x8005E398: nop

L_8005E39C:
    // 0x8005E39C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005E3A0: lb          $t2, 0x4799($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4799);
    // 0x8005E3A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005E3A8: bne         $t2, $at, L_8005E3E0
    if (ctx->r10 != ctx->r1) {
        // 0x8005E3AC: nop
    
            goto L_8005E3E0;
    }
    // 0x8005E3AC: nop

    // 0x8005E3B0: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8005E3B4: addiu       $t3, $t3, 0x1A14
    ctx->r11 = ADD32(ctx->r11, 0X1A14);
    // 0x8005E3B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E3BC: sw          $t3, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r11;
    // 0x8005E3C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E3C4: sb          $zero, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = 0;
    // 0x8005E3C8: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x8005E3CC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E3D0: jal         0x80016F38
    // 0x8005E3D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_9;
    // 0x8005E3D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8005E3D8: b           L_8005E618
    // 0x8005E3DC: nop

        goto L_8005E618;
    // 0x8005E3DC: nop

L_8005E3E0:
    // 0x8005E3E0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005E3E4: lb          $t4, 0x4799($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4799);
    // 0x8005E3E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005E3EC: bne         $t4, $at, L_8005E42C
    if (ctx->r12 != ctx->r1) {
        // 0x8005E3F0: nop
    
            goto L_8005E42C;
    }
    // 0x8005E3F0: nop

    // 0x8005E3F4: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8005E3F8: addiu       $t5, $t5, 0x720
    ctx->r13 = ADD32(ctx->r13, 0X720);
    // 0x8005E3FC: addiu       $t6, $t5, 0x1B8
    ctx->r14 = ADD32(ctx->r13, 0X1B8);
    // 0x8005E400: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E404: sw          $t6, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r14;
    // 0x8005E408: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8005E40C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E410: sb          $t7, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = ctx->r15;
    // 0x8005E414: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x8005E418: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E41C: jal         0x80016F38
    // 0x8005E420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_10;
    // 0x8005E420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x8005E424: b           L_8005E618
    // 0x8005E428: nop

        goto L_8005E618;
    // 0x8005E428: nop

L_8005E42C:
    // 0x8005E42C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005E430: lb          $t8, 0x4799($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4799);
    // 0x8005E434: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005E438: bne         $t8, $at, L_8005E478
    if (ctx->r24 != ctx->r1) {
        // 0x8005E43C: nop
    
            goto L_8005E478;
    }
    // 0x8005E43C: nop

    // 0x8005E440: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x8005E444: addiu       $t9, $t9, 0xA90
    ctx->r25 = ADD32(ctx->r25, 0XA90);
    // 0x8005E448: addiu       $t0, $t9, 0x1B8
    ctx->r8 = ADD32(ctx->r25, 0X1B8);
    // 0x8005E44C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E450: sw          $t0, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r8;
    // 0x8005E454: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8005E458: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E45C: sb          $t1, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = ctx->r9;
    // 0x8005E460: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x8005E464: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E468: jal         0x80016F38
    // 0x8005E46C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_11;
    // 0x8005E46C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8005E470: b           L_8005E618
    // 0x8005E474: nop

        goto L_8005E618;
    // 0x8005E474: nop

L_8005E478:
    // 0x8005E478: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005E47C: lb          $t2, 0x4799($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4799);
    // 0x8005E480: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8005E484: bne         $t2, $at, L_8005E4C4
    if (ctx->r10 != ctx->r1) {
        // 0x8005E488: nop
    
            goto L_8005E4C4;
    }
    // 0x8005E488: nop

    // 0x8005E48C: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8005E490: addiu       $t3, $t3, 0xE00
    ctx->r11 = ADD32(ctx->r11, 0XE00);
    // 0x8005E494: addiu       $t4, $t3, 0x1B8
    ctx->r12 = ADD32(ctx->r11, 0X1B8);
    // 0x8005E498: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E49C: sw          $t4, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r12;
    // 0x8005E4A0: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8005E4A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E4A8: sb          $t5, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = ctx->r13;
    // 0x8005E4AC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x8005E4B0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E4B4: jal         0x80016F38
    // 0x8005E4B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_12;
    // 0x8005E4B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x8005E4BC: b           L_8005E618
    // 0x8005E4C0: nop

        goto L_8005E618;
    // 0x8005E4C0: nop

L_8005E4C4:
    // 0x8005E4C4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005E4C8: lb          $t6, 0x4799($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4799);
    // 0x8005E4CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8005E4D0: bne         $t6, $at, L_8005E510
    if (ctx->r14 != ctx->r1) {
        // 0x8005E4D4: nop
    
            goto L_8005E510;
    }
    // 0x8005E4D4: nop

    // 0x8005E4D8: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8005E4DC: addiu       $t7, $t7, 0x1170
    ctx->r15 = ADD32(ctx->r15, 0X1170);
    // 0x8005E4E0: addiu       $t8, $t7, 0x1B8
    ctx->r24 = ADD32(ctx->r15, 0X1B8);
    // 0x8005E4E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E4E8: sw          $t8, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r24;
    // 0x8005E4EC: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8005E4F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E4F4: sb          $t9, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = ctx->r25;
    // 0x8005E4F8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x8005E4FC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E500: jal         0x80016F38
    // 0x8005E504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_13;
    // 0x8005E504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x8005E508: b           L_8005E618
    // 0x8005E50C: nop

        goto L_8005E618;
    // 0x8005E50C: nop

L_8005E510:
    // 0x8005E510: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005E514: lb          $t0, 0x4799($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4799);
    // 0x8005E518: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8005E51C: bne         $t0, $at, L_8005E554
    if (ctx->r8 != ctx->r1) {
        // 0x8005E520: nop
    
            goto L_8005E554;
    }
    // 0x8005E520: nop

    // 0x8005E524: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8005E528: addiu       $t1, $t1, 0x720
    ctx->r9 = ADD32(ctx->r9, 0X720);
    // 0x8005E52C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E530: sw          $t1, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r9;
    // 0x8005E534: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E538: sb          $zero, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = 0;
    // 0x8005E53C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8005E540: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E544: jal         0x80016F38
    // 0x8005E548: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_14;
    // 0x8005E548: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x8005E54C: b           L_8005E618
    // 0x8005E550: nop

        goto L_8005E618;
    // 0x8005E550: nop

L_8005E554:
    // 0x8005E554: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005E558: lb          $t2, 0x4799($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4799);
    // 0x8005E55C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8005E560: bne         $t2, $at, L_8005E598
    if (ctx->r10 != ctx->r1) {
        // 0x8005E564: nop
    
            goto L_8005E598;
    }
    // 0x8005E564: nop

    // 0x8005E568: lui         $t3, 0x8010
    ctx->r11 = S32(0X8010 << 16);
    // 0x8005E56C: addiu       $t3, $t3, 0xA90
    ctx->r11 = ADD32(ctx->r11, 0XA90);
    // 0x8005E570: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E574: sw          $t3, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r11;
    // 0x8005E578: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E57C: sb          $zero, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = 0;
    // 0x8005E580: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8005E584: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E588: jal         0x80016F38
    // 0x8005E58C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_15;
    // 0x8005E58C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x8005E590: b           L_8005E618
    // 0x8005E594: nop

        goto L_8005E618;
    // 0x8005E594: nop

L_8005E598:
    // 0x8005E598: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8005E59C: lb          $t4, 0x4799($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X4799);
    // 0x8005E5A0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8005E5A4: bne         $t4, $at, L_8005E5DC
    if (ctx->r12 != ctx->r1) {
        // 0x8005E5A8: nop
    
            goto L_8005E5DC;
    }
    // 0x8005E5A8: nop

    // 0x8005E5AC: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x8005E5B0: addiu       $t5, $t5, 0xE00
    ctx->r13 = ADD32(ctx->r13, 0XE00);
    // 0x8005E5B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E5B8: sw          $t5, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r13;
    // 0x8005E5BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E5C0: sb          $zero, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = 0;
    // 0x8005E5C4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8005E5C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E5CC: jal         0x80016F38
    // 0x8005E5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_16;
    // 0x8005E5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x8005E5D4: b           L_8005E618
    // 0x8005E5D8: nop

        goto L_8005E618;
    // 0x8005E5D8: nop

L_8005E5DC:
    // 0x8005E5DC: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005E5E0: lb          $t6, 0x4799($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X4799);
    // 0x8005E5E4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8005E5E8: bne         $t6, $at, L_8005E618
    if (ctx->r14 != ctx->r1) {
        // 0x8005E5EC: nop
    
            goto L_8005E618;
    }
    // 0x8005E5EC: nop

    // 0x8005E5F0: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8005E5F4: addiu       $t7, $t7, 0x1170
    ctx->r15 = ADD32(ctx->r15, 0X1170);
    // 0x8005E5F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E5FC: sw          $t7, 0x4794($at)
    MEM_W(0X4794, ctx->r1) = ctx->r15;
    // 0x8005E600: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E604: sb          $zero, 0x4798($at)
    MEM_B(0X4798, ctx->r1) = 0;
    // 0x8005E608: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x8005E60C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005E610: jal         0x80016F38
    // 0x8005E614: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_17;
    // 0x8005E614: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
L_8005E618:
    // 0x8005E618: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E61C: sw          $zero, 0x47B0($at)
    MEM_W(0X47B0, ctx->r1) = 0;
    // 0x8005E620: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E624: sb          $zero, 0x47E4($at)
    MEM_B(0X47E4, ctx->r1) = 0;
    // 0x8005E628: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E62C: sb          $zero, 0x47E5($at)
    MEM_B(0X47E5, ctx->r1) = 0;
    // 0x8005E630: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E634: sb          $zero, 0x47E6($at)
    MEM_B(0X47E6, ctx->r1) = 0;
    // 0x8005E638: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E63C: sw          $zero, 0x47E8($at)
    MEM_W(0X47E8, ctx->r1) = 0;
    // 0x8005E640: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x8005E644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E648: sh          $t8, 0x47EC($at)
    MEM_H(0X47EC, ctx->r1) = ctx->r24;
    // 0x8005E64C: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x8005E650: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E654: sh          $t9, 0x47EE($at)
    MEM_H(0X47EE, ctx->r1) = ctx->r25;
    // 0x8005E658: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8005E65C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005E660: sh          $t0, 0x47F0($at)
    MEM_H(0X47F0, ctx->r1) = ctx->r8;
    // 0x8005E664: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8005E668: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8005E66C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8005E670: jal         0x8001D244
    // 0x8005E674: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_18;
    // 0x8005E674: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_18:
    // 0x8005E678: jal         0x8001D284
    // 0x8005E67C: nop

    func_8001D284(rdram, ctx);
        goto after_19;
    // 0x8005E67C: nop

    after_19:
    // 0x8005E680: jal         0x80000964
    // 0x8005E684: nop

    func_80000964(rdram, ctx);
        goto after_20;
    // 0x8005E684: nop

    after_20:
    // 0x8005E688: b           L_8005E690
    // 0x8005E68C: nop

        goto L_8005E690;
    // 0x8005E68C: nop

L_8005E690:
    // 0x8005E690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005E694: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005E698: jr          $ra
    // 0x8005E69C: nop

    return;
    // 0x8005E69C: nop

;}
RECOMP_FUNC void func_800757C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800757C0: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x800757C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800757C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800757CC: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x800757D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800757D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800757D8: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x800757DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800757E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800757E4: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x800757E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800757EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800757F0: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x800757F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800757F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800757FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075800: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x80075804: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80075808: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007580C: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x80075810: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075814: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075818: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007581C: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x80075820: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80075824: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80075828: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007582C: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80075830: nop

    // 0x80075834: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x80075838: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007583C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80075840: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80075844: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075848: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8007584C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075850: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80075854: swc1        $f16, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f16.u32l;
    // 0x80075858: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007585C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80075860: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075864: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80075868: nop

    // 0x8007586C: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x80075870: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075874: sb          $zero, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = 0;
    // 0x80075878: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007587C: sb          $zero, 0x75F4($at)
    MEM_B(0X75F4, ctx->r1) = 0;
    // 0x80075880: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075884: sb          $zero, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = 0;
    // 0x80075888: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007588C: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80075890: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80075894: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80075898: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007589C: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x800758A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758A4: lh          $t2, 0x30($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X30);
    // 0x800758A8: nop

    // 0x800758AC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800758B0: nop

    // 0x800758B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800758B8: swc1        $f6, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f6.u32l;
    // 0x800758BC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800758C0: lwc1        $f8, 0x5AC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5AC0);
    // 0x800758C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758C8: swc1        $f8, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f8.u32l;
    // 0x800758CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800758D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758D4: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x800758D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800758DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758E0: swc1        $f16, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f16.u32l;
    // 0x800758E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800758E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758EC: swc1        $f18, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f18.u32l;
    // 0x800758F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758F4: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x800758F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800758FC: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x80075900: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80075904: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075908: swc1        $f6, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f6.u32l;
    // 0x8007590C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80075910: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075914: swc1        $f8, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->f8.u32l;
    // 0x80075918: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007591C: lwc1        $f10, 0x7A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075920: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075924: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80075928: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007592C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075930: swc1        $f16, 0x75FC($at)
    MEM_W(0X75FC, ctx->r1) = ctx->f16.u32l;
    // 0x80075934: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80075938: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007593C: swc1        $f18, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->f18.u32l;
    // 0x80075940: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80075944: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075948: swc1        $f4, 0x760C($at)
    MEM_W(0X760C, ctx->r1) = ctx->f4.u32l;
    // 0x8007594C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075950: lwc1        $f6, -0x1EBC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80075954: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075958: swc1        $f6, 0x7614($at)
    MEM_W(0X7614, ctx->r1) = ctx->f6.u32l;
    // 0x8007595C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075960: lwc1        $f8, -0x1EBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80075964: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075968: swc1        $f8, 0x761C($at)
    MEM_W(0X761C, ctx->r1) = ctx->f8.u32l;
    // 0x8007596C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80075970: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075974: swc1        $f10, 0x7624($at)
    MEM_W(0X7624, ctx->r1) = ctx->f10.u32l;
    // 0x80075978: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007597C: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80075980: nop

    // 0x80075984: addiu       $t4, $t3, -0xF
    ctx->r12 = ADD32(ctx->r11, -0XF);
    // 0x80075988: sltiu       $at, $t4, 0x5E
    ctx->r1 = ctx->r12 < 0X5E ? 1 : 0;
    // 0x8007598C: beq         $at, $zero, L_80075D58
    if (ctx->r1 == 0) {
        // 0x80075990: nop
    
            goto L_80075D58;
    }
    // 0x80075990: nop

    // 0x80075994: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80075998: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007599C: addu        $at, $at, $t4
    gpr jr_addend_800759A8 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800759A0: lw          $t4, 0x5AC4($at)
    ctx->r12 = ADD32(ctx->r1, 0X5AC4);
    // 0x800759A4: nop

    // 0x800759A8: jr          $t4
    // 0x800759AC: nop

    switch (jr_addend_800759A8 >> 2) {
        case 0: goto L_80075D10; break;
        case 1: goto L_80075D58; break;
        case 2: goto L_80075D58; break;
        case 3: goto L_80075D58; break;
        case 4: goto L_800759B0; break;
        case 5: goto L_80075D58; break;
        case 6: goto L_80075D58; break;
        case 7: goto L_80075D58; break;
        case 8: goto L_80075D58; break;
        case 9: goto L_80075D58; break;
        case 10: goto L_80075D58; break;
        case 11: goto L_80075D58; break;
        case 12: goto L_80075D58; break;
        case 13: goto L_80075D58; break;
        case 14: goto L_80075D58; break;
        case 15: goto L_80075D58; break;
        case 16: goto L_80075D58; break;
        case 17: goto L_80075D58; break;
        case 18: goto L_80075D58; break;
        case 19: goto L_80075D58; break;
        case 20: goto L_80075D58; break;
        case 21: goto L_80075D58; break;
        case 22: goto L_800759F8; break;
        case 23: goto L_80075D58; break;
        case 24: goto L_80075D58; break;
        case 25: goto L_80075D58; break;
        case 26: goto L_80075D58; break;
        case 27: goto L_80075D58; break;
        case 28: goto L_80075D58; break;
        case 29: goto L_80075D58; break;
        case 30: goto L_80075D58; break;
        case 31: goto L_80075D58; break;
        case 32: goto L_80075D58; break;
        case 33: goto L_80075D58; break;
        case 34: goto L_80075D58; break;
        case 35: goto L_80075D58; break;
        case 36: goto L_80075D58; break;
        case 37: goto L_80075D58; break;
        case 38: goto L_80075D58; break;
        case 39: goto L_80075D58; break;
        case 40: goto L_80075D58; break;
        case 41: goto L_80075D58; break;
        case 42: goto L_80075A40; break;
        case 43: goto L_80075D58; break;
        case 44: goto L_80075D58; break;
        case 45: goto L_80075D58; break;
        case 46: goto L_80075D58; break;
        case 47: goto L_80075D58; break;
        case 48: goto L_80075D58; break;
        case 49: goto L_80075D58; break;
        case 50: goto L_80075D58; break;
        case 51: goto L_80075D58; break;
        case 52: goto L_80075D58; break;
        case 53: goto L_80075D58; break;
        case 54: goto L_80075D58; break;
        case 55: goto L_80075D58; break;
        case 56: goto L_80075D58; break;
        case 57: goto L_80075D58; break;
        case 58: goto L_80075D58; break;
        case 59: goto L_80075D58; break;
        case 60: goto L_80075D58; break;
        case 61: goto L_80075AD0; break;
        case 62: goto L_80075B18; break;
        case 63: goto L_80075B60; break;
        case 64: goto L_80075D10; break;
        case 65: goto L_80075D58; break;
        case 66: goto L_80075BA8; break;
        case 67: goto L_80075BF0; break;
        case 68: goto L_80075C80; break;
        case 69: goto L_80075D58; break;
        case 70: goto L_80075CC8; break;
        case 71: goto L_80075D58; break;
        case 72: goto L_80075D10; break;
        case 73: goto L_80075D10; break;
        case 74: goto L_80075D10; break;
        case 75: goto L_80075A88; break;
        case 76: goto L_80075D58; break;
        case 77: goto L_80075D58; break;
        case 78: goto L_80075D58; break;
        case 79: goto L_80075D58; break;
        case 80: goto L_80075D58; break;
        case 81: goto L_80075D58; break;
        case 82: goto L_80075D58; break;
        case 83: goto L_80075D58; break;
        case 84: goto L_80075D58; break;
        case 85: goto L_80075D58; break;
        case 86: goto L_80075D58; break;
        case 87: goto L_80075D58; break;
        case 88: goto L_80075D58; break;
        case 89: goto L_80075D58; break;
        case 90: goto L_80075D58; break;
        case 91: goto L_80075D58; break;
        case 92: goto L_80075D58; break;
        case 93: goto L_80075C38; break;
        default: switch_error(__func__, 0x800759A8, 0x80105AC4);
    }
    // 0x800759AC: nop

L_800759B0:
    // 0x800759B0: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x800759B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800759B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800759BC: swc1        $f16, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f16.u32l;
    // 0x800759C0: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800759C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800759C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800759CC: swc1        $f18, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f18.u32l;
    // 0x800759D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800759D4: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x800759D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800759DC: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x800759E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800759E4: lwc1        $f6, 0x7A5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x800759E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800759EC: swc1        $f6, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f6.u32l;
    // 0x800759F0: b           L_80075D58
    // 0x800759F4: nop

        goto L_80075D58;
    // 0x800759F4: nop

L_800759F8:
    // 0x800759F8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800759FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075A00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A04: swc1        $f8, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f8.u32l;
    // 0x80075A08: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075A0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075A10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A14: swc1        $f10, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f10.u32l;
    // 0x80075A18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A1C: lwc1        $f16, 0x7A58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075A20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A24: swc1        $f16, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f16.u32l;
    // 0x80075A28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A2C: lwc1        $f18, 0x7A5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075A30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A34: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
    // 0x80075A38: b           L_80075D58
    // 0x80075A3C: nop

        goto L_80075D58;
    // 0x80075A3C: nop

L_80075A40:
    // 0x80075A40: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80075A44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075A48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A4C: swc1        $f4, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f4.u32l;
    // 0x80075A50: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075A54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80075A58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A5C: swc1        $f6, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f6.u32l;
    // 0x80075A60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A64: lwc1        $f8, 0x7A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075A68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A6C: swc1        $f8, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f8.u32l;
    // 0x80075A70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A74: lwc1        $f10, 0x7A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075A78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A7C: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80075A80: b           L_80075D58
    // 0x80075A84: nop

        goto L_80075D58;
    // 0x80075A84: nop

L_80075A88:
    // 0x80075A88: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80075A8C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075A90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075A94: swc1        $f16, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f16.u32l;
    // 0x80075A98: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075A9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80075AA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AA4: swc1        $f18, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f18.u32l;
    // 0x80075AA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AAC: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075AB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AB4: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x80075AB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075ABC: lwc1        $f6, 0x7A5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075AC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AC4: swc1        $f6, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f6.u32l;
    // 0x80075AC8: b           L_80075D58
    // 0x80075ACC: nop

        goto L_80075D58;
    // 0x80075ACC: nop

L_80075AD0:
    // 0x80075AD0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80075AD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075AD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075ADC: swc1        $f8, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f8.u32l;
    // 0x80075AE0: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075AE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075AE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AEC: swc1        $f10, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f10.u32l;
    // 0x80075AF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AF4: lwc1        $f16, 0x7A58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075AF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075AFC: swc1        $f16, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f16.u32l;
    // 0x80075B00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B04: lwc1        $f18, 0x7A5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075B08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B0C: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
    // 0x80075B10: b           L_80075D58
    // 0x80075B14: nop

        goto L_80075D58;
    // 0x80075B14: nop

L_80075B18:
    // 0x80075B18: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80075B1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075B20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B24: swc1        $f4, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f4.u32l;
    // 0x80075B28: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075B2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80075B30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B34: swc1        $f6, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f6.u32l;
    // 0x80075B38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B3C: lwc1        $f8, 0x7A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075B40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B44: swc1        $f8, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f8.u32l;
    // 0x80075B48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B4C: lwc1        $f10, 0x7A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075B50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B54: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80075B58: b           L_80075D58
    // 0x80075B5C: nop

        goto L_80075D58;
    // 0x80075B5C: nop

L_80075B60:
    // 0x80075B60: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80075B64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075B68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B6C: swc1        $f16, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f16.u32l;
    // 0x80075B70: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x80075B74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80075B78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B7C: swc1        $f18, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f18.u32l;
    // 0x80075B80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B84: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075B88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B8C: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x80075B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B94: lwc1        $f6, 0x7A5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075B98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075B9C: swc1        $f6, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f6.u32l;
    // 0x80075BA0: b           L_80075D58
    // 0x80075BA4: nop

        goto L_80075D58;
    // 0x80075BA4: nop

L_80075BA8:
    // 0x80075BA8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80075BAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075BB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BB4: swc1        $f8, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f8.u32l;
    // 0x80075BB8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075BBC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075BC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BC4: swc1        $f10, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f10.u32l;
    // 0x80075BC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BCC: lwc1        $f16, 0x7A58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075BD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BD4: swc1        $f16, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f16.u32l;
    // 0x80075BD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BDC: lwc1        $f18, 0x7A5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075BE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BE4: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
    // 0x80075BE8: b           L_80075D58
    // 0x80075BEC: nop

        goto L_80075D58;
    // 0x80075BEC: nop

L_80075BF0:
    // 0x80075BF0: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x80075BF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075BF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075BFC: swc1        $f4, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f4.u32l;
    // 0x80075C00: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80075C04: lwc1        $f6, 0x5C3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C3C);
    // 0x80075C08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C0C: swc1        $f6, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f6.u32l;
    // 0x80075C10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C14: lwc1        $f8, 0x7A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075C18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C1C: swc1        $f8, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f8.u32l;
    // 0x80075C20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C24: lwc1        $f10, 0x7A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075C28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C2C: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80075C30: b           L_80075D58
    // 0x80075C34: nop

        goto L_80075D58;
    // 0x80075C34: nop

L_80075C38:
    // 0x80075C38: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80075C3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075C40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C44: swc1        $f16, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f16.u32l;
    // 0x80075C48: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80075C4C: lwc1        $f18, 0x5C40($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5C40);
    // 0x80075C50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C54: swc1        $f18, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f18.u32l;
    // 0x80075C58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C5C: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075C60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C64: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x80075C68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C6C: lwc1        $f6, 0x7A5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075C70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C74: swc1        $f6, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f6.u32l;
    // 0x80075C78: b           L_80075D58
    // 0x80075C7C: nop

        goto L_80075D58;
    // 0x80075C7C: nop

L_80075C80:
    // 0x80075C80: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80075C84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075C88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C8C: swc1        $f8, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f8.u32l;
    // 0x80075C90: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075C94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075C98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075C9C: swc1        $f10, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f10.u32l;
    // 0x80075CA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CA4: lwc1        $f16, 0x7A58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075CA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CAC: swc1        $f16, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f16.u32l;
    // 0x80075CB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CB4: lwc1        $f18, 0x7A5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075CB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CBC: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
    // 0x80075CC0: b           L_80075D58
    // 0x80075CC4: nop

        goto L_80075D58;
    // 0x80075CC4: nop

L_80075CC8:
    // 0x80075CC8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80075CCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80075CD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CD4: swc1        $f4, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f4.u32l;
    // 0x80075CD8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075CDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80075CE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CE4: swc1        $f6, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f6.u32l;
    // 0x80075CE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CEC: lwc1        $f8, 0x7A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075CF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CF4: swc1        $f8, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f8.u32l;
    // 0x80075CF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075CFC: lwc1        $f10, 0x7A5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075D00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D04: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80075D08: b           L_80075D58
    // 0x80075D0C: nop

        goto L_80075D58;
    // 0x80075D0C: nop

L_80075D10:
    // 0x80075D10: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80075D14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075D18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D1C: swc1        $f16, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f16.u32l;
    // 0x80075D20: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80075D24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80075D28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D2C: swc1        $f18, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f18.u32l;
    // 0x80075D30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D34: lwc1        $f4, 0x7A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x80075D38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D3C: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x80075D40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D44: lwc1        $f6, 0x7A5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80075D48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075D4C: swc1        $f6, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f6.u32l;
    // 0x80075D50: b           L_80075D58
    // 0x80075D54: nop

        goto L_80075D58;
    // 0x80075D54: nop

L_80075D58:
    // 0x80075D58: jr          $ra
    // 0x80075D5C: nop

    return;
    // 0x80075D5C: nop

    // 0x80075D60: jr          $ra
    // 0x80075D64: nop

    return;
    // 0x80075D64: nop

;}
RECOMP_FUNC void func_800E45C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E45C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E45C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E45CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E45D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E45D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E45D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E45DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E45E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E45E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E45E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E45EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E45F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E45F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E45F8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E45FC: nop

    // 0x800E4600: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E4604: nop

    // 0x800E4608: bne         $t1, $zero, L_800E4688
    if (ctx->r9 != 0) {
        // 0x800E460C: nop
    
            goto L_800E4688;
    }
    // 0x800E460C: nop

    // 0x800E4610: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E4614: nop

    // 0x800E4618: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E461C: nop

    // 0x800E4620: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E4624: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E4628: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E462C: nop

    // 0x800E4630: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E4634: nop

    // 0x800E4638: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E463C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4640: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E4644: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E4648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E464C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E4650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E4658: jal         0x8001C0EC
    // 0x800E465C: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E465C: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E4660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4664: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4668: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E466C: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E4670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4674: jal         0x8001ABF4
    // 0x800E4678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E4678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800E467C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E4680: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800E4684: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_800E4688:
    // 0x800E4688: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E468C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4690: jal         0x8002A8B4
    // 0x800E4694: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x800E4694: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_2:
    // 0x800E4698: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E469C: nop

    // 0x800E46A0: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E46A4: nop

    // 0x800E46A8: swc1        $f4, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f4.u32l;
    // 0x800E46AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E46B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E46B4: jal         0x8002A2EC
    // 0x800E46B8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x800E46B8: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_3:
    // 0x800E46BC: beq         $v0, $zero, L_800E46DC
    if (ctx->r2 == 0) {
        // 0x800E46C0: nop
    
            goto L_800E46DC;
    }
    // 0x800E46C0: nop

    // 0x800E46C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E46C8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800E46CC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E46D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E46D4: nop

    // 0x800E46D8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E46DC:
    // 0x800E46DC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E46E0: nop

    // 0x800E46E4: lh          $t6, 0xA6($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA6);
    // 0x800E46E8: nop

    // 0x800E46EC: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800E46F0: bne         $at, $zero, L_800E4710
    if (ctx->r1 != 0) {
        // 0x800E46F4: nop
    
            goto L_800E4710;
    }
    // 0x800E46F4: nop

    // 0x800E46F8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E46FC: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x800E4700: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800E4704: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E4708: nop

    // 0x800E470C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800E4710:
    // 0x800E4710: b           L_800E4718
    // 0x800E4714: nop

        goto L_800E4718;
    // 0x800E4714: nop

L_800E4718:
    // 0x800E4718: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E471C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E4720: jr          $ra
    // 0x800E4724: nop

    return;
    // 0x800E4724: nop

;}
RECOMP_FUNC void func_800932C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800932C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800932C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800932CC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800932D0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800932D4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800932D8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800932DC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800932E0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800932E4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800932E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800932EC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800932F0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800932F4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800932F8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800932FC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80093300: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80093304: addiu       $a1, $a1, 0x17E0
    ctx->r5 = ADD32(ctx->r5, 0X17E0);
    // 0x80093308: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009330C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80093310: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80093314: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80093318: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009331C: jal         0x80027464
    // 0x80093320: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80093320: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80093324: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80093328: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009332C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80093330: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80093334: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80093338: jal         0x8001ABF4
    // 0x8009333C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009333C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80093340: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80093344: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80093348: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009334C: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x80093350: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80093354: jal         0x8001ABF4
    // 0x80093358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80093358: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8009335C: b           L_80093364
    // 0x80093360: nop

        goto L_80093364;
    // 0x80093360: nop

L_80093364:
    // 0x80093364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80093368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009336C: jr          $ra
    // 0x80093370: nop

    return;
    // 0x80093370: nop

;}
RECOMP_FUNC void func_800ADBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ADBF4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800ADBF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800ADBFC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800ADC00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800ADC04: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800ADC08: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800ADC0C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800ADC10: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800ADC14: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800ADC18: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800ADC1C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800ADC20: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800ADC24: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800ADC28: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800ADC2C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800ADC30: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800ADC34: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800ADC38: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800ADC3C: addiu       $a1, $a1, 0x3964
    ctx->r5 = ADD32(ctx->r5, 0X3964);
    // 0x800ADC40: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800ADC44: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800ADC48: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800ADC4C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800ADC50: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800ADC54: jal         0x80027464
    // 0x800ADC58: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800ADC58: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800ADC5C: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
    // 0x800ADC60: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x800ADC64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800ADC68: beq         $t1, $at, L_800AE1F4
    if (ctx->r9 == ctx->r1) {
        // 0x800ADC6C: nop
    
            goto L_800AE1F4;
    }
    // 0x800ADC6C: nop

    // 0x800ADC70: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
    // 0x800ADC74: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800ADC78: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800ADC7C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800ADC80: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800ADC84: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800ADC88: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800ADC8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800ADC90: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x800ADC94: nop

    // 0x800ADC98: sh          $t4, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r12;
    // 0x800ADC9C: lh          $t5, 0x36($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X36);
    // 0x800ADCA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ADCA4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800ADCA8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800ADCAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ADCB0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800ADCB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ADCB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800ADCBC: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x800ADCC0: nop

    // 0x800ADCC4: sh          $t8, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r24;
    // 0x800ADCC8: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x800ADCCC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800ADCD0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800ADCD4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800ADCD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800ADCDC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800ADCE0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800ADCE4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800ADCE8: lh          $t0, 0x423C($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X423C);
    // 0x800ADCEC: nop

    // 0x800ADCF0: sh          $t0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r8;
    // 0x800ADCF4: lh          $t1, 0x34($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X34);
    // 0x800ADCF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADCFC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800ADD00: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ADD04: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ADD08: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ADD0C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800ADD10: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ADD14: sh          $zero, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = 0;
    // 0x800ADD18: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x800ADD1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADD20: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800ADD24: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800ADD28: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800ADD2C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800ADD30: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800ADD34: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800ADD38: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800ADD3C: sh          $t3, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r11;
    // 0x800ADD40: lh          $t8, 0x30($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X30);
    // 0x800ADD44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADD48: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800ADD4C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800ADD50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800ADD54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800ADD58: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800ADD5C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800ADD60: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800ADD64: sh          $t7, 0x4204($at)
    MEM_H(0X4204, ctx->r1) = ctx->r15;
    // 0x800ADD68: lh          $t0, 0x30($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X30);
    // 0x800ADD6C: lh          $t2, 0x30($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X30);
    // 0x800ADD70: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800ADD74: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800ADD78: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ADD7C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800ADD80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800ADD84: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800ADD88: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800ADD8C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800ADD90: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800ADD94: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800ADD98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADD9C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800ADDA0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800ADDA4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800ADDA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ADDAC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800ADDB0: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800ADDB4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800ADDB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800ADDBC: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800ADDC0: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x800ADDC4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800ADDC8: lh          $s0, 0xA4($t5)
    ctx->r16 = MEM_H(ctx->r13, 0XA4);
    // 0x800ADDCC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ADDD0: addu        $t9, $t7, $t3
    ctx->r25 = ADD32(ctx->r15, ctx->r11);
    // 0x800ADDD4: sh          $s0, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r16;
    // 0x800ADDD8: lh          $t0, 0x34($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X34);
    // 0x800ADDDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADDE0: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x800ADDE4: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800ADDE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800ADDEC: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800ADDF0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800ADDF4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800ADDF8: sh          $s0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r16;
    // 0x800ADDFC: lh          $t1, 0x30($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X30);
    // 0x800ADE00: lh          $t4, 0x30($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X30);
    // 0x800ADE04: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800ADE08: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x800ADE0C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ADE10: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800ADE14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ADE18: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800ADE1C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800ADE20: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800ADE24: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x800ADE28: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800ADE2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADE30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ADE34: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800ADE38: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x800ADE3C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800ADE40: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800ADE44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ADE48: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ADE4C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800ADE50: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x800ADE54: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x800ADE58: lbu         $s1, 0x132($t7)
    ctx->r17 = MEM_BU(ctx->r15, 0X132);
    // 0x800ADE5C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800ADE60: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x800ADE64: sb          $s1, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r17;
    // 0x800ADE68: lh          $t6, 0x34($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X34);
    // 0x800ADE6C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADE70: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x800ADE74: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800ADE78: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800ADE7C: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x800ADE80: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800ADE84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800ADE88: sb          $s1, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r17;
    // 0x800ADE8C: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800ADE90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800ADE94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADE98: jal         0x80019448
    // 0x800ADE9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800ADE9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800ADEA0: lh          $a0, 0x34($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X34);
    // 0x800ADEA4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800ADEA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADEAC: jal         0x80019448
    // 0x800ADEB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x800ADEB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x800ADEB4: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800ADEB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800ADEBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADEC0: jal         0x80019448
    // 0x800ADEC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_3;
    // 0x800ADEC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x800ADEC8: lh          $a0, 0x30($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X30);
    // 0x800ADECC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800ADED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADED4: jal         0x80019448
    // 0x800ADED8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_4;
    // 0x800ADED8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x800ADEDC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800ADEE0: addiu       $t2, $t2, 0x7810
    ctx->r10 = ADD32(ctx->r10, 0X7810);
    // 0x800ADEE4: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800ADEE8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800ADEEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADEF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADEF4: jal         0x8001C0EC
    // 0x800ADEF8: addiu       $a3, $zero, 0x9A
    ctx->r7 = ADD32(0, 0X9A);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800ADEF8: addiu       $a3, $zero, 0x9A
    ctx->r7 = ADD32(0, 0X9A);
    after_5:
    // 0x800ADEFC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800ADF00: addiu       $t4, $t4, 0x7810
    ctx->r12 = ADD32(ctx->r12, 0X7810);
    // 0x800ADF04: lh          $a0, 0x34($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X34);
    // 0x800ADF08: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800ADF0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADF10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADF14: jal         0x8001C0EC
    // 0x800ADF18: addiu       $a3, $zero, 0x9B
    ctx->r7 = ADD32(0, 0X9B);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800ADF18: addiu       $a3, $zero, 0x9B
    ctx->r7 = ADD32(0, 0X9B);
    after_6:
    // 0x800ADF1C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800ADF20: addiu       $t5, $t5, 0x7810
    ctx->r13 = ADD32(ctx->r13, 0X7810);
    // 0x800ADF24: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800ADF28: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800ADF2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADF30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADF34: jal         0x8001C0EC
    // 0x800ADF38: addiu       $a3, $zero, 0x9B
    ctx->r7 = ADD32(0, 0X9B);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800ADF38: addiu       $a3, $zero, 0x9B
    ctx->r7 = ADD32(0, 0X9B);
    after_7:
    // 0x800ADF3C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800ADF40: addiu       $t7, $t7, 0x7810
    ctx->r15 = ADD32(ctx->r15, 0X7810);
    // 0x800ADF44: lh          $a0, 0x30($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X30);
    // 0x800ADF48: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800ADF4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADF50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ADF54: jal         0x8001C0EC
    // 0x800ADF58: addiu       $a3, $zero, 0x9B
    ctx->r7 = ADD32(0, 0X9B);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800ADF58: addiu       $a3, $zero, 0x9B
    ctx->r7 = ADD32(0, 0X9B);
    after_8:
    // 0x800ADF5C: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800ADF60: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800ADF64: addiu       $a3, $a3, 0x783C
    ctx->r7 = ADD32(ctx->r7, 0X783C);
    // 0x800ADF68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADF6C: jal         0x8001ABF4
    // 0x800ADF70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800ADF70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800ADF74: lh          $a0, 0x34($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X34);
    // 0x800ADF78: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800ADF7C: addiu       $a3, $a3, 0x783C
    ctx->r7 = ADD32(ctx->r7, 0X783C);
    // 0x800ADF80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADF84: jal         0x8001ABF4
    // 0x800ADF88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800ADF88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800ADF8C: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800ADF90: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800ADF94: addiu       $a3, $a3, 0x783C
    ctx->r7 = ADD32(ctx->r7, 0X783C);
    // 0x800ADF98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADF9C: jal         0x8001ABF4
    // 0x800ADFA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_11;
    // 0x800ADFA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x800ADFA4: lh          $a0, 0x30($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X30);
    // 0x800ADFA8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800ADFAC: addiu       $a3, $a3, 0x783C
    ctx->r7 = ADD32(ctx->r7, 0X783C);
    // 0x800ADFB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ADFB4: jal         0x8001ABF4
    // 0x800ADFB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_12;
    // 0x800ADFB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x800ADFBC: lh          $a0, 0x34($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X34);
    // 0x800ADFC0: jal         0x8001BB04
    // 0x800ADFC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_13;
    // 0x800ADFC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x800ADFC8: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800ADFCC: jal         0x8001BB04
    // 0x800ADFD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_14;
    // 0x800ADFD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x800ADFD4: lh          $a0, 0x30($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X30);
    // 0x800ADFD8: jal         0x8001BB04
    // 0x800ADFDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_15;
    // 0x800ADFDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x800ADFE0: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x800ADFE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800ADFE8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800ADFEC: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800ADFF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800ADFF4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800ADFF8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800ADFFC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800AE000: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800AE004: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x800AE008: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x800AE00C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE010: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x800AE014: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800AE018: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AE01C: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x800AE020: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800AE024: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AE028: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AE02C: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x800AE030: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AE034: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800AE038: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AE03C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800AE040: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800AE044: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800AE048: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE04C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800AE050: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800AE054: lh          $t4, 0x34($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X34);
    // 0x800AE058: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE05C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AE060: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AE064: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AE068: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AE06C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AE070: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800AE074: sh          $zero, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = 0;
    // 0x800AE078: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800AE07C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE080: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800AE084: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800AE088: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AE08C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800AE090: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AE094: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AE098: sh          $zero, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = 0;
    // 0x800AE09C: lh          $t3, 0x30($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X30);
    // 0x800AE0A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE0A4: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800AE0A8: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800AE0AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800AE0B0: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800AE0B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800AE0B8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800AE0BC: sh          $zero, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = 0;
    // 0x800AE0C0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800AE0C4: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x800AE0C8: nop

    // 0x800AE0CC: lh          $t6, 0xA($t0)
    ctx->r14 = MEM_H(ctx->r8, 0XA);
    // 0x800AE0D0: nop

    // 0x800AE0D4: beq         $t6, $zero, L_800AE154
    if (ctx->r14 == 0) {
        // 0x800AE0D8: nop
    
            goto L_800AE154;
    }
    // 0x800AE0D8: nop

    // 0x800AE0DC: lh          $t2, 0x34($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X34);
    // 0x800AE0E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE0E4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800AE0E8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800AE0EC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AE0F0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800AE0F4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AE0F8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AE0FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800AE100: sh          $t1, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r9;
    // 0x800AE104: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800AE108: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE10C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800AE110: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800AE114: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800AE118: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800AE11C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800AE120: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800AE124: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800AE128: sh          $t5, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r13;
    // 0x800AE12C: lh          $t8, 0x30($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X30);
    // 0x800AE130: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE134: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800AE138: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800AE13C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800AE140: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800AE144: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800AE148: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800AE14C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800AE150: sh          $t3, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r11;
L_800AE154:
    // 0x800AE154: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
    // 0x800AE158: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE15C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800AE160: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800AE164: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800AE168: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800AE16C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800AE170: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800AE174: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800AE178: sh          $t6, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r14;
    // 0x800AE17C: lh          $t7, 0x34($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X34);
    // 0x800AE180: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE184: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x800AE188: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800AE18C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AE190: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x800AE194: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800AE198: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800AE19C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800AE1A0: sh          $t4, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r12;
    // 0x800AE1A4: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800AE1A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE1AC: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x800AE1B0: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x800AE1B4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800AE1B8: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x800AE1BC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800AE1C0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800AE1C4: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800AE1C8: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x800AE1CC: lh          $t2, 0x30($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X30);
    // 0x800AE1D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AE1D4: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800AE1D8: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800AE1DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800AE1E0: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800AE1E4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800AE1E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800AE1EC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800AE1F0: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
L_800AE1F4:
    // 0x800AE1F4: b           L_800AE1FC
    // 0x800AE1F8: nop

        goto L_800AE1FC;
    // 0x800AE1F8: nop

L_800AE1FC:
    // 0x800AE1FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AE200: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800AE204: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800AE208: jr          $ra
    // 0x800AE20C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800AE20C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800DE95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE95C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DE960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DE964: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DE968: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DE96C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DE970: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DE974: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE978: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DE97C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE980: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DE984: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DE988: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DE98C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DE990: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DE994: nop

    // 0x800DE998: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DE99C: nop

    // 0x800DE9A0: bne         $t1, $zero, L_800DEA6C
    if (ctx->r9 != 0) {
        // 0x800DE9A4: nop
    
            goto L_800DEA6C;
    }
    // 0x800DE9A4: nop

    // 0x800DE9A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DE9AC: nop

    // 0x800DE9B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DE9B4: nop

    // 0x800DE9B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DE9BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DE9C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE9C4: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800DE9C8: addiu       $t5, $t5, -0x700C
    ctx->r13 = ADD32(ctx->r13, -0X700C);
    // 0x800DE9CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE9D0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800DE9D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE9D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800DE9DC: jal         0x8001C0EC
    // 0x800DE9E0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DE9E0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DE9E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DE9E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DE9EC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DE9F0: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DE9F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DE9F8: jal         0x8001ABF4
    // 0x800DE9FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DE9FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DEA00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEA04: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DEA08: addiu       $a3, $a3, -0x6E6C
    ctx->r7 = ADD32(ctx->r7, -0X6E6C);
    // 0x800DEA0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEA10: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DEA14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DEA18: jal         0x8001ABF4
    // 0x800DEA1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DEA1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DEA20: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DEA24: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800DEA28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DEA2C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800DEA30: nop

    // 0x800DEA34: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800DEA38: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x800DEA3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEA40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEA44: jal         0x8001B754
    // 0x800DEA48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x800DEA48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800DEA4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEA50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEA54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DEA58: jal         0x80029EF8
    // 0x800DEA5C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_4;
    // 0x800DEA5C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_4:
    // 0x800DEA60: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DEA64: nop

    // 0x800DEA68: sb          $zero, 0x13A($t7)
    MEM_B(0X13A, ctx->r15) = 0;
L_800DEA6C:
    // 0x800DEA6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEA70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEA74: jal         0x80028FA0
    // 0x800DEA78: nop

    func_80028FA0(rdram, ctx);
        goto after_5;
    // 0x800DEA78: nop

    after_5:
    // 0x800DEA7C: beq         $v0, $zero, L_800DEAB8
    if (ctx->r2 == 0) {
        // 0x800DEA80: nop
    
            goto L_800DEAB8;
    }
    // 0x800DEA80: nop

    // 0x800DEA84: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DEA88: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x800DEA8C: lh          $t9, 0x106($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X106);
    // 0x800DEA90: nop

    // 0x800DEA94: beq         $t9, $at, L_800DEAA8
    if (ctx->r25 == ctx->r1) {
        // 0x800DEA98: nop
    
            goto L_800DEAA8;
    }
    // 0x800DEA98: nop

    // 0x800DEA9C: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DEAA0: bne         $t9, $at, L_800DEAB8
    if (ctx->r25 != ctx->r1) {
        // 0x800DEAA4: nop
    
            goto L_800DEAB8;
    }
    // 0x800DEAA4: nop

L_800DEAA8:
    // 0x800DEAA8: jal         0x800E3EE4
    // 0x800DEAAC: nop

    func_800E3EE4(rdram, ctx);
        goto after_6;
    // 0x800DEAAC: nop

    after_6:
    // 0x800DEAB0: b           L_800DEB2C
    // 0x800DEAB4: nop

        goto L_800DEB2C;
    // 0x800DEAB4: nop

L_800DEAB8:
    // 0x800DEAB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEAC0: jal         0x8002A46C
    // 0x800DEAC4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_7;
    // 0x800DEAC4: nop

    after_7:
    // 0x800DEAC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DEACC: nop

    // 0x800DEAD0: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x800DEAD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800DEAD8: nop

    // 0x800DEADC: lwc1        $f10, 0x1C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800DEAE0: nop

    // 0x800DEAE4: swc1        $f10, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f10.u32l;
    // 0x800DEAE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DEAEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DEAF0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800DEAF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800DEAF8: jal         0x8002A0D0
    // 0x800DEAFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_8;
    // 0x800DEAFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_8:
    // 0x800DEB00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DEB04: bne         $v0, $at, L_800DEB24
    if (ctx->r2 != ctx->r1) {
        // 0x800DEB08: nop
    
            goto L_800DEB24;
    }
    // 0x800DEB08: nop

    // 0x800DEB0C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DEB10: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800DEB14: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800DEB18: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DEB1C: nop

    // 0x800DEB20: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800DEB24:
    // 0x800DEB24: b           L_800DEB2C
    // 0x800DEB28: nop

        goto L_800DEB2C;
    // 0x800DEB28: nop

L_800DEB2C:
    // 0x800DEB2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DEB30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DEB34: jr          $ra
    // 0x800DEB38: nop

    return;
    // 0x800DEB38: nop

;}
RECOMP_FUNC void func_8008B6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B6E0: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x8008B6E4: nop

    // 0x8008B6E8: bne         $t6, $zero, L_8008B7B8
    if (ctx->r14 != 0) {
        // 0x8008B6EC: nop
    
            goto L_8008B7B8;
    }
    // 0x8008B6EC: nop

    // 0x8008B6F0: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8008B6F4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B6F8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8008B6FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008B700: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008B704: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B708: lwc1        $f16, 0x4F34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B70C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008B710: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8008B714: nop

    // 0x8008B718: bc1f        L_8008B770
    if (!c1cs) {
        // 0x8008B71C: nop
    
            goto L_8008B770;
    }
    // 0x8008B71C: nop

    // 0x8008B720: lh          $t8, 0x0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X0);
    // 0x8008B724: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B728: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x8008B72C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008B730: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008B734: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B738: lwc1        $f10, 0x4F34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B73C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8008B740: lh          $t9, 0x4($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X4);
    // 0x8008B744: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008B748: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8008B74C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8008B750: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B754: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8008B758: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B75C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8008B760: nop

    // 0x8008B764: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008B768: b           L_8008B7B0
    // 0x8008B76C: swc1        $f10, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f10.u32l;
        goto L_8008B7B0;
    // 0x8008B76C: swc1        $f10, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f10.u32l;
L_8008B770:
    // 0x8008B770: lh          $t0, 0x0($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X0);
    // 0x8008B774: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B778: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8008B77C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008B780: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008B784: lh          $t1, 0x4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X4);
    // 0x8008B788: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B78C: div.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8008B790: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x8008B794: lwc1        $f8, 0x4F34($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B798: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008B79C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B7A0: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8008B7A4: nop

    // 0x8008B7A8: div.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008B7AC: swc1        $f6, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f6.u32l;
L_8008B7B0:
    // 0x8008B7B0: b           L_8008B880
    // 0x8008B7B4: nop

        goto L_8008B880;
    // 0x8008B7B4: nop

L_8008B7B8:
    // 0x8008B7B8: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    // 0x8008B7BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B7C0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8008B7C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008B7C8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008B7CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B7D0: lwc1        $f18, 0x4F34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B7D4: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8008B7D8: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x8008B7DC: nop

    // 0x8008B7E0: bc1f        L_8008B82C
    if (!c1cs) {
        // 0x8008B7E4: nop
    
            goto L_8008B82C;
    }
    // 0x8008B7E4: nop

    // 0x8008B7E8: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x8008B7EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B7F0: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8008B7F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008B7F8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B7FC: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
    // 0x8008B800: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B804: div.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008B808: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8008B80C: lwc1        $f10, 0x4F34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B810: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B814: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B818: sub.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x8008B81C: nop

    // 0x8008B820: div.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8008B824: b           L_8008B880
    // 0x8008B828: swc1        $f8, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f8.u32l;
        goto L_8008B880;
    // 0x8008B828: swc1        $f8, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f8.u32l;
L_8008B82C:
    // 0x8008B82C: lh          $t5, 0x0($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X0);
    // 0x8008B830: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B834: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x8008B838: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008B83C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008B840: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B844: lwc1        $f4, 0x4F34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F34);
    // 0x8008B848: div.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8008B84C: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x8008B850: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008B854: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8008B858: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008B85C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8008B860: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8008B864: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B868: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8008B86C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008B870: div.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8008B874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B878: mul.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x8008B87C: swc1        $f16, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f16.u32l;
L_8008B880:
    // 0x8008B880: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x8008B884: nop

    // 0x8008B888: bne         $t7, $zero, L_8008B958
    if (ctx->r15 != 0) {
        // 0x8008B88C: nop
    
            goto L_8008B958;
    }
    // 0x8008B88C: nop

    // 0x8008B890: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x8008B894: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B898: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8008B89C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008B8A0: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B8A4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B8A8: lwc1        $f8, 0x4F38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B8AC: div.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8008B8B0: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x8008B8B4: nop

    // 0x8008B8B8: bc1f        L_8008B910
    if (!c1cs) {
        // 0x8008B8BC: nop
    
            goto L_8008B910;
    }
    // 0x8008B8BC: nop

    // 0x8008B8C0: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008B8C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B8C8: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8008B8CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008B8D0: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008B8D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B8D8: lwc1        $f18, 0x4F38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B8DC: div.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8008B8E0: lh          $t0, 0x4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X4);
    // 0x8008B8E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008B8E8: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8008B8EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008B8F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B8F4: sub.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x8008B8F8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008B8FC: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x8008B900: nop

    // 0x8008B904: div.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008B908: b           L_8008B950
    // 0x8008B90C: swc1        $f18, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f18.u32l;
        goto L_8008B950;
    // 0x8008B90C: swc1        $f18, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f18.u32l;
L_8008B910:
    // 0x8008B910: lh          $t1, 0x2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2);
    // 0x8008B914: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B918: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8008B91C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008B920: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008B924: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8008B928: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B92C: div.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8008B930: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x8008B934: lwc1        $f4, 0x4F38($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B938: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008B93C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B940: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8008B944: nop

    // 0x8008B948: div.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x8008B94C: swc1        $f10, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f10.u32l;
L_8008B950:
    // 0x8008B950: b           L_8008BA20
    // 0x8008B954: nop

        goto L_8008BA20;
    // 0x8008B954: nop

L_8008B958:
    // 0x8008B958: lh          $t3, 0x2($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2);
    // 0x8008B95C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B960: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8008B964: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008B968: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008B96C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B970: lwc1        $f16, 0x4F38($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B974: div.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008B978: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8008B97C: nop

    // 0x8008B980: bc1f        L_8008B9CC
    if (!c1cs) {
        // 0x8008B984: nop
    
            goto L_8008B9CC;
    }
    // 0x8008B984: nop

    // 0x8008B988: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x8008B98C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B990: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8008B994: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008B998: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008B99C: lh          $t5, 0x4($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X4);
    // 0x8008B9A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B9A4: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008B9A8: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8008B9AC: lwc1        $f18, 0x4F38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B9B0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008B9B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B9B8: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8008B9BC: nop

    // 0x8008B9C0: div.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8008B9C4: b           L_8008BA20
    // 0x8008B9C8: swc1        $f4, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f4.u32l;
        goto L_8008BA20;
    // 0x8008B9C8: swc1        $f4, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f4.u32l;
L_8008B9CC:
    // 0x8008B9CC: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8008B9D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008B9D4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8008B9D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008B9DC: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008B9E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B9E4: lwc1        $f6, 0x4F38($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F38);
    // 0x8008B9E8: div.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8008B9EC: lh          $t7, 0x4($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X4);
    // 0x8008B9F0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8008B9F4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8008B9F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008B9FC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8008BA00: sub.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8008BA04: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8008BA08: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8008BA0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008BA10: div.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8008BA14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA18: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8008BA1C: swc1        $f8, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f8.u32l;
L_8008BA20:
    // 0x8008BA20: lh          $t8, 0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X4);
    // 0x8008BA24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BA28: sh          $t8, 0x4C1E($at)
    MEM_H(0X4C1E, ctx->r1) = ctx->r24;
    // 0x8008BA2C: jr          $ra
    // 0x8008BA30: nop

    return;
    // 0x8008BA30: nop

    // 0x8008BA34: jr          $ra
    // 0x8008BA38: nop

    return;
    // 0x8008BA38: nop

;}
RECOMP_FUNC void func_80091FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091FE8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091FEC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091FF0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091FF4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091FF8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091FFC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092000: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092004: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092008: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009200C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092010: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092014: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092018: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009201C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092020: addiu       $a1, $a1, 0x1654
    ctx->r5 = ADD32(ctx->r5, 0X1654);
    // 0x80092024: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092028: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009202C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092030: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092034: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092038: jal         0x80027464
    // 0x8009203C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009203C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092040: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092044: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092048: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009204C: addiu       $a3, $a3, 0x2F8C
    ctx->r7 = ADD32(ctx->r7, 0X2F8C);
    // 0x80092050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092054: jal         0x8001ABF4
    // 0x80092058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80092058: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009205C: b           L_80092064
    // 0x80092060: nop

        goto L_80092064;
    // 0x80092060: nop

L_80092064:
    // 0x80092064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092068: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009206C: jr          $ra
    // 0x80092070: nop

    return;
    // 0x80092070: nop

;}
RECOMP_FUNC void func_8007C8A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C8A0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8007C8A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007C8A8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8007C8AC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8007C8B0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8007C8B4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007C8B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007C8BC: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8007C8C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007C8C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007C8C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C8CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007C8D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007C8D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007C8D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007C8DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007C8E0: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x8007C8E4: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8007C8E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007C8EC: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x8007C8F0: jal         0x8006828C
    // 0x8007C8F4: nop

    func_8006828C(rdram, ctx);
        goto after_0;
    // 0x8007C8F4: nop

    after_0:
    // 0x8007C8F8: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8007C8FC: jal         0x8007897C
    // 0x8007C900: nop

    func_8007897C(rdram, ctx);
        goto after_1;
    // 0x8007C900: nop

    after_1:
    // 0x8007C904: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007C908: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007C90C: addiu       $t3, $t2, 0x1260
    ctx->r11 = ADD32(ctx->r10, 0X1260);
    // 0x8007C910: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x8007C914: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8007C918:
    // 0x8007C918: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8007C91C: nop

    // 0x8007C920: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x8007C924: nop

    // 0x8007C928: beq         $t5, $zero, L_8007CA58
    if (ctx->r13 == 0) {
        // 0x8007C92C: nop
    
            goto L_8007CA58;
    }
    // 0x8007C92C: nop

    // 0x8007C930: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8007C934: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x8007C938: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8007C93C: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8007C940: nop

    // 0x8007C944: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007C948: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x8007C94C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8007C950: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8007C954: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8007C958: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8007C95C: nop

    // 0x8007C960: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8007C964: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x8007C968: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8007C96C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8007C970: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8007C974: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8007C978: nop

    // 0x8007C97C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007C980: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8007C984: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007C988: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007C98C: mul.s       $f16, $f10, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x8007C990: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8007C994: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8007C998: nop

    // 0x8007C99C: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8007C9A0: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x8007C9A4: jal         0x800367C8
    // 0x8007C9A8: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    __f_to_ull_recomp(rdram, ctx);
        goto after_2;
    // 0x8007C9A8: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_2:
    // 0x8007C9AC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8007C9B0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x8007C9B4: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x8007C9B8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8007C9BC: bne         $t2, $zero, L_8007CA58
    if (ctx->r10 != 0) {
        // 0x8007C9C0: nop
    
            goto L_8007CA58;
    }
    // 0x8007C9C0: nop

    // 0x8007C9C4: lui         $at, 0xE
    ctx->r1 = S32(0XE << 16);
    // 0x8007C9C8: ori         $at, $at, 0x1000
    ctx->r1 = ctx->r1 | 0X1000;
    // 0x8007C9CC: sltu        $at, $t3, $at
    ctx->r1 = ctx->r11 < ctx->r1 ? 1 : 0;
    // 0x8007C9D0: beq         $at, $zero, L_8007CA58
    if (ctx->r1 == 0) {
        // 0x8007C9D4: nop
    
            goto L_8007CA58;
    }
    // 0x8007C9D4: nop

    // 0x8007C9D8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x8007C9DC: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8007C9E0: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8007C9E4: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8007C9E8: nop

    // 0x8007C9EC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8007C9F0: nop

    // 0x8007C9F4: bc1f        L_8007CA58
    if (!c1cs) {
        // 0x8007C9F8: nop
    
            goto L_8007CA58;
    }
    // 0x8007C9F8: nop

    // 0x8007C9FC: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8007CA00: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007CA04: lh          $t7, 0xE4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XE4);
    // 0x8007CA08: nop

    // 0x8007CA0C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007CA10: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007CA14: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x8007CA18: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007CA1C: lbu         $t9, 0x4D91($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4D91);
    // 0x8007CA20: nop

    // 0x8007CA24: beq         $t9, $zero, L_8007CA58
    if (ctx->r25 == 0) {
        // 0x8007CA28: nop
    
            goto L_8007CA58;
    }
    // 0x8007CA28: nop

    // 0x8007CA2C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007CA30: nop

    // 0x8007CA34: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x8007CA38: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007CA3C: nop

    // 0x8007CA40: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8007CA44: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8007CA48: nop

    // 0x8007CA4C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8007CA50: b           L_8007CA78
    // 0x8007CA54: nop

        goto L_8007CA78;
    // 0x8007CA54: nop

L_8007CA58:
    // 0x8007CA58: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007CA5C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x8007CA60: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007CA64: slti        $at, $t1, 0x40
    ctx->r1 = SIGNED(ctx->r9) < 0X40 ? 1 : 0;
    // 0x8007CA68: addiu       $t3, $t2, 0x150
    ctx->r11 = ADD32(ctx->r10, 0X150);
    // 0x8007CA6C: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x8007CA70: bne         $at, $zero, L_8007C918
    if (ctx->r1 != 0) {
        // 0x8007CA74: sw          $t1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r9;
            goto L_8007C918;
    }
    // 0x8007CA74: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_8007CA78:
    // 0x8007CA78: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007CA7C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x8007CA80: beq         $t4, $at, L_8007CB38
    if (ctx->r12 == ctx->r1) {
        // 0x8007CA84: nop
    
            goto L_8007CB38;
    }
    // 0x8007CA84: nop

    // 0x8007CA88: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007CA8C: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007CA90: jal         0x80015634
    // 0x8007CA94: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_3;
    // 0x8007CA94: nop

    after_3:
    // 0x8007CA98: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8007CA9C: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CAA0: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8007CAA4: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x8007CAA8: jal         0x800157EC
    // 0x8007CAAC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_4;
    // 0x8007CAAC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_4:
    // 0x8007CAB0: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8007CAB4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8007CAB8: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CABC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8007CAC0: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8007CAC4: jal         0x80015538
    // 0x8007CAC8: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x8007CAC8: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_5:
    // 0x8007CACC: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CAD0: nop

    // 0x8007CAD4: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x8007CAD8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007CADC: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007CAE0: jal         0x800156C4
    // 0x8007CAE4: nop

    Math_CalcAngleSimple(rdram, ctx);
        goto after_6;
    // 0x8007CAE4: nop

    after_6:
    // 0x8007CAE8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8007CAEC: lwc1        $f12, 0x68($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8007CAF0: jal         0x80015744
    // 0x8007CAF4: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_7;
    // 0x8007CAF4: nop

    after_7:
    // 0x8007CAF8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8007CAFC: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CB00: lwc1        $f14, 0x68($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8007CB04: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x8007CB08: jal         0x800157EC
    // 0x8007CB0C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_8;
    // 0x8007CB0C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_8:
    // 0x8007CB10: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8007CB14: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x8007CB18: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CB1C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x8007CB20: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x8007CB24: jal         0x80015538
    // 0x8007CB28: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8007CB28: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_9:
    // 0x8007CB2C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CB30: nop

    // 0x8007CB34: swc1        $f0, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f0.u32l;
L_8007CB38:
    // 0x8007CB38: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CB3C: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x8007CB40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8007CB44: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8007CB48: jal         0x80015538
    // 0x8007CB4C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x8007CB4C: nop

    after_10:
    // 0x8007CB50: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CB54: nop

    // 0x8007CB58: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x8007CB5C: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CB60: nop

    // 0x8007CB64: lwc1        $f16, 0x40($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X40);
    // 0x8007CB68: nop

    // 0x8007CB6C: swc1        $f16, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f16.u32l;
    // 0x8007CB70: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8007CB74: jal         0x800799A8
    // 0x8007CB78: nop

    func_800799A8(rdram, ctx);
        goto after_11;
    // 0x8007CB78: nop

    after_11:
    // 0x8007CB7C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8007CB80: jal         0x80079AD8
    // 0x8007CB84: nop

    func_80079AD8(rdram, ctx);
        goto after_12;
    // 0x8007CB84: nop

    after_12:
    // 0x8007CB88: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8007CB8C: jal         0x80078AEC
    // 0x8007CB90: nop

    func_80078AEC(rdram, ctx);
        goto after_13;
    // 0x8007CB90: nop

    after_13:
    // 0x8007CB94: beq         $v0, $zero, L_8007CBB0
    if (ctx->r2 == 0) {
        // 0x8007CB98: nop
    
            goto L_8007CBB0;
    }
    // 0x8007CB98: nop

    // 0x8007CB9C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8007CBA0: jal         0x800795C8
    // 0x8007CBA4: nop

    func_800795C8(rdram, ctx);
        goto after_14;
    // 0x8007CBA4: nop

    after_14:
    // 0x8007CBA8: b           L_8007CCCC
    // 0x8007CBAC: nop

        goto L_8007CCCC;
    // 0x8007CBAC: nop

L_8007CBB0:
    // 0x8007CBB0: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CBB4: nop

    // 0x8007CBB8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8007CBBC: nop

    // 0x8007CBC0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8007CBC4: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x8007CBC8: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CBCC: nop

    // 0x8007CBD0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8007CBD4: nop

    // 0x8007CBD8: bne         $t0, $zero, L_8007CBF4
    if (ctx->r8 != 0) {
        // 0x8007CBDC: nop
    
            goto L_8007CBF4;
    }
    // 0x8007CBDC: nop

    // 0x8007CBE0: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x8007CBE4: jal         0x800795C8
    // 0x8007CBE8: nop

    func_800795C8(rdram, ctx);
        goto after_15;
    // 0x8007CBE8: nop

    after_15:
    // 0x8007CBEC: b           L_8007CCCC
    // 0x8007CBF0: nop

        goto L_8007CCCC;
    // 0x8007CBF0: nop

L_8007CBF4:
    // 0x8007CBF4: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CBF8: nop

    // 0x8007CBFC: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x8007CC00: nop

    // 0x8007CC04: bne         $t3, $zero, L_8007CCAC
    if (ctx->r11 != 0) {
        // 0x8007CC08: nop
    
            goto L_8007CCAC;
    }
    // 0x8007CC08: nop

    // 0x8007CC0C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CC10: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007CC14: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8007CC18: lwc1        $f7, -0x35D8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X35D8);
    // 0x8007CC1C: lwc1        $f6, -0x35D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X35D4);
    // 0x8007CC20: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x8007CC24: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x8007CC28: jal         0x80034970
    // 0x8007CC2C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_16;
    // 0x8007CC2C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_16:
    // 0x8007CC30: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CC34: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007CC38: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8007CC3C: lwc1        $f5, -0x35D0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X35D0);
    // 0x8007CC40: lwc1        $f4, -0x35CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X35CC);
    // 0x8007CC44: cvt.d.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f16.d = CVT_D_S(ctx->f18.fl);
    // 0x8007CC48: mul.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x8007CC4C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8007CC50: jal         0x80036570
    // 0x8007CC54: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    cosf_game(rdram, ctx);
        goto after_17;
    // 0x8007CC54: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_17:
    // 0x8007CC58: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8007CC5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007CC60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007CC64: mul.s       $f18, $f22, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f10.fl);
    // 0x8007CC68: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CC6C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007CC70: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8007CC74: mul.s       $f10, $f20, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x8007CC78: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8007CC7C: lw          $a2, 0x4($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X4);
    // 0x8007CC80: addiu       $a0, $zero, 0x2C5
    ctx->r4 = ADD32(0, 0X2C5);
    // 0x8007CC84: sub.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8007CC88: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8007CC8C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8007CC90: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8007CC94: jal         0x80081468
    // 0x8007CC98: nop

    func_80081468(rdram, ctx);
        goto after_18;
    // 0x8007CC98: nop

    after_18:
    // 0x8007CC9C: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CCA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8007CCA4: b           L_8007CCC4
    // 0x8007CCA8: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
        goto L_8007CCC4;
    // 0x8007CCA8: sh          $t7, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r15;
L_8007CCAC:
    // 0x8007CCAC: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8007CCB0: nop

    // 0x8007CCB4: lh          $t9, 0xB2($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XB2);
    // 0x8007CCB8: nop

    // 0x8007CCBC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8007CCC0: sh          $t0, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = ctx->r8;
L_8007CCC4:
    // 0x8007CCC4: b           L_8007CCCC
    // 0x8007CCC8: nop

        goto L_8007CCCC;
    // 0x8007CCC8: nop

L_8007CCCC:
    // 0x8007CCCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007CCD0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8007CCD4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007CCD8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007CCDC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007CCE0: jr          $ra
    // 0x8007CCE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8007CCE4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80076680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076680: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076684: lb          $t6, 0x790A($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X790A);
    // 0x80076688: nop

    // 0x8007668C: beq         $t6, $zero, L_8007669C
    if (ctx->r14 == 0) {
        // 0x80076690: nop
    
            goto L_8007669C;
    }
    // 0x80076690: nop

    // 0x80076694: jr          $ra
    // 0x80076698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80076698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007669C:
    // 0x8007669C: jr          $ra
    // 0x800766A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800766A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800766A4: jr          $ra
    // 0x800766A8: nop

    return;
    // 0x800766A8: nop

    // 0x800766AC: jr          $ra
    // 0x800766B0: nop

    return;
    // 0x800766B0: nop

;}
RECOMP_FUNC void func_8008E328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E328: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008E32C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008E330: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008E334: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008E338: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008E33C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008E340: nop

    // 0x8008E344: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008E348: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008E34C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008E350: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E354: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008E358: nop

    // 0x8008E35C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008E360: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008E364: jal         0x8008E4A4
    // 0x8008E368: nop

    func_8008E4A4(rdram, ctx);
        goto after_0;
    // 0x8008E368: nop

    after_0:
    // 0x8008E36C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008E370: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008E374: lw          $t1, 0x4FB8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4FB8);
    // 0x8008E378: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8008E37C: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8008E380: lw          $a3, 0x4FB4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4FB4);
    // 0x8008E384: lw          $a1, 0x4FB0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4FB0);
    // 0x8008E388: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8008E38C: lh          $a2, 0x2($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X2);
    // 0x8008E390: jal         0x8001C0EC
    // 0x8008E394: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8008E394: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_1:
    // 0x8008E398: b           L_8008E3A0
    // 0x8008E39C: nop

        goto L_8008E3A0;
    // 0x8008E39C: nop

L_8008E3A0:
    // 0x8008E3A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E3A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008E3A8: jr          $ra
    // 0x8008E3AC: nop

    return;
    // 0x8008E3AC: nop

;}
RECOMP_FUNC void func_800FAF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAF10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FAF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FAF18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FAF1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FAF20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FAF24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FAF28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAF2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FAF30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAF34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FAF38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FAF3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FAF40: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800FAF44: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAF48: nop

    // 0x800FAF4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FAF50: nop

    // 0x800FAF54: bne         $t1, $zero, L_800FAF90
    if (ctx->r9 != 0) {
        // 0x800FAF58: nop
    
            goto L_800FAF90;
    }
    // 0x800FAF58: nop

    // 0x800FAF5C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAF60: nop

    // 0x800FAF64: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FAF68: nop

    // 0x800FAF6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FAF70: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FAF74: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAF78: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800FAF7C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800FAF80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FAF84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FAF88: jal         0x8001BB34
    // 0x800FAF8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800FAF8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800FAF90:
    // 0x800FAF90: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAF94: nop

    // 0x800FAF98: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800FAF9C: nop

    // 0x800FAFA0: bne         $t8, $zero, L_800FAFC0
    if (ctx->r24 != 0) {
        // 0x800FAFA4: nop
    
            goto L_800FAFC0;
    }
    // 0x800FAFA4: nop

    // 0x800FAFA8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAFAC: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800FAFB0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800FAFB4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAFB8: b           L_800FB044
    // 0x800FAFBC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800FB044;
    // 0x800FAFBC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800FAFC0:
    // 0x800FAFC0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAFC4: nop

    // 0x800FAFC8: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800FAFCC: nop

    // 0x800FAFD0: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800FAFD4: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800FAFD8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FAFDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FAFE0: lwc1        $f4, 0xC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800FAFE4: lwc1        $f9, 0x5750($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5750);
    // 0x800FAFE8: lwc1        $f8, 0x5754($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5754);
    // 0x800FAFEC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800FAFF0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800FAFF4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800FAFF8: swc1        $f16, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f16.u32l;
    // 0x800FAFFC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB000: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB004: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x800FB008: lwc1        $f7, 0x5758($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5758);
    // 0x800FB00C: lwc1        $f6, 0x575C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X575C);
    // 0x800FB010: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800FB014: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800FB018: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800FB01C: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x800FB020: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB024: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB028: lwc1        $f16, 0x14($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800FB02C: lwc1        $f5, 0x5760($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5760);
    // 0x800FB030: lwc1        $f4, 0x5764($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5764);
    // 0x800FB034: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800FB038: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800FB03C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800FB040: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
L_800FB044:
    // 0x800FB044: b           L_800FB04C
    // 0x800FB048: nop

        goto L_800FB04C;
    // 0x800FB048: nop

L_800FB04C:
    // 0x800FB04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FB054: jr          $ra
    // 0x800FB058: nop

    return;
    // 0x800FB058: nop

;}
RECOMP_FUNC void func_800B9D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B9D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B9D74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B9D78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B9D7C: jal         0x8002B0E4
    // 0x800B9D80: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800B9D80: nop

    after_0:
    // 0x800B9D84: b           L_800B9D8C
    // 0x800B9D88: nop

        goto L_800B9D8C;
    // 0x800B9D88: nop

L_800B9D8C:
    // 0x800B9D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B9D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B9D94: jr          $ra
    // 0x800B9D98: nop

    return;
    // 0x800B9D98: nop

;}
RECOMP_FUNC void func_800C7160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C7160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C7164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C7168: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C716C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C7170: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C7174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C7178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C717C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C7180: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C7184: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C7188: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C718C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C7190: nop

    // 0x800C7194: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800C7198: sltiu       $at, $t9, 0x8
    ctx->r1 = ctx->r25 < 0X8 ? 1 : 0;
    // 0x800C719C: beq         $at, $zero, L_800C7240
    if (ctx->r1 == 0) {
        // 0x800C71A0: nop
    
            goto L_800C7240;
    }
    // 0x800C71A0: nop

    // 0x800C71A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C71A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C71AC: addu        $at, $at, $t9
    gpr jr_addend_800C71B8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C71B0: lw          $t9, 0x4DF8($at)
    ctx->r25 = ADD32(ctx->r1, 0X4DF8);
    // 0x800C71B4: nop

    // 0x800C71B8: jr          $t9
    // 0x800C71BC: nop

    switch (jr_addend_800C71B8 >> 2) {
        case 0: goto L_800C71C0; break;
        case 1: goto L_800C71D0; break;
        case 2: goto L_800C71E0; break;
        case 3: goto L_800C71F0; break;
        case 4: goto L_800C7200; break;
        case 5: goto L_800C7210; break;
        case 6: goto L_800C7220; break;
        case 7: goto L_800C7230; break;
        default: switch_error(__func__, 0x800C71B8, 0x80114DF8);
    }
    // 0x800C71BC: nop

L_800C71C0:
    // 0x800C71C0: jal         0x800C5F80
    // 0x800C71C4: nop

    func_800C5F80(rdram, ctx);
        goto after_0;
    // 0x800C71C4: nop

    after_0:
    // 0x800C71C8: b           L_800C7248
    // 0x800C71CC: nop

        goto L_800C7248;
    // 0x800C71CC: nop

L_800C71D0:
    // 0x800C71D0: jal         0x800C60F0
    // 0x800C71D4: nop

    func_800C60F0(rdram, ctx);
        goto after_1;
    // 0x800C71D4: nop

    after_1:
    // 0x800C71D8: b           L_800C7248
    // 0x800C71DC: nop

        goto L_800C7248;
    // 0x800C71DC: nop

L_800C71E0:
    // 0x800C71E0: jal         0x800C639C
    // 0x800C71E4: nop

    func_800C639C(rdram, ctx);
        goto after_2;
    // 0x800C71E4: nop

    after_2:
    // 0x800C71E8: b           L_800C7248
    // 0x800C71EC: nop

        goto L_800C7248;
    // 0x800C71EC: nop

L_800C71F0:
    // 0x800C71F0: jal         0x800C66B4
    // 0x800C71F4: nop

    func_800C66B4(rdram, ctx);
        goto after_3;
    // 0x800C71F4: nop

    after_3:
    // 0x800C71F8: b           L_800C7248
    // 0x800C71FC: nop

        goto L_800C7248;
    // 0x800C71FC: nop

L_800C7200:
    // 0x800C7200: jal         0x800C689C
    // 0x800C7204: nop

    func_800C689C(rdram, ctx);
        goto after_4;
    // 0x800C7204: nop

    after_4:
    // 0x800C7208: b           L_800C7248
    // 0x800C720C: nop

        goto L_800C7248;
    // 0x800C720C: nop

L_800C7210:
    // 0x800C7210: jal         0x800C6B8C
    // 0x800C7214: nop

    func_800C6B8C(rdram, ctx);
        goto after_5;
    // 0x800C7214: nop

    after_5:
    // 0x800C7218: b           L_800C7248
    // 0x800C721C: nop

        goto L_800C7248;
    // 0x800C721C: nop

L_800C7220:
    // 0x800C7220: jal         0x800C6DF0
    // 0x800C7224: nop

    func_800C6DF0(rdram, ctx);
        goto after_6;
    // 0x800C7224: nop

    after_6:
    // 0x800C7228: b           L_800C7248
    // 0x800C722C: nop

        goto L_800C7248;
    // 0x800C722C: nop

L_800C7230:
    // 0x800C7230: jal         0x800C7130
    // 0x800C7234: nop

    func_800C7130(rdram, ctx);
        goto after_7;
    // 0x800C7234: nop

    after_7:
    // 0x800C7238: b           L_800C7248
    // 0x800C723C: nop

        goto L_800C7248;
    // 0x800C723C: nop

L_800C7240:
    // 0x800C7240: b           L_800C7248
    // 0x800C7244: nop

        goto L_800C7248;
    // 0x800C7244: nop

L_800C7248:
    // 0x800C7248: b           L_800C7250
    // 0x800C724C: nop

        goto L_800C7250;
    // 0x800C724C: nop

L_800C7250:
    // 0x800C7250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C7254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C7258: jr          $ra
    // 0x800C725C: nop

    return;
    // 0x800C725C: nop

;}
RECOMP_FUNC void func_80067238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067238: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006723C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80067240: lbu         $t6, 0x76E4($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E4);
    // 0x80067244: nop

    // 0x80067248: beq         $t6, $zero, L_800673C4
    if (ctx->r14 == 0) {
        // 0x8006724C: nop
    
            goto L_800673C4;
    }
    // 0x8006724C: nop

    // 0x80067250: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80067254: addiu       $t7, $t7, 0x5218
    ctx->r15 = ADD32(ctx->r15, 0X5218);
    // 0x80067258: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8006725C: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80067260: bne         $t8, $at, L_800673C4
    if (ctx->r24 != ctx->r1) {
        // 0x80067264: nop
    
            goto L_800673C4;
    }
    // 0x80067264: nop

    // 0x80067268: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8006726C: addiu       $t9, $t9, 0x5220
    ctx->r25 = ADD32(ctx->r25, 0X5220);
    // 0x80067270: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80067274: nop

    // 0x80067278: bne         $t0, $zero, L_800673C4
    if (ctx->r8 != 0) {
        // 0x8006727C: nop
    
            goto L_800673C4;
    }
    // 0x8006727C: nop

    // 0x80067280: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067284: sb          $zero, 0x76E0($at)
    MEM_B(0X76E0, ctx->r1) = 0;
    // 0x80067288: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8006728C:
    // 0x8006728C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80067290: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80067294: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80067298: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006729C: lw          $t3, 0x51F0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51F0);
    // 0x800672A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800672A4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800672A8: sw          $t3, 0x76F0($at)
    MEM_W(0X76F0, ctx->r1) = ctx->r11;
    // 0x800672AC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800672B0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800672B4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800672B8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800672BC: lw          $t6, 0x51F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51F8);
    // 0x800672C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800672C4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800672C8: sw          $t6, 0x7700($at)
    MEM_W(0X7700, ctx->r1) = ctx->r14;
    // 0x800672CC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800672D0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800672D4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800672D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800672DC: lw          $t9, 0x5200($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5200);
    // 0x800672E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800672E4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800672E8: sw          $t9, 0x7710($at)
    MEM_W(0X7710, ctx->r1) = ctx->r25;
    // 0x800672EC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800672F0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800672F4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800672F8: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800672FC: lw          $t3, 0x5208($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5208);
    // 0x80067300: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067304: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80067308: sw          $t3, 0x7720($at)
    MEM_W(0X7720, ctx->r1) = ctx->r11;
    // 0x8006730C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80067310: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80067314: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80067318: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8006731C: lw          $t6, 0x5210($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5210);
    // 0x80067320: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067324: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80067328: sw          $t6, 0x7730($at)
    MEM_W(0X7730, ctx->r1) = ctx->r14;
    // 0x8006732C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80067330: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80067334: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80067338: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8006733C: lwc1        $f4, 0x5228($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5228);
    // 0x80067340: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067344: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80067348: swc1        $f4, 0x7760($at)
    MEM_W(0X7760, ctx->r1) = ctx->f4.u32l;
    // 0x8006734C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80067350: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80067354: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80067358: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x8006735C: lw          $t0, 0x5218($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5218);
    // 0x80067360: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067364: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80067368: sw          $t0, 0x7740($at)
    MEM_W(0X7740, ctx->r1) = ctx->r8;
    // 0x8006736C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80067370: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80067374: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x80067378: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8006737C: lw          $t2, 0x5220($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5220);
    // 0x80067380: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80067384: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80067388: sw          $t2, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = ctx->r10;
    // 0x8006738C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80067390: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80067394: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80067398: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006739C: lw          $t5, 0x5230($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5230);
    // 0x800673A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800673A4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800673A8: sw          $t5, 0x7770($at)
    MEM_W(0X7770, ctx->r1) = ctx->r13;
    // 0x800673AC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800673B0: nop

    // 0x800673B4: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800673B8: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x800673BC: bne         $at, $zero, L_8006728C
    if (ctx->r1 != 0) {
        // 0x800673C0: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_8006728C;
    }
    // 0x800673C0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_800673C4:
    // 0x800673C4: b           L_800673CC
    // 0x800673C8: nop

        goto L_800673CC;
    // 0x800673C8: nop

L_800673CC:
    // 0x800673CC: jr          $ra
    // 0x800673D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800673D0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BEFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BEFF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BEFF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BEFF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BEFFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BF000: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BF004: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BF008: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF00C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BF010: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF014: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BF018: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BF01C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BF020: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BF024: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BF028: nop

    // 0x800BF02C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BF030: nop

    // 0x800BF034: bne         $t1, $zero, L_800BF174
    if (ctx->r9 != 0) {
        // 0x800BF038: nop
    
            goto L_800BF174;
    }
    // 0x800BF038: nop

    // 0x800BF03C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BF040: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BF044: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BF048: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BF04C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BF050: nop

    // 0x800BF054: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BF058: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BF05C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BF060: nop

    // 0x800BF064: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BF068: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BF06C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x800BF070: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800BF074: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BF078: nop

    // 0x800BF07C: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800BF080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF084: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800BF088: addiu       $t9, $t9, 0x7E64
    ctx->r25 = ADD32(ctx->r25, 0X7E64);
    // 0x800BF08C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF090: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800BF094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BF098: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BF09C: jal         0x8001C0EC
    // 0x800BF0A0: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800BF0A0: addiu       $a3, $zero, 0x114
    ctx->r7 = ADD32(0, 0X114);
    after_0:
    // 0x800BF0A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF0A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF0AC: jal         0x8001BB34
    // 0x800BF0B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800BF0B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800BF0B4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BF0B8: nop

    // 0x800BF0BC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800BF0C0: nop

    // 0x800BF0C4: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x800BF0C8: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x800BF0CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BF0D0: beq         $t2, $at, L_800BF0F4
    if (ctx->r10 == ctx->r1) {
        // 0x800BF0D4: nop
    
            goto L_800BF0F4;
    }
    // 0x800BF0D4: nop

    // 0x800BF0D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF0DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF0E0: jal         0x800281A4
    // 0x800BF0E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x800BF0E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800BF0E8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BF0EC: jal         0x8002B0E4
    // 0x800BF0F0: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800BF0F0: nop

    after_3:
L_800BF0F4:
    // 0x800BF0F4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BF0F8: nop

    // 0x800BF0FC: lh          $t4, 0xEA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XEA);
    // 0x800BF100: nop

    // 0x800BF104: sh          $t4, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r12;
    // 0x800BF108: lh          $t5, 0x22($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X22);
    // 0x800BF10C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BF110: beq         $t5, $at, L_800BF134
    if (ctx->r13 == ctx->r1) {
        // 0x800BF114: nop
    
            goto L_800BF134;
    }
    // 0x800BF114: nop

    // 0x800BF118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF11C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF120: jal         0x800281A4
    // 0x800BF124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_4;
    // 0x800BF124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x800BF128: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BF12C: jal         0x8002B0E4
    // 0x800BF130: nop

    func_8002B0E4(rdram, ctx);
        goto after_5;
    // 0x800BF130: nop

    after_5:
L_800BF134:
    // 0x800BF134: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BF138: nop

    // 0x800BF13C: lh          $t7, 0xEC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEC);
    // 0x800BF140: nop

    // 0x800BF144: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
    // 0x800BF148: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800BF14C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BF150: beq         $t8, $at, L_800BF174
    if (ctx->r24 == ctx->r1) {
        // 0x800BF154: nop
    
            goto L_800BF174;
    }
    // 0x800BF154: nop

    // 0x800BF158: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF15C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF160: jal         0x800281A4
    // 0x800BF164: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x800BF164: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x800BF168: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BF16C: jal         0x8002B0E4
    // 0x800BF170: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800BF170: nop

    after_7:
L_800BF174:
    // 0x800BF174: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF178: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF17C: jal         0x8002A8B4
    // 0x800BF180: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_8;
    // 0x800BF180: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_8:
    // 0x800BF184: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF18C: jal         0x80029C40
    // 0x800BF190: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800BF190: nop

    after_9:
    // 0x800BF194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF19C: jal         0x80029D04
    // 0x800BF1A0: nop

    func_80029D04(rdram, ctx);
        goto after_10;
    // 0x800BF1A0: nop

    after_10:
    // 0x800BF1A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BF1A8: nop

    // 0x800BF1AC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800BF1B0: nop

    // 0x800BF1B4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800BF1B8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800BF1BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF1C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF1C4: jal         0x8001B44C
    // 0x800BF1C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_11;
    // 0x800BF1C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800BF1CC: beq         $v0, $zero, L_800BF1E4
    if (ctx->r2 == 0) {
        // 0x800BF1D0: nop
    
            goto L_800BF1E4;
    }
    // 0x800BF1D0: nop

    // 0x800BF1D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF1D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF1DC: jal         0x8001BBDC
    // 0x800BF1E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_12;
    // 0x800BF1E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_800BF1E4:
    // 0x800BF1E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BF1E8: nop

    // 0x800BF1EC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800BF1F0: nop

    // 0x800BF1F4: bgtz        $t3, L_800BF228
    if (SIGNED(ctx->r11) > 0) {
        // 0x800BF1F8: nop
    
            goto L_800BF228;
    }
    // 0x800BF1F8: nop

    // 0x800BF1FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BF200: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x800BF204: lwc1        $f12, 0x0($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800BF208: lwc1        $f14, 0x4($t4)
    ctx->f14.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800BF20C: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x800BF210: jal         0x8007EDF4
    // 0x800BF214: nop

    func_8007EDF4(rdram, ctx);
        goto after_13;
    // 0x800BF214: nop

    after_13:
    // 0x800BF218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF21C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF220: jal         0x8002B114
    // 0x800BF224: nop

    func_8002B114(rdram, ctx);
        goto after_14;
    // 0x800BF224: nop

    after_14:
L_800BF228:
    // 0x800BF228: b           L_800BF230
    // 0x800BF22C: nop

        goto L_800BF230;
    // 0x800BF22C: nop

L_800BF230:
    // 0x800BF230: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BF238: jr          $ra
    // 0x800BF23C: nop

    return;
    // 0x800BF23C: nop

;}
RECOMP_FUNC void func_8008C128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008C12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C130: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008C134: sh          $t6, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r14;
L_8008C138:
    // 0x8008C138: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C13C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008C140: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008C144: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C148: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008C14C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008C150: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008C154: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C158: beq         $t9, $at, L_8008C5E4
    if (ctx->r25 == ctx->r1) {
        // 0x8008C15C: nop
    
            goto L_8008C5E4;
    }
    // 0x8008C15C: nop

    // 0x8008C160: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C164: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008C168: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008C16C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008C170: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008C174: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008C178: lw          $t2, 0x4D48($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4D48);
    // 0x8008C17C: nop

    // 0x8008C180: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8008C184: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C188: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008C18C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008C190: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008C194: lh          $t5, 0x4C28($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4C28);
    // 0x8008C198: nop

    // 0x8008C19C: bne         $t5, $zero, L_8008C204
    if (ctx->r13 != 0) {
        // 0x8008C1A0: nop
    
            goto L_8008C204;
    }
    // 0x8008C1A0: nop

    // 0x8008C1A4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C1A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008C1AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008C1B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008C1B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008C1B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008C1BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008C1C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C1C4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008C1C8: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x8008C1CC: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C1D0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C1D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008C1D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008C1DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008C1E0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008C1E4: sh          $zero, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = 0;
    // 0x8008C1E8: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C1EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C1F0: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8008C1F4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8008C1F8: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8008C1FC: b           L_8008C248
    // 0x8008C200: sh          $t0, 0x4C28($at)
    MEM_H(0X4C28, ctx->r1) = ctx->r8;
        goto L_8008C248;
    // 0x8008C200: sh          $t0, 0x4C28($at)
    MEM_H(0X4C28, ctx->r1) = ctx->r8;
L_8008C204:
    // 0x8008C204: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C208: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008C20C: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008C210: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008C214: lh          $t5, 0x4C28($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4C28);
    // 0x8008C218: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C21C: beq         $t5, $at, L_8008C248
    if (ctx->r13 == ctx->r1) {
        // 0x8008C220: nop
    
            goto L_8008C248;
    }
    // 0x8008C220: nop

    // 0x8008C224: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C228: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008C22C: addiu       $t8, $t8, 0x4C28
    ctx->r24 = ADD32(ctx->r24, 0X4C28);
    // 0x8008C230: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008C234: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008C238: lh          $t1, 0x0($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X0);
    // 0x8008C23C: nop

    // 0x8008C240: addiu       $t0, $t1, -0x1
    ctx->r8 = ADD32(ctx->r9, -0X1);
    // 0x8008C244: sh          $t0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r8;
L_8008C248:
    // 0x8008C248: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C24C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008C250: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008C254: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008C258: lh          $t4, 0x4C58($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4C58);
    // 0x8008C25C: nop

    // 0x8008C260: bne         $t4, $zero, L_8008C2AC
    if (ctx->r12 != 0) {
        // 0x8008C264: nop
    
            goto L_8008C2AC;
    }
    // 0x8008C264: nop

    // 0x8008C268: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C26C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008C270: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008C274: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008C278: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008C27C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008C280: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008C284: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C288: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008C28C: swc1        $f6, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f6.u32l;
    // 0x8008C290: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C294: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C298: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x8008C29C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008C2A0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8008C2A4: b           L_8008C2F0
    // 0x8008C2A8: sh          $t7, 0x4C58($at)
    MEM_H(0X4C58, ctx->r1) = ctx->r15;
        goto L_8008C2F0;
    // 0x8008C2A8: sh          $t7, 0x4C58($at)
    MEM_H(0X4C58, ctx->r1) = ctx->r15;
L_8008C2AC:
    // 0x8008C2AC: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C2B0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008C2B4: sll         $t9, $t0, 1
    ctx->r25 = S32(ctx->r8 << 1);
    // 0x8008C2B8: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x8008C2BC: lh          $t2, 0x4C58($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4C58);
    // 0x8008C2C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C2C4: beq         $t2, $at, L_8008C2F0
    if (ctx->r10 == ctx->r1) {
        // 0x8008C2C8: nop
    
            goto L_8008C2F0;
    }
    // 0x8008C2C8: nop

    // 0x8008C2CC: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C2D0: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008C2D4: addiu       $t5, $t5, 0x4C58
    ctx->r13 = ADD32(ctx->r13, 0X4C58);
    // 0x8008C2D8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008C2DC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008C2E0: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x8008C2E4: nop

    // 0x8008C2E8: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8008C2EC: sh          $t7, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r15;
L_8008C2F0:
    // 0x8008C2F0: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C2F4: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008C2F8: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    // 0x8008C2FC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8008C300: lh          $t9, 0x4C88($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4C88);
    // 0x8008C304: nop

    // 0x8008C308: bne         $t9, $zero, L_8008C37C
    if (ctx->r25 != 0) {
        // 0x8008C30C: nop
    
            goto L_8008C37C;
    }
    // 0x8008C30C: nop

    // 0x8008C310: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C314: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008C318: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008C31C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008C320: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008C324: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008C328: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008C32C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C330: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008C334: swc1        $f8, 0x4180($at)
    MEM_W(0X4180, ctx->r1) = ctx->f8.u32l;
    // 0x8008C338: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C33C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008C340: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008C344: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008C348: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008C34C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008C350: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008C354: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C358: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008C35C: swc1        $f10, 0x4184($at)
    MEM_W(0X4184, ctx->r1) = ctx->f10.u32l;
    // 0x8008C360: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C364: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C368: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x8008C36C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8008C370: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8008C374: b           L_8008C3C0
    // 0x8008C378: sh          $t8, 0x4C88($at)
    MEM_H(0X4C88, ctx->r1) = ctx->r24;
        goto L_8008C3C0;
    // 0x8008C378: sh          $t8, 0x4C88($at)
    MEM_H(0X4C88, ctx->r1) = ctx->r24;
L_8008C37C:
    // 0x8008C37C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C380: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008C384: sll         $t0, $t1, 1
    ctx->r8 = S32(ctx->r9 << 1);
    // 0x8008C388: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8008C38C: lh          $t9, 0x4C88($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4C88);
    // 0x8008C390: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C394: beq         $t9, $at, L_8008C3C0
    if (ctx->r25 == ctx->r1) {
        // 0x8008C398: nop
    
            goto L_8008C3C0;
    }
    // 0x8008C398: nop

    // 0x8008C39C: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C3A0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8008C3A4: addiu       $t4, $t4, 0x4C88
    ctx->r12 = ADD32(ctx->r12, 0X4C88);
    // 0x8008C3A8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008C3AC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008C3B0: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x8008C3B4: nop

    // 0x8008C3B8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8008C3BC: sh          $t8, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r24;
L_8008C3C0:
    // 0x8008C3C0: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C3C4: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8008C3C8: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x8008C3CC: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x8008C3D0: lh          $t0, 0x4CB8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4CB8);
    // 0x8008C3D4: nop

    // 0x8008C3D8: bne         $t0, $zero, L_8008C408
    if (ctx->r8 != 0) {
        // 0x8008C3DC: nop
    
            goto L_8008C408;
    }
    // 0x8008C3DC: nop

    // 0x8008C3E0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C3E4: jal         0x8001BB34
    // 0x8008C3E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8008C3E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8008C3EC: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C3F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C3F4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008C3F8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008C3FC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8008C400: b           L_8008C458
    // 0x8008C404: sh          $t9, 0x4CB8($at)
    MEM_H(0X4CB8, ctx->r1) = ctx->r25;
        goto L_8008C458;
    // 0x8008C404: sh          $t9, 0x4CB8($at)
    MEM_H(0X4CB8, ctx->r1) = ctx->r25;
L_8008C408:
    // 0x8008C408: lh          $t4, 0x1A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C40C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008C410: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x8008C414: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C418: lh          $t8, 0x4CB8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4CB8);
    // 0x8008C41C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C420: beq         $t8, $at, L_8008C458
    if (ctx->r24 == ctx->r1) {
        // 0x8008C424: nop
    
            goto L_8008C458;
    }
    // 0x8008C424: nop

    // 0x8008C428: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C42C: jal         0x8008ED8C
    // 0x8008C430: nop

    func_8008ED8C(rdram, ctx);
        goto after_1;
    // 0x8008C430: nop

    after_1:
    // 0x8008C434: lh          $t5, 0x1A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C438: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008C43C: addiu       $t1, $t1, 0x4CB8
    ctx->r9 = ADD32(ctx->r9, 0X4CB8);
    // 0x8008C440: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8008C444: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x8008C448: lh          $t2, 0x0($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X0);
    // 0x8008C44C: nop

    // 0x8008C450: addiu       $t9, $t2, -0x1
    ctx->r25 = ADD32(ctx->r10, -0X1);
    // 0x8008C454: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
L_8008C458:
    // 0x8008C458: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C45C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008C460: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008C464: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x8008C468: lh          $t7, 0x4CE8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4CE8);
    // 0x8008C46C: nop

    // 0x8008C470: bne         $t7, $zero, L_8008C50C
    if (ctx->r15 != 0) {
        // 0x8008C474: nop
    
            goto L_8008C50C;
    }
    // 0x8008C474: nop

    // 0x8008C478: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C47C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008C480: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8008C484: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8008C488: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008C48C: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8008C490: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008C494: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C498: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008C49C: swc1        $f16, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f16.u32l;
    // 0x8008C4A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C4A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008C4A8: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x8008C4AC: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8008C4B0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008C4B4: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8008C4B8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008C4BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C4C0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008C4C4: swc1        $f18, 0x422C($at)
    MEM_W(0X422C, ctx->r1) = ctx->f18.u32l;
    // 0x8008C4C8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C4CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008C4D0: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x8008C4D4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8008C4D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008C4DC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x8008C4E0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008C4E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008C4E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008C4EC: swc1        $f4, 0x4230($at)
    MEM_W(0X4230, ctx->r1) = ctx->f4.u32l;
    // 0x8008C4F0: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C4F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008C4F8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8008C4FC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008C500: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8008C504: b           L_8008C550
    // 0x8008C508: sh          $t0, 0x4CE8($at)
    MEM_H(0X4CE8, ctx->r1) = ctx->r8;
        goto L_8008C550;
    // 0x8008C508: sh          $t0, 0x4CE8($at)
    MEM_H(0X4CE8, ctx->r1) = ctx->r8;
L_8008C50C:
    // 0x8008C50C: lh          $t7, 0x1A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C510: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008C514: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8008C518: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x8008C51C: lh          $t5, 0x4CE8($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4CE8);
    // 0x8008C520: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008C524: beq         $t5, $at, L_8008C550
    if (ctx->r13 == ctx->r1) {
        // 0x8008C528: nop
    
            goto L_8008C550;
    }
    // 0x8008C528: nop

    // 0x8008C52C: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C530: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8008C534: addiu       $t2, $t2, 0x4CE8
    ctx->r10 = ADD32(ctx->r10, 0X4CE8);
    // 0x8008C538: sll         $t1, $t6, 1
    ctx->r9 = S32(ctx->r14 << 1);
    // 0x8008C53C: addu        $t9, $t1, $t2
    ctx->r25 = ADD32(ctx->r9, ctx->r10);
    // 0x8008C540: lh          $t3, 0x0($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X0);
    // 0x8008C544: nop

    // 0x8008C548: addiu       $t0, $t3, -0x1
    ctx->r8 = ADD32(ctx->r11, -0X1);
    // 0x8008C54C: sh          $t0, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r8;
L_8008C550:
    // 0x8008C550: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C554: jal         0x8008E9DC
    // 0x8008C558: nop

    func_8008E9DC(rdram, ctx);
        goto after_2;
    // 0x8008C558: nop

    after_2:
    // 0x8008C55C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C560: jal         0x8008D188
    // 0x8008C564: nop

    func_8008D188(rdram, ctx);
        goto after_3;
    // 0x8008C564: nop

    after_3:
    // 0x8008C568: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C56C: jal         0x8008F1DC
    // 0x8008C570: nop

    func_8008F1DC(rdram, ctx);
        goto after_4;
    // 0x8008C570: nop

    after_4:
    // 0x8008C574: lh          $t4, 0x1A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C578: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008C57C: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x8008C580: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008C584: lh          $t8, 0x4D18($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4D18);
    // 0x8008C588: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008C58C: bne         $t8, $at, L_8008C5A8
    if (ctx->r24 != ctx->r1) {
        // 0x8008C590: nop
    
            goto L_8008C5A8;
    }
    // 0x8008C590: nop

    // 0x8008C594: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C598: jal         0x8008DD54
    // 0x8008C59C: nop

    func_8008DD54(rdram, ctx);
        goto after_5;
    // 0x8008C59C: nop

    after_5:
    // 0x8008C5A0: b           L_8008C5B4
    // 0x8008C5A4: nop

        goto L_8008C5B4;
    // 0x8008C5A4: nop

L_8008C5A8:
    // 0x8008C5A8: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C5AC: jal         0x8008D3F8
    // 0x8008C5B0: nop

    func_8008D3F8(rdram, ctx);
        goto after_6;
    // 0x8008C5B0: nop

    after_6:
L_8008C5B4:
    // 0x8008C5B4: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C5B8: jal         0x8008E190
    // 0x8008C5BC: nop

    func_8008E190(rdram, ctx);
        goto after_7;
    // 0x8008C5BC: nop

    after_7:
    // 0x8008C5C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C5C4: jal         0x8001CEF4
    // 0x8008C5C8: nop

    func_8001CEF4(rdram, ctx);
        goto after_8;
    // 0x8008C5C8: nop

    after_8:
    // 0x8008C5CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C5D0: jal         0x8001CD20
    // 0x8008C5D4: nop

    func_8001CD20(rdram, ctx);
        goto after_9;
    // 0x8008C5D4: nop

    after_9:
    // 0x8008C5D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C5DC: jal         0x8001AD6C
    // 0x8008C5E0: nop

    func_8001AD6C(rdram, ctx);
        goto after_10;
    // 0x8008C5E0: nop

    after_10:
L_8008C5E4:
    // 0x8008C5E4: lh          $t5, 0x1A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1A);
    // 0x8008C5E8: nop

    // 0x8008C5EC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8008C5F0: sll         $t1, $t6, 16
    ctx->r9 = S32(ctx->r14 << 16);
    // 0x8008C5F4: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8008C5F8: slti        $at, $t2, 0x18
    ctx->r1 = SIGNED(ctx->r10) < 0X18 ? 1 : 0;
    // 0x8008C5FC: bne         $at, $zero, L_8008C138
    if (ctx->r1 != 0) {
        // 0x8008C600: sh          $t6, 0x1A($sp)
        MEM_H(0X1A, ctx->r29) = ctx->r14;
            goto L_8008C138;
    }
    // 0x8008C600: sh          $t6, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r14;
    // 0x8008C604: b           L_8008C60C
    // 0x8008C608: nop

        goto L_8008C60C;
    // 0x8008C608: nop

L_8008C60C:
    // 0x8008C60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008C614: jr          $ra
    // 0x8008C618: nop

    return;
    // 0x8008C618: nop

;}
RECOMP_FUNC void func_800D7580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7580: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D7584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D7588: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D758C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D7590: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D7594: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D7598: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D759C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D75A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D75A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D75A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D75AC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D75B0: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D75B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D75B8: beq         $s0, $at, L_800D75D4
    if (ctx->r16 == ctx->r1) {
        // 0x800D75BC: nop
    
            goto L_800D75D4;
    }
    // 0x800D75BC: nop

    // 0x800D75C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D75C4: beq         $s0, $at, L_800D75E4
    if (ctx->r16 == ctx->r1) {
        // 0x800D75C8: nop
    
            goto L_800D75E4;
    }
    // 0x800D75C8: nop

    // 0x800D75CC: b           L_800D75F4
    // 0x800D75D0: nop

        goto L_800D75F4;
    // 0x800D75D0: nop

L_800D75D4:
    // 0x800D75D4: jal         0x800D6DFC
    // 0x800D75D8: nop

    func_800D6DFC(rdram, ctx);
        goto after_0;
    // 0x800D75D8: nop

    after_0:
    // 0x800D75DC: b           L_800D75FC
    // 0x800D75E0: nop

        goto L_800D75FC;
    // 0x800D75E0: nop

L_800D75E4:
    // 0x800D75E4: jal         0x800D7348
    // 0x800D75E8: nop

    func_800D7348(rdram, ctx);
        goto after_1;
    // 0x800D75E8: nop

    after_1:
    // 0x800D75EC: b           L_800D75FC
    // 0x800D75F0: nop

        goto L_800D75FC;
    // 0x800D75F0: nop

L_800D75F4:
    // 0x800D75F4: b           L_800D75FC
    // 0x800D75F8: nop

        goto L_800D75FC;
    // 0x800D75F8: nop

L_800D75FC:
    // 0x800D75FC: b           L_800D7604
    // 0x800D7600: nop

        goto L_800D7604;
    // 0x800D7600: nop

L_800D7604:
    // 0x800D7604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D7608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D760C: jr          $ra
    // 0x800D7610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D7610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void stub_9B110_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B30A4: jr          $ra
    // 0x800B30A8: nop

    return;
    // 0x800B30A8: nop

    // 0x800B30AC: jr          $ra
    // 0x800B30B0: nop

    return;
    // 0x800B30B0: nop

;}
RECOMP_FUNC void func_800D14A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D14A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D14AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D14B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D14B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D14B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D14BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D14C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D14C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D14C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D14CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D14D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D14D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D14D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D14DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D14E0: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D14E4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D14E8: nop

    // 0x800D14EC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D14F0: nop

    // 0x800D14F4: bne         $t1, $zero, L_800D1538
    if (ctx->r9 != 0) {
        // 0x800D14F8: nop
    
            goto L_800D1538;
    }
    // 0x800D14F8: nop

    // 0x800D14FC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1500: nop

    // 0x800D1504: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D1508: nop

    // 0x800D150C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D1510: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D1514: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1518: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800D151C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800D1520: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1524: nop

    // 0x800D1528: sh          $zero, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = 0;
    // 0x800D152C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1530: nop

    // 0x800D1534: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
L_800D1538:
    // 0x800D1538: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D153C: nop

    // 0x800D1540: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800D1544: nop

    // 0x800D1548: bne         $t0, $zero, L_800D1730
    if (ctx->r8 != 0) {
        // 0x800D154C: nop
    
            goto L_800D1730;
    }
    // 0x800D154C: nop

    // 0x800D1550: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1554: nop

    // 0x800D1558: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x800D155C: nop

    // 0x800D1560: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x800D1564: beq         $at, $zero, L_800D1728
    if (ctx->r1 == 0) {
        // 0x800D1568: nop
    
            goto L_800D1728;
    }
    // 0x800D1568: nop

    // 0x800D156C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1570: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D1574: lwc1        $f4, 0x8($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X8);
    // 0x800D1578: lw          $a2, 0x0($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X0);
    // 0x800D157C: lw          $a3, 0x4($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X4);
    // 0x800D1580: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D1584: addiu       $a1, $a1, 0x40D8
    ctx->r5 = ADD32(ctx->r5, 0X40D8);
    // 0x800D1588: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D158C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800D1590: jal         0x80027464
    // 0x800D1594: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D1594: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800D1598: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800D159C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800D15A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D15A4: beq         $t2, $at, L_800D1704
    if (ctx->r10 == ctx->r1) {
        // 0x800D15A8: nop
    
            goto L_800D1704;
    }
    // 0x800D15A8: nop

    // 0x800D15AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D15B0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D15B4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800D15B8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x800D15BC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x800D15C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D15C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800D15C8: jal         0x800295C0
    // 0x800D15CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_1;
    // 0x800D15CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x800D15D0: beq         $v0, $zero, L_800D1604
    if (ctx->r2 == 0) {
        // 0x800D15D4: nop
    
            goto L_800D1604;
    }
    // 0x800D15D4: nop

    // 0x800D15D8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800D15DC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D15E0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800D15E4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D15E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D15EC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D15F0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D15F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D15F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D15FC: b           L_800D162C
    // 0x800D1600: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
        goto L_800D162C;
    // 0x800D1600: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
L_800D1604:
    // 0x800D1604: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800D1608: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800D160C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D1610: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D1614: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D1618: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D161C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D1620: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1624: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D1628: swc1        $f18, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f18.u32l;
L_800D162C:
    // 0x800D162C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800D1630: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800D1634: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D1638: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D163C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800D1640: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D1644: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800D1648: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800D164C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D1650: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D1654: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D1658: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D165C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800D1660: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800D1664: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800D1668: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800D166C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800D1670: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x800D1674: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x800D1678: lwc1        $f6, 0x1C($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800D167C: nop

    // 0x800D1680: swc1        $f6, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f6.u32l;
    // 0x800D1684: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800D1688: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800D168C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800D1690: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D1694: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D1698: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D169C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800D16A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D16A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D16A8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D16AC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800D16B0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D16B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D16B8: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800D16BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D16C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D16C4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800D16C8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D16CC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800D16D0: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x800D16D4: lwc1        $f20, 0x14($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X14);
    // 0x800D16D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D16DC: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x800D16E0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800D16E4: nop

    // 0x800D16E8: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800D16EC: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800D16F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800D16F4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800D16F8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800D16FC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800D1700: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800D1704:
    // 0x800D1704: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1708: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x800D170C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x800D1710: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1714: nop

    // 0x800D1718: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800D171C: nop

    // 0x800D1720: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800D1724: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
L_800D1728:
    // 0x800D1728: b           L_800D1748
    // 0x800D172C: nop

        goto L_800D1748;
    // 0x800D172C: nop

L_800D1730:
    // 0x800D1730: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1734: nop

    // 0x800D1738: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800D173C: nop

    // 0x800D1740: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800D1744: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_800D1748:
    // 0x800D1748: b           L_800D1750
    // 0x800D174C: nop

        goto L_800D1750;
    // 0x800D174C: nop

L_800D1750:
    // 0x800D1750: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D1754: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D1758: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D175C: jr          $ra
    // 0x800D1760: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800D1760: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800CECC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CECC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800CECC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CECC8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CECCC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800CECD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CECD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CECD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CECDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CECE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CECE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CECE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CECEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CECF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CECF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CECF8: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800CECFC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CED00: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CED04: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CED08: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CED0C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CED10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CED14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CED18: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CED1C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CED20: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CED24: nop

    // 0x800CED28: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x800CED2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CED30: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CED34: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CED38: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CED3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CED40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CED44: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CED48: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CED4C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CED50: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800CED54: nop

    // 0x800CED58: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800CED5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CED60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CED64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CED68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CED6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CED70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CED74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CED78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CED7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CED80: lh          $t8, 0x423C($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423C);
    // 0x800CED84: nop

    // 0x800CED88: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x800CED8C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800CED90: nop

    // 0x800CED94: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800CED98: nop

    // 0x800CED9C: bne         $t0, $zero, L_800CF0B4
    if (ctx->r8 != 0) {
        // 0x800CEDA0: nop
    
            goto L_800CF0B4;
    }
    // 0x800CEDA0: nop

    // 0x800CEDA4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800CEDA8: nop

    // 0x800CEDAC: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800CEDB0: nop

    // 0x800CEDB4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800CEDB8: sb          $t3, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r11;
    // 0x800CEDBC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800CEDC0: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800CEDC4: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
    // 0x800CEDC8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800CEDCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CEDD0: beq         $t6, $at, L_800CEE00
    if (ctx->r14 == ctx->r1) {
        // 0x800CEDD4: nop
    
            goto L_800CEE00;
    }
    // 0x800CEDD4: nop

    // 0x800CEDD8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800CEDDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEDE0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CEDE4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CEDE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CEDEC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CEDF0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CEDF4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CEDF8: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x800CEDFC: sh          $t7, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r15;
L_800CEE00:
    // 0x800CEE00: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CEE04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CEE08: beq         $t0, $at, L_800CEE38
    if (ctx->r8 == ctx->r1) {
        // 0x800CEE0C: nop
    
            goto L_800CEE38;
    }
    // 0x800CEE0C: nop

    // 0x800CEE10: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CEE14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEE18: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x800CEE1C: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800CEE20: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CEE24: addu        $t1, $t1, $t3
    ctx->r9 = ADD32(ctx->r9, ctx->r11);
    // 0x800CEE28: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CEE2C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CEE30: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x800CEE34: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
L_800CEE38:
    // 0x800CEE38: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800CEE3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CEE40: beq         $t4, $at, L_800CEE70
    if (ctx->r12 == ctx->r1) {
        // 0x800CEE44: nop
    
            goto L_800CEE70;
    }
    // 0x800CEE44: nop

    // 0x800CEE48: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800CEE4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEE50: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800CEE54: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800CEE58: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CEE5C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x800CEE60: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CEE64: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CEE68: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x800CEE6C: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
L_800CEE70:
    // 0x800CEE70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CEE74: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800CEE78: nop

    // 0x800CEE7C: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x800CEE80: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800CEE84: nop

    // 0x800CEE88: lwc1        $f20, 0x2C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800CEE8C: nop

    // 0x800CEE90: swc1        $f20, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f20.u32l;
    // 0x800CEE94: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800CEE98: nop

    // 0x800CEE9C: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800CEEA0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800CEEA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CEEA8: beq         $t3, $at, L_800CEF2C
    if (ctx->r11 == ctx->r1) {
        // 0x800CEEAC: nop
    
            goto L_800CEF2C;
    }
    // 0x800CEEAC: nop

    // 0x800CEEB0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800CEEB4: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800CEEB8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800CEEBC: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800CEEC0: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x800CEEC4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CEEC8: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800CEECC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CEED0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800CEED4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CEED8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CEEDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEEE0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CEEE4: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x800CEEE8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CEEEC: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800CEEF0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CEEF4: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x800CEEF8: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800CEEFC: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800CEF00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEF04: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x800CEF08: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800CEF0C: nop

    // 0x800CEF10: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800CEF14: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CEF18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CEF1C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CEF20: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CEF24: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CEF28: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
L_800CEF2C:
    // 0x800CEF2C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CEF30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CEF34: beq         $t0, $at, L_800CEFB8
    if (ctx->r8 == ctx->r1) {
        // 0x800CEF38: nop
    
            goto L_800CEFB8;
    }
    // 0x800CEF38: nop

    // 0x800CEF3C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800CEF40: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800CEF44: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800CEF48: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800CEF4C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800CEF50: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CEF54: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800CEF58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CEF5C: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800CEF60: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CEF64: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CEF68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEF6C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800CEF70: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800CEF74: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CEF78: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800CEF7C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CEF80: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x800CEF84: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x800CEF88: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800CEF8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEF90: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800CEF94: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CEF98: nop

    // 0x800CEF9C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800CEFA0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800CEFA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CEFA8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800CEFAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CEFB0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CEFB4: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
L_800CEFB8:
    // 0x800CEFB8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800CEFBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CEFC0: beq         $t9, $at, L_800CF044
    if (ctx->r25 == ctx->r1) {
        // 0x800CEFC4: nop
    
            goto L_800CF044;
    }
    // 0x800CEFC4: nop

    // 0x800CEFC8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800CEFCC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800CEFD0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CEFD4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CEFD8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800CEFDC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CEFE0: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800CEFE4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CEFE8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CEFEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CEFF0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CEFF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CEFF8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800CEFFC: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x800CF000: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CF004: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800CF008: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CF00C: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x800CF010: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x800CF014: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800CF018: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CF01C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800CF020: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800CF024: nop

    // 0x800CF028: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x800CF02C: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800CF030: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CF034: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x800CF038: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CF03C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CF040: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
L_800CF044:
    // 0x800CF044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF048: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CF04C: addiu       $t7, $t7, -0x7D2C
    ctx->r15 = ADD32(ctx->r15, -0X7D2C);
    // 0x800CF050: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF054: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800CF058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CF05C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800CF060: jal         0x8001C0EC
    // 0x800CF064: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CF064: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_0:
    // 0x800CF068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF06C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF070: jal         0x8001BBDC
    // 0x800CF074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800CF074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800CF078: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CF07C: jal         0x8001BBDC
    // 0x800CF080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800CF080: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800CF084: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CF088: jal         0x8001BB34
    // 0x800CF08C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800CF08C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800CF090: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800CF094: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CF098: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800CF09C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CF0A0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CF0A4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CF0A8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CF0AC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800CF0B0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800CF0B4:
    // 0x800CF0B4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800CF0B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CF0BC: lh          $t2, 0x108($t3)
    ctx->r10 = MEM_H(ctx->r11, 0X108);
    // 0x800CF0C0: nop

    // 0x800CF0C4: bne         $t2, $at, L_800CF124
    if (ctx->r10 != ctx->r1) {
        // 0x800CF0C8: nop
    
            goto L_800CF124;
    }
    // 0x800CF0C8: nop

    // 0x800CF0CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF0D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF0D4: jal         0x800281A4
    // 0x800CF0D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_4;
    // 0x800CF0D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800CF0DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF0E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF0E4: jal         0x800281A4
    // 0x800CF0E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_5;
    // 0x800CF0E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x800CF0EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800CF0F0: jal         0x8002B0E4
    // 0x800CF0F4: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800CF0F4: nop

    after_6:
    // 0x800CF0F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF0FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF100: jal         0x800281A4
    // 0x800CF104: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x800CF104: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x800CF108: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800CF10C: jal         0x8002B0E4
    // 0x800CF110: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800CF110: nop

    after_8:
    // 0x800CF114: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF118: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF11C: jal         0x8002B0E4
    // 0x800CF120: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800CF120: nop

    after_9:
L_800CF124:
    // 0x800CF124: b           L_800CF12C
    // 0x800CF128: nop

        goto L_800CF12C;
    // 0x800CF128: nop

L_800CF12C:
    // 0x800CF12C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CF130: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800CF134: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CF138: jr          $ra
    // 0x800CF13C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800CF13C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800E5C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5C14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E5C18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E5C1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5C20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5C24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5C28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5C2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5C30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5C34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5C38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5C3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5C40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5C44: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E5C48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E5C4C: nop

    // 0x800E5C50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E5C54: nop

    // 0x800E5C58: bne         $t1, $zero, L_800E5C9C
    if (ctx->r9 != 0) {
        // 0x800E5C5C: nop
    
            goto L_800E5C9C;
    }
    // 0x800E5C5C: nop

    // 0x800E5C60: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E5C64: nop

    // 0x800E5C68: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E5C6C: nop

    // 0x800E5C70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E5C74: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E5C78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5C7C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E5C80: addiu       $t5, $t5, -0x6AFC
    ctx->r13 = ADD32(ctx->r13, -0X6AFC);
    // 0x800E5C84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5C88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E5C8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E5C94: jal         0x8001C0EC
    // 0x800E5C98: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E5C98: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    after_0:
L_800E5C9C:
    // 0x800E5C9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5CA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5CA4: jal         0x80028FA0
    // 0x800E5CA8: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800E5CA8: nop

    after_1:
    // 0x800E5CAC: beq         $v0, $zero, L_800E5CC4
    if (ctx->r2 == 0) {
        // 0x800E5CB0: nop
    
            goto L_800E5CC4;
    }
    // 0x800E5CB0: nop

    // 0x800E5CB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5CB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5CBC: jal         0x80029B60
    // 0x800E5CC0: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800E5CC0: nop

    after_2:
L_800E5CC4:
    // 0x800E5CC4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800E5CC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E5CCC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E5CD0: nop

    // 0x800E5CD4: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800E5CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5CE0: jal         0x8002A8B4
    // 0x800E5CE4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800E5CE4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800E5CE8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E5CEC: nop

    // 0x800E5CF0: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800E5CF4: nop

    // 0x800E5CF8: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
    // 0x800E5CFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5D00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5D04: jal         0x80029C40
    // 0x800E5D08: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800E5D08: nop

    after_4:
    // 0x800E5D0C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E5D10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E5D14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5D18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5D20: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E5D24: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E5D28: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800E5D2C: jal         0x80029018
    // 0x800E5D30: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E5D30: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800E5D34: beq         $v0, $zero, L_800E5D70
    if (ctx->r2 == 0) {
        // 0x800E5D38: nop
    
            goto L_800E5D70;
    }
    // 0x800E5D38: nop

    // 0x800E5D3C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E5D40: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E5D44: nop

    // 0x800E5D48: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
    // 0x800E5D4C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E5D50: nop

    // 0x800E5D54: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x800E5D58: nop

    // 0x800E5D5C: swc1        $f18, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f18.u32l;
    // 0x800E5D60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E5D64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E5D68: nop

    // 0x800E5D6C: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
L_800E5D70:
    // 0x800E5D70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5D74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5D78: jal         0x8002A1FC
    // 0x800E5D7C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_6;
    // 0x800E5D7C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_6:
    // 0x800E5D80: beq         $v0, $zero, L_800E5DA0
    if (ctx->r2 == 0) {
        // 0x800E5D84: nop
    
            goto L_800E5DA0;
    }
    // 0x800E5D84: nop

    // 0x800E5D88: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E5D8C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800E5D90: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E5D94: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E5D98: b           L_800E5DD8
    // 0x800E5D9C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E5DD8;
    // 0x800E5D9C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E5DA0:
    // 0x800E5DA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5DA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5DA8: jal         0x8002A1FC
    // 0x800E5DAC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x800E5DAC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_7:
    // 0x800E5DB0: beq         $v0, $zero, L_800E5DC0
    if (ctx->r2 == 0) {
        // 0x800E5DB4: nop
    
            goto L_800E5DC0;
    }
    // 0x800E5DB4: nop

    // 0x800E5DB8: b           L_800E5DD8
    // 0x800E5DBC: nop

        goto L_800E5DD8;
    // 0x800E5DBC: nop

L_800E5DC0:
    // 0x800E5DC0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E5DC4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800E5DC8: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800E5DCC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E5DD0: nop

    // 0x800E5DD4: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800E5DD8:
    // 0x800E5DD8: b           L_800E5DE0
    // 0x800E5DDC: nop

        goto L_800E5DE0;
    // 0x800E5DDC: nop

L_800E5DE0:
    // 0x800E5DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5DE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E5DE8: jr          $ra
    // 0x800E5DEC: nop

    return;
    // 0x800E5DEC: nop

;}
RECOMP_FUNC void func_8007BBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007BBD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007BBDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007BBE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007BBE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8007BBE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007BBEC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007BBF0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007BBF4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007BBF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007BBFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007BC00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007BC04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007BC08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007BC0C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007BC10: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007BC14: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007BC18: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BC1C: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x8007BC20: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8007BC24: nop

    // 0x8007BC28: beq         $t1, $at, L_8007BC48
    if (ctx->r9 == ctx->r1) {
        // 0x8007BC2C: nop
    
            goto L_8007BC48;
    }
    // 0x8007BC2C: nop

    // 0x8007BC30: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x8007BC34: beq         $t1, $at, L_8007BC48
    if (ctx->r9 == ctx->r1) {
        // 0x8007BC38: nop
    
            goto L_8007BC48;
    }
    // 0x8007BC38: nop

    // 0x8007BC3C: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x8007BC40: bne         $t1, $at, L_8007BC50
    if (ctx->r9 != ctx->r1) {
        // 0x8007BC44: nop
    
            goto L_8007BC50;
    }
    // 0x8007BC44: nop

L_8007BC48:
    // 0x8007BC48: b           L_8007BCB8
    // 0x8007BC4C: nop

        goto L_8007BCB8;
    // 0x8007BC4C: nop

L_8007BC50:
    // 0x8007BC50: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BC54: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8007BC58: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x8007BC5C: nop

    // 0x8007BC60: bne         $t3, $at, L_8007BC84
    if (ctx->r11 != ctx->r1) {
        // 0x8007BC64: nop
    
            goto L_8007BC84;
    }
    // 0x8007BC64: nop

    // 0x8007BC68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BC6C: jal         0x8007A3A0
    // 0x8007BC70: nop

    func_8007A3A0(rdram, ctx);
        goto after_0;
    // 0x8007BC70: nop

    after_0:
    // 0x8007BC74: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007BC78: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BC7C: b           L_8007BCB8
    // 0x8007BC80: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
        goto L_8007BCB8;
    // 0x8007BC80: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
L_8007BC84:
    // 0x8007BC84: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BC88: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x8007BC8C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x8007BC90: nop

    // 0x8007BC94: bne         $t6, $at, L_8007BCB8
    if (ctx->r14 != ctx->r1) {
        // 0x8007BC98: nop
    
            goto L_8007BCB8;
    }
    // 0x8007BC98: nop

    // 0x8007BC9C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BCA0: jal         0x8007A3A0
    // 0x8007BCA4: nop

    func_8007A3A0(rdram, ctx);
        goto after_1;
    // 0x8007BCA4: nop

    after_1:
    // 0x8007BCA8: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007BCAC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BCB0: nop

    // 0x8007BCB4: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
L_8007BCB8:
    // 0x8007BCB8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BCBC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007BCC0: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x8007BCC4: jal         0x80015538
    // 0x8007BCC8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8007BCC8: nop

    after_2:
    // 0x8007BCCC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BCD0: nop

    // 0x8007BCD4: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x8007BCD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007BCDC: jal         0x800799A8
    // 0x8007BCE0: nop

    func_800799A8(rdram, ctx);
        goto after_3;
    // 0x8007BCE0: nop

    after_3:
    // 0x8007BCE4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007BCE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007BCEC: nop

    // 0x8007BCF0: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8007BCF4: nop

    // 0x8007BCF8: bc1t        L_8007BD18
    if (c1cs) {
        // 0x8007BCFC: nop
    
            goto L_8007BD18;
    }
    // 0x8007BCFC: nop

    // 0x8007BD00: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BD04: nop

    // 0x8007BD08: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8007BD0C: nop

    // 0x8007BD10: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8007BD14: swc1        $f18, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f18.u32l;
L_8007BD18:
    // 0x8007BD18: b           L_8007BD20
    // 0x8007BD1C: nop

        goto L_8007BD20;
    // 0x8007BD1C: nop

L_8007BD20:
    // 0x8007BD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BD24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007BD28: jr          $ra
    // 0x8007BD2C: nop

    return;
    // 0x8007BD2C: nop

;}
RECOMP_FUNC void func_8008FFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008FFB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008FFB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008FFB8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8008FFBC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8008FFC0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8008FFC4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8008FFC8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8008FFCC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8008FFD0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8008FFD4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008FFD8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8008FFDC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8008FFE0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8008FFE4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8008FFE8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008FFEC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8008FFF0: addiu       $a1, $a1, 0x1390
    ctx->r5 = ADD32(ctx->r5, 0X1390);
    // 0x8008FFF4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008FFF8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8008FFFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090000: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090004: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090008: jal         0x80027464
    // 0x8009000C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009000C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090010: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090014: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090018: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009001C: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80090020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80090024: jal         0x8001ABF4
    // 0x80090028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009002C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090030: addiu       $a3, $a3, 0x1EB4
    ctx->r7 = ADD32(ctx->r7, 0X1EB4);
    // 0x80090034: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090038: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8009003C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80090040: jal         0x8001ABF4
    // 0x80090044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80090044: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80090048: b           L_80090050
    // 0x8009004C: nop

        goto L_80090050;
    // 0x8009004C: nop

L_80090050:
    // 0x80090050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090058: jr          $ra
    // 0x8009005C: nop

    return;
    // 0x8009005C: nop

;}
RECOMP_FUNC void func_8006F570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F570: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006F574: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006F578: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8006F57C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8006F580: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8006F584: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8006F588: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8006F58C: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x8006F590: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006F594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006F598: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8006F59C: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x8006F5A0: lw          $t0, 0xC8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC8);
    // 0x8006F5A4: lw          $t8, 0x52D0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X52D0);
    // 0x8006F5A8: nop

    // 0x8006F5AC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8006F5B0: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8006F5B4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8006F5B8: nop

    // 0x8006F5BC: lbu         $t3, 0x8($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X8);
    // 0x8006F5C0: nop

    // 0x8006F5C4: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x8006F5C8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8006F5CC: nop

    // 0x8006F5D0: lbu         $t5, 0xC($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XC);
    // 0x8006F5D4: nop

    // 0x8006F5D8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x8006F5DC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8006F5E0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8006F5E4: lb          $t7, 0x4($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4);
    // 0x8006F5E8: nop

    // 0x8006F5EC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8006F5F0: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x8006F5F4: addiu       $t0, $t8, 0x7
    ctx->r8 = ADD32(ctx->r24, 0X7);
    // 0x8006F5F8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8006F5FC: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x8006F600: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x8006F604: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8006F608: nop

    // 0x8006F60C: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8006F610: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x8006F614: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006F618: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8006F61C: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8006F620: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F624: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8006F628: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8006F62C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8006F630: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8006F634: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8006F638: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8006F63C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8006F640: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8006F644: jal         0x8006E93C
    // 0x8006F648: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_8006E93C(rdram, ctx);
        goto after_0;
    // 0x8006F648: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x8006F64C: b           L_8006F654
    // 0x8006F650: nop

        goto L_8006F654;
    // 0x8006F650: nop

L_8006F654:
    // 0x8006F654: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F658: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8006F65C: jr          $ra
    // 0x8006F660: nop

    return;
    // 0x8006F660: nop

;}
RECOMP_FUNC void func_800BAB44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BAB44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BAB48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BAB4C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BAB50: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BAB54: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BAB58: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800BAB5C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800BAB60: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BAB64: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800BAB68: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BAB6C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BAB70: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BAB74: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BAB78: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800BAB7C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BAB80: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800BAB84: addiu       $a1, $a1, 0x3AF0
    ctx->r5 = ADD32(ctx->r5, 0X3AF0);
    // 0x800BAB88: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BAB8C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BAB90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BAB94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BAB98: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800BAB9C: jal         0x80027464
    // 0x800BABA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BABA0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800BABA4: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800BABA8: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800BABAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BABB0: beq         $t1, $at, L_800BAC7C
    if (ctx->r9 == ctx->r1) {
        // 0x800BABB4: nop
    
            goto L_800BAC7C;
    }
    // 0x800BABB4: nop

    // 0x800BABB8: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x800BABBC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BABC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BABC4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BABC8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BABCC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BABD0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BABD4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BABD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BABDC: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800BABE0: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BABE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BABE8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BABEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BABF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BABF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BABF8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BABFC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BAC00: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800BAC04: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800BAC08: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x800BAC0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BAC10: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800BAC14: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BAC18: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BAC1C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BAC20: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BAC24: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BAC28: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BAC2C: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800BAC30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BAC34: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800BAC38: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800BAC3C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BAC40: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800BAC44: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BAC48: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BAC4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800BAC50: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x800BAC54: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x800BAC58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BAC5C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800BAC60: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800BAC64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BAC68: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800BAC6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BAC70: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800BAC74: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800BAC78: sh          $t2, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r10;
L_800BAC7C:
    // 0x800BAC7C: b           L_800BAC84
    // 0x800BAC80: nop

        goto L_800BAC84;
    // 0x800BAC80: nop

L_800BAC84:
    // 0x800BAC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAC88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BAC8C: jr          $ra
    // 0x800BAC90: nop

    return;
    // 0x800BAC90: nop

;}
RECOMP_FUNC void func_80090C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090C10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090C18: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090C1C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090C20: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090C24: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090C28: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090C2C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090C30: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090C34: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090C38: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090C3C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090C40: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090C44: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090C48: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090C4C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090C50: addiu       $a1, $a1, 0x1498
    ctx->r5 = ADD32(ctx->r5, 0X1498);
    // 0x80090C54: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090C58: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090C60: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090C64: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090C68: jal         0x80027464
    // 0x80090C6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090C6C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090C70: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090C74: b           L_80090C7C
    // 0x80090C78: nop

        goto L_80090C7C;
    // 0x80090C78: nop

L_80090C7C:
    // 0x80090C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090C84: jr          $ra
    // 0x80090C88: nop

    return;
    // 0x80090C88: nop

;}
RECOMP_FUNC void func_800BA334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA334: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA33C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA340: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA344: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA348: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA34C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA350: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA354: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA358: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA35C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BA360: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BA364: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BA368: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BA36C: nop

    // 0x800BA370: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BA374: nop

    // 0x800BA378: bne         $t1, $zero, L_800BA3AC
    if (ctx->r9 != 0) {
        // 0x800BA37C: nop
    
            goto L_800BA3AC;
    }
    // 0x800BA37C: nop

    // 0x800BA380: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BA384: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BA388: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BA38C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BA390: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BA394: nop

    // 0x800BA398: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BA39C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BA3A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BA3A4: nop

    // 0x800BA3A8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800BA3AC:
    // 0x800BA3AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA3B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA3B4: jal         0x80029C40
    // 0x800BA3B8: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BA3B8: nop

    after_0:
    // 0x800BA3BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA3C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA3C4: jal         0x80029D04
    // 0x800BA3C8: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BA3C8: nop

    after_1:
    // 0x800BA3CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA3D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA3D4: jal         0x8001B44C
    // 0x800BA3D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800BA3D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800BA3DC: beq         $v0, $zero, L_800BA450
    if (ctx->r2 == 0) {
        // 0x800BA3E0: nop
    
            goto L_800BA450;
    }
    // 0x800BA3E0: nop

    // 0x800BA3E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA3E8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800BA3EC: addiu       $t6, $t6, 0x7D8C
    ctx->r14 = ADD32(ctx->r14, 0X7D8C);
    // 0x800BA3F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA3F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800BA3F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA3FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800BA400: jal         0x8001C0EC
    // 0x800BA404: addiu       $a3, $zero, 0xF3
    ctx->r7 = ADD32(0, 0XF3);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800BA404: addiu       $a3, $zero, 0xF3
    ctx->r7 = ADD32(0, 0XF3);
    after_3:
    // 0x800BA408: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA40C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA410: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BA414: addiu       $a3, $a3, 0x7DE8
    ctx->r7 = ADD32(ctx->r7, 0X7DE8);
    // 0x800BA418: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BA41C: jal         0x8001ABF4
    // 0x800BA420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800BA420: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800BA424: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800BA428: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800BA42C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800BA430: jal         0x800BA9C8
    // 0x800BA434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800BA9C8(rdram, ctx);
        goto after_5;
    // 0x800BA434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800BA438: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BA43C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800BA440: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800BA444: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BA448: nop

    // 0x800BA44C: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800BA450:
    // 0x800BA450: b           L_800BA458
    // 0x800BA454: nop

        goto L_800BA458;
    // 0x800BA454: nop

L_800BA458:
    // 0x800BA458: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA45C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BA460: jr          $ra
    // 0x800BA464: nop

    return;
    // 0x800BA464: nop

;}
RECOMP_FUNC void func_800B52D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B52D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B52D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B52DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B52E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B52E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B52E8: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800B52EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B52F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B52F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B52F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B52FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B5300: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800B5304: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800B5308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B530C: beq         $s0, $at, L_800B5328
    if (ctx->r16 == ctx->r1) {
        // 0x800B5310: nop
    
            goto L_800B5328;
    }
    // 0x800B5310: nop

    // 0x800B5314: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B5318: beq         $s0, $at, L_800B5338
    if (ctx->r16 == ctx->r1) {
        // 0x800B531C: nop
    
            goto L_800B5338;
    }
    // 0x800B531C: nop

    // 0x800B5320: b           L_800B5348
    // 0x800B5324: nop

        goto L_800B5348;
    // 0x800B5324: nop

L_800B5328:
    // 0x800B5328: jal         0x800B5084
    // 0x800B532C: nop

    func_800B5084(rdram, ctx);
        goto after_0;
    // 0x800B532C: nop

    after_0:
    // 0x800B5330: b           L_800B5350
    // 0x800B5334: nop

        goto L_800B5350;
    // 0x800B5334: nop

L_800B5338:
    // 0x800B5338: jal         0x800B52A4
    // 0x800B533C: nop

    func_800B52A4(rdram, ctx);
        goto after_1;
    // 0x800B533C: nop

    after_1:
    // 0x800B5340: b           L_800B5350
    // 0x800B5344: nop

        goto L_800B5350;
    // 0x800B5344: nop

L_800B5348:
    // 0x800B5348: b           L_800B5350
    // 0x800B534C: nop

        goto L_800B5350;
    // 0x800B534C: nop

L_800B5350:
    // 0x800B5350: b           L_800B5358
    // 0x800B5354: nop

        goto L_800B5358;
    // 0x800B5354: nop

L_800B5358:
    // 0x800B5358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B535C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B5360: jr          $ra
    // 0x800B5364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B5364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80097EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097EE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80097EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097EEC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80097EF0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80097EF4: nop

    // 0x80097EF8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80097EFC: nop

    // 0x80097F00: bne         $t7, $zero, L_80097F44
    if (ctx->r15 != 0) {
        // 0x80097F04: nop
    
            goto L_80097F44;
    }
    // 0x80097F04: nop

    // 0x80097F08: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80097F0C: nop

    // 0x80097F10: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80097F14: nop

    // 0x80097F18: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80097F1C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80097F20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097F24: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80097F28: addiu       $t1, $t1, 0x6ED4
    ctx->r9 = ADD32(ctx->r9, 0X6ED4);
    // 0x80097F2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097F30: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80097F34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097F38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80097F3C: jal         0x8001C0EC
    // 0x80097F40: addiu       $a3, $zero, 0x1AA
    ctx->r7 = ADD32(0, 0X1AA);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80097F40: addiu       $a3, $zero, 0x1AA
    ctx->r7 = ADD32(0, 0X1AA);
    after_0:
L_80097F44:
    // 0x80097F44: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80097F48: nop

    // 0x80097F4C: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x80097F50: nop

    // 0x80097F54: bne         $t3, $zero, L_80097FA0
    if (ctx->r11 != 0) {
        // 0x80097F58: nop
    
            goto L_80097FA0;
    }
    // 0x80097F58: nop

    // 0x80097F5C: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80097F60: lb          $t4, 0x5248($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5248);
    // 0x80097F64: nop

    // 0x80097F68: beq         $t4, $zero, L_80097FA0
    if (ctx->r12 == 0) {
        // 0x80097F6C: nop
    
            goto L_80097FA0;
    }
    // 0x80097F6C: nop

    // 0x80097F70: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80097F74: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80097F78: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80097F7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097F80: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80097F84: addiu       $t7, $t7, 0x6ED4
    ctx->r15 = ADD32(ctx->r15, 0X6ED4);
    // 0x80097F88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097F8C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80097F90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097F94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80097F98: jal         0x8001C0EC
    // 0x80097F9C: addiu       $a3, $zero, 0x1AA
    ctx->r7 = ADD32(0, 0X1AA);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80097F9C: addiu       $a3, $zero, 0x1AA
    ctx->r7 = ADD32(0, 0X1AA);
    after_1:
L_80097FA0:
    // 0x80097FA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097FA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097FA8: jal         0x8002A1FC
    // 0x80097FAC: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x80097FAC: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_2:
    // 0x80097FB0: beq         $v0, $zero, L_80097FE8
    if (ctx->r2 == 0) {
        // 0x80097FB4: nop
    
            goto L_80097FE8;
    }
    // 0x80097FB4: nop

    // 0x80097FB8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80097FBC: nop

    // 0x80097FC0: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80097FC4: nop

    // 0x80097FC8: beq         $t0, $zero, L_80097FE8
    if (ctx->r8 == 0) {
        // 0x80097FCC: nop
    
            goto L_80097FE8;
    }
    // 0x80097FCC: nop

    // 0x80097FD0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80097FD4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80097FD8: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x80097FDC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80097FE0: nop

    // 0x80097FE4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80097FE8:
    // 0x80097FE8: b           L_80097FF0
    // 0x80097FEC: nop

        goto L_80097FF0;
    // 0x80097FEC: nop

L_80097FF0:
    // 0x80097FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097FF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80097FF8: jr          $ra
    // 0x80097FFC: nop

    return;
    // 0x80097FFC: nop

;}
RECOMP_FUNC void func_800794C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800794C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800794C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800794CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800794D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800794D4: nop

    // 0x800794D8: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x800794DC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800794E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800794E4: jal         0x8001A928
    // 0x800794E8: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x800794E8: nop

    after_0:
    // 0x800794EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800794F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800794F4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800794F8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800794FC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80079500: sh          $t8, 0x79B0($at)
    MEM_H(0X79B0, ctx->r1) = ctx->r24;
    // 0x80079504: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80079508: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007950C: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x80079510: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80079514: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80079518: sh          $t1, 0x79C0($at)
    MEM_H(0X79C0, ctx->r1) = ctx->r9;
    // 0x8007951C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80079520: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80079524: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079528: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8007952C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80079530: swc1        $f4, 0x79D0($at)
    MEM_W(0X79D0, ctx->r1) = ctx->f4.u32l;
    // 0x80079534: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80079538: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007953C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80079544: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80079548: swc1        $f6, 0x79E8($at)
    MEM_W(0X79E8, ctx->r1) = ctx->f6.u32l;
    // 0x8007954C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80079550: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80079554: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80079558: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x8007955C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80079560: swc1        $f8, 0x7A00($at)
    MEM_W(0X7A00, ctx->r1) = ctx->f8.u32l;
    // 0x80079564: b           L_8007956C
    // 0x80079568: nop

        goto L_8007956C;
    // 0x80079568: nop

L_8007956C:
    // 0x8007956C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079570: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80079574: jr          $ra
    // 0x80079578: nop

    return;
    // 0x80079578: nop

;}
RECOMP_FUNC void func_800806DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800806DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800806E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800806E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800806E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800806EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800806F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800806F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800806F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800806FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080700: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080704: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080708: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8008070C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80080710: addiu       $t0, $zero, 0x2C6
    ctx->r8 = ADD32(0, 0X2C6);
    // 0x80080714: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x80080718: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8008071C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80080720: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x80080724: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80080728: nop

    // 0x8008072C: sh          $zero, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = 0;
    // 0x80080730: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80080734: addiu       $t5, $zero, 0x26
    ctx->r13 = ADD32(0, 0X26);
    // 0x80080738: sh          $t5, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r13;
    // 0x8008073C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80080740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80080744: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80080748: nop

    // 0x8008074C: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x80080750: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80080754: nop

    // 0x80080758: lwc1        $f12, 0x14($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8008075C: nop

    // 0x80080760: swc1        $f12, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f12.u32l;
    // 0x80080764: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80080768: nop

    // 0x8008076C: swc1        $f12, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f12.u32l;
    // 0x80080770: b           L_80080778
    // 0x80080774: nop

        goto L_80080778;
    // 0x80080774: nop

L_80080778:
    // 0x80080778: jr          $ra
    // 0x8008077C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008077C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80097634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009763C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80097640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009764C: jal         0x8001B6BC
    // 0x80097650: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x80097650: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_0:
    // 0x80097654: b           L_8009765C
    // 0x80097658: nop

        goto L_8009765C;
    // 0x80097658: nop

L_8009765C:
    // 0x8009765C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80097660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80097664: jr          $ra
    // 0x80097668: nop

    return;
    // 0x80097668: nop

;}
RECOMP_FUNC void func_800D06CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D06CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D06D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D06D4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D06D8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D06DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D06E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D06E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D06E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D06EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D06F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D06F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D06F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D06FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D0700: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D0704: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D0708: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D070C: nop

    // 0x800D0710: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D0714: nop

    // 0x800D0718: bne         $t1, $zero, L_800D0804
    if (ctx->r9 != 0) {
        // 0x800D071C: nop
    
            goto L_800D0804;
    }
    // 0x800D071C: nop

    // 0x800D0720: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0724: nop

    // 0x800D0728: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D072C: nop

    // 0x800D0730: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D0734: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D0738: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D073C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0740: nop

    // 0x800D0744: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800D0748: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D074C: nop

    // 0x800D0750: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D0754: nop

    // 0x800D0758: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800D075C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0760: nop

    // 0x800D0764: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800D0768: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D076C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x800D0770: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800D0774: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0778: nop

    // 0x800D077C: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800D0780: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0784: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800D0788: sh          $t1, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r9;
    // 0x800D078C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0790: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800D0794: addiu       $t4, $t4, -0x7AEC
    ctx->r12 = ADD32(ctx->r12, -0X7AEC);
    // 0x800D0798: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D079C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800D07A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D07A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800D07A8: jal         0x8001C0EC
    // 0x800D07AC: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D07AC: addiu       $a3, $zero, 0x92
    ctx->r7 = ADD32(0, 0X92);
    after_0:
    // 0x800D07B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D07B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D07B8: jal         0x8001BBDC
    // 0x800D07BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D07BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800D07C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800D07C4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800D07C8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D07CC: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800D07D0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800D07D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800D07D8: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800D07DC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800D07E0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800D07E4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800D07E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D07EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D07F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D07F4: addiu       $a2, $zero, 0x54
    ctx->r6 = ADD32(0, 0X54);
    // 0x800D07F8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D07FC: jal         0x800175F0
    // 0x800D0800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800D0800: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800D0804:
    // 0x800D0804: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0808: nop

    // 0x800D080C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D0810: nop

    // 0x800D0814: beq         $t7, $zero, L_800D0AA4
    if (ctx->r15 == 0) {
        // 0x800D0818: nop
    
            goto L_800D0AA4;
    }
    // 0x800D0818: nop

    // 0x800D081C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0820: nop

    // 0x800D0824: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800D0828: nop

    // 0x800D082C: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x800D0830: sh          $t0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r8;
    // 0x800D0834: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x800D0838: nop

    // 0x800D083C: beq         $t1, $zero, L_800D0850
    if (ctx->r9 == 0) {
        // 0x800D0840: nop
    
            goto L_800D0850;
    }
    // 0x800D0840: nop

    // 0x800D0844: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800D0848: bne         $t1, $at, L_800D0A8C
    if (ctx->r9 != ctx->r1) {
        // 0x800D084C: nop
    
            goto L_800D0A8C;
    }
    // 0x800D084C: nop

L_800D0850:
    // 0x800D0850: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0854: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D0858: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800D085C: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x800D0860: lw          $a3, 0x4($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X4);
    // 0x800D0864: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D0868: addiu       $a1, $a1, 0x40C0
    ctx->r5 = ADD32(ctx->r5, 0X40C0);
    // 0x800D086C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D0870: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x800D0874: jal         0x80027464
    // 0x800D0878: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x800D0878: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800D087C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800D0880: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800D0884: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D0888: beq         $t4, $at, L_800D0A74
    if (ctx->r12 == ctx->r1) {
        // 0x800D088C: nop
    
            goto L_800D0A74;
    }
    // 0x800D088C: nop

    // 0x800D0890: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0894: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800D0898: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800D089C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800D08A0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x800D08A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D08A8: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800D08AC: lh          $t1, 0x4FE0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4FE0);
    // 0x800D08B0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800D08B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800D08B8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800D08BC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800D08C0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800D08C4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800D08C8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800D08CC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D08D0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800D08D4: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800D08D8: nop

    // 0x800D08DC: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800D08E0: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x800D08E4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D08E8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800D08EC: lh          $t8, 0xA8($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XA8);
    // 0x800D08F0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800D08F4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x800D08F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D08FC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800D0900: lh          $t0, 0x4FE8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4FE8);
    // 0x800D0904: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D0908: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800D090C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800D0910: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800D0914: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D0918: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800D091C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800D0920: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D0924: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x800D0928: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x800D092C: nop

    // 0x800D0930: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800D0934: swc1        $f10, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f10.u32l;
    // 0x800D0938: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D093C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D0940: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800D0944: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x800D0948: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x800D094C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D0950: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800D0954: jal         0x800295C0
    // 0x800D0958: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x800D0958: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x800D095C: beq         $v0, $zero, L_800D0990
    if (ctx->r2 == 0) {
        // 0x800D0960: nop
    
            goto L_800D0990;
    }
    // 0x800D0960: nop

    // 0x800D0964: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800D0968: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800D096C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800D0970: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800D0974: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0978: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800D097C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D0980: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D0984: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800D0988: b           L_800D09B8
    // 0x800D098C: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_800D09B8;
    // 0x800D098C: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_800D0990:
    // 0x800D0990: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800D0994: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D0998: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800D099C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D09A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800D09A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D09A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800D09AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D09B0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800D09B4: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
L_800D09B8:
    // 0x800D09B8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800D09BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D09C0: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800D09C4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800D09C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D09CC: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800D09D0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D09D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D09D8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800D09DC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D09E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D09E4: lwc1        $f16, 0x4($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800D09E8: nop

    // 0x800D09EC: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800D09F0: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x800D09F4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800D09F8: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800D09FC: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x800D0A00: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x800D0A04: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800D0A08: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800D0A0C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D0A10: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800D0A14: lwc1        $f4, 0x5058($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5058);
    // 0x800D0A18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D0A1C: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x800D0A20: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800D0A24: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D0A28: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800D0A2C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800D0A30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D0A34: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800D0A38: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800D0A3C: addu        $t4, $t7, $t3
    ctx->r12 = ADD32(ctx->r15, ctx->r11);
    // 0x800D0A40: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x800D0A44: lwc1        $f20, 0x14($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800D0A48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D0A4C: swc1        $f20, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f20.u32l;
    // 0x800D0A50: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800D0A54: nop

    // 0x800D0A58: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800D0A5C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800D0A60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800D0A64: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800D0A68: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800D0A6C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800D0A70: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800D0A74:
    // 0x800D0A74: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0A78: nop

    // 0x800D0A7C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800D0A80: nop

    // 0x800D0A84: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800D0A88: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
L_800D0A8C:
    // 0x800D0A8C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0A90: nop

    // 0x800D0A94: lh          $t1, 0xA6($t5)
    ctx->r9 = MEM_H(ctx->r13, 0XA6);
    // 0x800D0A98: nop

    // 0x800D0A9C: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x800D0AA0: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_800D0AA4:
    // 0x800D0AA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0AA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0AAC: jal         0x8001B44C
    // 0x800D0AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800D0AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800D0AB4: beq         $v0, $zero, L_800D0AD8
    if (ctx->r2 == 0) {
        // 0x800D0AB8: nop
    
            goto L_800D0AD8;
    }
    // 0x800D0AB8: nop

    // 0x800D0ABC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0AC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0AC4: jal         0x8001BBDC
    // 0x800D0AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800D0AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800D0ACC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0AD0: nop

    // 0x800D0AD4: sh          $zero, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = 0;
L_800D0AD8:
    // 0x800D0AD8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D0ADC: nop

    // 0x800D0AE0: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800D0AE4: nop

    // 0x800D0AE8: bne         $t2, $zero, L_800D0B2C
    if (ctx->r10 != 0) {
        // 0x800D0AEC: nop
    
            goto L_800D0B2C;
    }
    // 0x800D0AEC: nop

    // 0x800D0AF0: lh          $t6, 0xAA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAA);
    // 0x800D0AF4: nop

    // 0x800D0AF8: bne         $t6, $zero, L_800D0B2C
    if (ctx->r14 != 0) {
        // 0x800D0AFC: nop
    
            goto L_800D0B2C;
    }
    // 0x800D0AFC: nop

    // 0x800D0B00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0B04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D0B0C: addiu       $a2, $zero, 0x55
    ctx->r6 = ADD32(0, 0X55);
    // 0x800D0B10: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D0B14: jal         0x800175F0
    // 0x800D0B18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_7;
    // 0x800D0B18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x800D0B1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D0B20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D0B24: jal         0x8002B0E4
    // 0x800D0B28: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800D0B28: nop

    after_8:
L_800D0B2C:
    // 0x800D0B2C: b           L_800D0B34
    // 0x800D0B30: nop

        goto L_800D0B34;
    // 0x800D0B30: nop

L_800D0B34:
    // 0x800D0B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D0B38: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D0B3C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D0B40: jr          $ra
    // 0x800D0B44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800D0B44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8009B904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009B908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B90C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009B910: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009B914: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009B918: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009B91C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009B920: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009B924: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009B928: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009B92C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009B930: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009B934: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009B938: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009B93C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009B940: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009B944: addiu       $a1, $a1, 0x352C
    ctx->r5 = ADD32(ctx->r5, 0X352C);
    // 0x8009B948: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009B94C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009B950: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009B954: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009B958: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009B95C: jal         0x80027464
    // 0x8009B960: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009B960: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009B964: b           L_8009B96C
    // 0x8009B968: nop

        goto L_8009B96C;
    // 0x8009B968: nop

L_8009B96C:
    // 0x8009B96C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009B974: jr          $ra
    // 0x8009B978: nop

    return;
    // 0x8009B978: nop

;}
RECOMP_FUNC void func_800D31A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D31A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D31AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D31B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800D31B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D31B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D31BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D31C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D31C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D31C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D31CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D31D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D31D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D31D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D31DC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D31E0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D31E4: nop

    // 0x800D31E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D31EC: nop

    // 0x800D31F0: bne         $t1, $zero, L_800D325C
    if (ctx->r9 != 0) {
        // 0x800D31F4: nop
    
            goto L_800D325C;
    }
    // 0x800D31F4: nop

    // 0x800D31F8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D31FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D3200: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D3204: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3208: nop

    // 0x800D320C: sh          $zero, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = 0;
    // 0x800D3210: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D3214: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3218: nop

    // 0x800D321C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D3220: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3224: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3228: jal         0x8002A46C
    // 0x800D322C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800D322C: nop

    after_0:
    // 0x800D3230: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3234: nop

    // 0x800D3238: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800D323C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3240: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D3244: addiu       $a3, $a3, -0x787C
    ctx->r7 = ADD32(ctx->r7, -0X787C);
    // 0x800D3248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D324C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800D3250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D3254: jal         0x8001ABF4
    // 0x800D3258: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D3258: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800D325C:
    // 0x800D325C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3260: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800D3264: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D3268: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800D326C: nop

    // 0x800D3270: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800D3274: nop

    // 0x800D3278: bc1t        L_800D32A4
    if (c1cs) {
        // 0x800D327C: nop
    
            goto L_800D32A4;
    }
    // 0x800D327C: nop

    // 0x800D3280: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3284: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800D3288: lwc1        $f10, 0x44($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X44);
    // 0x800D328C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x800D3290: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D3294: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800D3298: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800D329C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800D32A0: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
L_800D32A4:
    // 0x800D32A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D32A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D32AC: jal         0x80028FA0
    // 0x800D32B0: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800D32B0: nop

    after_2:
    // 0x800D32B4: beq         $v0, $zero, L_800D32CC
    if (ctx->r2 == 0) {
        // 0x800D32B8: nop
    
            goto L_800D32CC;
    }
    // 0x800D32B8: nop

    // 0x800D32BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D32C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D32C4: jal         0x80029B60
    // 0x800D32C8: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800D32C8: nop

    after_3:
L_800D32CC:
    // 0x800D32CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D32D0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D32D4: nop

    // 0x800D32D8: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x800D32DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D32E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D32E4: jal         0x80029C40
    // 0x800D32E8: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800D32E8: nop

    after_4:
    // 0x800D32EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D32F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D32F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D32F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D32FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D3300: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x800D3304: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D3308: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D330C: jal         0x80029018
    // 0x800D3310: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800D3310: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800D3314: beq         $v0, $zero, L_800D3338
    if (ctx->r2 == 0) {
        // 0x800D3318: nop
    
            goto L_800D3338;
    }
    // 0x800D3318: nop

    // 0x800D331C: jal         0x800297DC
    // 0x800D3320: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800D3320: nop

    after_6:
    // 0x800D3324: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3328: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D332C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D3330: jal         0x80029824
    // 0x800D3334: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800D3334: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800D3338:
    // 0x800D3338: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D333C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D3340: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3344: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3348: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800D334C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800D3350: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D3354: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800D3358: jal         0x800295C0
    // 0x800D335C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x800D335C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800D3360: beq         $v0, $zero, L_800D3374
    if (ctx->r2 == 0) {
        // 0x800D3364: nop
    
            goto L_800D3374;
    }
    // 0x800D3364: nop

    // 0x800D3368: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800D336C: b           L_800D3380
    // 0x800D3370: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
        goto L_800D3380;
    // 0x800D3370: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
L_800D3374:
    // 0x800D3374: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800D3378: nop

    // 0x800D337C: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_800D3380:
    // 0x800D3380: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D3384: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D3388: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800D338C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D3390: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800D3394: swc1        $f18, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f18.u32l;
    // 0x800D3398: b           L_800D33A0
    // 0x800D339C: nop

        goto L_800D33A0;
    // 0x800D339C: nop

L_800D33A0:
    // 0x800D33A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D33A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800D33A8: jr          $ra
    // 0x800D33AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800D33AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80080E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080E48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80080E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080E50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080E54: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080E58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080E5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080E60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080E64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080E68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080E6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080E70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080E74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080E78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080E7C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80080E80: nop

    // 0x80080E84: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80080E88: nop

    // 0x80080E8C: sh          $t1, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = ctx->r9;
    // 0x80080E90: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80080E94: nop

    // 0x80080E98: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x80080E9C: nop

    // 0x80080EA0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80080EA4: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80080EA8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80080EAC: nop

    // 0x80080EB0: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x80080EB4: nop

    // 0x80080EB8: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x80080EBC: bne         $at, $zero, L_80080EDC
    if (ctx->r1 != 0) {
        // 0x80080EC0: nop
    
            goto L_80080EDC;
    }
    // 0x80080EC0: nop

    // 0x80080EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080ECC: jal         0x8001A928
    // 0x80080ED0: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x80080ED0: nop

    after_0:
    // 0x80080ED4: b           L_80080EE4
    // 0x80080ED8: nop

        goto L_80080EE4;
    // 0x80080ED8: nop

L_80080EDC:
    // 0x80080EDC: b           L_80080EE4
    // 0x80080EE0: nop

        goto L_80080EE4;
    // 0x80080EE0: nop

L_80080EE4:
    // 0x80080EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080EEC: jr          $ra
    // 0x80080EF0: nop

    return;
    // 0x80080EF0: nop

;}
RECOMP_FUNC void func_8008E918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E918: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008E91C: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008E920: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008E924: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008E928: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E92C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008E930: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008E934: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008E938: nop

    // 0x8008E93C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008E940: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008E944: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008E948: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008E94C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008E950: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008E954: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8008E958: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008E95C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008E960: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008E964: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008E968: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008E96C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008E970: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008E974: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008E978: swc1        $f10, 0x41AC($at)
    MEM_W(0X41AC, ctx->r1) = ctx->f10.u32l;
    // 0x8008E97C: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8008E980: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008E984: bne         $t2, $at, L_8008E9B0
    if (ctx->r10 != ctx->r1) {
        // 0x8008E988: nop
    
            goto L_8008E9B0;
    }
    // 0x8008E988: nop

    // 0x8008E98C: lh          $t4, 0x0($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X0);
    // 0x8008E990: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E994: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008E998: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008E99C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008E9A0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008E9A4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8008E9A8: b           L_8008E9CC
    // 0x8008E9AC: sh          $t3, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = ctx->r11;
        goto L_8008E9CC;
    // 0x8008E9AC: sh          $t3, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = ctx->r11;
L_8008E9B0:
    // 0x8008E9B0: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008E9B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008E9B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008E9BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E9C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008E9C4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008E9C8: sh          $zero, 0x4D54($at)
    MEM_H(0X4D54, ctx->r1) = 0;
L_8008E9CC:
    // 0x8008E9CC: b           L_8008E9D4
    // 0x8008E9D0: nop

        goto L_8008E9D4;
    // 0x8008E9D0: nop

L_8008E9D4:
    // 0x8008E9D4: jr          $ra
    // 0x8008E9D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008E9D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800CB3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CB3D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800CB3DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CB3E0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CB3E4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800CB3E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CB3EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CB3F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CB3F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CB3F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB3FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CB400: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CB404: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CB408: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CB40C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CB410: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800CB414: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800CB418: nop

    // 0x800CB41C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CB420: nop

    // 0x800CB424: bne         $t1, $zero, L_800CB4B0
    if (ctx->r9 != 0) {
        // 0x800CB428: nop
    
            goto L_800CB4B0;
    }
    // 0x800CB428: nop

    // 0x800CB42C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800CB430: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CB434: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800CB438: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800CB43C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CB440: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800CB444: nop

    // 0x800CB448: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800CB44C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800CB450: nop

    // 0x800CB454: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800CB458: nop

    // 0x800CB45C: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x800CB460: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CB464: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800CB468: nop

    // 0x800CB46C: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800CB470: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800CB474: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x800CB478: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x800CB47C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800CB480: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CB484: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800CB488: nop

    // 0x800CB48C: swc1        $f10, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f10.u32l;
    // 0x800CB490: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800CB494: nop

    // 0x800CB498: lwc1        $f20, 0x14($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X14);
    // 0x800CB49C: nop

    // 0x800CB4A0: swc1        $f20, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f20.u32l;
    // 0x800CB4A4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800CB4A8: nop

    // 0x800CB4AC: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
L_800CB4B0:
    // 0x800CB4B0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x800CB4B4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800CB4B8: nop

    // 0x800CB4BC: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800CB4C0: nop

    // 0x800CB4C4: beq         $t3, $zero, L_800CB4E4
    if (ctx->r11 == 0) {
        // 0x800CB4C8: nop
    
            goto L_800CB4E4;
    }
    // 0x800CB4C8: nop

    // 0x800CB4CC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800CB4D0: nop

    // 0x800CB4D4: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800CB4D8: nop

    // 0x800CB4DC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800CB4E0: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
L_800CB4E4:
    // 0x800CB4E4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800CB4E8: nop

    // 0x800CB4EC: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800CB4F0: nop

    // 0x800CB4F4: bne         $t8, $zero, L_800CB51C
    if (ctx->r24 != 0) {
        // 0x800CB4F8: nop
    
            goto L_800CB51C;
    }
    // 0x800CB4F8: nop

    // 0x800CB4FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB500: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB504: jal         0x80028FA0
    // 0x800CB508: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800CB508: nop

    after_0:
    // 0x800CB50C: beq         $v0, $zero, L_800CB51C
    if (ctx->r2 == 0) {
        // 0x800CB510: nop
    
            goto L_800CB51C;
    }
    // 0x800CB510: nop

    // 0x800CB514: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800CB518: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_800CB51C:
    // 0x800CB51C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800CB520: nop

    // 0x800CB524: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800CB528: nop

    // 0x800CB52C: bne         $t1, $zero, L_800CB614
    if (ctx->r9 != 0) {
        // 0x800CB530: nop
    
            goto L_800CB614;
    }
    // 0x800CB530: nop

    // 0x800CB534: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800CB538: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x800CB53C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800CB540: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800CB544: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800CB548: lwc1        $f18, 0x0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X0);
    // 0x800CB54C: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x800CB550: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800CB554: jal         0x80015634
    // 0x800CB558: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x800CB558: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x800CB55C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800CB560: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800CB564: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800CB568: lwc1        $f12, 0x3C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800CB56C: jal         0x800157EC
    // 0x800CB570: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_2;
    // 0x800CB570: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x800CB574: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800CB578: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800CB57C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800CB580: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x800CB584: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800CB588: jal         0x80015538
    // 0x800CB58C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800CB58C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_3:
    // 0x800CB590: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800CB594: nop

    // 0x800CB598: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x800CB59C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800CB5A0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800CB5A4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800CB5A8: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800CB5AC: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800CB5B0: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800CB5B4: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800CB5B8: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800CB5BC: jal         0x800156C4
    // 0x800CB5C0: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_4;
    // 0x800CB5C0: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_4:
    // 0x800CB5C4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800CB5C8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800CB5CC: jal         0x80015744
    // 0x800CB5D0: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_5;
    // 0x800CB5D0: nop

    after_5:
    // 0x800CB5D4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800CB5D8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800CB5DC: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800CB5E0: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x800CB5E4: jal         0x800157EC
    // 0x800CB5E8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_6;
    // 0x800CB5E8: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_6:
    // 0x800CB5EC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800CB5F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CB5F4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800CB5F8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800CB5FC: lwc1        $f12, 0x40($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X40);
    // 0x800CB600: jal         0x80015538
    // 0x800CB604: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800CB604: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_7:
    // 0x800CB608: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800CB60C: nop

    // 0x800CB610: swc1        $f0, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f0.u32l;
L_800CB614:
    // 0x800CB614: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800CB618: nop

    // 0x800CB61C: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800CB620: nop

    // 0x800CB624: swc1        $f8, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f8.u32l;
    // 0x800CB628: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800CB62C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800CB630: lwc1        $f14, 0x40($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X40);
    // 0x800CB634: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800CB638: jal         0x80015538
    // 0x800CB63C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x800CB63C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_8:
    // 0x800CB640: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800CB644: nop

    // 0x800CB648: swc1        $f0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f0.u32l;
    // 0x800CB64C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB654: jal         0x80029D8C
    // 0x800CB658: nop

    func_80029D8C(rdram, ctx);
        goto after_9;
    // 0x800CB658: nop

    after_9:
    // 0x800CB65C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CB660: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CB664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB66C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CB670: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800CB674: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CB678: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CB67C: jal         0x80029018
    // 0x800CB680: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x800CB680: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x800CB684: beq         $v0, $zero, L_800CB694
    if (ctx->r2 == 0) {
        // 0x800CB688: nop
    
            goto L_800CB694;
    }
    // 0x800CB688: nop

    // 0x800CB68C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800CB690: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
L_800CB694:
    // 0x800CB694: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x800CB698: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800CB69C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CB6A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB6A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB6A8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800CB6AC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800CB6B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CB6B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800CB6B8: jal         0x800295C0
    // 0x800CB6BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x800CB6BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x800CB6C0: beq         $v0, $zero, L_800CB6D0
    if (ctx->r2 == 0) {
        // 0x800CB6C4: nop
    
            goto L_800CB6D0;
    }
    // 0x800CB6C4: nop

    // 0x800CB6C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800CB6CC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_800CB6D0:
    // 0x800CB6D0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800CB6D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CB6D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CB6DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CB6E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CB6E4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800CB6E8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800CB6EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CB6F0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800CB6F4: jal         0x800295C0
    // 0x800CB6F8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x800CB6F8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x800CB6FC: beq         $v0, $zero, L_800CB70C
    if (ctx->r2 == 0) {
        // 0x800CB700: nop
    
            goto L_800CB70C;
    }
    // 0x800CB700: nop

    // 0x800CB704: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800CB708: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_800CB70C:
    // 0x800CB70C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800CB710: nop

    // 0x800CB714: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800CB718: nop

    // 0x800CB71C: beq         $t1, $zero, L_800CB72C
    if (ctx->r9 == 0) {
        // 0x800CB720: nop
    
            goto L_800CB72C;
    }
    // 0x800CB720: nop

    // 0x800CB724: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CB728: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
L_800CB72C:
    // 0x800CB72C: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800CB730: nop

    // 0x800CB734: beq         $t3, $zero, L_800CB754
    if (ctx->r11 == 0) {
        // 0x800CB738: nop
    
            goto L_800CB754;
    }
    // 0x800CB738: nop

    // 0x800CB73C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800CB740: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800CB744: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800CB748: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800CB74C: nop

    // 0x800CB750: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800CB754:
    // 0x800CB754: b           L_800CB75C
    // 0x800CB758: nop

        goto L_800CB75C;
    // 0x800CB758: nop

L_800CB75C:
    // 0x800CB75C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CB760: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800CB764: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800CB768: jr          $ra
    // 0x800CB76C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800CB76C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800B9FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9FFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA000: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800BA004: nop

    // 0x800BA008: bne         $t6, $zero, L_800BA08C
    if (ctx->r14 != 0) {
        // 0x800BA00C: nop
    
            goto L_800BA08C;
    }
    // 0x800BA00C: nop

    // 0x800BA010: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800BA014: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800BA018: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BA01C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BA020: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BA024: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BA028: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BA02C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BA030: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800BA034: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800BA038: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800BA03C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800BA040: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800BA044: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BA048: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800BA04C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BA050: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800BA054: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BA058: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800BA05C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800BA060: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BA064: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800BA068: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800BA06C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BA070: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800BA074: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800BA078: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BA07C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800BA080: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BA084: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BA088: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800BA08C:
    // 0x800BA08C: jr          $ra
    // 0x800BA090: nop

    return;
    // 0x800BA090: nop

    // 0x800BA094: jr          $ra
    // 0x800BA098: nop

    return;
    // 0x800BA098: nop

;}
RECOMP_FUNC void func_800F52B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F52B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F52BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F52C0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F52C4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F52C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F52CC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F52D0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F52D4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F52D8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F52DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F52E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F52E4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F52E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F52EC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F52F0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F52F4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F52F8: addiu       $a1, $a1, 0x3724
    ctx->r5 = ADD32(ctx->r5, 0X3724);
    // 0x800F52FC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F5300: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F5304: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800F5308: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F530C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F5310: jal         0x80027464
    // 0x800F5314: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F5314: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F5318: b           L_800F5320
    // 0x800F531C: nop

        goto L_800F5320;
    // 0x800F531C: nop

L_800F5320:
    // 0x800F5320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5324: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F5328: jr          $ra
    // 0x800F532C: nop

    return;
    // 0x800F532C: nop

;}
RECOMP_FUNC void func_80071E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071E28: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80071E2C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80071E30: addiu       $t6, $t6, -0x1D70
    ctx->r14 = ADD32(ctx->r14, -0X1D70);
    // 0x80071E34: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80071E38: nop

    // 0x80071E3C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80071E40: beq         $t8, $zero, L_80071ECC
    if (ctx->r24 == 0) {
        // 0x80071E44: nop
    
            goto L_80071ECC;
    }
    // 0x80071E44: nop

    // 0x80071E48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071E4C: lwc1        $f4, -0x1EA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80071E50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80071E54: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80071E58: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80071E5C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80071E60: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80071E64: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80071E68: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x80071E6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80071E70: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80071E74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80071E78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80071E7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80071E80: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80071E84: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80071E88: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80071E8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80071E90: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80071E94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071E98: mflo        $t1
    ctx->r9 = lo;
    // 0x80071E9C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80071EA0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80071EA4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80071EA8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80071EAC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80071EB0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80071EB4: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80071EB8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80071EBC: nop

    // 0x80071EC0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80071EC4: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80071EC8: swc1        $f10, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f10.u32l;
L_80071ECC:
    // 0x80071ECC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80071ED0: addiu       $t3, $t3, -0x1D70
    ctx->r11 = ADD32(ctx->r11, -0X1D70);
    // 0x80071ED4: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x80071ED8: nop

    // 0x80071EDC: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80071EE0: beq         $t5, $zero, L_80071F6C
    if (ctx->r13 == 0) {
        // 0x80071EE4: nop
    
            goto L_80071F6C;
    }
    // 0x80071EE4: nop

    // 0x80071EE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071EEC: lwc1        $f16, -0x1EA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80071EF0: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80071EF4: lwc1        $f7, 0x5608($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5608);
    // 0x80071EF8: lwc1        $f6, 0x560C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X560C);
    // 0x80071EFC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x80071F00: add.d       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = ctx->f4.d + ctx->f6.d;
    // 0x80071F04: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x80071F08: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x80071F0C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80071F10: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80071F14: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80071F18: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80071F1C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80071F20: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80071F24: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80071F28: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x80071F2C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80071F30: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80071F34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071F38: mflo        $t8
    ctx->r24 = lo;
    // 0x80071F3C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80071F40: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80071F44: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80071F48: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80071F4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80071F50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80071F54: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80071F58: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80071F5C: nop

    // 0x80071F60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80071F64: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80071F68: swc1        $f18, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f18.u32l;
L_80071F6C:
    // 0x80071F6C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80071F70: addiu       $t0, $t0, -0x1D70
    ctx->r8 = ADD32(ctx->r8, -0X1D70);
    // 0x80071F74: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80071F78: nop

    // 0x80071F7C: andi        $t2, $t1, 0x8
    ctx->r10 = ctx->r9 & 0X8;
    // 0x80071F80: beq         $t2, $zero, L_8007200C
    if (ctx->r10 == 0) {
        // 0x80071F84: nop
    
            goto L_8007200C;
    }
    // 0x80071F84: nop

    // 0x80071F88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071F8C: lwc1        $f8, -0x1EA8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x80071F90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80071F94: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80071F98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80071F9C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x80071FA0: add.d       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f16.d + ctx->f4.d;
    // 0x80071FA4: cvt.s.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f6.fl = CVT_S_D(ctx->f10.d);
    // 0x80071FA8: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80071FAC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80071FB0: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80071FB4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80071FB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80071FBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80071FC0: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80071FC4: cvt.w.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80071FC8: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80071FCC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80071FD0: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x80071FD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071FD8: mflo        $t5
    ctx->r13 = lo;
    // 0x80071FDC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80071FE0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80071FE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80071FE8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80071FEC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80071FF0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80071FF4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80071FF8: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80071FFC: nop

    // 0x80072000: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80072004: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80072008: swc1        $f10, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f10.u32l;
L_8007200C:
    // 0x8007200C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80072010: addiu       $t7, $t7, -0x1D70
    ctx->r15 = ADD32(ctx->r15, -0X1D70);
    // 0x80072014: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80072018: nop

    // 0x8007201C: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x80072020: beq         $t9, $zero, L_800720AC
    if (ctx->r25 == 0) {
        // 0x80072024: nop
    
            goto L_800720AC;
    }
    // 0x80072024: nop

    // 0x80072028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007202C: lwc1        $f6, -0x1EA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x80072030: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80072034: lwc1        $f17, 0x5610($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5610);
    // 0x80072038: lwc1        $f16, 0x5614($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5614);
    // 0x8007203C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80072040: add.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f8.d + ctx->f16.d;
    // 0x80072044: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80072048: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8007204C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80072050: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80072054: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80072058: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007205C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80072060: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x80072064: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80072068: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8007206C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80072070: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80072074: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072078: mflo        $t2
    ctx->r10 = lo;
    // 0x8007207C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80072080: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80072084: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80072088: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8007208C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80072090: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80072094: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80072098: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x8007209C: nop

    // 0x800720A0: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800720A4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800720A8: swc1        $f18, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f18.u32l;
L_800720AC:
    // 0x800720AC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800720B0: addiu       $t4, $t4, -0x1D70
    ctx->r12 = ADD32(ctx->r12, -0X1D70);
    // 0x800720B4: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x800720B8: nop

    // 0x800720BC: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x800720C0: beq         $t6, $zero, L_800720E4
    if (ctx->r14 == 0) {
        // 0x800720C4: nop
    
            goto L_800720E4;
    }
    // 0x800720C4: nop

    // 0x800720C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800720CC: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x800720D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800720D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800720D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800720DC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800720E0: swc1        $f8, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f8.u32l;
L_800720E4:
    // 0x800720E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800720E8: addiu       $t7, $t7, -0x1D70
    ctx->r15 = ADD32(ctx->r15, -0X1D70);
    // 0x800720EC: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x800720F0: nop

    // 0x800720F4: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x800720F8: beq         $t9, $zero, L_80072150
    if (ctx->r25 == 0) {
        // 0x800720FC: nop
    
            goto L_80072150;
    }
    // 0x800720FC: nop

    // 0x80072100: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072104: lwc1        $f10, -0x1E90($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80072108: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8007210C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80072110: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072114: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80072118: swc1        $f18, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f18.u32l;
    // 0x8007211C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072120: lwc1        $f4, -0x1E90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80072124: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80072128: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007212C: nop

    // 0x80072130: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80072134: nop

    // 0x80072138: bc1f        L_80072150
    if (!c1cs) {
        // 0x8007213C: nop
    
            goto L_80072150;
    }
    // 0x8007213C: nop

    // 0x80072140: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80072144: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80072148: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007214C: swc1        $f8, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f8.u32l;
L_80072150:
    // 0x80072150: b           L_80072158
    // 0x80072154: nop

        goto L_80072158;
    // 0x80072154: nop

L_80072158:
    // 0x80072158: jr          $ra
    // 0x8007215C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007215C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800FA27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA27C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FA280: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FA284: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800FA288: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800FA28C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA290: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FA294: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FA298: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FA29C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA2A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA2A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA2A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FA2AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FA2B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FA2B4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800FA2B8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA2BC: nop

    // 0x800FA2C0: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800FA2C4: nop

    // 0x800FA2C8: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800FA2CC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA2D0: nop

    // 0x800FA2D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FA2D8: nop

    // 0x800FA2DC: bne         $t3, $zero, L_800FA37C
    if (ctx->r11 != 0) {
        // 0x800FA2E0: nop
    
            goto L_800FA37C;
    }
    // 0x800FA2E0: nop

    // 0x800FA2E4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA2E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800FA2EC: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800FA2F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA2F4: nop

    // 0x800FA2F8: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800FA2FC: nop

    // 0x800FA300: beq         $t7, $zero, L_800FA314
    if (ctx->r15 == 0) {
        // 0x800FA304: nop
    
            goto L_800FA314;
    }
    // 0x800FA304: nop

    // 0x800FA308: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA30C: b           L_800FA320
    // 0x800FA310: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
        goto L_800FA320;
    // 0x800FA310: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
L_800FA314:
    // 0x800FA314: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA318: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800FA31C: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
L_800FA320:
    // 0x800FA320: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA324: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x800FA328: sh          $t1, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = ctx->r9;
    // 0x800FA32C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA330: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x800FA334: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x800FA338: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA33C: jal         0x8001BBDC
    // 0x800FA340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800FA340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800FA344: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800FA348: addiu       $a3, $a3, -0x44B0
    ctx->r7 = ADD32(ctx->r7, -0X44B0);
    // 0x800FA34C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA350: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800FA354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA358: jal         0x8001ABF4
    // 0x800FA35C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800FA35C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800FA360: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800FA364: addiu       $a3, $a3, -0x44B0
    ctx->r7 = ADD32(ctx->r7, -0X44B0);
    // 0x800FA368: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA36C: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800FA370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FA374: jal         0x8001ABF4
    // 0x800FA378: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800FA378: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
L_800FA37C:
    // 0x800FA37C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA380: nop

    // 0x800FA384: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800FA388: nop

    // 0x800FA38C: beq         $t6, $zero, L_800FA3C4
    if (ctx->r14 == 0) {
        // 0x800FA390: nop
    
            goto L_800FA3C4;
    }
    // 0x800FA390: nop

    // 0x800FA394: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA398: nop

    // 0x800FA39C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800FA3A0: nop

    // 0x800FA3A4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800FA3A8: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x800FA3AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA3B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA3B4: jal         0x80029D04
    // 0x800FA3B8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800FA3B8: nop

    after_3:
    // 0x800FA3BC: b           L_800FA3F4
    // 0x800FA3C0: nop

        goto L_800FA3F4;
    // 0x800FA3C0: nop

L_800FA3C4:
    // 0x800FA3C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FA3C8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA3CC: nop

    // 0x800FA3D0: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x800FA3D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA3D8: nop

    // 0x800FA3DC: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800FA3E0: nop

    // 0x800FA3E4: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800FA3E8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA3EC: nop

    // 0x800FA3F0: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
L_800FA3F4:
    // 0x800FA3F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA3F8: jal         0x8001B44C
    // 0x800FA3FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800FA3FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800FA400: beq         $v0, $zero, L_800FA4B8
    if (ctx->r2 == 0) {
        // 0x800FA404: nop
    
            goto L_800FA4B8;
    }
    // 0x800FA404: nop

    // 0x800FA408: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA40C: nop

    // 0x800FA410: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800FA414: nop

    // 0x800FA418: bne         $t4, $zero, L_800FA4B8
    if (ctx->r12 != 0) {
        // 0x800FA41C: nop
    
            goto L_800FA4B8;
    }
    // 0x800FA41C: nop

    // 0x800FA420: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA424: nop

    // 0x800FA428: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800FA42C: nop

    // 0x800FA430: beq         $t6, $zero, L_800FA46C
    if (ctx->r14 == 0) {
        // 0x800FA434: nop
    
            goto L_800FA46C;
    }
    // 0x800FA434: nop

    // 0x800FA438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA43C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA440: jal         0x800281A4
    // 0x800FA444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_5;
    // 0x800FA444: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800FA448: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA44C: jal         0x8002B0E4
    // 0x800FA450: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800FA450: nop

    after_6:
    // 0x800FA454: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA458: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA45C: jal         0x8002B0E4
    // 0x800FA460: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800FA460: nop

    after_7:
    // 0x800FA464: b           L_800FA4B8
    // 0x800FA468: nop

        goto L_800FA4B8;
    // 0x800FA468: nop

L_800FA46C:
    // 0x800FA46C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA470: jal         0x8001BBDC
    // 0x800FA474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800FA474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800FA478: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA47C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800FA480: addiu       $a3, $a3, -0x44B0
    ctx->r7 = ADD32(ctx->r7, -0X44B0);
    // 0x800FA484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA488: jal         0x8001ABF4
    // 0x800FA48C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800FA48C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x800FA490: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800FA494: addiu       $a3, $a3, -0x44B0
    ctx->r7 = ADD32(ctx->r7, -0X44B0);
    // 0x800FA498: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800FA49C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800FA4A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FA4A4: jal         0x8001ABF4
    // 0x800FA4A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800FA4A8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
    // 0x800FA4AC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800FA4B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800FA4B4: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800FA4B8:
    // 0x800FA4B8: b           L_800FA4C0
    // 0x800FA4BC: nop

        goto L_800FA4C0;
    // 0x800FA4BC: nop

L_800FA4C0:
    // 0x800FA4C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA4C4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800FA4C8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800FA4CC: jr          $ra
    // 0x800FA4D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FA4D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F5698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5698: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F569C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F56A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F56A4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F56A8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F56AC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F56B0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F56B4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F56B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F56BC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F56C0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F56C4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F56C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F56CC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F56D0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F56D4: addiu       $a1, $a1, 0x373C
    ctx->r5 = ADD32(ctx->r5, 0X373C);
    // 0x800F56D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F56DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F56E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F56E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F56E8: jal         0x80027464
    // 0x800F56EC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F56EC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F56F0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F56F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F56F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F56FC: beq         $t0, $at, L_800F5734
    if (ctx->r8 == ctx->r1) {
        // 0x800F5700: nop
    
            goto L_800F5734;
    }
    // 0x800F5700: nop

    // 0x800F5704: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F5708: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800F570C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800F5710: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F5714: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800F5718: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F571C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F5720: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800F5724: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F5728: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F572C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800F5730: sh          $t2, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r10;
L_800F5734:
    // 0x800F5734: b           L_800F573C
    // 0x800F5738: nop

        goto L_800F573C;
    // 0x800F5738: nop

L_800F573C:
    // 0x800F573C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F5740: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F5744: jr          $ra
    // 0x800F5748: nop

    return;
    // 0x800F5748: nop

;}
