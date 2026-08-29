#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800E2F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2F94: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E2F98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2F9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E2FA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2FA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E2FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2FAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2FB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2FB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E2FB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E2FBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E2FC0: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E2FC4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E2FC8: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E2FCC: nop

    // 0x800E2FD0: bne         $t0, $zero, L_800E2FFC
    if (ctx->r8 != 0) {
        // 0x800E2FD4: nop
    
            goto L_800E2FFC;
    }
    // 0x800E2FD4: nop

    // 0x800E2FD8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E2FDC: nop

    // 0x800E2FE0: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E2FE4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E2FE8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x800E2FEC: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E2FF0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E2FF4: b           L_800E301C
    // 0x800E2FF8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E301C;
    // 0x800E2FF8: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E2FFC:
    // 0x800E2FFC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800E3000: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x800E3004: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E3008: bne         $t5, $at, L_800E301C
    if (ctx->r13 != ctx->r1) {
        // 0x800E300C: nop
    
            goto L_800E301C;
    }
    // 0x800E300C: nop

    // 0x800E3010: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E3014: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800E3018: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
L_800E301C:
    // 0x800E301C: b           L_800E3024
    // 0x800E3020: nop

        goto L_800E3024;
    // 0x800E3020: nop

L_800E3024:
    // 0x800E3024: jr          $ra
    // 0x800E3028: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E3028: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void stub_9B110_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0618: jr          $ra
    // 0x800B061C: nop

    return;
    // 0x800B061C: nop

    // 0x800B0620: jr          $ra
    // 0x800B0624: nop

    return;
    // 0x800B0624: nop

;}
RECOMP_FUNC void func_80085B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085B34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80085B38: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80085B3C: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x80085B40: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x80085B44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80085B48: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80085B4C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80085B50: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80085B54: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80085B58: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80085B5C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80085B60: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80085B64: lwc1        $f14, 0x4($t6)
    ctx->f14.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80085B68: jal         0x800843CC
    // 0x80085B6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x80085B6C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x80085B70: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80085B74: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x80085B78: nop

    // 0x80085B7C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80085B80: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80085B84: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80085B88: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x80085B8C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085B90: sb          $t9, 0x51A8($at)
    MEM_B(0X51A8, ctx->r1) = ctx->r25;
    // 0x80085B94: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80085B98: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80085B9C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80085BA0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80085BA4: lw          $t2, 0x76F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X76F0);
    // 0x80085BA8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085BAC: sw          $t2, 0x51AC($at)
    MEM_W(0X51AC, ctx->r1) = ctx->r10;
    // 0x80085BB0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80085BB4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80085BB8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80085BBC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80085BC0: lw          $t5, 0x7700($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7700);
    // 0x80085BC4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085BC8: sw          $t5, 0x51B0($at)
    MEM_W(0X51B0, ctx->r1) = ctx->r13;
    // 0x80085BCC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80085BD0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80085BD4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80085BD8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80085BDC: lw          $t8, 0x7710($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7710);
    // 0x80085BE0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085BE4: sw          $t8, 0x51B4($at)
    MEM_W(0X51B4, ctx->r1) = ctx->r24;
    // 0x80085BE8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80085BEC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80085BF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80085BF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80085BF8: lw          $t1, 0x7720($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7720);
    // 0x80085BFC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C00: sw          $t1, 0x51B8($at)
    MEM_W(0X51B8, ctx->r1) = ctx->r9;
    // 0x80085C04: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80085C08: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80085C0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80085C10: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80085C14: lw          $t4, 0x7730($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7730);
    // 0x80085C18: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C1C: sw          $t4, 0x51BC($at)
    MEM_W(0X51BC, ctx->r1) = ctx->r12;
    // 0x80085C20: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80085C24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085C28: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80085C2C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80085C30: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80085C34: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C38: swc1        $f18, 0x51C0($at)
    MEM_W(0X51C0, ctx->r1) = ctx->f18.u32l;
    // 0x80085C3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80085C40: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80085C44: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80085C48: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80085C4C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80085C54: swc1        $f8, 0x51C4($at)
    MEM_W(0X51C4, ctx->r1) = ctx->f8.u32l;
    // 0x80085C58: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80085C5C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80085C60: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C64: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80085C68: nop

    // 0x80085C6C: swc1        $f10, 0x51C8($at)
    MEM_W(0X51C8, ctx->r1) = ctx->f10.u32l;
    // 0x80085C70: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80085C74: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80085C78: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80085C7C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80085C80: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C84: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80085C88: swc1        $f4, 0x51CC($at)
    MEM_W(0X51CC, ctx->r1) = ctx->f4.u32l;
    // 0x80085C8C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80085C90: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80085C94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085C98: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80085C9C: nop

    // 0x80085CA0: swc1        $f6, 0x51D0($at)
    MEM_W(0X51D0, ctx->r1) = ctx->f6.u32l;
    // 0x80085CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085CA8: lwc1        $f12, -0x1C74($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80085CAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80085CB0: lwc1        $f14, -0x1C6C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80085CB4: jal         0x80015634
    // 0x80085CB8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80085CB8: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80085CBC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80085CC0: swc1        $f0, 0x51D4($at)
    MEM_W(0X51D4, ctx->r1) = ctx->f0.u32l;
    // 0x80085CC4: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80085CC8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80085CCC: lw          $t2, 0x51B0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X51B0);
    // 0x80085CD0: lw          $t1, 0x51AC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51AC);
    // 0x80085CD4: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80085CD8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80085CDC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80085CE0: lw          $t6, 0x51B8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51B8);
    // 0x80085CE4: lw          $t3, 0x51B4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X51B4);
    // 0x80085CE8: addiu       $t7, $t7, 0x51D8
    ctx->r15 = ADD32(ctx->r15, 0X51D8);
    // 0x80085CEC: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x80085CF0: sra         $a2, $t2, 31
    ctx->r6 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80085CF4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80085CF8: sra         $a0, $t1, 31
    ctx->r4 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80085CFC: addiu       $t1, $t7, 0x8
    ctx->r9 = ADD32(ctx->r15, 0X8);
    // 0x80085D00: addiu       $t2, $t7, 0xC
    ctx->r10 = ADD32(ctx->r15, 0XC);
    // 0x80085D04: addiu       $t0, $t7, 0x4
    ctx->r8 = ADD32(ctx->r15, 0X4);
    // 0x80085D08: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x80085D0C: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80085D10: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x80085D14: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x80085D18: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80085D1C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80085D20: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80085D24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80085D28: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80085D2C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x80085D30: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x80085D34: jal         0x80016A80
    // 0x80085D38: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_80016A80(rdram, ctx);
        goto after_2;
    // 0x80085D38: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_2:
    // 0x80085D3C: b           L_80085D44
    // 0x80085D40: nop

        goto L_80085D44;
    // 0x80085D40: nop

L_80085D44:
    // 0x80085D44: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80085D48: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80085D4C: jr          $ra
    // 0x80085D50: nop

    return;
    // 0x80085D50: nop

;}
RECOMP_FUNC void func_80088694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80088698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008869C: jal         0x8001A928
    // 0x800886A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x800886A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800886A4: jal         0x8001A928
    // 0x800886A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x800886A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800886AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800886B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800886B4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800886B8: lwc1        $f4, -0x1BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BC8);
    // 0x800886BC: nop

    // 0x800886C0: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x800886C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800886C8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800886CC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800886D0: lwc1        $f6, -0x1BC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1BC4);
    // 0x800886D4: nop

    // 0x800886D8: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x800886DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800886E0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800886E4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800886E8: lwc1        $f8, -0x1BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BC0);
    // 0x800886EC: nop

    // 0x800886F0: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x800886F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800886F8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800886FC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80088700: lwc1        $f10, -0x1BBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BBC);
    // 0x80088704: nop

    // 0x80088708: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x8008870C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80088710: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80088714: nop

    // 0x80088718: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x8008871C: nop

    // 0x80088720: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
    // 0x80088724: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80088728: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8008872C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80088730: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80088734: jal         0x80087E14
    // 0x80088738: nop

    func_80087E14(rdram, ctx);
        goto after_2;
    // 0x80088738: nop

    after_2:
    // 0x8008873C: jal         0x8006828C
    // 0x80088740: nop

    func_8006828C(rdram, ctx);
        goto after_3;
    // 0x80088740: nop

    after_3:
    // 0x80088744: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80088748: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8008874C: jal         0x80085B34
    // 0x80088750: nop

    func_80085B34(rdram, ctx);
        goto after_4;
    // 0x80088750: nop

    after_4:
    // 0x80088754: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80088758: lb          $t3, 0x523E($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X523E);
    // 0x8008875C: nop

    // 0x80088760: bne         $t3, $zero, L_80088778
    if (ctx->r11 != 0) {
        // 0x80088764: nop
    
            goto L_80088778;
    }
    // 0x80088764: nop

    // 0x80088768: jal         0x8028AF38
    // 0x8008876C: nop

    func_8028AF38_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x8008876C: nop

    after_5:
    // 0x80088770: b           L_80088834
    // 0x80088774: nop

        goto L_80088834;
    // 0x80088774: nop

L_80088778:
    // 0x80088778: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8008877C: lb          $t4, 0x523E($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X523E);
    // 0x80088780: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80088784: bne         $t4, $at, L_8008879C
    if (ctx->r12 != ctx->r1) {
        // 0x80088788: nop
    
            goto L_8008879C;
    }
    // 0x80088788: nop

    // 0x8008878C: jal         0x80283BD4
    // 0x80088790: nop

    func_80283BD4_code_extra_1(rdram, ctx);
        goto after_6;
    // 0x80088790: nop

    after_6:
    // 0x80088794: b           L_80088834
    // 0x80088798: nop

        goto L_80088834;
    // 0x80088798: nop

L_8008879C:
    // 0x8008879C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800887A0: lb          $t5, 0x523E($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X523E);
    // 0x800887A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800887A8: bne         $t5, $at, L_800887C0
    if (ctx->r13 != ctx->r1) {
        // 0x800887AC: nop
    
            goto L_800887C0;
    }
    // 0x800887AC: nop

    // 0x800887B0: jal         0x80282698
    // 0x800887B4: nop

    func_80282698_code_extra_2(rdram, ctx);
        goto after_7;
    // 0x800887B4: nop

    after_7:
    // 0x800887B8: b           L_80088834
    // 0x800887BC: nop

        goto L_80088834;
    // 0x800887BC: nop

L_800887C0:
    // 0x800887C0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800887C4: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x800887C8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800887CC: bne         $t6, $at, L_800887E4
    if (ctx->r14 != ctx->r1) {
        // 0x800887D0: nop
    
            goto L_800887E4;
    }
    // 0x800887D0: nop

    // 0x800887D4: jal         0x802814CC
    // 0x800887D8: nop

    func_802814CC_code_extra_3(rdram, ctx);
        goto after_8;
    // 0x800887D8: nop

    after_8:
    // 0x800887DC: b           L_80088834
    // 0x800887E0: nop

        goto L_80088834;
    // 0x800887E0: nop

L_800887E4:
    // 0x800887E4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800887E8: lb          $t7, 0x523E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523E);
    // 0x800887EC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800887F0: bne         $t7, $at, L_80088808
    if (ctx->r15 != ctx->r1) {
        // 0x800887F4: nop
    
            goto L_80088808;
    }
    // 0x800887F4: nop

    // 0x800887F8: jal         0x80281440
    // 0x800887FC: nop

    LOOKUP_FUNC(0x80281440)(rdram, ctx);
        goto after_9;
    // 0x800887FC: nop

    after_9:
    // 0x80088800: b           L_80088834
    // 0x80088804: nop

        goto L_80088834;
    // 0x80088804: nop

L_80088808:
    // 0x80088808: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8008880C: lb          $t8, 0x523E($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X523E);
    // 0x80088810: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80088814: bne         $t8, $at, L_8008882C
    if (ctx->r24 != ctx->r1) {
        // 0x80088818: nop
    
            goto L_8008882C;
    }
    // 0x80088818: nop

    // 0x8008881C: jal         0x80286508
    // 0x80088820: nop

    func_80286508_code_extra_5(rdram, ctx);
        goto after_10;
    // 0x80088820: nop

    after_10:
    // 0x80088824: b           L_80088834
    // 0x80088828: nop

        goto L_80088834;
    // 0x80088828: nop

L_8008882C:
    // 0x8008882C: jal         0x80283344
    // 0x80088830: nop

    func_80283344_code_extra_6(rdram, ctx);
        goto after_11;
    // 0x80088830: nop

    after_11:
L_80088834:
    // 0x80088834: b           L_8008883C
    // 0x80088838: nop

        goto L_8008883C;
    // 0x80088838: nop

L_8008883C:
    // 0x8008883C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80088844: jr          $ra
    // 0x80088848: nop

    return;
    // 0x80088848: nop

;}
RECOMP_FUNC void func_800964CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800964CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800964D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800964D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800964D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800964DC: lb          $t6, -0x1CD8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1CD8);
    // 0x800964E0: nop

    // 0x800964E4: bne         $t6, $zero, L_80096518
    if (ctx->r14 != 0) {
        // 0x800964E8: nop
    
            goto L_80096518;
    }
    // 0x800964E8: nop

    // 0x800964EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800964F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800964F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800964F8: jal         0x8001B6BC
    // 0x800964FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8001B6BC(rdram, ctx);
        goto after_0;
    // 0x800964FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x80096500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096508: jal         0x8001BBDC
    // 0x8009650C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x8009650C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80096510: b           L_80096528
    // 0x80096514: nop

        goto L_80096528;
    // 0x80096514: nop

L_80096518:
    // 0x80096518: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009651C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80096520: jal         0x8001BBDC
    // 0x80096524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x80096524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80096528:
    // 0x80096528: b           L_80096530
    // 0x8009652C: nop

        goto L_80096530;
    // 0x8009652C: nop

L_80096530:
    // 0x80096530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80096534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80096538: jr          $ra
    // 0x8009653C: nop

    return;
    // 0x8009653C: nop

;}
RECOMP_FUNC void func_800CBA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBA40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CBA44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CBA48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CBA4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CBA50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CBA54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CBA58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CBA5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CBA60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CBA64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CBA68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CBA6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CBA70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CBA74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CBA78: nop

    // 0x800CBA7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CBA80: nop

    // 0x800CBA84: bne         $t1, $zero, L_800CBAFC
    if (ctx->r9 != 0) {
        // 0x800CBA88: nop
    
            goto L_800CBAFC;
    }
    // 0x800CBA88: nop

    // 0x800CBA8C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CBA90: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CBA94: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800CBA98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CBA9C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CBAA0: nop

    // 0x800CBAA4: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
    // 0x800CBAA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CBAAC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800CBAB0: nop

    // 0x800CBAB4: swc1        $f6, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f6.u32l;
    // 0x800CBAB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CBABC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CBAC0: nop

    // 0x800CBAC4: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x800CBAC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBACC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CBAD0: addiu       $t7, $t7, -0x7DAC
    ctx->r15 = ADD32(ctx->r15, -0X7DAC);
    // 0x800CBAD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBAD8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800CBADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CBAE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CBAE4: jal         0x8001C0EC
    // 0x800CBAE8: addiu       $a3, $zero, 0x77
    ctx->r7 = ADD32(0, 0X77);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CBAE8: addiu       $a3, $zero, 0x77
    ctx->r7 = ADD32(0, 0X77);
    after_0:
    // 0x800CBAEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBAF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBAF4: jal         0x8001BBDC
    // 0x800CBAF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800CBAF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800CBAFC:
    // 0x800CBAFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBB00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBB04: jal         0x8001B62C
    // 0x800CBB08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800CBB08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800CBB0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CBB10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CBB14: nop

    // 0x800CBB18: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x800CBB1C: nop

    // 0x800CBB20: bc1f        L_800CBB40
    if (!c1cs) {
        // 0x800CBB24: nop
    
            goto L_800CBB40;
    }
    // 0x800CBB24: nop

    // 0x800CBB28: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CBB2C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800CBB30: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800CBB34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CBB38: nop

    // 0x800CBB3C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800CBB40:
    // 0x800CBB40: b           L_800CBB48
    // 0x800CBB44: nop

        goto L_800CBB48;
    // 0x800CBB44: nop

L_800CBB48:
    // 0x800CBB48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CBB4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CBB50: jr          $ra
    // 0x800CBB54: nop

    return;
    // 0x800CBB54: nop

;}
RECOMP_FUNC void func_800C2004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C2004: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C2008: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C200C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C2010: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C2014: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C2018: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C201C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C2020: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C2024: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C2028: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C202C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C2030: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C2034: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C2038: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C203C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C2040: nop

    // 0x800C2044: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C2048: nop

    // 0x800C204C: bne         $t1, $zero, L_800C2144
    if (ctx->r9 != 0) {
        // 0x800C2050: nop
    
            goto L_800C2144;
    }
    // 0x800C2050: nop

    // 0x800C2054: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C2058: nop

    // 0x800C205C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C2060: nop

    // 0x800C2064: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C2068: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C206C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800C2070: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C2074: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C2078: nop

    // 0x800C207C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C2080: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2084: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2088: jal         0x8002A46C
    // 0x800C208C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800C208C: nop

    after_0:
    // 0x800C2090: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800C2094: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C2098: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800C209C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C20A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C20A4: nop

    // 0x800C20A8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C20AC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800C20B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800C20B4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800C20B8: nop

    // 0x800C20BC: jal         0x80014E80
    // 0x800C20C0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800C20C0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_1:
    // 0x800C20C4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C20C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C20CC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800C20D0: nop

    // 0x800C20D4: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x800C20D8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800C20DC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C20E0: nop

    // 0x800C20E4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C20E8: nop

    // 0x800C20EC: slti        $at, $t4, 0x168
    ctx->r1 = SIGNED(ctx->r12) < 0X168 ? 1 : 0;
    // 0x800C20F0: bne         $at, $zero, L_800C2110
    if (ctx->r1 != 0) {
        // 0x800C20F4: nop
    
            goto L_800C2110;
    }
    // 0x800C20F4: nop

    // 0x800C20F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C20FC: nop

    // 0x800C2100: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800C2104: nop

    // 0x800C2108: addiu       $t6, $t5, -0x168
    ctx->r14 = ADD32(ctx->r13, -0X168);
    // 0x800C210C: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
L_800C2110:
    // 0x800C2110: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C2114: nop

    // 0x800C2118: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800C211C: nop

    // 0x800C2120: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800C2124: nop

    // 0x800C2128: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C212C: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x800C2130: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2134: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2138: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    // 0x800C213C: jal         0x80029EF8
    // 0x800C2140: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800C2140: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
L_800C2144:
    // 0x800C2144: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C2148: nop

    // 0x800C214C: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x800C2150: nop

    // 0x800C2154: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x800C2158: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C215C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C2160: nop

    // 0x800C2164: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x800C2168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C216C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2170: jal         0x80029C40
    // 0x800C2174: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800C2174: nop

    after_3:
    // 0x800C2178: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C217C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C2180: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C2184: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C2188: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800C218C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800C2190: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C2194: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800C2198: jal         0x80029018
    // 0x800C219C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800C219C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x800C21A0: beq         $v0, $zero, L_800C21C0
    if (ctx->r2 == 0) {
        // 0x800C21A4: nop
    
            goto L_800C21C0;
    }
    // 0x800C21A4: nop

    // 0x800C21A8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C21AC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C21B0: sh          $t9, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r25;
    // 0x800C21B4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C21B8: nop

    // 0x800C21BC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800C21C0:
    // 0x800C21C0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C21C4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C21C8: nop

    // 0x800C21CC: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
    // 0x800C21D0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800C21D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C21D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C21DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C21E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C21E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C21E8: lui         $a3, 0xC170
    ctx->r7 = S32(0XC170 << 16);
    // 0x800C21EC: jal         0x80029F58
    // 0x800C21F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800C21F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800C21F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C21F8: bne         $v0, $at, L_800C2218
    if (ctx->r2 != ctx->r1) {
        // 0x800C21FC: nop
    
            goto L_800C2218;
    }
    // 0x800C21FC: nop

    // 0x800C2200: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C2204: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C2208: sh          $t6, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r14;
    // 0x800C220C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C2210: nop

    // 0x800C2214: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800C2218:
    // 0x800C2218: b           L_800C2220
    // 0x800C221C: nop

        goto L_800C2220;
    // 0x800C221C: nop

L_800C2220:
    // 0x800C2220: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C2224: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C2228: jr          $ra
    // 0x800C222C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C222C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800B8968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8968: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B896C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B8970: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800B8974: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B8978: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B897C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B8980: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B8984: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8988: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B898C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B8990: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B8994: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B8998: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B899C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B89A0: lb          $t1, 0x2B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2B);
    // 0x800B89A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B89A8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800B89AC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800B89B0: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800B89B4: nop

    // 0x800B89B8: sb          $t4, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r12;
    // 0x800B89BC: lb          $t5, 0x1F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1F);
    // 0x800B89C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B89C4: beq         $t5, $at, L_800B8A54
    if (ctx->r13 == ctx->r1) {
        // 0x800B89C8: nop
    
            goto L_800B8A54;
    }
    // 0x800B89C8: nop

    // 0x800B89CC: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x800B89D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B89D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B89D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B89DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B89E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B89E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B89E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B89EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B89F0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x800B89F4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800B89F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B89FC: lh          $t0, 0x104($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X104);
    // 0x800B8A00: nop

    // 0x800B8A04: bne         $t0, $at, L_800B8A1C
    if (ctx->r8 != ctx->r1) {
        // 0x800B8A08: nop
    
            goto L_800B8A1C;
    }
    // 0x800B8A08: nop

    // 0x800B8A0C: lh          $t2, 0x100($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X100);
    // 0x800B8A10: nop

    // 0x800B8A14: bne         $t2, $zero, L_800B8A54
    if (ctx->r10 != 0) {
        // 0x800B8A18: nop
    
            goto L_800B8A54;
    }
    // 0x800B8A18: nop

L_800B8A1C:
    // 0x800B8A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8A24: lb          $a1, 0x2B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2B);
    // 0x800B8A28: jal         0x800281A4
    // 0x800B8A2C: nop

    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800B8A2C: nop

    after_0:
    // 0x800B8A30: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800B8A34: nop

    // 0x800B8A38: sh          $zero, 0x108($t3)
    MEM_H(0X108, ctx->r11) = 0;
    // 0x800B8A3C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800B8A40: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800B8A44: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800B8A48: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800B8A4C: nop

    // 0x800B8A50: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800B8A54:
    // 0x800B8A54: lb          $v0, 0x1F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X1F);
    // 0x800B8A58: b           L_800B8A68
    // 0x800B8A5C: nop

        goto L_800B8A68;
    // 0x800B8A5C: nop

    // 0x800B8A60: b           L_800B8A68
    // 0x800B8A64: nop

        goto L_800B8A68;
    // 0x800B8A64: nop

L_800B8A68:
    // 0x800B8A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B8A6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B8A70: jr          $ra
    // 0x800B8A74: nop

    return;
    // 0x800B8A74: nop

;}
RECOMP_FUNC void func_80065D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065D88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80065D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065D90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80065D94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80065D98: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80065D9C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80065DA0:
    // 0x80065DA0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80065DA4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80065DA8: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80065DAC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80065DB0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80065DB4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80065DB8: lbu         $t2, 0xB($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XB);
    // 0x80065DBC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80065DC0: beq         $t2, $at, L_800660AC
    if (ctx->r10 == ctx->r1) {
        // 0x80065DC4: sw          $t2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r10;
            goto L_800660AC;
    }
    // 0x80065DC4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x80065DC8: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
    // 0x80065DCC: addiu       $t3, $zero, 0x4E
    ctx->r11 = ADD32(0, 0X4E);
    // 0x80065DD0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80065DD4:
    // 0x80065DD4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80065DD8: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80065DDC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80065DE0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80065DE4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80065DE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80065DEC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80065DF0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80065DF4: lh          $t7, 0x41F4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F4);
    // 0x80065DF8: nop

    // 0x80065DFC: beq         $t7, $zero, L_80065EF4
    if (ctx->r15 == 0) {
        // 0x80065E00: nop
    
            goto L_80065EF4;
    }
    // 0x80065E00: nop

    // 0x80065E04: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80065E08:
    // 0x80065E08: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80065E0C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80065E10: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80065E14: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80065E18: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80065E1C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80065E20: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80065E24: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80065E28: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80065E2C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80065E30: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80065E34: lh          $t2, 0x4298($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4298);
    // 0x80065E38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065E3C: beq         $t2, $at, L_80065EDC
    if (ctx->r10 == ctx->r1) {
        // 0x80065E40: sw          $t2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r10;
            goto L_80065EDC;
    }
    // 0x80065E40: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80065E44: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80065E48: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80065E4C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80065E50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80065E54: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80065E58: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x80065E5C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80065E60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80065E64: lw          $t5, 0x2B08($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2B08);
    // 0x80065E68: lw          $t9, -0x3D68($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3D68);
    // 0x80065E6C: nop

    // 0x80065E70: bne         $t5, $t9, L_80065EDC
    if (ctx->r13 != ctx->r25) {
        // 0x80065E74: nop
    
            goto L_80065EDC;
    }
    // 0x80065E74: nop

    // 0x80065E78: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80065E7C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80065E80: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x80065E84: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80065E88: lbu         $t1, -0x3D64($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3D64);
    // 0x80065E8C: nop

    // 0x80065E90: sb          $t1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r9;
    // 0x80065E94: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80065E98: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80065E9C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80065EA0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80065EA4: lbu         $t4, -0x3D63($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X3D63);
    // 0x80065EA8: nop

    // 0x80065EAC: sb          $t4, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r12;
    // 0x80065EB0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80065EB4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80065EB8: sll         $t6, $t7, 3
    ctx->r14 = S32(ctx->r15 << 3);
    // 0x80065EBC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x80065EC0: lbu         $t5, -0x3D62($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3D62);
    // 0x80065EC4: nop

    // 0x80065EC8: sb          $t5, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r13;
    // 0x80065ECC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80065ED0: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    // 0x80065ED4: b           L_80065EF4
    // 0x80065ED8: nop

        goto L_80065EF4;
    // 0x80065ED8: nop

L_80065EDC:
    // 0x80065EDC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80065EE0: nop

    // 0x80065EE4: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x80065EE8: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x80065EEC: bne         $at, $zero, L_80065E08
    if (ctx->r1 != 0) {
        // 0x80065EF0: sw          $t0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r8;
            goto L_80065E08;
    }
    // 0x80065EF0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80065EF4:
    // 0x80065EF4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80065EF8: nop

    // 0x80065EFC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80065F00: slti        $at, $t2, 0x8E
    ctx->r1 = SIGNED(ctx->r10) < 0X8E ? 1 : 0;
    // 0x80065F04: bne         $at, $zero, L_80065DD4
    if (ctx->r1 != 0) {
        // 0x80065F08: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_80065DD4;
    }
    // 0x80065F08: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80065F0C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80065F10: nop

    // 0x80065F14: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x80065F18: beq         $at, $zero, L_80065FA4
    if (ctx->r1 == 0) {
        // 0x80065F1C: nop
    
            goto L_80065FA4;
    }
    // 0x80065F1C: nop

    // 0x80065F20: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80065F24: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80065F28: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x80065F2C: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80065F30: lbu         $t9, 0xA($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0XA);
    // 0x80065F34: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80065F38: bne         $t9, $at, L_80065F44
    if (ctx->r25 != ctx->r1) {
        // 0x80065F3C: sb          $t9, 0x1F($sp)
        MEM_B(0X1F, ctx->r29) = ctx->r25;
            goto L_80065F44;
    }
    // 0x80065F3C: sb          $t9, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r25;
    // 0x80065F40: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
L_80065F44:
    // 0x80065F44: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x80065F48: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80065F4C: sll         $t0, $t8, 1
    ctx->r8 = S32(ctx->r24 << 1);
    // 0x80065F50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80065F54: lbu         $t1, 0x65D8($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X65D8);
    // 0x80065F58: nop

    // 0x80065F5C: sb          $t1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r9;
    // 0x80065F60: lbu         $t2, 0x1E($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1E);
    // 0x80065F64: nop

    // 0x80065F68: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x80065F6C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80065F70: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80065F74: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80065F78: addiu       $t6, $t6, 0x2B08
    ctx->r14 = ADD32(ctx->r14, 0X2B08);
    // 0x80065F7C: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x80065F80: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80065F84: lb          $a2, 0xC($t5)
    ctx->r6 = MEM_B(ctx->r13, 0XC);
    // 0x80065F88: lw          $a3, 0x0($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X0);
    // 0x80065F8C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80065F90: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80065F94: jal         0x8001ABF4
    // 0x80065F98: nop

    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80065F98: nop

    after_0:
    // 0x80065F9C: b           L_80065FD0
    // 0x80065FA0: nop

        goto L_80065FD0;
    // 0x80065FA0: nop

L_80065FA4:
    // 0x80065FA4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80065FA8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80065FAC: addiu       $t0, $t0, 0x2B08
    ctx->r8 = ADD32(ctx->r8, 0X2B08);
    // 0x80065FB0: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x80065FB4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80065FB8: lb          $a2, 0xC($t1)
    ctx->r6 = MEM_B(ctx->r9, 0XC);
    // 0x80065FBC: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x80065FC0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80065FC4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80065FC8: jal         0x8001ABF4
    // 0x80065FCC: nop

    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80065FCC: nop

    after_1:
L_80065FD0:
    // 0x80065FD0: lbu         $t2, 0x24($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X24);
    // 0x80065FD4: nop

    // 0x80065FD8: beq         $t2, $zero, L_800660AC
    if (ctx->r10 == 0) {
        // 0x80065FDC: nop
    
            goto L_800660AC;
    }
    // 0x80065FDC: nop

    // 0x80065FE0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80065FE4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80065FE8: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x80065FEC: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80065FF0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80065FF4: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x80065FF8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80065FFC: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x80066000: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x80066004: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80066008: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8006600C: lh          $t8, 0x4298($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4298);
    // 0x80066010: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
    // 0x80066014: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80066018: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x8006601C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80066020: sb          $t3, -0x3D64($at)
    MEM_B(-0X3D64, ctx->r1) = ctx->r11;
    // 0x80066024: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80066028: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8006602C: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80066030: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x80066034: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80066038: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x8006603C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80066040: sll         $t4, $t6, 1
    ctx->r12 = S32(ctx->r14 << 1);
    // 0x80066044: addu        $t5, $t7, $t4
    ctx->r13 = ADD32(ctx->r15, ctx->r12);
    // 0x80066048: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8006604C: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x80066050: lh          $t9, 0x4298($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4298);
    // 0x80066054: lbu         $t1, 0x26($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X26);
    // 0x80066058: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006605C: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x80066060: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80066064: sb          $t1, -0x3D63($at)
    MEM_B(-0X3D63, ctx->r1) = ctx->r9;
    // 0x80066068: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8006606C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80066070: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80066074: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80066078: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8006607C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80066080: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80066084: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80066088: addu        $t4, $t2, $t7
    ctx->r12 = ADD32(ctx->r10, ctx->r15);
    // 0x8006608C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80066090: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80066094: lh          $t5, 0x4298($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4298);
    // 0x80066098: lbu         $t3, 0x25($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X25);
    // 0x8006609C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800660A0: sll         $t9, $t5, 3
    ctx->r25 = S32(ctx->r13 << 3);
    // 0x800660A4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800660A8: sb          $t3, -0x3D62($at)
    MEM_B(-0X3D62, ctx->r1) = ctx->r11;
L_800660AC:
    // 0x800660AC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800660B0: nop

    // 0x800660B4: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x800660B8: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800660BC: bne         $at, $zero, L_80065DA0
    if (ctx->r1 != 0) {
        // 0x800660C0: sw          $t8, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r24;
            goto L_80065DA0;
    }
    // 0x800660C0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x800660C4: b           L_800660CC
    // 0x800660C8: nop

        goto L_800660CC;
    // 0x800660C8: nop

L_800660CC:
    // 0x800660CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800660D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x800660D4: jr          $ra
    // 0x800660D8: nop

    return;
    // 0x800660D8: nop

;}
RECOMP_FUNC void func_800B78A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B78A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B78A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B78AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B78B0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B78B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B78B8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B78BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B78C0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B78C4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B78C8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B78CC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B78D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B78D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B78D8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B78DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B78E0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B78E4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B78E8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B78EC: addiu       $a1, $a1, 0x3A24
    ctx->r5 = ADD32(ctx->r5, 0X3A24);
    // 0x800B78F0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B78F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B78F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B78FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B7900: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B7904: jal         0x80027464
    // 0x800B7908: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B7908: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B790C: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x800B7910: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800B7914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B7918: beq         $t1, $at, L_800B7A0C
    if (ctx->r9 == ctx->r1) {
        // 0x800B791C: nop
    
            goto L_800B7A0C;
    }
    // 0x800B791C: nop

    // 0x800B7920: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800B7924: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B7928: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B792C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B7930: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B7934: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B7938: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B793C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B7940: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B7944: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B7948: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x800B794C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B7950: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800B7954: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B7958: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B795C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B7960: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7964: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B7968: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B796C: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x800B7970: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800B7974: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B7978: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B797C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B7980: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B7984: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B7988: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B798C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B7990: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B7994: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800B7998: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x800B799C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800B79A0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800B79A4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800B79A8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B79AC: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800B79B0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B79B4: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800B79B8: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x800B79BC: lwc1        $f20, 0xC($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800B79C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B79C4: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800B79C8: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x800B79CC: nop

    // 0x800B79D0: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800B79D4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800B79D8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B79DC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800B79E0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B79E4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B79E8: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x800B79EC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800B79F0: addiu       $t5, $t5, 0x7AA0
    ctx->r13 = ADD32(ctx->r13, 0X7AA0);
    // 0x800B79F4: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800B79F8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800B79FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B7A00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B7A04: jal         0x8001C0EC
    // 0x800B7A08: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B7A08: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_1:
L_800B7A0C:
    // 0x800B7A0C: b           L_800B7A14
    // 0x800B7A10: nop

        goto L_800B7A14;
    // 0x800B7A10: nop

L_800B7A14:
    // 0x800B7A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B7A18: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B7A1C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B7A20: jr          $ra
    // 0x800B7A24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B7A24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007CCE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CCE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007CCEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CCF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007CCF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007CCF8: jal         0x800794C4
    // 0x8007CCFC: nop

    func_800794C4(rdram, ctx);
        goto after_0;
    // 0x8007CCFC: nop

    after_0:
    // 0x8007CD00: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007CD04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007CD08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007CD0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007CD10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007CD14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007CD18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007CD1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007CD20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007CD24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007CD28: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007CD2C: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8007CD30: lw          $a3, 0x58($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X58);
    // 0x8007CD34: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007CD38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007CD3C: jal         0x8001BD44
    // 0x8007CD40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007CD40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x8007CD44: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD48: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x8007CD4C: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8007CD50: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD54: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x8007CD58: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
    // 0x8007CD5C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD60: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x8007CD64: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x8007CD68: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD6C: nop

    // 0x8007CD70: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
    // 0x8007CD74: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD78: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8007CD7C: sh          $t8, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r24;
    // 0x8007CD80: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD84: nop

    // 0x8007CD88: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
    // 0x8007CD8C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007CD90: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8007CD94: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CD98: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007CD9C: nop

    // 0x8007CDA0: swc1        $f4, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f4.u32l;
    // 0x8007CDA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007CDA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007CDAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007CDB0: jal         0x80019448
    // 0x8007CDB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x8007CDB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8007CDB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007CDBC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8007CDC0: addiu       $a3, $a3, 0x6540
    ctx->r7 = ADD32(ctx->r7, 0X6540);
    // 0x8007CDC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007CDC8: jal         0x8001ABF4
    // 0x8007CDCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x8007CDCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8007CDD0: b           L_8007CDD8
    // 0x8007CDD4: nop

        goto L_8007CDD8;
    // 0x8007CDD4: nop

L_8007CDD8:
    // 0x8007CDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CDDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007CDE0: jr          $ra
    // 0x8007CDE4: nop

    return;
    // 0x8007CDE4: nop

;}
RECOMP_FUNC void func_800F9294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9298: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F929C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F92A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F92A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F92A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F92AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F92B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F92B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F92B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F92BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F92C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F92C4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F92C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F92CC: nop

    // 0x800F92D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F92D4: nop

    // 0x800F92D8: bne         $t1, $zero, L_800F9364
    if (ctx->r9 != 0) {
        // 0x800F92DC: nop
    
            goto L_800F9364;
    }
    // 0x800F92DC: nop

    // 0x800F92E0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F92E4: nop

    // 0x800F92E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F92EC: nop

    // 0x800F92F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F92F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F92F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F92FC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F9300: nop

    // 0x800F9304: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800F9308: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F930C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F9310: nop

    // 0x800F9314: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x800F9318: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F931C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F9320: nop

    // 0x800F9324: swc1        $f8, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f8.u32l;
    // 0x800F9328: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800F932C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F9330: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F9334: nop

    // 0x800F9338: swc1        $f10, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f10.u32l;
    // 0x800F933C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F9340: nop

    // 0x800F9344: sh          $zero, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = 0;
    // 0x800F9348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F934C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9354: addiu       $a2, $zero, 0x2D
    ctx->r6 = ADD32(0, 0X2D);
    // 0x800F9358: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F935C: jal         0x800175F0
    // 0x800F9360: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800F9360: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800F9364:
    // 0x800F9364: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9368: nop

    // 0x800F936C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800F9370: nop

    // 0x800F9374: bne         $t1, $zero, L_800F93D0
    if (ctx->r9 != 0) {
        // 0x800F9378: nop
    
            goto L_800F93D0;
    }
    // 0x800F9378: nop

    // 0x800F937C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9380: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F9384: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F9388: lwc1        $f16, 0x48($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X48);
    // 0x800F938C: nop

    // 0x800F9390: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800F9394: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
    // 0x800F9398: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F939C: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x800F93A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F93A4: lwc1        $f6, 0x48($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X48);
    // 0x800F93A8: nop

    // 0x800F93AC: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800F93B0: nop

    // 0x800F93B4: bc1f        L_800F93C8
    if (!c1cs) {
        // 0x800F93B8: nop
    
            goto L_800F93C8;
    }
    // 0x800F93B8: nop

    // 0x800F93BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F93C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F93C4: sh          $t2, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r10;
L_800F93C8:
    // 0x800F93C8: b           L_800F9438
    // 0x800F93CC: nop

        goto L_800F9438;
    // 0x800F93CC: nop

L_800F93D0:
    // 0x800F93D0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F93D4: nop

    // 0x800F93D8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800F93DC: nop

    // 0x800F93E0: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x800F93E4: beq         $at, $zero, L_800F941C
    if (ctx->r1 == 0) {
        // 0x800F93E8: nop
    
            goto L_800F941C;
    }
    // 0x800F93E8: nop

    // 0x800F93EC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800F93F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F93F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F93F8: nop

    // 0x800F93FC: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x800F9400: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F9404: nop

    // 0x800F9408: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800F940C: nop

    // 0x800F9410: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800F9414: b           L_800F9438
    // 0x800F9418: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
        goto L_800F9438;
    // 0x800F9418: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_800F941C:
    // 0x800F941C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9420: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F9424: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F9428: lwc1        $f16, 0x48($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X48);
    // 0x800F942C: nop

    // 0x800F9430: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800F9434: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
L_800F9438:
    // 0x800F9438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F943C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9440: jal         0x80029C40
    // 0x800F9444: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800F9444: nop

    after_1:
    // 0x800F9448: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F944C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9450: jal         0x80029D04
    // 0x800F9454: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800F9454: nop

    after_2:
    // 0x800F9458: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F945C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F9460: lwc1        $f6, 0x48($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X48);
    // 0x800F9464: nop

    // 0x800F9468: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x800F946C: nop

    // 0x800F9470: bc1f        L_800F9490
    if (!c1cs) {
        // 0x800F9474: nop
    
            goto L_800F9490;
    }
    // 0x800F9474: nop

    // 0x800F9478: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F947C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800F9480: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800F9484: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F9488: nop

    // 0x800F948C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F9490:
    // 0x800F9490: b           L_800F9498
    // 0x800F9494: nop

        goto L_800F9498;
    // 0x800F9494: nop

L_800F9498:
    // 0x800F9498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F949C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F94A0: jr          $ra
    // 0x800F94A4: nop

    return;
    // 0x800F94A4: nop

;}
RECOMP_FUNC void func_800B55B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B55B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B55B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B55B8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800B55BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800B55C0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B55C4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B55C8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B55CC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B55D0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B55D4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B55D8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B55DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B55E0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B55E4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B55E8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B55EC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B55F0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B55F4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B55F8: addiu       $a1, $a1, 0x3A0C
    ctx->r5 = ADD32(ctx->r5, 0X3A0C);
    // 0x800B55FC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B5600: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B5604: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B5608: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B560C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B5610: jal         0x80027464
    // 0x800B5614: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B5614: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B5618: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x800B561C: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x800B5620: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B5624: beq         $t1, $at, L_800B575C
    if (ctx->r9 == ctx->r1) {
        // 0x800B5628: nop
    
            goto L_800B575C;
    }
    // 0x800B5628: nop

    // 0x800B562C: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x800B5630: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B5634: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B5638: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B563C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B5640: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B5644: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B5648: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B564C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B5650: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B5654: lb          $t5, 0x2F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X2F);
    // 0x800B5658: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B565C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800B5660: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B5664: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B5668: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B566C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B5670: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B5674: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B5678: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x800B567C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800B5680: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B5684: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B5688: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B568C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B5690: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B5694: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B5698: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B569C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800B56A0: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800B56A4: lb          $t6, 0x2F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2F);
    // 0x800B56A8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800B56AC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x800B56B0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800B56B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B56B8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x800B56BC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800B56C0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800B56C4: addu        $t3, $t0, $t1
    ctx->r11 = ADD32(ctx->r8, ctx->r9);
    // 0x800B56C8: lwc1        $f20, 0xC($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0XC);
    // 0x800B56CC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B56D0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800B56D4: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x800B56D8: nop

    // 0x800B56DC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800B56E0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800B56E4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B56E8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800B56EC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B56F0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B56F4: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
    // 0x800B56F8: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x800B56FC: lw          $t5, 0x5100($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5100);
    // 0x800B5700: nop

    // 0x800B5704: lh          $t7, 0xA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA);
    // 0x800B5708: nop

    // 0x800B570C: beq         $t7, $zero, L_800B573C
    if (ctx->r15 == 0) {
        // 0x800B5710: nop
    
            goto L_800B573C;
    }
    // 0x800B5710: nop

    // 0x800B5714: lb          $t9, 0x2F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2F);
    // 0x800B5718: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B571C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800B5720: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800B5724: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800B5728: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800B572C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800B5730: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800B5734: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B5738: sh          $t8, 0x4200($at)
    MEM_H(0X4200, ctx->r1) = ctx->r24;
L_800B573C:
    // 0x800B573C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800B5740: addiu       $t0, $t0, 0x7AA0
    ctx->r8 = ADD32(ctx->r8, 0X7AA0);
    // 0x800B5744: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x800B5748: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800B574C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B5750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B5754: jal         0x8001C0EC
    // 0x800B5758: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B5758: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_1:
L_800B575C:
    // 0x800B575C: b           L_800B5764
    // 0x800B5760: nop

        goto L_800B5764;
    // 0x800B5760: nop

L_800B5764:
    // 0x800B5764: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B5768: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800B576C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800B5770: jr          $ra
    // 0x800B5774: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800B5774: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8009D75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D75C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009D760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D764: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8009D768: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8009D76C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8009D770: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8009D774: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009D778: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8009D77C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009D780: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8009D784: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8009D788: addiu       $a1, $a1, 0x35D4
    ctx->r5 = ADD32(ctx->r5, 0X35D4);
    // 0x8009D78C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009D790: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009D794: jal         0x80027464
    // 0x8009D798: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009D798: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8009D79C: b           L_8009D7A4
    // 0x8009D7A0: nop

        goto L_8009D7A4;
    // 0x8009D7A0: nop

L_8009D7A4:
    // 0x8009D7A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D7A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009D7AC: jr          $ra
    // 0x8009D7B0: nop

    return;
    // 0x8009D7B0: nop

;}
RECOMP_FUNC void func_80092074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092074: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092078: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009207C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092080: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092084: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092088: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009208C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092090: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092094: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092098: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009209C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800920A0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800920A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800920A8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800920AC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800920B0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800920B4: addiu       $a1, $a1, 0x1660
    ctx->r5 = ADD32(ctx->r5, 0X1660);
    // 0x800920B8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800920BC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800920C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800920C4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800920C8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800920CC: jal         0x80027464
    // 0x800920D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800920D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800920D4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800920D8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800920DC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800920E0: addiu       $a3, $a3, 0x2F8C
    ctx->r7 = ADD32(ctx->r7, 0X2F8C);
    // 0x800920E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800920E8: jal         0x8001ABF4
    // 0x800920EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800920EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800920F0: b           L_800920F8
    // 0x800920F4: nop

        goto L_800920F8;
    // 0x800920F4: nop

L_800920F8:
    // 0x800920F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800920FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092100: jr          $ra
    // 0x80092104: nop

    return;
    // 0x80092104: nop

;}
RECOMP_FUNC void func_800E594C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E594C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E5950: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E5954: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800E5958: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E595C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5960: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5964: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5968: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E596C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5970: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5974: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5978: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E597C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5980: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E5984: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E5988: nop

    // 0x800E598C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E5990: nop

    // 0x800E5994: bne         $t1, $zero, L_800E59EC
    if (ctx->r9 != 0) {
        // 0x800E5998: nop
    
            goto L_800E59EC;
    }
    // 0x800E5998: nop

    // 0x800E599C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E59A0: nop

    // 0x800E59A4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E59A8: nop

    // 0x800E59AC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E59B0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E59B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E59B8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800E59BC: addiu       $t5, $t5, -0x6AFC
    ctx->r13 = ADD32(ctx->r13, -0X6AFC);
    // 0x800E59C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E59C4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800E59C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E59CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E59D0: jal         0x8001C0EC
    // 0x800E59D4: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E59D4: addiu       $a3, $zero, 0x82
    ctx->r7 = ADD32(0, 0X82);
    after_0:
    // 0x800E59D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800E59DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E59E0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E59E4: nop

    // 0x800E59E8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
L_800E59EC:
    // 0x800E59EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E59F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E59F4: jal         0x80028FA0
    // 0x800E59F8: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800E59F8: nop

    after_1:
    // 0x800E59FC: beq         $v0, $zero, L_800E5A14
    if (ctx->r2 == 0) {
        // 0x800E5A00: nop
    
            goto L_800E5A14;
    }
    // 0x800E5A00: nop

    // 0x800E5A04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5A08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5A0C: jal         0x80029B60
    // 0x800E5A10: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800E5A10: nop

    after_2:
L_800E5A14:
    // 0x800E5A14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5A18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5A1C: jal         0x80029C40
    // 0x800E5A20: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800E5A20: nop

    after_3:
    // 0x800E5A24: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E5A28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E5A2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5A30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5A38: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E5A3C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E5A40: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800E5A44: jal         0x80029018
    // 0x800E5A48: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800E5A48: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800E5A4C: beq         $v0, $zero, L_800E5A70
    if (ctx->r2 == 0) {
        // 0x800E5A50: nop
    
            goto L_800E5A70;
    }
    // 0x800E5A50: nop

    // 0x800E5A54: jal         0x800297DC
    // 0x800E5A58: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800E5A58: nop

    after_5:
    // 0x800E5A5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5A60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5A64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800E5A68: jal         0x80029824
    // 0x800E5A6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800E5A6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800E5A70:
    // 0x800E5A70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5A74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5A78: jal         0x8001B4AC
    // 0x800E5A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x800E5A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800E5A80: beq         $v0, $zero, L_800E5BC0
    if (ctx->r2 == 0) {
        // 0x800E5A84: nop
    
            goto L_800E5BC0;
    }
    // 0x800E5A84: nop

    // 0x800E5A88: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800E5A8C: nop

    // 0x800E5A90: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800E5A94: nop

    // 0x800E5A98: bne         $t8, $zero, L_800E5BA8
    if (ctx->r24 != 0) {
        // 0x800E5A9C: nop
    
            goto L_800E5BA8;
    }
    // 0x800E5A9C: nop

    // 0x800E5AA0: jal         0x80014E80
    // 0x800E5AA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_8;
    // 0x800E5AA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x800E5AA8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800E5AAC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800E5AB0: nop

    // 0x800E5AB4: beq         $s0, $zero, L_800E5ADC
    if (ctx->r16 == 0) {
        // 0x800E5AB8: nop
    
            goto L_800E5ADC;
    }
    // 0x800E5AB8: nop

    // 0x800E5ABC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E5AC0: beq         $s0, $at, L_800E5B08
    if (ctx->r16 == ctx->r1) {
        // 0x800E5AC4: nop
    
            goto L_800E5B08;
    }
    // 0x800E5AC4: nop

    // 0x800E5AC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800E5ACC: beq         $s0, $at, L_800E5B38
    if (ctx->r16 == ctx->r1) {
        // 0x800E5AD0: nop
    
            goto L_800E5B38;
    }
    // 0x800E5AD0: nop

    // 0x800E5AD4: b           L_800E5B68
    // 0x800E5AD8: nop

        goto L_800E5B68;
    // 0x800E5AD8: nop

L_800E5ADC:
    // 0x800E5ADC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E5AE0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E5AE4: nop

    // 0x800E5AE8: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800E5AEC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E5AF0: nop

    // 0x800E5AF4: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800E5AF8: nop

    // 0x800E5AFC: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
    // 0x800E5B00: b           L_800E5B98
    // 0x800E5B04: nop

        goto L_800E5B98;
    // 0x800E5B04: nop

L_800E5B08:
    // 0x800E5B08: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800E5B0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800E5B10: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B14: nop

    // 0x800E5B18: swc1        $f18, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f18.u32l;
    // 0x800E5B1C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B20: nop

    // 0x800E5B24: lwc1        $f4, 0x1C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800E5B28: nop

    // 0x800E5B2C: swc1        $f4, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f4.u32l;
    // 0x800E5B30: b           L_800E5B98
    // 0x800E5B34: nop

        goto L_800E5B98;
    // 0x800E5B34: nop

L_800E5B38:
    // 0x800E5B38: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800E5B3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800E5B40: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B44: nop

    // 0x800E5B48: swc1        $f6, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f6.u32l;
    // 0x800E5B4C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B50: nop

    // 0x800E5B54: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800E5B58: nop

    // 0x800E5B5C: swc1        $f8, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f8.u32l;
    // 0x800E5B60: b           L_800E5B98
    // 0x800E5B64: nop

        goto L_800E5B98;
    // 0x800E5B64: nop

L_800E5B68:
    // 0x800E5B68: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800E5B6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800E5B70: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B74: nop

    // 0x800E5B78: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
    // 0x800E5B7C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B80: nop

    // 0x800E5B84: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800E5B88: nop

    // 0x800E5B8C: swc1        $f16, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f16.u32l;
    // 0x800E5B90: b           L_800E5B98
    // 0x800E5B94: nop

        goto L_800E5B98;
    // 0x800E5B94: nop

L_800E5B98:
    // 0x800E5B98: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E5B9C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800E5BA0: b           L_800E5BC0
    // 0x800E5BA4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
        goto L_800E5BC0;
    // 0x800E5BA4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
L_800E5BA8:
    // 0x800E5BA8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E5BAC: nop

    // 0x800E5BB0: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800E5BB4: nop

    // 0x800E5BB8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800E5BBC: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_800E5BC0:
    // 0x800E5BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5BC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5BC8: jal         0x8002A1FC
    // 0x800E5BCC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800E5BCC: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_9:
    // 0x800E5BD0: beq         $v0, $zero, L_800E5BFC
    if (ctx->r2 == 0) {
        // 0x800E5BD4: nop
    
            goto L_800E5BFC;
    }
    // 0x800E5BD4: nop

    // 0x800E5BD8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E5BDC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800E5BE0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E5BE4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E5BE8: nop

    // 0x800E5BEC: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800E5BF0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E5BF4: nop

    // 0x800E5BF8: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800E5BFC:
    // 0x800E5BFC: b           L_800E5C04
    // 0x800E5C00: nop

        goto L_800E5C04;
    // 0x800E5C00: nop

L_800E5C04:
    // 0x800E5C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E5C08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800E5C0C: jr          $ra
    // 0x800E5C10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E5C10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800BCC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCC10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BCC14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCC18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BCC1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BCC20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BCC24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BCC28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BCC2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BCC30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BCC34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BCC38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BCC3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BCC40: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BCC44: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCC48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BCC4C: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800BCC50: nop

    // 0x800BCC54: beq         $t1, $at, L_800BCC94
    if (ctx->r9 == ctx->r1) {
        // 0x800BCC58: nop
    
            goto L_800BCC94;
    }
    // 0x800BCC58: nop

    // 0x800BCC5C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800BCC60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BCC64: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x800BCC68: nop

    // 0x800BCC6C: bne         $t3, $at, L_800BCC94
    if (ctx->r11 != ctx->r1) {
        // 0x800BCC70: nop
    
            goto L_800BCC94;
    }
    // 0x800BCC70: nop

    // 0x800BCC74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BCC78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BCC7C: jal         0x80029C40
    // 0x800BCC80: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BCC80: nop

    after_0:
    // 0x800BCC84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BCC88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BCC8C: jal         0x80029D04
    // 0x800BCC90: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BCC90: nop

    after_1:
L_800BCC94:
    // 0x800BCC94: b           L_800BCC9C
    // 0x800BCC98: nop

        goto L_800BCC9C;
    // 0x800BCC98: nop

L_800BCC9C:
    // 0x800BCC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCCA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BCCA4: jr          $ra
    // 0x800BCCA8: nop

    return;
    // 0x800BCCA8: nop

;}
RECOMP_FUNC void func_800A0034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A0034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A0038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A003C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A0040: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800A0044: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A0048: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A004C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A0050: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A0054: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0058: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A005C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A0060: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A0064: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A0068: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A006C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A0070: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0074: nop

    // 0x800A0078: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A007C: nop

    // 0x800A0080: bne         $t1, $zero, L_800A0110
    if (ctx->r9 != 0) {
        // 0x800A0084: nop
    
            goto L_800A0110;
    }
    // 0x800A0084: nop

    // 0x800A0088: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A008C: nop

    // 0x800A0090: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A0094: nop

    // 0x800A0098: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800A009C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800A00A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A00A4: nop

    // 0x800A00A8: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800A00AC: nop

    // 0x800A00B0: sh          $t6, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r14;
    // 0x800A00B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A00B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A00BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A00C0: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A00C4: jal         0x80015538
    // 0x800A00C8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A00C8: nop

    after_0:
    // 0x800A00CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A00D0: nop

    // 0x800A00D4: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800A00D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A00DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A00E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A00E4: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x800A00E8: jal         0x80015538
    // 0x800A00EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800A00EC: nop

    after_1:
    // 0x800A00F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A00F4: nop

    // 0x800A00F8: swc1        $f0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f0.u32l;
    // 0x800A00FC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800A0100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A0104: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A0108: nop

    // 0x800A010C: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
L_800A0110:
    // 0x800A0110: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A0114: nop

    // 0x800A0118: lh          $t4, 0xAC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAC);
    // 0x800A011C: nop

    // 0x800A0120: bne         $t4, $zero, L_800A0158
    if (ctx->r12 != 0) {
        // 0x800A0124: nop
    
            goto L_800A0158;
    }
    // 0x800A0124: nop

    // 0x800A0128: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A012C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0130: nop

    // 0x800A0134: swc1        $f6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f6.u32l;
    // 0x800A0138: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A013C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0140: jal         0x80029D8C
    // 0x800A0144: nop

    func_80029D8C(rdram, ctx);
        goto after_2;
    // 0x800A0144: nop

    after_2:
    // 0x800A0148: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A014C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A0150: b           L_800A01E4
    // 0x800A0154: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
        goto L_800A01E4;
    // 0x800A0154: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
L_800A0158:
    // 0x800A0158: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A015C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A0160: lh          $t7, 0xAC($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAC);
    // 0x800A0164: nop

    // 0x800A0168: bne         $t7, $at, L_800A01B4
    if (ctx->r15 != ctx->r1) {
        // 0x800A016C: nop
    
            goto L_800A01B4;
    }
    // 0x800A016C: nop

    // 0x800A0170: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A0174: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A0178: nop

    // 0x800A017C: swc1        $f10, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f10.u32l;
    // 0x800A0180: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A0184: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A0188: jal         0x80029D8C
    // 0x800A018C: nop

    func_80029D8C(rdram, ctx);
        goto after_3;
    // 0x800A018C: nop

    after_3:
    // 0x800A0190: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A0194: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A0198: nop

    // 0x800A019C: swc1        $f16, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f16.u32l;
    // 0x800A01A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A01A4: nop

    // 0x800A01A8: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800A01AC: b           L_800A01E4
    // 0x800A01B0: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
        goto L_800A01E4;
    // 0x800A01B0: swc1        $f18, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f18.u32l;
L_800A01B4:
    // 0x800A01B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A01B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A01BC: nop

    // 0x800A01C0: swc1        $f4, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f4.u32l;
    // 0x800A01C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A01C8: nop

    // 0x800A01CC: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800A01D0: nop

    // 0x800A01D4: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800A01D8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A01DC: nop

    // 0x800A01E0: swc1        $f20, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f20.u32l;
L_800A01E4:
    // 0x800A01E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A01E8: nop

    // 0x800A01EC: lh          $t6, 0xAC($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XAC);
    // 0x800A01F0: nop

    // 0x800A01F4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800A01F8: beq         $at, $zero, L_800A027C
    if (ctx->r1 == 0) {
        // 0x800A01FC: nop
    
            goto L_800A027C;
    }
    // 0x800A01FC: nop

    // 0x800A0200: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A0204: nop

    // 0x800A0208: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x800A020C: lwc1        $f10, 0x44($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X44);
    // 0x800A0210: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x800A0214: nop

    // 0x800A0218: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A021C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A0220: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800A0224: nop

    // 0x800A0228: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800A022C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A0230: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A0234: nop

    // 0x800A0238: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800A023C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x800A0240: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800A0244: sh          $t9, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r25;
    // 0x800A0248: nop

    // 0x800A024C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A0250: nop

    // 0x800A0254: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800A0258: nop

    // 0x800A025C: bgtz        $t1, L_800A027C
    if (SIGNED(ctx->r9) > 0) {
        // 0x800A0260: nop
    
            goto L_800A027C;
    }
    // 0x800A0260: nop

    // 0x800A0264: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A0268: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800A026C: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800A0270: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A0274: nop

    // 0x800A0278: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800A027C:
    // 0x800A027C: b           L_800A0284
    // 0x800A0280: nop

        goto L_800A0284;
    // 0x800A0280: nop

L_800A0284:
    // 0x800A0284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0288: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800A028C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800A0290: jr          $ra
    // 0x800A0294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A0294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800BFAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFAF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BFAF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BFAF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BFAFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BFB00: jal         0x8002B0E4
    // 0x800BFB04: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800BFB04: nop

    after_0:
    // 0x800BFB08: b           L_800BFB10
    // 0x800BFB0C: nop

        goto L_800BFB10;
    // 0x800BFB0C: nop

L_800BFB10:
    // 0x800BFB10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BFB14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BFB18: jr          $ra
    // 0x800BFB1C: nop

    return;
    // 0x800BFB1C: nop

;}
RECOMP_FUNC void stub_unknown_800D45C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D463C: jr          $ra
    // 0x800D4640: nop

    return;
    // 0x800D4640: nop

    // 0x800D4644: jr          $ra
    // 0x800D4648: nop

    return;
    // 0x800D4648: nop

;}
RECOMP_FUNC void func_8007F964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F964: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007F968: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8007F96C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F970: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007F974: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F978: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007F97C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F980: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007F984: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8007F988: addiu       $t6, $zero, 0x2C5
    ctx->r14 = ADD32(0, 0X2C5);
    // 0x8007F98C: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x8007F990: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007F994: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8007F998: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F99C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007F9A0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F9A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007F9A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F9AC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007F9B0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007F9B4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007F9B8: sh          $t9, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r25;
    // 0x8007F9BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007F9C0: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8007F9C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F9C8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8007F9CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007F9D0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007F9D4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007F9D8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8007F9DC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007F9E0: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x8007F9E4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007F9E8: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8007F9EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F9F0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8007F9F4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8007F9F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007F9FC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8007FA00: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FA04: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007FA08: addiu       $t4, $zero, 0x25
    ctx->r12 = ADD32(0, 0X25);
    // 0x8007FA0C: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8007FA10: jr          $ra
    // 0x8007FA14: nop

    return;
    // 0x8007FA14: nop

    // 0x8007FA18: jr          $ra
    // 0x8007FA1C: nop

    return;
    // 0x8007FA1C: nop

;}
RECOMP_FUNC void func_800912AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800912AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800912B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800912B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800912B8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800912BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800912C0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800912C4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800912C8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800912CC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800912D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800912D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800912D8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800912DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800912E0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800912E4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800912E8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800912EC: addiu       $a1, $a1, 0x1534
    ctx->r5 = ADD32(ctx->r5, 0X1534);
    // 0x800912F0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800912F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800912F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800912FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091300: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091304: jal         0x80027464
    // 0x80091308: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091308: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009130C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091310: b           L_80091318
    // 0x80091314: nop

        goto L_80091318;
    // 0x80091314: nop

L_80091318:
    // 0x80091318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009131C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091320: jr          $ra
    // 0x80091324: nop

    return;
    // 0x80091324: nop

;}
RECOMP_FUNC void func_800DA3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA3B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DA3B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA3B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA3BC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA3C0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA3C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA3C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA3CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA3D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA3D4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA3D8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DA3DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DA3E0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DA3E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DA3E8: nop

    // 0x800DA3EC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DA3F0: nop

    // 0x800DA3F4: bne         $t1, $zero, L_800DA434
    if (ctx->r9 != 0) {
        // 0x800DA3F8: nop
    
            goto L_800DA434;
    }
    // 0x800DA3F8: nop

    // 0x800DA3FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800DA400: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DA404: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800DA408: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DA40C: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800DA410: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800DA414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DA418: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DA41C: addiu       $a3, $a3, -0x7374
    ctx->r7 = ADD32(ctx->r7, -0X7374);
    // 0x800DA420: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DA424: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800DA428: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DA42C: jal         0x8001ABF4
    // 0x800DA430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800DA430: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800DA434:
    // 0x800DA434: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800DA438: nop

    // 0x800DA43C: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800DA440: nop

    // 0x800DA444: bne         $t7, $zero, L_800DA4A8
    if (ctx->r15 != 0) {
        // 0x800DA448: nop
    
            goto L_800DA4A8;
    }
    // 0x800DA448: nop

    // 0x800DA44C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DA450: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DA454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DA458: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800DA45C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800DA460: jal         0x800175F0
    // 0x800DA464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800DA464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x800DA468: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DA46C: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x800DA470: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800DA474: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800DA478: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x800DA47C: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800DA480: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DA484: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x800DA488: jal         0x8007EDF4
    // 0x800DA48C: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    func_8007EDF4(rdram, ctx);
        goto after_2;
    // 0x800DA48C: add.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f8.fl;
    after_2:
    // 0x800DA490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DA494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DA498: jal         0x8002B114
    // 0x800DA49C: nop

    func_8002B114(rdram, ctx);
        goto after_3;
    // 0x800DA49C: nop

    after_3:
    // 0x800DA4A0: b           L_800DA4C0
    // 0x800DA4A4: nop

        goto L_800DA4C0;
    // 0x800DA4A4: nop

L_800DA4A8:
    // 0x800DA4A8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DA4AC: nop

    // 0x800DA4B0: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800DA4B4: nop

    // 0x800DA4B8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DA4BC: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
L_800DA4C0:
    // 0x800DA4C0: b           L_800DA4C8
    // 0x800DA4C4: nop

        goto L_800DA4C8;
    // 0x800DA4C4: nop

L_800DA4C8:
    // 0x800DA4C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA4CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DA4D0: jr          $ra
    // 0x800DA4D4: nop

    return;
    // 0x800DA4D4: nop

;}
RECOMP_FUNC void func_8009CB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CB58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009CB5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009CB60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009CB64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009CB68: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009CB6C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8009CB70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009CB74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CB78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009CB7C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009CB80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009CB84: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8009CB88: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8009CB8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009CB90: beq         $s0, $at, L_8009CBAC
    if (ctx->r16 == ctx->r1) {
        // 0x8009CB94: nop
    
            goto L_8009CBAC;
    }
    // 0x8009CB94: nop

    // 0x8009CB98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009CB9C: beq         $s0, $at, L_8009CBBC
    if (ctx->r16 == ctx->r1) {
        // 0x8009CBA0: nop
    
            goto L_8009CBBC;
    }
    // 0x8009CBA0: nop

    // 0x8009CBA4: b           L_8009CBCC
    // 0x8009CBA8: nop

        goto L_8009CBCC;
    // 0x8009CBA8: nop

L_8009CBAC:
    // 0x8009CBAC: jal         0x8009C9F8
    // 0x8009CBB0: nop

    func_8009C9F8(rdram, ctx);
        goto after_0;
    // 0x8009CBB0: nop

    after_0:
    // 0x8009CBB4: b           L_8009CBCC
    // 0x8009CBB8: nop

        goto L_8009CBCC;
    // 0x8009CBB8: nop

L_8009CBBC:
    // 0x8009CBBC: jal         0x8009CA90
    // 0x8009CBC0: nop

    func_8009CA90(rdram, ctx);
        goto after_1;
    // 0x8009CBC0: nop

    after_1:
    // 0x8009CBC4: b           L_8009CBCC
    // 0x8009CBC8: nop

        goto L_8009CBCC;
    // 0x8009CBC8: nop

L_8009CBCC:
    // 0x8009CBCC: b           L_8009CBD4
    // 0x8009CBD0: nop

        goto L_8009CBD4;
    // 0x8009CBD0: nop

L_8009CBD4:
    // 0x8009CBD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009CBD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009CBDC: jr          $ra
    // 0x8009CBE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009CBE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A3498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3498: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A349C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A34A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A34A4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A34A8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A34AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A34B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A34B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A34B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A34BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A34C0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A34C4: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A34C8: nop

    // 0x800A34CC: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x800A34D0: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x800A34D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A34D8: bne         $t9, $at, L_800A34F8
    if (ctx->r25 != ctx->r1) {
        // 0x800A34DC: nop
    
            goto L_800A34F8;
    }
    // 0x800A34DC: nop

    // 0x800A34E0: b           L_800A34E8
    // 0x800A34E4: nop

        goto L_800A34E8;
    // 0x800A34E4: nop

L_800A34E8:
    // 0x800A34E8: jal         0x800A3520
    // 0x800A34EC: nop

    func_800A3520(rdram, ctx);
        goto after_0;
    // 0x800A34EC: nop

    after_0:
    // 0x800A34F0: b           L_800A3508
    // 0x800A34F4: nop

        goto L_800A3508;
    // 0x800A34F4: nop

L_800A34F8:
    // 0x800A34F8: jal         0x800A39D0
    // 0x800A34FC: nop

    func_800A39D0(rdram, ctx);
        goto after_1;
    // 0x800A34FC: nop

    after_1:
    // 0x800A3500: b           L_800A3508
    // 0x800A3504: nop

        goto L_800A3508;
    // 0x800A3504: nop

L_800A3508:
    // 0x800A3508: b           L_800A3510
    // 0x800A350C: nop

        goto L_800A3510;
    // 0x800A350C: nop

L_800A3510:
    // 0x800A3510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A3514: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A3518: jr          $ra
    // 0x800A351C: nop

    return;
    // 0x800A351C: nop

;}
RECOMP_FUNC void func_800C11F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C11F4: jr          $ra
    // 0x800C11F8: nop

    return;
    // 0x800C11F8: nop

    // 0x800C11FC: jr          $ra
    // 0x800C1200: nop

    return;
    // 0x800C1200: nop

;}
RECOMP_FUNC void func_800BA9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA9C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA9CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA9D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BA9D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BA9D8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BA9DC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BA9E0: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x800BA9E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BA9E8: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800BA9EC: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800BA9F0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800BA9F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800BA9F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BA9FC: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BAA00: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800BAA04: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BAA08: addiu       $a1, $a1, 0x3AE4
    ctx->r5 = ADD32(ctx->r5, 0X3AE4);
    // 0x800BAA0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BAA10: jal         0x80027464
    // 0x800BAA14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BAA14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800BAA18: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800BAA1C: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x800BAA20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BAA24: beq         $t7, $at, L_800BAB20
    if (ctx->r15 == ctx->r1) {
        // 0x800BAA28: nop
    
            goto L_800BAB20;
    }
    // 0x800BAA28: nop

    // 0x800BAA2C: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800BAA30: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x800BAA34: jal         0x80026F10
    // 0x800BAA38: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800BAA38: nop

    after_1:
    // 0x800BAA3C: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800BAA40: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800BAA44: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BAA48: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BAA4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BAA50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BAA54: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BAA58: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800BAA5C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800BAA60: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800BAA64: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800BAA68: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BAA6C: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800BAA70: nop

    // 0x800BAA74: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x800BAA78: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800BAA7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BAA80: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800BAA84: nop

    // 0x800BAA88: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x800BAA8C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BAA90: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BAA94: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BAA98: nop

    // 0x800BAA9C: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x800BAAA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BAAA4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BAAA8: nop

    // 0x800BAAAC: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x800BAAB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BAAB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BAAB8: nop

    // 0x800BAABC: swc1        $f10, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f10.u32l;
    // 0x800BAAC0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BAAC4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800BAAC8: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800BAACC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BAAD0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BAAD4: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800BAAD8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BAADC: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x800BAAE0: sh          $t4, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r12;
    // 0x800BAAE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BAAE8: nop

    // 0x800BAAEC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800BAAF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BAAF4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800BAAF8: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x800BAAFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BAB00: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800BAB04: sh          $t9, 0x100($t0)
    MEM_H(0X100, ctx->r8) = ctx->r25;
    // 0x800BAB08: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BAB0C: jal         0x80029C40
    // 0x800BAB10: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BAB10: nop

    after_2:
    // 0x800BAB14: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BAB18: jal         0x80029D04
    // 0x800BAB1C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800BAB1C: nop

    after_3:
L_800BAB20:
    // 0x800BAB20: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x800BAB24: b           L_800BAB34
    // 0x800BAB28: nop

        goto L_800BAB34;
    // 0x800BAB28: nop

    // 0x800BAB2C: b           L_800BAB34
    // 0x800BAB30: nop

        goto L_800BAB34;
    // 0x800BAB30: nop

L_800BAB34:
    // 0x800BAB34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BAB38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BAB3C: jr          $ra
    // 0x800BAB40: nop

    return;
    // 0x800BAB40: nop

;}
RECOMP_FUNC void func_8009FD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009FD34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009FD38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009FD3C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009FD40: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8009FD44: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009FD48: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009FD4C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009FD50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009FD54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009FD58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009FD5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009FD60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009FD64: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009FD68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009FD6C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8009FD70: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FD74: nop

    // 0x8009FD78: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009FD7C: nop

    // 0x8009FD80: bne         $t1, $zero, L_8009FDF4
    if (ctx->r9 != 0) {
        // 0x8009FD84: nop
    
            goto L_8009FDF4;
    }
    // 0x8009FD84: nop

    // 0x8009FD88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FD8C: nop

    // 0x8009FD90: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009FD94: nop

    // 0x8009FD98: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009FD9C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009FDA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009FDA4: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8009FDA8: addiu       $t5, $t5, 0x6EE4
    ctx->r13 = ADD32(ctx->r13, 0X6EE4);
    // 0x8009FDAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009FDB0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8009FDB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009FDB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009FDBC: jal         0x8001C0EC
    // 0x8009FDC0: addiu       $a3, $zero, 0x1B1
    ctx->r7 = ADD32(0, 0X1B1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009FDC0: addiu       $a3, $zero, 0x1B1
    ctx->r7 = ADD32(0, 0X1B1);
    after_0:
    // 0x8009FDC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009FDC8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FDCC: nop

    // 0x8009FDD0: swc1        $f4, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f4.u32l;
    // 0x8009FDD4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FDD8: nop

    // 0x8009FDDC: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8009FDE0: nop

    // 0x8009FDE4: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x8009FDE8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8009FDEC: nop

    // 0x8009FDF0: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
L_8009FDF4:
    // 0x8009FDF4: b           L_8009FDFC
    // 0x8009FDF8: nop

        goto L_8009FDFC;
    // 0x8009FDF8: nop

L_8009FDFC:
    // 0x8009FDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009FE00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8009FE04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8009FE08: jr          $ra
    // 0x8009FE0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8009FE0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80091AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091AA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091AA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091AA8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091AAC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091AB0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091AB4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091AB8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091ABC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091AC0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091AC4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091AC8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091ACC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091AD0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091AD4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091AD8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091ADC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091AE0: addiu       $a1, $a1, 0x15E8
    ctx->r5 = ADD32(ctx->r5, 0X15E8);
    // 0x80091AE4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091AE8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091AEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091AF0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091AF4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091AF8: jal         0x80027464
    // 0x80091AFC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091AFC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091B00: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091B04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091B08: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091B0C: addiu       $a3, $a3, 0x2A64
    ctx->r7 = ADD32(ctx->r7, 0X2A64);
    // 0x80091B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091B14: jal         0x8001ABF4
    // 0x80091B18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091B18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80091B1C: b           L_80091B24
    // 0x80091B20: nop

        goto L_80091B24;
    // 0x80091B20: nop

L_80091B24:
    // 0x80091B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091B2C: jr          $ra
    // 0x80091B30: nop

    return;
    // 0x80091B30: nop

;}
RECOMP_FUNC void func_800F9088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9088: jr          $ra
    // 0x800F908C: nop

    return;
    // 0x800F908C: nop

    // 0x800F9090: jr          $ra
    // 0x800F9094: nop

    return;
    // 0x800F9094: nop

;}
RECOMP_FUNC void func_800F18D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F18D0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F18D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F18D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F18DC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F18E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F18E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F18E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F18EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F18F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F18F4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F18F8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F18FC: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F1900: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F1904: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F1908: nop

    // 0x800F190C: bne         $t0, $zero, L_800F196C
    if (ctx->r8 != 0) {
        // 0x800F1910: nop
    
            goto L_800F196C;
    }
    // 0x800F1910: nop

    // 0x800F1914: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F1918: nop

    // 0x800F191C: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800F1920: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F1924: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800F1928: nop

    // 0x800F192C: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x800F1930: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F1934: nop

    // 0x800F1938: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800F193C: nop

    // 0x800F1940: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x800F1944: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F1948: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F194C: nop

    // 0x800F1950: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x800F1954: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F1958: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800F195C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800F1960: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F1964: nop

    // 0x800F1968: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F196C:
    // 0x800F196C: b           L_800F1974
    // 0x800F1970: nop

        goto L_800F1974;
    // 0x800F1970: nop

L_800F1974:
    // 0x800F1974: jr          $ra
    // 0x800F1978: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F1978: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BFD94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BFD94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BFD98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BFD9C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BFDA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BFDA4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BFDA8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BFDAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BFDB0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800BFDB4: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800BFDB8: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x800BFDBC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800BFDC0: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BFDC4: addiu       $a1, $a1, 0x3DC0
    ctx->r5 = ADD32(ctx->r5, 0X3DC0);
    // 0x800BFDC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BFDCC: jal         0x80027464
    // 0x800BFDD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BFDD0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800BFDD4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800BFDD8: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x800BFDDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BFDE0: beq         $t7, $at, L_800BFEFC
    if (ctx->r15 == ctx->r1) {
        // 0x800BFDE4: nop
    
            goto L_800BFEFC;
    }
    // 0x800BFDE4: nop

    // 0x800BFDE8: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800BFDEC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x800BFDF0: jal         0x80026F10
    // 0x800BFDF4: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800BFDF4: nop

    after_1:
    // 0x800BFDF8: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800BFDFC: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800BFE00: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BFE04: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BFE08: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BFE0C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BFE10: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BFE14: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800BFE18: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800BFE1C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800BFE20: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800BFE24: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800BFE28: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x800BFE2C: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800BFE30: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800BFE34: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800BFE38: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BFE3C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BFE40: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BFE44: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x800BFE48: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x800BFE4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BFE50: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800BFE54: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BFE58: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x800BFE5C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800BFE60: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x800BFE64: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BFE68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BFE6C: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BFE70: nop

    // 0x800BFE74: swc1        $f10, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f10.u32l;
    // 0x800BFE78: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800BFE7C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BFE80: lwc1        $f8, 0x40($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X40);
    // 0x800BFE84: nop

    // 0x800BFE88: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
    // 0x800BFE8C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800BFE90: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BFE94: lwc1        $f16, 0x3C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800BFE98: nop

    // 0x800BFE9C: swc1        $f16, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f16.u32l;
    // 0x800BFEA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BFEA4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BFEA8: nop

    // 0x800BFEAC: swc1        $f18, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f18.u32l;
    // 0x800BFEB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BFEB4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BFEB8: nop

    // 0x800BFEBC: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
    // 0x800BFEC0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BFEC4: nop

    // 0x800BFEC8: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
    // 0x800BFECC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BFED0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800BFED4: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800BFED8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BFEDC: nop

    // 0x800BFEE0: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800BFEE4: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BFEE8: jal         0x80029C40
    // 0x800BFEEC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BFEEC: nop

    after_2:
    // 0x800BFEF0: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BFEF4: jal         0x80029D04
    // 0x800BFEF8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800BFEF8: nop

    after_3:
L_800BFEFC:
    // 0x800BFEFC: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x800BFF00: b           L_800BFF10
    // 0x800BFF04: nop

        goto L_800BFF10;
    // 0x800BFF04: nop

    // 0x800BFF08: b           L_800BFF10
    // 0x800BFF0C: nop

        goto L_800BFF10;
    // 0x800BFF0C: nop

L_800BFF10:
    // 0x800BFF10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BFF14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BFF18: jr          $ra
    // 0x800BFF1C: nop

    return;
    // 0x800BFF1C: nop

;}
RECOMP_FUNC void func_80080D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080D00: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80080D04: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80080D08: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80080D0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080D10: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80080D14: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80080D18: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80080D1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80080D20: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80080D24: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80080D28: addiu       $t6, $zero, 0x2C9
    ctx->r14 = ADD32(0, 0X2C9);
    // 0x80080D2C: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x80080D30: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80080D34: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80080D38: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80080D3C: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80080D40: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80080D44: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80080D48: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80080D4C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80080D50: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80080D54: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80080D58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80080D5C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80080D60: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80080D64: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80080D68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080D6C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80080D70: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80080D74: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80080D78: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80080D7C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80080D80: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80080D84: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x80080D88: lwc1        $f12, 0x14($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X14);
    // 0x80080D8C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80080D90: swc1        $f12, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f12.u32l;
    // 0x80080D94: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80080D98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080D9C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80080DA0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80080DA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080DA8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80080DAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080DB0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80080DB4: swc1        $f12, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f12.u32l;
    // 0x80080DB8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80080DBC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80080DC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080DC4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80080DC8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80080DCC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80080DD0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80080DD4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80080DD8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80080DDC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80080DE0: sh          $t6, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r14;
    // 0x80080DE4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80080DE8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80080DEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080DF0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80080DF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80080DF8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80080DFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80080E00: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80080E04: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80080E08: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x80080E0C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80080E10: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80080E14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80080E18: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80080E1C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80080E20: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80080E24: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80080E28: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80080E2C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80080E30: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80080E34: sh          $t2, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r10;
    // 0x80080E38: b           L_80080E40
    // 0x80080E3C: nop

        goto L_80080E40;
    // 0x80080E3C: nop

L_80080E40:
    // 0x80080E40: jr          $ra
    // 0x80080E44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80080E44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Skybox_ProcessMove(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DDF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006DDF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006DDFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006DE00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006DE04: lbu         $t6, 0x792E($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X792E);
    // 0x8006DE08: nop

    // 0x8006DE0C: beq         $t6, $zero, L_8006DE78
    if (ctx->r14 == 0) {
        // 0x8006DE10: nop
    
            goto L_8006DE78;
    }
    // 0x8006DE10: nop

    // 0x8006DE14: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8006DE18: lbu         $s0, 0x7930($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X7930);
    // 0x8006DE1C: nop

    // 0x8006DE20: beq         $s0, $zero, L_8006DE48
    if (ctx->r16 == 0) {
        // 0x8006DE24: nop
    
            goto L_8006DE48;
    }
    // 0x8006DE24: nop

    // 0x8006DE28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006DE2C: beq         $s0, $at, L_8006DE58
    if (ctx->r16 == ctx->r1) {
        // 0x8006DE30: nop
    
            goto L_8006DE58;
    }
    // 0x8006DE30: nop

    // 0x8006DE34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8006DE38: beq         $s0, $at, L_8006DE68
    if (ctx->r16 == ctx->r1) {
        // 0x8006DE3C: nop
    
            goto L_8006DE68;
    }
    // 0x8006DE3C: nop

    // 0x8006DE40: b           L_8006DE78
    // 0x8006DE44: nop

        goto L_8006DE78;
    // 0x8006DE44: nop

L_8006DE48:
    // 0x8006DE48: jal         0x8006D964
    // 0x8006DE4C: nop

    Skybox_MoveY(rdram, ctx);
        goto after_0;
    // 0x8006DE4C: nop

    after_0:
    // 0x8006DE50: b           L_8006DE78
    // 0x8006DE54: nop

        goto L_8006DE78;
    // 0x8006DE54: nop

L_8006DE58:
    // 0x8006DE58: jal         0x8006DB7C
    // 0x8006DE5C: nop

    Skybox_MoveX(rdram, ctx);
        goto after_1;
    // 0x8006DE5C: nop

    after_1:
    // 0x8006DE60: b           L_8006DE78
    // 0x8006DE64: nop

        goto L_8006DE78;
    // 0x8006DE64: nop

L_8006DE68:
    // 0x8006DE68: jal         0x8006DB7C
    // 0x8006DE6C: nop

    Skybox_MoveX(rdram, ctx);
        goto after_2;
    // 0x8006DE6C: nop

    after_2:
    // 0x8006DE70: b           L_8006DE78
    // 0x8006DE74: nop

        goto L_8006DE78;
    // 0x8006DE74: nop

L_8006DE78:
    // 0x8006DE78: b           L_8006DE80
    // 0x8006DE7C: nop

        goto L_8006DE80;
    // 0x8006DE7C: nop

L_8006DE80:
    // 0x8006DE80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DE84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006DE88: jr          $ra
    // 0x8006DE8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006DE8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008EB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EB10: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8008EB14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008EB18: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008EB1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EB20: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008EB24: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008EB28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008EB2C: sh          $t6, 0x4D56($at)
    MEM_H(0X4D56, ctx->r1) = ctx->r14;
    // 0x8008EB30: jr          $ra
    // 0x8008EB34: nop

    return;
    // 0x8008EB34: nop

    // 0x8008EB38: jr          $ra
    // 0x8008EB3C: nop

    return;
    // 0x8008EB3C: nop

;}
RECOMP_FUNC void func_800C3670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3670: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3674: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3678: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C367C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C3680: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3684: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C3688: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C368C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C3690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3694: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C3698: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C369C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C36A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C36A4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C36A8: nop

    // 0x800C36AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C36B0: nop

    // 0x800C36B4: bne         $t1, $zero, L_800C3750
    if (ctx->r9 != 0) {
        // 0x800C36B8: nop
    
            goto L_800C3750;
    }
    // 0x800C36B8: nop

    // 0x800C36BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C36C0: nop

    // 0x800C36C4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C36C8: nop

    // 0x800C36CC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C36D0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C36D4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C36D8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800C36DC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800C36E0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C36E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C36E8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C36EC: nop

    // 0x800C36F0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800C36F4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C36F8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C36FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C3700: lwc1        $f12, 0x128($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X128);
    // 0x800C3704: jal         0x80015538
    // 0x800C3708: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800C3708: nop

    after_0:
    // 0x800C370C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C3710: nop

    // 0x800C3714: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800C3718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C371C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3720: lui         $a1, 0x418D
    ctx->r5 = S32(0X418D << 16);
    // 0x800C3724: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800C3728: ori         $a2, $a2, 0xFAF8
    ctx->r6 = ctx->r6 | 0XFAF8;
    // 0x800C372C: jal         0x80029EF8
    // 0x800C3730: ori         $a1, $a1, 0x2D2D
    ctx->r5 = ctx->r5 | 0X2D2D;
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800C3730: ori         $a1, $a1, 0x2D2D
    ctx->r5 = ctx->r5 | 0X2D2D;
    after_1:
    // 0x800C3734: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3738: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C373C: jal         0x8001BBDC
    // 0x800C3740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800C3740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800C3744: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3748: nop

    // 0x800C374C: sh          $zero, 0x108($t0)
    MEM_H(0X108, ctx->r8) = 0;
L_800C3750:
    // 0x800C3750: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C3754: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x800C3758: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C375C: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800C3760: jal         0x80015538
    // 0x800C3764: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800C3764: nop

    after_3:
    // 0x800C3768: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C376C: nop

    // 0x800C3770: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800C3774: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C3778: nop

    // 0x800C377C: lwc1        $f6, 0x28($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800C3780: nop

    // 0x800C3784: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800C3788: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C378C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3790: nop

    // 0x800C3794: swc1        $f8, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f8.u32l;
    // 0x800C3798: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C379C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C37A0: jal         0x80029C40
    // 0x800C37A4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800C37A4: nop

    after_4:
    // 0x800C37A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C37AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C37B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C37B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C37B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C37BC: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800C37C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C37C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C37C8: jal         0x80029018
    // 0x800C37CC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800C37CC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800C37D0: beq         $v0, $zero, L_800C37FC
    if (ctx->r2 == 0) {
        // 0x800C37D4: nop
    
            goto L_800C37FC;
    }
    // 0x800C37D4: nop

    // 0x800C37D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C37DC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C37E0: nop

    // 0x800C37E4: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800C37E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C37EC: nop

    // 0x800C37F0: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C37F4: nop

    // 0x800C37F8: swc1        $f4, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f4.u32l;
L_800C37FC:
    // 0x800C37FC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C3800: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3804: nop

    // 0x800C3808: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
    // 0x800C380C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C3810: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C3814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3818: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C381C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C3820: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C3824: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C3828: jal         0x80029F58
    // 0x800C382C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800C382C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800C3830: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C3834: bne         $v0, $at, L_800C3848
    if (ctx->r2 != ctx->r1) {
        // 0x800C3838: nop
    
            goto L_800C3848;
    }
    // 0x800C3838: nop

    // 0x800C383C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C3840: nop

    // 0x800C3844: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
L_800C3848:
    // 0x800C3848: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C384C: nop

    // 0x800C3850: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800C3854: nop

    // 0x800C3858: bne         $t0, $zero, L_800C3878
    if (ctx->r8 != 0) {
        // 0x800C385C: nop
    
            goto L_800C3878;
    }
    // 0x800C385C: nop

    // 0x800C3860: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3864: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3868: jal         0x8002B0E4
    // 0x800C386C: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800C386C: nop

    after_7:
    // 0x800C3870: b           L_800C3890
    // 0x800C3874: nop

        goto L_800C3890;
    // 0x800C3874: nop

L_800C3878:
    // 0x800C3878: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C387C: nop

    // 0x800C3880: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800C3884: nop

    // 0x800C3888: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x800C388C: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_800C3890:
    // 0x800C3890: b           L_800C3898
    // 0x800C3894: nop

        goto L_800C3898;
    // 0x800C3894: nop

L_800C3898:
    // 0x800C3898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C389C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C38A0: jr          $ra
    // 0x800C38A4: nop

    return;
    // 0x800C38A4: nop

;}
RECOMP_FUNC void func_800D1B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1B94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D1B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D1B9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1BA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D1BA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D1BA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1BAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1BB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D1BB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1BB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D1BBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D1BC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D1BC4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D1BC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1BCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1BD0: jal         0x8002B0E4
    // 0x800D1BD4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D1BD4: nop

    after_0:
    // 0x800D1BD8: b           L_800D1BE0
    // 0x800D1BDC: nop

        goto L_800D1BE0;
    // 0x800D1BDC: nop

L_800D1BE0:
    // 0x800D1BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D1BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D1BE8: jr          $ra
    // 0x800D1BEC: nop

    return;
    // 0x800D1BEC: nop

;}
RECOMP_FUNC void Skybox_DrawStandard(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C428: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8006C42C: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x8006C430: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006C434: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006C438: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C43C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8006C440: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006C444: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x8006C448: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8006C44C: lui         $t8, 0xB600
    ctx->r24 = S32(0XB600 << 16);
    // 0x8006C450: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006C454: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x8006C458: lui         $t0, 0x1F
    ctx->r8 = S32(0X1F << 16);
    // 0x8006C45C: ori         $t0, $t0, 0x3204
    ctx->r8 = ctx->r8 | 0X3204;
    // 0x8006C460: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006C464: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006C468: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006C46C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C470: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006C474: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006C478: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x8006C47C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8006C480: lui         $t4, 0xB700
    ctx->r12 = S32(0XB700 << 16);
    // 0x8006C484: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006C488: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8006C48C: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x8006C490: ori         $t6, $t6, 0x2205
    ctx->r14 = ctx->r14 | 0X2205;
    // 0x8006C494: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8006C498: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006C49C: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8006C4A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C4A4: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8006C4A8: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006C4AC: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x8006C4B0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8006C4B4: lui         $t0, 0xBA00
    ctx->r8 = S32(0XBA00 << 16);
    // 0x8006C4B8: ori         $t0, $t0, 0x1301
    ctx->r8 = ctx->r8 | 0X1301;
    // 0x8006C4BC: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006C4C0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8006C4C4: nop

    // 0x8006C4C8: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8006C4CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006C4D0: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006C4D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C4D8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006C4DC: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006C4E0: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x8006C4E4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8006C4E8: lui         $t5, 0xB900
    ctx->r13 = S32(0XB900 << 16);
    // 0x8006C4EC: ori         $t5, $t5, 0x31D
    ctx->r13 = ctx->r13 | 0X31D;
    // 0x8006C4F0: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006C4F4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8006C4F8: lui         $t7, 0x55
    ctx->r15 = S32(0X55 << 16);
    // 0x8006C4FC: ori         $t7, $t7, 0x2048
    ctx->r15 = ctx->r15 | 0X2048;
    // 0x8006C500: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006C504: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006C508: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006C50C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C510: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006C514: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006C518: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x8006C51C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8006C520: lui         $t1, 0xFCFF
    ctx->r9 = S32(0XFCFF << 16);
    // 0x8006C524: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8006C528: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006C52C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x8006C530: lui         $t3, 0xFFFC
    ctx->r11 = S32(0XFFFC << 16);
    // 0x8006C534: ori         $t3, $t3, 0xF87C
    ctx->r11 = ctx->r11 | 0XF87C;
    // 0x8006C538: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8006C53C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006C540: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006C544: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C548: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006C54C: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006C550: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x8006C554: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8006C558: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x8006C55C: ori         $t7, $t7, 0x602
    ctx->r15 = ctx->r15 | 0X602;
    // 0x8006C560: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006C564: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8006C568: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x8006C56C: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006C570: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006C574: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006C578: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C57C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8006C580: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006C584: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8006C588: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x8006C58C: lui         $t3, 0xBA00
    ctx->r11 = S32(0XBA00 << 16);
    // 0x8006C590: ori         $t3, $t3, 0xC02
    ctx->r11 = ctx->r11 | 0XC02;
    // 0x8006C594: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006C598: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8006C59C: addiu       $t5, $zero, 0x2000
    ctx->r13 = ADD32(0, 0X2000);
    // 0x8006C5A0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8006C5A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006C5A8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006C5AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C5B0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8006C5B4: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006C5B8: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x8006C5BC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8006C5C0: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x8006C5C4: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x8006C5C8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006C5CC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8006C5D0: ori         $t1, $zero, 0x8000
    ctx->r9 = 0 | 0X8000;
    // 0x8006C5D4: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8006C5D8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006C5DC: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006C5E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C5E4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006C5E8: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006C5EC: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x8006C5F0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8006C5F4: lui         $t5, 0xFD10
    ctx->r13 = S32(0XFD10 << 16);
    // 0x8006C5F8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8006C5FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006C600: lw          $t7, 0x75AC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X75AC);
    // 0x8006C604: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x8006C608: nop

    // 0x8006C60C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006C610: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006C614: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006C618: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C61C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006C620: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006C624: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8006C628: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C62C: lui         $t1, 0xE800
    ctx->r9 = S32(0XE800 << 16);
    // 0x8006C630: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8006C634: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C638: nop

    // 0x8006C63C: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8006C640: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006C644: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006C648: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C64C: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8006C650: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006C654: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x8006C658: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8006C65C: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x8006C660: ori         $t6, $t6, 0x100
    ctx->r14 = ctx->r14 | 0X100;
    // 0x8006C664: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8006C668: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8006C66C: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8006C670: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8006C674: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006C678: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006C67C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C680: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8006C684: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006C688: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8006C68C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8006C690: lui         $t2, 0xE600
    ctx->r10 = S32(0XE600 << 16);
    // 0x8006C694: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8006C698: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8006C69C: nop

    // 0x8006C6A0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8006C6A4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006C6A8: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006C6AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C6B0: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8006C6B4: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006C6B8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8006C6BC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8006C6C0: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x8006C6C4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006C6C8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8006C6CC: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x8006C6D0: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8006C6D4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8006C6D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006C6DC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006C6E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C6E4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8006C6E8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8006C6EC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8006C6F0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C6F4: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8006C6F8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006C6FC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C700: nop

    // 0x8006C704: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8006C708: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006C70C: nop

    // 0x8006C710: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006C714: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006C718: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006C71C: nop

    // 0x8006C720: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x8006C724: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x8006C728: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006C72C: bgez        $t7, L_8006C73C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8006C730: sra         $t8, $t7, 2
        ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
            goto L_8006C73C;
    }
    // 0x8006C730: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8006C734: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x8006C738: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_8006C73C:
    // 0x8006C73C: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
    // 0x8006C740: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006C744: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006C748: nop

    // 0x8006C74C: mul.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f6.fl);
    // 0x8006C750: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8006C754: nop

    // 0x8006C758: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8006C75C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006C760: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006C764: nop

    // 0x8006C768: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8006C76C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x8006C770: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8006C774: andi        $t1, $t0, 0xF
    ctx->r9 = ctx->r8 & 0XF;
    // 0x8006C778: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x8006C77C: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8006C780: nop

    // 0x8006C784: beq         $t2, $zero, L_8006C7AC
    if (ctx->r10 == 0) {
        // 0x8006C788: nop
    
            goto L_8006C7AC;
    }
    // 0x8006C788: nop

    // 0x8006C78C: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x8006C790: nop

    // 0x8006C794: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8006C798: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x8006C79C: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x8006C7A0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8006C7A4: subu        $t7, $t6, $t5
    ctx->r15 = SUB32(ctx->r14, ctx->r13);
    // 0x8006C7A8: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_8006C7AC:
    // 0x8006C7AC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8006C7B0: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x8006C7B4: addiu       $t9, $zero, 0x1E0
    ctx->r25 = ADD32(0, 0X1E0);
    // 0x8006C7B8: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x8006C7BC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8006C7C0: nop

    // 0x8006C7C4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x8006C7C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006C7CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006C7D0: nop

    // 0x8006C7D4: cvt.w.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = CVT_W_S(ctx->f12.fl);
    // 0x8006C7D8: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8006C7DC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8006C7E0: bgez        $t1, L_8006C7F0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8006C7E4: sra         $t2, $t1, 3
        ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
            goto L_8006C7F0;
    }
    // 0x8006C7E4: sra         $t2, $t1, 3
    ctx->r10 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8006C7E8: addiu       $at, $t1, 0x7
    ctx->r1 = ADD32(ctx->r9, 0X7);
    // 0x8006C7EC: sra         $t2, $at, 3
    ctx->r10 = S32(SIGNED(ctx->r1) >> 3);
L_8006C7F0:
    // 0x8006C7F0: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x8006C7F4: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8006C7F8: nop

    // 0x8006C7FC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8006C800: sw          $t4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r12;
    // 0x8006C804: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006C808: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006C80C: nop

    // 0x8006C810: mul.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x8006C814: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8006C818: nop

    // 0x8006C81C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8006C820: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006C824: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006C828: nop

    // 0x8006C82C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8006C830: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8006C834: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8006C838: andi        $t7, $t5, 0x1F
    ctx->r15 = ctx->r13 & 0X1F;
    // 0x8006C83C: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x8006C840: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8006C844: nop

    // 0x8006C848: beq         $t8, $zero, L_8006C870
    if (ctx->r24 == 0) {
        // 0x8006C84C: nop
    
            goto L_8006C870;
    }
    // 0x8006C84C: nop

    // 0x8006C850: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8006C854: nop

    // 0x8006C858: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8006C85C: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x8006C860: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8006C864: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8006C868: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x8006C86C: sw          $t3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r11;
L_8006C870:
    // 0x8006C870: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x8006C874: sw          $t4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r12;
    // 0x8006C878: addiu       $t6, $zero, 0x500
    ctx->r14 = ADD32(0, 0X500);
    // 0x8006C87C: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x8006C880: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_8006C884:
    // 0x8006C884: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006C888: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006C88C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C890: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x8006C894: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006C898: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x8006C89C: sra         $t8, $a2, 1
    ctx->r24 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8006C8A0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006C8A4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006C8A8: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006C8AC: lui         $at, 0xFD48
    ctx->r1 = S32(0XFD48 << 16);
    // 0x8006C8B0: or          $t2, $t0, $at
    ctx->r10 = ctx->r8 | ctx->r1;
    // 0x8006C8B4: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x8006C8B8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006C8BC: lw          $t3, 0x75B4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X75B4);
    // 0x8006C8C0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8006C8C4: nop

    // 0x8006C8C8: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8006C8CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006C8D0: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006C8D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C8D8: addiu       $t5, $t6, 0x8
    ctx->r13 = ADD32(ctx->r14, 0X8);
    // 0x8006C8DC: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8006C8E0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8006C8E4: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8006C8E8: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C8EC: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x8006C8F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8006C8F4: subu        $t0, $t9, $t7
    ctx->r8 = SUB32(ctx->r25, ctx->r15);
    // 0x8006C8F8: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x8006C8FC: sra         $t1, $t2, 1
    ctx->r9 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8006C900: addiu       $t3, $t1, 0x7
    ctx->r11 = ADD32(ctx->r9, 0X7);
    // 0x8006C904: sra         $t4, $t3, 3
    ctx->r12 = S32(SIGNED(ctx->r11) >> 3);
    // 0x8006C908: andi        $t6, $t4, 0x1FF
    ctx->r14 = ctx->r12 & 0X1FF;
    // 0x8006C90C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8006C910: sll         $t5, $t6, 9
    ctx->r13 = S32(ctx->r14 << 9);
    // 0x8006C914: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x8006C918: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8006C91C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8006C920: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8006C924: sw          $t7, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r15;
    // 0x8006C928: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006C92C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006C930: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C934: addiu       $t1, $t2, 0x8
    ctx->r9 = ADD32(ctx->r10, 0X8);
    // 0x8006C938: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006C93C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8006C940: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8006C944: lui         $t3, 0xE600
    ctx->r11 = S32(0XE600 << 16);
    // 0x8006C948: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006C94C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8006C950: nop

    // 0x8006C954: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8006C958: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006C95C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8006C960: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C964: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x8006C968: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006C96C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8006C970: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8006C974: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x8006C978: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x8006C97C: andi        $t0, $t7, 0xFFF
    ctx->r8 = ctx->r15 & 0XFFF;
    // 0x8006C980: sll         $t2, $t0, 12
    ctx->r10 = S32(ctx->r8 << 12);
    // 0x8006C984: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x8006C988: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006C98C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C990: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8006C994: or          $t1, $t2, $at
    ctx->r9 = ctx->r10 | ctx->r1;
    // 0x8006C998: or          $t5, $t1, $t6
    ctx->r13 = ctx->r9 | ctx->r14;
    // 0x8006C99C: sw          $t5, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r13;
    // 0x8006C9A0: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x8006C9A4: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C9A8: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8006C9AC: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8006C9B0: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x8006C9B4: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8006C9B8: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x8006C9BC: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x8006C9C0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006C9C4: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x8006C9C8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x8006C9CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8006C9D0: or          $t1, $t4, $at
    ctx->r9 = ctx->r12 | ctx->r1;
    // 0x8006C9D4: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x8006C9D8: or          $t0, $t1, $t7
    ctx->r8 = ctx->r9 | ctx->r15;
    // 0x8006C9DC: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x8006C9E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006C9E4: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006C9E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C9EC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006C9F0: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006C9F4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x8006C9F8: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006C9FC: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8006CA00: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x8006CA04: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8006CA08: nop

    // 0x8006CA0C: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006CA10: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006CA14: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006CA18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CA1C: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x8006CA20: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8006CA24: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8006CA28: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8006CA2C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8006CA30: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x8006CA34: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x8006CA38: subu        $t3, $t2, $t7
    ctx->r11 = SUB32(ctx->r10, ctx->r15);
    // 0x8006CA3C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8006CA40: sra         $t6, $t4, 1
    ctx->r14 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8006CA44: addiu       $t5, $t6, 0x7
    ctx->r13 = ADD32(ctx->r14, 0X7);
    // 0x8006CA48: sra         $t8, $t5, 3
    ctx->r24 = S32(SIGNED(ctx->r13) >> 3);
    // 0x8006CA4C: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x8006CA50: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8006CA54: sll         $t1, $t9, 9
    ctx->r9 = S32(ctx->r25 << 9);
    // 0x8006CA58: or          $t0, $t1, $at
    ctx->r8 = ctx->r9 | ctx->r1;
    // 0x8006CA5C: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x8006CA60: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8006CA64: nop

    // 0x8006CA68: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006CA6C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006CA70: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006CA74: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CA78: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006CA7C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006CA80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8006CA84: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8006CA88: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x8006CA8C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x8006CA90: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8006CA94: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x8006CA98: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x8006CA9C: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8006CAA0: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8006CAA4: andi        $t7, $t2, 0xFFF
    ctx->r15 = ctx->r10 & 0XFFF;
    // 0x8006CAA8: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x8006CAAC: or          $t3, $t1, $t7
    ctx->r11 = ctx->r9 | ctx->r15;
    // 0x8006CAB0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8006CAB4: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x8006CAB8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8006CABC: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8006CAC0: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8006CAC4: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x8006CAC8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006CACC: addu        $t3, $t1, $t7
    ctx->r11 = ADD32(ctx->r9, ctx->r15);
    // 0x8006CAD0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006CAD4: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x8006CAD8: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x8006CADC: sll         $t2, $t0, 12
    ctx->r10 = S32(ctx->r8 << 12);
    // 0x8006CAE0: andi        $t6, $t4, 0xFFF
    ctx->r14 = ctx->r12 & 0XFFF;
    // 0x8006CAE4: or          $t5, $t2, $t6
    ctx->r13 = ctx->r10 | ctx->r14;
    // 0x8006CAE8: sw          $t5, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r13;
    // 0x8006CAEC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006CAF0: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8006CAF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CAF8: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006CAFC: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8006CB00: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x8006CB04: lw          $t7, 0xC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC);
    // 0x8006CB08: lui         $t1, 0xF200
    ctx->r9 = S32(0XF200 << 16);
    // 0x8006CB0C: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x8006CB10: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8006CB14: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x8006CB18: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006CB1C: andi        $t2, $t4, 0xFFF
    ctx->r10 = ctx->r12 & 0XFFF;
    // 0x8006CB20: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x8006CB24: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8006CB28: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x8006CB2C: sll         $t6, $t2, 12
    ctx->r14 = S32(ctx->r10 << 12);
    // 0x8006CB30: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x8006CB34: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006CB38: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006CB3C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8006CB40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CB44: addiu       $t3, $t7, 0x8
    ctx->r11 = ADD32(ctx->r15, 0X8);
    // 0x8006CB48: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006CB4C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x8006CB50: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8006CB54: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8006CB58: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8006CB5C: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8006CB60: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x8006CB64: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8006CB68: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8006CB6C: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x8006CB70: addu        $t7, $t0, $t1
    ctx->r15 = ADD32(ctx->r8, ctx->r9);
    // 0x8006CB74: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8006CB78: andi        $t3, $t7, 0xFFF
    ctx->r11 = ctx->r15 & 0XFFF;
    // 0x8006CB7C: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8006CB80: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x8006CB84: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8006CB88: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8006CB8C: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x8006CB90: andi        $t8, $t5, 0xFFF
    ctx->r24 = ctx->r13 & 0XFFF;
    // 0x8006CB94: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8006CB98: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x8006CB9C: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x8006CBA0: or          $t7, $t6, $t1
    ctx->r15 = ctx->r14 | ctx->r9;
    // 0x8006CBA4: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x8006CBA8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006CBAC: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8006CBB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CBB4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8006CBB8: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006CBBC: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x8006CBC0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8006CBC4: lui         $t2, 0xB400
    ctx->r10 = S32(0XB400 << 16);
    // 0x8006CBC8: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x8006CBCC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8006CBD0: nop

    // 0x8006CBD4: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8006CBD8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006CBDC: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8006CBE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006CBE4: addiu       $t6, $t0, 0x8
    ctx->r14 = ADD32(ctx->r8, 0X8);
    // 0x8006CBE8: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006CBEC: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x8006CBF0: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8006CBF4: lui         $t1, 0xB300
    ctx->r9 = S32(0XB300 << 16);
    // 0x8006CBF8: sw          $t1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r9;
    // 0x8006CBFC: lw          $t3, 0x0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X0);
    // 0x8006CC00: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x8006CC04: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x8006CC08: sw          $t9, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r25;
    // 0x8006CC0C: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x8006CC10: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x8006CC14: nop

    // 0x8006CC18: addu        $t5, $t4, $t2
    ctx->r13 = ADD32(ctx->r12, ctx->r10);
    // 0x8006CC1C: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
    // 0x8006CC20: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8006CC24: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8006CC28: nop

    // 0x8006CC2C: addu        $t6, $t8, $t0
    ctx->r14 = ADD32(ctx->r24, ctx->r8);
    // 0x8006CC30: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8006CC34: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x8006CC38: nop

    // 0x8006CC3C: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x8006CC40: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8006CC44: bne         $at, $zero, L_8006C884
    if (ctx->r1 != 0) {
        // 0x8006CC48: sw          $t7, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r15;
            goto L_8006C884;
    }
    // 0x8006CC48: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x8006CC4C: b           L_8006CC54
    // 0x8006CC50: nop

        goto L_8006CC54;
    // 0x8006CC50: nop

L_8006CC54:
    // 0x8006CC54: jr          $ra
    // 0x8006CC58: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8006CC58: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800CA6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA6DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800CA6E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800CA6E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800CA6E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA6EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA6F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA6F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA6F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA6FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA704: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA708: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CA70C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CA710: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800CA714: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800CA718: nop

    // 0x800CA71C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CA720: nop

    // 0x800CA724: bne         $t1, $zero, L_800CA778
    if (ctx->r9 != 0) {
        // 0x800CA728: nop
    
            goto L_800CA778;
    }
    // 0x800CA728: nop

    // 0x800CA72C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CA730: nop

    // 0x800CA734: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CA738: nop

    // 0x800CA73C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CA740: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CA744: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CA748: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CA74C: nop

    // 0x800CA750: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800CA754: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CA758: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800CA75C: nop

    // 0x800CA760: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x800CA764: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA768: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA76C: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x800CA770: jal         0x80029EF8
    // 0x800CA774: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800CA774: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
L_800CA778:
    // 0x800CA778: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800CA77C: nop

    // 0x800CA780: lwc1        $f8, 0x28($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800CA784: nop

    // 0x800CA788: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x800CA78C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CA790: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800CA794: nop

    // 0x800CA798: swc1        $f10, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f10.u32l;
    // 0x800CA79C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA7A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA7A4: jal         0x80029C40
    // 0x800CA7A8: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800CA7A8: nop

    after_1:
    // 0x800CA7AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CA7B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CA7B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA7B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA7BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CA7C0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800CA7C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CA7C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800CA7CC: jal         0x80029018
    // 0x800CA7D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x800CA7D0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800CA7D4: beq         $v0, $zero, L_800CA7F8
    if (ctx->r2 == 0) {
        // 0x800CA7D8: nop
    
            goto L_800CA7F8;
    }
    // 0x800CA7D8: nop

    // 0x800CA7DC: jal         0x800297DC
    // 0x800CA7E0: nop

    func_800297DC(rdram, ctx);
        goto after_3;
    // 0x800CA7E0: nop

    after_3:
    // 0x800CA7E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA7E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA7EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CA7F0: jal         0x80029824
    // 0x800CA7F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_4;
    // 0x800CA7F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_800CA7F8:
    // 0x800CA7F8: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800CA7FC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800CA800: nop

    // 0x800CA804: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x800CA808: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CA80C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA814: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800CA818: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800CA81C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CA820: jal         0x80029F58
    // 0x800CA824: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800CA824: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x800CA828: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CA82C: bne         $v0, $at, L_800CA878
    if (ctx->r2 != ctx->r1) {
        // 0x800CA830: nop
    
            goto L_800CA878;
    }
    // 0x800CA830: nop

    // 0x800CA834: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800CA838: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800CA83C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CA840: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800CA844: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800CA848: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CA84C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800CA850: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CA854: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CA858: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800CA85C: sh          $t0, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r8;
    // 0x800CA860: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800CA864: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800CA868: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800CA86C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800CA870: nop

    // 0x800CA874: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800CA878:
    // 0x800CA878: b           L_800CA880
    // 0x800CA87C: nop

        goto L_800CA880;
    // 0x800CA87C: nop

L_800CA880:
    // 0x800CA880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800CA884: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800CA888: jr          $ra
    // 0x800CA88C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800CA88C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800B5084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5084: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B5088: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B508C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B5090: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B5094: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B5098: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B509C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B50A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B50A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B50A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B50AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B50B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B50B4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B50B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B50BC: nop

    // 0x800B50C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B50C4: nop

    // 0x800B50C8: bne         $t1, $zero, L_800B511C
    if (ctx->r9 != 0) {
        // 0x800B50CC: nop
    
            goto L_800B511C;
    }
    // 0x800B50CC: nop

    // 0x800B50D0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B50D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B50D8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B50DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800B50E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B50E4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B50E8: nop

    // 0x800B50EC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B50F0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B50F4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B50F8: nop

    // 0x800B50FC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B5100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5104: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B510C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x800B5110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B5114: jal         0x80017664
    // 0x800B5118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80017664(rdram, ctx);
        goto after_0;
    // 0x800B5118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800B511C:
    // 0x800B511C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B5120: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x800B5124: lh          $t7, 0xB2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB2);
    // 0x800B5128: nop

    // 0x800B512C: bne         $t7, $at, L_800B5150
    if (ctx->r15 != ctx->r1) {
        // 0x800B5130: nop
    
            goto L_800B5150;
    }
    // 0x800B5130: nop

    // 0x800B5134: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5138: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B513C: jal         0x800272E8
    // 0x800B5140: nop

    func_800272E8(rdram, ctx);
        goto after_1;
    // 0x800B5140: nop

    after_1:
    // 0x800B5144: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800B5148: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B514C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
L_800B5150:
    // 0x800B5150: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5154: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5158: jal         0x80028FA0
    // 0x800B515C: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800B515C: nop

    after_2:
    // 0x800B5160: beq         $v0, $zero, L_800B5188
    if (ctx->r2 == 0) {
        // 0x800B5164: nop
    
            goto L_800B5188;
    }
    // 0x800B5164: nop

    // 0x800B5168: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B516C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B5170: nop

    // 0x800B5174: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
    // 0x800B5178: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B517C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B5180: nop

    // 0x800B5184: swc1        $f10, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f10.u32l;
L_800B5188:
    // 0x800B5188: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B518C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5190: jal         0x80029C40
    // 0x800B5194: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B5194: nop

    after_3:
    // 0x800B5198: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800B519C: nop

    // 0x800B51A0: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800B51A4: nop

    // 0x800B51A8: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
    // 0x800B51AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B51B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B51B4: jal         0x8001B44C
    // 0x800B51B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800B51B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800B51BC: beq         $v0, $zero, L_800B51DC
    if (ctx->r2 == 0) {
        // 0x800B51C0: nop
    
            goto L_800B51DC;
    }
    // 0x800B51C0: nop

    // 0x800B51C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B51C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B51CC: jal         0x8002B114
    // 0x800B51D0: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x800B51D0: nop

    after_5:
    // 0x800B51D4: b           L_800B5294
    // 0x800B51D8: nop

        goto L_800B5294;
    // 0x800B51D8: nop

L_800B51DC:
    // 0x800B51DC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B51E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B51E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B51E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B51EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800B51F0: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x800B51F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B51F8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800B51FC: jal         0x80029018
    // 0x800B5200: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800B5200: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800B5204: beq         $v0, $zero, L_800B5244
    if (ctx->r2 == 0) {
        // 0x800B5208: nop
    
            goto L_800B5244;
    }
    // 0x800B5208: nop

    // 0x800B520C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B5210: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B5214: nop

    // 0x800B5218: swc1        $f6, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f6.u32l;
    // 0x800B521C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B5220: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B5224: nop

    // 0x800B5228: swc1        $f8, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f8.u32l;
    // 0x800B522C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5230: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B5234: jal         0x8002B114
    // 0x800B5238: nop

    func_8002B114(rdram, ctx);
        goto after_7;
    // 0x800B5238: nop

    after_7:
    // 0x800B523C: b           L_800B5294
    // 0x800B5240: nop

        goto L_800B5294;
    // 0x800B5240: nop

L_800B5244:
    // 0x800B5244: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B5248: nop

    // 0x800B524C: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800B5250: nop

    // 0x800B5254: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800B5258: sh          $t7, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r15;
    // 0x800B525C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B5260: nop

    // 0x800B5264: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800B5268: nop

    // 0x800B526C: bgtz        $t9, L_800B528C
    if (SIGNED(ctx->r25) > 0) {
        // 0x800B5270: nop
    
            goto L_800B528C;
    }
    // 0x800B5270: nop

    // 0x800B5274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B5278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B527C: jal         0x8002B114
    // 0x800B5280: nop

    func_8002B114(rdram, ctx);
        goto after_8;
    // 0x800B5280: nop

    after_8:
    // 0x800B5284: b           L_800B5294
    // 0x800B5288: nop

        goto L_800B5294;
    // 0x800B5288: nop

L_800B528C:
    // 0x800B528C: b           L_800B5294
    // 0x800B5290: nop

        goto L_800B5294;
    // 0x800B5290: nop

L_800B5294:
    // 0x800B5294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B5298: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B529C: jr          $ra
    // 0x800B52A0: nop

    return;
    // 0x800B52A0: nop

;}
RECOMP_FUNC void func_80070A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070A6C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80070A70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80070A74: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80070A78: nop

    // 0x80070A7C: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x80070A80: bne         $at, $zero, L_80070A94
    if (ctx->r1 != 0) {
        // 0x80070A84: nop
    
            goto L_80070A94;
    }
    // 0x80070A84: nop

    // 0x80070A88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070A8C: b           L_80070AA0
    // 0x80070A90: sb          $zero, 0x79F8($at)
    MEM_B(0X79F8, ctx->r1) = 0;
        goto L_80070AA0;
    // 0x80070A90: sb          $zero, 0x79F8($at)
    MEM_B(0X79F8, ctx->r1) = 0;
L_80070A94:
    // 0x80070A94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80070A98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070A9C: sb          $t7, 0x79F8($at)
    MEM_B(0X79F8, ctx->r1) = ctx->r15;
L_80070AA0:
    // 0x80070AA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070AA4: sh          $zero, 0x7A10($at)
    MEM_H(0X7A10, ctx->r1) = 0;
    // 0x80070AA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070AAC: sw          $zero, 0x7A4C($at)
    MEM_W(0X7A4C, ctx->r1) = 0;
    // 0x80070AB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070AB4: sw          $zero, 0x7A54($at)
    MEM_W(0X7A54, ctx->r1) = 0;
    // 0x80070AB8: b           L_80070AC0
    // 0x80070ABC: nop

        goto L_80070AC0;
    // 0x80070ABC: nop

L_80070AC0:
    // 0x80070AC0: jr          $ra
    // 0x80070AC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80070AC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80071B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071B50: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80071B54: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80071B58: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80071B5C: nop

    // 0x80071B60: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80071B64: beq         $t7, $zero, L_80071C40
    if (ctx->r15 == 0) {
        // 0x80071B68: nop
    
            goto L_80071C40;
    }
    // 0x80071B68: nop

    // 0x80071B6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071B70: lwc1        $f4, 0x7614($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7614);
    // 0x80071B74: nop

    // 0x80071B78: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x80071B7C: nop

    // 0x80071B80: bc1f        L_80071BA0
    if (!c1cs) {
        // 0x80071B84: nop
    
            goto L_80071BA0;
    }
    // 0x80071B84: nop

    // 0x80071B88: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071B8C: lwc1        $f6, 0x7624($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7624);
    // 0x80071B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071B94: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x80071B98: b           L_80071C38
    // 0x80071B9C: swc1        $f8, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f8.u32l;
        goto L_80071C38;
    // 0x80071B9C: swc1        $f8, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f8.u32l;
L_80071BA0:
    // 0x80071BA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071BA4: lwc1        $f10, 0x7614($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7614);
    // 0x80071BA8: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80071BAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80071BB0: nop

    // 0x80071BB4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80071BB8: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x80071BBC: nop

    // 0x80071BC0: bc1f        L_80071BEC
    if (!c1cs) {
        // 0x80071BC4: nop
    
            goto L_80071BEC;
    }
    // 0x80071BC4: nop

    // 0x80071BC8: lui         $at, 0x43F0
    ctx->r1 = S32(0X43F0 << 16);
    // 0x80071BCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80071BD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071BD4: lwc1        $f6, 0x7624($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7624);
    // 0x80071BD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071BDC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80071BE0: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80071BE4: b           L_80071C38
    // 0x80071BE8: swc1        $f10, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f10.u32l;
        goto L_80071C38;
    // 0x80071BE8: swc1        $f10, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f10.u32l;
L_80071BEC:
    // 0x80071BEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071BF0: lwc1        $f16, 0x761C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X761C);
    // 0x80071BF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80071BF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80071BFC: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x80071C00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071C04: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80071C08: lwc1        $f8, 0x7614($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7614);
    // 0x80071C0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071C10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80071C14: swc1        $f10, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f10.u32l;
    // 0x80071C18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071C1C: lwc1        $f16, 0x761C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X761C);
    // 0x80071C20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80071C24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80071C28: sub.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x80071C2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071C30: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80071C34: swc1        $f6, 0x7624($at)
    MEM_W(0X7624, ctx->r1) = ctx->f6.u32l;
L_80071C38:
    // 0x80071C38: b           L_80071CE4
    // 0x80071C3C: nop

        goto L_80071CE4;
    // 0x80071C3C: nop

L_80071C40:
    // 0x80071C40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071C44: lwc1        $f8, -0x1EBC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80071C48: nop

    // 0x80071C4C: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x80071C50: swc1        $f10, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f10.u32l;
    // 0x80071C54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80071C58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80071C5C: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80071C60: nop

    // 0x80071C64: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80071C68: nop

    // 0x80071C6C: bc1f        L_80071C9C
    if (!c1cs) {
        // 0x80071C70: nop
    
            goto L_80071C9C;
    }
    // 0x80071C70: nop

    // 0x80071C74: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80071C78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80071C7C: nop

    // 0x80071C80: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80071C84: nop

    // 0x80071C88: bc1f        L_80071C9C
    if (!c1cs) {
        // 0x80071C8C: nop
    
            goto L_80071C9C;
    }
    // 0x80071C8C: nop

    // 0x80071C90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071C94: b           L_80071CC0
    // 0x80071C98: swc1        $f12, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f12.u32l;
        goto L_80071CC0;
    // 0x80071C98: swc1        $f12, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f12.u32l;
L_80071C9C:
    // 0x80071C9C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80071CA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80071CA4: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80071CA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071CAC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80071CB0: lwc1        $f18, -0x1EBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80071CB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071CB8: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80071CBC: swc1        $f16, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f16.u32l;
L_80071CC0:
    // 0x80071CC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80071CC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071CC8: swc1        $f4, 0x7624($at)
    MEM_W(0X7624, ctx->r1) = ctx->f4.u32l;
    // 0x80071CCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071CD0: swc1        $f12, 0x761C($at)
    MEM_W(0X761C, ctx->r1) = ctx->f12.u32l;
    // 0x80071CD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071CD8: lwc1        $f6, 0x75B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x80071CDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071CE0: swc1        $f6, 0x7614($at)
    MEM_W(0X7614, ctx->r1) = ctx->f6.u32l;
L_80071CE4:
    // 0x80071CE4: b           L_80071CEC
    // 0x80071CE8: nop

        goto L_80071CEC;
    // 0x80071CE8: nop

L_80071CEC:
    // 0x80071CEC: jr          $ra
    // 0x80071CF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80071CF0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8006AA24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AA24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006AA28: lb          $t6, 0x7640($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7640);
    // 0x8006AA2C: nop

    // 0x8006AA30: bne         $t6, $zero, L_8006AA48
    if (ctx->r14 != 0) {
        // 0x8006AA34: nop
    
            goto L_8006AA48;
    }
    // 0x8006AA34: nop

    // 0x8006AA38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AA3C: sb          $a0, 0x7640($at)
    MEM_B(0X7640, ctx->r1) = ctx->r4;
    // 0x8006AA40: jr          $ra
    // 0x8006AA44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8006AA44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006AA48:
    // 0x8006AA48: jr          $ra
    // 0x8006AA4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8006AA4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006AA50: jr          $ra
    // 0x8006AA54: nop

    return;
    // 0x8006AA54: nop

    // 0x8006AA58: jr          $ra
    // 0x8006AA5C: nop

    return;
    // 0x8006AA5C: nop

;}
RECOMP_FUNC void func_800BBAD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BBAD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BBAD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BBADC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800BBAE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800BBAE4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800BBAE8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BBAEC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800BBAF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BBAF4: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800BBAF8: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800BBAFC: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800BBB00: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800BBB04: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BBB08: lwc1        $f16, 0x3C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BBB0C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x800BBB10: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BBB14: addiu       $a1, $a1, 0x3B68
    ctx->r5 = ADD32(ctx->r5, 0X3B68);
    // 0x800BBB18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BBB1C: jal         0x80027464
    // 0x800BBB20: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BBB20: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800BBB24: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x800BBB28: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x800BBB2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BBB30: beq         $t7, $at, L_800BBC80
    if (ctx->r15 == ctx->r1) {
        // 0x800BBB34: nop
    
            goto L_800BBC80;
    }
    // 0x800BBB34: nop

    // 0x800BBB38: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x800BBB3C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x800BBB40: jal         0x80026F10
    // 0x800BBB44: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x800BBB44: nop

    after_1:
    // 0x800BBB48: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x800BBB4C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800BBB50: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800BBB54: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BBB58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800BBB5C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800BBB60: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800BBB64: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800BBB68: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800BBB6C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x800BBB70: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800BBB74: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BBB78: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800BBB7C: nop

    // 0x800BBB80: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x800BBB84: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800BBB88: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BBB8C: lwc1        $f4, 0x40($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800BBB90: nop

    // 0x800BBB94: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x800BBB98: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800BBB9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBA0: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800BBBA4: nop

    // 0x800BBBA8: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x800BBBAC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BBBB0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBB4: nop

    // 0x800BBBB8: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
    // 0x800BBBBC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BBBC0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBC4: nop

    // 0x800BBBC8: swc1        $f10, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f10.u32l;
    // 0x800BBBCC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBD0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800BBBD4: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800BBBD8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBDC: nop

    // 0x800BBBE0: sh          $zero, 0x108($t2)
    MEM_H(0X108, ctx->r10) = 0;
    // 0x800BBBE4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBE8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800BBBEC: sh          $t3, 0x100($t4)
    MEM_H(0X100, ctx->r12) = ctx->r11;
    // 0x800BBBF0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BBBF4: nop

    // 0x800BBBF8: sb          $zero, 0x102($t5)
    MEM_B(0X102, ctx->r13) = 0;
    // 0x800BBBFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800BBC04: sb          $t6, 0x103($t7)
    MEM_B(0X103, ctx->r15) = ctx->r14;
    // 0x800BBC08: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x800BBC0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800BBC10: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC14: nop

    // 0x800BBC18: swc1        $f16, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f16.u32l;
    // 0x800BBC1C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x800BBC20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BBC24: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC28: nop

    // 0x800BBC2C: swc1        $f18, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f18.u32l;
    // 0x800BBC30: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x800BBC34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BBC38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC3C: nop

    // 0x800BBC40: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x800BBC44: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC48: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800BBC4C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800BBC50: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC54: addiu       $t3, $zero, 0x84
    ctx->r11 = ADD32(0, 0X84);
    // 0x800BBC58: sh          $t3, 0xB2($t4)
    MEM_H(0XB2, ctx->r12) = ctx->r11;
    // 0x800BBC5C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BBC60: nop

    // 0x800BBC64: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800BBC68: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BBC6C: jal         0x80029C40
    // 0x800BBC70: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BBC70: nop

    after_2:
    // 0x800BBC74: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800BBC78: jal         0x80029D04
    // 0x800BBC7C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800BBC7C: nop

    after_3:
L_800BBC80:
    // 0x800BBC80: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x800BBC84: b           L_800BBC94
    // 0x800BBC88: nop

        goto L_800BBC94;
    // 0x800BBC88: nop

    // 0x800BBC8C: b           L_800BBC94
    // 0x800BBC90: nop

        goto L_800BBC94;
    // 0x800BBC90: nop

L_800BBC94:
    // 0x800BBC94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BBC98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BBC9C: jr          $ra
    // 0x800BBCA0: nop

    return;
    // 0x800BBCA0: nop

;}
RECOMP_FUNC void func_8007EE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EE88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007EE8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007EE90: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8007EE94: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8007EE98: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8007EE9C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8007EEA0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007EEA4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8007EEA8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007EEAC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8007EEB0:
    // 0x8007EEB0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007EEB4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007EEB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007EEBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007EEC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007EEC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007EEC8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007EECC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007EED0: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007EED4: nop

    // 0x8007EED8: bne         $t9, $zero, L_8007F03C
    if (ctx->r25 != 0) {
        // 0x8007EEDC: nop
    
            goto L_8007F03C;
    }
    // 0x8007EEDC: nop

    // 0x8007EEE0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007EEE4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007EEE8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007EEEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007EEF0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007EEF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007EEF8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007EEFC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007EF00: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007EF04: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007EF08: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EF0C: jal         0x8001A928
    // 0x8007EF10: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007EF10: nop

    after_0:
    // 0x8007EF14: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007EF18: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x8007EF1C: lw          $a3, 0x70($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X70);
    // 0x8007EF20: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EF24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EF28: jal         0x8001BD44
    // 0x8007EF2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007EF2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8007EF30: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8007EF34: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007EF38: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8007EF3C: addiu       $t5, $t5, 0x6644
    ctx->r13 = ADD32(ctx->r13, 0X6644);
    // 0x8007EF40: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8007EF44: lw          $t8, 0x70($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X70);
    // 0x8007EF48: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EF4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007EF50: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8007EF54: jal         0x8001BD44
    // 0x8007EF58: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x8007EF58: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    after_2:
    // 0x8007EF5C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007EF60: addiu       $t9, $t9, 0x6648
    ctx->r25 = ADD32(ctx->r25, 0X6648);
    // 0x8007EF64: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EF68: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8007EF6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EF70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007EF74: jal         0x8001C0EC
    // 0x8007EF78: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8007EF78: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_3:
    // 0x8007EF7C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007EF80: addiu       $t0, $t0, 0x664C
    ctx->r8 = ADD32(ctx->r8, 0X664C);
    // 0x8007EF84: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EF88: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007EF8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007EF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007EF94: jal         0x8001C0EC
    // 0x8007EF98: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8007EF98: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_4:
    // 0x8007EF9C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFA0: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8007EFA4: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x8007EFA8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007EFB0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8007EFB4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007EFB8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFBC: nop

    // 0x8007EFC0: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x8007EFC4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007EFC8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFCC: nop

    // 0x8007EFD0: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x8007EFD4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007EFD8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFDC: nop

    // 0x8007EFE0: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x8007EFE4: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007EFE8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFEC: nop

    // 0x8007EFF0: swc1        $f10, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f10.u32l;
    // 0x8007EFF4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007EFF8: nop

    // 0x8007EFFC: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8007F000: nop

    // 0x8007F004: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x8007F008: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007F00C: nop

    // 0x8007F010: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x8007F014: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007F018: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007F01C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007F020: jal         0x80019448
    // 0x8007F024: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x8007F024: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x8007F028: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007F02C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007F030: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8007F034: b           L_8007F054
    // 0x8007F038: nop

        goto L_8007F054;
    // 0x8007F038: nop

L_8007F03C:
    // 0x8007F03C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007F040: nop

    // 0x8007F044: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007F048: slti        $at, $t4, 0xE
    ctx->r1 = SIGNED(ctx->r12) < 0XE ? 1 : 0;
    // 0x8007F04C: bne         $at, $zero, L_8007EEB0
    if (ctx->r1 != 0) {
        // 0x8007F050: sw          $t4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r12;
            goto L_8007EEB0;
    }
    // 0x8007F050: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_8007F054:
    // 0x8007F054: b           L_8007F05C
    // 0x8007F058: nop

        goto L_8007F05C;
    // 0x8007F058: nop

L_8007F05C:
    // 0x8007F05C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007F060: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007F064: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007F068: jr          $ra
    // 0x8007F06C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007F06C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800E07DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E07DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E07E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E07E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E07E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E07EC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E07F0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E07F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E07F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E07FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E0800: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E0804: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E0808: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E080C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E0810: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E0814: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E0818: nop

    // 0x800E081C: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800E0820: nop

    // 0x800E0824: bne         $t1, $zero, L_800E0844
    if (ctx->r9 != 0) {
        // 0x800E0828: nop
    
            goto L_800E0844;
    }
    // 0x800E0828: nop

    // 0x800E082C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0834: jal         0x8001BB34
    // 0x800E0838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800E0838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E083C: b           L_800E086C
    // 0x800E0840: nop

        goto L_800E086C;
    // 0x800E0840: nop

L_800E0844:
    // 0x800E0844: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E0848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E084C: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800E0850: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0854: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x800E0858: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800E085C: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800E0860: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800E0864: jal         0x8001BB34
    // 0x800E0868: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800E0868: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_800E086C:
    // 0x800E086C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E0870: nop

    // 0x800E0874: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E0878: nop

    // 0x800E087C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800E0880: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x800E0884: beq         $at, $zero, L_800E0918
    if (ctx->r1 == 0) {
        // 0x800E0888: nop
    
            goto L_800E0918;
    }
    // 0x800E0888: nop

    // 0x800E088C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E0890: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E0894: addu        $at, $at, $t7
    gpr jr_addend_800E08A0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E0898: lw          $t7, 0x53D0($at)
    ctx->r15 = ADD32(ctx->r1, 0X53D0);
    // 0x800E089C: nop

    // 0x800E08A0: jr          $t7
    // 0x800E08A4: nop

    switch (jr_addend_800E08A0 >> 2) {
        case 0: goto L_800E08A8; break;
        case 1: goto L_800E08B8; break;
        case 2: goto L_800E08C8; break;
        case 3: goto L_800E08D8; break;
        case 4: goto L_800E08E8; break;
        case 5: goto L_800E08F8; break;
        case 6: goto L_800E0908; break;
        default: switch_error(__func__, 0x800E08A0, 0x801153D0);
    }
    // 0x800E08A4: nop

L_800E08A8:
    // 0x800E08A8: jal         0x800DF9A8
    // 0x800E08AC: nop

    func_800DF9A8(rdram, ctx);
        goto after_2;
    // 0x800E08AC: nop

    after_2:
    // 0x800E08B0: b           L_800E0920
    // 0x800E08B4: nop

        goto L_800E0920;
    // 0x800E08B4: nop

L_800E08B8:
    // 0x800E08B8: jal         0x800DFC2C
    // 0x800E08BC: nop

    func_800DFC2C(rdram, ctx);
        goto after_3;
    // 0x800E08BC: nop

    after_3:
    // 0x800E08C0: b           L_800E0920
    // 0x800E08C4: nop

        goto L_800E0920;
    // 0x800E08C4: nop

L_800E08C8:
    // 0x800E08C8: jal         0x800DFDBC
    // 0x800E08CC: nop

    func_800DFDBC(rdram, ctx);
        goto after_4;
    // 0x800E08CC: nop

    after_4:
    // 0x800E08D0: b           L_800E0920
    // 0x800E08D4: nop

        goto L_800E0920;
    // 0x800E08D4: nop

L_800E08D8:
    // 0x800E08D8: jal         0x800E0154
    // 0x800E08DC: nop

    func_800E0154(rdram, ctx);
        goto after_5;
    // 0x800E08DC: nop

    after_5:
    // 0x800E08E0: b           L_800E0920
    // 0x800E08E4: nop

        goto L_800E0920;
    // 0x800E08E4: nop

L_800E08E8:
    // 0x800E08E8: jal         0x800E047C
    // 0x800E08EC: nop

    func_800E047C(rdram, ctx);
        goto after_6;
    // 0x800E08EC: nop

    after_6:
    // 0x800E08F0: b           L_800E0920
    // 0x800E08F4: nop

        goto L_800E0920;
    // 0x800E08F4: nop

L_800E08F8:
    // 0x800E08F8: jal         0x800E04AC
    // 0x800E08FC: nop

    func_800E04AC(rdram, ctx);
        goto after_7;
    // 0x800E08FC: nop

    after_7:
    // 0x800E0900: b           L_800E0920
    // 0x800E0904: nop

        goto L_800E0920;
    // 0x800E0904: nop

L_800E0908:
    // 0x800E0908: jal         0x800E06E0
    // 0x800E090C: nop

    func_800E06E0(rdram, ctx);
        goto after_8;
    // 0x800E090C: nop

    after_8:
    // 0x800E0910: b           L_800E0920
    // 0x800E0914: nop

        goto L_800E0920;
    // 0x800E0914: nop

L_800E0918:
    // 0x800E0918: b           L_800E0920
    // 0x800E091C: nop

        goto L_800E0920;
    // 0x800E091C: nop

L_800E0920:
    // 0x800E0920: b           L_800E0928
    // 0x800E0924: nop

        goto L_800E0928;
    // 0x800E0924: nop

L_800E0928:
    // 0x800E0928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E092C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E0930: jr          $ra
    // 0x800E0934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E0934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800906A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800906A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800906A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800906A8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800906AC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800906B0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800906B4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800906B8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800906BC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800906C0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800906C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800906C8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800906CC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800906D0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800906D4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800906D8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800906DC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800906E0: addiu       $a1, $a1, 0x1420
    ctx->r5 = ADD32(ctx->r5, 0X1420);
    // 0x800906E4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800906E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800906EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800906F0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800906F4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800906F8: jal         0x80027464
    // 0x800906FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800906FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090700: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090704: b           L_8009070C
    // 0x80090708: nop

        goto L_8009070C;
    // 0x80090708: nop

L_8009070C:
    // 0x8009070C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090714: jr          $ra
    // 0x80090718: nop

    return;
    // 0x80090718: nop

;}
RECOMP_FUNC void func_8005FAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FAB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005FABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FAC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8005FAC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8005FAC8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8005FACC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FAD0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8005FAD4: jal         0x8005FAA0
    // 0x8005FAD8: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    func_8005FAA0(rdram, ctx);
        goto after_0;
    // 0x8005FAD8: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x8005FADC: b           L_8005FAE4
    // 0x8005FAE0: nop

        goto L_8005FAE4;
    // 0x8005FAE0: nop

L_8005FAE4:
    // 0x8005FAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005FAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005FAEC: jr          $ra
    // 0x8005FAF0: nop

    return;
    // 0x8005FAF0: nop

;}
RECOMP_FUNC void func_800F5330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5330: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800F5334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800F5338: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800F533C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800F5340: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F5344: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F5348: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F534C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F5350: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F5354: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F5358: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F535C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F5360: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F5364: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F5368: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800F536C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F5370: nop

    // 0x800F5374: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F5378: nop

    // 0x800F537C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800F5380: jal         0x80014E80
    // 0x800F5384: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800F5384: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x800F5388: bne         $v0, $zero, L_800F539C
    if (ctx->r2 != 0) {
        // 0x800F538C: nop
    
            goto L_800F539C;
    }
    // 0x800F538C: nop

    // 0x800F5390: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F5394: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F5398: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_800F539C:
    // 0x800F539C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F53A0: nop

    // 0x800F53A4: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F53A8: nop

    // 0x800F53AC: bne         $t5, $zero, L_800F5494
    if (ctx->r13 != 0) {
        // 0x800F53B0: nop
    
            goto L_800F5494;
    }
    // 0x800F53B0: nop

    // 0x800F53B4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F53B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F53BC: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
    // 0x800F53C0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800F53C4: lui         $at, 0xC3D2
    ctx->r1 = S32(0XC3D2 << 16);
    // 0x800F53C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F53CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F53D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F53D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F53D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F53DC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F53E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F53E4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F53E8: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x800F53EC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800F53F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F53F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F53F8: nop

    // 0x800F53FC: swc1        $f6, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f6.u32l;
    // 0x800F5400: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800F5404: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F5408: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F540C: nop

    // 0x800F5410: swc1        $f8, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f8.u32l;
    // 0x800F5414: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800F5418: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F541C: nop

    // 0x800F5420: swc1        $f10, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f10.u32l;
    // 0x800F5424: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F5428: nop

    // 0x800F542C: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x800F5430: nop

    // 0x800F5434: swc1        $f16, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f16.u32l;
    // 0x800F5438: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F543C: nop

    // 0x800F5440: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800F5444: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F5448: nop

    // 0x800F544C: sh          $zero, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = 0;
    // 0x800F5450: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F5454: nop

    // 0x800F5458: sh          $zero, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = 0;
    // 0x800F545C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F5460: nop

    // 0x800F5464: sh          $zero, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = 0;
    // 0x800F5468: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800F546C: addiu       $t8, $t8, -0x4710
    ctx->r24 = ADD32(ctx->r24, -0X4710);
    // 0x800F5470: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F5474: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800F5478: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F547C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F5480: jal         0x8001C0EC
    // 0x800F5484: addiu       $a3, $zero, 0x6D
    ctx->r7 = ADD32(0, 0X6D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F5484: addiu       $a3, $zero, 0x6D
    ctx->r7 = ADD32(0, 0X6D);
    after_1:
    // 0x800F5488: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F548C: jal         0x8001BBDC
    // 0x800F5490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800F5490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800F5494:
    // 0x800F5494: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F5498: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F549C: nop

    // 0x800F54A0: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x800F54A4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F54A8: nop

    // 0x800F54AC: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800F54B0: nop

    // 0x800F54B4: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x800F54B8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800F54BC: nop

    // 0x800F54C0: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x800F54C4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F54C8: nop

    // 0x800F54CC: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800F54D0: nop

    // 0x800F54D4: beq         $t3, $zero, L_800F564C
    if (ctx->r11 == 0) {
        // 0x800F54D8: nop
    
            goto L_800F564C;
    }
    // 0x800F54D8: nop

    // 0x800F54DC: lh          $t4, 0xAA($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XAA);
    // 0x800F54E0: nop

    // 0x800F54E4: bne         $t4, $zero, L_800F564C
    if (ctx->r12 != 0) {
        // 0x800F54E8: nop
    
            goto L_800F564C;
    }
    // 0x800F54E8: nop

    // 0x800F54EC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F54F0: nop

    // 0x800F54F4: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800F54F8: nop

    // 0x800F54FC: bne         $t6, $zero, L_800F552C
    if (ctx->r14 != 0) {
        // 0x800F5500: nop
    
            goto L_800F552C;
    }
    // 0x800F5500: nop

    // 0x800F5504: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F5508: jal         0x8001BBDC
    // 0x800F550C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800F550C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800F5510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F551C: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    // 0x800F5520: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F5524: jal         0x800175F0
    // 0x800F5528: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x800F5528: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800F552C:
    // 0x800F552C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800F5530: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x800F5534: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F5538: lwc1        $f10, 0x48($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X48);
    // 0x800F553C: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800F5540: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800F5544: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800F5548: nop

    // 0x800F554C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F5550: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800F5554: nop

    // 0x800F5558: bc1f        L_800F558C
    if (!c1cs) {
        // 0x800F555C: nop
    
            goto L_800F558C;
    }
    // 0x800F555C: nop

    // 0x800F5560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F5564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F5568: jal         0x80029D04
    // 0x800F556C: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800F556C: nop

    after_5:
    // 0x800F5570: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F5574: nop

    // 0x800F5578: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800F557C: nop

    // 0x800F5580: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800F5584: b           L_800F564C
    // 0x800F5588: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
        goto L_800F564C;
    // 0x800F5588: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
L_800F558C:
    // 0x800F558C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F5590: jal         0x8001B44C
    // 0x800F5594: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800F5594: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x800F5598: beq         $v0, $zero, L_800F564C
    if (ctx->r2 == 0) {
        // 0x800F559C: nop
    
            goto L_800F564C;
    }
    // 0x800F559C: nop

    // 0x800F55A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800F55A4: jal         0x8001BBDC
    // 0x800F55A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x800F55A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x800F55AC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F55B0: nop

    // 0x800F55B4: lh          $t2, 0xAC($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XAC);
    // 0x800F55B8: nop

    // 0x800F55BC: bne         $t2, $zero, L_800F55EC
    if (ctx->r10 != 0) {
        // 0x800F55C0: nop
    
            goto L_800F55EC;
    }
    // 0x800F55C0: nop

    // 0x800F55C4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F55C8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x800F55CC: sh          $t4, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r12;
    // 0x800F55D0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F55D4: nop

    // 0x800F55D8: lh          $t8, 0xAC($t6)
    ctx->r24 = MEM_H(ctx->r14, 0XAC);
    // 0x800F55DC: nop

    // 0x800F55E0: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x800F55E4: b           L_800F561C
    // 0x800F55E8: sh          $t7, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r15;
        goto L_800F561C;
    // 0x800F55E8: sh          $t7, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r15;
L_800F55EC:
    // 0x800F55EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800F55F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F55F4: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x800F55F8: nop

    // 0x800F55FC: bne         $t1, $at, L_800F561C
    if (ctx->r9 != ctx->r1) {
        // 0x800F5600: nop
    
            goto L_800F561C;
    }
    // 0x800F5600: nop

    // 0x800F5604: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800F5608: nop

    // 0x800F560C: sh          $zero, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = 0;
    // 0x800F5610: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800F5614: nop

    // 0x800F5618: sh          $zero, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = 0;
L_800F561C:
    // 0x800F561C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800F5620: nop

    // 0x800F5624: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
    // 0x800F5628: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800F562C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800F5630: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800F5634: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800F5638: jal         0x80015538
    // 0x800F563C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x800F563C: nop

    after_8:
    // 0x800F5640: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800F5644: nop

    // 0x800F5648: swc1        $f0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f0.u32l;
L_800F564C:
    // 0x800F564C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800F5650: nop

    // 0x800F5654: lh          $t7, 0xAA($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XAA);
    // 0x800F5658: nop

    // 0x800F565C: beq         $t7, $zero, L_800F567C
    if (ctx->r15 == 0) {
        // 0x800F5660: nop
    
            goto L_800F567C;
    }
    // 0x800F5660: nop

    // 0x800F5664: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800F5668: nop

    // 0x800F566C: lh          $t0, 0xAA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XAA);
    // 0x800F5670: nop

    // 0x800F5674: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800F5678: sh          $t1, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r9;
L_800F567C:
    // 0x800F567C: b           L_800F5684
    // 0x800F5680: nop

        goto L_800F5684;
    // 0x800F5680: nop

L_800F5684:
    // 0x800F5684: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800F5688: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800F568C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800F5690: jr          $ra
    // 0x800F5694: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800F5694: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009C598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C598: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009C59C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009C5A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009C5A4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009C5A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009C5AC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009C5B0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009C5B4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009C5B8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009C5BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009C5C0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009C5C4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009C5C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009C5CC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009C5D0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009C5D4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009C5D8: addiu       $a1, $a1, 0x358C
    ctx->r5 = ADD32(ctx->r5, 0X358C);
    // 0x8009C5DC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009C5E0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009C5E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8009C5E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009C5EC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009C5F0: jal         0x80027464
    // 0x8009C5F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009C5F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009C5F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009C5FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009C600: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009C604: beq         $t1, $at, L_8009C734
    if (ctx->r9 == ctx->r1) {
        // 0x8009C608: nop
    
            goto L_8009C734;
    }
    // 0x8009C608: nop

    // 0x8009C60C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009C610: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8009C614: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009C618: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009C61C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009C620: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009C624: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009C628: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009C62C: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x8009C630: nop

    // 0x8009C634: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8009C638: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8009C63C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8009C640: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8009C644: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8009C648: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C64C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009C650: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8009C654: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C658: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009C65C: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8009C660: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009C664: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x8009C668: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8009C66C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009C670: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8009C674: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009C678: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8009C67C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009C680: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8009C684: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x8009C688: swc1        $f8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f8.u32l;
    // 0x8009C68C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8009C690: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8009C694: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009C698: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009C69C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009C6A0: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8009C6A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009C6A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009C6AC: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8009C6B0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8009C6B4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8009C6B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8009C6BC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8009C6C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009C6C4: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8009C6C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8009C6CC: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8009C6D0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8009C6D4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8009C6D8: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x8009C6DC: swc1        $f18, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f18.u32l;
    // 0x8009C6E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009C6E4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8009C6E8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8009C6EC: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x8009C6F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009C6F4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8009C6F8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x8009C6FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009C700: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x8009C704: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x8009C708: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8009C70C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009C710: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8009C714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009C718: lwc1        $f4, 0x8($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8009C71C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8009C720: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x8009C724: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009C728: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8009C72C: addu        $t7, $t5, $t1
    ctx->r15 = ADD32(ctx->r13, ctx->r9);
    // 0x8009C730: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
L_8009C734:
    // 0x8009C734: b           L_8009C73C
    // 0x8009C738: nop

        goto L_8009C73C;
    // 0x8009C738: nop

L_8009C73C:
    // 0x8009C73C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C740: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009C744: jr          $ra
    // 0x8009C748: nop

    return;
    // 0x8009C748: nop

;}
