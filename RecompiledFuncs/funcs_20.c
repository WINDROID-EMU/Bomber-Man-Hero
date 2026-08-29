#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80092310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092310: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092318: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009231C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092320: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092324: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092328: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009232C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092330: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092334: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092338: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009233C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092340: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092344: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092348: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009234C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092350: addiu       $a1, $a1, 0x169C
    ctx->r5 = ADD32(ctx->r5, 0X169C);
    // 0x80092354: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092358: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009235C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092360: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092364: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092368: jal         0x80027464
    // 0x8009236C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009236C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092370: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092374: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092378: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009237C: addiu       $a3, $a3, 0x3084
    ctx->r7 = ADD32(ctx->r7, 0X3084);
    // 0x80092380: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092384: jal         0x8001ABF4
    // 0x80092388: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80092388: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8009238C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092390: addiu       $a3, $a3, 0x3084
    ctx->r7 = ADD32(ctx->r7, 0X3084);
    // 0x80092394: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092398: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x8009239C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800923A0: jal         0x8001ABF4
    // 0x800923A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800923A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800923A8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800923AC: addiu       $a3, $a3, 0x3084
    ctx->r7 = ADD32(ctx->r7, 0X3084);
    // 0x800923B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800923B4: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800923B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800923BC: jal         0x8001ABF4
    // 0x800923C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800923C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x800923C4: b           L_800923CC
    // 0x800923C8: nop

        goto L_800923CC;
    // 0x800923C8: nop

L_800923CC:
    // 0x800923CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800923D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800923D4: jr          $ra
    // 0x800923D8: nop

    return;
    // 0x800923D8: nop

;}
RECOMP_FUNC void func_800B5778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5778: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800B577C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B5780: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B5784: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B5788: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B578C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5790: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B5794: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B5798: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B579C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B57A0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B57A4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800B57A8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800B57AC: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800B57B0: nop

    // 0x800B57B4: bne         $t0, $zero, L_800B57CC
    if (ctx->r8 != 0) {
        // 0x800B57B8: nop
    
            goto L_800B57CC;
    }
    // 0x800B57B8: nop

    // 0x800B57BC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800B57C0: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x800B57C4: b           L_800B57F8
    // 0x800B57C8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
        goto L_800B57F8;
    // 0x800B57C8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_800B57CC:
    // 0x800B57CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800B57D0: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x800B57D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B57D8: bne         $t3, $at, L_800B57F0
    if (ctx->r11 != ctx->r1) {
        // 0x800B57DC: nop
    
            goto L_800B57F0;
    }
    // 0x800B57DC: nop

    // 0x800B57E0: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800B57E4: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800B57E8: b           L_800B57F8
    // 0x800B57EC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
        goto L_800B57F8;
    // 0x800B57EC: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800B57F0:
    // 0x800B57F0: b           L_800B580C
    // 0x800B57F4: nop

        goto L_800B580C;
    // 0x800B57F4: nop

L_800B57F8:
    // 0x800B57F8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800B57FC: nop

    // 0x800B5800: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800B5804: b           L_800B580C
    // 0x800B5808: nop

        goto L_800B580C;
    // 0x800B5808: nop

L_800B580C:
    // 0x800B580C: jr          $ra
    // 0x800B5810: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800B5810: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8007E2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E2B8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8007E2BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E2C0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8007E2C4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x8007E2C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007E2CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007E2D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007E2D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007E2D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007E2DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007E2E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007E2E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007E2E8: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x8007E2EC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E2F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007E2F4: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x8007E2F8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E2FC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8007E300: jal         0x800682E0
    // 0x8007E304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800682E0(rdram, ctx);
        goto after_0;
    // 0x8007E304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8007E308: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007E30C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007E310: sw          $t2, -0x1DC8($at)
    MEM_W(-0X1DC8, ctx->r1) = ctx->r10;
    // 0x8007E314: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8007E318: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007E31C: sw          $t3, -0x1DC0($at)
    MEM_W(-0X1DC0, ctx->r1) = ctx->r11;
    // 0x8007E320: jal         0x80085884
    // 0x8007E324: nop

    func_80085884(rdram, ctx);
        goto after_1;
    // 0x8007E324: nop

    after_1:
    // 0x8007E328: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E32C: jal         0x8007897C
    // 0x8007E330: nop

    func_8007897C(rdram, ctx);
        goto after_2;
    // 0x8007E330: nop

    after_2:
    // 0x8007E334: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E338: jal         0x800799A8
    // 0x8007E33C: nop

    func_800799A8(rdram, ctx);
        goto after_3;
    // 0x8007E33C: nop

    after_3:
    // 0x8007E340: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E344: jal         0x80079AD8
    // 0x8007E348: nop

    func_80079AD8(rdram, ctx);
        goto after_4;
    // 0x8007E348: nop

    after_4:
    // 0x8007E34C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E350: jal         0x80078AEC
    // 0x8007E354: nop

    func_80078AEC(rdram, ctx);
        goto after_5;
    // 0x8007E354: nop

    after_5:
    // 0x8007E358: beq         $v0, $zero, L_8007E374
    if (ctx->r2 == 0) {
        // 0x8007E35C: nop
    
            goto L_8007E374;
    }
    // 0x8007E35C: nop

    // 0x8007E360: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E364: jal         0x800795C8
    // 0x8007E368: nop

    func_800795C8(rdram, ctx);
        goto after_6;
    // 0x8007E368: nop

    after_6:
    // 0x8007E36C: b           L_8007E444
    // 0x8007E370: nop

        goto L_8007E444;
    // 0x8007E370: nop

L_8007E374:
    // 0x8007E374: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E378: jal         0x80079D48
    // 0x8007E37C: nop

    func_80079D48(rdram, ctx);
        goto after_7;
    // 0x8007E37C: nop

    after_7:
    // 0x8007E380: beq         $v0, $zero, L_8007E390
    if (ctx->r2 == 0) {
        // 0x8007E384: nop
    
            goto L_8007E390;
    }
    // 0x8007E384: nop

    // 0x8007E388: b           L_8007E444
    // 0x8007E38C: nop

        goto L_8007E444;
    // 0x8007E38C: nop

L_8007E390:
    // 0x8007E390: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E394: nop

    // 0x8007E398: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8007E39C: nop

    // 0x8007E3A0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8007E3A4: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x8007E3A8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E3AC: nop

    // 0x8007E3B0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8007E3B4: nop

    // 0x8007E3B8: bne         $t8, $zero, L_8007E3D4
    if (ctx->r24 != 0) {
        // 0x8007E3BC: nop
    
            goto L_8007E3D4;
    }
    // 0x8007E3BC: nop

    // 0x8007E3C0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8007E3C4: jal         0x800795C8
    // 0x8007E3C8: nop

    func_800795C8(rdram, ctx);
        goto after_8;
    // 0x8007E3C8: nop

    after_8:
    // 0x8007E3CC: b           L_8007E444
    // 0x8007E3D0: nop

        goto L_8007E444;
    // 0x8007E3D0: nop

L_8007E3D4:
    // 0x8007E3D4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E3D8: nop

    // 0x8007E3DC: lh          $t0, 0xB2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB2);
    // 0x8007E3E0: nop

    // 0x8007E3E4: bne         $t0, $zero, L_8007E424
    if (ctx->r8 != 0) {
        // 0x8007E3E8: nop
    
            goto L_8007E424;
    }
    // 0x8007E3E8: nop

    // 0x8007E3EC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E3F0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8007E3F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007E3F8: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8007E3FC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8007E400: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007E404: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x8007E408: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8007E40C: jal         0x80081468
    // 0x8007E410: addiu       $a0, $zero, 0x2C5
    ctx->r4 = ADD32(0, 0X2C5);
    func_80081468(rdram, ctx);
        goto after_9;
    // 0x8007E410: addiu       $a0, $zero, 0x2C5
    ctx->r4 = ADD32(0, 0X2C5);
    after_9:
    // 0x8007E414: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E418: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x8007E41C: b           L_8007E43C
    // 0x8007E420: sh          $t2, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r10;
        goto L_8007E43C;
    // 0x8007E420: sh          $t2, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r10;
L_8007E424:
    // 0x8007E424: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E428: nop

    // 0x8007E42C: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x8007E430: nop

    // 0x8007E434: addiu       $t4, $t6, -0x1
    ctx->r12 = ADD32(ctx->r14, -0X1);
    // 0x8007E438: sh          $t4, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r12;
L_8007E43C:
    // 0x8007E43C: b           L_8007E444
    // 0x8007E440: nop

        goto L_8007E444;
    // 0x8007E440: nop

L_8007E444:
    // 0x8007E444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E448: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8007E44C: jr          $ra
    // 0x8007E450: nop

    return;
    // 0x8007E450: nop

;}
RECOMP_FUNC void func_800C5148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5148: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C514C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5150: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C5154: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C5158: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C515C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C5160: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C5164: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C5168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C516C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C5170: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5174: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5178: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C517C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C5180: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C5184: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C5188: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C518C: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C5190: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C5194: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C5198: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C519C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C51A0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C51A4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C51A8: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C51AC: nop

    // 0x800C51B0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800C51B4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C51B8: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C51BC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C51C0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C51C4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C51C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C51CC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C51D0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C51D4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C51D8: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C51DC: nop

    // 0x800C51E0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x800C51E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C51E8: nop

    // 0x800C51EC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C51F0: nop

    // 0x800C51F4: bne         $t7, $zero, L_800C539C
    if (ctx->r15 != 0) {
        // 0x800C51F8: nop
    
            goto L_800C539C;
    }
    // 0x800C51F8: nop

    // 0x800C51FC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C5200: nop

    // 0x800C5204: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C5208: nop

    // 0x800C520C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C5210: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C5214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5218: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800C521C: addiu       $t1, $t1, -0x7EF8
    ctx->r9 = ADD32(ctx->r9, -0X7EF8);
    // 0x800C5220: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5224: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800C5228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C522C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C5230: jal         0x8001C0EC
    // 0x800C5234: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C5234: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C5238: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C523C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C5240: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C5244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5248: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C524C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5250: jal         0x8001ABF4
    // 0x800C5254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C5254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C5258: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800C525C: addiu       $t2, $t2, -0x7EF8
    ctx->r10 = ADD32(ctx->r10, -0X7EF8);
    // 0x800C5260: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C5264: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C5268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C526C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C5270: jal         0x8001C0EC
    // 0x800C5274: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C5274: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_2:
    // 0x800C5278: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C527C: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C5280: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C5284: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C5288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C528C: jal         0x8001ABF4
    // 0x800C5290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C5290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C5294: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C5298: addiu       $t3, $t3, -0x7EF8
    ctx->r11 = ADD32(ctx->r11, -0X7EF8);
    // 0x800C529C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C52A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C52A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C52A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C52AC: jal         0x8001C0EC
    // 0x800C52B0: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C52B0: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_4:
    // 0x800C52B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C52B8: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C52BC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C52C0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C52C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C52C8: jal         0x8001ABF4
    // 0x800C52CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800C52CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800C52D0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C52D4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C52D8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C52DC: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C52E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C52E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C52E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C52EC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x800C52F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C52F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C52F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C52FC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C5300: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C5304: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C5308: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C530C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C5310: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5314: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C5318: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C531C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5320: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800C5324: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C5328: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800C532C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C5330: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x800C5334: lwc1        $f20, 0x44($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800C5338: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C533C: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x800C5340: swc1        $f20, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f20.u32l;
    // 0x800C5344: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C5348: nop

    // 0x800C534C: swc1        $f20, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f20.u32l;
    // 0x800C5350: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5354: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5358: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x800C535C: lui         $a2, 0x3F12
    ctx->r6 = S32(0X3F12 << 16);
    // 0x800C5360: ori         $a2, $a2, 0x492C
    ctx->r6 = ctx->r6 | 0X492C;
    // 0x800C5364: jal         0x80029EF8
    // 0x800C5368: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x800C5368: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    after_6:
    // 0x800C536C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C5370: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x800C5374: lui         $a2, 0x3F12
    ctx->r6 = S32(0X3F12 << 16);
    // 0x800C5378: ori         $a2, $a2, 0x492C
    ctx->r6 = ctx->r6 | 0X492C;
    // 0x800C537C: jal         0x80029EF8
    // 0x800C5380: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800C5380: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    after_7:
    // 0x800C5384: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5388: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x800C538C: lui         $a2, 0x3F12
    ctx->r6 = S32(0X3F12 << 16);
    // 0x800C5390: ori         $a2, $a2, 0x492C
    ctx->r6 = ctx->r6 | 0X492C;
    // 0x800C5394: jal         0x80029EF8
    // 0x800C5398: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    func_80029EF8(rdram, ctx);
        goto after_8;
    // 0x800C5398: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    after_8:
L_800C539C:
    // 0x800C539C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C53A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C53A4: jal         0x80029C40
    // 0x800C53A8: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800C53A8: nop

    after_9:
    // 0x800C53AC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C53B0: jal         0x80029C40
    // 0x800C53B4: nop

    func_80029C40(rdram, ctx);
        goto after_10;
    // 0x800C53B4: nop

    after_10:
    // 0x800C53B8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C53BC: jal         0x80029C40
    // 0x800C53C0: nop

    func_80029C40(rdram, ctx);
        goto after_11;
    // 0x800C53C0: nop

    after_11:
    // 0x800C53C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C53C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C53CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C53D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C53D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C53D8: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C53DC: jal         0x80029F58
    // 0x800C53E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800C53E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800C53E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C53E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C53EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C53F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C53F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C53F8: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C53FC: jal         0x80029F58
    // 0x800C5400: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_13;
    // 0x800C5400: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x800C5404: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C5408: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C540C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5410: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C5414: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C5418: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C541C: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C5420: jal         0x80029F58
    // 0x800C5424: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_14;
    // 0x800C5424: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x800C5428: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C542C: bne         $v0, $at, L_800C586C
    if (ctx->r2 != ctx->r1) {
        // 0x800C5430: nop
    
            goto L_800C586C;
    }
    // 0x800C5430: nop

    // 0x800C5434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C543C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C5440: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x800C5444: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C5448: jal         0x800175F0
    // 0x800C544C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x800C544C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x800C5450: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C5454: nop

    // 0x800C5458: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800C545C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C5460: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800C5464: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800C5468: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C546C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800C5470: lh          $t0, 0xB6($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XB6);
    // 0x800C5474: nop

    // 0x800C5478: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x800C547C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C5480: lh          $t1, 0x4D10($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4D10);
    // 0x800C5484: nop

    // 0x800C5488: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x800C548C: nop

    // 0x800C5490: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C5494: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x800C5498: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C549C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800C54A0: lh          $t2, 0xB6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XB6);
    // 0x800C54A4: nop

    // 0x800C54A8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800C54AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C54B0: lh          $t4, 0x4D18($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4D18);
    // 0x800C54B4: nop

    // 0x800C54B8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x800C54BC: nop

    // 0x800C54C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C54C4: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
    // 0x800C54C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C54CC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C54D0: nop

    // 0x800C54D4: swc1        $f8, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f8.u32l;
    // 0x800C54D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C54DC: nop

    // 0x800C54E0: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C54E4: nop

    // 0x800C54E8: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800C54EC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C54F0: nop

    // 0x800C54F4: swc1        $f20, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f20.u32l;
    // 0x800C54F8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C54FC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800C5500: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C5504: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C5508: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C550C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C5510: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C5514: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800C5518: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x800C551C: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800C5520: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800C5524: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800C5528: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x800C552C: lh          $t9, 0x4D10($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4D10);
    // 0x800C5530: nop

    // 0x800C5534: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800C5538: nop

    // 0x800C553C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800C5540: swc1        $f16, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f16.u32l;
    // 0x800C5544: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800C5548: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C554C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800C5550: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C5554: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C5558: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C555C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C5560: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C5564: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x800C5568: lh          $t1, 0xB6($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XB6);
    // 0x800C556C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800C5570: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x800C5574: addu        $t3, $t3, $t7
    ctx->r11 = ADD32(ctx->r11, ctx->r15);
    // 0x800C5578: lh          $t3, 0x4D18($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4D18);
    // 0x800C557C: nop

    // 0x800C5580: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800C5584: nop

    // 0x800C5588: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800C558C: swc1        $f4, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f4.u32l;
    // 0x800C5590: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800C5594: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800C5598: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x800C559C: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x800C55A0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800C55A4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C55A8: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C55AC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C55B0: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x800C55B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C55B8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C55BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C55C0: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800C55C4: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C55C8: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C55CC: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800C55D0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800C55D4: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x800C55D8: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800C55DC: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800C55E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C55E4: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x800C55E8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C55EC: nop

    // 0x800C55F0: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800C55F4: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800C55F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C55FC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800C5600: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5604: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C5608: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800C560C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5610: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800C5614: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x800C5618: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800C561C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C5620: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x800C5624: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C5628: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800C562C: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x800C5630: lh          $t2, 0xB6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XB6);
    // 0x800C5634: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800C5638: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x800C563C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C5640: lh          $t6, 0x4D10($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4D10);
    // 0x800C5644: nop

    // 0x800C5648: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x800C564C: nop

    // 0x800C5650: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C5654: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x800C5658: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C565C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800C5660: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C5664: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C5668: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C566C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C5670: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C5674: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800C5678: addu        $t3, $t1, $t7
    ctx->r11 = ADD32(ctx->r9, ctx->r15);
    // 0x800C567C: lh          $t8, 0xB6($t3)
    ctx->r24 = MEM_H(ctx->r11, 0XB6);
    // 0x800C5680: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800C5684: sll         $t4, $t8, 1
    ctx->r12 = S32(ctx->r24 << 1);
    // 0x800C5688: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800C568C: lh          $t2, 0x4D18($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4D18);
    // 0x800C5690: nop

    // 0x800C5694: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800C5698: nop

    // 0x800C569C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C56A0: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x800C56A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C56A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C56AC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800C56B0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C56B4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C56B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C56BC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C56C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C56C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C56C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C56CC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C56D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C56D4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800C56D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C56DC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C56E0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800C56E4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C56E8: addu        $t7, $t0, $t1
    ctx->r15 = ADD32(ctx->r8, ctx->r9);
    // 0x800C56EC: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x800C56F0: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800C56F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C56F8: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800C56FC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5700: nop

    // 0x800C5704: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x800C5708: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x800C570C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C5710: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x800C5714: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C5718: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C571C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800C5720: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C5724: nop

    // 0x800C5728: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800C572C: nop

    // 0x800C5730: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800C5734: sh          $t5, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = ctx->r13;
    // 0x800C5738: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C573C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C5740: lh          $t9, 0xB6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XB6);
    // 0x800C5744: nop

    // 0x800C5748: bne         $t9, $at, L_800C575C
    if (ctx->r25 != ctx->r1) {
        // 0x800C574C: nop
    
            goto L_800C575C;
    }
    // 0x800C574C: nop

    // 0x800C5750: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C5754: nop

    // 0x800C5758: sh          $zero, 0xB6($t0)
    MEM_H(0XB6, ctx->r8) = 0;
L_800C575C:
    // 0x800C575C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C5760: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C5764: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800C5768: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800C576C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C5770: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800C5774: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5778: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C577C: addu        $t4, $t7, $t8
    ctx->r12 = ADD32(ctx->r15, ctx->r24);
    // 0x800C5780: lh          $t3, 0xB6($t4)
    ctx->r11 = MEM_H(ctx->r12, 0XB6);
    // 0x800C5784: nop

    // 0x800C5788: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800C578C: sh          $t5, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r13;
    // 0x800C5790: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800C5794: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C5798: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800C579C: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800C57A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C57A4: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800C57A8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C57AC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800C57B0: lh          $t9, 0x4206($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4206);
    // 0x800C57B4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C57B8: bne         $t9, $at, L_800C57E4
    if (ctx->r25 != ctx->r1) {
        // 0x800C57BC: nop
    
            goto L_800C57E4;
    }
    // 0x800C57BC: nop

    // 0x800C57C0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800C57C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C57C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C57CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C57D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C57D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C57D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C57DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C57E0: sh          $zero, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = 0;
L_800C57E4:
    // 0x800C57E4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C57E8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800C57EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C57F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C57F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C57F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C57FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C5800: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800C5804: addu        $t5, $t8, $t3
    ctx->r13 = ADD32(ctx->r24, ctx->r11);
    // 0x800C5808: lh          $t4, 0xB6($t5)
    ctx->r12 = MEM_H(ctx->r13, 0XB6);
    // 0x800C580C: nop

    // 0x800C5810: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x800C5814: sh          $t2, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r10;
    // 0x800C5818: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C581C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C5820: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800C5824: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800C5828: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C582C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800C5830: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C5834: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C5838: lh          $t0, 0x4206($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4206);
    // 0x800C583C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C5840: bne         $t0, $at, L_800C586C
    if (ctx->r8 != ctx->r1) {
        // 0x800C5844: nop
    
            goto L_800C586C;
    }
    // 0x800C5844: nop

    // 0x800C5848: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800C584C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5850: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x800C5854: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800C5858: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C585C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x800C5860: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5864: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C5868: sh          $zero, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = 0;
L_800C586C:
    // 0x800C586C: b           L_800C5874
    // 0x800C5870: nop

        goto L_800C5874;
    // 0x800C5870: nop

L_800C5874:
    // 0x800C5874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C5878: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C587C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C5880: jr          $ra
    // 0x800C5884: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C5884: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80097438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009743C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097440: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80097444: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097448: nop

    // 0x8009744C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80097450: nop

    // 0x80097454: bne         $t7, $zero, L_800974A8
    if (ctx->r15 != 0) {
        // 0x80097458: nop
    
            goto L_800974A8;
    }
    // 0x80097458: nop

    // 0x8009745C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80097460: nop

    // 0x80097464: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80097468: nop

    // 0x8009746C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80097470: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80097474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097478: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009747C: addiu       $t1, $t1, 0x6938
    ctx->r9 = ADD32(ctx->r9, 0X6938);
    // 0x80097480: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097484: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80097488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009748C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80097490: jal         0x8001C0EC
    // 0x80097494: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80097494: addiu       $a3, $zero, 0x1AC
    ctx->r7 = ADD32(0, 0X1AC);
    after_0:
    // 0x80097498: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009749C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800974A0: jal         0x8001BBDC
    // 0x800974A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800974A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800974A8:
    // 0x800974A8: b           L_800974B0
    // 0x800974AC: nop

        goto L_800974B0;
    // 0x800974AC: nop

L_800974B0:
    // 0x800974B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800974B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800974B8: jr          $ra
    // 0x800974BC: nop

    return;
    // 0x800974BC: nop

;}
RECOMP_FUNC void func_800BC684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC684: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BC688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BC68C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BC690: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BC694: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BC698: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC69C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC6A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BC6A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC6A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC6AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BC6B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BC6B4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BC6B8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC6BC: nop

    // 0x800BC6C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BC6C4: nop

    // 0x800BC6C8: bne         $t1, $zero, L_800BC6FC
    if (ctx->r9 != 0) {
        // 0x800BC6CC: nop
    
            goto L_800BC6FC;
    }
    // 0x800BC6CC: nop

    // 0x800BC6D0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC6D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BC6D8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BC6DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BC6E0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC6E4: nop

    // 0x800BC6E8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BC6EC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BC6F0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BC6F4: nop

    // 0x800BC6F8: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800BC6FC:
    // 0x800BC6FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC700: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC704: jal         0x80029C40
    // 0x800BC708: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BC708: nop

    after_0:
    // 0x800BC70C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC714: jal         0x80029D04
    // 0x800BC718: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BC718: nop

    after_1:
    // 0x800BC71C: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
L_800BC720:
    // 0x800BC720: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x800BC724: jal         0x800BC134
    // 0x800BC728: nop

    func_800BC134(rdram, ctx);
        goto after_2;
    // 0x800BC728: nop

    after_2:
    // 0x800BC72C: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x800BC730: nop

    // 0x800BC734: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800BC738: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x800BC73C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x800BC740: slti        $at, $t9, 0x8
    ctx->r1 = SIGNED(ctx->r25) < 0X8 ? 1 : 0;
    // 0x800BC744: bne         $at, $zero, L_800BC720
    if (ctx->r1 != 0) {
        // 0x800BC748: sb          $t7, 0x1B($sp)
        MEM_B(0X1B, ctx->r29) = ctx->r15;
            goto L_800BC720;
    }
    // 0x800BC748: sb          $t7, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r15;
    // 0x800BC74C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC750: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC754: jal         0x8002B0E4
    // 0x800BC758: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800BC758: nop

    after_3:
    // 0x800BC75C: b           L_800BC764
    // 0x800BC760: nop

        goto L_800BC764;
    // 0x800BC760: nop

L_800BC764:
    // 0x800BC764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BC768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BC76C: jr          $ra
    // 0x800BC770: nop

    return;
    // 0x800BC770: nop

;}
RECOMP_FUNC void func_800E04AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E04AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E04B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E04B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E04B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E04BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E04C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E04C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E04C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E04CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E04D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E04D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E04D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E04DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E04E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E04E4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E04E8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E04EC: nop

    // 0x800E04F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E04F4: nop

    // 0x800E04F8: bne         $t1, $zero, L_800E055C
    if (ctx->r9 != 0) {
        // 0x800E04FC: nop
    
            goto L_800E055C;
    }
    // 0x800E04FC: nop

    // 0x800E0500: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0504: nop

    // 0x800E0508: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E050C: nop

    // 0x800E0510: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E0514: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E0518: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E051C: nop

    // 0x800E0520: lwc1        $f4, 0x28($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X28);
    // 0x800E0524: nop

    // 0x800E0528: swc1        $f4, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f4.u32l;
    // 0x800E052C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0534: jal         0x8001BBDC
    // 0x800E0538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800E0538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800E053C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0540: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0544: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E0548: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E054C: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800E0550: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E0554: jal         0x8001ABF4
    // 0x800E0558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E0558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E055C:
    // 0x800E055C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E0560: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0564: nop

    // 0x800E0568: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800E056C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0570: nop

    // 0x800E0574: lwc1        $f20, 0x2C($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800E0578: nop

    // 0x800E057C: swc1        $f20, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f20.u32l;
    // 0x800E0580: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0584: nop

    // 0x800E0588: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800E058C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0590: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E0594: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800E0598: nop

    // 0x800E059C: bne         $t0, $at, L_800E06C4
    if (ctx->r8 != ctx->r1) {
        // 0x800E05A0: nop
    
            goto L_800E06C4;
    }
    // 0x800E05A0: nop

    // 0x800E05A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E05A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E05AC: jal         0x8001BBDC
    // 0x800E05B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800E05B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E05B4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E05B8: nop

    // 0x800E05BC: lwc1        $f8, 0xD4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x800E05C0: nop

    // 0x800E05C4: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x800E05C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E05CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E05D0: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800E05D4: nop

    // 0x800E05D8: bne         $t4, $at, L_800E06A0
    if (ctx->r12 != ctx->r1) {
        // 0x800E05DC: nop
    
            goto L_800E06A0;
    }
    // 0x800E05DC: nop

    // 0x800E05E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E05E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E05E8: jal         0x8001B4AC
    // 0x800E05EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E05EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E05F0: beq         $v0, $zero, L_800E0680
    if (ctx->r2 == 0) {
        // 0x800E05F4: nop
    
            goto L_800E0680;
    }
    // 0x800E05F4: nop

    // 0x800E05F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E05FC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800E0600: addiu       $t2, $t2, -0x700C
    ctx->r10 = ADD32(ctx->r10, -0X700C);
    // 0x800E0604: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0608: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800E060C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0610: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E0614: jal         0x8001C0EC
    // 0x800E0618: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800E0618: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_4:
    // 0x800E061C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E0620: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0624: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0628: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E062C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E0630: jal         0x8001ABF4
    // 0x800E0634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800E0634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800E0638: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E063C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E0640: addiu       $a3, $a3, -0x6E10
    ctx->r7 = ADD32(ctx->r7, -0X6E10);
    // 0x800E0644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E0648: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E064C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E0650: jal         0x8001ABF4
    // 0x800E0654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800E0654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800E0658: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E065C: nop

    // 0x800E0660: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800E0664: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0668: nop

    // 0x800E066C: sh          $zero, 0xB2($t6)
    MEM_H(0XB2, ctx->r14) = 0;
    // 0x800E0670: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0674: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800E0678: b           L_800E0698
    // 0x800E067C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
        goto L_800E0698;
    // 0x800E067C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
L_800E0680:
    // 0x800E0680: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0684: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800E0688: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E068C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800E0690: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800E0694: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_800E0698:
    // 0x800E0698: b           L_800E06C4
    // 0x800E069C: nop

        goto L_800E06C4;
    // 0x800E069C: nop

L_800E06A0:
    // 0x800E06A0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E06A4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800E06A8: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800E06AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E06B0: nop

    // 0x800E06B4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800E06B8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800E06BC: nop

    // 0x800E06C0: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800E06C4:
    // 0x800E06C4: b           L_800E06CC
    // 0x800E06C8: nop

        goto L_800E06CC;
    // 0x800E06C8: nop

L_800E06CC:
    // 0x800E06CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E06D0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E06D4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E06D8: jr          $ra
    // 0x800E06DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800E06DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800B36A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B36A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B36A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B36AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B36B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B36B4: jal         0x8002B0E4
    // 0x800B36B8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800B36B8: nop

    after_0:
    // 0x800B36BC: b           L_800B36C4
    // 0x800B36C0: nop

        goto L_800B36C4;
    // 0x800B36C0: nop

L_800B36C4:
    // 0x800B36C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B36C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B36CC: jr          $ra
    // 0x800B36D0: nop

    return;
    // 0x800B36D0: nop

;}
RECOMP_FUNC void func_800D4A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4A10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4A14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D4A18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D4A1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4A20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4A24: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D4A28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4A30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4A34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4A38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4A3C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D4A40: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D4A44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D4A48: beq         $s0, $at, L_800D4A64
    if (ctx->r16 == ctx->r1) {
        // 0x800D4A4C: nop
    
            goto L_800D4A64;
    }
    // 0x800D4A4C: nop

    // 0x800D4A50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D4A54: beq         $s0, $at, L_800D4A74
    if (ctx->r16 == ctx->r1) {
        // 0x800D4A58: nop
    
            goto L_800D4A74;
    }
    // 0x800D4A58: nop

    // 0x800D4A5C: b           L_800D4A84
    // 0x800D4A60: nop

        goto L_800D4A84;
    // 0x800D4A60: nop

L_800D4A64:
    // 0x800D4A64: jal         0x800D464C
    // 0x800D4A68: nop

    func_800D464C(rdram, ctx);
        goto after_0;
    // 0x800D4A68: nop

    after_0:
    // 0x800D4A6C: b           L_800D4A8C
    // 0x800D4A70: nop

        goto L_800D4A8C;
    // 0x800D4A70: nop

L_800D4A74:
    // 0x800D4A74: jal         0x800D47C0
    // 0x800D4A78: nop

    func_800D47C0(rdram, ctx);
        goto after_1;
    // 0x800D4A78: nop

    after_1:
    // 0x800D4A7C: b           L_800D4A8C
    // 0x800D4A80: nop

        goto L_800D4A8C;
    // 0x800D4A80: nop

L_800D4A84:
    // 0x800D4A84: b           L_800D4A8C
    // 0x800D4A88: nop

        goto L_800D4A8C;
    // 0x800D4A88: nop

L_800D4A8C:
    // 0x800D4A8C: b           L_800D4A94
    // 0x800D4A90: nop

        goto L_800D4A94;
    // 0x800D4A90: nop

L_800D4A94:
    // 0x800D4A94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D4A9C: jr          $ra
    // 0x800D4AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D4AA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A30E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A30E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A30EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A30F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A30F4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A30F8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A30FC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A3100: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3104: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A3108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A310C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3110: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A3114: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A3118: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A311C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A3120: nop

    // 0x800A3124: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A3128: nop

    // 0x800A312C: bne         $t1, $zero, L_800A3194
    if (ctx->r9 != 0) {
        // 0x800A3130: nop
    
            goto L_800A3194;
    }
    // 0x800A3130: nop

    // 0x800A3134: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A3138: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A313C: nop

    // 0x800A3140: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x800A3144: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A3148: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A314C: nop

    // 0x800A3150: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x800A3154: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A3158: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A315C: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800A3160: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A3164: nop

    // 0x800A3168: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800A316C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3170: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3174: jal         0x80029D04
    // 0x800A3178: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x800A3178: nop

    after_0:
    // 0x800A317C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3180: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3184: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800A3188: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x800A318C: jal         0x80029EF8
    // 0x800A3190: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800A3190: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
L_800A3194:
    // 0x800A3194: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3198: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A319C: jal         0x80029C40
    // 0x800A31A0: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A31A0: nop

    after_2:
    // 0x800A31A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A31A8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A31AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A31B0: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A31B4: jal         0x80015538
    // 0x800A31B8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A31B8: nop

    after_3:
    // 0x800A31BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A31C0: nop

    // 0x800A31C4: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800A31C8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A31CC: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x800A31D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A31D4: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    // 0x800A31D8: jal         0x80015538
    // 0x800A31DC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800A31DC: nop

    after_4:
    // 0x800A31E0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A31E4: nop

    // 0x800A31E8: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x800A31EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A31F0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A31F4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A31F8: lwc1        $f8, 0x18($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X18);
    // 0x800A31FC: nop

    // 0x800A3200: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800A3204: nop

    // 0x800A3208: bc1f        L_800A3238
    if (!c1cs) {
        // 0x800A320C: nop
    
            goto L_800A3238;
    }
    // 0x800A320C: nop

    // 0x800A3210: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3214: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3218: jal         0x8001BB34
    // 0x800A321C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800A321C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A3220: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3224: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3228: jal         0x8002B0E4
    // 0x800A322C: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800A322C: nop

    after_6:
    // 0x800A3230: b           L_800A32D4
    // 0x800A3234: nop

        goto L_800A32D4;
    // 0x800A3234: nop

L_800A3238:
    // 0x800A3238: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A323C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3240: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3244: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A3248: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A324C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A3250: jal         0x80029F58
    // 0x800A3254: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800A3254: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800A3258: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A325C: bne         $v0, $at, L_800A328C
    if (ctx->r2 != ctx->r1) {
        // 0x800A3260: nop
    
            goto L_800A328C;
    }
    // 0x800A3260: nop

    // 0x800A3264: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3268: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A326C: jal         0x8001BB34
    // 0x800A3270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x800A3270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800A3274: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3278: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A327C: jal         0x8002B0E4
    // 0x800A3280: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800A3280: nop

    after_9:
    // 0x800A3284: b           L_800A32D4
    // 0x800A3288: nop

        goto L_800A32D4;
    // 0x800A3288: nop

L_800A328C:
    // 0x800A328C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3294: jal         0x80028FA0
    // 0x800A3298: nop

    func_80028FA0(rdram, ctx);
        goto after_10;
    // 0x800A3298: nop

    after_10:
    // 0x800A329C: beq         $v0, $zero, L_800A32CC
    if (ctx->r2 == 0) {
        // 0x800A32A0: nop
    
            goto L_800A32CC;
    }
    // 0x800A32A0: nop

    // 0x800A32A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A32A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A32AC: jal         0x8001BB34
    // 0x800A32B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_11;
    // 0x800A32B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800A32B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A32B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A32BC: jal         0x8002B0E4
    // 0x800A32C0: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x800A32C0: nop

    after_12:
    // 0x800A32C4: b           L_800A32D4
    // 0x800A32C8: nop

        goto L_800A32D4;
    // 0x800A32C8: nop

L_800A32CC:
    // 0x800A32CC: b           L_800A32D4
    // 0x800A32D0: nop

        goto L_800A32D4;
    // 0x800A32D0: nop

L_800A32D4:
    // 0x800A32D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A32D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A32DC: jr          $ra
    // 0x800A32E0: nop

    return;
    // 0x800A32E0: nop

;}
RECOMP_FUNC void func_800C0964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0964: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C0968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C096C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C0970: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C0974: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C0978: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C097C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C0980: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C0984: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C0988: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C098C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C0990: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C0994: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C0998: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C099C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C09A0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C09A4: addiu       $a1, $a1, 0x3E14
    ctx->r5 = ADD32(ctx->r5, 0X3E14);
    // 0x800C09A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C09AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C09B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C09B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C09B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C09BC: jal         0x80027464
    // 0x800C09C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C09C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C09C4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800C09C8: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800C09CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C09D0: beq         $t1, $at, L_800C0B60
    if (ctx->r9 == ctx->r1) {
        // 0x800C09D4: nop
    
            goto L_800C0B60;
    }
    // 0x800C09D4: nop

    // 0x800C09D8: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800C09DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C09E0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C09E4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C09E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C09EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C09F0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C09F4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C09F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C09FC: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800C0A00: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800C0A04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0A08: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800C0A0C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C0A10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C0A14: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C0A18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0A1C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C0A20: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800C0A24: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x800C0A28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0A2C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800C0A30: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C0A34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C0A38: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800C0A3C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C0A40: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C0A44: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800C0A48: sh          $t8, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r24;
    // 0x800C0A4C: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800C0A50: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0A54: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C0A58: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C0A5C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C0A60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C0A64: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C0A68: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C0A6C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800C0A70: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x800C0A74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0A78: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800C0A7C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800C0A80: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C0A84: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x800C0A88: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C0A8C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C0A90: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800C0A94: sh          $t3, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r11;
    // 0x800C0A98: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800C0A9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0AA0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800C0AA4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C0AA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C0AAC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800C0AB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0AB4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C0AB8: sb          $zero, 0x4252($at)
    MEM_B(0X4252, ctx->r1) = 0;
    // 0x800C0ABC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800C0AC0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0AC4: addiu       $a3, $a3, 0x7F44
    ctx->r7 = ADD32(ctx->r7, 0X7F44);
    // 0x800C0AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0ACC: jal         0x8001ABF4
    // 0x800C0AD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C0AD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C0AD4: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800C0AD8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0ADC: addiu       $a3, $a3, 0x7F60
    ctx->r7 = ADD32(ctx->r7, 0X7F60);
    // 0x800C0AE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C0AE4: jal         0x8001ABF4
    // 0x800C0AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800C0AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800C0AEC: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800C0AF0: lw          $t9, 0x5100($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5100);
    // 0x800C0AF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C0AF8: lh          $t8, 0xA($t9)
    ctx->r24 = MEM_H(ctx->r25, 0XA);
    // 0x800C0AFC: nop

    // 0x800C0B00: bne         $t8, $at, L_800C0B60
    if (ctx->r24 != ctx->r1) {
        // 0x800C0B04: nop
    
            goto L_800C0B60;
    }
    // 0x800C0B04: nop

    // 0x800C0B08: lh          $t0, 0x26($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X26);
    // 0x800C0B0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C0B10: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C0B14: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C0B18: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C0B1C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C0B20: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C0B24: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C0B28: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800C0B2C: sh          $t6, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r14;
    // 0x800C0B30: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800C0B34: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0B38: addiu       $a3, $a3, 0x7FB4
    ctx->r7 = ADD32(ctx->r7, 0X7FB4);
    // 0x800C0B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C0B40: jal         0x8001ABF4
    // 0x800C0B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C0B44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C0B48: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800C0B4C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C0B50: addiu       $a3, $a3, 0x7FD0
    ctx->r7 = ADD32(ctx->r7, 0X7FD0);
    // 0x800C0B54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800C0B58: jal         0x8001ABF4
    // 0x800C0B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800C0B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_800C0B60:
    // 0x800C0B60: b           L_800C0B68
    // 0x800C0B64: nop

        goto L_800C0B68;
    // 0x800C0B64: nop

L_800C0B68:
    // 0x800C0B68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0B6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C0B70: jr          $ra
    // 0x800C0B74: nop

    return;
    // 0x800C0B74: nop

;}
RECOMP_FUNC void func_800650F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800650F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800650F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800650F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800650FC: lw          $t6, 0x7964($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7964);
    // 0x80065100: nop

    // 0x80065104: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80065108: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8006510C:
    // 0x8006510C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80065110: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065114: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80065118: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8006511C: sh          $zero, 0x65C0($at)
    MEM_H(0X65C0, ctx->r1) = 0;
    // 0x80065120: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80065124: nop

    // 0x80065128: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8006512C: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x80065130: bne         $at, $zero, L_8006510C
    if (ctx->r1 != 0) {
        // 0x80065134: sw          $t0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r8;
            goto L_8006510C;
    }
    // 0x80065134: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80065138: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8006513C:
    // 0x8006513C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80065140: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80065144: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80065148: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8006514C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80065150: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80065154: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80065158: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006515C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80065160: swc1        $f4, 0x6498($at)
    MEM_W(0X6498, ctx->r1) = ctx->f4.u32l;
    // 0x80065164: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80065168: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8006516C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80065170: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80065174: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80065178: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8006517C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80065180: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065184: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80065188: swc1        $f6, 0x649C($at)
    MEM_W(0X649C, ctx->r1) = ctx->f6.u32l;
    // 0x8006518C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80065190: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80065194: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80065198: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8006519C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800651A0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800651A4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800651A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800651AC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800651B0: swc1        $f8, 0x64A0($at)
    MEM_W(0X64A0, ctx->r1) = ctx->f8.u32l;
    // 0x800651B4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800651B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800651BC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800651C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800651C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800651C8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800651CC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800651D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800651D4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800651D8: swc1        $f10, 0x64A4($at)
    MEM_W(0X64A4, ctx->r1) = ctx->f10.u32l;
    // 0x800651DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800651E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800651E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800651E8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800651EC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800651F0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800651F4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800651F8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800651FC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80065200: sw          $t9, 0x64A8($at)
    MEM_W(0X64A8, ctx->r1) = ctx->r25;
    // 0x80065204: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80065208: nop

    // 0x8006520C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80065210: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80065214: bne         $at, $zero, L_8006513C
    if (ctx->r1 != 0) {
        // 0x80065218: sw          $t3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r11;
            goto L_8006513C;
    }
    // 0x80065218: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8006521C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80065220: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x80065224: sw          $zero, 0xA0($t4)
    MEM_W(0XA0, ctx->r12) = 0;
    // 0x80065228: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006522C: addiu       $t5, $t5, -0x3560
    ctx->r13 = ADD32(ctx->r13, -0X3560);
    // 0x80065230: sw          $zero, 0xA8($t5)
    MEM_W(0XA8, ctx->r13) = 0;
    // 0x80065234: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80065238: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x8006523C: sw          $zero, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = 0;
    // 0x80065240: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80065244: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x80065248: sw          $zero, 0xB8($t7)
    MEM_W(0XB8, ctx->r15) = 0;
    // 0x8006524C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80065250: nop

    // 0x80065254: beq         $t8, $zero, L_80065494
    if (ctx->r24 == 0) {
        // 0x80065258: nop
    
            goto L_80065494;
    }
    // 0x80065258: nop

    // 0x8006525C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_80065260:
    // 0x80065260: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80065264: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80065268: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8006526C: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x80065270: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80065274: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80065278: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006527C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80065280: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x80065284: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065288: bne         $t3, $at, L_80065298
    if (ctx->r11 != ctx->r1) {
        // 0x8006528C: nop
    
            goto L_80065298;
    }
    // 0x8006528C: nop

    // 0x80065290: b           L_80065494
    // 0x80065294: nop

        goto L_80065494;
    // 0x80065294: nop

L_80065298:
    // 0x80065298: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8006529C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800652A0: lb          $t5, 0x0($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X0);
    // 0x800652A4: nop

    // 0x800652A8: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x800652AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800652B0: lh          $t7, 0x65C0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X65C0);
    // 0x800652B4: nop

    // 0x800652B8: bne         $t7, $zero, L_80065358
    if (ctx->r15 != 0) {
        // 0x800652BC: nop
    
            goto L_80065358;
    }
    // 0x800652BC: nop

    // 0x800652C0: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x800652C4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_800652C8:
    // 0x800652C8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800652CC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800652D0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x800652D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800652D8: lw          $t1, -0x3560($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3560);
    // 0x800652DC: nop

    // 0x800652E0: bne         $t1, $zero, L_80065338
    if (ctx->r9 != 0) {
        // 0x800652E4: nop
    
            goto L_80065338;
    }
    // 0x800652E4: nop

    // 0x800652E8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800652EC: lui         $t5, 0x8010
    ctx->r13 = S32(0X8010 << 16);
    // 0x800652F0: lb          $t3, 0x0($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X0);
    // 0x800652F4: addiu       $t5, $t5, 0x4C20
    ctx->r13 = ADD32(ctx->r13, 0X4C20);
    // 0x800652F8: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x800652FC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80065300: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80065304: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x80065308: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8006530C: jal         0x8001EA68
    // 0x80065310: nop

    DecompressFile(rdram, ctx);
        goto after_0;
    // 0x80065310: nop

    after_0:
    // 0x80065314: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80065318: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8006531C: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x80065320: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065324: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80065328: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8006532C: sh          $t7, 0x65C0($at)
    MEM_H(0X65C0, ctx->r1) = ctx->r15;
    // 0x80065330: b           L_80065350
    // 0x80065334: nop

        goto L_80065350;
    // 0x80065334: nop

L_80065338:
    // 0x80065338: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8006533C: nop

    // 0x80065340: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80065344: slti        $at, $t2, 0x18
    ctx->r1 = SIGNED(ctx->r10) < 0X18 ? 1 : 0;
    // 0x80065348: bne         $at, $zero, L_800652C8
    if (ctx->r1 != 0) {
        // 0x8006534C: sw          $t2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r10;
            goto L_800652C8;
    }
    // 0x8006534C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_80065350:
    // 0x80065350: b           L_8006537C
    // 0x80065354: nop

        goto L_8006537C;
    // 0x80065354: nop

L_80065358:
    // 0x80065358: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8006535C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80065360: lb          $t4, 0x0($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X0);
    // 0x80065364: nop

    // 0x80065368: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8006536C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80065370: lh          $t6, 0x65C0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X65C0);
    // 0x80065374: nop

    // 0x80065378: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8006537C:
    // 0x8006537C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80065380: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80065384: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80065388: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8006538C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80065390: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80065394: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80065398: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006539C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800653A0: swc1        $f16, 0x6498($at)
    MEM_W(0X6498, ctx->r1) = ctx->f16.u32l;
    // 0x800653A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800653A8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800653AC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800653B0: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x800653B4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800653B8: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x800653BC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800653C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800653C4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800653C8: swc1        $f18, 0x649C($at)
    MEM_W(0X649C, ctx->r1) = ctx->f18.u32l;
    // 0x800653CC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800653D0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800653D4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800653D8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800653DC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800653E0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800653E4: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x800653E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800653EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800653F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800653F4: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x800653F8: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x800653FC: lwc1        $f4, 0x2C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80065400: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80065404: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065408: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8006540C: swc1        $f4, 0x64A0($at)
    MEM_W(0X64A0, ctx->r1) = ctx->f4.u32l;
    // 0x80065410: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80065414: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80065418: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006541C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80065420: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80065424: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80065428: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8006542C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80065430: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80065434: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80065438: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8006543C: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80065440: lwc1        $f6, 0x30($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X30);
    // 0x80065444: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80065448: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006544C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80065450: swc1        $f6, 0x64A4($at)
    MEM_W(0X64A4, ctx->r1) = ctx->f6.u32l;
    // 0x80065454: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80065458: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8006545C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80065460: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80065464: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80065468: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8006546C: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80065470: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065474: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80065478: sw          $t1, 0x64A8($at)
    MEM_W(0X64A8, ctx->r1) = ctx->r9;
    // 0x8006547C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80065480: nop

    // 0x80065484: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x80065488: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x8006548C: bne         $at, $zero, L_80065260
    if (ctx->r1 != 0) {
        // 0x80065490: sw          $t5, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r13;
            goto L_80065260;
    }
    // 0x80065490: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80065494:
    // 0x80065494: b           L_8006549C
    // 0x80065498: nop

        goto L_8006549C;
    // 0x80065498: nop

L_8006549C:
    // 0x8006549C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800654A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800654A4: jr          $ra
    // 0x800654A8: nop

    return;
    // 0x800654A8: nop

;}
RECOMP_FUNC void func_800DA1EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA1EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DA1F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DA1F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800DA1F8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800DA1FC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800DA200: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800DA204: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800DA208: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800DA20C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800DA210: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800DA214: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800DA218: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800DA21C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DA220: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800DA224: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800DA228: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800DA22C: addiu       $a1, $a1, 0x42A0
    ctx->r5 = ADD32(ctx->r5, 0X42A0);
    // 0x800DA230: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DA234: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800DA238: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800DA23C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800DA240: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800DA244: jal         0x80027464
    // 0x800DA248: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800DA248: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800DA24C: b           L_800DA254
    // 0x800DA250: nop

        goto L_800DA254;
    // 0x800DA250: nop

L_800DA254:
    // 0x800DA254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DA258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DA25C: jr          $ra
    // 0x800DA260: nop

    return;
    // 0x800DA260: nop

;}
RECOMP_FUNC void func_800966D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800966D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800966D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800966DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800966E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800966E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800966E8: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800966EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800966F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800966F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800966F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800966FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096700: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80096704: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80096708: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009670C: beq         $s0, $at, L_80096728
    if (ctx->r16 == ctx->r1) {
        // 0x80096710: nop
    
            goto L_80096728;
    }
    // 0x80096710: nop

    // 0x80096714: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80096718: beq         $s0, $at, L_80096738
    if (ctx->r16 == ctx->r1) {
        // 0x8009671C: nop
    
            goto L_80096738;
    }
    // 0x8009671C: nop

    // 0x80096720: b           L_80096748
    // 0x80096724: nop

        goto L_80096748;
    // 0x80096724: nop

L_80096728:
    // 0x80096728: jal         0x80096540
    // 0x8009672C: nop

    func_80096540(rdram, ctx);
        goto after_0;
    // 0x8009672C: nop

    after_0:
    // 0x80096730: b           L_80096748
    // 0x80096734: nop

        goto L_80096748;
    // 0x80096734: nop

L_80096738:
    // 0x80096738: jal         0x800965EC
    // 0x8009673C: nop

    func_800965EC(rdram, ctx);
        goto after_1;
    // 0x8009673C: nop

    after_1:
    // 0x80096740: b           L_80096748
    // 0x80096744: nop

        goto L_80096748;
    // 0x80096744: nop

L_80096748:
    // 0x80096748: b           L_80096750
    // 0x8009674C: nop

        goto L_80096750;
    // 0x8009674C: nop

L_80096750:
    // 0x80096750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096754: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80096758: jr          $ra
    // 0x8009675C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009675C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009C2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C2E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8009C2E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009C2E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8009C2EC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009C2F0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8009C2F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C2F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009C2FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009C300: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009C304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C308: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C30C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C310: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C314: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009C318: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009C31C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8009C320: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C324: nop

    // 0x8009C328: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009C32C: nop

    // 0x8009C330: bne         $t1, $zero, L_8009C4C4
    if (ctx->r9 != 0) {
        // 0x8009C334: nop
    
            goto L_8009C4C4;
    }
    // 0x8009C334: nop

    // 0x8009C338: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C33C: nop

    // 0x8009C340: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009C344: nop

    // 0x8009C348: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009C34C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009C350: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C354: nop

    // 0x8009C358: sh          $zero, 0x108($t5)
    MEM_H(0X108, ctx->r13) = 0;
    // 0x8009C35C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C360: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8009C364: sb          $t6, 0x13A($t7)
    MEM_B(0X13A, ctx->r15) = ctx->r14;
    // 0x8009C368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C36C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8009C370: addiu       $t8, $t8, 0x6A88
    ctx->r24 = ADD32(ctx->r24, 0X6A88);
    // 0x8009C374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C378: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8009C37C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009C380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009C384: jal         0x8001C0EC
    // 0x8009C388: addiu       $a3, $zero, 0x42
    ctx->r7 = ADD32(0, 0X42);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009C388: addiu       $a3, $zero, 0x42
    ctx->r7 = ADD32(0, 0X42);
    after_0:
    // 0x8009C38C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C390: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x8009C394: lh          $t0, 0xE4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE4);
    // 0x8009C398: nop

    // 0x8009C39C: bne         $t0, $at, L_8009C3D8
    if (ctx->r8 != ctx->r1) {
        // 0x8009C3A0: nop
    
            goto L_8009C3D8;
    }
    // 0x8009C3A0: nop

    // 0x8009C3A4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C3A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009C3AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009C3B0: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8009C3B4: lh          $a0, 0xA6($t1)
    ctx->r4 = MEM_H(ctx->r9, 0XA6);
    // 0x8009C3B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8009C3BC: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8009C3C0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8009C3C4: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x8009C3C8: jal         0x800941C4
    // 0x8009C3CC: nop

    func_800941C4(rdram, ctx);
        goto after_1;
    // 0x8009C3CC: nop

    after_1:
    // 0x8009C3D0: b           L_8009C4C4
    // 0x8009C3D4: nop

        goto L_8009C4C4;
    // 0x8009C3D4: nop

L_8009C3D8:
    // 0x8009C3D8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C3DC: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x8009C3E0: lh          $t4, 0xE4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE4);
    // 0x8009C3E4: nop

    // 0x8009C3E8: bne         $t4, $at, L_8009C474
    if (ctx->r12 != ctx->r1) {
        // 0x8009C3EC: nop
    
            goto L_8009C474;
    }
    // 0x8009C3EC: nop

    // 0x8009C3F0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8009C3F4: lh          $t2, 0x75F6($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X75F6);
    // 0x8009C3F8: nop

    // 0x8009C3FC: beq         $t2, $zero, L_8009C46C
    if (ctx->r10 == 0) {
        // 0x8009C400: nop
    
            goto L_8009C46C;
    }
    // 0x8009C400: nop

    // 0x8009C404: jal         0x80014E80
    // 0x8009C408: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8009C408: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x8009C40C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x8009C410: beq         $at, $zero, L_8009C46C
    if (ctx->r1 == 0) {
        // 0x8009C414: nop
    
            goto L_8009C46C;
    }
    // 0x8009C414: nop

    // 0x8009C418: jal         0x80014E80
    // 0x8009C41C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x8009C41C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x8009C420: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8009C424: sll         $t5, $s0, 1
    ctx->r13 = S32(ctx->r16 << 1);
    // 0x8009C428: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8009C42C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009C430: lh          $t6, 0x486C($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X486C);
    // 0x8009C434: nop

    // 0x8009C438: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x8009C43C: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x8009C440: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C444: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009C448: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009C44C: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8009C450: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8009C454: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8009C458: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x8009C45C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8009C460: lw          $a3, 0x8($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X8);
    // 0x8009C464: jal         0x800941C4
    // 0x8009C468: nop

    func_800941C4(rdram, ctx);
        goto after_4;
    // 0x8009C468: nop

    after_4:
L_8009C46C:
    // 0x8009C46C: b           L_8009C4C4
    // 0x8009C470: nop

        goto L_8009C4C4;
    // 0x8009C470: nop

L_8009C474:
    // 0x8009C474: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C478: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x8009C47C: lh          $t0, 0xE4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE4);
    // 0x8009C480: nop

    // 0x8009C484: bne         $t0, $at, L_8009C4C4
    if (ctx->r8 != ctx->r1) {
        // 0x8009C488: nop
    
            goto L_8009C4C4;
    }
    // 0x8009C488: nop

    // 0x8009C48C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C490: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C494: jal         0x8002A46C
    // 0x8009C498: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_5;
    // 0x8009C498: nop

    after_5:
    // 0x8009C49C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8009C4A0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8009C4A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009C4A8: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8009C4AC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8009C4B0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8009C4B4: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8009C4B8: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x8009C4BC: jal         0x8009BBC4
    // 0x8009C4C0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8009BBC4(rdram, ctx);
        goto after_6;
    // 0x8009C4C0: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_6:
L_8009C4C4:
    // 0x8009C4C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C4C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C4CC: jal         0x8001B44C
    // 0x8009C4D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x8009C4D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x8009C4D4: beq         $v0, $zero, L_8009C4EC
    if (ctx->r2 == 0) {
        // 0x8009C4D8: nop
    
            goto L_8009C4EC;
    }
    // 0x8009C4D8: nop

    // 0x8009C4DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C4E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C4E4: jal         0x8002B0E4
    // 0x8009C4E8: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x8009C4E8: nop

    after_8:
L_8009C4EC:
    // 0x8009C4EC: b           L_8009C4F4
    // 0x8009C4F0: nop

        goto L_8009C4F4;
    // 0x8009C4F0: nop

L_8009C4F4:
    // 0x8009C4F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009C4F8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8009C4FC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009C500: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8009C504: jr          $ra
    // 0x8009C508: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8009C508: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800CD1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD1D4: jr          $ra
    // 0x800CD1D8: nop

    return;
    // 0x800CD1D8: nop

    // 0x800CD1DC: jr          $ra
    // 0x800CD1E0: nop

    return;
    // 0x800CD1E0: nop

;}
RECOMP_FUNC void func_80091D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091D8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091D90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091D94: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091D98: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091D9C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091DA0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091DA4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091DA8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091DAC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091DB0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091DB4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091DB8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091DBC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091DC0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091DC4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091DC8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091DCC: addiu       $a1, $a1, 0x1624
    ctx->r5 = ADD32(ctx->r5, 0X1624);
    // 0x80091DD0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091DD4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091DDC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091DE0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091DE4: jal         0x80027464
    // 0x80091DE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091DE8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091DEC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091DF0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091DF4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091DF8: addiu       $a3, $a3, 0x2D20
    ctx->r7 = ADD32(ctx->r7, 0X2D20);
    // 0x80091DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091E00: jal         0x8001ABF4
    // 0x80091E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80091E08: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091E0C: addiu       $a3, $a3, 0x2D20
    ctx->r7 = ADD32(ctx->r7, 0X2D20);
    // 0x80091E10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091E14: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80091E18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80091E1C: jal         0x8001ABF4
    // 0x80091E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80091E20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80091E24: b           L_80091E2C
    // 0x80091E28: nop

        goto L_80091E2C;
    // 0x80091E28: nop

L_80091E2C:
    // 0x80091E2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091E30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091E34: jr          $ra
    // 0x80091E38: nop

    return;
    // 0x80091E38: nop

;}
RECOMP_FUNC void func_800723A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800723A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800723A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800723AC: jal         0x80072358
    // 0x800723B0: nop

    func_80072358(rdram, ctx);
        goto after_0;
    // 0x800723B0: nop

    after_0:
    // 0x800723B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800723B8: sb          $zero, 0x76DC($at)
    MEM_B(0X76DC, ctx->r1) = 0;
    // 0x800723BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800723C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800723C4: swc1        $f4, 0x7680($at)
    MEM_W(0X7680, ctx->r1) = ctx->f4.u32l;
    // 0x800723C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800723CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800723D0: swc1        $f6, 0x76A8($at)
    MEM_W(0X76A8, ctx->r1) = ctx->f6.u32l;
    // 0x800723D4: b           L_800723DC
    // 0x800723D8: nop

        goto L_800723DC;
    // 0x800723D8: nop

L_800723DC:
    // 0x800723DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800723E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800723E4: jr          $ra
    // 0x800723E8: nop

    return;
    // 0x800723E8: nop

;}
RECOMP_FUNC void func_8007E76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E76C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007E770: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007E774: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8007E778: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8007E77C: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8007E780: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x8007E784: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007E788: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8007E78C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007E790: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8007E794:
    // 0x8007E794: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007E798: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007E79C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007E7A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007E7A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007E7A8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007E7AC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007E7B0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8007E7B4: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x8007E7B8: nop

    // 0x8007E7BC: bne         $t9, $zero, L_8007EBB8
    if (ctx->r25 != 0) {
        // 0x8007E7C0: nop
    
            goto L_8007EBB8;
    }
    // 0x8007E7C0: nop

    // 0x8007E7C4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E7C8: jal         0x8001A928
    // 0x8007E7CC: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007E7CC: nop

    after_0:
    // 0x8007E7D0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8007E7D4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8007E7D8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007E7DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007E7E0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007E7E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007E7E8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007E7EC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8007E7F0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8007E7F4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8007E7F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8007E7FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007E800: bne         $t4, $at, L_8007E8A4
    if (ctx->r12 != ctx->r1) {
        // 0x8007E804: nop
    
            goto L_8007E8A4;
    }
    // 0x8007E804: nop

    // 0x8007E808: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007E80C: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x8007E810: sh          $t5, 0xE4($t6)
    MEM_H(0XE4, ctx->r14) = ctx->r13;
    // 0x8007E814: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007E818: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8007E81C: lw          $a3, 0x78($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X78);
    // 0x8007E820: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E828: jal         0x8001BD44
    // 0x8007E82C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x8007E82C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x8007E830: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007E834: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007E838: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8007E83C: addiu       $t8, $t8, 0x6650
    ctx->r24 = ADD32(ctx->r24, 0X6650);
    // 0x8007E840: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8007E844: lw          $t1, 0x78($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X78);
    // 0x8007E848: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E84C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E850: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8007E854: jal         0x8001BD44
    // 0x8007E858: addu        $a3, $t9, $t1
    ctx->r7 = ADD32(ctx->r25, ctx->r9);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x8007E858: addu        $a3, $t9, $t1
    ctx->r7 = ADD32(ctx->r25, ctx->r9);
    after_2:
    // 0x8007E85C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8007E860: addiu       $t2, $t2, 0x6654
    ctx->r10 = ADD32(ctx->r10, 0X6654);
    // 0x8007E864: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E868: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8007E86C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E870: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007E874: jal         0x8001C0EC
    // 0x8007E878: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8007E878: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_3:
    // 0x8007E87C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8007E880: addiu       $t3, $t3, 0x6658
    ctx->r11 = ADD32(ctx->r11, 0X6658);
    // 0x8007E884: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E888: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8007E88C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007E894: jal         0x8001C0EC
    // 0x8007E898: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x8007E898: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_4:
    // 0x8007E89C: b           L_8007E9E4
    // 0x8007E8A0: nop

        goto L_8007E9E4;
    // 0x8007E8A0: nop

L_8007E8A4:
    // 0x8007E8A4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8007E8A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007E8AC: bne         $t4, $at, L_8007E950
    if (ctx->r12 != ctx->r1) {
        // 0x8007E8B0: nop
    
            goto L_8007E950;
    }
    // 0x8007E8B0: nop

    // 0x8007E8B4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007E8B8: addiu       $t5, $zero, 0x11
    ctx->r13 = ADD32(0, 0X11);
    // 0x8007E8BC: sh          $t5, 0xE4($t6)
    MEM_H(0XE4, ctx->r14) = ctx->r13;
    // 0x8007E8C0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007E8C4: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8007E8C8: lw          $a3, 0x70($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X70);
    // 0x8007E8CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E8D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E8D4: jal         0x8001BD44
    // 0x8007E8D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_5;
    // 0x8007E8D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8007E8DC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007E8E0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007E8E4: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x8007E8E8: addiu       $t8, $t8, 0x6644
    ctx->r24 = ADD32(ctx->r24, 0X6644);
    // 0x8007E8EC: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x8007E8F0: lw          $t1, 0x70($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X70);
    // 0x8007E8F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E8F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E8FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8007E900: jal         0x8001BD44
    // 0x8007E904: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    func_8001BD44(rdram, ctx);
        goto after_6;
    // 0x8007E904: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    after_6:
    // 0x8007E908: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8007E90C: addiu       $t2, $t2, 0x6648
    ctx->r10 = ADD32(ctx->r10, 0X6648);
    // 0x8007E910: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E914: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8007E918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E91C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007E920: jal         0x8001C0EC
    // 0x8007E924: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x8007E924: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_7:
    // 0x8007E928: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x8007E92C: addiu       $t3, $t3, 0x664C
    ctx->r11 = ADD32(ctx->r11, 0X664C);
    // 0x8007E930: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E934: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8007E938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E93C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007E940: jal         0x8001C0EC
    // 0x8007E944: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x8007E944: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_8:
    // 0x8007E948: b           L_8007E9E4
    // 0x8007E94C: nop

        goto L_8007E9E4;
    // 0x8007E94C: nop

L_8007E950:
    // 0x8007E950: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007E954: addiu       $t4, $t4, -0x3560
    ctx->r12 = ADD32(ctx->r12, -0X3560);
    // 0x8007E958: lw          $a3, 0x68($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X68);
    // 0x8007E95C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E964: jal         0x8001BD44
    // 0x8007E968: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001BD44(rdram, ctx);
        goto after_9;
    // 0x8007E968: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x8007E96C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8007E970: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007E974: addiu       $t7, $t7, -0x3560
    ctx->r15 = ADD32(ctx->r15, -0X3560);
    // 0x8007E978: addiu       $t5, $t5, 0x6638
    ctx->r13 = ADD32(ctx->r13, 0X6638);
    // 0x8007E97C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8007E980: lw          $t8, 0x68($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X68);
    // 0x8007E984: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E98C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8007E990: jal         0x8001BD44
    // 0x8007E994: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    func_8001BD44(rdram, ctx);
        goto after_10;
    // 0x8007E994: addu        $a3, $t6, $t8
    ctx->r7 = ADD32(ctx->r14, ctx->r24);
    after_10:
    // 0x8007E998: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007E99C: addiu       $t9, $t9, 0x663C
    ctx->r25 = ADD32(ctx->r25, 0X663C);
    // 0x8007E9A0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E9A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8007E9A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E9AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007E9B0: jal         0x8001C0EC
    // 0x8007E9B4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x8007E9B4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_11:
    // 0x8007E9B8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007E9BC: addiu       $t0, $t0, 0x6640
    ctx->r8 = ADD32(ctx->r8, 0X6640);
    // 0x8007E9C0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007E9C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007E9C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E9CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007E9D0: jal         0x8001C0EC
    // 0x8007E9D4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x8007E9D4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_12:
    // 0x8007E9D8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007E9DC: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x8007E9E0: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
L_8007E9E4:
    // 0x8007E9E4: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8007E9E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007E9EC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8007E9F0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007E9F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007E9F8: sh          $t5, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r13;
    // 0x8007E9FC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007EA00: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007EA04: nop

    // 0x8007EA08: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x8007EA0C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007EA10: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007EA14: nop

    // 0x8007EA18: swc1        $f6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f6.u32l;
    // 0x8007EA1C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007EA20: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8007EA24: nop

    // 0x8007EA28: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x8007EA2C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8007EA30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007EA34: bne         $t0, $at, L_8007EA5C
    if (ctx->r8 != ctx->r1) {
        // 0x8007EA38: nop
    
            goto L_8007EA5C;
    }
    // 0x8007EA38: nop

    // 0x8007EA3C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EA44: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
    // 0x8007EA48: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8007EA4C: jal         0x800177D8
    // 0x8007EA50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800177D8(rdram, ctx);
        goto after_13;
    // 0x8007EA50: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x8007EA54: b           L_8007EAE0
    // 0x8007EA58: nop

        goto L_8007EAE0;
    // 0x8007EA58: nop

L_8007EA5C:
    // 0x8007EA5C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8007EA60: lb          $t1, 0x5240($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X5240);
    // 0x8007EA64: nop

    // 0x8007EA68: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x8007EA6C: beq         $at, $zero, L_8007EA94
    if (ctx->r1 == 0) {
        // 0x8007EA70: nop
    
            goto L_8007EA94;
    }
    // 0x8007EA70: nop

    // 0x8007EA74: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EA78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EA7C: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x8007EA80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8007EA84: jal         0x800177D8
    // 0x8007EA88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800177D8(rdram, ctx);
        goto after_14;
    // 0x8007EA88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x8007EA8C: b           L_8007EAE0
    // 0x8007EA90: nop

        goto L_8007EAE0;
    // 0x8007EA90: nop

L_8007EA94:
    // 0x8007EA94: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x8007EA98: lb          $t2, 0x5240($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5240);
    // 0x8007EA9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007EAA0: bne         $t2, $at, L_8007EAC8
    if (ctx->r10 != ctx->r1) {
        // 0x8007EAA4: nop
    
            goto L_8007EAC8;
    }
    // 0x8007EAA4: nop

    // 0x8007EAA8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EAAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EAB0: addiu       $a2, $zero, 0x66
    ctx->r6 = ADD32(0, 0X66);
    // 0x8007EAB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8007EAB8: jal         0x800177D8
    // 0x8007EABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800177D8(rdram, ctx);
        goto after_15;
    // 0x8007EABC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x8007EAC0: b           L_8007EAE0
    // 0x8007EAC4: nop

        goto L_8007EAE0;
    // 0x8007EAC4: nop

L_8007EAC8:
    // 0x8007EAC8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EAD0: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x8007EAD4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8007EAD8: jal         0x800177D8
    // 0x8007EADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800177D8(rdram, ctx);
        goto after_16;
    // 0x8007EADC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
L_8007EAE0:
    // 0x8007EAE0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8007EAE4: lb          $t3, 0x5240($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X5240);
    // 0x8007EAE8: nop

    // 0x8007EAEC: bne         $t3, $zero, L_8007EB04
    if (ctx->r11 != 0) {
        // 0x8007EAF0: nop
    
            goto L_8007EB04;
    }
    // 0x8007EAF0: nop

    // 0x8007EAF4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007EAF8: lwc1        $f10, -0x3500($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3500);
    // 0x8007EAFC: b           L_8007EB5C
    // 0x8007EB00: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
        goto L_8007EB5C;
    // 0x8007EB00: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
L_8007EB04:
    // 0x8007EB04: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8007EB08: lb          $t4, 0x5240($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5240);
    // 0x8007EB0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007EB10: bne         $t4, $at, L_8007EB28
    if (ctx->r12 != ctx->r1) {
        // 0x8007EB14: nop
    
            goto L_8007EB28;
    }
    // 0x8007EB14: nop

    // 0x8007EB18: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007EB1C: lwc1        $f16, -0x34FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X34FC);
    // 0x8007EB20: b           L_8007EB5C
    // 0x8007EB24: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
        goto L_8007EB5C;
    // 0x8007EB24: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
L_8007EB28:
    // 0x8007EB28: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8007EB2C: lb          $t5, 0x5240($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X5240);
    // 0x8007EB30: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007EB34: bne         $t5, $at, L_8007EB4C
    if (ctx->r13 != ctx->r1) {
        // 0x8007EB38: nop
    
            goto L_8007EB4C;
    }
    // 0x8007EB38: nop

    // 0x8007EB3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007EB40: lwc1        $f18, -0x34F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X34F8);
    // 0x8007EB44: b           L_8007EB5C
    // 0x8007EB48: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
        goto L_8007EB5C;
    // 0x8007EB48: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_8007EB4C:
    // 0x8007EB4C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8007EB50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007EB54: nop

    // 0x8007EB58: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_8007EB5C:
    // 0x8007EB5C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8007EB60: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8007EB64: jal         0x8001FB3C
    // 0x8007EB68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_17;
    // 0x8007EB68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_17:
    // 0x8007EB6C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007EB70: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8007EB74: nop

    // 0x8007EB78: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x8007EB7C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8007EB80: nop

    // 0x8007EB84: lwc1        $f20, 0x14($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X14);
    // 0x8007EB88: nop

    // 0x8007EB8C: swc1        $f20, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f20.u32l;
    // 0x8007EB90: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8007EB94: nop

    // 0x8007EB98: swc1        $f20, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f20.u32l;
    // 0x8007EB9C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8007EBA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007EBA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007EBA8: jal         0x80019448
    // 0x8007EBAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_18;
    // 0x8007EBAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x8007EBB0: b           L_8007EBD0
    // 0x8007EBB4: nop

        goto L_8007EBD0;
    // 0x8007EBB4: nop

L_8007EBB8:
    // 0x8007EBB8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007EBBC: nop

    // 0x8007EBC0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007EBC4: slti        $at, $t0, 0xE
    ctx->r1 = SIGNED(ctx->r8) < 0XE ? 1 : 0;
    // 0x8007EBC8: bne         $at, $zero, L_8007E794
    if (ctx->r1 != 0) {
        // 0x8007EBCC: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_8007E794;
    }
    // 0x8007EBCC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_8007EBD0:
    // 0x8007EBD0: b           L_8007EBD8
    // 0x8007EBD4: nop

        goto L_8007EBD8;
    // 0x8007EBD4: nop

L_8007EBD8:
    // 0x8007EBD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007EBDC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007EBE0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007EBE4: jr          $ra
    // 0x8007EBE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8007EBE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D1870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1870: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800D1874: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D1878: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800D187C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D1880: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800D1884: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D1888: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D188C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D1890: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D1894: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D1898: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D189C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D18A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D18A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D18A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D18AC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800D18B0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D18B4: nop

    // 0x800D18B8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D18BC: nop

    // 0x800D18C0: bne         $t1, $zero, L_800D196C
    if (ctx->r9 != 0) {
        // 0x800D18C4: nop
    
            goto L_800D196C;
    }
    // 0x800D18C4: nop

    // 0x800D18C8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D18CC: nop

    // 0x800D18D0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D18D4: nop

    // 0x800D18D8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D18DC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D18E0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D18E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D18E8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D18EC: nop

    // 0x800D18F0: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D18F4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D18F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D18FC: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800D1900: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1904: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800D1908: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800D190C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1910: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x800D1914: sh          $t0, 0xB6($t1)
    MEM_H(0XB6, ctx->r9) = ctx->r8;
    // 0x800D1918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D191C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1920: nop

    // 0x800D1924: swc1        $f6, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f6.u32l;
    // 0x800D1928: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D192C: nop

    // 0x800D1930: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800D1934: nop

    // 0x800D1938: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800D193C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1940: nop

    // 0x800D1944: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x800D1948: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D194C: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800D1950: addiu       $t5, $t5, -0x7AD8
    ctx->r13 = ADD32(ctx->r13, -0X7AD8);
    // 0x800D1954: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1958: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800D195C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D1960: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D1964: jal         0x8001C0EC
    // 0x800D1968: addiu       $a3, $zero, 0x93
    ctx->r7 = ADD32(0, 0X93);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D1968: addiu       $a3, $zero, 0x93
    ctx->r7 = ADD32(0, 0X93);
    after_0:
L_800D196C:
    // 0x800D196C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1970: nop

    // 0x800D1974: lh          $t7, 0xB6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB6);
    // 0x800D1978: nop

    // 0x800D197C: beq         $t7, $zero, L_800D199C
    if (ctx->r15 == 0) {
        // 0x800D1980: nop
    
            goto L_800D199C;
    }
    // 0x800D1980: nop

    // 0x800D1984: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1988: nop

    // 0x800D198C: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x800D1990: nop

    // 0x800D1994: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800D1998: sh          $t0, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r8;
L_800D199C:
    // 0x800D199C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D19A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D19A4: jal         0x80028FA0
    // 0x800D19A8: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800D19A8: nop

    after_1:
    // 0x800D19AC: beq         $v0, $zero, L_800D19F0
    if (ctx->r2 == 0) {
        // 0x800D19B0: nop
    
            goto L_800D19F0;
    }
    // 0x800D19B0: nop

    // 0x800D19B4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800D19B8: nop

    // 0x800D19BC: lh          $t3, 0xB6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XB6);
    // 0x800D19C0: nop

    // 0x800D19C4: bne         $t3, $zero, L_800D19F0
    if (ctx->r11 != 0) {
        // 0x800D19C8: nop
    
            goto L_800D19F0;
    }
    // 0x800D19C8: nop

    // 0x800D19CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D19D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D19D4: jal         0x80029B60
    // 0x800D19D8: nop

    func_80029B60(rdram, ctx);
        goto after_2;
    // 0x800D19D8: nop

    after_2:
    // 0x800D19DC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D19E0: nop

    // 0x800D19E4: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800D19E8: nop

    // 0x800D19EC: swc1        $f8, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f8.u32l;
L_800D19F0:
    // 0x800D19F0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D19F4: nop

    // 0x800D19F8: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800D19FC: nop

    // 0x800D1A00: beq         $t5, $zero, L_800D1A7C
    if (ctx->r13 == 0) {
        // 0x800D1A04: nop
    
            goto L_800D1A7C;
    }
    // 0x800D1A04: nop

    // 0x800D1A08: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A0C: nop

    // 0x800D1A10: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800D1A14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1A18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1A1C: lui         $a2, 0x3F0B
    ctx->r6 = S32(0X3F0B << 16);
    // 0x800D1A20: ori         $a2, $a2, 0xA2F0
    ctx->r6 = ctx->r6 | 0XA2F0;
    // 0x800D1A24: jal         0x80029EF8
    // 0x800D1A28: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800D1A28: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800D1A2C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A30: nop

    // 0x800D1A34: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x800D1A38: nop

    // 0x800D1A3C: bne         $t9, $zero, L_800D1A7C
    if (ctx->r25 != 0) {
        // 0x800D1A40: nop
    
            goto L_800D1A7C;
    }
    // 0x800D1A40: nop

    // 0x800D1A44: jal         0x80014E80
    // 0x800D1A48: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_4;
    // 0x800D1A48: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_4:
    // 0x800D1A4C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800D1A50: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A54: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800D1A58: swc1        $f16, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f16.u32l;
    // 0x800D1A5C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A60: nop

    // 0x800D1A64: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D1A68: nop

    // 0x800D1A6C: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
    // 0x800D1A70: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A74: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800D1A78: sh          $t1, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r9;
L_800D1A7C:
    // 0x800D1A7C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A80: nop

    // 0x800D1A84: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x800D1A88: nop

    // 0x800D1A8C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x800D1A90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D1A94: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1A98: nop

    // 0x800D1A9C: swc1        $f6, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f6.u32l;
    // 0x800D1AA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1AA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1AA8: jal         0x80029C40
    // 0x800D1AAC: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800D1AAC: nop

    after_5:
    // 0x800D1AB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D1AB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D1AB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1ABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1AC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D1AC4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800D1AC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D1ACC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800D1AD0: jal         0x80029018
    // 0x800D1AD4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800D1AD4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800D1AD8: beq         $v0, $zero, L_800D1B10
    if (ctx->r2 == 0) {
        // 0x800D1ADC: nop
    
            goto L_800D1B10;
    }
    // 0x800D1ADC: nop

    // 0x800D1AE0: jal         0x800297DC
    // 0x800D1AE4: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800D1AE4: nop

    after_7:
    // 0x800D1AE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1AEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1AF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800D1AF4: jal         0x80029824
    // 0x800D1AF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800D1AF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800D1AFC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1B00: nop

    // 0x800D1B04: lwc1        $f16, 0x3C($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800D1B08: nop

    // 0x800D1B0C: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
L_800D1B10:
    // 0x800D1B10: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800D1B14: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1B18: nop

    // 0x800D1B1C: swc1        $f18, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f18.u32l;
    // 0x800D1B20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D1B24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D1B28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1B2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D1B30: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800D1B34: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800D1B38: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D1B3C: jal         0x80029F58
    // 0x800D1B40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_9;
    // 0x800D1B40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x800D1B44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D1B48: bne         $v0, $at, L_800D1B74
    if (ctx->r2 != ctx->r1) {
        // 0x800D1B4C: nop
    
            goto L_800D1B74;
    }
    // 0x800D1B4C: nop

    // 0x800D1B50: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1B54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D1B58: sh          $t7, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r15;
    // 0x800D1B5C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800D1B60: nop

    // 0x800D1B64: lh          $t8, 0xA8($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA8);
    // 0x800D1B68: nop

    // 0x800D1B6C: addiu       $t1, $t8, -0x1
    ctx->r9 = ADD32(ctx->r24, -0X1);
    // 0x800D1B70: sh          $t1, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r9;
L_800D1B74:
    // 0x800D1B74: b           L_800D1B7C
    // 0x800D1B78: nop

        goto L_800D1B7C;
    // 0x800D1B78: nop

L_800D1B7C:
    // 0x800D1B7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D1B80: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800D1B84: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800D1B88: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800D1B8C: jr          $ra
    // 0x800D1B90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800D1B90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800EE274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE274: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EE278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EE27C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800EE280: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800EE284: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800EE288: jal         0x800EE1F4
    // 0x800EE28C: nop

    func_800EE1F4(rdram, ctx);
        goto after_0;
    // 0x800EE28C: nop

    after_0:
    // 0x800EE290: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800EE294: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800EE298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EE29C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EE2A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE2A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EE2A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE2AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EE2B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800EE2B4: lwc1        $f14, 0x418C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x800EE2B8: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800EE2BC: jal         0x80015538
    // 0x800EE2C0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800EE2C0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x800EE2C4: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x800EE2C8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800EE2CC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EE2D0: nop

    // 0x800EE2D4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800EE2D8: nop

    // 0x800EE2DC: bc1t        L_800EE304
    if (c1cs) {
        // 0x800EE2E0: nop
    
            goto L_800EE304;
    }
    // 0x800EE2E0: nop

    // 0x800EE2E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800EE2E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800EE2EC: nop

    // 0x800EE2F0: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x800EE2F4: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800EE2F8: nop

    // 0x800EE2FC: bc1f        L_800EE30C
    if (!c1cs) {
        // 0x800EE300: nop
    
            goto L_800EE30C;
    }
    // 0x800EE300: nop

L_800EE304:
    // 0x800EE304: b           L_800EE344
    // 0x800EE308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800EE344;
    // 0x800EE308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800EE30C:
    // 0x800EE30C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800EE310: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EE314: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800EE318: nop

    // 0x800EE31C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x800EE320: nop

    // 0x800EE324: bc1f        L_800EE334
    if (!c1cs) {
        // 0x800EE328: nop
    
            goto L_800EE334;
    }
    // 0x800EE328: nop

    // 0x800EE32C: b           L_800EE344
    // 0x800EE330: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800EE344;
    // 0x800EE330: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800EE334:
    // 0x800EE334: b           L_800EE344
    // 0x800EE338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800EE344;
    // 0x800EE338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800EE33C: b           L_800EE344
    // 0x800EE340: nop

        goto L_800EE344;
    // 0x800EE340: nop

L_800EE344:
    // 0x800EE344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EE348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EE34C: jr          $ra
    // 0x800EE350: nop

    return;
    // 0x800EE350: nop

;}
RECOMP_FUNC void func_8006B084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B084: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006B088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B08C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B090: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B094: nop

    // 0x8006B098: bne         $t6, $zero, L_8006B0B4
    if (ctx->r14 != 0) {
        // 0x8006B09C: nop
    
            goto L_8006B0B4;
    }
    // 0x8006B09C: nop

    // 0x8006B0A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B0A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B0A8: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B0AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B0B0: sb          $zero, 0x7933($at)
    MEM_B(0X7933, ctx->r1) = 0;
L_8006B0B4:
    // 0x8006B0B4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006B0B8: lbu         $t8, 0x7933($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7933);
    // 0x8006B0BC: nop

    // 0x8006B0C0: bne         $t8, $zero, L_8006B188
    if (ctx->r24 != 0) {
        // 0x8006B0C4: nop
    
            goto L_8006B188;
    }
    // 0x8006B0C4: nop

    // 0x8006B0C8: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8006B0CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B0D0: sb          $t9, 0x7933($at)
    MEM_B(0X7933, ctx->r1) = ctx->r25;
    // 0x8006B0D4: jal         0x80014E80
    // 0x8006B0D8: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8006B0D8: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_0:
    // 0x8006B0DC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8006B0E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B0E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006B0E8: lwc1        $f8, -0x1EC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8006B0EC: nop

    // 0x8006B0F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006B0F4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8006B0F8: jal         0x80014E80
    // 0x8006B0FC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x8006B0FC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_1:
    // 0x8006B100: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B104: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8006B108: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8006B10C: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8006B110: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006B114: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006B118: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8006B11C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8006B120: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8006B124: jal         0x80014E80
    // 0x8006B128: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8006B128: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_2:
    // 0x8006B12C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8006B130: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B134: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006B138: lwc1        $f6, -0x1EB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8006B13C: nop

    // 0x8006B140: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8006B144: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8006B148: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006B14C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8006B150: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B154: jal         0x80067748
    // 0x8006B158: nop

    func_80067748(rdram, ctx);
        goto after_3;
    // 0x8006B158: nop

    after_3:
    // 0x8006B15C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006B160: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x8006B164: nop

    // 0x8006B168: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8006B16C: bne         $t1, $zero, L_8006B188
    if (ctx->r9 != 0) {
        // 0x8006B170: nop
    
            goto L_8006B188;
    }
    // 0x8006B170: nop

    // 0x8006B174: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8006B178: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8006B17C: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B180: jal         0x80081468
    // 0x8006B184: addiu       $a0, $zero, 0x2C2
    ctx->r4 = ADD32(0, 0X2C2);
    func_80081468(rdram, ctx);
        goto after_4;
    // 0x8006B184: addiu       $a0, $zero, 0x2C2
    ctx->r4 = ADD32(0, 0X2C2);
    after_4:
L_8006B188:
    // 0x8006B188: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006B18C: lbu         $t2, 0x7933($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X7933);
    // 0x8006B190: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B194: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8006B198: sb          $t3, 0x7933($at)
    MEM_B(0X7933, ctx->r1) = ctx->r11;
    // 0x8006B19C: b           L_8006B1A4
    // 0x8006B1A0: nop

        goto L_8006B1A4;
    // 0x8006B1A0: nop

L_8006B1A4:
    // 0x8006B1A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B1A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006B1AC: jr          $ra
    // 0x8006B1B0: nop

    return;
    // 0x8006B1B0: nop

;}
RECOMP_FUNC void func_80079960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079960: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80079964: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80079968: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8007996C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80079970: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80079974: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80079978: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8007997C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80079980: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x80079984: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80079988: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007998C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80079990: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80079994: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x80079998: jr          $ra
    // 0x8007999C: nop

    return;
    // 0x8007999C: nop

    // 0x800799A0: jr          $ra
    // 0x800799A4: nop

    return;
    // 0x800799A4: nop

;}
RECOMP_FUNC void func_800DA9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA9C8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DA9CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA9D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA9D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA9D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA9DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA9E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA9E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA9E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA9EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DA9F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DA9F4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DA9F8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DA9FC: nop

    // 0x800DAA00: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DAA04: nop

    // 0x800DAA08: bne         $t1, $zero, L_800DAA1C
    if (ctx->r9 != 0) {
        // 0x800DAA0C: nop
    
            goto L_800DAA1C;
    }
    // 0x800DAA0C: nop

    // 0x800DAA10: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800DAA14: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800DAA18: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800DAA1C:
    // 0x800DAA1C: b           L_800DAA24
    // 0x800DAA20: nop

        goto L_800DAA24;
    // 0x800DAA20: nop

L_800DAA24:
    // 0x800DAA24: jr          $ra
    // 0x800DAA28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DAA28: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800E49AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E49AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800E49B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800E49B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800E49B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800E49BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E49C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E49C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E49C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E49CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E49D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E49D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E49D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E49DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E49E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E49E4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800E49E8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E49EC: nop

    // 0x800E49F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E49F4: nop

    // 0x800E49F8: bne         $t1, $zero, L_800E4A70
    if (ctx->r9 != 0) {
        // 0x800E49FC: nop
    
            goto L_800E4A70;
    }
    // 0x800E49FC: nop

    // 0x800E4A00: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4A04: nop

    // 0x800E4A08: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E4A0C: nop

    // 0x800E4A10: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E4A14: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E4A18: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E4A1C: nop

    // 0x800E4A20: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E4A24: nop

    // 0x800E4A28: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E4A2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4A30: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E4A34: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E4A38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4A3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E4A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4A44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800E4A48: jal         0x8001C0EC
    // 0x800E4A4C: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E4A4C: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E4A50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4A54: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E4A58: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E4A5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4A60: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E4A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4A68: jal         0x8001ABF4
    // 0x800E4A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E4A6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E4A70:
    // 0x800E4A70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4A74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4A78: jal         0x8001B4AC
    // 0x800E4A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E4A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E4A80: beq         $v0, $zero, L_800E4BD8
    if (ctx->r2 == 0) {
        // 0x800E4A84: nop
    
            goto L_800E4BD8;
    }
    // 0x800E4A84: nop

    // 0x800E4A88: lui         $at, 0x4323
    ctx->r1 = S32(0X4323 << 16);
    // 0x800E4A8C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800E4A90: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E4A94: nop

    // 0x800E4A98: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x800E4A9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4AA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4AA4: lui         $a1, 0x42EC
    ctx->r5 = S32(0X42EC << 16);
    // 0x800E4AA8: jal         0x80029EF8
    // 0x800E4AAC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800E4AAC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x800E4AB0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E4AB4: nop

    // 0x800E4AB8: lwc1        $f6, 0x28($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800E4ABC: nop

    // 0x800E4AC0: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800E4AC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E4AC8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4ACC: nop

    // 0x800E4AD0: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x800E4AD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4AD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4ADC: jal         0x80029C40
    // 0x800E4AE0: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800E4AE0: nop

    after_4:
    // 0x800E4AE4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800E4AE8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800E4AEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4AF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4AF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4AF8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800E4AFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E4B00: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E4B04: jal         0x80029018
    // 0x800E4B08: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800E4B08: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800E4B0C: beq         $v0, $zero, L_800E4B2C
    if (ctx->r2 == 0) {
        // 0x800E4B10: nop
    
            goto L_800E4B2C;
    }
    // 0x800E4B10: nop

    // 0x800E4B14: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B18: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x800E4B1C: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E4B20: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B24: b           L_800E4B88
    // 0x800E4B28: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E4B88;
    // 0x800E4B28: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E4B2C:
    // 0x800E4B2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800E4B30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4B34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4B38: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E4B3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E4B40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800E4B44: jal         0x80029F58
    // 0x800E4B48: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800E4B48: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x800E4B4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E4B50: bne         $v0, $at, L_800E4B70
    if (ctx->r2 != ctx->r1) {
        // 0x800E4B54: nop
    
            goto L_800E4B70;
    }
    // 0x800E4B54: nop

    // 0x800E4B58: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B5C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x800E4B60: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x800E4B64: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B68: b           L_800E4B88
    // 0x800E4B6C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800E4B88;
    // 0x800E4B6C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800E4B70:
    // 0x800E4B70: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B74: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800E4B78: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800E4B7C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B80: nop

    // 0x800E4B84: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800E4B88:
    // 0x800E4B88: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800E4B8C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800E4B90: nop

    // 0x800E4B94: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    // 0x800E4B98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E4B9C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800E4BA0: nop

    // 0x800E4BA4: swc1        $f6, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f6.u32l;
    // 0x800E4BA8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800E4BAC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800E4BB0: nop

    // 0x800E4BB4: swc1        $f8, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f8.u32l;
    // 0x800E4BB8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800E4BBC: nop

    // 0x800E4BC0: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800E4BC4: nop

    // 0x800E4BC8: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800E4BCC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800E4BD0: nop

    // 0x800E4BD4: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
L_800E4BD8:
    // 0x800E4BD8: b           L_800E4BE0
    // 0x800E4BDC: nop

        goto L_800E4BE0;
    // 0x800E4BDC: nop

L_800E4BE0:
    // 0x800E4BE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800E4BE4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800E4BE8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800E4BEC: jr          $ra
    // 0x800E4BF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800E4BF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800FCC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FCC98: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FCC9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FCCA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FCCA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FCCA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FCCAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FCCB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FCCB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FCCB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FCCBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FCCC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FCCC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FCCC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FCCCC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800FCCD0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCCD4: nop

    // 0x800FCCD8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FCCDC: nop

    // 0x800FCCE0: bne         $t1, $zero, L_800FCD0C
    if (ctx->r9 != 0) {
        // 0x800FCCE4: nop
    
            goto L_800FCD0C;
    }
    // 0x800FCCE4: nop

    // 0x800FCCE8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCCEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FCCF0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FCCF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCCF8: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x800FCCFC: sh          $t4, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r12;
    // 0x800FCD00: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCD04: nop

    // 0x800FCD08: sh          $zero, 0xB0($t6)
    MEM_H(0XB0, ctx->r14) = 0;
L_800FCD0C:
    // 0x800FCD0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCD10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCD14: lh          $s0, 0x108($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X108);
    // 0x800FCD18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCD1C: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x800FCD20: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x800FCD24: sltiu       $t9, $s0, 0x1
    ctx->r25 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800FCD28: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800FCD2C: jal         0x8001BB34
    // 0x800FCD30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800FCD30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800FCD34: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCD38: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800FCD3C: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x800FCD40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800FCD44: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800FCD48: jal         0x80015538
    // 0x800FCD4C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800FCD4C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x800FCD50: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800FCD54: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCD58: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800FCD5C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FCD60: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FCD64: nop

    // 0x800FCD68: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800FCD6C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x800FCD70: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800FCD74: sh          $t3, 0xB0($t4)
    MEM_H(0XB0, ctx->r12) = ctx->r11;
    // 0x800FCD78: nop

    // 0x800FCD7C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCD80: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FCD84: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800FCD88: lwc1        $f17, 0x57C8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X57C8);
    // 0x800FCD8C: lwc1        $f16, 0x57CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X57CC);
    // 0x800FCD90: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800FCD94: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800FCD98: jal         0x80034970
    // 0x800FCD9C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_2;
    // 0x800FCD9C: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x800FCDA0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FCDA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800FCDA8: nop

    // 0x800FCDAC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800FCDB0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x800FCDB4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800FCDB8: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800FCDBC: jal         0x80015538
    // 0x800FCDC0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800FCDC0: nop

    after_3:
    // 0x800FCDC4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCDC8: nop

    // 0x800FCDCC: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x800FCDD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCDD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCDD8: jal         0x80029C40
    // 0x800FCDDC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800FCDDC: nop

    after_4:
    // 0x800FCDE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCDE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCDE8: jal         0x80029D04
    // 0x800FCDEC: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800FCDEC: nop

    after_5:
    // 0x800FCDF0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCDF4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800FCDF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FCDFC: lwc1        $f8, 0x54($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X54);
    // 0x800FCE00: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800FCE04: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800FCE08: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800FCE0C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800FCE10: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800FCE14: nop

    // 0x800FCE18: bc1f        L_800FCE58
    if (!c1cs) {
        // 0x800FCE1C: nop
    
            goto L_800FCE58;
    }
    // 0x800FCE1C: nop

    // 0x800FCE20: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCE24: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800FCE28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800FCE2C: lwc1        $f8, 0x54($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X54);
    // 0x800FCE30: nop

    // 0x800FCE34: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800FCE38: swc1        $f18, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f18.u32l;
    // 0x800FCE3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FCE40: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCE44: nop

    // 0x800FCE48: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x800FCE4C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCE50: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800FCE54: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
L_800FCE58:
    // 0x800FCE58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCE5C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FCE60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FCE64: lwc1        $f16, 0x54($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X54);
    // 0x800FCE68: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800FCE6C: lwc1        $f18, 0x28($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800FCE70: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800FCE74: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x800FCE78: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x800FCE7C: nop

    // 0x800FCE80: bc1f        L_800FCEC0
    if (!c1cs) {
        // 0x800FCE84: nop
    
            goto L_800FCEC0;
    }
    // 0x800FCE84: nop

    // 0x800FCE88: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCE8C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800FCE90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800FCE94: lwc1        $f16, 0x54($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X54);
    // 0x800FCE98: nop

    // 0x800FCE9C: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800FCEA0: swc1        $f10, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f10.u32l;
    // 0x800FCEA4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800FCEA8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCEAC: nop

    // 0x800FCEB0: swc1        $f18, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f18.u32l;
    // 0x800FCEB4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCEB8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800FCEBC: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
L_800FCEC0:
    // 0x800FCEC0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCEC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FCEC8: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x800FCECC: nop

    // 0x800FCED0: bne         $t8, $at, L_800FCF50
    if (ctx->r24 != ctx->r1) {
        // 0x800FCED4: nop
    
            goto L_800FCF50;
    }
    // 0x800FCED4: nop

    // 0x800FCED8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCEDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FCEE0: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800FCEE4: nop

    // 0x800FCEE8: beq         $t0, $at, L_800FCF00
    if (ctx->r8 == ctx->r1) {
        // 0x800FCEEC: nop
    
            goto L_800FCF00;
    }
    // 0x800FCEEC: nop

    // 0x800FCEF0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCEF4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800FCEF8: b           L_800FCF24
    // 0x800FCEFC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
        goto L_800FCF24;
    // 0x800FCEFC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_800FCF00:
    // 0x800FCF00: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCF04: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800FCF08: sh          $t3, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r11;
    // 0x800FCF0C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCF10: nop

    // 0x800FCF14: sh          $zero, 0xAC($t5)
    MEM_H(0XAC, ctx->r13) = 0;
    // 0x800FCF18: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCF1C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800FCF20: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_800FCF24:
    // 0x800FCF24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCF28: nop

    // 0x800FCF2C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800FCF30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FCF34: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800FCF38: nop

    // 0x800FCF3C: swc1        $f8, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f8.u32l;
    // 0x800FCF40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCF44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCF48: jal         0x8001BB34
    // 0x800FCF4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x800FCF4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_800FCF50:
    // 0x800FCF50: b           L_800FCF58
    // 0x800FCF54: nop

        goto L_800FCF58;
    // 0x800FCF54: nop

L_800FCF58:
    // 0x800FCF58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCF5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FCF60: jr          $ra
    // 0x800FCF64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FCF64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80087E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80087E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087E1C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E20: sw          $zero, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = 0;
    // 0x80087E24: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E28: sb          $zero, 0x51A8($at)
    MEM_B(0X51A8, ctx->r1) = 0;
    // 0x80087E2C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E30: sw          $zero, 0x51AC($at)
    MEM_W(0X51AC, ctx->r1) = 0;
    // 0x80087E34: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E38: sw          $zero, 0x51B0($at)
    MEM_W(0X51B0, ctx->r1) = 0;
    // 0x80087E3C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E40: sw          $zero, 0x51B4($at)
    MEM_W(0X51B4, ctx->r1) = 0;
    // 0x80087E44: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E48: sw          $zero, 0x51B8($at)
    MEM_W(0X51B8, ctx->r1) = 0;
    // 0x80087E4C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E50: sw          $zero, 0x51BC($at)
    MEM_W(0X51BC, ctx->r1) = 0;
    // 0x80087E54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80087E58: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E5C: swc1        $f4, 0x51C0($at)
    MEM_W(0X51C0, ctx->r1) = ctx->f4.u32l;
    // 0x80087E60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80087E64: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E68: swc1        $f6, 0x51C4($at)
    MEM_W(0X51C4, ctx->r1) = ctx->f6.u32l;
    // 0x80087E6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80087E70: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E74: swc1        $f8, 0x51C8($at)
    MEM_W(0X51C8, ctx->r1) = ctx->f8.u32l;
    // 0x80087E78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80087E7C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E80: swc1        $f10, 0x51CC($at)
    MEM_W(0X51CC, ctx->r1) = ctx->f10.u32l;
    // 0x80087E84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80087E88: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E8C: swc1        $f16, 0x51D0($at)
    MEM_W(0X51D0, ctx->r1) = ctx->f16.u32l;
    // 0x80087E90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80087E94: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087E98: swc1        $f18, 0x51D4($at)
    MEM_W(0X51D4, ctx->r1) = ctx->f18.u32l;
    // 0x80087E9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80087EA0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80087EA4: addiu       $t6, $t6, 0x51D8
    ctx->r14 = ADD32(ctx->r14, 0X51D8);
    // 0x80087EA8: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80087EAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80087EB0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80087EB4: addiu       $t7, $t7, 0x51D8
    ctx->r15 = ADD32(ctx->r15, 0X51D8);
    // 0x80087EB8: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x80087EBC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80087EC0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80087EC4: addiu       $t8, $t8, 0x51D8
    ctx->r24 = ADD32(ctx->r24, 0X51D8);
    // 0x80087EC8: swc1        $f8, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f8.u32l;
    // 0x80087ECC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80087ED0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80087ED4: addiu       $t9, $t9, 0x51D8
    ctx->r25 = ADD32(ctx->r25, 0X51D8);
    // 0x80087ED8: swc1        $f10, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f10.u32l;
    // 0x80087EDC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80087EE0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087EE4: sh          $t0, 0x5270($at)
    MEM_H(0X5270, ctx->r1) = ctx->r8;
    // 0x80087EE8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80087EEC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087EF0: sh          $t1, 0x5278($at)
    MEM_H(0X5278, ctx->r1) = ctx->r9;
    // 0x80087EF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80087EF8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087EFC: swc1        $f16, 0x5288($at)
    MEM_W(0X5288, ctx->r1) = ctx->f16.u32l;
    // 0x80087F00: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80087F04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F08: swc1        $f18, -0x3D70($at)
    MEM_W(-0X3D70, ctx->r1) = ctx->f18.u32l;
    // 0x80087F0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80087F10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F14: swc1        $f4, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f4.u32l;
    // 0x80087F18: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087F1C: sh          $zero, 0x5280($at)
    MEM_H(0X5280, ctx->r1) = 0;
    // 0x80087F20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F24: sb          $zero, -0x1F6C($at)
    MEM_B(-0X1F6C, ctx->r1) = 0;
    // 0x80087F28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F2C: sh          $zero, -0x1F64($at)
    MEM_H(-0X1F64, ctx->r1) = 0;
    // 0x80087F30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F34: sh          $zero, -0x1F54($at)
    MEM_H(-0X1F54, ctx->r1) = 0;
    // 0x80087F38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F3C: sh          $zero, -0x1F4C($at)
    MEM_H(-0X1F4C, ctx->r1) = 0;
    // 0x80087F40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F44: sb          $zero, -0x1F30($at)
    MEM_B(-0X1F30, ctx->r1) = 0;
    // 0x80087F48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087F4C: sb          $zero, -0x1F08($at)
    MEM_B(-0X1F08, ctx->r1) = 0;
    // 0x80087F50: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087F54: sb          $zero, 0x5250($at)
    MEM_B(0X5250, ctx->r1) = 0;
    // 0x80087F58: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087F5C: sb          $zero, 0x5260($at)
    MEM_B(0X5260, ctx->r1) = 0;
    // 0x80087F60: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087F64: sb          $zero, 0x5268($at)
    MEM_B(0X5268, ctx->r1) = 0;
    // 0x80087F68: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087F6C: sb          $zero, 0x5246($at)
    MEM_B(0X5246, ctx->r1) = 0;
    // 0x80087F70: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80087F74: lb          $t2, 0x7630($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7630);
    // 0x80087F78: nop

    // 0x80087F7C: bne         $t2, $zero, L_80087FA8
    if (ctx->r10 != 0) {
        // 0x80087F80: nop
    
            goto L_80087FA8;
    }
    // 0x80087F80: nop

    // 0x80087F84: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80087F88: lb          $t3, 0x7628($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7628);
    // 0x80087F8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087F90: bne         $t3, $at, L_80087FA8
    if (ctx->r11 != ctx->r1) {
        // 0x80087F94: nop
    
            goto L_80087FA8;
    }
    // 0x80087F94: nop

    // 0x80087F98: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80087F9C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087FA0: b           L_80087FB0
    // 0x80087FA4: sb          $t4, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = ctx->r12;
        goto L_80087FB0;
    // 0x80087FA4: sb          $t4, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = ctx->r12;
L_80087FA8:
    // 0x80087FA8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087FAC: sb          $zero, 0x5258($at)
    MEM_B(0X5258, ctx->r1) = 0;
L_80087FB0:
    // 0x80087FB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FB4: sb          $zero, -0x1F80($at)
    MEM_B(-0X1F80, ctx->r1) = 0;
    // 0x80087FB8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FBC: sb          $zero, -0x1F78($at)
    MEM_B(-0X1F78, ctx->r1) = 0;
    // 0x80087FC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FC4: sb          $zero, -0x1D28($at)
    MEM_B(-0X1D28, ctx->r1) = 0;
    // 0x80087FC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FCC: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80087FD0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087FD4: sb          $zero, 0x5242($at)
    MEM_B(0X5242, ctx->r1) = 0;
    // 0x80087FD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80087FDC: sb          $zero, 0x5248($at)
    MEM_B(0X5248, ctx->r1) = 0;
    // 0x80087FE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FE4: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x80087FE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FEC: sh          $zero, -0x1EF8($at)
    MEM_H(-0X1EF8, ctx->r1) = 0;
    // 0x80087FF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FF4: sw          $zero, -0x1EE8($at)
    MEM_W(-0X1EE8, ctx->r1) = 0;
    // 0x80087FF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80087FFC: sh          $zero, -0x1DE4($at)
    MEM_H(-0X1DE4, ctx->r1) = 0;
    // 0x80088000: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088004: sb          $zero, -0x1DD8($at)
    MEM_B(-0X1DD8, ctx->r1) = 0;
    // 0x80088008: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008800C: sb          $zero, 0x5247($at)
    MEM_B(0X5247, ctx->r1) = 0;
    // 0x80088010: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088014: sh          $zero, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = 0;
    // 0x80088018: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008801C: sb          $zero, -0x1DB8($at)
    MEM_B(-0X1DB8, ctx->r1) = 0;
    // 0x80088020: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088024: sw          $zero, -0x1CB8($at)
    MEM_W(-0X1CB8, ctx->r1) = 0;
    // 0x80088028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008802C: sb          $zero, -0x1DB0($at)
    MEM_B(-0X1DB0, ctx->r1) = 0;
    // 0x80088030: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088034: sh          $zero, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = 0;
    // 0x80088038: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008803C: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x80088040: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088044: sw          $zero, -0x1EE0($at)
    MEM_W(-0X1EE0, ctx->r1) = 0;
    // 0x80088048: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008804C: sw          $zero, -0x1ED8($at)
    MEM_W(-0X1ED8, ctx->r1) = 0;
    // 0x80088050: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80088054: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088058: swc1        $f6, -0x1ED0($at)
    MEM_W(-0X1ED0, ctx->r1) = ctx->f6.u32l;
    // 0x8008805C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80088060: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088064: swc1        $f8, -0x1EC8($at)
    MEM_W(-0X1EC8, ctx->r1) = ctx->f8.u32l;
    // 0x80088068: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008806C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80088070: swc1        $f10, -0x1E4C($at)
    MEM_W(-0X1E4C, ctx->r1) = ctx->f10.u32l;
    // 0x80088074: jal         0x800841E8
    // 0x80088078: nop

    func_800841E8(rdram, ctx);
        goto after_0;
    // 0x80088078: nop

    after_0:
    // 0x8008807C: b           L_80088084
    // 0x80088080: nop

        goto L_80088084;
    // 0x80088080: nop

L_80088084:
    // 0x80088084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008808C: jr          $ra
    // 0x80088090: nop

    return;
    // 0x80088090: nop

;}
RECOMP_FUNC void func_8007EE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EE40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007EE44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007EE48: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007EE4C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007EE50: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x8007EE54: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x8007EE58: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007EE5C: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007EE60: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8007EE64: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8007EE68: jal         0x8007EBEC
    // 0x8007EE6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8007EBEC(rdram, ctx);
        goto after_0;
    // 0x8007EE6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8007EE70: b           L_8007EE78
    // 0x8007EE74: nop

        goto L_8007EE78;
    // 0x8007EE74: nop

L_8007EE78:
    // 0x8007EE78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007EE7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007EE80: jr          $ra
    // 0x8007EE84: nop

    return;
    // 0x8007EE84: nop

;}
RECOMP_FUNC void func_800D3578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3578: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D357C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D3580: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D3584: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D3588: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D358C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3590: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3594: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D359C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D35A0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D35A4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D35A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D35AC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D35B0: nop

    // 0x800D35B4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D35B8: nop

    // 0x800D35BC: bne         $t1, $zero, L_800D35EC
    if (ctx->r9 != 0) {
        // 0x800D35C0: nop
    
            goto L_800D35EC;
    }
    // 0x800D35C0: nop

    // 0x800D35C4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D35C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D35CC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D35D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D35D4: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x800D35D8: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800D35DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D35E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D35E4: jal         0x8001BB34
    // 0x800D35E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800D35E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800D35EC:
    // 0x800D35EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D35F0: nop

    // 0x800D35F4: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D35F8: nop

    // 0x800D35FC: bne         $t7, $zero, L_800D36B8
    if (ctx->r15 != 0) {
        // 0x800D3600: nop
    
            goto L_800D36B8;
    }
    // 0x800D3600: nop

    // 0x800D3604: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D3608: nop

    // 0x800D360C: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800D3610: nop

    // 0x800D3614: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x800D3618: beq         $at, $zero, L_800D36B0
    if (ctx->r1 == 0) {
        // 0x800D361C: nop
    
            goto L_800D36B0;
    }
    // 0x800D361C: nop

    // 0x800D3620: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D3624: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800D3628: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800D362C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800D3630: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x800D3634: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D3638: addiu       $a1, $a1, 0x4120
    ctx->r5 = ADD32(ctx->r5, 0X4120);
    // 0x800D363C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D3640: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x800D3644: jal         0x80027464
    // 0x800D3648: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x800D3648: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800D364C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800D3650: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800D3654: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D3658: beq         $t1, $at, L_800D36B0
    if (ctx->r9 == ctx->r1) {
        // 0x800D365C: nop
    
            goto L_800D36B0;
    }
    // 0x800D365C: nop

    // 0x800D3660: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800D3664: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D3668: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800D366C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D3670: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800D3674: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D3678: lh          $t3, 0xBA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBA);
    // 0x800D367C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800D3680: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D3684: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800D3688: sh          $t3, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r11;
    // 0x800D368C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D3690: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800D3694: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800D3698: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D369C: nop

    // 0x800D36A0: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800D36A4: nop

    // 0x800D36A8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800D36AC: sh          $t0, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r8;
L_800D36B0:
    // 0x800D36B0: b           L_800D36D0
    // 0x800D36B4: nop

        goto L_800D36D0;
    // 0x800D36B4: nop

L_800D36B8:
    // 0x800D36B8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D36BC: nop

    // 0x800D36C0: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800D36C4: nop

    // 0x800D36C8: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x800D36CC: sh          $t4, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r12;
L_800D36D0:
    // 0x800D36D0: b           L_800D36D8
    // 0x800D36D4: nop

        goto L_800D36D8;
    // 0x800D36D4: nop

L_800D36D8:
    // 0x800D36D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D36DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D36E0: jr          $ra
    // 0x800D36E4: nop

    return;
    // 0x800D36E4: nop

;}
RECOMP_FUNC void func_800AF538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AF538: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AF53C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AF540: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800AF544: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AF548: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AF54C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AF550: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AF554: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AF558: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AF55C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AF560: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AF564: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AF568: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AF56C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AF570: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AF578: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800AF57C: nop

    // 0x800AF580: bne         $t1, $at, L_800AF600
    if (ctx->r9 != ctx->r1) {
        // 0x800AF584: nop
    
            goto L_800AF600;
    }
    // 0x800AF584: nop

    // 0x800AF588: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF58C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AF590: lh          $s0, 0xA4($t2)
    ctx->r16 = MEM_H(ctx->r10, 0XA4);
    // 0x800AF594: nop

    // 0x800AF598: beq         $s0, $at, L_800AF5C0
    if (ctx->r16 == ctx->r1) {
        // 0x800AF59C: nop
    
            goto L_800AF5C0;
    }
    // 0x800AF59C: nop

    // 0x800AF5A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AF5A4: beq         $s0, $at, L_800AF5D0
    if (ctx->r16 == ctx->r1) {
        // 0x800AF5A8: nop
    
            goto L_800AF5D0;
    }
    // 0x800AF5A8: nop

    // 0x800AF5AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800AF5B0: beq         $s0, $at, L_800AF5E0
    if (ctx->r16 == ctx->r1) {
        // 0x800AF5B4: nop
    
            goto L_800AF5E0;
    }
    // 0x800AF5B4: nop

    // 0x800AF5B8: b           L_800AF5F0
    // 0x800AF5BC: nop

        goto L_800AF5F0;
    // 0x800AF5BC: nop

L_800AF5C0:
    // 0x800AF5C0: jal         0x800AECA8
    // 0x800AF5C4: nop

    func_800AECA8(rdram, ctx);
        goto after_0;
    // 0x800AF5C4: nop

    after_0:
    // 0x800AF5C8: b           L_800AF5F8
    // 0x800AF5CC: nop

        goto L_800AF5F8;
    // 0x800AF5CC: nop

L_800AF5D0:
    // 0x800AF5D0: jal         0x800AEE6C
    // 0x800AF5D4: nop

    func_800AEE6C(rdram, ctx);
        goto after_1;
    // 0x800AF5D4: nop

    after_1:
    // 0x800AF5D8: b           L_800AF5F8
    // 0x800AF5DC: nop

        goto L_800AF5F8;
    // 0x800AF5DC: nop

L_800AF5E0:
    // 0x800AF5E0: jal         0x800AF118
    // 0x800AF5E4: nop

    func_800AF118(rdram, ctx);
        goto after_2;
    // 0x800AF5E4: nop

    after_2:
    // 0x800AF5E8: b           L_800AF5F8
    // 0x800AF5EC: nop

        goto L_800AF5F8;
    // 0x800AF5EC: nop

L_800AF5F0:
    // 0x800AF5F0: b           L_800AF5F8
    // 0x800AF5F4: nop

        goto L_800AF5F8;
    // 0x800AF5F4: nop

L_800AF5F8:
    // 0x800AF5F8: b           L_800AF608
    // 0x800AF5FC: nop

        goto L_800AF608;
    // 0x800AF5FC: nop

L_800AF600:
    // 0x800AF600: jal         0x800AF148
    // 0x800AF604: nop

    func_800AF148(rdram, ctx);
        goto after_3;
    // 0x800AF604: nop

    after_3:
L_800AF608:
    // 0x800AF608: b           L_800AF610
    // 0x800AF60C: nop

        goto L_800AF610;
    // 0x800AF60C: nop

L_800AF610:
    // 0x800AF610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AF614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800AF618: jr          $ra
    // 0x800AF61C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AF61C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800E4F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E4F40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E4F44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E4F48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E4F4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E4F50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E4F54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E4F58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4F5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E4F60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E4F64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E4F68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E4F6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E4F70: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E4F74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4F78: nop

    // 0x800E4F7C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E4F80: nop

    // 0x800E4F84: bne         $t1, $zero, L_800E4FFC
    if (ctx->r9 != 0) {
        // 0x800E4F88: nop
    
            goto L_800E4FFC;
    }
    // 0x800E4F88: nop

    // 0x800E4F8C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4F90: nop

    // 0x800E4F94: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E4F98: nop

    // 0x800E4F9C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E4FA0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E4FA4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E4FA8: nop

    // 0x800E4FAC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E4FB0: nop

    // 0x800E4FB4: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E4FB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4FBC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E4FC0: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E4FC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4FC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E4FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4FD0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800E4FD4: jal         0x8001C0EC
    // 0x800E4FD8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E4FD8: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E4FDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E4FE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E4FE4: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E4FE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E4FEC: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E4FF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E4FF4: jal         0x8001ABF4
    // 0x800E4FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E4FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E4FFC:
    // 0x800E4FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5004: jal         0x8001B4AC
    // 0x800E5008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E500C: beq         $v0, $zero, L_800E502C
    if (ctx->r2 == 0) {
        // 0x800E5010: nop
    
            goto L_800E502C;
    }
    // 0x800E5010: nop

    // 0x800E5014: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5018: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x800E501C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E5020: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5024: nop

    // 0x800E5028: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E502C:
    // 0x800E502C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5030: nop

    // 0x800E5034: lh          $t3, 0xA4($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA4);
    // 0x800E5038: nop

    // 0x800E503C: sh          $t3, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = ctx->r11;
    // 0x800E5040: b           L_800E5048
    // 0x800E5044: nop

        goto L_800E5048;
    // 0x800E5044: nop

L_800E5048:
    // 0x800E5048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E504C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E5050: jr          $ra
    // 0x800E5054: nop

    return;
    // 0x800E5054: nop

;}
RECOMP_FUNC void func_800A1E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1E90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A1E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1E98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A1E9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A1EA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A1EA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1EAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1EB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1EB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A1EBC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A1EC0: nop

    // 0x800A1EC4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A1EC8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1ECC: nop

    // 0x800A1ED0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800A1ED4: sltiu       $at, $t0, 0x8
    ctx->r1 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x800A1ED8: beq         $at, $zero, L_800A1F7C
    if (ctx->r1 == 0) {
        // 0x800A1EDC: nop
    
            goto L_800A1F7C;
    }
    // 0x800A1EDC: nop

    // 0x800A1EE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A1EE4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A1EE8: addu        $at, $at, $t0
    gpr jr_addend_800A1EF4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A1EEC: lw          $t0, 0x4930($at)
    ctx->r8 = ADD32(ctx->r1, 0X4930);
    // 0x800A1EF0: nop

    // 0x800A1EF4: jr          $t0
    // 0x800A1EF8: nop

    switch (jr_addend_800A1EF4 >> 2) {
        case 0: goto L_800A1EFC; break;
        case 1: goto L_800A1F0C; break;
        case 2: goto L_800A1F1C; break;
        case 3: goto L_800A1F3C; break;
        case 4: goto L_800A1F5C; break;
        case 5: goto L_800A1F4C; break;
        case 6: goto L_800A1F6C; break;
        case 7: goto L_800A1F2C; break;
        default: switch_error(__func__, 0x800A1EF4, 0x80114930);
    }
    // 0x800A1EF8: nop

L_800A1EFC:
    // 0x800A1EFC: jal         0x800A17E8
    // 0x800A1F00: nop

    func_800A17E8(rdram, ctx);
        goto after_0;
    // 0x800A1F00: nop

    after_0:
    // 0x800A1F04: b           L_800A1F84
    // 0x800A1F08: nop

        goto L_800A1F84;
    // 0x800A1F08: nop

L_800A1F0C:
    // 0x800A1F0C: jal         0x800A1A0C
    // 0x800A1F10: nop

    func_800A1A0C(rdram, ctx);
        goto after_1;
    // 0x800A1F10: nop

    after_1:
    // 0x800A1F14: b           L_800A1F84
    // 0x800A1F18: nop

        goto L_800A1F84;
    // 0x800A1F18: nop

L_800A1F1C:
    // 0x800A1F1C: jal         0x800A1DAC
    // 0x800A1F20: nop

    func_800A1DAC(rdram, ctx);
        goto after_2;
    // 0x800A1F20: nop

    after_2:
    // 0x800A1F24: b           L_800A1F84
    // 0x800A1F28: nop

        goto L_800A1F84;
    // 0x800A1F28: nop

L_800A1F2C:
    // 0x800A1F2C: jal         0x800A28AC
    // 0x800A1F30: nop

    func_800A28AC(rdram, ctx);
        goto after_3;
    // 0x800A1F30: nop

    after_3:
    // 0x800A1F34: b           L_800A1F84
    // 0x800A1F38: nop

        goto L_800A1F84;
    // 0x800A1F38: nop

L_800A1F3C:
    // 0x800A1F3C: jal         0x800A25F0
    // 0x800A1F40: nop

    func_800A25F0(rdram, ctx);
        goto after_4;
    // 0x800A1F40: nop

    after_4:
    // 0x800A1F44: b           L_800A1F84
    // 0x800A1F48: nop

        goto L_800A1F84;
    // 0x800A1F48: nop

L_800A1F4C:
    // 0x800A1F4C: jal         0x800A1E70
    // 0x800A1F50: nop

    func_800A1E70(rdram, ctx);
        goto after_5;
    // 0x800A1F50: nop

    after_5:
    // 0x800A1F54: b           L_800A1F84
    // 0x800A1F58: nop

        goto L_800A1F84;
    // 0x800A1F58: nop

L_800A1F5C:
    // 0x800A1F5C: jal         0x800A1E40
    // 0x800A1F60: nop

    func_800A1E40(rdram, ctx);
        goto after_6;
    // 0x800A1F60: nop

    after_6:
    // 0x800A1F64: b           L_800A1F84
    // 0x800A1F68: nop

        goto L_800A1F84;
    // 0x800A1F68: nop

L_800A1F6C:
    // 0x800A1F6C: jal         0x800A1E80
    // 0x800A1F70: nop

    func_800A1E80(rdram, ctx);
        goto after_7;
    // 0x800A1F70: nop

    after_7:
    // 0x800A1F74: b           L_800A1F84
    // 0x800A1F78: nop

        goto L_800A1F84;
    // 0x800A1F78: nop

L_800A1F7C:
    // 0x800A1F7C: b           L_800A1F84
    // 0x800A1F80: nop

        goto L_800A1F84;
    // 0x800A1F80: nop

L_800A1F84:
    // 0x800A1F84: b           L_800A1F8C
    // 0x800A1F88: nop

        goto L_800A1F8C;
    // 0x800A1F88: nop

L_800A1F8C:
    // 0x800A1F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1F90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A1F94: jr          $ra
    // 0x800A1F98: nop

    return;
    // 0x800A1F98: nop

    // 0x800A1F9C: jr          $ra
    // 0x800A1FA0: nop

    return;
    // 0x800A1FA0: nop

    // 0x800A1FA4: jr          $ra
    // 0x800A1FA8: nop

    return;
    // 0x800A1FA8: nop

;}
RECOMP_FUNC void func_8007FF44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FF44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007FF48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007FF4C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007FF50: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8007FF54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007FF58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8007FF5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007FF60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007FF64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FF68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007FF6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007FF70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007FF74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007FF78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007FF7C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007FF80: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007FF84: addiu       $t0, $zero, 0x2C1
    ctx->r8 = ADD32(0, 0X2C1);
    // 0x8007FF88: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x8007FF8C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007FF90: lwc1        $f4, -0x34F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X34F0);
    // 0x8007FF94: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007FF98: nop

    // 0x8007FF9C: swc1        $f4, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f4.u32l;
    // 0x8007FFA0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8007FFA4: nop

    // 0x8007FFA8: lwc1        $f20, 0x14($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X14);
    // 0x8007FFAC: nop

    // 0x8007FFB0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x8007FFB4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007FFB8: nop

    // 0x8007FFBC: swc1        $f20, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f20.u32l;
    // 0x8007FFC0: jal         0x80014E80
    // 0x8007FFC4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8007FFC4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8007FFC8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007FFCC: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8007FFD0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x8007FFD4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007FFD8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8007FFDC: sh          $t7, 0xBE($t8)
    MEM_H(0XBE, ctx->r24) = ctx->r15;
    // 0x8007FFE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007FFE4: nop

    // 0x8007FFE8: sh          $zero, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = 0;
    // 0x8007FFEC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007FFF0: addiu       $t0, $zero, 0x21
    ctx->r8 = ADD32(0, 0X21);
    // 0x8007FFF4: sh          $t0, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r8;
    // 0x8007FFF8: b           L_80080000
    // 0x8007FFFC: nop

        goto L_80080000;
    // 0x8007FFFC: nop

L_80080000:
    // 0x80080000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80080004: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80080008: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8008000C: jr          $ra
    // 0x80080010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80080010: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800EFA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EFA80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EFA84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EFA88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EFA8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EFA90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EFA94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EFA98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EFA9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EFAA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EFAA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EFAA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EFAAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EFAB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EFAB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EFAB8: nop

    // 0x800EFABC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EFAC0: nop

    // 0x800EFAC4: bne         $t1, $zero, L_800EFB1C
    if (ctx->r9 != 0) {
        // 0x800EFAC8: nop
    
            goto L_800EFB1C;
    }
    // 0x800EFAC8: nop

    // 0x800EFACC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EFAD0: nop

    // 0x800EFAD4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EFAD8: nop

    // 0x800EFADC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EFAE0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EFAE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EFAE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800EFAEC: nop

    // 0x800EFAF0: swc1        $f4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f4.u32l;
    // 0x800EFAF4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800EFAF8: nop

    // 0x800EFAFC: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800EFB00: nop

    // 0x800EFB04: swc1        $f6, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f6.u32l;
    // 0x800EFB08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EFB0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EFB10: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800EFB14: jal         0x80029EF8
    // 0x800EFB18: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800EFB18: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
L_800EFB1C:
    // 0x800EFB1C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EFB20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EFB24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EFB28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800EFB2C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800EFB30: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x800EFB34: jal         0x80029F58
    // 0x800EFB38: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_1;
    // 0x800EFB38: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x800EFB3C: beq         $v0, $zero, L_800EFB54
    if (ctx->r2 == 0) {
        // 0x800EFB40: nop
    
            goto L_800EFB54;
    }
    // 0x800EFB40: nop

    // 0x800EFB44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EFB48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EFB4C: jal         0x8002B114
    // 0x800EFB50: nop

    func_8002B114(rdram, ctx);
        goto after_2;
    // 0x800EFB50: nop

    after_2:
L_800EFB54:
    // 0x800EFB54: b           L_800EFB5C
    // 0x800EFB58: nop

        goto L_800EFB5C;
    // 0x800EFB58: nop

L_800EFB5C:
    // 0x800EFB5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EFB60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EFB64: jr          $ra
    // 0x800EFB68: nop

    return;
    // 0x800EFB68: nop

;}
RECOMP_FUNC void _stub2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF70C: jr          $ra
    // 0x800BF710: nop

    return;
    // 0x800BF710: nop

    // 0x800BF714: jr          $ra
    // 0x800BF718: nop

    return;
    // 0x800BF718: nop

;}
RECOMP_FUNC void func_800FB694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FB698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB69C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FB6A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FB6A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FB6A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FB6AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB6B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FB6B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB6B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FB6BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FB6C0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800FB6C4: nop

    // 0x800FB6C8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800FB6CC: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x800FB6D0: beq         $at, $zero, L_800FB744
    if (ctx->r1 == 0) {
        // 0x800FB6D4: nop
    
            goto L_800FB744;
    }
    // 0x800FB6D4: nop

    // 0x800FB6D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FB6DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB6E0: addu        $at, $at, $t9
    gpr jr_addend_800FB6EC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800FB6E4: lw          $t9, 0x5788($at)
    ctx->r25 = ADD32(ctx->r1, 0X5788);
    // 0x800FB6E8: nop

    // 0x800FB6EC: jr          $t9
    // 0x800FB6F0: nop

    switch (jr_addend_800FB6EC >> 2) {
        case 0: goto L_800FB6F4; break;
        case 1: goto L_800FB704; break;
        case 2: goto L_800FB714; break;
        case 3: goto L_800FB724; break;
        case 4: goto L_800FB734; break;
        default: switch_error(__func__, 0x800FB6EC, 0x80115788);
    }
    // 0x800FB6F0: nop

L_800FB6F4:
    // 0x800FB6F4: jal         0x800FAE10
    // 0x800FB6F8: nop

    func_800FAE10(rdram, ctx);
        goto after_0;
    // 0x800FB6F8: nop

    after_0:
    // 0x800FB6FC: b           L_800FB74C
    // 0x800FB700: nop

        goto L_800FB74C;
    // 0x800FB700: nop

L_800FB704:
    // 0x800FB704: jal         0x800FAF10
    // 0x800FB708: nop

    func_800FAF10(rdram, ctx);
        goto after_1;
    // 0x800FB708: nop

    after_1:
    // 0x800FB70C: b           L_800FB74C
    // 0x800FB710: nop

        goto L_800FB74C;
    // 0x800FB710: nop

L_800FB714:
    // 0x800FB714: jal         0x800FB05C
    // 0x800FB718: nop

    func_800FB05C(rdram, ctx);
        goto after_2;
    // 0x800FB718: nop

    after_2:
    // 0x800FB71C: b           L_800FB74C
    // 0x800FB720: nop

        goto L_800FB74C;
    // 0x800FB720: nop

L_800FB724:
    // 0x800FB724: jal         0x800FB344
    // 0x800FB728: nop

    func_800FB344(rdram, ctx);
        goto after_3;
    // 0x800FB728: nop

    after_3:
    // 0x800FB72C: b           L_800FB74C
    // 0x800FB730: nop

        goto L_800FB74C;
    // 0x800FB730: nop

L_800FB734:
    // 0x800FB734: jal         0x800FB548
    // 0x800FB738: nop

    func_800FB548(rdram, ctx);
        goto after_4;
    // 0x800FB738: nop

    after_4:
    // 0x800FB73C: b           L_800FB74C
    // 0x800FB740: nop

        goto L_800FB74C;
    // 0x800FB740: nop

L_800FB744:
    // 0x800FB744: b           L_800FB74C
    // 0x800FB748: nop

        goto L_800FB74C;
    // 0x800FB748: nop

L_800FB74C:
    // 0x800FB74C: b           L_800FB754
    // 0x800FB750: nop

        goto L_800FB754;
    // 0x800FB750: nop

L_800FB754:
    // 0x800FB754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FB75C: jr          $ra
    // 0x800FB760: nop

    return;
    // 0x800FB760: nop

;}
RECOMP_FUNC void func_800D33B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D33B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D33B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D33B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D33BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D33C0: jal         0x8002B0E4
    // 0x800D33C4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800D33C4: nop

    after_0:
    // 0x800D33C8: b           L_800D33D0
    // 0x800D33CC: nop

        goto L_800D33D0;
    // 0x800D33CC: nop

L_800D33D0:
    // 0x800D33D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D33D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D33D8: jr          $ra
    // 0x800D33DC: nop

    return;
    // 0x800D33DC: nop

;}
RECOMP_FUNC void func_8005FBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FBC0: jr          $ra
    // 0x8005FBC4: nop

    return;
    // 0x8005FBC4: nop

    // 0x8005FBC8: jr          $ra
    // 0x8005FBCC: nop

    return;
    // 0x8005FBCC: nop

;}
RECOMP_FUNC void func_8006B920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B928: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006B92C: lh          $t6, 0x4C22($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4C22);
    // 0x8006B930: nop

    // 0x8006B934: beq         $t6, $zero, L_8006B988
    if (ctx->r14 == 0) {
        // 0x8006B938: nop
    
            goto L_8006B988;
    }
    // 0x8006B938: nop

    // 0x8006B93C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006B940: lhu         $t7, 0x7950($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7950);
    // 0x8006B944: nop

    // 0x8006B948: bne         $t7, $zero, L_8006B974
    if (ctx->r15 != 0) {
        // 0x8006B94C: nop
    
            goto L_8006B974;
    }
    // 0x8006B94C: nop

    // 0x8006B950: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8006B954: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8006B958: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8006B95C: jal         0x80017BEC
    // 0x8006B960: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80017BEC(rdram, ctx);
        goto after_0;
    // 0x8006B960: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x8006B964: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x8006B968: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B96C: b           L_8006B988
    // 0x8006B970: sh          $t8, 0x7950($at)
    MEM_H(0X7950, ctx->r1) = ctx->r24;
        goto L_8006B988;
    // 0x8006B970: sh          $t8, 0x7950($at)
    MEM_H(0X7950, ctx->r1) = ctx->r24;
L_8006B974:
    // 0x8006B974: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006B978: lhu         $t9, 0x7950($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7950);
    // 0x8006B97C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B980: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8006B984: sh          $t0, 0x7950($at)
    MEM_H(0X7950, ctx->r1) = ctx->r8;
L_8006B988:
    // 0x8006B988: b           L_8006B990
    // 0x8006B98C: nop

        goto L_8006B990;
    // 0x8006B98C: nop

L_8006B990:
    // 0x8006B990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006B998: jr          $ra
    // 0x8006B99C: nop

    return;
    // 0x8006B99C: nop

;}
RECOMP_FUNC void func_80079AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079AD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079AE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80079AE4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80079AE8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80079AEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80079AF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80079AF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079AFC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80079B00: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80079B04: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80079B08: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80079B0C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80079B10: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80079B14: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80079B18: lwc1        $f9, -0x3610($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X3610);
    // 0x80079B1C: lwc1        $f8, -0x360C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X360C);
    // 0x80079B20: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80079B24: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80079B28: jal         0x80034970
    // 0x80079B2C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80079B2C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80079B30: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80079B34: nop

    // 0x80079B38: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80079B3C: nop

    // 0x80079B40: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80079B44: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x80079B48: b           L_80079B50
    // 0x80079B4C: nop

        goto L_80079B50;
    // 0x80079B4C: nop

L_80079B50:
    // 0x80079B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80079B58: jr          $ra
    // 0x80079B5C: nop

    return;
    // 0x80079B5C: nop

;}
RECOMP_FUNC void func_8008AE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AE64: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008AE68: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008AE6C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008AE70: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008AE74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008AE78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008AE7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008AE80: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008AE84: nop

    // 0x8008AE88: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8008AE8C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8008AE90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008AE94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008AE98: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008AE9C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008AEA0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008AEA4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8008AEA8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8008AEAC: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8008AEB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AEB4: swc1        $f4, 0x4F28($at)
    MEM_W(0X4F28, ctx->r1) = ctx->f4.u32l;
    // 0x8008AEB8: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8008AEBC: lh          $t1, 0x2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2);
    // 0x8008AEC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008AEC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008AEC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008AECC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8008AED0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008AED4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008AED8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008AEDC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008AEE0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8008AEE4: lwc1        $f10, 0x4154($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8008AEE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AEEC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8008AEF0: swc1        $f16, 0x4F2C($at)
    MEM_W(0X4F2C, ctx->r1) = ctx->f16.u32l;
    // 0x8008AEF4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8008AEF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008AEFC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008AF00: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008AF04: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008AF08: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008AF0C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008AF10: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8008AF14: lwc1        $f18, 0x4158($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8008AF18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AF1C: swc1        $f18, 0x4F30($at)
    MEM_W(0X4F30, ctx->r1) = ctx->f18.u32l;
    // 0x8008AF20: lh          $t6, 0x4($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X4);
    // 0x8008AF24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AF28: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8008AF2C: nop

    // 0x8008AF30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008AF34: swc1        $f6, 0x4F34($at)
    MEM_W(0X4F34, ctx->r1) = ctx->f6.u32l;
    // 0x8008AF38: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8008AF3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AF40: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8008AF44: nop

    // 0x8008AF48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008AF4C: swc1        $f10, 0x4F38($at)
    MEM_W(0X4F38, ctx->r1) = ctx->f10.u32l;
    // 0x8008AF50: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x8008AF54: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AF58: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8008AF5C: nop

    // 0x8008AF60: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008AF64: swc1        $f18, 0x4F3C($at)
    MEM_W(0X4F3C, ctx->r1) = ctx->f18.u32l;
    // 0x8008AF68: lh          $t9, 0xA($a0)
    ctx->r25 = MEM_H(ctx->r4, 0XA);
    // 0x8008AF6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AF70: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008AF74: nop

    // 0x8008AF78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008AF7C: swc1        $f6, 0x4F40($at)
    MEM_W(0X4F40, ctx->r1) = ctx->f6.u32l;
    // 0x8008AF80: lh          $t0, 0x2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2);
    // 0x8008AF84: nop

    // 0x8008AF88: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8008AF8C: nop

    // 0x8008AF90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008AF94: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8008AF98: nop

    // 0x8008AF9C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x8008AFA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8008AFA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8008AFA8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AFAC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8008AFB0: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x8008AFB4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8008AFB8: sh          $t2, 0x4FA6($at)
    MEM_H(0X4FA6, ctx->r1) = ctx->r10;
    // 0x8008AFBC: nop

    // 0x8008AFC0: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x8008AFC4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AFC8: sw          $t3, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = ctx->r11;
    // 0x8008AFCC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008AFD0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AFD4: swc1        $f18, 0x4F50($at)
    MEM_W(0X4F50, ctx->r1) = ctx->f18.u32l;
    // 0x8008AFD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008AFDC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AFE0: swc1        $f4, 0x4F54($at)
    MEM_W(0X4F54, ctx->r1) = ctx->f4.u32l;
    // 0x8008AFE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008AFE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AFEC: swc1        $f6, 0x4F58($at)
    MEM_W(0X4F58, ctx->r1) = ctx->f6.u32l;
    // 0x8008AFF0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8008AFF4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008AFF8: swc1        $f8, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f8.u32l;
    // 0x8008AFFC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8008B000: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B004: swc1        $f10, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f10.u32l;
    // 0x8008B008: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008B00C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B010: swc1        $f16, 0x4F64($at)
    MEM_W(0X4F64, ctx->r1) = ctx->f16.u32l;
    // 0x8008B014: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008B018: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008B01C: swc1        $f18, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->f18.u32l;
    // 0x8008B020: b           L_8008B028
    // 0x8008B024: nop

        goto L_8008B028;
    // 0x8008B024: nop

L_8008B028:
    // 0x8008B028: jr          $ra
    // 0x8008B02C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008B02C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800D1298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D1298: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D129C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D12A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D12A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D12A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D12AC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D12B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D12B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D12B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D12BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D12C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D12C4: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D12C8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D12CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D12D0: beq         $s0, $at, L_800D12F8
    if (ctx->r16 == ctx->r1) {
        // 0x800D12D4: nop
    
            goto L_800D12F8;
    }
    // 0x800D12D4: nop

    // 0x800D12D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D12DC: beq         $s0, $at, L_800D1308
    if (ctx->r16 == ctx->r1) {
        // 0x800D12E0: nop
    
            goto L_800D1308;
    }
    // 0x800D12E0: nop

    // 0x800D12E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D12E8: beq         $s0, $at, L_800D1318
    if (ctx->r16 == ctx->r1) {
        // 0x800D12EC: nop
    
            goto L_800D1318;
    }
    // 0x800D12EC: nop

    // 0x800D12F0: b           L_800D1328
    // 0x800D12F4: nop

        goto L_800D1328;
    // 0x800D12F4: nop

L_800D12F8:
    // 0x800D12F8: jal         0x800D0CA0
    // 0x800D12FC: nop

    func_800D0CA0(rdram, ctx);
        goto after_0;
    // 0x800D12FC: nop

    after_0:
    // 0x800D1300: b           L_800D1330
    // 0x800D1304: nop

        goto L_800D1330;
    // 0x800D1304: nop

L_800D1308:
    // 0x800D1308: jal         0x800D0F98
    // 0x800D130C: nop

    func_800D0F98(rdram, ctx);
        goto after_1;
    // 0x800D130C: nop

    after_1:
    // 0x800D1310: b           L_800D1330
    // 0x800D1314: nop

        goto L_800D1330;
    // 0x800D1314: nop

L_800D1318:
    // 0x800D1318: jal         0x800D1268
    // 0x800D131C: nop

    func_800D1268(rdram, ctx);
        goto after_2;
    // 0x800D131C: nop

    after_2:
    // 0x800D1320: b           L_800D1330
    // 0x800D1324: nop

        goto L_800D1330;
    // 0x800D1324: nop

L_800D1328:
    // 0x800D1328: b           L_800D1330
    // 0x800D132C: nop

        goto L_800D1330;
    // 0x800D132C: nop

L_800D1330:
    // 0x800D1330: b           L_800D1338
    // 0x800D1334: nop

        goto L_800D1338;
    // 0x800D1334: nop

L_800D1338:
    // 0x800D1338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D133C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D1340: jr          $ra
    // 0x800D1344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D1344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8005FAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FAA0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8005FAA4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8005FAA8: b           L_8005FAB0
    // 0x8005FAAC: nop

        goto L_8005FAB0;
    // 0x8005FAAC: nop

L_8005FAB0:
    // 0x8005FAB0: jr          $ra
    // 0x8005FAB4: nop

    return;
    // 0x8005FAB4: nop

;}
RECOMP_FUNC void func_800EDA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDA88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800EDA8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EDA90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EDA94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EDA98: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EDA9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EDAA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDAA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EDAA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDAAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EDAB0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800EDAB4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800EDAB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EDABC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EDAC0: jal         0x8002B0E4
    // 0x800EDAC4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800EDAC4: nop

    after_0:
    // 0x800EDAC8: b           L_800EDAD0
    // 0x800EDACC: nop

        goto L_800EDAD0;
    // 0x800EDACC: nop

L_800EDAD0:
    // 0x800EDAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EDAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800EDAD8: jr          $ra
    // 0x800EDADC: nop

    return;
    // 0x800EDADC: nop

;}
RECOMP_FUNC void func_80071CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071CF4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80071CF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80071CFC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80071D00: nop

    // 0x80071D04: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80071D08: nop

    // 0x80071D0C: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x80071D10: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80071D14: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80071D18: nop

    // 0x80071D1C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80071D20: nop

    // 0x80071D24: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
    // 0x80071D28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80071D2C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80071D30: nop

    // 0x80071D34: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80071D38: nop

    // 0x80071D3C: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x80071D40: bne         $a0, $zero, L_80071D7C
    if (ctx->r4 != 0) {
        // 0x80071D44: nop
    
            goto L_80071D7C;
    }
    // 0x80071D44: nop

    // 0x80071D48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D4C: lwc1        $f10, -0x1EBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80071D50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D54: swc1        $f10, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f10.u32l;
    // 0x80071D58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D5C: lwc1        $f16, -0x1EA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x80071D60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D64: swc1        $f16, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f16.u32l;
    // 0x80071D68: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D6C: lwc1        $f18, -0x1E90($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1E90);
    // 0x80071D70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D74: b           L_80071E18
    // 0x80071D78: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
        goto L_80071E18;
    // 0x80071D78: swc1        $f18, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f18.u32l;
L_80071D7C:
    // 0x80071D7C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D80: lwc1        $f4, -0x1EBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80071D84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D88: swc1        $f4, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f4.u32l;
    // 0x80071D8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071D90: lwc1        $f6, 0x75C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x80071D94: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80071D98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80071D9C: nop

    // 0x80071DA0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80071DA4: nop

    // 0x80071DA8: bc1f        L_80071DD8
    if (!c1cs) {
        // 0x80071DAC: nop
    
            goto L_80071DD8;
    }
    // 0x80071DAC: nop

    // 0x80071DB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071DB4: lwc1        $f10, 0x75C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x80071DB8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80071DBC: lwc1        $f19, 0x5600($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5600);
    // 0x80071DC0: lwc1        $f18, 0x5604($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5604);
    // 0x80071DC4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80071DC8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80071DCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071DD0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80071DD4: swc1        $f6, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f6.u32l;
L_80071DD8:
    // 0x80071DD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071DDC: lwc1        $f8, 0x75D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80071DE0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80071DE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80071DE8: nop

    // 0x80071DEC: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80071DF0: nop

    // 0x80071DF4: bc1f        L_80071E18
    if (!c1cs) {
        // 0x80071DF8: nop
    
            goto L_80071E18;
    }
    // 0x80071DF8: nop

    // 0x80071DFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071E00: lwc1        $f16, 0x75D8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80071E04: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071E08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80071E0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80071E10: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80071E14: swc1        $f4, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f4.u32l;
L_80071E18:
    // 0x80071E18: b           L_80071E20
    // 0x80071E1C: nop

        goto L_80071E20;
    // 0x80071E1C: nop

L_80071E20:
    // 0x80071E20: jr          $ra
    // 0x80071E24: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80071E24: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800DE564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DE564: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800DE568: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DE56C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DE570: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DE574: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DE578: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE57C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DE580: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DE584: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DE588: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DE58C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DE590: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800DE594: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800DE598: nop

    // 0x800DE59C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DE5A0: nop

    // 0x800DE5A4: bne         $t1, $zero, L_800DE644
    if (ctx->r9 != 0) {
        // 0x800DE5A8: nop
    
            goto L_800DE644;
    }
    // 0x800DE5A8: nop

    // 0x800DE5AC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800DE5B0: nop

    // 0x800DE5B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DE5B8: nop

    // 0x800DE5BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DE5C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DE5C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DE5C8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DE5CC: nop

    // 0x800DE5D0: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800DE5D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DE5D8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DE5DC: nop

    // 0x800DE5E0: swc1        $f6, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f6.u32l;
    // 0x800DE5E4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800DE5E8: nop

    // 0x800DE5EC: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800DE5F0: nop

    // 0x800DE5F4: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x800DE5F8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800DE5FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DE600: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800DE604: nop

    // 0x800DE608: bne         $t9, $at, L_800DE62C
    if (ctx->r25 != ctx->r1) {
        // 0x800DE60C: nop
    
            goto L_800DE62C;
    }
    // 0x800DE60C: nop

    // 0x800DE610: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800DE614: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800DE618: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800DE61C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800DE620: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800DE624: b           L_800DE644
    // 0x800DE628: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
        goto L_800DE644;
    // 0x800DE628: sh          $t3, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r11;
L_800DE62C:
    // 0x800DE62C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800DE630: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800DE634: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800DE638: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800DE63C: nop

    // 0x800DE640: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800DE644:
    // 0x800DE644: b           L_800DE64C
    // 0x800DE648: nop

        goto L_800DE64C;
    // 0x800DE648: nop

L_800DE64C:
    // 0x800DE64C: jr          $ra
    // 0x800DE650: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800DE650: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80092F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092F1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092F20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092F24: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092F28: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092F2C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092F30: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092F34: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092F38: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092F3C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092F40: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092F44: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092F48: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092F4C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092F50: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092F54: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092F58: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092F5C: addiu       $a1, $a1, 0x1798
    ctx->r5 = ADD32(ctx->r5, 0X1798);
    // 0x80092F60: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092F64: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092F68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092F6C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092F70: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092F74: jal         0x80027464
    // 0x80092F78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092F78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092F7C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092F80: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092F84: addiu       $t1, $t1, 0x31B0
    ctx->r9 = ADD32(ctx->r9, 0X31B0);
    // 0x80092F88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092F8C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092F90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80092F94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092F98: jal         0x8001C0EC
    // 0x80092F9C: addiu       $a3, $zero, 0x282
    ctx->r7 = ADD32(0, 0X282);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092F9C: addiu       $a3, $zero, 0x282
    ctx->r7 = ADD32(0, 0X282);
    after_1:
    // 0x80092FA0: b           L_80092FA8
    // 0x80092FA4: nop

        goto L_80092FA8;
    // 0x80092FA4: nop

L_80092FA8:
    // 0x80092FA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092FAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092FB0: jr          $ra
    // 0x80092FB4: nop

    return;
    // 0x80092FB4: nop

;}
RECOMP_FUNC void func_800D2A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2A04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D2A08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D2A0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2A10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2A14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D2A18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D2A1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2A20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2A28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D2A2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D2A30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2A34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D2A38: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D2A3C: nop

    // 0x800D2A40: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D2A44: nop

    // 0x800D2A48: bne         $t1, $zero, L_800D2A98
    if (ctx->r9 != 0) {
        // 0x800D2A4C: nop
    
            goto L_800D2A98;
    }
    // 0x800D2A4C: nop

    // 0x800D2A50: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D2A54: nop

    // 0x800D2A58: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D2A5C: nop

    // 0x800D2A60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D2A64: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D2A68: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800D2A6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D2A70: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2A74: nop

    // 0x800D2A78: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800D2A7C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D2A80: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800D2A84: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800D2A88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2A8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2A90: jal         0x8001BBDC
    // 0x800D2A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800D2A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800D2A98:
    // 0x800D2A98: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D2A9C: nop

    // 0x800D2AA0: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800D2AA4: nop

    // 0x800D2AA8: beq         $t9, $zero, L_800D2B64
    if (ctx->r25 == 0) {
        // 0x800D2AAC: nop
    
            goto L_800D2B64;
    }
    // 0x800D2AAC: nop

    // 0x800D2AB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D2AB4: nop

    // 0x800D2AB8: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800D2ABC: nop

    // 0x800D2AC0: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800D2AC4: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
    // 0x800D2AC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2ACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2AD0: jal         0x8002A46C
    // 0x800D2AD4: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800D2AD4: nop

    after_1:
    // 0x800D2AD8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800D2ADC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2AE0: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800D2AE4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D2AE8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D2AEC: nop

    // 0x800D2AF0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D2AF4: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x800D2AF8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800D2AFC: sh          $t2, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r10;
    // 0x800D2B00: nop

    // 0x800D2B04: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B08: nop

    // 0x800D2B0C: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800D2B10: nop

    // 0x800D2B14: slti        $at, $t7, 0xB4
    ctx->r1 = SIGNED(ctx->r15) < 0XB4 ? 1 : 0;
    // 0x800D2B18: bne         $at, $zero, L_800D2B3C
    if (ctx->r1 != 0) {
        // 0x800D2B1C: nop
    
            goto L_800D2B3C;
    }
    // 0x800D2B1C: nop

    // 0x800D2B20: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B24: addiu       $t8, $zero, -0x5
    ctx->r24 = ADD32(0, -0X5);
    // 0x800D2B28: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
    // 0x800D2B2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B30: addiu       $t1, $zero, -0x4
    ctx->r9 = ADD32(0, -0X4);
    // 0x800D2B34: b           L_800D2B54
    // 0x800D2B38: sh          $t1, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r9;
        goto L_800D2B54;
    // 0x800D2B38: sh          $t1, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = ctx->r9;
L_800D2B3C:
    // 0x800D2B3C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B40: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x800D2B44: sh          $t0, 0xAC($t4)
    MEM_H(0XAC, ctx->r12) = ctx->r8;
    // 0x800D2B48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B4C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x800D2B50: sh          $t2, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r10;
L_800D2B54:
    // 0x800D2B54: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B58: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800D2B5C: b           L_800D2C90
    // 0x800D2B60: sh          $t6, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r14;
        goto L_800D2C90;
    // 0x800D2B60: sh          $t6, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r14;
L_800D2B64:
    // 0x800D2B64: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B68: nop

    // 0x800D2B6C: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x800D2B70: nop

    // 0x800D2B74: beq         $t9, $zero, L_800D2C48
    if (ctx->r25 == 0) {
        // 0x800D2B78: nop
    
            goto L_800D2C48;
    }
    // 0x800D2B78: nop

    // 0x800D2B7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D2B80: nop

    // 0x800D2B84: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x800D2B88: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800D2B8C: negu        $t0, $t3
    ctx->r8 = SUB32(0, ctx->r11);
    // 0x800D2B90: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800D2B94: jal         0x80015538
    // 0x800D2B98: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800D2B98: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_2:
    // 0x800D2B9C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800D2BA0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2BA4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800D2BA8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800D2BAC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800D2BB0: nop

    // 0x800D2BB4: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800D2BB8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x800D2BBC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800D2BC0: sh          $t2, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = ctx->r10;
    // 0x800D2BC4: nop

    // 0x800D2BC8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D2BCC: nop

    // 0x800D2BD0: lh          $t7, 0xB0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB0);
    // 0x800D2BD4: nop

    // 0x800D2BD8: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x800D2BDC: bne         $at, $zero, L_800D2BF0
    if (ctx->r1 != 0) {
        // 0x800D2BE0: nop
    
            goto L_800D2BF0;
    }
    // 0x800D2BE0: nop

    // 0x800D2BE4: slti        $at, $t7, 0x163
    ctx->r1 = SIGNED(ctx->r15) < 0X163 ? 1 : 0;
    // 0x800D2BE8: bne         $at, $zero, L_800D2C34
    if (ctx->r1 != 0) {
        // 0x800D2BEC: nop
    
            goto L_800D2C34;
    }
    // 0x800D2BEC: nop

L_800D2BF0:
    // 0x800D2BF0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D2BF4: nop

    // 0x800D2BF8: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800D2BFC: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800D2C00: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x800D2C04: jal         0x80015538
    // 0x800D2C08: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800D2C08: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_3:
    // 0x800D2C0C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C10: nop

    // 0x800D2C14: swc1        $f0, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f0.u32l;
    // 0x800D2C18: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C1C: nop

    // 0x800D2C20: lh          $t0, 0xAE($t3)
    ctx->r8 = MEM_H(ctx->r11, 0XAE);
    // 0x800D2C24: nop

    // 0x800D2C28: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x800D2C2C: b           L_800D2C40
    // 0x800D2C30: sh          $t4, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r12;
        goto L_800D2C40;
    // 0x800D2C30: sh          $t4, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r12;
L_800D2C34:
    // 0x800D2C34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C38: nop

    // 0x800D2C3C: sh          $zero, 0xAE($t2)
    MEM_H(0XAE, ctx->r10) = 0;
L_800D2C40:
    // 0x800D2C40: b           L_800D2C68
    // 0x800D2C44: nop

        goto L_800D2C68;
    // 0x800D2C44: nop

L_800D2C48:
    // 0x800D2C48: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C4C: nop

    // 0x800D2C50: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800D2C54: nop

    // 0x800D2C58: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x800D2C5C: nop

    // 0x800D2C60: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800D2C64: swc1        $f4, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f4.u32l;
L_800D2C68:
    // 0x800D2C68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C6C: nop

    // 0x800D2C70: lh          $t8, 0xAC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XAC);
    // 0x800D2C74: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800D2C78: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D2C7C: jal         0x80015538
    // 0x800D2C80: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800D2C80: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x800D2C84: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C88: nop

    // 0x800D2C8C: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
L_800D2C90:
    // 0x800D2C90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800D2C94: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D2C98: nop

    // 0x800D2C9C: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
    // 0x800D2CA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2CA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2CA8: jal         0x80029C40
    // 0x800D2CAC: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800D2CAC: nop

    after_5:
    // 0x800D2CB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D2CB4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800D2CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2CC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800D2CC4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800D2CC8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800D2CCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D2CD0: jal         0x80029018
    // 0x800D2CD4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800D2CD4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x800D2CD8: beq         $v0, $zero, L_800D2D1C
    if (ctx->r2 == 0) {
        // 0x800D2CDC: nop
    
            goto L_800D2D1C;
    }
    // 0x800D2CDC: nop

    // 0x800D2CE0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800D2CE4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D2CE8: nop

    // 0x800D2CEC: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x800D2CF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D2CF4: nop

    // 0x800D2CF8: lwc1        $f4, 0x2C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800D2CFC: nop

    // 0x800D2D00: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
    // 0x800D2D04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D2D08: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800D2D0C: sh          $t3, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r11;
    // 0x800D2D10: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D2D14: nop

    // 0x800D2D18: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800D2D1C:
    // 0x800D2D1C: b           L_800D2D24
    // 0x800D2D20: nop

        goto L_800D2D24;
    // 0x800D2D20: nop

L_800D2D24:
    // 0x800D2D24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2D28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D2D2C: jr          $ra
    // 0x800D2D30: nop

    return;
    // 0x800D2D30: nop

;}
RECOMP_FUNC void func_800D4AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4AA4: jr          $ra
    // 0x800D4AA8: nop

    return;
    // 0x800D4AA8: nop

    // 0x800D4AAC: jr          $ra
    // 0x800D4AB0: nop

    return;
    // 0x800D4AB0: nop

;}
RECOMP_FUNC void func_800DDAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DDAA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DDAAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DDAB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DDAB4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DDAB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DDABC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DDAC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDAC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DDAC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DDACC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DDAD0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DDAD4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DDAD8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DDADC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DDAE0: nop

    // 0x800DDAE4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DDAE8: nop

    // 0x800DDAEC: bne         $t1, $zero, L_800DDBA4
    if (ctx->r9 != 0) {
        // 0x800DDAF0: nop
    
            goto L_800DDBA4;
    }
    // 0x800DDAF0: nop

    // 0x800DDAF4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800DDAF8: nop

    // 0x800DDAFC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DDB00: nop

    // 0x800DDB04: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DDB08: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DDB0C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800DDB10: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800DDB14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DDB18: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800DDB1C: nop

    // 0x800DDB20: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800DDB24: swc1        $f8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f8.u32l;
    // 0x800DDB28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDB2C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800DDB30: addiu       $t6, $t6, -0x700C
    ctx->r14 = ADD32(ctx->r14, -0X700C);
    // 0x800DDB34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDB38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800DDB3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDB40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800DDB44: jal         0x8001C0EC
    // 0x800DDB48: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800DDB48: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x800DDB4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDB50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDB54: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDB58: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DDB60: jal         0x8001ABF4
    // 0x800DDB64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800DDB64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800DDB68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDB6C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800DDB70: addiu       $a3, $a3, -0x6ED8
    ctx->r7 = ADD32(ctx->r7, -0X6ED8);
    // 0x800DDB74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDB78: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800DDB7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DDB80: jal         0x8001ABF4
    // 0x800DDB84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800DDB84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800DDB88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDB8C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDB90: jal         0x8001B754
    // 0x800DDB94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_3;
    // 0x800DDB94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800DDB98: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800DDB9C: nop

    // 0x800DDBA0: sb          $zero, 0x13A($t7)
    MEM_B(0X13A, ctx->r15) = 0;
L_800DDBA4:
    // 0x800DDBA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDBA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDBAC: jal         0x80028FA0
    // 0x800DDBB0: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800DDBB0: nop

    after_4:
    // 0x800DDBB4: beq         $v0, $zero, L_800DDBF0
    if (ctx->r2 == 0) {
        // 0x800DDBB8: nop
    
            goto L_800DDBF0;
    }
    // 0x800DDBB8: nop

    // 0x800DDBBC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800DDBC0: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x800DDBC4: lh          $t9, 0x106($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X106);
    // 0x800DDBC8: nop

    // 0x800DDBCC: beq         $t9, $at, L_800DDBE0
    if (ctx->r25 == ctx->r1) {
        // 0x800DDBD0: nop
    
            goto L_800DDBE0;
    }
    // 0x800DDBD0: nop

    // 0x800DDBD4: addiu       $at, $zero, 0xA3
    ctx->r1 = ADD32(0, 0XA3);
    // 0x800DDBD8: bne         $t9, $at, L_800DDBF0
    if (ctx->r25 != ctx->r1) {
        // 0x800DDBDC: nop
    
            goto L_800DDBF0;
    }
    // 0x800DDBDC: nop

L_800DDBE0:
    // 0x800DDBE0: jal         0x800E3EE4
    // 0x800DDBE4: nop

    func_800E3EE4(rdram, ctx);
        goto after_5;
    // 0x800DDBE4: nop

    after_5:
    // 0x800DDBE8: b           L_800DDC4C
    // 0x800DDBEC: nop

        goto L_800DDC4C;
    // 0x800DDBEC: nop

L_800DDBF0:
    // 0x800DDBF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDBF4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDBF8: jal         0x8002A8B4
    // 0x800DDBFC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x800DDBFC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_6:
    // 0x800DDC00: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DDC04: nop

    // 0x800DDC08: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800DDC0C: nop

    // 0x800DDC10: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x800DDC14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DDC18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DDC1C: jal         0x8001B4AC
    // 0x800DDC20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_7;
    // 0x800DDC20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800DDC24: beq         $v0, $zero, L_800DDC44
    if (ctx->r2 == 0) {
        // 0x800DDC28: nop
    
            goto L_800DDC44;
    }
    // 0x800DDC28: nop

    // 0x800DDC2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800DDC30: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800DDC34: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800DDC38: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800DDC3C: nop

    // 0x800DDC40: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800DDC44:
    // 0x800DDC44: b           L_800DDC4C
    // 0x800DDC48: nop

        goto L_800DDC4C;
    // 0x800DDC48: nop

L_800DDC4C:
    // 0x800DDC4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DDC50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800DDC54: jr          $ra
    // 0x800DDC58: nop

    return;
    // 0x800DDC58: nop

;}
