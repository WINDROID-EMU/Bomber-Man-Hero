#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009B548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009B548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009B54C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009B550: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009B554: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009B558: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009B55C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009B560: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009B564: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009B568: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009B56C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009B570: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009B574: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009B578: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009B57C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009B580: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009B584: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009B588: addiu       $a1, $a1, 0x3514
    ctx->r5 = ADD32(ctx->r5, 0X3514);
    // 0x8009B58C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009B590: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009B594: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009B598: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009B59C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009B5A0: jal         0x80027464
    // 0x8009B5A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009B5A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009B5A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009B5AC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009B5B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009B5B4: beq         $t1, $at, L_8009B5D8
    if (ctx->r9 == ctx->r1) {
        // 0x8009B5B8: nop
    
            goto L_8009B5D8;
    }
    // 0x8009B5B8: nop

    // 0x8009B5BC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8009B5C0: addiu       $t2, $t2, 0x2B08
    ctx->r10 = ADD32(ctx->r10, 0X2B08);
    // 0x8009B5C4: lw          $a3, 0xC0($t2)
    ctx->r7 = MEM_W(ctx->r10, 0XC0);
    // 0x8009B5C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009B5CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009B5D0: jal         0x8001ABF4
    // 0x8009B5D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009B5D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_8009B5D8:
    // 0x8009B5D8: b           L_8009B5E0
    // 0x8009B5DC: nop

        goto L_8009B5E0;
    // 0x8009B5DC: nop

L_8009B5E0:
    // 0x8009B5E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B5E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009B5E8: jr          $ra
    // 0x8009B5EC: nop

    return;
    // 0x8009B5EC: nop

;}
RECOMP_FUNC void func_800E3930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3930: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E3934: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3938: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E393C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3940: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3944: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3948: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E394C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3950: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3954: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3958: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E395C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E3960: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E3964: nop

    // 0x800E3968: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E396C: nop

    // 0x800E3970: bne         $t1, $zero, L_800E399C
    if (ctx->r9 != 0) {
        // 0x800E3974: nop
    
            goto L_800E399C;
    }
    // 0x800E3974: nop

    // 0x800E3978: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800E397C: nop

    // 0x800E3980: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E3984: nop

    // 0x800E3988: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E398C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E3990: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800E3994: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x800E3998: sh          $t5, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r13;
L_800E399C:
    // 0x800E399C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E39A0: nop

    // 0x800E39A4: lh          $t8, 0xC2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC2);
    // 0x800E39A8: nop

    // 0x800E39AC: bne         $t8, $zero, L_800E39CC
    if (ctx->r24 != 0) {
        // 0x800E39B0: nop
    
            goto L_800E39CC;
    }
    // 0x800E39B0: nop

    // 0x800E39B4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800E39B8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800E39BC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800E39C0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E39C4: b           L_800E39E4
    // 0x800E39C8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800E39E4;
    // 0x800E39C8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800E39CC:
    // 0x800E39CC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E39D0: nop

    // 0x800E39D4: lh          $t4, 0xC2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC2);
    // 0x800E39D8: nop

    // 0x800E39DC: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800E39E0: sh          $t2, 0xC2($t3)
    MEM_H(0XC2, ctx->r11) = ctx->r10;
L_800E39E4:
    // 0x800E39E4: b           L_800E39EC
    // 0x800E39E8: nop

        goto L_800E39EC;
    // 0x800E39E8: nop

L_800E39EC:
    // 0x800E39EC: jr          $ra
    // 0x800E39F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E39F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A3520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A3520: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800A3524: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A3528: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800A352C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A3530: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800A3534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A3538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A353C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A3540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A3544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A354C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A3550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A3554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A3558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A355C: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x800A3560: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3564: nop

    // 0x800A3568: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A356C: nop

    // 0x800A3570: bne         $t1, $zero, L_800A35B8
    if (ctx->r9 != 0) {
        // 0x800A3574: nop
    
            goto L_800A35B8;
    }
    // 0x800A3574: nop

    // 0x800A3578: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800A357C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A3580: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A3584: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A3588: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800A358C: nop

    // 0x800A3590: swc1        $f4, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f4.u32l;
    // 0x800A3594: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A3598: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x800A359C: nop

    // 0x800A35A0: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
    // 0x800A35A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A35A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A35AC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800A35B0: nop

    // 0x800A35B4: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
L_800A35B8:
    // 0x800A35B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A35BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A35C0: jal         0x80028FA0
    // 0x800A35C4: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800A35C4: nop

    after_0:
    // 0x800A35C8: beq         $v0, $zero, L_800A35E0
    if (ctx->r2 == 0) {
        // 0x800A35CC: nop
    
            goto L_800A35E0;
    }
    // 0x800A35CC: nop

    // 0x800A35D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A35D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A35D8: jal         0x80029B60
    // 0x800A35DC: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x800A35DC: nop

    after_1:
L_800A35E0:
    // 0x800A35E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A35E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A35E8: jal         0x80029C40
    // 0x800A35EC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A35EC: nop

    after_2:
    // 0x800A35F0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x800A35F4: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x800A35F8: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800A35FC: nop

    // 0x800A3600: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x800A3604: mfhi        $t9
    ctx->r25 = hi;
    // 0x800A3608: bne         $t9, $zero, L_800A362C
    if (ctx->r25 != 0) {
        // 0x800A360C: nop
    
            goto L_800A362C;
    }
    // 0x800A360C: nop

    // 0x800A3610: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3614: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A361C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x800A3620: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A3624: jal         0x800175F0
    // 0x800A3628: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800A3628: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_800A362C:
    // 0x800A362C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3630: nop

    // 0x800A3634: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800A3638: nop

    // 0x800A363C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800A3640: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
    // 0x800A3644: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A3648: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A364C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3650: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3654: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x800A3658: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x800A365C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A3660: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A3664: jal         0x800294F0
    // 0x800A3668: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800294F0(rdram, ctx);
        goto after_4;
    // 0x800A3668: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800A366C: sh          $v0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r2;
    // 0x800A3670: lh          $t3, 0x3E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X3E);
    // 0x800A3674: nop

    // 0x800A3678: beq         $t3, $zero, L_800A368C
    if (ctx->r11 == 0) {
        // 0x800A367C: nop
    
            goto L_800A368C;
    }
    // 0x800A367C: nop

    // 0x800A3680: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800A3684: nop

    // 0x800A3688: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
L_800A368C:
    // 0x800A368C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3690: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800A3694: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A3698: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A369C: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x800A36A0: jal         0x80015538
    // 0x800A36A4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800A36A4: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_5:
    // 0x800A36A8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800A36AC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800A36B0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800A36B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A36B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A36BC: nop

    // 0x800A36C0: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A36C4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800A36C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800A36CC: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800A36D0: nop

    // 0x800A36D4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800A36D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A36DC: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x800A36E0: lwc1        $f17, 0x4968($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4968);
    // 0x800A36E4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800A36E8: lwc1        $f16, 0x496C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X496C);
    // 0x800A36EC: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x800A36F0: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x800A36F4: jal         0x80034970
    // 0x800A36F8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x800A36F8: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_6:
    // 0x800A36FC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A3700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A3704: nop

    // 0x800A3708: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800A370C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x800A3710: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800A3714: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A3718: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A371C: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3720: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800A3724: lwc1        $f5, 0x4970($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4970);
    // 0x800A3728: lwc1        $f4, 0x4974($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4974);
    // 0x800A372C: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800A3730: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800A3734: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800A3738: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800A373C: sub.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d - ctx->f10.d;
    // 0x800A3740: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800A3744: swc1        $f18, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f18.u32l;
    // 0x800A3748: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A374C: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800A3750: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3754: lwc1        $f7, 0x4978($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4978);
    // 0x800A3758: lwc1        $f6, 0x497C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X497C);
    // 0x800A375C: lwc1        $f16, 0x4($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800A3760: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x800A3764: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x800A3768: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800A376C: c.lt.d      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.d < ctx->f18.d;
    // 0x800A3770: nop

    // 0x800A3774: bc1f        L_800A37B8
    if (!c1cs) {
        // 0x800A3778: nop
    
            goto L_800A37B8;
    }
    // 0x800A3778: nop

    // 0x800A377C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x800A3780: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A3784: lwc1        $f4, 0x48($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X48);
    // 0x800A3788: nop

    // 0x800A378C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x800A3790: nop

    // 0x800A3794: bc1f        L_800A37B8
    if (!c1cs) {
        // 0x800A3798: nop
    
            goto L_800A37B8;
    }
    // 0x800A3798: nop

    // 0x800A379C: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800A37A0: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800A37A4: lwc1        $f6, 0x54($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X54);
    // 0x800A37A8: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800A37AC: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800A37B0: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x800A37B4: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
L_800A37B8:
    // 0x800A37B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A37BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A37C0: jal         0x80029D04
    // 0x800A37C4: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x800A37C4: nop

    after_7:
    // 0x800A37C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A37CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A37D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A37D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A37D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A37DC: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x800A37E0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A37E4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A37E8: jal         0x80029018
    // 0x800A37EC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800A37EC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x800A37F0: beq         $v0, $zero, L_800A385C
    if (ctx->r2 == 0) {
        // 0x800A37F4: nop
    
            goto L_800A385C;
    }
    // 0x800A37F4: nop

    // 0x800A37F8: jal         0x800297DC
    // 0x800A37FC: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800A37FC: nop

    after_9:
    // 0x800A3800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3804: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3808: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A380C: jal         0x80029824
    // 0x800A3810: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800A3810: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800A3814: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3818: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x800A381C: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A3820: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A3824: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800A3828: jal         0x80015538
    // 0x800A382C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800A382C: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_11:
    // 0x800A3830: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800A3834: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3838: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800A383C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A3840: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A3844: nop

    // 0x800A3848: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800A384C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800A3850: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800A3854: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800A3858: nop

L_800A385C:
    // 0x800A385C: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3860: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A3864: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A3868: lwc1        $f18, 0x28($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X28);
    // 0x800A386C: nop

    // 0x800A3870: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800A3874: nop

    // 0x800A3878: bc1f        L_800A3890
    if (!c1cs) {
        // 0x800A387C: nop
    
            goto L_800A3890;
    }
    // 0x800A387C: nop

    // 0x800A3880: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x800A3884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A3888: b           L_800A38E0
    // 0x800A388C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
        goto L_800A38E0;
    // 0x800A388C: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_800A3890:
    // 0x800A3890: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3894: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A3898: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A389C: lwc1        $f6, 0x28($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800A38A0: nop

    // 0x800A38A4: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800A38A8: nop

    // 0x800A38AC: bc1f        L_800A38C4
    if (!c1cs) {
        // 0x800A38B0: nop
    
            goto L_800A38C4;
    }
    // 0x800A38B0: nop

    // 0x800A38B4: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x800A38B8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800A38BC: b           L_800A38D4
    // 0x800A38C0: nop

        goto L_800A38D4;
    // 0x800A38C0: nop

L_800A38C4:
    // 0x800A38C4: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x800A38C8: nop

    // 0x800A38CC: lwc1        $f20, 0x28($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800A38D0: nop

L_800A38D4:
    // 0x800A38D4: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800A38D8: nop

    // 0x800A38DC: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
L_800A38E0:
    // 0x800A38E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A38E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A38E8: jal         0x8002A46C
    // 0x800A38EC: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_12;
    // 0x800A38EC: nop

    after_12:
    // 0x800A38F0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800A38F4: nop

    // 0x800A38F8: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800A38FC: b           L_800A3904
    // 0x800A3900: nop

        goto L_800A3904;
    // 0x800A3900: nop

L_800A3904:
    // 0x800A3904: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A3908: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800A390C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800A3910: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A3914: jr          $ra
    // 0x800A3918: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800A3918: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80090B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090B94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80090B98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090B9C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090BA0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090BA4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090BA8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090BAC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090BB0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090BB4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090BB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090BBC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090BC0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090BC4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090BC8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090BCC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090BD0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80090BD4: addiu       $a1, $a1, 0x148C
    ctx->r5 = ADD32(ctx->r5, 0X148C);
    // 0x80090BD8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090BDC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090BE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80090BE4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090BE8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090BEC: jal         0x80027464
    // 0x80090BF0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090BF0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80090BF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090BF8: b           L_80090C00
    // 0x80090BFC: nop

        goto L_80090C00;
    // 0x80090BFC: nop

L_80090C00:
    // 0x80090C00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090C04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090C08: jr          $ra
    // 0x80090C0C: nop

    return;
    // 0x80090C0C: nop

;}
RECOMP_FUNC void func_800CC040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CC044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CC048: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800CC04C: lw          $a0, 0x519C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X519C);
    // 0x800CC050: jal         0x80026260
    // 0x800CC054: nop

    func_80026260(rdram, ctx);
        goto after_0;
    // 0x800CC054: nop

    after_0:
    // 0x800CC058: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CC05C: beq         $v0, $at, L_800CC17C
    if (ctx->r2 == ctx->r1) {
        // 0x800CC060: nop
    
            goto L_800CC17C;
    }
    // 0x800CC060: nop

    // 0x800CC064: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CC068: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CC06C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CC070: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800CC074: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800CC078: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800CC07C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CC080: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800CC084: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CC088: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CC08C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CC090: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CC094: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800CC098: addiu       $a1, $a1, 0x400C
    ctx->r5 = ADD32(ctx->r5, 0X400C);
    // 0x800CC09C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CC0A0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CC0A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800CC0A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CC0AC: jal         0x80027464
    // 0x800CC0B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_1;
    // 0x800CC0B0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x800CC0B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CC0B8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CC0BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CC0C0: beq         $t0, $at, L_800CC174
    if (ctx->r8 == ctx->r1) {
        // 0x800CC0C4: nop
    
            goto L_800CC174;
    }
    // 0x800CC0C4: nop

    // 0x800CC0C8: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CC0CC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800CC0D0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800CC0D4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC0D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CC0DC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC0E0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CC0E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CC0E8: lh          $t3, 0x423A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X423A);
    // 0x800CC0EC: nop

    // 0x800CC0F0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x800CC0F4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800CC0F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800CC0FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800CC100: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CC104: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CC108: lwc1        $f18, 0x4FF0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4FF0);
    // 0x800CC10C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CC110: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CC114: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC118: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CC11C: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x800CC120: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800CC124: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CC128: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CC12C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CC130: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CC134: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CC138: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CC13C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC140: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CC144: swc1        $f4, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f4.u32l;
    // 0x800CC148: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800CC14C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800CC150: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800CC154: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800CC158: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CC15C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CC160: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800CC164: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CC168: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC16C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CC170: swc1        $f6, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f6.u32l;
L_800CC174:
    // 0x800CC174: b           L_800CC208
    // 0x800CC178: nop

        goto L_800CC208;
    // 0x800CC178: nop

L_800CC17C:
    // 0x800CC17C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x800CC180: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x800CC184: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CC188: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x800CC18C: lh          $t2, 0x4($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X4);
    // 0x800CC190: lh          $t3, 0x6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0X6);
    // 0x800CC194: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x800CC198: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800CC19C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CC1A0: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x800CC1A4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CC1A8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800CC1AC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800CC1B0: addiu       $a1, $a1, 0x4030
    ctx->r5 = ADD32(ctx->r5, 0X4030);
    // 0x800CC1B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CC1B8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800CC1BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CC1C0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800CC1C4: jal         0x80027464
    // 0x800CC1C8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x800CC1C8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x800CC1CC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CC1D0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CC1D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CC1D8: beq         $t4, $at, L_800CC208
    if (ctx->r12 == ctx->r1) {
        // 0x800CC1DC: nop
    
            goto L_800CC208;
    }
    // 0x800CC1DC: nop

    // 0x800CC1E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CC1E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC1E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CC1EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CC1F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CC1F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CC1F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CC1FC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CC200: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800CC204: sh          $t5, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r13;
L_800CC208:
    // 0x800CC208: b           L_800CC210
    // 0x800CC20C: nop

        goto L_800CC210;
    // 0x800CC20C: nop

L_800CC210:
    // 0x800CC210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CC214: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CC218: jr          $ra
    // 0x800CC21C: nop

    return;
    // 0x800CC21C: nop

;}
RECOMP_FUNC void func_80095FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095FF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80095FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096000: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80096004: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80096008: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009600C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80096010: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80096014: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80096018: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009601C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80096020: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80096024: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80096028: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009602C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80096030: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80096034: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80096038: addiu       $a1, $a1, 0x340C
    ctx->r5 = ADD32(ctx->r5, 0X340C);
    // 0x8009603C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80096040: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80096044: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80096048: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009604C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80096050: jal         0x80027464
    // 0x80096054: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80096054: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80096058: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009605C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80096060: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80096064: beq         $t1, $at, L_8009609C
    if (ctx->r9 == ctx->r1) {
        // 0x80096068: nop
    
            goto L_8009609C;
    }
    // 0x80096068: nop

    // 0x8009606C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80096070: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80096074: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80096078: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009607C: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x80096080: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80096084: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80096088: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x8009608C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80096090: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096094: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80096098: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_8009609C:
    // 0x8009609C: b           L_800960A4
    // 0x800960A0: nop

        goto L_800960A4;
    // 0x800960A0: nop

L_800960A4:
    // 0x800960A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800960A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800960AC: jr          $ra
    // 0x800960B0: nop

    return;
    // 0x800960B0: nop

;}
RECOMP_FUNC void func_800DBCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DBCFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800DBD00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800DBD04: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800DBD08: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800DBD0C: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800DBD10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DBD14: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DBD18: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DBD1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DBD20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DBD24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DBD28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DBD2C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DBD30: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DBD34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DBD38: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800DBD3C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DBD40: nop

    // 0x800DBD44: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800DBD48: nop

    // 0x800DBD4C: bne         $t1, $zero, L_800DBDE0
    if (ctx->r9 != 0) {
        // 0x800DBD50: nop
    
            goto L_800DBDE0;
    }
    // 0x800DBD50: nop

    // 0x800DBD54: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DBD58: nop

    // 0x800DBD5C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800DBD60: nop

    // 0x800DBD64: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800DBD68: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800DBD6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBD70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBD74: jal         0x8002A46C
    // 0x800DBD78: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800DBD78: nop

    after_0:
    // 0x800DBD7C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DBD80: nop

    // 0x800DBD84: swc1        $f0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f0.u32l;
    // 0x800DBD88: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DBD8C: nop

    // 0x800DBD90: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800DBD94: nop

    // 0x800DBD98: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x800DBD9C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800DBDA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800DBDA4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DBDA8: nop

    // 0x800DBDAC: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x800DBDB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBDB4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800DBDB8: addiu       $t8, $t8, -0x714C
    ctx->r24 = ADD32(ctx->r24, -0X714C);
    // 0x800DBDBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBDC0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800DBDC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DBDC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800DBDCC: jal         0x8001C0EC
    // 0x800DBDD0: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800DBDD0: addiu       $a3, $zero, 0x56
    ctx->r7 = ADD32(0, 0X56);
    after_1:
    // 0x800DBDD4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DBDD8: nop

    // 0x800DBDDC: sh          $zero, 0xC0($t9)
    MEM_H(0XC0, ctx->r25) = 0;
L_800DBDE0:
    // 0x800DBDE0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DBDE4: nop

    // 0x800DBDE8: lh          $t1, 0xC0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC0);
    // 0x800DBDEC: nop

    // 0x800DBDF0: bne         $t1, $zero, L_800DBE28
    if (ctx->r9 != 0) {
        // 0x800DBDF4: nop
    
            goto L_800DBE28;
    }
    // 0x800DBDF4: nop

    // 0x800DBDF8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DBDFC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800DBE00: sh          $t3, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = ctx->r11;
    // 0x800DBE04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBE08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBE0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800DBE10: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x800DBE14: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800DBE18: jal         0x800175F0
    // 0x800DBE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800DBE1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x800DBE20: b           L_800DBE40
    // 0x800DBE24: nop

        goto L_800DBE40;
    // 0x800DBE24: nop

L_800DBE28:
    // 0x800DBE28: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DBE2C: nop

    // 0x800DBE30: lh          $t5, 0xC0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XC0);
    // 0x800DBE34: nop

    // 0x800DBE38: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800DBE3C: sh          $t6, 0xC0($t2)
    MEM_H(0XC0, ctx->r10) = ctx->r14;
L_800DBE40:
    // 0x800DBE40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBE44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBE48: jal         0x80028FA0
    // 0x800DBE4C: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x800DBE4C: nop

    after_3:
    // 0x800DBE50: beq         $v0, $zero, L_800DBE68
    if (ctx->r2 == 0) {
        // 0x800DBE54: nop
    
            goto L_800DBE68;
    }
    // 0x800DBE54: nop

    // 0x800DBE58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBE5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBE60: jal         0x80029B60
    // 0x800DBE64: nop

    func_80029B60(rdram, ctx);
        goto after_4;
    // 0x800DBE64: nop

    after_4:
L_800DBE68:
    // 0x800DBE68: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DBE6C: nop

    // 0x800DBE70: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800DBE74: nop

    // 0x800DBE78: beq         $t8, $zero, L_800DBECC
    if (ctx->r24 == 0) {
        // 0x800DBE7C: nop
    
            goto L_800DBECC;
    }
    // 0x800DBE7C: nop

    // 0x800DBE80: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DBE84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800DBE88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800DBE8C: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x800DBE90: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800DBE94: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800DBE98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800DBE9C: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
    // 0x800DBEA0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DBEA4: nop

    // 0x800DBEA8: lwc1        $f18, 0x44($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800DBEAC: nop

    // 0x800DBEB0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800DBEB4: nop

    // 0x800DBEB8: bc1f        L_800DBECC
    if (!c1cs) {
        // 0x800DBEBC: nop
    
            goto L_800DBECC;
    }
    // 0x800DBEBC: nop

    // 0x800DBEC0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DBEC4: nop

    // 0x800DBEC8: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
L_800DBECC:
    // 0x800DBECC: jal         0x80014E80
    // 0x800DBED0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    Math_Random(rdram, ctx);
        goto after_5;
    // 0x800DBED0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_5:
    // 0x800DBED4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800DBED8: addiu       $t3, $s0, 0x2
    ctx->r11 = ADD32(ctx->r16, 0X2);
    // 0x800DBEDC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x800DBEE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBEE4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800DBEE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBEEC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x800DBEF0: jal         0x8002A8B4
    // 0x800DBEF4: nop

    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x800DBEF4: nop

    after_6:
    // 0x800DBEF8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DBEFC: nop

    // 0x800DBF00: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800DBF04: nop

    // 0x800DBF08: swc1        $f8, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f8.u32l;
    // 0x800DBF0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBF10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBF14: jal         0x80029C40
    // 0x800DBF18: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800DBF18: nop

    after_7:
    // 0x800DBF1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800DBF20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DBF24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBF28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBF2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800DBF30: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800DBF34: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DBF38: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800DBF3C: jal         0x80029018
    // 0x800DBF40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800DBF40: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x800DBF44: beq         $v0, $zero, L_800DBF94
    if (ctx->r2 == 0) {
        // 0x800DBF48: nop
    
            goto L_800DBF94;
    }
    // 0x800DBF48: nop

    // 0x800DBF4C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DBF50: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DBF54: nop

    // 0x800DBF58: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800DBF5C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DBF60: nop

    // 0x800DBF64: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800DBF68: nop

    // 0x800DBF6C: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800DBF70: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800DBF74: nop

    // 0x800DBF78: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x800DBF7C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DBF80: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800DBF84: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800DBF88: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800DBF8C: nop

    // 0x800DBF90: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800DBF94:
    // 0x800DBF94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800DBF98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800DBF9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBFA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBFA4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x800DBFA8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x800DBFAC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800DBFB0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800DBFB4: jal         0x800295C0
    // 0x800DBFB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_9;
    // 0x800DBFB8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x800DBFBC: beq         $v0, $zero, L_800DBFD4
    if (ctx->r2 == 0) {
        // 0x800DBFC0: nop
    
            goto L_800DBFD4;
    }
    // 0x800DBFC0: nop

    // 0x800DBFC4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800DBFC8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800DBFCC: b           L_800DBFE4
    // 0x800DBFD0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_800DBFE4;
    // 0x800DBFD0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_800DBFD4:
    // 0x800DBFD4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800DBFD8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800DBFDC: nop

    // 0x800DBFE0: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
L_800DBFE4:
    // 0x800DBFE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DBFE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DBFEC: jal         0x8002A2EC
    // 0x800DBFF0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_10;
    // 0x800DBFF0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_10:
    // 0x800DBFF4: beq         $v0, $zero, L_800DC004
    if (ctx->r2 == 0) {
        // 0x800DBFF8: nop
    
            goto L_800DC004;
    }
    // 0x800DBFF8: nop

    // 0x800DBFFC: b           L_800DC05C
    // 0x800DC000: nop

        goto L_800DC05C;
    // 0x800DC000: nop

L_800DC004:
    // 0x800DC004: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800DC008: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800DC00C: nop

    // 0x800DC010: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
    // 0x800DC014: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800DC018: nop

    // 0x800DC01C: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x800DC020: nop

    // 0x800DC024: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x800DC028: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800DC02C: nop

    // 0x800DC030: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
    // 0x800DC034: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800DC038: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800DC03C: nop

    // 0x800DC040: swc1        $f18, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f18.u32l;
    // 0x800DC044: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800DC048: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800DC04C: sh          $t2, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r10;
    // 0x800DC050: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800DC054: nop

    // 0x800DC058: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800DC05C:
    // 0x800DC05C: b           L_800DC064
    // 0x800DC060: nop

        goto L_800DC064;
    // 0x800DC060: nop

L_800DC064:
    // 0x800DC064: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800DC068: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800DC06C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800DC070: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800DC074: jr          $ra
    // 0x800DC078: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800DC078: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800AF148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AF148: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AF14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800AF150: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AF154: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AF158: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AF15C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AF160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AF164: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AF168: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AF16C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AF170: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AF174: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AF178: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800AF17C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800AF180: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AF184: lh          $t1, 0xE6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE6);
    // 0x800AF188: nop

    // 0x800AF18C: beq         $t1, $at, L_800AF520
    if (ctx->r9 == ctx->r1) {
        // 0x800AF190: nop
    
            goto L_800AF520;
    }
    // 0x800AF190: nop

    // 0x800AF194: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800AF198: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800AF19C: lh          $t3, 0xE6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE6);
    // 0x800AF1A0: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800AF1A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800AF1A8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AF1AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AF1B0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AF1B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AF1B8: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x800AF1BC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x800AF1C0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800AF1C4: nop

    // 0x800AF1C8: lh          $t8, 0xB4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB4);
    // 0x800AF1CC: nop

    // 0x800AF1D0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800AF1D4: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x800AF1D8: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x800AF1DC: nop

    // 0x800AF1E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800AF1E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800AF1E8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x800AF1EC: nop

    // 0x800AF1F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AF1F4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x800AF1F8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF1FC: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800AF200: lwc1        $f8, 0x18($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X18);
    // 0x800AF204: nop

    // 0x800AF208: swc1        $f8, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f8.u32l;
    // 0x800AF20C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF210: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800AF214: lwc1        $f10, 0x20($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X20);
    // 0x800AF218: nop

    // 0x800AF21C: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
    // 0x800AF220: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF224: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800AF228: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800AF22C: nop

    // 0x800AF230: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x800AF234: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800AF238: nop

    // 0x800AF23C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x800AF240: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF244: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AF248: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800AF24C: nop

    // 0x800AF250: bne         $t9, $at, L_800AF300
    if (ctx->r25 != ctx->r1) {
        // 0x800AF254: nop
    
            goto L_800AF300;
    }
    // 0x800AF254: nop

    // 0x800AF258: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF25C: nop

    // 0x800AF260: lwc1        $f4, 0x20($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X20);
    // 0x800AF264: nop

    // 0x800AF268: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x800AF26C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800AF270: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AF274: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF278: nop

    // 0x800AF27C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x800AF280: nop

    // 0x800AF284: bc1f        L_800AF2B0
    if (!c1cs) {
        // 0x800AF288: nop
    
            goto L_800AF2B0;
    }
    // 0x800AF288: nop

    // 0x800AF28C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF290: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800AF294: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AF298: lwc1        $f10, 0x20($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X20);
    // 0x800AF29C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800AF2A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AF2A4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800AF2A8: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x800AF2AC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
L_800AF2B0:
    // 0x800AF2B0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF2B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AF2B8: nop

    // 0x800AF2BC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x800AF2C0: nop

    // 0x800AF2C4: bc1t        L_800AF2F0
    if (c1cs) {
        // 0x800AF2C8: nop
    
            goto L_800AF2F0;
    }
    // 0x800AF2C8: nop

    // 0x800AF2CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AF2D0: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF2D4: lwc1        $f19, 0x4B10($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4B10);
    // 0x800AF2D8: lwc1        $f18, 0x4B14($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4B14);
    // 0x800AF2DC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x800AF2E0: nop

    // 0x800AF2E4: div.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f18.d);
    // 0x800AF2E8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800AF2EC: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
L_800AF2F0:
    // 0x800AF2F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AF2F4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800AF2F8: nop

    // 0x800AF2FC: swc1        $f10, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f10.u32l;
L_800AF300:
    // 0x800AF300: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF304: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AF308: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800AF30C: nop

    // 0x800AF310: bne         $t4, $at, L_800AF3C0
    if (ctx->r12 != ctx->r1) {
        // 0x800AF314: nop
    
            goto L_800AF3C0;
    }
    // 0x800AF314: nop

    // 0x800AF318: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF31C: nop

    // 0x800AF320: lwc1        $f16, 0x18($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X18);
    // 0x800AF324: nop

    // 0x800AF328: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x800AF32C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800AF330: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800AF334: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF338: nop

    // 0x800AF33C: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x800AF340: nop

    // 0x800AF344: bc1f        L_800AF370
    if (!c1cs) {
        // 0x800AF348: nop
    
            goto L_800AF370;
    }
    // 0x800AF348: nop

    // 0x800AF34C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF350: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800AF354: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AF358: lwc1        $f6, 0x18($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X18);
    // 0x800AF35C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800AF360: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AF364: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800AF368: sub.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f10.fl;
    // 0x800AF36C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
L_800AF370:
    // 0x800AF370: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF374: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AF378: nop

    // 0x800AF37C: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x800AF380: nop

    // 0x800AF384: bc1t        L_800AF3B0
    if (c1cs) {
        // 0x800AF388: nop
    
            goto L_800AF3B0;
    }
    // 0x800AF388: nop

    // 0x800AF38C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF390: lui         $at, 0x400C
    ctx->r1 = S32(0X400C << 16);
    // 0x800AF394: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800AF398: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AF39C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x800AF3A0: nop

    // 0x800AF3A4: div.d       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f10.d);
    // 0x800AF3A8: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x800AF3AC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
L_800AF3B0:
    // 0x800AF3B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AF3B4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800AF3B8: nop

    // 0x800AF3BC: swc1        $f6, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f6.u32l;
L_800AF3C0:
    // 0x800AF3C0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800AF3C4: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800AF3C8: nop

    // 0x800AF3CC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x800AF3D0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x800AF3D4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF3D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AF3DC: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800AF3E0: lwc1        $f7, 0x4B18($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4B18);
    // 0x800AF3E4: lwc1        $f6, 0x4B1C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4B1C);
    // 0x800AF3E8: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x800AF3EC: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x800AF3F0: jal         0x80034970
    // 0x800AF3F4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x800AF3F4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_0:
    // 0x800AF3F8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800AF3FC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF400: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800AF404: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800AF408: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800AF40C: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800AF410: swc1        $f18, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f18.u32l;
    // 0x800AF414: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF418: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800AF41C: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800AF420: lwc1        $f17, 0x4B20($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4B20);
    // 0x800AF424: lwc1        $f16, 0x4B24($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4B24);
    // 0x800AF428: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800AF42C: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x800AF430: jal         0x80036570
    // 0x800AF434: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x800AF434: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x800AF438: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800AF43C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF440: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800AF444: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800AF448: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800AF44C: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800AF450: swc1        $f8, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f8.u32l;
    // 0x800AF454: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x800AF458: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF45C: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x800AF460: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800AF464: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800AF468: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800AF46C: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800AF470: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800AF474: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800AF478: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800AF47C: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x800AF480: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x800AF484: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x800AF488: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF48C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800AF490: lwc1        $f10, 0x3C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800AF494: nop

    // 0x800AF498: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
    // 0x800AF49C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AF4A0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800AF4A4: lwc1        $f16, 0x40($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X40);
    // 0x800AF4A8: nop

    // 0x800AF4AC: swc1        $f16, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f16.u32l;
    // 0x800AF4B0: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x800AF4B4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800AF4B8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800AF4BC: nop

    // 0x800AF4C0: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AF4C4: swc1        $f18, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f18.u32l;
    // 0x800AF4C8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800AF4CC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800AF4D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AF4D4: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800AF4D8: nop

    // 0x800AF4DC: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x800AF4E0: nop

    // 0x800AF4E4: bc1f        L_800AF500
    if (!c1cs) {
        // 0x800AF4E8: nop
    
            goto L_800AF500;
    }
    // 0x800AF4E8: nop

    // 0x800AF4EC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800AF4F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800AF4F4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x800AF4F8: nop

    // 0x800AF4FC: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
L_800AF500:
    // 0x800AF500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF508: jal         0x80029C40
    // 0x800AF50C: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800AF50C: nop

    after_2:
    // 0x800AF510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AF514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AF518: jal         0x80029D04
    // 0x800AF51C: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800AF51C: nop

    after_3:
L_800AF520:
    // 0x800AF520: b           L_800AF528
    // 0x800AF524: nop

        goto L_800AF528;
    // 0x800AF524: nop

L_800AF528:
    // 0x800AF528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800AF52C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800AF530: jr          $ra
    // 0x800AF534: nop

    return;
    // 0x800AF534: nop

;}
RECOMP_FUNC void func_800CCAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCAE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CCAE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CCAE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800CCAEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CCAF0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CCAF4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800CCAF8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CCAFC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCB00: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCB04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CCB08: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCB0C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800CCB10: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800CCB14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CCB18: beq         $s0, $at, L_800CCB40
    if (ctx->r16 == ctx->r1) {
        // 0x800CCB1C: nop
    
            goto L_800CCB40;
    }
    // 0x800CCB1C: nop

    // 0x800CCB20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CCB24: beq         $s0, $at, L_800CCB50
    if (ctx->r16 == ctx->r1) {
        // 0x800CCB28: nop
    
            goto L_800CCB50;
    }
    // 0x800CCB28: nop

    // 0x800CCB2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800CCB30: beq         $s0, $at, L_800CCB60
    if (ctx->r16 == ctx->r1) {
        // 0x800CCB34: nop
    
            goto L_800CCB60;
    }
    // 0x800CCB34: nop

    // 0x800CCB38: b           L_800CCB70
    // 0x800CCB3C: nop

        goto L_800CCB70;
    // 0x800CCB3C: nop

L_800CCB40:
    // 0x800CCB40: jal         0x800CC2E0
    // 0x800CCB44: nop

    func_800CC2E0(rdram, ctx);
        goto after_0;
    // 0x800CCB44: nop

    after_0:
    // 0x800CCB48: b           L_800CCB78
    // 0x800CCB4C: nop

        goto L_800CCB78;
    // 0x800CCB4C: nop

L_800CCB50:
    // 0x800CCB50: jal         0x800CC6D8
    // 0x800CCB54: nop

    func_800CC6D8(rdram, ctx);
        goto after_1;
    // 0x800CCB54: nop

    after_1:
    // 0x800CCB58: b           L_800CCB78
    // 0x800CCB5C: nop

        goto L_800CCB78;
    // 0x800CCB5C: nop

L_800CCB60:
    // 0x800CCB60: jal         0x800CCA28
    // 0x800CCB64: nop

    func_800CCA28(rdram, ctx);
        goto after_2;
    // 0x800CCB64: nop

    after_2:
    // 0x800CCB68: b           L_800CCB78
    // 0x800CCB6C: nop

        goto L_800CCB78;
    // 0x800CCB6C: nop

L_800CCB70:
    // 0x800CCB70: b           L_800CCB78
    // 0x800CCB74: nop

        goto L_800CCB78;
    // 0x800CCB74: nop

L_800CCB78:
    // 0x800CCB78: b           L_800CCB80
    // 0x800CCB7C: nop

        goto L_800CCB80;
    // 0x800CCB7C: nop

L_800CCB80:
    // 0x800CCB80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCB84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800CCB88: jr          $ra
    // 0x800CCB8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800CCB8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006AFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AFB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006AFB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006AFB8: jal         0x80014E80
    // 0x8006AFBC: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8006AFBC: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_0:
    // 0x8006AFC0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8006AFC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AFC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006AFCC: lwc1        $f8, -0x1EC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8006AFD0: nop

    // 0x8006AFD4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006AFD8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8006AFDC: jal         0x80014E80
    // 0x8006AFE0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x8006AFE0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_1:
    // 0x8006AFE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AFE8: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8006AFEC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8006AFF0: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8006AFF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8006AFF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006AFFC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8006B000: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8006B004: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x8006B008: jal         0x80014E80
    // 0x8006B00C: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x8006B00C: addiu       $a0, $zero, -0x3C0
    ctx->r4 = ADD32(0, -0X3C0);
    after_2:
    // 0x8006B010: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8006B014: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B018: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006B01C: lwc1        $f6, -0x1EB8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EB8);
    // 0x8006B020: nop

    // 0x8006B024: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8006B028: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x8006B02C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006B030: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8006B034: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B038: jal         0x80067748
    // 0x8006B03C: nop

    func_80067748(rdram, ctx);
        goto after_3;
    // 0x8006B03C: nop

    after_3:
    // 0x8006B040: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B044: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x8006B048: nop

    // 0x8006B04C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8006B050: bne         $t7, $zero, L_8006B06C
    if (ctx->r15 != 0) {
        // 0x8006B054: nop
    
            goto L_8006B06C;
    }
    // 0x8006B054: nop

    // 0x8006B058: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8006B05C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8006B060: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B064: jal         0x80081468
    // 0x8006B068: addiu       $a0, $zero, 0x2C1
    ctx->r4 = ADD32(0, 0X2C1);
    func_80081468(rdram, ctx);
        goto after_4;
    // 0x8006B068: addiu       $a0, $zero, 0x2C1
    ctx->r4 = ADD32(0, 0X2C1);
    after_4:
L_8006B06C:
    // 0x8006B06C: b           L_8006B074
    // 0x8006B070: nop

        goto L_8006B074;
    // 0x8006B070: nop

L_8006B074:
    // 0x8006B074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006B07C: jr          $ra
    // 0x8006B080: nop

    return;
    // 0x8006B080: nop

;}
RECOMP_FUNC void func_800D17F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D17F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D17FC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D1800: nop

    // 0x800D1804: bne         $t6, $zero, L_800D1860
    if (ctx->r14 != 0) {
        // 0x800D1808: nop
    
            goto L_800D1860;
    }
    // 0x800D1808: nop

    // 0x800D180C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D1810: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D1814: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1818: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D181C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D1820: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D1824: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D1828: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D182C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D1830: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D1834: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D1838: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D183C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D1840: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D1844: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D1848: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D184C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D1850: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D1854: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D1858: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D185C: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D1860:
    // 0x800D1860: jr          $ra
    // 0x800D1864: nop

    return;
    // 0x800D1864: nop

    // 0x800D1868: jr          $ra
    // 0x800D186C: nop

    return;
    // 0x800D186C: nop

;}
RECOMP_FUNC void func_800E8BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E8BC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8BCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E8BD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8BD4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E8BD8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8BDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8BE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8BE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E8BE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8BEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8BF0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8BF4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E8BF8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E8BFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E8C00: nop

    // 0x800E8C04: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E8C08: nop

    // 0x800E8C0C: bne         $t1, $zero, L_800E8C8C
    if (ctx->r9 != 0) {
        // 0x800E8C10: nop
    
            goto L_800E8C8C;
    }
    // 0x800E8C10: nop

    // 0x800E8C14: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8C18: nop

    // 0x800E8C1C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E8C20: nop

    // 0x800E8C24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E8C28: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8C2C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8C30: nop

    // 0x800E8C34: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E8C38: nop

    // 0x800E8C3C: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E8C40: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E8C44: nop

    // 0x800E8C48: sh          $zero, 0x108($t7)
    MEM_H(0X108, ctx->r15) = 0;
    // 0x800E8C4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800E8C50: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E8C54: nop

    // 0x800E8C58: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x800E8C5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8C60: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800E8C64: addiu       $t9, $t9, -0x6730
    ctx->r25 = ADD32(ctx->r25, -0X6730);
    // 0x800E8C68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8C6C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800E8C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E8C74: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800E8C78: jal         0x8001C0EC
    // 0x800E8C7C: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E8C7C: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
    // 0x800E8C80: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E8C84: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800E8C88: sb          $t0, 0x13A($t1)
    MEM_B(0X13A, ctx->r9) = ctx->r8;
L_800E8C8C:
    // 0x800E8C8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8C90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8C94: jal         0x8001B4AC
    // 0x800E8C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_1;
    // 0x800E8C98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800E8C9C: beq         $v0, $zero, L_800E8CBC
    if (ctx->r2 == 0) {
        // 0x800E8CA0: nop
    
            goto L_800E8CBC;
    }
    // 0x800E8CA0: nop

    // 0x800E8CA4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E8CA8: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x800E8CAC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E8CB0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E8CB4: nop

    // 0x800E8CB8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800E8CBC:
    // 0x800E8CBC: b           L_800E8CC4
    // 0x800E8CC0: nop

        goto L_800E8CC4;
    // 0x800E8CC0: nop

L_800E8CC4:
    // 0x800E8CC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8CC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E8CCC: jr          $ra
    // 0x800E8CD0: nop

    return;
    // 0x800E8CD0: nop

;}
RECOMP_FUNC void func_800BC91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC91C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800BC920: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x800BC924: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800BC928: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800BC92C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800BC930: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BC934: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BC938: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BC93C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BC948: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC94C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC950: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BC954: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BC958: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x800BC95C: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800BC960: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x800BC964: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800BC968: lh          $t3, 0xE8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE8);
    // 0x800BC96C: nop

    // 0x800BC970: sb          $t3, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r11;
    // 0x800BC974: lb          $t4, 0x7($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X7);
    // 0x800BC978: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BC97C: beq         $t4, $at, L_800BCAC0
    if (ctx->r12 == ctx->r1) {
        // 0x800BC980: nop
    
            goto L_800BCAC0;
    }
    // 0x800BC980: nop

    // 0x800BC984: lb          $t5, 0x7($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X7);
    // 0x800BC988: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800BC98C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BC990: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC994: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BC998: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC99C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BC9A0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800BC9A4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800BC9A8: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x800BC9AC: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x800BC9B0: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800BC9B4: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800BC9B8: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x800BC9BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800BC9C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BC9C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800BC9C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800BC9CC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800BC9D0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800BC9D4: sw          $t3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r11;
    // 0x800BC9D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BC9DC: bne         $a1, $at, L_800BCA20
    if (ctx->r5 != ctx->r1) {
        // 0x800BC9E0: nop
    
            goto L_800BCA20;
    }
    // 0x800BC9E0: nop

    // 0x800BC9E4: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x800BC9E8: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800BC9EC: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800BC9F0: nop

    // 0x800BC9F4: swc1        $f4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f4.u32l;
    // 0x800BC9F8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800BC9FC: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA00: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800BCA04: nop

    // 0x800BCA08: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x800BCA0C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA10: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA14: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800BCA18: nop

    // 0x800BCA1C: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
L_800BCA20:
    // 0x800BCA20: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA24: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA28: lwc1        $f10, 0x3C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800BCA2C: nop

    // 0x800BCA30: swc1        $f10, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f10.u32l;
    // 0x800BCA34: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA38: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA3C: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x800BCA40: nop

    // 0x800BCA44: swc1        $f16, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f16.u32l;
    // 0x800BCA48: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA4C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA50: lwc1        $f18, 0x40($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800BCA54: nop

    // 0x800BCA58: swc1        $f18, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f18.u32l;
    // 0x800BCA5C: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA60: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA64: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x800BCA68: nop

    // 0x800BCA6C: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800BCA70: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA74: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA78: lwc1        $f6, 0x48($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X48);
    // 0x800BCA7C: nop

    // 0x800BCA80: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
    // 0x800BCA84: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA88: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x800BCA8C: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800BCA90: nop

    // 0x800BCA94: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
    // 0x800BCA98: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x800BCA9C: lw          $t3, 0x8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8);
    // 0x800BCAA0: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800BCAA4: nop

    // 0x800BCAA8: swc1        $f10, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f10.u32l;
    // 0x800BCAAC: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x800BCAB0: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x800BCAB4: lwc1        $f16, 0x14($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800BCAB8: b           L_800BCAC0
    // 0x800BCABC: swc1        $f16, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f16.u32l;
        goto L_800BCAC0;
    // 0x800BCABC: swc1        $f16, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f16.u32l;
L_800BCAC0:
    // 0x800BCAC0: lb          $t6, 0x7($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X7);
    // 0x800BCAC4: nop

    // 0x800BCAC8: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x800BCACC: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x800BCAD0: beq         $t8, $zero, L_800BCAE0
    if (ctx->r24 == 0) {
        // 0x800BCAD4: nop
    
            goto L_800BCAE0;
    }
    // 0x800BCAD4: nop

    // 0x800BCAD8: b           L_800BCAE4
    // 0x800BCADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_800BCAE4;
    // 0x800BCADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800BCAE0:
    // 0x800BCAE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800BCAE4:
    // 0x800BCAE4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x800BCAE8: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800BCAEC: b           L_800BCAFC
    // 0x800BCAF0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800BCAFC;
    // 0x800BCAF0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x800BCAF4: b           L_800BCAFC
    // 0x800BCAF8: nop

        goto L_800BCAFC;
    // 0x800BCAF8: nop

L_800BCAFC:
    // 0x800BCAFC: jr          $ra
    // 0x800BCB00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800BCB00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800882C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800882C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800882CC: lbu         $t6, 0x5243($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5243);
    // 0x800882D0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800882D4: sb          $t6, 0x5238($at)
    MEM_B(0X5238, ctx->r1) = ctx->r14;
    // 0x800882D8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800882DC: lb          $t7, 0x5244($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5244);
    // 0x800882E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800882E4: sb          $t7, 0x5239($at)
    MEM_B(0X5239, ctx->r1) = ctx->r15;
    // 0x800882E8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800882EC: lb          $t8, 0x5245($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5245);
    // 0x800882F0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800882F4: sb          $t8, 0x523A($at)
    MEM_B(0X523A, ctx->r1) = ctx->r24;
    // 0x800882F8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x800882FC: lb          $t9, 0x523F($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523F);
    // 0x80088300: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088304: sb          $t9, 0x523B($at)
    MEM_B(0X523B, ctx->r1) = ctx->r25;
    // 0x80088308: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8008830C: lb          $t0, 0x5240($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X5240);
    // 0x80088310: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088314: sb          $t0, 0x523C($at)
    MEM_B(0X523C, ctx->r1) = ctx->r8;
    // 0x80088318: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8008831C: lbu         $t1, 0x5241($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5241);
    // 0x80088320: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088324: sb          $t1, 0x523D($at)
    MEM_B(0X523D, ctx->r1) = ctx->r9;
    // 0x80088328: jr          $ra
    // 0x8008832C: nop

    return;
    // 0x8008832C: nop

    // 0x80088330: jr          $ra
    // 0x80088334: nop

    return;
    // 0x80088334: nop

;}
RECOMP_FUNC void func_800E2E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E2E28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E2E2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E2E30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E2E34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E2E38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E2E3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E2E40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E2E44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2E48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2E4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E2E50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E2E54: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E2E58: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E2E5C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E2E60: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E2E64: nop

    // 0x800E2E68: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800E2E6C: nop

    // 0x800E2E70: bne         $t1, $zero, L_800E2E90
    if (ctx->r9 != 0) {
        // 0x800E2E74: nop
    
            goto L_800E2E90;
    }
    // 0x800E2E74: nop

    // 0x800E2E78: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2E7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2E80: jal         0x8001BB34
    // 0x800E2E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800E2E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E2E88: b           L_800E2EB8
    // 0x800E2E8C: nop

        goto L_800E2EB8;
    // 0x800E2E8C: nop

L_800E2E90:
    // 0x800E2E90: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E2E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E2E98: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800E2E9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E2EA0: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x800E2EA4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800E2EA8: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800E2EAC: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800E2EB0: jal         0x8001BB34
    // 0x800E2EB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800E2EB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_800E2EB8:
    // 0x800E2EB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E2EBC: nop

    // 0x800E2EC0: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E2EC4: nop

    // 0x800E2EC8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800E2ECC: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x800E2ED0: beq         $at, $zero, L_800E2F74
    if (ctx->r1 == 0) {
        // 0x800E2ED4: nop
    
            goto L_800E2F74;
    }
    // 0x800E2ED4: nop

    // 0x800E2ED8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E2EDC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E2EE0: addu        $at, $at, $t7
    gpr jr_addend_800E2EEC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E2EE4: lw          $t7, 0x5440($at)
    ctx->r15 = ADD32(ctx->r1, 0X5440);
    // 0x800E2EE8: nop

    // 0x800E2EEC: jr          $t7
    // 0x800E2EF0: nop

    switch (jr_addend_800E2EEC >> 2) {
        case 0: goto L_800E2EF4; break;
        case 1: goto L_800E2F04; break;
        case 2: goto L_800E2F14; break;
        case 3: goto L_800E2F24; break;
        case 4: goto L_800E2F34; break;
        case 5: goto L_800E2F44; break;
        case 6: goto L_800E2F54; break;
        case 7: goto L_800E2F64; break;
        default: switch_error(__func__, 0x800E2EEC, 0x80115440);
    }
    // 0x800E2EF0: nop

L_800E2EF4:
    // 0x800E2EF4: jal         0x800E1C9C
    // 0x800E2EF8: nop

    func_800E1C9C(rdram, ctx);
        goto after_2;
    // 0x800E2EF8: nop

    after_2:
    // 0x800E2EFC: b           L_800E2F7C
    // 0x800E2F00: nop

        goto L_800E2F7C;
    // 0x800E2F00: nop

L_800E2F04:
    // 0x800E2F04: jal         0x800E1F20
    // 0x800E2F08: nop

    func_800E1F20(rdram, ctx);
        goto after_3;
    // 0x800E2F08: nop

    after_3:
    // 0x800E2F0C: b           L_800E2F7C
    // 0x800E2F10: nop

        goto L_800E2F7C;
    // 0x800E2F10: nop

L_800E2F14:
    // 0x800E2F14: jal         0x800E2068
    // 0x800E2F18: nop

    func_800E2068(rdram, ctx);
        goto after_4;
    // 0x800E2F18: nop

    after_4:
    // 0x800E2F1C: b           L_800E2F7C
    // 0x800E2F20: nop

        goto L_800E2F7C;
    // 0x800E2F20: nop

L_800E2F24:
    // 0x800E2F24: jal         0x800E2400
    // 0x800E2F28: nop

    func_800E2400(rdram, ctx);
        goto after_5;
    // 0x800E2F28: nop

    after_5:
    // 0x800E2F2C: b           L_800E2F7C
    // 0x800E2F30: nop

        goto L_800E2F7C;
    // 0x800E2F30: nop

L_800E2F34:
    // 0x800E2F34: jal         0x800E2738
    // 0x800E2F38: nop

    func_800E2738(rdram, ctx);
        goto after_6;
    // 0x800E2F38: nop

    after_6:
    // 0x800E2F3C: b           L_800E2F7C
    // 0x800E2F40: nop

        goto L_800E2F7C;
    // 0x800E2F40: nop

L_800E2F44:
    // 0x800E2F44: jal         0x800E2A00
    // 0x800E2F48: nop

    func_800E2A00(rdram, ctx);
        goto after_7;
    // 0x800E2F48: nop

    after_7:
    // 0x800E2F4C: b           L_800E2F7C
    // 0x800E2F50: nop

        goto L_800E2F7C;
    // 0x800E2F50: nop

L_800E2F54:
    // 0x800E2F54: jal         0x800E2A30
    // 0x800E2F58: nop

    func_800E2A30(rdram, ctx);
        goto after_8;
    // 0x800E2F58: nop

    after_8:
    // 0x800E2F5C: b           L_800E2F7C
    // 0x800E2F60: nop

        goto L_800E2F7C;
    // 0x800E2F60: nop

L_800E2F64:
    // 0x800E2F64: jal         0x800E2CDC
    // 0x800E2F68: nop

    func_800E2CDC(rdram, ctx);
        goto after_9;
    // 0x800E2F68: nop

    after_9:
    // 0x800E2F6C: b           L_800E2F7C
    // 0x800E2F70: nop

        goto L_800E2F7C;
    // 0x800E2F70: nop

L_800E2F74:
    // 0x800E2F74: b           L_800E2F7C
    // 0x800E2F78: nop

        goto L_800E2F7C;
    // 0x800E2F78: nop

L_800E2F7C:
    // 0x800E2F7C: b           L_800E2F84
    // 0x800E2F80: nop

        goto L_800E2F84;
    // 0x800E2F80: nop

L_800E2F84:
    // 0x800E2F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E2F88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E2F8C: jr          $ra
    // 0x800E2F90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E2F90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80083180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083180: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80083184: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80083188: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008318C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80083190: nop

    // 0x80083194: beq         $t6, $zero, L_800831DC
    if (ctx->r14 == 0) {
        // 0x80083198: nop
    
            goto L_800831DC;
    }
    // 0x80083198: nop

    // 0x8008319C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800831A0: jal         0x80082E38
    // 0x800831A4: nop

    func_80082E38(rdram, ctx);
        goto after_0;
    // 0x800831A4: nop

    after_0:
    // 0x800831A8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800831AC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x800831B0: bne         $t7, $at, L_800831DC
    if (ctx->r15 != ctx->r1) {
        // 0x800831B4: nop
    
            goto L_800831DC;
    }
    // 0x800831B4: nop

    // 0x800831B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800831BC: sb          $zero, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = 0;
    // 0x800831C0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x800831C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800831C8: sb          $zero, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = 0;
    // 0x800831CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800831D0: sb          $zero, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = 0;
    // 0x800831D4: b           L_800837D0
    // 0x800831D8: nop

        goto L_800837D0;
    // 0x800831D8: nop

L_800831DC:
    // 0x800831DC: jal         0x80016D74
    // 0x800831E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016D74(rdram, ctx);
        goto after_1;
    // 0x800831E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800831E4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800831E8: lbu         $t8, -0x1D84($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1D84);
    // 0x800831EC: nop

    // 0x800831F0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x800831F4: bne         $t9, $zero, L_8008321C
    if (ctx->r25 != 0) {
        // 0x800831F8: nop
    
            goto L_8008321C;
    }
    // 0x800831F8: nop

    // 0x800831FC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80083200: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083204: jal         0x80016F38
    // 0x80083208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_2;
    // 0x80083208: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8008320C: jal         0x80000DAC
    // 0x80083210: nop

    func_80000DAC(rdram, ctx);
        goto after_3;
    // 0x80083210: nop

    after_3:
    // 0x80083214: jal         0x803303A4
    // 0x80083218: nop

    LOOKUP_FUNC(0x803303A4)(rdram, ctx);
        goto after_4;
    // 0x80083218: nop

    after_4:
L_8008321C:
    // 0x8008321C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80083220: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083224: jal         0x80016F38
    // 0x80083228: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_5;
    // 0x80083228: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8008322C: jal         0x80000D4C
    // 0x80083230: nop

    func_80000D4C(rdram, ctx);
        goto after_6;
    // 0x80083230: nop

    after_6:
    // 0x80083234: jal         0x80330440
    // 0x80083238: nop

    func_80330440_unk_bin_5(rdram, ctx);
        goto after_7;
    // 0x80083238: nop

    after_7:
L_8008323C:
    // 0x8008323C: jal         0x8005E230
    // 0x80083240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    Demo_Start(rdram, ctx);
        goto after_8;
    // 0x80083240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
L_80083244:
    // 0x80083244: jal         0x80000E6C
    // 0x80083248: nop

    func_80000E6C(rdram, ctx);
        goto after_9;
    // 0x80083248: nop

    after_9:
    // 0x8008324C: jal         0x80330594
    // 0x80083250: nop

    LOOKUP_FUNC(0x80330594)(rdram, ctx);
        goto after_10;
    // 0x80083250: nop

    after_10:
    // 0x80083254: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80083258: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008325C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80083260: bne         $t0, $at, L_80083270
    if (ctx->r8 != ctx->r1) {
        // 0x80083264: nop
    
            goto L_80083270;
    }
    // 0x80083264: nop

    // 0x80083268: b           L_8008323C
    // 0x8008326C: nop

        goto L_8008323C;
    // 0x8008326C: nop

L_80083270:
    // 0x80083270: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80083274: lb          $t1, -0x1BDC($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1BDC);
    // 0x80083278: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008327C: bne         $t1, $at, L_80083294
    if (ctx->r9 != ctx->r1) {
        // 0x80083280: nop
    
            goto L_80083294;
    }
    // 0x80083280: nop

    // 0x80083284: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80083288: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008328C: b           L_800832CC
    // 0x80083290: sb          $t2, -0x1BDC($at)
    MEM_B(-0X1BDC, ctx->r1) = ctx->r10;
        goto L_800832CC;
    // 0x80083290: sb          $t2, -0x1BDC($at)
    MEM_B(-0X1BDC, ctx->r1) = ctx->r10;
L_80083294:
    // 0x80083294: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80083298: lb          $t3, -0x1BDC($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1BDC);
    // 0x8008329C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800832A0: bne         $t3, $at, L_800832CC
    if (ctx->r11 != ctx->r1) {
        // 0x800832A4: nop
    
            goto L_800832CC;
    }
    // 0x800832A4: nop

    // 0x800832A8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800832AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800832B0: sb          $t4, -0x1BDC($at)
    MEM_B(-0X1BDC, ctx->r1) = ctx->r12;
    // 0x800832B4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800832B8: nop

    // 0x800832BC: bne         $t5, $zero, L_800832CC
    if (ctx->r13 != 0) {
        // 0x800832C0: nop
    
            goto L_800832CC;
    }
    // 0x800832C0: nop

    // 0x800832C4: b           L_80084108
    // 0x800832C8: nop

        goto L_80084108;
    // 0x800832C8: nop

L_800832CC:
    // 0x800832CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800832D0: sw          $zero, 0x4888($at)
    MEM_W(0X4888, ctx->r1) = 0;
    // 0x800832D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800832D8: sb          $zero, 0x488C($at)
    MEM_B(0X488C, ctx->r1) = 0;
L_800832DC:
    // 0x800832DC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x800832E0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800832E4: jal         0x80016F38
    // 0x800832E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_11;
    // 0x800832E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
L_800832EC:
    // 0x800832EC: jal         0x80000CEC
    // 0x800832F0: nop

    func_80000CEC(rdram, ctx);
        goto after_12;
    // 0x800832F0: nop

    after_12:
    // 0x800832F4: jal         0x80333164
    // 0x800832F8: nop

    func_80333164_unk_bin_4(rdram, ctx);
        goto after_13;
    // 0x800832F8: nop

    after_13:
    // 0x800832FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80083300: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80083304: nop

    // 0x80083308: bne         $t6, $zero, L_80083320
    if (ctx->r14 != 0) {
        // 0x8008330C: nop
    
            goto L_80083320;
    }
    // 0x8008330C: nop

    // 0x80083310: b           L_800833A0
    // 0x80083314: nop

        goto L_800833A0;
    // 0x80083314: nop

    // 0x80083318: b           L_800833A0
    // 0x8008331C: nop

        goto L_800833A0;
    // 0x8008331C: nop

L_80083320:
    // 0x80083320: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80083324: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80083328: bne         $t7, $at, L_80083340
    if (ctx->r15 != ctx->r1) {
        // 0x8008332C: nop
    
            goto L_80083340;
    }
    // 0x8008332C: nop

    // 0x80083330: b           L_800833B0
    // 0x80083334: nop

        goto L_800833B0;
    // 0x80083334: nop

    // 0x80083338: b           L_800833A0
    // 0x8008333C: nop

        goto L_800833A0;
    // 0x8008333C: nop

L_80083340:
    // 0x80083340: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80083344: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083348: bne         $t8, $at, L_80083368
    if (ctx->r24 != ctx->r1) {
        // 0x8008334C: nop
    
            goto L_80083368;
    }
    // 0x8008334C: nop

    // 0x80083350: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083354: sb          $zero, 0x488D($at)
    MEM_B(0X488D, ctx->r1) = 0;
    // 0x80083358: b           L_80083448
    // 0x8008335C: nop

        goto L_80083448;
    // 0x8008335C: nop

    // 0x80083360: b           L_800833A0
    // 0x80083364: nop

        goto L_800833A0;
    // 0x80083364: nop

L_80083368:
    // 0x80083368: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8008336C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083370: bne         $t9, $at, L_80083388
    if (ctx->r25 != ctx->r1) {
        // 0x80083374: nop
    
            goto L_80083388;
    }
    // 0x80083374: nop

    // 0x80083378: b           L_80083410
    // 0x8008337C: nop

        goto L_80083410;
    // 0x8008337C: nop

    // 0x80083380: b           L_800833A0
    // 0x80083384: nop

        goto L_800833A0;
    // 0x80083384: nop

L_80083388:
    // 0x80083388: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8008338C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083390: jal         0x80016F38
    // 0x80083394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_14;
    // 0x80083394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80083398: b           L_80083244
    // 0x8008339C: nop

        goto L_80083244;
    // 0x8008339C: nop

L_800833A0:
    // 0x800833A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800833A4: sb          $zero, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = 0;
    // 0x800833A8: b           L_80083570
    // 0x800833AC: nop

        goto L_80083570;
    // 0x800833AC: nop

L_800833B0:
    // 0x800833B0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_800833B4:
    // 0x800833B4: jal         0x80000ECC
    // 0x800833B8: nop

    func_80000ECC(rdram, ctx);
        goto after_15;
    // 0x800833B8: nop

    after_15:
    // 0x800833BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800833C0: jal         0x803316CC
    // 0x800833C4: nop

    LOOKUP_FUNC(0x803316CC)(rdram, ctx);
        goto after_16;
    // 0x800833C4: nop

    after_16:
    // 0x800833C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800833CC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800833D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800833D4: beq         $t0, $at, L_800833F8
    if (ctx->r8 == ctx->r1) {
        // 0x800833D8: nop
    
            goto L_800833F8;
    }
    // 0x800833D8: nop

    // 0x800833DC: jal         0x80000E0C
    // 0x800833E0: nop

    func_80000E0C(rdram, ctx);
        goto after_17;
    // 0x800833E0: nop

    after_17:
    // 0x800833E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800833E8: jal         0x8033248C
    // 0x800833EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8033248C_unk_bin_7(rdram, ctx);
        goto after_18;
    // 0x800833EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x800833F0: b           L_80083400
    // 0x800833F4: nop

        goto L_80083400;
    // 0x800833F4: nop

L_800833F8:
    // 0x800833F8: b           L_80083408
    // 0x800833FC: nop

        goto L_80083408;
    // 0x800833FC: nop

L_80083400:
    // 0x80083400: b           L_800833B4
    // 0x80083404: nop

        goto L_800833B4;
    // 0x80083404: nop

L_80083408:
    // 0x80083408: b           L_800832EC
    // 0x8008340C: nop

        goto L_800832EC;
    // 0x8008340C: nop

L_80083410:
    // 0x80083410: jal         0x8005FBD0
    // 0x80083414: nop

    func_8005FBD0(rdram, ctx);
        goto after_19;
    // 0x80083414: nop

    after_19:
    // 0x80083418: jal         0x800880E4
    // 0x8008341C: nop

    func_800880E4(rdram, ctx);
        goto after_20;
    // 0x8008341C: nop

    after_20:
    // 0x80083420: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083424: sb          $zero, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = 0;
    // 0x80083428: addiu       $t1, $zero, 0xB5
    ctx->r9 = ADD32(0, 0XB5);
    // 0x8008342C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083430: sw          $t1, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r9;
    // 0x80083434: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80083438: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008343C: sb          $t2, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = ctx->r10;
    // 0x80083440: b           L_80083570
    // 0x80083444: nop

        goto L_80083570;
    // 0x80083444: nop

L_80083448:
    // 0x80083448: jal         0x80000F2C
    // 0x8008344C: nop

    func_80000F2C(rdram, ctx);
        goto after_21;
    // 0x8008344C: nop

    after_21:
    // 0x80083450: jal         0x8033148C
    // 0x80083454: nop

    LOOKUP_FUNC(0x8033148C)(rdram, ctx);
        goto after_22;
    // 0x80083454: nop

    after_22:
    // 0x80083458: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8008345C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80083460: nop

    // 0x80083464: bne         $t3, $zero, L_800834AC
    if (ctx->r11 != 0) {
        // 0x80083468: nop
    
            goto L_800834AC;
    }
    // 0x80083468: nop

    // 0x8008346C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80083470: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083474: jal         0x80016F38
    // 0x80083478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_23;
    // 0x80083478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x8008347C: jal         0x80000F2C
    // 0x80083480: nop

    func_80000F2C(rdram, ctx);
        goto after_24;
    // 0x80083480: nop

    after_24:
    // 0x80083484: jal         0x80332BDC
    // 0x80083488: nop

    func_80332BDC_unk_bin_10(rdram, ctx);
        goto after_25;
    // 0x80083488: nop

    after_25:
    // 0x8008348C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80083490: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083494: jal         0x80016F38
    // 0x80083498: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_26;
    // 0x80083498: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x8008349C: b           L_80083448
    // 0x800834A0: nop

        goto L_80083448;
    // 0x800834A0: nop

    // 0x800834A4: b           L_80083568
    // 0x800834A8: nop

        goto L_80083568;
    // 0x800834A8: nop

L_800834AC:
    // 0x800834AC: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800834B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800834B4: bne         $t4, $at, L_800834F4
    if (ctx->r12 != ctx->r1) {
        // 0x800834B8: nop
    
            goto L_800834F4;
    }
    // 0x800834B8: nop

    // 0x800834BC: jal         0x80088094
    // 0x800834C0: nop

    func_80088094(rdram, ctx);
        goto after_27;
    // 0x800834C0: nop

    after_27:
    // 0x800834C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800834C8: sb          $zero, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = 0;
    // 0x800834CC: addiu       $t5, $zero, 0xAC
    ctx->r13 = ADD32(0, 0XAC);
    // 0x800834D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800834D4: sw          $t5, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r13;
    // 0x800834D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800834DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800834E0: sb          $t6, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = ctx->r14;
    // 0x800834E4: b           L_80083570
    // 0x800834E8: nop

        goto L_80083570;
    // 0x800834E8: nop

    // 0x800834EC: b           L_80083568
    // 0x800834F0: nop

        goto L_80083568;
    // 0x800834F0: nop

L_800834F4:
    // 0x800834F4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800834F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800834FC: bne         $t7, $at, L_8008353C
    if (ctx->r15 != ctx->r1) {
        // 0x80083500: nop
    
            goto L_8008353C;
    }
    // 0x80083500: nop

    // 0x80083504: jal         0x800880E4
    // 0x80083508: nop

    func_800880E4(rdram, ctx);
        goto after_28;
    // 0x80083508: nop

    after_28:
    // 0x8008350C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083510: sb          $zero, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = 0;
    // 0x80083514: addiu       $t8, $zero, 0xB1
    ctx->r24 = ADD32(0, 0XB1);
    // 0x80083518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008351C: sw          $t8, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r24;
    // 0x80083520: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80083524: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083528: sb          $t9, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = ctx->r25;
    // 0x8008352C: b           L_80083570
    // 0x80083530: nop

        goto L_80083570;
    // 0x80083530: nop

    // 0x80083534: b           L_80083568
    // 0x80083538: nop

        goto L_80083568;
    // 0x80083538: nop

L_8008353C:
    // 0x8008353C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80083540: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083544: bne         $t0, $at, L_80083568
    if (ctx->r8 != ctx->r1) {
        // 0x80083548: nop
    
            goto L_80083568;
    }
    // 0x80083548: nop

    // 0x8008354C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083550: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
    // 0x80083554: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80083558: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008355C: sb          $t1, 0x7630($at)
    MEM_B(0X7630, ctx->r1) = ctx->r9;
    // 0x80083560: b           L_80083570
    // 0x80083564: nop

        goto L_80083570;
    // 0x80083564: nop

L_80083568:
    // 0x80083568: b           L_800832EC
    // 0x8008356C: nop

        goto L_800832EC;
    // 0x8008356C: nop

L_80083570:
    // 0x80083570: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083574: sb          $zero, -0x1C34($at)
    MEM_B(-0X1C34, ctx->r1) = 0;
    // 0x80083578: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008357C: lb          $t2, 0x7630($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7630);
    // 0x80083580: nop

    // 0x80083584: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80083588: bne         $at, $zero, L_800835A0
    if (ctx->r1 != 0) {
        // 0x8008358C: nop
    
            goto L_800835A0;
    }
    // 0x8008358C: nop

    // 0x80083590: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083594: sh          $zero, 0x7600($at)
    MEM_H(0X7600, ctx->r1) = 0;
    // 0x80083598: b           L_80083E1C
    // 0x8008359C: nop

        goto L_80083E1C;
    // 0x8008359C: nop

L_800835A0:
    // 0x800835A0: jal         0x800880E4
    // 0x800835A4: nop

    func_800880E4(rdram, ctx);
        goto after_29;
    // 0x800835A4: nop

    after_29:
    // 0x800835A8: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800835AC: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x800835B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800835B4: bne         $t3, $at, L_80083674
    if (ctx->r11 != ctx->r1) {
        // 0x800835B8: nop
    
            goto L_80083674;
    }
    // 0x800835B8: nop

    // 0x800835BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800835C0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800835C4: jal         0x80025D4C
    // 0x800835C8: nop

    func_80025D4C(rdram, ctx);
        goto after_30;
    // 0x800835C8: nop

    after_30:
    // 0x800835CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800835D0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800835D4: jal         0x8002598C
    // 0x800835D8: nop

    func_8002598C(rdram, ctx);
        goto after_31;
    // 0x800835D8: nop

    after_31:
    // 0x800835DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800835E0: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
    // 0x800835E4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800835E8: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
    // 0x800835EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800835F0: sb          $zero, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = 0;
    // 0x800835F4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800835F8: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
    // 0x800835FC: jal         0x8006A2BC
    // 0x80083600: nop

    func_8006A2BC(rdram, ctx);
        goto after_32;
    // 0x80083600: nop

    after_32:
    // 0x80083604: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083608: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008360C: jal         0x800250A0
    // 0x80083610: nop

    func_800250A0(rdram, ctx);
        goto after_33;
    // 0x80083610: nop

    after_33:
    // 0x80083614: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083618: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008361C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80083620: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80083624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80083628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008362C: jal         0x8002536C
    // 0x80083630: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8002536C(rdram, ctx);
        goto after_34;
    // 0x80083630: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_34:
    // 0x80083634: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083638: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008363C: jal         0x80024EF4
    // 0x80083640: nop

    func_80024EF4(rdram, ctx);
        goto after_35;
    // 0x80083640: nop

    after_35:
    // 0x80083644: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083648: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
    // 0x8008364C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083650: sb          $zero, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = 0;
    // 0x80083654: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083658: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
    // 0x8008365C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083660: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
    // 0x80083664: jal         0x8008279C
    // 0x80083668: nop

    func_8008279C(rdram, ctx);
        goto after_36;
    // 0x80083668: nop

    after_36:
    // 0x8008366C: b           L_800836B4
    // 0x80083670: nop

        goto L_800836B4;
    // 0x80083670: nop

L_80083674:
    // 0x80083674: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083678: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008367C: jal         0x80025978
    // 0x80083680: nop

    func_80025978(rdram, ctx);
        goto after_37;
    // 0x80083680: nop

    after_37:
    // 0x80083684: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083688: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008368C: addiu       $t5, $t5, 0x4800
    ctx->r13 = ADD32(ctx->r13, 0X4800);
    // 0x80083690: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083694: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80083698: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8008369C: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x800836A0: addiu       $a3, $a3, 0x4803
    ctx->r7 = ADD32(ctx->r7, 0X4803);
    // 0x800836A4: addiu       $a2, $a2, 0x4802
    ctx->r6 = ADD32(ctx->r6, 0X4802);
    // 0x800836A8: addiu       $a1, $a1, 0x4801
    ctx->r5 = ADD32(ctx->r5, 0X4801);
    // 0x800836AC: jal         0x800252AC
    // 0x800836B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800252AC(rdram, ctx);
        goto after_38;
    // 0x800836B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_38:
L_800836B4:
    // 0x800836B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800836B8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800836BC: jal         0x800251D4
    // 0x800836C0: nop

    func_800251D4(rdram, ctx);
        goto after_39;
    // 0x800836C0: nop

    after_39:
    // 0x800836C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800836C8: lb          $t6, 0x7630($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7630);
    // 0x800836CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800836D0: bne         $t6, $at, L_80083700
    if (ctx->r14 != ctx->r1) {
        // 0x800836D4: nop
    
            goto L_80083700;
    }
    // 0x800836D4: nop

    // 0x800836D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800836DC: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
    // 0x800836E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800836E4: sb          $zero, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = 0;
    // 0x800836E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800836EC: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
    // 0x800836F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800836F4: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
    // 0x800836F8: jal         0x800829AC
    // 0x800836FC: nop

    func_800829AC(rdram, ctx);
        goto after_40;
    // 0x800836FC: nop

    after_40:
L_80083700:
    // 0x80083700: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x80083704: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083708: jal         0x80016F38
    // 0x8008370C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_41;
    // 0x8008370C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_41:
    // 0x80083710: jal         0x80000C2C
    // 0x80083714: nop

    func_80000C2C(rdram, ctx);
        goto after_42;
    // 0x80083714: nop

    after_42:
    // 0x80083718: jal         0x80335DE4
    // 0x8008371C: nop

    func_80335DE4_unk_bin_2(rdram, ctx);
        goto after_43;
    // 0x8008371C: nop

    after_43:
    // 0x80083720: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80083724: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80083728: nop

    // 0x8008372C: beq         $t7, $zero, L_80083760
    if (ctx->r15 == 0) {
        // 0x80083730: nop
    
            goto L_80083760;
    }
    // 0x80083730: nop

    // 0x80083734: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80083738: lb          $t8, 0x7630($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7630);
    // 0x8008373C: nop

    // 0x80083740: bne         $t8, $zero, L_80083758
    if (ctx->r24 != 0) {
        // 0x80083744: nop
    
            goto L_80083758;
    }
    // 0x80083744: nop

    // 0x80083748: b           L_800832DC
    // 0x8008374C: nop

        goto L_800832DC;
    // 0x8008374C: nop

    // 0x80083750: b           L_80083760
    // 0x80083754: nop

        goto L_80083760;
    // 0x80083754: nop

L_80083758:
    // 0x80083758: b           L_80083448
    // 0x8008375C: nop

        goto L_80083448;
    // 0x8008375C: nop

L_80083760:
    // 0x80083760: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80083764: lb          $a1, 0x4801($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4801);
    // 0x80083768: jal         0x800600B8
    // 0x8008376C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800600B8(rdram, ctx);
        goto after_44;
    // 0x8008376C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_44:
    // 0x80083770: bne         $v0, $zero, L_800837A0
    if (ctx->r2 != 0) {
        // 0x80083774: nop
    
            goto L_800837A0;
    }
    // 0x80083774: nop

    // 0x80083778: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8008377C: lb          $a1, 0x4802($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4802);
    // 0x80083780: jal         0x800600B8
    // 0x80083784: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800600B8(rdram, ctx);
        goto after_45;
    // 0x80083784: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_45:
    // 0x80083788: bne         $v0, $zero, L_800837A0
    if (ctx->r2 != 0) {
        // 0x8008378C: nop
    
            goto L_800837A0;
    }
    // 0x8008378C: nop

    // 0x80083790: jal         0x8006A054
    // 0x80083794: nop

    func_8006A054(rdram, ctx);
        goto after_46;
    // 0x80083794: nop

    after_46:
    // 0x80083798: beq         $v0, $zero, L_800837B0
    if (ctx->r2 == 0) {
        // 0x8008379C: nop
    
            goto L_800837B0;
    }
    // 0x8008379C: nop

L_800837A0:
    // 0x800837A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800837A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800837A8: b           L_800837B8
    // 0x800837AC: sb          $t9, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = ctx->r25;
        goto L_800837B8;
    // 0x800837AC: sb          $t9, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = ctx->r25;
L_800837B0:
    // 0x800837B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800837B4: sb          $zero, -0x1C2C($at)
    MEM_B(-0X1C2C, ctx->r1) = 0;
L_800837B8:
    // 0x800837B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800837BC: lb          $a0, -0x1C2C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1C2C);
    // 0x800837C0: jal         0x80069F0C
    // 0x800837C4: nop

    func_80069F0C(rdram, ctx);
        goto after_47;
    // 0x800837C4: nop

    after_47:
    // 0x800837C8: jal         0x80082CC4
    // 0x800837CC: nop

    func_80082CC4(rdram, ctx);
        goto after_48;
    // 0x800837CC: nop

    after_48:
L_800837D0:
    // 0x800837D0: jal         0x80081C50
    // 0x800837D4: nop

    func_80081C50(rdram, ctx);
        goto after_49;
    // 0x800837D4: nop

    after_49:
L_800837D8:
    // 0x800837D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800837DC: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800837E0: jal         0x800253EC
    // 0x800837E4: nop

    func_800253EC(rdram, ctx);
        goto after_50;
    // 0x800837E4: nop

    after_50:
    // 0x800837E8: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x800837EC: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x800837F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800837F4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800837F8: jal         0x80025764
    // 0x800837FC: nop

    func_80025764(rdram, ctx);
        goto after_51;
    // 0x800837FC: nop

    after_51:
    // 0x80083800: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80083804: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083808: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008380C: jal         0x80025608
    // 0x80083810: nop

    func_80025608(rdram, ctx);
        goto after_52;
    // 0x80083810: nop

    after_52:
    // 0x80083814: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083818: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008381C: jal         0x800258A0
    // 0x80083820: nop

    func_800258A0(rdram, ctx);
        goto after_53;
    // 0x80083820: nop

    after_53:
    // 0x80083824: jal         0x800882C8
    // 0x80083828: nop

    func_800882C8(rdram, ctx);
        goto after_54;
    // 0x80083828: nop

    after_54:
    // 0x8008382C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083830: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80083834: jal         0x800824A8
    // 0x80083838: nop

    func_800824A8(rdram, ctx);
        goto after_55;
    // 0x80083838: nop

    after_55:
    // 0x8008383C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80083840: lb          $t1, -0x1C34($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C34);
    // 0x80083844: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80083848: bne         $t1, $at, L_80083860
    if (ctx->r9 != ctx->r1) {
        // 0x8008384C: nop
    
            goto L_80083860;
    }
    // 0x8008384C: nop

    // 0x80083850: b           L_80084100
    // 0x80083854: nop

        goto L_80084100;
    // 0x80083854: nop

    // 0x80083858: b           L_80083E14
    // 0x8008385C: nop

        goto L_80083E14;
    // 0x8008385C: nop

L_80083860:
    // 0x80083860: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80083864: lb          $t2, -0x1C34($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1C34);
    // 0x80083868: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008386C: bne         $t2, $at, L_800838CC
    if (ctx->r10 != ctx->r1) {
        // 0x80083870: nop
    
            goto L_800838CC;
    }
    // 0x80083870: nop

    // 0x80083874: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083878: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008387C: jal         0x80025674
    // 0x80083880: nop

    func_80025674(rdram, ctx);
        goto after_56;
    // 0x80083880: nop

    after_56:
    // 0x80083884: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083888: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8008388C: jal         0x8002590C
    // 0x80083890: nop

    func_8002590C(rdram, ctx);
        goto after_57;
    // 0x80083890: nop

    after_57:
    // 0x80083894: jal         0x80088338
    // 0x80083898: nop

    func_80088338(rdram, ctx);
        goto after_58;
    // 0x80083898: nop

    after_58:
    // 0x8008389C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800838A0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800838A4: jal         0x8002598C
    // 0x800838A8: nop

    func_8002598C(rdram, ctx);
        goto after_59;
    // 0x800838A8: nop

    after_59:
    // 0x800838AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800838B0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800838B4: jal         0x80024EF4
    // 0x800838B8: nop

    func_80024EF4(rdram, ctx);
        goto after_60;
    // 0x800838B8: nop

    after_60:
    // 0x800838BC: b           L_80083700
    // 0x800838C0: nop

        goto L_80083700;
    // 0x800838C0: nop

    // 0x800838C4: b           L_80083E14
    // 0x800838C8: nop

        goto L_80083E14;
    // 0x800838C8: nop

L_800838CC:
    // 0x800838CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800838D0: lb          $t3, -0x1C34($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1C34);
    // 0x800838D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800838D8: bne         $t3, $at, L_80083A6C
    if (ctx->r11 != ctx->r1) {
        // 0x800838DC: nop
    
            goto L_80083A6C;
    }
    // 0x800838DC: nop

    // 0x800838E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800838E4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800838E8: jal         0x80025674
    // 0x800838EC: nop

    func_80025674(rdram, ctx);
        goto after_61;
    // 0x800838EC: nop

    after_61:
    // 0x800838F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800838F4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800838F8: jal         0x8002590C
    // 0x800838FC: nop

    func_8002590C(rdram, ctx);
        goto after_62;
    // 0x800838FC: nop

    after_62:
    // 0x80083900: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80083904: lw          $t4, -0x1BD8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1BD8);
    // 0x80083908: nop

    // 0x8008390C: beq         $t4, $zero, L_80083944
    if (ctx->r12 == 0) {
        // 0x80083910: nop
    
            goto L_80083944;
    }
    // 0x80083910: nop

    // 0x80083914: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x80083918: beq         $t4, $at, L_80083944
    if (ctx->r12 == ctx->r1) {
        // 0x8008391C: nop
    
            goto L_80083944;
    }
    // 0x8008391C: nop

    // 0x80083920: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80083924: beq         $t4, $at, L_80083944
    if (ctx->r12 == ctx->r1) {
        // 0x80083928: nop
    
            goto L_80083944;
    }
    // 0x80083928: nop

    // 0x8008392C: addiu       $at, $zero, 0x6A
    ctx->r1 = ADD32(0, 0X6A);
    // 0x80083930: beq         $t4, $at, L_80083944
    if (ctx->r12 == ctx->r1) {
        // 0x80083934: nop
    
            goto L_80083944;
    }
    // 0x80083934: nop

    // 0x80083938: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
    // 0x8008393C: bne         $t4, $at, L_8008394C
    if (ctx->r12 != ctx->r1) {
        // 0x80083940: nop
    
            goto L_8008394C;
    }
    // 0x80083940: nop

L_80083944:
    // 0x80083944: b           L_8008395C
    // 0x80083948: nop

        goto L_8008395C;
    // 0x80083948: nop

L_8008394C:
    // 0x8008394C: jal         0x80069FD8
    // 0x80083950: nop

    func_80069FD8(rdram, ctx);
        goto after_63;
    // 0x80083950: nop

    after_63:
    // 0x80083954: jal         0x80069F0C
    // 0x80083958: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80069F0C(rdram, ctx);
        goto after_64;
    // 0x80083958: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_64:
L_8008395C:
    // 0x8008395C: jal         0x80088248
    // 0x80083960: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80088248(rdram, ctx);
        goto after_65;
    // 0x80083960: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_65:
    // 0x80083964: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80083968: lbu         $t5, 0x5243($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X5243);
    // 0x8008396C: nop

    // 0x80083970: bne         $t5, $zero, L_80083A34
    if (ctx->r13 != 0) {
        // 0x80083974: nop
    
            goto L_80083A34;
    }
    // 0x80083974: nop

    // 0x80083978: jal         0x80000C8C
    // 0x8008397C: nop

    func_80000C8C(rdram, ctx);
        goto after_66;
    // 0x8008397C: nop

    after_66:
    // 0x80083980: jal         0x80331154
    // 0x80083984: nop

    func_80331154_unk_bin_3(rdram, ctx);
        goto after_67;
    // 0x80083984: nop

    after_67:
    // 0x80083988: bne         $v0, $zero, L_800839C8
    if (ctx->r2 != 0) {
        // 0x8008398C: nop
    
            goto L_800839C8;
    }
    // 0x8008398C: nop

    // 0x80083990: jal         0x80088134
    // 0x80083994: nop

    func_80088134(rdram, ctx);
        goto after_68;
    // 0x80083994: nop

    after_68:
    // 0x80083998: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008399C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800839A0: jal         0x8002598C
    // 0x800839A4: nop

    func_8002598C(rdram, ctx);
        goto after_69;
    // 0x800839A4: nop

    after_69:
    // 0x800839A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800839AC: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800839B0: jal         0x80024EF4
    // 0x800839B4: nop

    func_80024EF4(rdram, ctx);
        goto after_70;
    // 0x800839B4: nop

    after_70:
    // 0x800839B8: b           L_80083700
    // 0x800839BC: nop

        goto L_80083700;
    // 0x800839BC: nop

    // 0x800839C0: b           L_80083A2C
    // 0x800839C4: nop

        goto L_80083A2C;
    // 0x800839C4: nop

L_800839C8:
    // 0x800839C8: jal         0x80088184
    // 0x800839CC: nop

    func_80088184(rdram, ctx);
        goto after_71;
    // 0x800839CC: nop

    after_71:
    // 0x800839D0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800839D4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800839D8: jal         0x8002598C
    // 0x800839DC: nop

    func_8002598C(rdram, ctx);
        goto after_72;
    // 0x800839DC: nop

    after_72:
    // 0x800839E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800839E4: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x800839E8: jal         0x80024EF4
    // 0x800839EC: nop

    func_80024EF4(rdram, ctx);
        goto after_73;
    // 0x800839EC: nop

    after_73:
    // 0x800839F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800839F4: lb          $t6, 0x7630($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7630);
    // 0x800839F8: nop

    // 0x800839FC: bne         $t6, $zero, L_80083A24
    if (ctx->r14 != 0) {
        // 0x80083A00: nop
    
            goto L_80083A24;
    }
    // 0x80083A00: nop

    // 0x80083A04: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80083A08: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80083A0C: jal         0x80016F38
    // 0x80083A10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_74;
    // 0x80083A10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_74:
    // 0x80083A14: b           L_80083244
    // 0x80083A18: nop

        goto L_80083244;
    // 0x80083A18: nop

    // 0x80083A1C: b           L_80083A2C
    // 0x80083A20: nop

        goto L_80083A2C;
    // 0x80083A20: nop

L_80083A24:
    // 0x80083A24: b           L_80083448
    // 0x80083A28: nop

        goto L_80083448;
    // 0x80083A28: nop

L_80083A2C:
    // 0x80083A2C: b           L_80083A64
    // 0x80083A30: nop

        goto L_80083A64;
    // 0x80083A30: nop

L_80083A34:
    // 0x80083A34: jal         0x800881D4
    // 0x80083A38: nop

    func_800881D4(rdram, ctx);
        goto after_75;
    // 0x80083A38: nop

    after_75:
    // 0x80083A3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083A40: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083A44: jal         0x8002598C
    // 0x80083A48: nop

    func_8002598C(rdram, ctx);
        goto after_76;
    // 0x80083A48: nop

    after_76:
    // 0x80083A4C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083A50: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083A54: jal         0x80024EF4
    // 0x80083A58: nop

    func_80024EF4(rdram, ctx);
        goto after_77;
    // 0x80083A58: nop

    after_77:
    // 0x80083A5C: b           L_800837D0
    // 0x80083A60: nop

        goto L_800837D0;
    // 0x80083A60: nop

L_80083A64:
    // 0x80083A64: b           L_80083E14
    // 0x80083A68: nop

        goto L_80083E14;
    // 0x80083A68: nop

L_80083A6C:
    // 0x80083A6C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80083A70: lb          $t7, -0x1C34($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C34);
    // 0x80083A74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083A78: beq         $t7, $at, L_80083A8C
    if (ctx->r15 == ctx->r1) {
        // 0x80083A7C: nop
    
            goto L_80083A8C;
    }
    // 0x80083A7C: nop

    // 0x80083A80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083A84: bne         $t7, $at, L_80083E14
    if (ctx->r15 != ctx->r1) {
        // 0x80083A88: nop
    
            goto L_80083E14;
    }
    // 0x80083A88: nop

L_80083A8C:
    // 0x80083A8C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083A90: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083A94: jal         0x80024EF4
    // 0x80083A98: nop

    func_80024EF4(rdram, ctx);
        goto after_78;
    // 0x80083A98: nop

    after_78:
    // 0x80083A9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80083AA0: lb          $t8, -0x1C34($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C34);
    // 0x80083AA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083AA8: beq         $t8, $at, L_80083AD8
    if (ctx->r24 == ctx->r1) {
        // 0x80083AAC: nop
    
            goto L_80083AD8;
    }
    // 0x80083AAC: nop

    // 0x80083AB0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80083AB4: lb          $t9, -0x1C2C($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X1C2C);
    // 0x80083AB8: nop

    // 0x80083ABC: beq         $t9, $zero, L_80083E0C
    if (ctx->r25 == 0) {
        // 0x80083AC0: nop
    
            goto L_80083E0C;
    }
    // 0x80083AC0: nop

    // 0x80083AC4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80083AC8: lb          $t0, 0x7620($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7620);
    // 0x80083ACC: nop

    // 0x80083AD0: beq         $t0, $zero, L_80083E0C
    if (ctx->r8 == 0) {
        // 0x80083AD4: nop
    
            goto L_80083E0C;
    }
    // 0x80083AD4: nop

L_80083AD8:
    // 0x80083AD8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80083ADC: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x80083AE0: addiu       $at, $zero, 0x9E
    ctx->r1 = ADD32(0, 0X9E);
    // 0x80083AE4: bne         $t1, $at, L_80083B34
    if (ctx->r9 != ctx->r1) {
        // 0x80083AE8: nop
    
            goto L_80083B34;
    }
    // 0x80083AE8: nop

    // 0x80083AEC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80083AF0: lb          $t2, 0x5245($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X5245);
    // 0x80083AF4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80083AF8: sb          $t2, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r10;
    // 0x80083AFC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80083B00: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80083B04: sb          $t3, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r11;
    // 0x80083B08: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80083B0C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80083B10: sb          $t4, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r12;
    // 0x80083B14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083B18: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083B1C: jal         0x8002598C
    // 0x80083B20: nop

    func_8002598C(rdram, ctx);
        goto after_79;
    // 0x80083B20: nop

    after_79:
    // 0x80083B24: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083B28: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083B2C: jal         0x80024EF4
    // 0x80083B30: nop

    func_80024EF4(rdram, ctx);
        goto after_80;
    // 0x80083B30: nop

    after_80:
L_80083B34:
    // 0x80083B34: jal         0x80069FD8
    // 0x80083B38: nop

    func_80069FD8(rdram, ctx);
        goto after_81;
    // 0x80083B38: nop

    after_81:
    // 0x80083B3C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80083B40: lb          $a1, 0x4801($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4801);
    // 0x80083B44: jal         0x800600B8
    // 0x80083B48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800600B8(rdram, ctx);
        goto after_82;
    // 0x80083B48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_82:
    // 0x80083B4C: beq         $v0, $zero, L_80083B98
    if (ctx->r2 == 0) {
        // 0x80083B50: nop
    
            goto L_80083B98;
    }
    // 0x80083B50: nop

    // 0x80083B54: jal         0x80000E0C
    // 0x80083B58: nop

    func_80000E0C(rdram, ctx);
        goto after_83;
    // 0x80083B58: nop

    after_83:
    // 0x80083B5C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80083B60: lb          $t5, -0x1C2C($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C2C);
    // 0x80083B64: nop

    // 0x80083B68: bne         $t5, $zero, L_80083B88
    if (ctx->r13 != 0) {
        // 0x80083B6C: nop
    
            goto L_80083B88;
    }
    // 0x80083B6C: nop

    // 0x80083B70: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083B74: lb          $a0, 0x4801($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4801);
    // 0x80083B78: jal         0x8033248C
    // 0x80083B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8033248C_unk_bin_7(rdram, ctx);
        goto after_84;
    // 0x80083B7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_84:
    // 0x80083B80: b           L_80083B98
    // 0x80083B84: nop

        goto L_80083B98;
    // 0x80083B84: nop

L_80083B88:
    // 0x80083B88: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083B8C: lb          $a0, 0x4801($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4801);
    // 0x80083B90: jal         0x8033248C
    // 0x80083B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8033248C_unk_bin_7(rdram, ctx);
        goto after_85;
    // 0x80083B94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_85:
L_80083B98:
    // 0x80083B98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80083B9C: lb          $t6, 0x7630($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7630);
    // 0x80083BA0: nop

    // 0x80083BA4: bne         $t6, $zero, L_80083CAC
    if (ctx->r14 != 0) {
        // 0x80083BA8: nop
    
            goto L_80083CAC;
    }
    // 0x80083BA8: nop

    // 0x80083BAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80083BB0: lw          $t7, -0x1BD8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1BD8);
    // 0x80083BB4: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x80083BB8: bne         $t7, $at, L_80083C68
    if (ctx->r15 != ctx->r1) {
        // 0x80083BBC: nop
    
            goto L_80083C68;
    }
    // 0x80083BBC: nop

    // 0x80083BC0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80083BC4: lb          $t8, -0x1C2C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C2C);
    // 0x80083BC8: nop

    // 0x80083BCC: beq         $t8, $zero, L_80083BF0
    if (ctx->r24 == 0) {
        // 0x80083BD0: nop
    
            goto L_80083BF0;
    }
    // 0x80083BD0: nop

    // 0x80083BD4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083BD8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083BDC: jal         0x800253EC
    // 0x80083BE0: nop

    func_800253EC(rdram, ctx);
        goto after_86;
    // 0x80083BE0: nop

    after_86:
    // 0x80083BE4: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80083BE8: bne         $t9, $zero, L_80083C00
    if (ctx->r25 != 0) {
        // 0x80083BEC: nop
    
            goto L_80083C00;
    }
    // 0x80083BEC: nop

L_80083BF0:
    // 0x80083BF0: jal         0x8005E230
    // 0x80083BF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    Demo_Start(rdram, ctx);
        goto after_87;
    // 0x80083BF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_87:
    // 0x80083BF8: jal         0x80082BBC
    // 0x80083BFC: nop

    func_80082BBC(rdram, ctx);
        goto after_88;
    // 0x80083BFC: nop

    after_88:
L_80083C00:
    // 0x80083C00: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80083C04: lb          $t0, -0x1C2C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C2C);
    // 0x80083C08: nop

    // 0x80083C0C: bne         $t0, $zero, L_80083C38
    if (ctx->r8 != 0) {
        // 0x80083C10: nop
    
            goto L_80083C38;
    }
    // 0x80083C10: nop

    // 0x80083C14: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083C18: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083C1C: jal         0x800253EC
    // 0x80083C20: nop

    func_800253EC(rdram, ctx);
        goto after_89;
    // 0x80083C20: nop

    after_89:
    // 0x80083C24: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x80083C28: beq         $t1, $zero, L_80083C38
    if (ctx->r9 == 0) {
        // 0x80083C2C: nop
    
            goto L_80083C38;
    }
    // 0x80083C2C: nop

    // 0x80083C30: jal         0x80082678
    // 0x80083C34: nop

    func_80082678(rdram, ctx);
        goto after_90;
    // 0x80083C34: nop

    after_90:
L_80083C38:
    // 0x80083C38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C3C: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
    // 0x80083C40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C44: sb          $zero, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = 0;
    // 0x80083C48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C4C: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
    // 0x80083C50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C54: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
    // 0x80083C58: b           L_8008321C
    // 0x80083C5C: nop

        goto L_8008321C;
    // 0x80083C5C: nop

    // 0x80083C60: b           L_80083CAC
    // 0x80083C64: nop

        goto L_80083CAC;
    // 0x80083C64: nop

L_80083C68:
    // 0x80083C68: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80083C6C: lw          $t2, -0x1BD8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1BD8);
    // 0x80083C70: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x80083C74: bne         $t2, $at, L_80083CAC
    if (ctx->r10 != ctx->r1) {
        // 0x80083C78: nop
    
            goto L_80083CAC;
    }
    // 0x80083C78: nop

    // 0x80083C7C: jal         0x800828A4
    // 0x80083C80: nop

    func_800828A4(rdram, ctx);
        goto after_91;
    // 0x80083C80: nop

    after_91:
    // 0x80083C84: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C88: sb          $zero, 0x4803($at)
    MEM_B(0X4803, ctx->r1) = 0;
    // 0x80083C8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C90: sb          $zero, 0x4802($at)
    MEM_B(0X4802, ctx->r1) = 0;
    // 0x80083C94: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083C98: sb          $zero, 0x4801($at)
    MEM_B(0X4801, ctx->r1) = 0;
    // 0x80083C9C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80083CA0: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
    // 0x80083CA4: b           L_8008321C
    // 0x80083CA8: nop

        goto L_8008321C;
    // 0x80083CA8: nop

L_80083CAC:
    // 0x80083CAC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80083CB0: lb          $t3, 0x7630($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7630);
    // 0x80083CB4: nop

    // 0x80083CB8: bne         $t3, $zero, L_80083D08
    if (ctx->r11 != 0) {
        // 0x80083CBC: nop
    
            goto L_80083D08;
    }
    // 0x80083CBC: nop

    // 0x80083CC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80083CC4: jal         0x800600B8
    // 0x80083CC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800600B8(rdram, ctx);
        goto after_92;
    // 0x80083CC8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_92:
    // 0x80083CCC: beq         $v0, $zero, L_80083D08
    if (ctx->r2 == 0) {
        // 0x80083CD0: nop
    
            goto L_80083D08;
    }
    // 0x80083CD0: nop

    // 0x80083CD4: lb          $t4, 0x28($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X28);
    // 0x80083CD8: nop

    // 0x80083CDC: bne         $t4, $zero, L_80083D08
    if (ctx->r12 != 0) {
        // 0x80083CE0: nop
    
            goto L_80083D08;
    }
    // 0x80083CE0: nop

    // 0x80083CE4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083CE8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083CEC: jal         0x800253EC
    // 0x80083CF0: nop

    func_800253EC(rdram, ctx);
        goto after_93;
    // 0x80083CF0: nop

    after_93:
    // 0x80083CF4: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x80083CF8: beq         $t5, $zero, L_80083D08
    if (ctx->r13 == 0) {
        // 0x80083CFC: nop
    
            goto L_80083D08;
    }
    // 0x80083CFC: nop

    // 0x80083D00: jal         0x80082678
    // 0x80083D04: nop

    func_80082678(rdram, ctx);
        goto after_94;
    // 0x80083D04: nop

    after_94:
L_80083D08:
    // 0x80083D08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80083D0C: lb          $t6, 0x7630($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7630);
    // 0x80083D10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80083D14: bne         $t6, $at, L_80083D54
    if (ctx->r14 != ctx->r1) {
        // 0x80083D18: nop
    
            goto L_80083D54;
    }
    // 0x80083D18: nop

    // 0x80083D1C: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x80083D20: nop

    // 0x80083D24: bne         $t7, $zero, L_80083D54
    if (ctx->r15 != 0) {
        // 0x80083D28: nop
    
            goto L_80083D54;
    }
    // 0x80083D28: nop

    // 0x80083D2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083D30: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083D34: jal         0x80025764
    // 0x80083D38: nop

    func_80025764(rdram, ctx);
        goto after_95;
    // 0x80083D38: nop

    after_95:
    // 0x80083D3C: beq         $v0, $zero, L_80083D54
    if (ctx->r2 == 0) {
        // 0x80083D40: nop
    
            goto L_80083D54;
    }
    // 0x80083D40: nop

    // 0x80083D44: jal         0x80082AB4
    // 0x80083D48: nop

    func_80082AB4(rdram, ctx);
        goto after_96;
    // 0x80083D48: nop

    after_96:
    // 0x80083D4C: b           L_80083448
    // 0x80083D50: nop

        goto L_80083448;
    // 0x80083D50: nop

L_80083D54:
    // 0x80083D54: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80083D58: lb          $t8, -0x1C2C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C2C);
    // 0x80083D5C: nop

    // 0x80083D60: bne         $t8, $zero, L_80083DBC
    if (ctx->r24 != 0) {
        // 0x80083D64: nop
    
            goto L_80083DBC;
    }
    // 0x80083D64: nop

    // 0x80083D68: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80083D6C: lb          $t9, 0x4801($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X4801);
    // 0x80083D70: nop

    // 0x80083D74: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80083D78: beq         $at, $zero, L_80083DBC
    if (ctx->r1 == 0) {
        // 0x80083D7C: nop
    
            goto L_80083DBC;
    }
    // 0x80083D7C: nop

    // 0x80083D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80083D84: jal         0x800600B8
    // 0x80083D88: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_800600B8(rdram, ctx);
        goto after_97;
    // 0x80083D88: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_97:
    // 0x80083D8C: beq         $v0, $zero, L_80083DBC
    if (ctx->r2 == 0) {
        // 0x80083D90: nop
    
            goto L_80083DBC;
    }
    // 0x80083D90: nop

    // 0x80083D94: jal         0x80082500
    // 0x80083D98: nop

    func_80082500(rdram, ctx);
        goto after_98;
    // 0x80083D98: nop

    after_98:
    // 0x80083D9C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083DA0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083DA4: jal         0x8002598C
    // 0x80083DA8: nop

    func_8002598C(rdram, ctx);
        goto after_99;
    // 0x80083DA8: nop

    after_99:
    // 0x80083DAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083DB0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083DB4: jal         0x80024EF4
    // 0x80083DB8: nop

    func_80024EF4(rdram, ctx);
        goto after_100;
    // 0x80083DB8: nop

    after_100:
L_80083DBC:
    // 0x80083DBC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80083DC0: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80083DC4: addiu       $t0, $t0, 0x4800
    ctx->r8 = ADD32(ctx->r8, 0X4800);
    // 0x80083DC8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x80083DCC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80083DD0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80083DD4: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x80083DD8: addiu       $a3, $a3, 0x4803
    ctx->r7 = ADD32(ctx->r7, 0X4803);
    // 0x80083DDC: addiu       $a2, $a2, 0x4802
    ctx->r6 = ADD32(ctx->r6, 0X4802);
    // 0x80083DE0: addiu       $a1, $a1, 0x4801
    ctx->r5 = ADD32(ctx->r5, 0X4801);
    // 0x80083DE4: jal         0x800252AC
    // 0x80083DE8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_800252AC(rdram, ctx);
        goto after_101;
    // 0x80083DE8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_101:
    // 0x80083DEC: jal         0x8006A168
    // 0x80083DF0: nop

    func_8006A168(rdram, ctx);
        goto after_102;
    // 0x80083DF0: nop

    after_102:
    // 0x80083DF4: jal         0x80069FD8
    // 0x80083DF8: nop

    func_80069FD8(rdram, ctx);
        goto after_103;
    // 0x80083DF8: nop

    after_103:
    // 0x80083DFC: b           L_80083700
    // 0x80083E00: nop

        goto L_80083700;
    // 0x80083E00: nop

    // 0x80083E04: b           L_80083E14
    // 0x80083E08: nop

        goto L_80083E14;
    // 0x80083E08: nop

L_80083E0C:
    // 0x80083E0C: b           L_800837D8
    // 0x80083E10: nop

        goto L_800837D8;
    // 0x80083E10: nop

L_80083E14:
    // 0x80083E14: b           L_80083244
    // 0x80083E18: nop

        goto L_80083244;
    // 0x80083E18: nop

L_80083E1C:
    // 0x80083E1C: jal         0x80081C50
    // 0x80083E20: nop

    func_80081C50(rdram, ctx);
        goto after_104;
    // 0x80083E20: nop

    after_104:
L_80083E24:
    // 0x80083E24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80083E28: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80083E2C: jal         0x800824A8
    // 0x80083E30: nop

    func_800824A8(rdram, ctx);
        goto after_105;
    // 0x80083E30: nop

    after_105:
    // 0x80083E34: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80083E38: lb          $t1, -0x1C34($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C34);
    // 0x80083E3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80083E40: bne         $t1, $at, L_80083E58
    if (ctx->r9 != ctx->r1) {
        // 0x80083E44: nop
    
            goto L_80083E58;
    }
    // 0x80083E44: nop

    // 0x80083E48: b           L_80084100
    // 0x80083E4C: nop

        goto L_80084100;
    // 0x80083E4C: nop

    // 0x80083E50: b           L_80084100
    // 0x80083E54: nop

        goto L_80084100;
    // 0x80083E54: nop

L_80083E58:
    // 0x80083E58: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80083E5C: lb          $t2, -0x1C34($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X1C34);
    // 0x80083E60: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80083E64: bne         $t2, $at, L_80083EC4
    if (ctx->r10 != ctx->r1) {
        // 0x80083E68: nop
    
            goto L_80083EC4;
    }
    // 0x80083E68: nop

    // 0x80083E6C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80083E70: lb          $t3, 0x7630($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7630);
    // 0x80083E74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083E78: bne         $t3, $at, L_80083E90
    if (ctx->r11 != ctx->r1) {
        // 0x80083E7C: nop
    
            goto L_80083E90;
    }
    // 0x80083E7C: nop

    // 0x80083E80: b           L_80083448
    // 0x80083E84: nop

        goto L_80083448;
    // 0x80083E84: nop

    // 0x80083E88: b           L_80083EBC
    // 0x80083E8C: nop

        goto L_80083EBC;
    // 0x80083E8C: nop

L_80083E90:
    // 0x80083E90: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80083E94: lb          $t4, 0x7630($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X7630);
    // 0x80083E98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083E9C: bne         $t4, $at, L_80083EB4
    if (ctx->r12 != ctx->r1) {
        // 0x80083EA0: nop
    
            goto L_80083EB4;
    }
    // 0x80083EA0: nop

    // 0x80083EA4: b           L_80083448
    // 0x80083EA8: nop

        goto L_80083448;
    // 0x80083EA8: nop

    // 0x80083EAC: b           L_80083EBC
    // 0x80083EB0: nop

        goto L_80083EBC;
    // 0x80083EB0: nop

L_80083EB4:
    // 0x80083EB4: b           L_800832DC
    // 0x80083EB8: nop

        goto L_800832DC;
    // 0x80083EB8: nop

L_80083EBC:
    // 0x80083EBC: b           L_80084100
    // 0x80083EC0: nop

        goto L_80084100;
    // 0x80083EC0: nop

L_80083EC4:
    // 0x80083EC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80083EC8: lb          $t5, -0x1C34($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C34);
    // 0x80083ECC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80083ED0: bne         $t5, $at, L_80083FC8
    if (ctx->r13 != ctx->r1) {
        // 0x80083ED4: nop
    
            goto L_80083FC8;
    }
    // 0x80083ED4: nop

    // 0x80083ED8: jal         0x80069FD8
    // 0x80083EDC: nop

    func_80069FD8(rdram, ctx);
        goto after_106;
    // 0x80083EDC: nop

    after_106:
    // 0x80083EE0: jal         0x80069F0C
    // 0x80083EE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80069F0C(rdram, ctx);
        goto after_107;
    // 0x80083EE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_107:
    // 0x80083EE8: jal         0x80088248
    // 0x80083EEC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_80088248(rdram, ctx);
        goto after_108;
    // 0x80083EEC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_108:
    // 0x80083EF0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80083EF4: lbu         $t6, 0x5243($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X5243);
    // 0x80083EF8: nop

    // 0x80083EFC: bne         $t6, $zero, L_80083FB0
    if (ctx->r14 != 0) {
        // 0x80083F00: nop
    
            goto L_80083FB0;
    }
    // 0x80083F00: nop

    // 0x80083F04: jal         0x80000C8C
    // 0x80083F08: nop

    func_80000C8C(rdram, ctx);
        goto after_109;
    // 0x80083F08: nop

    after_109:
    // 0x80083F0C: jal         0x80331154
    // 0x80083F10: nop

    func_80331154_unk_bin_3(rdram, ctx);
        goto after_110;
    // 0x80083F10: nop

    after_110:
    // 0x80083F14: bne         $v0, $zero, L_80083F58
    if (ctx->r2 != 0) {
        // 0x80083F18: nop
    
            goto L_80083F58;
    }
    // 0x80083F18: nop

    // 0x80083F1C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80083F20: lb          $t7, 0x7630($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7630);
    // 0x80083F24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083F28: bne         $t7, $at, L_80083F40
    if (ctx->r15 != ctx->r1) {
        // 0x80083F2C: nop
    
            goto L_80083F40;
    }
    // 0x80083F2C: nop

    // 0x80083F30: jal         0x80088094
    // 0x80083F34: nop

    func_80088094(rdram, ctx);
        goto after_111;
    // 0x80083F34: nop

    after_111:
    // 0x80083F38: b           L_80083F48
    // 0x80083F3C: nop

        goto L_80083F48;
    // 0x80083F3C: nop

L_80083F40:
    // 0x80083F40: jal         0x80088134
    // 0x80083F44: nop

    func_80088134(rdram, ctx);
        goto after_112;
    // 0x80083F44: nop

    after_112:
L_80083F48:
    // 0x80083F48: b           L_80083E1C
    // 0x80083F4C: nop

        goto L_80083E1C;
    // 0x80083F4C: nop

    // 0x80083F50: b           L_80083FA8
    // 0x80083F54: nop

        goto L_80083FA8;
    // 0x80083F54: nop

L_80083F58:
    // 0x80083F58: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80083F5C: lb          $t8, 0x7630($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X7630);
    // 0x80083F60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083F64: bne         $t8, $at, L_80083F7C
    if (ctx->r24 != ctx->r1) {
        // 0x80083F68: nop
    
            goto L_80083F7C;
    }
    // 0x80083F68: nop

    // 0x80083F6C: b           L_80083448
    // 0x80083F70: nop

        goto L_80083448;
    // 0x80083F70: nop

    // 0x80083F74: b           L_80083FA8
    // 0x80083F78: nop

        goto L_80083FA8;
    // 0x80083F78: nop

L_80083F7C:
    // 0x80083F7C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80083F80: lb          $t9, 0x7630($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7630);
    // 0x80083F84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083F88: bne         $t9, $at, L_80083FA0
    if (ctx->r25 != ctx->r1) {
        // 0x80083F8C: nop
    
            goto L_80083FA0;
    }
    // 0x80083F8C: nop

    // 0x80083F90: b           L_80083448
    // 0x80083F94: nop

        goto L_80083448;
    // 0x80083F94: nop

    // 0x80083F98: b           L_80083FA8
    // 0x80083F9C: nop

        goto L_80083FA8;
    // 0x80083F9C: nop

L_80083FA0:
    // 0x80083FA0: b           L_800832DC
    // 0x80083FA4: nop

        goto L_800832DC;
    // 0x80083FA4: nop

L_80083FA8:
    // 0x80083FA8: b           L_80083FC0
    // 0x80083FAC: nop

        goto L_80083FC0;
    // 0x80083FAC: nop

L_80083FB0:
    // 0x80083FB0: jal         0x800881D4
    // 0x80083FB4: nop

    func_800881D4(rdram, ctx);
        goto after_113;
    // 0x80083FB4: nop

    after_113:
    // 0x80083FB8: b           L_80083E1C
    // 0x80083FBC: nop

        goto L_80083E1C;
    // 0x80083FBC: nop

L_80083FC0:
    // 0x80083FC0: b           L_80084100
    // 0x80083FC4: nop

        goto L_80084100;
    // 0x80083FC4: nop

L_80083FC8:
    // 0x80083FC8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80083FCC: lb          $t0, -0x1C34($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C34);
    // 0x80083FD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083FD4: beq         $t0, $at, L_80083FE8
    if (ctx->r8 == ctx->r1) {
        // 0x80083FD8: nop
    
            goto L_80083FE8;
    }
    // 0x80083FD8: nop

    // 0x80083FDC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80083FE0: bne         $t0, $at, L_80084100
    if (ctx->r8 != ctx->r1) {
        // 0x80083FE4: nop
    
            goto L_80084100;
    }
    // 0x80083FE4: nop

L_80083FE8:
    // 0x80083FE8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80083FEC: lb          $t1, 0x7630($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7630);
    // 0x80083FF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083FF4: bne         $t1, $at, L_800840A4
    if (ctx->r9 != ctx->r1) {
        // 0x80083FF8: nop
    
            goto L_800840A4;
    }
    // 0x80083FF8: nop

    // 0x80083FFC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80084000: lh          $t2, -0x1BCE($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1BCE);
    // 0x80084004: addiu       $at, $zero, 0xAD
    ctx->r1 = ADD32(0, 0XAD);
    // 0x80084008: bne         $t2, $at, L_80084080
    if (ctx->r10 != ctx->r1) {
        // 0x8008400C: nop
    
            goto L_80084080;
    }
    // 0x8008400C: nop

    // 0x80084010: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80084014: lb          $t3, 0x7640($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7640);
    // 0x80084018: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008401C: bne         $t3, $at, L_80084034
    if (ctx->r11 != ctx->r1) {
        // 0x80084020: nop
    
            goto L_80084034;
    }
    // 0x80084020: nop

    // 0x80084024: addiu       $t4, $zero, 0xAD
    ctx->r12 = ADD32(0, 0XAD);
    // 0x80084028: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008402C: b           L_80084078
    // 0x80084030: sh          $t4, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r12;
        goto L_80084078;
    // 0x80084030: sh          $t4, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r12;
L_80084034:
    // 0x80084034: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80084038: lb          $t5, 0x7640($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7640);
    // 0x8008403C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80084040: bne         $t5, $at, L_80084058
    if (ctx->r13 != ctx->r1) {
        // 0x80084044: nop
    
            goto L_80084058;
    }
    // 0x80084044: nop

    // 0x80084048: addiu       $t6, $zero, 0xAE
    ctx->r14 = ADD32(0, 0XAE);
    // 0x8008404C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084050: b           L_80084078
    // 0x80084054: sh          $t6, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r14;
        goto L_80084078;
    // 0x80084054: sh          $t6, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r14;
L_80084058:
    // 0x80084058: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008405C: lb          $t7, 0x7640($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7640);
    // 0x80084060: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80084064: bne         $t7, $at, L_80084078
    if (ctx->r15 != ctx->r1) {
        // 0x80084068: nop
    
            goto L_80084078;
    }
    // 0x80084068: nop

    // 0x8008406C: addiu       $t8, $zero, 0xAE
    ctx->r24 = ADD32(0, 0XAE);
    // 0x80084070: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084074: sh          $t8, -0x1BCE($at)
    MEM_H(-0X1BCE, ctx->r1) = ctx->r24;
L_80084078:
    // 0x80084078: b           L_8008409C
    // 0x8008407C: nop

        goto L_8008409C;
    // 0x8008407C: nop

L_80084080:
    // 0x80084080: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80084084: lh          $t9, -0x1BCE($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1BCE);
    // 0x80084088: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8008408C: bne         $t9, $at, L_8008409C
    if (ctx->r25 != ctx->r1) {
        // 0x80084090: nop
    
            goto L_8008409C;
    }
    // 0x80084090: nop

    // 0x80084094: b           L_80083448
    // 0x80084098: nop

        goto L_80083448;
    // 0x80084098: nop

L_8008409C:
    // 0x8008409C: b           L_800840F8
    // 0x800840A0: nop

        goto L_800840F8;
    // 0x800840A0: nop

L_800840A4:
    // 0x800840A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800840A8: lb          $t0, 0x7630($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X7630);
    // 0x800840AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800840B0: bne         $t0, $at, L_800840DC
    if (ctx->r8 != ctx->r1) {
        // 0x800840B4: nop
    
            goto L_800840DC;
    }
    // 0x800840B4: nop

    // 0x800840B8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800840BC: lh          $t1, -0x1BCE($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1BCE);
    // 0x800840C0: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x800840C4: bne         $t1, $at, L_800840D4
    if (ctx->r9 != ctx->r1) {
        // 0x800840C8: nop
    
            goto L_800840D4;
    }
    // 0x800840C8: nop

    // 0x800840CC: b           L_80083448
    // 0x800840D0: nop

        goto L_80083448;
    // 0x800840D0: nop

L_800840D4:
    // 0x800840D4: b           L_800840F8
    // 0x800840D8: nop

        goto L_800840F8;
    // 0x800840D8: nop

L_800840DC:
    // 0x800840DC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800840E0: lh          $t2, -0x1BCE($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1BCE);
    // 0x800840E4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x800840E8: bne         $t2, $at, L_800840F8
    if (ctx->r10 != ctx->r1) {
        // 0x800840EC: nop
    
            goto L_800840F8;
    }
    // 0x800840EC: nop

    // 0x800840F0: b           L_800832DC
    // 0x800840F4: nop

        goto L_800832DC;
    // 0x800840F4: nop

L_800840F8:
    // 0x800840F8: b           L_80083E24
    // 0x800840FC: nop

        goto L_80083E24;
    // 0x800840FC: nop

L_80084100:
    // 0x80084100: b           L_80084108
    // 0x80084104: nop

        goto L_80084108;
    // 0x80084104: nop

L_80084108:
    // 0x80084108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008410C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80084110: jr          $ra
    // 0x80084114: nop

    return;
    // 0x80084114: nop

;}
RECOMP_FUNC void func_8008884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008884C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80088854: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80088858: jal         0x8001A928
    // 0x8008885C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8008885C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80088860: jal         0x8001A928
    // 0x80088864: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x80088864: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80088868: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008886C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80088870: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80088874: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80088878: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008887C: addiu       $t9, $t9, -0x3560
    ctx->r25 = ADD32(ctx->r25, -0X3560);
    // 0x80088880: lw          $t0, 0x1118($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1118);
    // 0x80088884: lw          $t8, 0x1880($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1880);
    // 0x80088888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8008888C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088890: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80088894: jal         0x8001BD44
    // 0x80088898: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    func_8001BD44(rdram, ctx);
        goto after_2;
    // 0x80088898: addu        $a3, $t8, $t0
    ctx->r7 = ADD32(ctx->r24, ctx->r8);
    after_2:
    // 0x8008889C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800888A0: addiu       $t1, $t1, 0x1888
    ctx->r9 = ADD32(ctx->r9, 0X1888);
    // 0x800888A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800888A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800888AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800888B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800888B4: jal         0x8001C0EC
    // 0x800888B8: addiu       $a3, $zero, 0x223
    ctx->r7 = ADD32(0, 0X223);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800888B8: addiu       $a3, $zero, 0x223
    ctx->r7 = ADD32(0, 0X223);
    after_3:
    // 0x800888BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800888C0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x800888C4: addiu       $t2, $zero, 0x266
    ctx->r10 = ADD32(0, 0X266);
    // 0x800888C8: sh          $t2, 0xE4($t3)
    MEM_H(0XE4, ctx->r11) = ctx->r10;
    // 0x800888CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800888D0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800888D4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800888D8: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800888DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800888E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800888E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800888E8: jal         0x80019448
    // 0x800888EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_4;
    // 0x800888EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x800888F0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800888F4: nop

    // 0x800888F8: bne         $t6, $zero, L_80088974
    if (ctx->r14 != 0) {
        // 0x800888FC: nop
    
            goto L_80088974;
    }
    // 0x800888FC: nop

    // 0x80088900: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80088904: addiu       $a3, $a3, 0x1A74
    ctx->r7 = ADD32(ctx->r7, 0X1A74);
    // 0x80088908: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8008890C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088910: jal         0x8001ABF4
    // 0x80088914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x80088914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80088918: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8008891C: addiu       $a3, $a3, 0x1A74
    ctx->r7 = ADD32(ctx->r7, 0X1A74);
    // 0x80088920: addiu       $a3, $a3, 0xFC
    ctx->r7 = ADD32(ctx->r7, 0XFC);
    // 0x80088924: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008892C: jal         0x8001ABF4
    // 0x80088930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x80088930: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80088934: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80088938: addiu       $a3, $a3, 0x1A74
    ctx->r7 = ADD32(ctx->r7, 0X1A74);
    // 0x8008893C: addiu       $a3, $a3, 0x118
    ctx->r7 = ADD32(ctx->r7, 0X118);
    // 0x80088940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088944: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80088948: jal         0x8001ABF4
    // 0x8008894C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x8008894C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80088950: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80088954: addiu       $a3, $a3, 0x1A74
    ctx->r7 = ADD32(ctx->r7, 0X1A74);
    // 0x80088958: addiu       $a3, $a3, 0x134
    ctx->r7 = ADD32(ctx->r7, 0X134);
    // 0x8008895C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088960: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80088964: jal         0x8001ABF4
    // 0x80088968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x80088968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8008896C: b           L_80088990
    // 0x80088970: nop

        goto L_80088990;
    // 0x80088970: nop

L_80088974:
    // 0x80088974: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80088978: addiu       $a3, $a3, 0x1A74
    ctx->r7 = ADD32(ctx->r7, 0X1A74);
    // 0x8008897C: addiu       $a3, $a3, 0x1A4
    ctx->r7 = ADD32(ctx->r7, 0X1A4);
    // 0x80088980: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088988: jal         0x8001ABF4
    // 0x8008898C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x8008898C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_80088990:
    // 0x80088990: b           L_80088998
    // 0x80088994: nop

        goto L_80088998;
    // 0x80088994: nop

L_80088998:
    // 0x80088998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008899C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800889A0: jr          $ra
    // 0x800889A4: nop

    return;
    // 0x800889A4: nop

;}
RECOMP_FUNC void func_800F88A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F88A8: jr          $ra
    // 0x800F88AC: nop

    return;
    // 0x800F88AC: nop

    // 0x800F88B0: jr          $ra
    // 0x800F88B4: nop

    return;
    // 0x800F88B4: nop

;}
RECOMP_FUNC void func_800CA4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA4FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CA500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CA504: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA508: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA50C: jal         0x8002B0E4
    // 0x800CA510: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800CA510: nop

    after_0:
    // 0x800CA514: b           L_800CA51C
    // 0x800CA518: nop

        goto L_800CA51C;
    // 0x800CA518: nop

L_800CA51C:
    // 0x800CA51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CA520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CA524: jr          $ra
    // 0x800CA528: nop

    return;
    // 0x800CA528: nop

;}
RECOMP_FUNC void stub_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A842C: jr          $ra
    // 0x800A8430: nop

    return;
    // 0x800A8430: nop

    // 0x800A8434: jr          $ra
    // 0x800A8438: nop

    return;
    // 0x800A8438: nop

;}
RECOMP_FUNC void func_8007D508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007D50C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D510: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007D514: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007D518: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007D51C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007D520: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D524: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007D528: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D52C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007D530: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007D534: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D538: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007D53C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007D540: jal         0x8007D2C8
    // 0x8007D544: nop

    func_8007D2C8(rdram, ctx);
        goto after_0;
    // 0x8007D544: nop

    after_0:
    // 0x8007D548: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007D54C: jal         0x80079778
    // 0x8007D550: nop

    func_80079778(rdram, ctx);
        goto after_1;
    // 0x8007D550: nop

    after_1:
    // 0x8007D554: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007D558: jal         0x800797FC
    // 0x8007D55C: nop

    func_800797FC(rdram, ctx);
        goto after_2;
    // 0x8007D55C: nop

    after_2:
    // 0x8007D560: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D564: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8007D568: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8007D56C: nop

    // 0x8007D570: bne         $t1, $at, L_8007D584
    if (ctx->r9 != ctx->r1) {
        // 0x8007D574: nop
    
            goto L_8007D584;
    }
    // 0x8007D574: nop

    // 0x8007D578: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D57C: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x8007D580: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_8007D584:
    // 0x8007D584: b           L_8007D58C
    // 0x8007D588: nop

        goto L_8007D58C;
    // 0x8007D588: nop

L_8007D58C:
    // 0x8007D58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007D594: jr          $ra
    // 0x8007D598: nop

    return;
    // 0x8007D598: nop

;}
RECOMP_FUNC void func_800B7148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7148: jr          $ra
    // 0x800B714C: nop

    return;
    // 0x800B714C: nop

    // 0x800B7150: jr          $ra
    // 0x800B7154: nop

    return;
    // 0x800B7154: nop

;}
RECOMP_FUNC void func_800D13D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D13D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D13D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D13D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D13DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D13E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D13E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D13E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D13EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D13F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D13F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D13F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D13FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D1400: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D1404: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1408: nop

    // 0x800D140C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D1410: nop

    // 0x800D1414: bne         $t1, $zero, L_800D1460
    if (ctx->r9 != 0) {
        // 0x800D1418: nop
    
            goto L_800D1460;
    }
    // 0x800D1418: nop

    // 0x800D141C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1420: nop

    // 0x800D1424: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D1428: nop

    // 0x800D142C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D1430: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D1434: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1438: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D143C: jal         0x8001BB34
    // 0x800D1440: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800D1440: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800D1444: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D1448: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D144C: jal         0x8001BB04
    // 0x800D1450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x800D1450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800D1454: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1458: nop

    // 0x800D145C: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
L_800D1460:
    // 0x800D1460: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1464: nop

    // 0x800D1468: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D146C: nop

    // 0x800D1470: beq         $t7, $zero, L_800D1490
    if (ctx->r15 == 0) {
        // 0x800D1474: nop
    
            goto L_800D1490;
    }
    // 0x800D1474: nop

    // 0x800D1478: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800D147C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800D1480: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800D1484: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D1488: nop

    // 0x800D148C: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800D1490:
    // 0x800D1490: b           L_800D1498
    // 0x800D1494: nop

        goto L_800D1498;
    // 0x800D1494: nop

L_800D1498:
    // 0x800D1498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D149C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D14A0: jr          $ra
    // 0x800D14A4: nop

    return;
    // 0x800D14A4: nop

;}
RECOMP_FUNC void func_80094570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094570: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80094574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80094578: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009457C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80094580: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80094584: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80094588: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009458C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80094590: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80094594: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80094598: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009459C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800945A0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800945A4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800945A8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800945AC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800945B0: addiu       $a1, $a1, 0x33D4
    ctx->r5 = ADD32(ctx->r5, 0X33D4);
    // 0x800945B4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800945B8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800945BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800945C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800945C4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800945C8: jal         0x80027464
    // 0x800945CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800945CC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800945D0: b           L_800945D8
    // 0x800945D4: nop

        goto L_800945D8;
    // 0x800945D4: nop

L_800945D8:
    // 0x800945D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800945DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800945E0: jr          $ra
    // 0x800945E4: nop

    return;
    // 0x800945E4: nop

;}
RECOMP_FUNC void func_800C4584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4584: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C4588: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C458C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C4590: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C4594: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C4598: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C459C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C45A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C45A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C45A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C45AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C45B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C45B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C45B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C45BC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C45C0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C45C4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C45C8: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C45CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C45D0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C45D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C45D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C45DC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C45E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C45E4: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C45E8: nop

    // 0x800C45EC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800C45F0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C45F4: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C45F8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C45FC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C4600: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4604: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C4608: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C460C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C4610: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4614: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C4618: nop

    // 0x800C461C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x800C4620: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C4624: nop

    // 0x800C4628: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C462C: nop

    // 0x800C4630: bne         $t7, $zero, L_800C47D4
    if (ctx->r15 != 0) {
        // 0x800C4634: nop
    
            goto L_800C47D4;
    }
    // 0x800C4634: nop

    // 0x800C4638: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C463C: nop

    // 0x800C4640: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C4644: nop

    // 0x800C4648: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C464C: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C4650: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C4654: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800C4658: addiu       $t1, $t1, -0x7EF8
    ctx->r9 = ADD32(ctx->r9, -0X7EF8);
    // 0x800C465C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C4660: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800C4664: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C4668: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C466C: jal         0x8001C0EC
    // 0x800C4670: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C4670: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C4674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C4678: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C467C: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C4680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C4684: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C4688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C468C: jal         0x8001ABF4
    // 0x800C4690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C4690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800C4694: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800C4698: addiu       $t2, $t2, -0x7EF8
    ctx->r10 = ADD32(ctx->r10, -0X7EF8);
    // 0x800C469C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C46A0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800C46A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C46A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C46AC: jal         0x8001C0EC
    // 0x800C46B0: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800C46B0: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_2:
    // 0x800C46B4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C46B8: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C46BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C46C0: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C46C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C46C8: jal         0x8001ABF4
    // 0x800C46CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C46CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800C46D0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800C46D4: addiu       $t3, $t3, -0x7EF8
    ctx->r11 = ADD32(ctx->r11, -0X7EF8);
    // 0x800C46D8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C46DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800C46E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C46E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C46E8: jal         0x8001C0EC
    // 0x800C46EC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800C46EC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_4:
    // 0x800C46F0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C46F4: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C46F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C46FC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800C4700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C4704: jal         0x8001ABF4
    // 0x800C4708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800C4708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800C470C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4710: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4714: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C4718: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C471C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4720: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C4724: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C4728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C472C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4730: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C4734: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C4738: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C473C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C4740: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4744: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C4748: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C474C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4750: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4754: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C4758: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800C475C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C4760: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800C4764: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4768: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x800C476C: lwc1        $f20, 0x44($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800C4770: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4774: addu        $t2, $t1, $t9
    ctx->r10 = ADD32(ctx->r9, ctx->r25);
    // 0x800C4778: swc1        $f20, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f20.u32l;
    // 0x800C477C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C4780: nop

    // 0x800C4784: swc1        $f20, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f20.u32l;
    // 0x800C4788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C478C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C4790: lui         $a1, 0x4155
    ctx->r5 = S32(0X4155 << 16);
    // 0x800C4794: lui         $a2, 0x3FAB
    ctx->r6 = S32(0X3FAB << 16);
    // 0x800C4798: ori         $a2, $a2, 0x851F
    ctx->r6 = ctx->r6 | 0X851F;
    // 0x800C479C: jal         0x80029EF8
    // 0x800C47A0: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    func_80029EF8(rdram, ctx);
        goto after_6;
    // 0x800C47A0: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    after_6:
    // 0x800C47A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C47A8: lui         $a1, 0x4155
    ctx->r5 = S32(0X4155 << 16);
    // 0x800C47AC: lui         $a2, 0x3FAB
    ctx->r6 = S32(0X3FAB << 16);
    // 0x800C47B0: ori         $a2, $a2, 0x851F
    ctx->r6 = ctx->r6 | 0X851F;
    // 0x800C47B4: jal         0x80029EF8
    // 0x800C47B8: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    func_80029EF8(rdram, ctx);
        goto after_7;
    // 0x800C47B8: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    after_7:
    // 0x800C47BC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C47C0: lui         $a1, 0x4155
    ctx->r5 = S32(0X4155 << 16);
    // 0x800C47C4: lui         $a2, 0x3FAB
    ctx->r6 = S32(0X3FAB << 16);
    // 0x800C47C8: ori         $a2, $a2, 0x851F
    ctx->r6 = ctx->r6 | 0X851F;
    // 0x800C47CC: jal         0x80029EF8
    // 0x800C47D0: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    func_80029EF8(rdram, ctx);
        goto after_8;
    // 0x800C47D0: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    after_8:
L_800C47D4:
    // 0x800C47D4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C47D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C47DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C47E0: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800C47E4: jal         0x80015538
    // 0x800C47E8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x800C47E8: nop

    after_9:
    // 0x800C47EC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C47F0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800C47F4: swc1        $f20, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f20.u32l;
    // 0x800C47F8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C47FC: nop

    // 0x800C4800: swc1        $f20, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f20.u32l;
    // 0x800C4804: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800C4808: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C480C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800C4810: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C4814: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C4818: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C481C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C4820: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C4824: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800C4828: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C482C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C4830: jal         0x80015538
    // 0x800C4834: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800C4834: nop

    after_10:
    // 0x800C4838: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C483C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800C4840: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C4844: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4848: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C484C: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4850: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x800C4854: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4858: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C485C: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x800C4860: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C4864: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C4868: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800C486C: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800C4870: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x800C4874: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C4878: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C487C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800C4880: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800C4884: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4888: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C488C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C4890: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C4894: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C4898: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C489C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C48A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C48A4: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800C48A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800C48AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800C48B0: jal         0x80015538
    // 0x800C48B4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x800C48B4: nop

    after_11:
    // 0x800C48B8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C48BC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C48C0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800C48C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C48C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C48CC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C48D0: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800C48D4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C48D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C48DC: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C48E0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C48E4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C48E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800C48EC: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800C48F0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C48F4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C48F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C48FC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C4900: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800C4904: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C4908: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C490C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C4910: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C4914: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C4918: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C491C: jal         0x80029F58
    // 0x800C4920: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800C4920: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800C4924: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C4928: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C492C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4930: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C4934: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C4938: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C493C: jal         0x80029F58
    // 0x800C4940: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_13;
    // 0x800C4940: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x800C4944: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C4948: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C494C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C4950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C4954: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C4958: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C495C: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C4960: jal         0x80029F58
    // 0x800C4964: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_14;
    // 0x800C4964: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x800C4968: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C496C: bne         $v0, $at, L_800C4BEC
    if (ctx->r2 != ctx->r1) {
        // 0x800C4970: nop
    
            goto L_800C4BEC;
    }
    // 0x800C4970: nop

    // 0x800C4974: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C4978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C497C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C4980: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x800C4984: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800C4988: jal         0x800175F0
    // 0x800C498C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_15;
    // 0x800C498C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x800C4990: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C4994: nop

    // 0x800C4998: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800C499C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C49A0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800C49A4: sh          $t1, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r9;
    // 0x800C49A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C49AC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800C49B0: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x800C49B4: nop

    // 0x800C49B8: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800C49BC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C49C0: lh          $t5, 0x4D20($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4D20);
    // 0x800C49C4: nop

    // 0x800C49C8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x800C49CC: nop

    // 0x800C49D0: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C49D4: swc1        $f20, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f20.u32l;
    // 0x800C49D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C49DC: nop

    // 0x800C49E0: swc1        $f20, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f20.u32l;
    // 0x800C49E4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C49E8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C49EC: nop

    // 0x800C49F0: swc1        $f18, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f18.u32l;
    // 0x800C49F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C49F8: nop

    // 0x800C49FC: lwc1        $f20, 0x2C($t0)
    ctx->f20.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800C4A00: nop

    // 0x800C4A04: swc1        $f20, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f20.u32l;
    // 0x800C4A08: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C4A0C: nop

    // 0x800C4A10: swc1        $f20, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f20.u32l;
    // 0x800C4A14: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C4A18: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x800C4A1C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x800C4A20: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x800C4A24: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C4A28: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x800C4A2C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C4A30: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x800C4A34: addu        $t4, $t9, $t3
    ctx->r12 = ADD32(ctx->r25, ctx->r11);
    // 0x800C4A38: lh          $t5, 0xB6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB6);
    // 0x800C4A3C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800C4A40: sll         $t2, $t5, 1
    ctx->r10 = S32(ctx->r13 << 1);
    // 0x800C4A44: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800C4A48: lh          $t6, 0x4D20($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4D20);
    // 0x800C4A4C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4A50: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800C4A54: nop

    // 0x800C4A58: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C4A5C: swc1        $f20, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f20.u32l;
    // 0x800C4A60: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800C4A64: nop

    // 0x800C4A68: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800C4A6C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C4A70: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C4A74: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C4A78: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C4A7C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800C4A80: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800C4A84: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x800C4A88: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800C4A8C: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x800C4A90: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4A94: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x800C4A98: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4A9C: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x800C4AA0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C4AA4: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800C4AA8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C4AAC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4AB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4AB4: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C4AB8: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x800C4ABC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C4AC0: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800C4AC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C4AC8: addu        $t2, $t3, $t5
    ctx->r10 = ADD32(ctx->r11, ctx->r13);
    // 0x800C4ACC: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800C4AD0: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800C4AD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4AD8: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x800C4ADC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800C4AE0: nop

    // 0x800C4AE4: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800C4AE8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800C4AEC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C4AF0: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800C4AF4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C4AF8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800C4AFC: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800C4B00: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4B04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C4B08: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x800C4B0C: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C4B10: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C4B14: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x800C4B18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C4B1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C4B20: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x800C4B24: lh          $t9, 0xB6($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XB6);
    // 0x800C4B28: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800C4B2C: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x800C4B30: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800C4B34: lh          $t5, 0x4D20($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4D20);
    // 0x800C4B38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4B3C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x800C4B40: nop

    // 0x800C4B44: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C4B48: swc1        $f20, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f20.u32l;
    // 0x800C4B4C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4B50: nop

    // 0x800C4B54: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x800C4B58: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800C4B5C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C4B60: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x800C4B64: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C4B68: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C4B6C: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800C4B70: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4B74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4B78: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800C4B7C: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800C4B80: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800C4B84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4B88: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800C4B8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C4B90: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800C4B94: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C4B98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C4B9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4BA0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800C4BA4: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800C4BA8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C4BAC: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800C4BB0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C4BB4: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x800C4BB8: swc1        $f10, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f10.u32l;
    // 0x800C4BBC: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800C4BC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C4BC4: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800C4BC8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C4BCC: nop

    // 0x800C4BD0: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x800C4BD4: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x800C4BD8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C4BDC: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x800C4BE0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C4BE4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C4BE8: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
L_800C4BEC:
    // 0x800C4BEC: b           L_800C4BF4
    // 0x800C4BF0: nop

        goto L_800C4BF4;
    // 0x800C4BF0: nop

L_800C4BF4:
    // 0x800C4BF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C4BF8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C4BFC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C4C00: jr          $ra
    // 0x800C4C04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C4C04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800CF40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF40C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CF410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF418: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF41C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF420: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF424: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF428: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF42C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF430: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF434: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CF438: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800CF43C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CF440: bne         $t8, $at, L_800CF49C
    if (ctx->r24 != ctx->r1) {
        // 0x800CF444: nop
    
            goto L_800CF49C;
    }
    // 0x800CF444: nop

    // 0x800CF448: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800CF44C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800CF450: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800CF454: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800CF458: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CF45C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CF460: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800CF464: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CF468: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CF46C: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x800CF470: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CF474: bne         $t1, $at, L_800CF494
    if (ctx->r9 != ctx->r1) {
        // 0x800CF478: nop
    
            goto L_800CF494;
    }
    // 0x800CF478: nop

    // 0x800CF47C: b           L_800CF484
    // 0x800CF480: nop

        goto L_800CF484;
    // 0x800CF480: nop

L_800CF484:
    // 0x800CF484: jal         0x800CF260
    // 0x800CF488: nop

    func_800CF260(rdram, ctx);
        goto after_0;
    // 0x800CF488: nop

    after_0:
    // 0x800CF48C: b           L_800CF49C
    // 0x800CF490: nop

        goto L_800CF49C;
    // 0x800CF490: nop

L_800CF494:
    // 0x800CF494: b           L_800CF49C
    // 0x800CF498: nop

        goto L_800CF49C;
    // 0x800CF498: nop

L_800CF49C:
    // 0x800CF49C: b           L_800CF4A4
    // 0x800CF4A0: nop

        goto L_800CF4A4;
    // 0x800CF4A0: nop

L_800CF4A4:
    // 0x800CF4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CF4AC: jr          $ra
    // 0x800CF4B0: nop

    return;
    // 0x800CF4B0: nop

;}
RECOMP_FUNC void func_800FE9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FE9BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FE9C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FE9C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FE9C8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FE9CC: addiu       $a1, $a1, 0x4334
    ctx->r5 = ADD32(ctx->r5, 0X4334);
    // 0x800FE9D0: jal         0x80036BE4
    // 0x800FE9D4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x800FE9D4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x800FE9D8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FE9DC: jal         0x8005F9EC
    // 0x800FE9E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    Debug_PrintXY(rdram, ctx);
        goto after_1;
    // 0x800FE9E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800FE9E4: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FE9E8: lb          $a2, -0x1C1C($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1C1C);
    // 0x800FE9EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FE9F0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FE9F4: addiu       $a1, $a1, 0x4340
    ctx->r5 = ADD32(ctx->r5, 0X4340);
    // 0x800FE9F8: jal         0x80036BE4
    // 0x800FE9FC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x800FE9FC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_2:
    // 0x800FEA00: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEA04: jal         0x8005F9EC
    // 0x800FEA08: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_3;
    // 0x800FEA08: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x800FEA0C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEA10: lb          $a2, -0x1C09($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1C09);
    // 0x800FEA14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEA18: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEA1C: addiu       $a1, $a1, 0x435C
    ctx->r5 = ADD32(ctx->r5, 0X435C);
    // 0x800FEA20: jal         0x80036BE4
    // 0x800FEA24: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x800FEA24: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_4:
    // 0x800FEA28: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEA2C: jal         0x8005F9EC
    // 0x800FEA30: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    Debug_PrintXY(rdram, ctx);
        goto after_5;
    // 0x800FEA30: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_5:
    // 0x800FEA34: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEA38: lb          $a2, -0x1C04($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1C04);
    // 0x800FEA3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEA40: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEA44: addiu       $a1, $a1, 0x4378
    ctx->r5 = ADD32(ctx->r5, 0X4378);
    // 0x800FEA48: jal         0x80036BE4
    // 0x800FEA4C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x800FEA4C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_6:
    // 0x800FEA50: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEA54: jal         0x8005F9EC
    // 0x800FEA58: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    Debug_PrintXY(rdram, ctx);
        goto after_7;
    // 0x800FEA58: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_7:
    // 0x800FEA5C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEA60: lb          $a2, -0x1BFC($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1BFC);
    // 0x800FEA64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEA68: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEA6C: addiu       $a1, $a1, 0x438C
    ctx->r5 = ADD32(ctx->r5, 0X438C);
    // 0x800FEA70: jal         0x80036BE4
    // 0x800FEA74: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800FEA74: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_8:
    // 0x800FEA78: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEA7C: jal         0x8005F9EC
    // 0x800FEA80: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    Debug_PrintXY(rdram, ctx);
        goto after_9;
    // 0x800FEA80: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_9:
    // 0x800FEA84: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEA88: lb          $a2, -0x1BF4($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X1BF4);
    // 0x800FEA8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEA90: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEA94: addiu       $a1, $a1, 0x43A4
    ctx->r5 = ADD32(ctx->r5, 0X43A4);
    // 0x800FEA98: jal         0x80036BE4
    // 0x800FEA9C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_10;
    // 0x800FEA9C: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_10:
    // 0x800FEAA0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEAA4: jal         0x8005F9EC
    // 0x800FEAA8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    Debug_PrintXY(rdram, ctx);
        goto after_11;
    // 0x800FEAA8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_11:
    // 0x800FEAAC: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800FEAB0: lb          $a2, 0x523F($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X523F);
    // 0x800FEAB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEAB8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEABC: addiu       $a1, $a1, 0x43BC
    ctx->r5 = ADD32(ctx->r5, 0X43BC);
    // 0x800FEAC0: jal         0x80036BE4
    // 0x800FEAC4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_12;
    // 0x800FEAC4: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_12:
    // 0x800FEAC8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEACC: jal         0x8005F9EC
    // 0x800FEAD0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    Debug_PrintXY(rdram, ctx);
        goto after_13;
    // 0x800FEAD0: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_13:
    // 0x800FEAD4: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x800FEAD8: lb          $a2, 0x5240($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X5240);
    // 0x800FEADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEAE0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEAE4: addiu       $a1, $a1, 0x43CC
    ctx->r5 = ADD32(ctx->r5, 0X43CC);
    // 0x800FEAE8: jal         0x80036BE4
    // 0x800FEAEC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_14;
    // 0x800FEAEC: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_14:
    // 0x800FEAF0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEAF4: jal         0x8005F9EC
    // 0x800FEAF8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    Debug_PrintXY(rdram, ctx);
        goto after_15;
    // 0x800FEAF8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_15:
    // 0x800FEAFC: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800FEB00: lbu         $a2, 0x7974($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7974);
    // 0x800FEB04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEB08: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEB0C: addiu       $a1, $a1, 0x43DC
    ctx->r5 = ADD32(ctx->r5, 0X43DC);
    // 0x800FEB10: jal         0x80036BE4
    // 0x800FEB14: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_16;
    // 0x800FEB14: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_16:
    // 0x800FEB18: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x800FEB1C: jal         0x8005F9EC
    // 0x800FEB20: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    Debug_PrintXY(rdram, ctx);
        goto after_17;
    // 0x800FEB20: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    after_17:
    // 0x800FEB24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FEB28: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800FEB2C: addiu       $a1, $a1, 0x43F0
    ctx->r5 = ADD32(ctx->r5, 0X43F0);
    // 0x800FEB30: jal         0x80036BE4
    // 0x800FEB34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    sprintf_recomp(rdram, ctx);
        goto after_18;
    // 0x800FEB34: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_18:
    // 0x800FEB38: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800FEB3C: lh          $a1, -0x1C0C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1C0C);
    // 0x800FEB40: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x800FEB44: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x800FEB48: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800FEB4C: jal         0x8005F9EC
    // 0x800FEB50: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    Debug_PrintXY(rdram, ctx);
        goto after_19;
    // 0x800FEB50: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    after_19:
    // 0x800FEB54: b           L_800FEB5C
    // 0x800FEB58: nop

        goto L_800FEB5C;
    // 0x800FEB58: nop

L_800FEB5C:
    // 0x800FEB5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FEB60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FEB64: jr          $ra
    // 0x800FEB68: nop

    return;
    // 0x800FEB68: nop

;}
RECOMP_FUNC void func_800824A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800824A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800824AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800824B0: jal         0x8001ECB8
    // 0x800824B4: nop

    func_8001ECB8(rdram, ctx);
        goto after_0;
    // 0x800824B4: nop

    after_0:
    // 0x800824B8: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x800824BC: addiu       $t6, $t6, 0x21E0
    ctx->r14 = ADD32(ctx->r14, 0X21E0);
    // 0x800824C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800824C4: sw          $t6, 0x526C($at)
    MEM_W(0X526C, ctx->r1) = ctx->r14;
    // 0x800824C8: lui         $t7, 0x8002
    ctx->r15 = S32(0X8002 << 16);
    // 0x800824CC: addiu       $t7, $t7, 0x4744
    ctx->r15 = ADD32(ctx->r15, 0X4744);
    // 0x800824D0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800824D4: sw          $t7, 0x5274($at)
    MEM_W(0X5274, ctx->r1) = ctx->r15;
    // 0x800824D8: jal         0x80081D78
    // 0x800824DC: nop

    func_80081D78(rdram, ctx);
        goto after_1;
    // 0x800824DC: nop

    after_1:
    // 0x800824E0: jal         0x80000964
    // 0x800824E4: nop

    func_80000964(rdram, ctx);
        goto after_2;
    // 0x800824E4: nop

    after_2:
    // 0x800824E8: b           L_800824F0
    // 0x800824EC: nop

        goto L_800824F0;
    // 0x800824EC: nop

L_800824F0:
    // 0x800824F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800824F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800824F8: jr          $ra
    // 0x800824FC: nop

    return;
    // 0x800824FC: nop

;}
RECOMP_FUNC void func_80079B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079B60: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80079B64: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80079B68: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80079B6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80079B70: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80079B74: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80079B78: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80079B7C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80079B80: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80079B84: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80079B88: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80079B8C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80079B90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80079B94: lwc1        $f4, 0x28($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80079B98: nop

    // 0x80079B9C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80079BA0: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x80079BA4: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80079BA8: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80079BAC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80079BB0: lwc1        $f10, 0x28($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80079BB4: nop

    // 0x80079BB8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80079BBC: nop

    // 0x80079BC0: bc1f        L_80079BDC
    if (!c1cs) {
        // 0x80079BC4: nop
    
            goto L_80079BDC;
    }
    // 0x80079BC4: nop

    // 0x80079BC8: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80079BCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80079BD0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80079BD4: nop

    // 0x80079BD8: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
L_80079BDC:
    // 0x80079BDC: b           L_80079BE4
    // 0x80079BE0: nop

        goto L_80079BE4;
    // 0x80079BE0: nop

L_80079BE4:
    // 0x80079BE4: jr          $ra
    // 0x80079BE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80079BE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800BB55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB55C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BB560: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BB564: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800BB568: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800BB56C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800BB570: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800BB574: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800BB578: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800BB57C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800BB580: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BB584: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800BB588: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800BB58C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800BB590: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800BB594: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800BB598: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800BB59C: addiu       $a1, $a1, 0x3B08
    ctx->r5 = ADD32(ctx->r5, 0X3B08);
    // 0x800BB5A0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800BB5A4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800BB5A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800BB5AC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BB5B0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800BB5B4: jal         0x80027464
    // 0x800BB5B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800BB5B8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800BB5BC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x800BB5C0: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800BB5C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BB5C8: beq         $t1, $at, L_800BB694
    if (ctx->r9 == ctx->r1) {
        // 0x800BB5CC: nop
    
            goto L_800BB694;
    }
    // 0x800BB5CC: nop

    // 0x800BB5D0: lb          $t3, 0x27($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X27);
    // 0x800BB5D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB5D8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800BB5DC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BB5E0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800BB5E4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800BB5E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800BB5EC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800BB5F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BB5F4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800BB5F8: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800BB5FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB600: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BB604: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BB608: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BB60C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BB610: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BB614: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BB618: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800BB61C: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x800BB620: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x800BB624: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB628: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800BB62C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BB630: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BB634: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800BB638: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BB63C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BB640: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BB644: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x800BB648: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB64C: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x800BB650: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800BB654: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800BB658: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800BB65C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800BB660: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800BB664: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800BB668: sh          $t0, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r8;
    // 0x800BB66C: lb          $t4, 0x27($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X27);
    // 0x800BB670: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB674: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x800BB678: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800BB67C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BB680: addu        $t7, $t7, $t4
    ctx->r15 = ADD32(ctx->r15, ctx->r12);
    // 0x800BB684: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BB688: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800BB68C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800BB690: sh          $t2, 0x4250($at)
    MEM_H(0X4250, ctx->r1) = ctx->r10;
L_800BB694:
    // 0x800BB694: b           L_800BB69C
    // 0x800BB698: nop

        goto L_800BB69C;
    // 0x800BB698: nop

L_800BB69C:
    // 0x800BB69C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BB6A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BB6A4: jr          $ra
    // 0x800BB6A8: nop

    return;
    // 0x800BB6A8: nop

;}
RECOMP_FUNC void func_8005DD80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005DD80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005DD84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005DD88: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005DD8C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005DD90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005DD94: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x8005DD98: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x8005DD9C: nop

    // 0x8005DDA0: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8005DDA4: beq         $t8, $zero, L_8005DE04
    if (ctx->r24 == 0) {
        // 0x8005DDA8: nop
    
            goto L_8005DE04;
    }
    // 0x8005DDA8: nop

    // 0x8005DDAC: jal         0x8001D1D4
    // 0x8005DDB0: nop

    func_8001D1D4(rdram, ctx);
        goto after_0;
    // 0x8005DDB0: nop

    after_0:
    // 0x8005DDB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005DDB8: beq         $v0, $at, L_8005DE04
    if (ctx->r2 == ctx->r1) {
        // 0x8005DDBC: nop
    
            goto L_8005DE04;
    }
    // 0x8005DDBC: nop

    // 0x8005DDC0: jal         0x8001D1D4
    // 0x8005DDC4: nop

    func_8001D1D4(rdram, ctx);
        goto after_1;
    // 0x8005DDC4: nop

    after_1:
    // 0x8005DDC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005DDCC: beq         $v0, $at, L_8005DE04
    if (ctx->r2 == ctx->r1) {
        // 0x8005DDD0: nop
    
            goto L_8005DE04;
    }
    // 0x8005DDD0: nop

    // 0x8005DDD4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8005DDD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DDDC: sb          $t9, 0x47E5($at)
    MEM_B(0X47E5, ctx->r1) = ctx->r25;
    // 0x8005DDE0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8005DDE4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8005DDE8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8005DDEC: jal         0x8001D244
    // 0x8005DDF0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_2;
    // 0x8005DDF0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x8005DDF4: jal         0x8001D2C0
    // 0x8005DDF8: nop

    func_8001D2C0(rdram, ctx);
        goto after_3;
    // 0x8005DDF8: nop

    after_3:
    // 0x8005DDFC: jal         0x80016FC8
    // 0x8005DE00: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80016FC8(rdram, ctx);
        goto after_4;
    // 0x8005DE00: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_4:
L_8005DE04:
    // 0x8005DE04: jal         0x8001D1D4
    // 0x8005DE08: nop

    func_8001D1D4(rdram, ctx);
        goto after_5;
    // 0x8005DE08: nop

    after_5:
    // 0x8005DE0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005DE10: bne         $v0, $at, L_8005DE38
    if (ctx->r2 != ctx->r1) {
        // 0x8005DE14: nop
    
            goto L_8005DE38;
    }
    // 0x8005DE14: nop

    // 0x8005DE18: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005DE1C: lb          $t0, 0x47E5($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X47E5);
    // 0x8005DE20: nop

    // 0x8005DE24: beq         $t0, $zero, L_8005DE38
    if (ctx->r8 == 0) {
        // 0x8005DE28: nop
    
            goto L_8005DE38;
    }
    // 0x8005DE28: nop

    // 0x8005DE2C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8005DE30: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8005DE34: sw          $t1, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r9;
L_8005DE38:
    // 0x8005DE38: jal         0x8005DA00
    // 0x8005DE3C: nop

    func_8005DA00(rdram, ctx);
        goto after_6;
    // 0x8005DE3C: nop

    after_6:
    // 0x8005DE40: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005DE44: lb          $t2, 0x47E6($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X47E6);
    // 0x8005DE48: nop

    // 0x8005DE4C: bne         $t2, $zero, L_8005DF80
    if (ctx->r10 != 0) {
        // 0x8005DE50: nop
    
            goto L_8005DF80;
    }
    // 0x8005DE50: nop

    // 0x8005DE54: jal         0x8005D2D0
    // 0x8005DE58: nop

    Demo_PrepareStr(rdram, ctx);
        goto after_7;
    // 0x8005DE58: nop

    after_7:
    // 0x8005DE5C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005DE60: lb          $t3, 0x4790($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4790);
    // 0x8005DE64: nop

    // 0x8005DE68: bne         $t3, $zero, L_8005DF80
    if (ctx->r11 != 0) {
        // 0x8005DE6C: nop
    
            goto L_8005DF80;
    }
    // 0x8005DE6C: nop

    // 0x8005DE70: jal         0x8005C438
    // 0x8005DE74: nop

    Demo_SetView(rdram, ctx);
        goto after_8;
    // 0x8005DE74: nop

    after_8:
    // 0x8005DE78: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8005DE7C:
    // 0x8005DE7C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8005DE80: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8005DE84: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8005DE88: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8005DE8C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8005DE90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8005DE94: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8005DE98: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8005DE9C: lh          $t6, 0x41F4($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X41F4);
    // 0x8005DEA0: nop

    // 0x8005DEA4: beq         $t6, $zero, L_8005DEC4
    if (ctx->r14 == 0) {
        // 0x8005DEA8: nop
    
            goto L_8005DEC4;
    }
    // 0x8005DEA8: nop

    // 0x8005DEAC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005DEB0: jal         0x8001CD20
    // 0x8005DEB4: nop

    func_8001CD20(rdram, ctx);
        goto after_9;
    // 0x8005DEB4: nop

    after_9:
    // 0x8005DEB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005DEBC: jal         0x8001AD6C
    // 0x8005DEC0: nop

    func_8001AD6C(rdram, ctx);
        goto after_10;
    // 0x8005DEC0: nop

    after_10:
L_8005DEC4:
    // 0x8005DEC4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8005DEC8: nop

    // 0x8005DECC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8005DED0: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x8005DED4: bne         $at, $zero, L_8005DE7C
    if (ctx->r1 != 0) {
        // 0x8005DED8: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_8005DE7C;
    }
    // 0x8005DED8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005DEDC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8005DEE0:
    // 0x8005DEE0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8005DEE4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x8005DEE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8005DEEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005DEF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8005DEF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8005DEF8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8005DEFC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8005DF00: lh          $t1, 0x41F4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F4);
    // 0x8005DF04: nop

    // 0x8005DF08: beq         $t1, $zero, L_8005DF68
    if (ctx->r9 == 0) {
        // 0x8005DF0C: nop
    
            goto L_8005DF68;
    }
    // 0x8005DF0C: nop

    // 0x8005DF10: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005DF14: jal         0x8001B44C
    // 0x8005DF18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_11;
    // 0x8005DF18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8005DF1C: beq         $v0, $zero, L_8005DF68
    if (ctx->r2 == 0) {
        // 0x8005DF20: nop
    
            goto L_8005DF68;
    }
    // 0x8005DF20: nop

    // 0x8005DF24: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8005DF28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DF2C: sb          $t2, 0x4790($at)
    MEM_B(0X4790, ctx->r1) = ctx->r10;
    // 0x8005DF30: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8005DF34: lb          $t3, 0x4799($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4799);
    // 0x8005DF38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005DF3C: bne         $t3, $at, L_8005DF54
    if (ctx->r11 != ctx->r1) {
        // 0x8005DF40: nop
    
            goto L_8005DF54;
    }
    // 0x8005DF40: nop

    // 0x8005DF44: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8005DF48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DF4C: b           L_8005DF60
    // 0x8005DF50: sb          $t4, 0x4791($at)
    MEM_B(0X4791, ctx->r1) = ctx->r12;
        goto L_8005DF60;
    // 0x8005DF50: sb          $t4, 0x4791($at)
    MEM_B(0X4791, ctx->r1) = ctx->r12;
L_8005DF54:
    // 0x8005DF54: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8005DF58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8005DF5C: sb          $t5, 0x4791($at)
    MEM_B(0X4791, ctx->r1) = ctx->r13;
L_8005DF60:
    // 0x8005DF60: b           L_8005DF80
    // 0x8005DF64: nop

        goto L_8005DF80;
    // 0x8005DF64: nop

L_8005DF68:
    // 0x8005DF68: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005DF6C: nop

    // 0x8005DF70: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8005DF74: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x8005DF78: bne         $at, $zero, L_8005DEE0
    if (ctx->r1 != 0) {
        // 0x8005DF7C: sw          $t7, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r15;
            goto L_8005DEE0;
    }
    // 0x8005DF7C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8005DF80:
    // 0x8005DF80: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005DF84: lb          $t8, 0x47E4($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X47E4);
    // 0x8005DF88: nop

    // 0x8005DF8C: beq         $t8, $zero, L_8005E01C
    if (ctx->r24 == 0) {
        // 0x8005DF90: nop
    
            goto L_8005E01C;
    }
    // 0x8005DF90: nop

    // 0x8005DF94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005DF98: jal         0x8001B62C
    // 0x8005DF9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_12;
    // 0x8005DF9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x8005DFA0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8005DFA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005DFA8: jal         0x8001B580
    // 0x8005DFAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_13;
    // 0x8005DFAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8005DFB0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x8005DFB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005DFB8: nop

    // 0x8005DFBC: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8005DFC0: c.eq.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl == ctx->f20.fl;
    // 0x8005DFC4: nop

    // 0x8005DFC8: bc1f        L_8005E01C
    if (!c1cs) {
        // 0x8005DFCC: nop
    
            goto L_8005E01C;
    }
    // 0x8005DFCC: nop

    // 0x8005DFD0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005DFD4: lb          $t9, 0x47E4($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X47E4);
    // 0x8005DFD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005DFDC: bne         $t9, $at, L_8005E000
    if (ctx->r25 != ctx->r1) {
        // 0x8005DFE0: nop
    
            goto L_8005E000;
    }
    // 0x8005DFE0: nop

    // 0x8005DFE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005DFE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005DFEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005DFF0: jal         0x8001D244
    // 0x8005DFF4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_14;
    // 0x8005DFF4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_14:
    // 0x8005DFF8: b           L_8005E014
    // 0x8005DFFC: nop

        goto L_8005E014;
    // 0x8005DFFC: nop

L_8005E000:
    // 0x8005E000: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8005E004: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8005E008: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8005E00C: jal         0x8001D244
    // 0x8005E010: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_15;
    // 0x8005E010: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_15:
L_8005E014:
    // 0x8005E014: jal         0x8001D2C0
    // 0x8005E018: nop

    func_8001D2C0(rdram, ctx);
        goto after_16;
    // 0x8005E018: nop

    after_16:
L_8005E01C:
    // 0x8005E01C: jal         0x8001994C
    // 0x8005E020: nop

    func_8001994C(rdram, ctx);
        goto after_17;
    // 0x8005E020: nop

    after_17:
    // 0x8005E024: b           L_8005E02C
    // 0x8005E028: nop

        goto L_8005E02C;
    // 0x8005E028: nop

L_8005E02C:
    // 0x8005E02C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E030: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005E034: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005E038: jr          $ra
    // 0x8005E03C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8005E03C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800ACA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ACA10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800ACA14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800ACA18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ACA1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ACA20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ACA24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ACA28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ACA2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ACA30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ACA34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ACA38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ACA3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ACA40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800ACA44: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ACA48: nop

    // 0x800ACA4C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800ACA50: nop

    // 0x800ACA54: bne         $t1, $zero, L_800ACAC4
    if (ctx->r9 != 0) {
        // 0x800ACA58: nop
    
            goto L_800ACAC4;
    }
    // 0x800ACA58: nop

    // 0x800ACA5C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800ACA60: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800ACA64: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800ACA68: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800ACA6C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800ACA70: nop

    // 0x800ACA74: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800ACA78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800ACA7C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800ACA80: nop

    // 0x800ACA84: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800ACA88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800ACA8C: nop

    // 0x800ACA90: lh          $t7, 0xAC($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAC);
    // 0x800ACA94: nop

    // 0x800ACA98: bne         $t7, $zero, L_800ACAC4
    if (ctx->r15 != 0) {
        // 0x800ACA9C: nop
    
            goto L_800ACAC4;
    }
    // 0x800ACA9C: nop

    // 0x800ACAA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACAA4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800ACAA8: addiu       $t8, $t8, 0x7658
    ctx->r24 = ADD32(ctx->r24, 0X7658);
    // 0x800ACAAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACAB0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800ACAB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800ACAB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800ACABC: jal         0x8001C0EC
    // 0x800ACAC0: addiu       $a3, $zero, 0x91
    ctx->r7 = ADD32(0, 0X91);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800ACAC0: addiu       $a3, $zero, 0x91
    ctx->r7 = ADD32(0, 0X91);
    after_0:
L_800ACAC4:
    // 0x800ACAC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACAC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACACC: jal         0x80029C40
    // 0x800ACAD0: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800ACAD0: nop

    after_1:
    // 0x800ACAD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACAD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACADC: jal         0x80029D04
    // 0x800ACAE0: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800ACAE0: nop

    after_2:
    // 0x800ACAE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800ACAE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800ACAEC: jal         0x8001B44C
    // 0x800ACAF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800ACAF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800ACAF4: beq         $v0, $zero, L_800ACB14
    if (ctx->r2 == 0) {
        // 0x800ACAF8: nop
    
            goto L_800ACB14;
    }
    // 0x800ACAF8: nop

    // 0x800ACAFC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800ACB00: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800ACB04: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800ACB08: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800ACB0C: nop

    // 0x800ACB10: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800ACB14:
    // 0x800ACB14: b           L_800ACB1C
    // 0x800ACB18: nop

        goto L_800ACB1C;
    // 0x800ACB18: nop

L_800ACB1C:
    // 0x800ACB1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800ACB20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800ACB24: jr          $ra
    // 0x800ACB28: nop

    return;
    // 0x800ACB28: nop

;}
RECOMP_FUNC void func_80060628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060628: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8006062C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80060630:
    // 0x80060630: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80060634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80060638: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8006063C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060640: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060644: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80060648: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8006064C: nop

    // 0x80060650: bne         $t9, $at, L_80060660
    if (ctx->r25 != ctx->r1) {
        // 0x80060654: nop
    
            goto L_80060660;
    }
    // 0x80060654: nop

    // 0x80060658: b           L_800607F8
    // 0x8006065C: nop

        goto L_800607F8;
    // 0x8006065C: nop

L_80060660:
    // 0x80060660: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80060664: nop

    // 0x80060668: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8006066C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80060670: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80060674: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80060678: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8006067C: nop

    // 0x80060680: sw          $t3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r11;
    // 0x80060684: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80060688: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8006068C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80060690: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060694: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80060698: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006069C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800606A0: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800606A4: sh          $zero, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = 0;
    // 0x800606A8: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x800606AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800606B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800606B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800606B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800606BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800606C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800606C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800606C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800606CC: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x800606D0: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x800606D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800606D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800606DC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800606E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800606E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800606E8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800606EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800606F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800606F4: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800606F8: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x800606FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80060700: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80060704: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80060708: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8006070C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80060710: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80060714: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060718: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8006071C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80060720: lw          $t2, 0x0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X0);
    // 0x80060724: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80060728: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8006072C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060730: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060734: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060738: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8006073C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060740: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80060744: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x80060748: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8006074C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80060750: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80060754: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060758: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8006075C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80060760: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80060764: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060768: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8006076C: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x80060770: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x80060774: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80060778: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8006077C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060780: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060784: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80060788: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8006078C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060790: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80060794: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x80060798: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x8006079C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800607A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800607A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800607A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800607AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800607B0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800607B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800607B8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800607BC: swc1        $f4, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f4.u32l;
    // 0x800607C0: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x800607C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800607C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800607CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800607D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800607D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800607D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800607DC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800607E0: sh          $zero, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = 0;
    // 0x800607E4: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800607E8: nop

    // 0x800607EC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800607F0: b           L_80060630
    // 0x800607F4: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
        goto L_80060630;
    // 0x800607F4: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
L_800607F8:
    // 0x800607F8: b           L_80060800
    // 0x800607FC: nop

        goto L_80060800;
    // 0x800607FC: nop

L_80060800:
    // 0x80060800: jr          $ra
    // 0x80060804: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80060804: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800DF704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DF704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DF708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DF70C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DF710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DF714: jal         0x8002B0E4
    // 0x800DF718: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DF718: nop

    after_0:
    // 0x800DF71C: b           L_800DF724
    // 0x800DF720: nop

        goto L_800DF724;
    // 0x800DF720: nop

L_800DF724:
    // 0x800DF724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DF728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DF72C: jr          $ra
    // 0x800DF730: nop

    return;
    // 0x800DF730: nop

;}
RECOMP_FUNC void func_80080EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080EF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80080EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080EFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080F00: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080F04: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080F08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080F0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080F10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080F14: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080F18: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080F1C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080F20: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080F24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80080F28: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80080F2C: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80080F30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80080F34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80080F38: lw          $a3, 0x148($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X148);
    // 0x80080F3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80080F40: jal         0x8001BD44
    // 0x80080F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80080F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80080F48: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80080F4C: addiu       $t1, $zero, 0x2CA
    ctx->r9 = ADD32(0, 0X2CA);
    // 0x80080F50: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
    // 0x80080F54: b           L_80080F5C
    // 0x80080F58: nop

        goto L_80080F5C;
    // 0x80080F58: nop

L_80080F5C:
    // 0x80080F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080F60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80080F64: jr          $ra
    // 0x80080F68: nop

    return;
    // 0x80080F68: nop

;}
RECOMP_FUNC void func_800A6DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6DE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A6DEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A6DF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A6DF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A6DF8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A6DFC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A6E00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A6E04: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6E08: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A6E0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6E10: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A6E14: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A6E18: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A6E1C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A6E20: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A6E24: nop

    // 0x800A6E28: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800A6E2C: nop

    // 0x800A6E30: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x800A6E34: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A6E38: nop

    // 0x800A6E3C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A6E40: nop

    // 0x800A6E44: bne         $t3, $zero, L_800A6F68
    if (ctx->r11 != 0) {
        // 0x800A6E48: nop
    
            goto L_800A6F68;
    }
    // 0x800A6E48: nop

    // 0x800A6E4C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A6E50: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A6E54: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800A6E58: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A6E5C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A6E60: nop

    // 0x800A6E64: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800A6E68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A6E6C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A6E70: nop

    // 0x800A6E74: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800A6E78: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A6E7C: nop

    // 0x800A6E80: sh          $zero, 0x108($t8)
    MEM_H(0X108, ctx->r24) = 0;
    // 0x800A6E84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6E88: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800A6E8C: addiu       $t9, $t9, 0x7088
    ctx->r25 = ADD32(ctx->r25, 0X7088);
    // 0x800A6E90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6E94: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800A6E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6E9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800A6EA0: jal         0x8001C0EC
    // 0x800A6EA4: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A6EA4: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_0:
    // 0x800A6EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6EAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6EB0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A6EB4: addiu       $a3, $a3, 0x7140
    ctx->r7 = ADD32(ctx->r7, 0X7140);
    // 0x800A6EB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6EBC: jal         0x8001ABF4
    // 0x800A6EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A6EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800A6EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6ECC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A6ED0: addiu       $a3, $a3, 0x715C
    ctx->r7 = ADD32(ctx->r7, 0X715C);
    // 0x800A6ED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A6ED8: jal         0x8001ABF4
    // 0x800A6EDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800A6EDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800A6EE0: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800A6EE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6EE8: beq         $t0, $at, L_800A6F44
    if (ctx->r8 == ctx->r1) {
        // 0x800A6EEC: nop
    
            goto L_800A6F44;
    }
    // 0x800A6EEC: nop

    // 0x800A6EF0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800A6EF4: addiu       $t1, $t1, 0x71B0
    ctx->r9 = ADD32(ctx->r9, 0X71B0);
    // 0x800A6EF8: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6EFC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800A6F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A6F08: jal         0x8001C0EC
    // 0x800A6F0C: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800A6F0C: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    after_3:
    // 0x800A6F10: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6F14: jal         0x8001BB34
    // 0x800A6F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_4;
    // 0x800A6F18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800A6F1C: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x800A6F20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A6F24: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A6F28: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A6F2C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A6F30: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A6F34: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A6F38: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A6F3C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800A6F40: sh          $t2, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r10;
L_800A6F44:
    // 0x800A6F44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6F48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6F4C: jal         0x8001BB34
    // 0x800A6F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800A6F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A6F54: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A6F58: nop

    // 0x800A6F5C: lwc1        $f8, 0x3C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800A6F60: nop

    // 0x800A6F64: swc1        $f8, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f8.u32l;
L_800A6F68:
    // 0x800A6F68: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x800A6F6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6F70: beq         $t6, $at, L_800A7010
    if (ctx->r14 == ctx->r1) {
        // 0x800A6F74: nop
    
            goto L_800A7010;
    }
    // 0x800A6F74: nop

    // 0x800A6F78: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800A6F7C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800A6F80: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A6F84: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A6F88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A6F8C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A6F90: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800A6F94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A6F98: lbu         $t9, 0x4282($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4282);
    // 0x800A6F9C: nop

    // 0x800A6FA0: bne         $t9, $zero, L_800A7010
    if (ctx->r25 != 0) {
        // 0x800A6FA4: nop
    
            goto L_800A7010;
    }
    // 0x800A6FA4: nop

    // 0x800A6FA8: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6FAC: jal         0x8001B44C
    // 0x800A6FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800A6FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800A6FB4: beq         $v0, $zero, L_800A7010
    if (ctx->r2 == 0) {
        // 0x800A6FB8: nop
    
            goto L_800A7010;
    }
    // 0x800A6FB8: nop

    // 0x800A6FBC: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6FC0: jal         0x8001BB04
    // 0x800A6FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_7;
    // 0x800A6FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800A6FC8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800A6FCC: addiu       $t0, $t0, 0x71B0
    ctx->r8 = ADD32(ctx->r8, 0X71B0);
    // 0x800A6FD0: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6FD4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A6FD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6FDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800A6FE0: jal         0x8001C0EC
    // 0x800A6FE4: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800A6FE4: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    after_8:
    // 0x800A6FE8: lh          $t3, 0x32($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X32);
    // 0x800A6FEC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A6FF0: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x800A6FF4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800A6FF8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800A6FFC: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x800A7000: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800A7004: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800A7008: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x800A700C: sb          $t1, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r9;
L_800A7010:
    // 0x800A7010: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7014: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7018: jal         0x80029C40
    // 0x800A701C: nop

    func_80029C40(rdram, ctx);
        goto after_9;
    // 0x800A701C: nop

    after_9:
    // 0x800A7020: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7028: jal         0x80029D04
    // 0x800A702C: nop

    func_80029D04(rdram, ctx);
        goto after_10;
    // 0x800A702C: nop

    after_10:
    // 0x800A7030: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A7034: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A7038: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800A703C: nop

    // 0x800A7040: bne         $t5, $at, L_800A70DC
    if (ctx->r13 != ctx->r1) {
        // 0x800A7044: nop
    
            goto L_800A70DC;
    }
    // 0x800A7044: nop

    // 0x800A7048: jal         0x80014E80
    // 0x800A704C: addiu       $a0, $zero, -0x28
    ctx->r4 = ADD32(0, -0X28);
    Math_Random(rdram, ctx);
        goto after_11;
    // 0x800A704C: addiu       $a0, $zero, -0x28
    ctx->r4 = ADD32(0, -0X28);
    after_11:
    // 0x800A7050: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A7054: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A7058: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x800A705C: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A7060: jal         0x80015538
    // 0x800A7064: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x800A7064: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_12:
    // 0x800A7068: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A706C: nop

    // 0x800A7070: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x800A7074: jal         0x80014E80
    // 0x800A7078: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_13;
    // 0x800A7078: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_13:
    // 0x800A707C: addiu       $t8, $v0, 0x2
    ctx->r24 = ADD32(ctx->r2, 0X2);
    // 0x800A7080: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x800A7084: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A7088: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A708C: swc1        $f18, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f18.u32l;
    // 0x800A7090: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7094: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A7098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A709C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A70A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800A70A4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x800A70A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A70AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800A70B0: jal         0x80029018
    // 0x800A70B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_14;
    // 0x800A70B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x800A70B8: beq         $v0, $zero, L_800A70DC
    if (ctx->r2 == 0) {
        // 0x800A70BC: nop
    
            goto L_800A70DC;
    }
    // 0x800A70BC: nop

    // 0x800A70C0: jal         0x800297DC
    // 0x800A70C4: nop

    func_800297DC(rdram, ctx);
        goto after_15;
    // 0x800A70C4: nop

    after_15:
    // 0x800A70C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A70CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A70D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A70D4: jal         0x80029824
    // 0x800A70D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_16;
    // 0x800A70D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
L_800A70DC:
    // 0x800A70DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A70E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A70E4: jal         0x8001B44C
    // 0x800A70E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_17;
    // 0x800A70E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x800A70EC: beq         $v0, $zero, L_800A717C
    if (ctx->r2 == 0) {
        // 0x800A70F0: nop
    
            goto L_800A717C;
    }
    // 0x800A70F0: nop

    // 0x800A70F4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A70F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A70FC: lbu         $t3, 0x132($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X132);
    // 0x800A7100: nop

    // 0x800A7104: bne         $t3, $at, L_800A7164
    if (ctx->r11 != ctx->r1) {
        // 0x800A7108: nop
    
            goto L_800A7164;
    }
    // 0x800A7108: nop

    // 0x800A710C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A7110: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800A7114: sb          $t1, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r9;
    // 0x800A7118: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A711C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800A7120: addiu       $t4, $t4, 0x7088
    ctx->r12 = ADD32(ctx->r12, 0X7088);
    // 0x800A7124: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7128: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800A712C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7130: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800A7134: jal         0x8001C0EC
    // 0x800A7138: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_18;
    // 0x800A7138: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_18:
    // 0x800A713C: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x800A7140: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A7144: beq         $t5, $at, L_800A715C
    if (ctx->r13 == ctx->r1) {
        // 0x800A7148: nop
    
            goto L_800A715C;
    }
    // 0x800A7148: nop

    // 0x800A714C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7154: jal         0x800281A4
    // 0x800A7158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_19;
    // 0x800A7158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
L_800A715C:
    // 0x800A715C: b           L_800A717C
    // 0x800A7160: nop

        goto L_800A717C;
    // 0x800A7160: nop

L_800A7164:
    // 0x800A7164: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7168: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A716C: jal         0x8002B0E4
    // 0x800A7170: nop

    func_8002B0E4(rdram, ctx);
        goto after_20;
    // 0x800A7170: nop

    after_20:
    // 0x800A7174: b           L_800A7184
    // 0x800A7178: nop

        goto L_800A7184;
    // 0x800A7178: nop

L_800A717C:
    // 0x800A717C: b           L_800A7184
    // 0x800A7180: nop

        goto L_800A7184;
    // 0x800A7180: nop

L_800A7184:
    // 0x800A7184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A7188: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A718C: jr          $ra
    // 0x800A7190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A7190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80091EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80091EB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80091EBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80091EC0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80091EC4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80091EC8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80091ECC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80091ED0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80091ED4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80091ED8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80091EDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80091EE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80091EE4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80091EE8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80091EEC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80091EF0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80091EF4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091EF8: addiu       $a1, $a1, 0x163C
    ctx->r5 = ADD32(ctx->r5, 0X163C);
    // 0x80091EFC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091F00: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091F04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091F08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091F0C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091F10: jal         0x80027464
    // 0x80091F14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091F14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091F18: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091F1C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80091F20: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80091F24: addiu       $a3, $a3, 0x2E28
    ctx->r7 = ADD32(ctx->r7, 0X2E28);
    // 0x80091F28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80091F2C: jal         0x8001ABF4
    // 0x80091F30: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80091F30: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80091F34: b           L_80091F3C
    // 0x80091F38: nop

        goto L_80091F3C;
    // 0x80091F38: nop

L_80091F3C:
    // 0x80091F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091F44: jr          $ra
    // 0x80091F48: nop

    return;
    // 0x80091F48: nop

;}
RECOMP_FUNC void func_8009BF7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009BF7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009BF80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009BF84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009BF88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009BF8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009BF90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009BF94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009BF98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009BF9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009BFA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009BFA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009BFA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009BFAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009BFB0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8009BFB4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009BFB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009BFBC: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8009BFC0: nop

    // 0x8009BFC4: beq         $s0, $at, L_8009BFEC
    if (ctx->r16 == ctx->r1) {
        // 0x8009BFC8: nop
    
            goto L_8009BFEC;
    }
    // 0x8009BFC8: nop

    // 0x8009BFCC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009BFD0: beq         $s0, $at, L_8009C000
    if (ctx->r16 == ctx->r1) {
        // 0x8009BFD4: nop
    
            goto L_8009C000;
    }
    // 0x8009BFD4: nop

    // 0x8009BFD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009BFDC: beq         $s0, $at, L_8009C014
    if (ctx->r16 == ctx->r1) {
        // 0x8009BFE0: nop
    
            goto L_8009C014;
    }
    // 0x8009BFE0: nop

    // 0x8009BFE4: b           L_8009C02C
    // 0x8009BFE8: nop

        goto L_8009C02C;
    // 0x8009BFE8: nop

L_8009BFEC:
    // 0x8009BFEC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009BFF0: jal         0x8009BD58
    // 0x8009BFF4: nop

    func_8009BD58(rdram, ctx);
        goto after_0;
    // 0x8009BFF4: nop

    after_0:
    // 0x8009BFF8: b           L_8009C02C
    // 0x8009BFFC: nop

        goto L_8009C02C;
    // 0x8009BFFC: nop

L_8009C000:
    // 0x8009C000: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009C004: jal         0x8009BDF0
    // 0x8009C008: nop

    func_8009BDF0(rdram, ctx);
        goto after_1;
    // 0x8009C008: nop

    after_1:
    // 0x8009C00C: b           L_8009C02C
    // 0x8009C010: nop

        goto L_8009C02C;
    // 0x8009C010: nop

L_8009C014:
    // 0x8009C014: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C018: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C01C: jal         0x8002B0E4
    // 0x8009C020: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x8009C020: nop

    after_2:
    // 0x8009C024: b           L_8009C02C
    // 0x8009C028: nop

        goto L_8009C02C;
    // 0x8009C028: nop

L_8009C02C:
    // 0x8009C02C: b           L_8009C034
    // 0x8009C030: nop

        goto L_8009C034;
    // 0x8009C030: nop

L_8009C034:
    // 0x8009C034: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C038: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009C03C: jr          $ra
    // 0x8009C040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009C040: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C4348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4348: jr          $ra
    // 0x800C434C: nop

    return;
    // 0x800C434C: nop

    // 0x800C4350: jr          $ra
    // 0x800C4354: nop

    return;
    // 0x800C4354: nop

;}
RECOMP_FUNC void func_800CF60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF60C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CF614: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF618: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF61C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF620: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF624: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF628: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF62C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF630: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF634: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CF638: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CF63C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CF640: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CF644: nop

    // 0x800CF648: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CF64C: nop

    // 0x800CF650: bne         $t1, $zero, L_800CF664
    if (ctx->r9 != 0) {
        // 0x800CF654: nop
    
            goto L_800CF664;
    }
    // 0x800CF654: nop

    // 0x800CF658: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CF65C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800CF660: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_800CF664:
    // 0x800CF664: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CF668: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CF66C: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x800CF670: nop

    // 0x800CF674: bne         $t5, $at, L_800CF6D0
    if (ctx->r13 != ctx->r1) {
        // 0x800CF678: nop
    
            goto L_800CF6D0;
    }
    // 0x800CF678: nop

    // 0x800CF67C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CF680: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CF684: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800CF688: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x800CF68C: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x800CF690: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800CF694: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800CF698: addiu       $a1, $a1, 0x40A8
    ctx->r5 = ADD32(ctx->r5, 0X40A8);
    // 0x800CF69C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CF6A0: jal         0x80027464
    // 0x800CF6A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800CF6A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800CF6A8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800CF6AC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800CF6B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CF6B4: beq         $t7, $at, L_800CF6D0
    if (ctx->r15 == ctx->r1) {
        // 0x800CF6B8: nop
    
            goto L_800CF6D0;
    }
    // 0x800CF6B8: nop

    // 0x800CF6BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800CF6C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800CF6C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CF6C8: jal         0x80019448
    // 0x800CF6CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x800CF6CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_800CF6D0:
    // 0x800CF6D0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800CF6D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800CF6D8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800CF6DC: b           L_800CF6E4
    // 0x800CF6E0: nop

        goto L_800CF6E4;
    // 0x800CF6E0: nop

L_800CF6E4:
    // 0x800CF6E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF6E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CF6EC: jr          $ra
    // 0x800CF6F0: nop

    return;
    // 0x800CF6F0: nop

;}
RECOMP_FUNC void func_800D8FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8FD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800D8FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D8FD8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8FDC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D8FE0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D8FE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D8FE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8FEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D8FF0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8FF4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D8FF8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D8FFC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800D9000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D9004: bne         $t8, $at, L_800D9024
    if (ctx->r24 != ctx->r1) {
        // 0x800D9008: nop
    
            goto L_800D9024;
    }
    // 0x800D9008: nop

    // 0x800D900C: b           L_800D9014
    // 0x800D9010: nop

        goto L_800D9014;
    // 0x800D9010: nop

L_800D9014:
    // 0x800D9014: jal         0x800D8E40
    // 0x800D9018: nop

    func_800D8E40(rdram, ctx);
        goto after_0;
    // 0x800D9018: nop

    after_0:
    // 0x800D901C: b           L_800D902C
    // 0x800D9020: nop

        goto L_800D902C;
    // 0x800D9020: nop

L_800D9024:
    // 0x800D9024: b           L_800D902C
    // 0x800D9028: nop

        goto L_800D902C;
    // 0x800D9028: nop

L_800D902C:
    // 0x800D902C: b           L_800D9034
    // 0x800D9030: nop

        goto L_800D9034;
    // 0x800D9030: nop

L_800D9034:
    // 0x800D9034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D9038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800D903C: jr          $ra
    // 0x800D9040: nop

    return;
    // 0x800D9040: nop

;}
RECOMP_FUNC void Demo_SetupTextPal(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BC50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005BC54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005BC58: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005BC5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BC60: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BC64: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005BC68: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8005BC6C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8005BC70: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8005BC74: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BC78: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8005BC7C: nop

    // 0x8005BC80: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005BC84: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005BC88: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005BC8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BC90: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005BC94: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005BC98: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8005BC9C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8005BCA0: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x8005BCA4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005BCA8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005BCAC: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x8005BCB0: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x8005BCB4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005BCB8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005BCBC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005BCC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BCC4: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005BCC8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005BCCC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8005BCD0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8005BCD4: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x8005BCD8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005BCDC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8005BCE0: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8005BCE4: ori         $t1, $t1, 0x2205
    ctx->r9 = ctx->r9 | 0X2205;
    // 0x8005BCE8: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8005BCEC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8005BCF0: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8005BCF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BCF8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8005BCFC: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8005BD00: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8005BD04: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8005BD08: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x8005BD0C: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x8005BD10: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8005BD14: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8005BD18: nop

    // 0x8005BD1C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8005BD20: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005BD24: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005BD28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BD2C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005BD30: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005BD34: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8005BD38: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BD3C: lui         $t0, 0xB900
    ctx->r8 = S32(0XB900 << 16);
    // 0x8005BD40: ori         $t0, $t0, 0x31D
    ctx->r8 = ctx->r8 | 0X31D;
    // 0x8005BD44: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005BD48: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BD4C: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x8005BD50: ori         $t2, $t2, 0x3048
    ctx->r10 = ctx->r10 | 0X3048;
    // 0x8005BD54: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8005BD58: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8005BD5C: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8005BD60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BD64: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8005BD68: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x8005BD6C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8005BD70: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005BD74: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x8005BD78: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x8005BD7C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8005BD80: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005BD84: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x8005BD88: ori         $t8, $t8, 0xF279
    ctx->r24 = ctx->r24 | 0XF279;
    // 0x8005BD8C: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x8005BD90: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8005BD94: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x8005BD98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BD9C: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8005BDA0: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x8005BDA4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BDA8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8005BDAC: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x8005BDB0: ori         $t2, $t2, 0x602
    ctx->r10 = ctx->r10 | 0X602;
    // 0x8005BDB4: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x8005BDB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8005BDBC: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x8005BDC0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005BDC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005BDC8: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005BDCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BDD0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BDD4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005BDD8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005BDDC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8005BDE0: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x8005BDE4: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x8005BDE8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BDEC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8005BDF0: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    // 0x8005BDF4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8005BDF8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005BDFC: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005BE00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BE04: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005BE08: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005BE0C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8005BE10: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BE14: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x8005BE18: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x8005BE1C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005BE20: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BE24: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8005BE28: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005BE2C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005BE30: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005BE34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BE38: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005BE3C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005BE40: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8005BE44: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8005BE48: lui         $t0, 0xFD10
    ctx->r8 = S32(0XFD10 << 16);
    // 0x8005BE4C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005BE50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005BE54: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x8005BE58: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x8005BE5C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8005BE60: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8005BE64: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8005BE68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8005BE6C: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8005BE70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BE74: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005BE78: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8005BE7C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8005BE80: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x8005BE84: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8005BE88: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8005BE8C: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8005BE90: nop

    // 0x8005BE94: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8005BE98: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8005BE9C: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8005BEA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BEA4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8005BEA8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8005BEAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8005BEB0: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x8005BEB4: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x8005BEB8: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x8005BEBC: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8005BEC0: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8005BEC4: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x8005BEC8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8005BECC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005BED0: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8005BED4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BED8: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8005BEDC: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8005BEE0: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x8005BEE4: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8005BEE8: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8005BEEC: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8005BEF0: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8005BEF4: nop

    // 0x8005BEF8: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8005BEFC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8005BF00: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8005BF04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BF08: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8005BF0C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8005BF10: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x8005BF14: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8005BF18: lui         $t4, 0xF000
    ctx->r12 = S32(0XF000 << 16);
    // 0x8005BF1C: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8005BF20: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8005BF24: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x8005BF28: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x8005BF2C: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8005BF30: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8005BF34: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x8005BF38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8005BF3C: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8005BF40: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8005BF44: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8005BF48: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8005BF4C: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8005BF50: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8005BF54: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8005BF58: nop

    // 0x8005BF5C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8005BF60: b           L_8005BF68
    // 0x8005BF64: nop

        goto L_8005BF68;
    // 0x8005BF64: nop

L_8005BF68:
    // 0x8005BF68: jr          $ra
    // 0x8005BF6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8005BF6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800E802C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E802C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8030: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E8034: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800E8038: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800E803C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E8040: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800E8044: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800E8048: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800E804C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800E8050: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800E8054: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800E8058: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800E805C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800E8060: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800E8064: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800E8068: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800E806C: addiu       $a1, $a1, 0x4474
    ctx->r5 = ADD32(ctx->r5, 0X4474);
    // 0x800E8070: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800E8074: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800E8078: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E807C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800E8080: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800E8084: jal         0x80027464
    // 0x800E8088: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E8088: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800E808C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800E8090: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E8094: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E8098: beq         $t1, $at, L_800E80C8
    if (ctx->r9 == ctx->r1) {
        // 0x800E809C: nop
    
            goto L_800E80C8;
    }
    // 0x800E809C: nop

    // 0x800E80A0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E80A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E80A8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800E80AC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800E80B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800E80B4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800E80B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800E80BC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800E80C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800E80C4: sb          $t2, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r10;
L_800E80C8:
    // 0x800E80C8: b           L_800E80D0
    // 0x800E80CC: nop

        goto L_800E80D0;
    // 0x800E80CC: nop

L_800E80D0:
    // 0x800E80D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E80D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E80D8: jr          $ra
    // 0x800E80DC: nop

    return;
    // 0x800E80DC: nop

;}
RECOMP_FUNC void func_800B2AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B2AAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B2AB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B2AB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B2AB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B2ABC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B2AC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B2AC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B2ACC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2AD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B2AD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B2AD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B2ADC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B2AE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B2AE4: nop

    // 0x800B2AE8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B2AEC: nop

    // 0x800B2AF0: bne         $t1, $zero, L_800B2B74
    if (ctx->r9 != 0) {
        // 0x800B2AF4: nop
    
            goto L_800B2B74;
    }
    // 0x800B2AF4: nop

    // 0x800B2AF8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B2AFC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B2B00: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B2B04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2B08: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B2B0C: nop

    // 0x800B2B10: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B2B14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B2B18: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B2B1C: nop

    // 0x800B2B20: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B2B24: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800B2B28: nop

    // 0x800B2B2C: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800B2B30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2B34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2B38: jal         0x8001BB34
    // 0x800B2B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B2B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B2B40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2B44: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B2B48: addiu       $t7, $t7, 0x7884
    ctx->r15 = ADD32(ctx->r15, 0X7884);
    // 0x800B2B4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2B50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B2B54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B2B58: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800B2B5C: jal         0x8001C0EC
    // 0x800B2B60: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B2B60: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_1:
    // 0x800B2B64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2B68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2B6C: jal         0x8001BBDC
    // 0x800B2B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800B2B70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800B2B74:
    // 0x800B2B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2B7C: jal         0x80029C40
    // 0x800B2B80: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B2B80: nop

    after_3:
    // 0x800B2B84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2B88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2B8C: jal         0x80029D04
    // 0x800B2B90: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B2B90: nop

    after_4:
    // 0x800B2B94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2B98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2B9C: jal         0x8001B44C
    // 0x800B2BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800B2BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800B2BA4: beq         $v0, $zero, L_800B2C3C
    if (ctx->r2 == 0) {
        // 0x800B2BA8: nop
    
            goto L_800B2C3C;
    }
    // 0x800B2BA8: nop

    // 0x800B2BAC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B2BB0: nop

    // 0x800B2BB4: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x800B2BB8: nop

    // 0x800B2BBC: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x800B2BC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B2BC4: nop

    // 0x800B2BC8: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x800B2BCC: nop

    // 0x800B2BD0: sh          $t1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r9;
    // 0x800B2BD4: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x800B2BD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B2BDC: beq         $t2, $at, L_800B2C00
    if (ctx->r10 == ctx->r1) {
        // 0x800B2BE0: nop
    
            goto L_800B2C00;
    }
    // 0x800B2BE0: nop

    // 0x800B2BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2BE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2BEC: jal         0x800281A4
    // 0x800B2BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_6;
    // 0x800B2BF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800B2BF4: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x800B2BF8: jal         0x8002B0E4
    // 0x800B2BFC: nop

    func_8002B0E4(rdram, ctx);
        goto after_7;
    // 0x800B2BFC: nop

    after_7:
L_800B2C00:
    // 0x800B2C00: lh          $t3, 0x20($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X20);
    // 0x800B2C04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B2C08: beq         $t3, $at, L_800B2C2C
    if (ctx->r11 == ctx->r1) {
        // 0x800B2C0C: nop
    
            goto L_800B2C2C;
    }
    // 0x800B2C0C: nop

    // 0x800B2C10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2C14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2C18: jal         0x800281A4
    // 0x800B2C1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_8;
    // 0x800B2C1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x800B2C20: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x800B2C24: jal         0x8002B0E4
    // 0x800B2C28: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800B2C28: nop

    after_9:
L_800B2C2C:
    // 0x800B2C2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2C30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2C34: jal         0x8002B0E4
    // 0x800B2C38: nop

    func_8002B0E4(rdram, ctx);
        goto after_10;
    // 0x800B2C38: nop

    after_10:
L_800B2C3C:
    // 0x800B2C3C: b           L_800B2C44
    // 0x800B2C40: nop

        goto L_800B2C44;
    // 0x800B2C40: nop

L_800B2C44:
    // 0x800B2C44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B2C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B2C4C: jr          $ra
    // 0x800B2C50: nop

    return;
    // 0x800B2C50: nop

;}
RECOMP_FUNC void func_80092B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092B9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092BA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092BA4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092BA8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092BAC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092BB0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092BB4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092BB8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092BBC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092BC0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092BC4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092BC8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092BCC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092BD0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092BD4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092BD8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092BDC: addiu       $a1, $a1, 0x1750
    ctx->r5 = ADD32(ctx->r5, 0X1750);
    // 0x80092BE0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092BE4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092BE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092BEC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092BF0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092BF4: jal         0x80027464
    // 0x80092BF8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092BF8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092BFC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092C00: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80092C04: addiu       $t1, $t1, 0x6F40
    ctx->r9 = ADD32(ctx->r9, 0X6F40);
    // 0x80092C08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092C0C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092C10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092C14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092C18: jal         0x8001C0EC
    // 0x80092C1C: addiu       $a3, $zero, 0x27D
    ctx->r7 = ADD32(0, 0X27D);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092C1C: addiu       $a3, $zero, 0x27D
    ctx->r7 = ADD32(0, 0X27D);
    after_1:
    // 0x80092C20: b           L_80092C28
    // 0x80092C24: nop

        goto L_80092C28;
    // 0x80092C24: nop

L_80092C28:
    // 0x80092C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092C30: jr          $ra
    // 0x80092C34: nop

    return;
    // 0x80092C34: nop

;}
RECOMP_FUNC void func_800F770C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F770C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F7710: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7714: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7718: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F771C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F7720: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F772C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F7730: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7734: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7738: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F773C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F7740: nop

    // 0x800F7744: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F7748: nop

    // 0x800F774C: bne         $t1, $zero, L_800F7778
    if (ctx->r9 != 0) {
        // 0x800F7750: nop
    
            goto L_800F7778;
    }
    // 0x800F7750: nop

    // 0x800F7754: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800F7758: nop

    // 0x800F775C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F7760: nop

    // 0x800F7764: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F7768: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F776C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F7770: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x800F7774: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_800F7778:
    // 0x800F7778: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F777C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F7780: nop

    // 0x800F7784: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x800F7788: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F778C: nop

    // 0x800F7790: lwc1        $f12, 0x2C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800F7794: nop

    // 0x800F7798: swc1        $f12, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f12.u32l;
    // 0x800F779C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800F77A0: nop

    // 0x800F77A4: swc1        $f12, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f12.u32l;
    // 0x800F77A8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F77AC: nop

    // 0x800F77B0: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800F77B4: nop

    // 0x800F77B8: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800F77BC: sh          $t3, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r11;
    // 0x800F77C0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F77C4: nop

    // 0x800F77C8: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x800F77CC: nop

    // 0x800F77D0: bgtz        $t2, L_800F77F0
    if (SIGNED(ctx->r10) > 0) {
        // 0x800F77D4: nop
    
            goto L_800F77F0;
    }
    // 0x800F77D4: nop

    // 0x800F77D8: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F77DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800F77E0: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800F77E4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F77E8: nop

    // 0x800F77EC: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F77F0:
    // 0x800F77F0: b           L_800F77F8
    // 0x800F77F4: nop

        goto L_800F77F8;
    // 0x800F77F4: nop

L_800F77F8:
    // 0x800F77F8: jr          $ra
    // 0x800F77FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F77FC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B9070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B9070: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B9074: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B9078: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800B907C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800B9080: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x800B9084: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800B9088: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B908C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B9090: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x800B9094: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800B9098: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B909C: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    // 0x800B90A0: lh          $a1, 0x3A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X3A);
    // 0x800B90A4: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x800B90A8: addiu       $a2, $a2, 0x3A48
    ctx->r6 = ADD32(ctx->r6, 0X3A48);
    // 0x800B90AC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x800B90B0: jal         0x80027C00
    // 0x800B90B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027C00(rdram, ctx);
        goto after_0;
    // 0x800B90B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800B90B8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x800B90BC: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x800B90C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B90C4: beq         $t7, $at, L_800B9210
    if (ctx->r15 == ctx->r1) {
        // 0x800B90C8: nop
    
            goto L_800B9210;
    }
    // 0x800B90C8: nop

    // 0x800B90CC: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x800B90D0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800B90D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800B90D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B90DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800B90E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800B90E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800B90E8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800B90EC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800B90F0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800B90F4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800B90F8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B90FC: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800B9100: nop

    // 0x800B9104: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x800B9108: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800B910C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x800B9110: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B9114: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x800B9118: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B911C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B9120: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
    // 0x800B9124: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x800B9128: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B912C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x800B9130: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800B9134: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B9138: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B913C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800B9140: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
    // 0x800B9144: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800B9148: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B914C: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x800B9150: nop

    // 0x800B9154: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x800B9158: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800B915C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B9160: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800B9164: nop

    // 0x800B9168: swc1        $f4, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f4.u32l;
    // 0x800B916C: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800B9170: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B9174: lwc1        $f8, 0x40($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X40);
    // 0x800B9178: nop

    // 0x800B917C: swc1        $f8, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f8.u32l;
    // 0x800B9180: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800B9184: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800B9188: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800B918C: nop

    // 0x800B9190: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x800B9194: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B9198: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B919C: nop

    // 0x800B91A0: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
    // 0x800B91A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B91A8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B91AC: nop

    // 0x800B91B0: swc1        $f16, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f16.u32l;
    // 0x800B91B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B91B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800B91BC: sh          $t9, 0x108($t0)
    MEM_H(0X108, ctx->r8) = ctx->r25;
    // 0x800B91C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B91C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800B91C8: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800B91CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B91D0: nop

    // 0x800B91D4: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800B91D8: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800B91DC: jal         0x80029C40
    // 0x800B91E0: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800B91E0: nop

    after_1:
    // 0x800B91E4: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800B91E8: jal         0x80029D04
    // 0x800B91EC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B91EC: nop

    after_2:
    // 0x800B91F0: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800B91F4: addiu       $t4, $t4, 0x7BC0
    ctx->r12 = ADD32(ctx->r12, 0X7BC0);
    // 0x800B91F8: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x800B91FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800B9200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B9204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B9208: jal         0x8001C0EC
    // 0x800B920C: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800B920C: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    after_3:
L_800B9210:
    // 0x800B9210: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x800B9214: b           L_800B9224
    // 0x800B9218: nop

        goto L_800B9224;
    // 0x800B9218: nop

    // 0x800B921C: b           L_800B9224
    // 0x800B9220: nop

        goto L_800B9224;
    // 0x800B9220: nop

L_800B9224:
    // 0x800B9224: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B9228: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B922C: jr          $ra
    // 0x800B9230: nop

    return;
    // 0x800B9230: nop

;}
RECOMP_FUNC void func_8006AA0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AA0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AA10: sb          $zero, 0x7640($at)
    MEM_B(0X7640, ctx->r1) = 0;
    // 0x8006AA14: jr          $ra
    // 0x8006AA18: nop

    return;
    // 0x8006AA18: nop

    // 0x8006AA1C: jr          $ra
    // 0x8006AA20: nop

    return;
    // 0x8006AA20: nop

;}
RECOMP_FUNC void func_800F7028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7028: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F702C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7030: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7034: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F703C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7040: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7048: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F704C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7050: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7054: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F7058: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F705C: nop

    // 0x800F7060: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F7064: nop

    // 0x800F7068: bne         $t1, $zero, L_800F70A8
    if (ctx->r9 != 0) {
        // 0x800F706C: nop
    
            goto L_800F70A8;
    }
    // 0x800F706C: nop

    // 0x800F7070: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F7074: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F7078: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F707C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F7080: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F7084: nop

    // 0x800F7088: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800F708C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F7090: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800F7094: nop

    // 0x800F7098: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800F709C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F70A0: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800F70A4: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
L_800F70A8:
    // 0x800F70A8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F70AC: nop

    // 0x800F70B0: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800F70B4: nop

    // 0x800F70B8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800F70BC: sh          $t0, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r8;
    // 0x800F70C0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F70C4: nop

    // 0x800F70C8: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800F70CC: nop

    // 0x800F70D0: bne         $t2, $zero, L_800F70E4
    if (ctx->r10 != 0) {
        // 0x800F70D4: nop
    
            goto L_800F70E4;
    }
    // 0x800F70D4: nop

    // 0x800F70D8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F70DC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800F70E0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
L_800F70E4:
    // 0x800F70E4: b           L_800F70EC
    // 0x800F70E8: nop

        goto L_800F70EC;
    // 0x800F70E8: nop

L_800F70EC:
    // 0x800F70EC: jr          $ra
    // 0x800F70F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F70F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800961A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800961A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800961AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800961B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800961B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800961B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800961BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800961C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800961C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800961C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800961CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800961D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800961D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800961D8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800961DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800961E0: nop

    // 0x800961E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800961E8: nop

    // 0x800961EC: bne         $t1, $zero, L_80096230
    if (ctx->r9 != 0) {
        // 0x800961F0: nop
    
            goto L_80096230;
    }
    // 0x800961F0: nop

    // 0x800961F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800961F8: nop

    // 0x800961FC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80096200: nop

    // 0x80096204: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80096208: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009620C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80096210: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80096214: addiu       $t5, $t5, 0x6934
    ctx->r13 = ADD32(ctx->r13, 0X6934);
    // 0x80096218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009621C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80096220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80096224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80096228: jal         0x8001C0EC
    // 0x8009622C: addiu       $a3, $zero, 0x1AB
    ctx->r7 = ADD32(0, 0X1AB);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009622C: addiu       $a3, $zero, 0x1AB
    ctx->r7 = ADD32(0, 0X1AB);
    after_0:
L_80096230:
    // 0x80096230: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80096234: jal         0x8009612C
    // 0x80096238: nop

    func_8009612C(rdram, ctx);
        goto after_1;
    // 0x80096238: nop

    after_1:
    // 0x8009623C: b           L_80096244
    // 0x80096240: nop

        goto L_80096244;
    // 0x80096240: nop

L_80096244:
    // 0x80096244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096248: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009624C: jr          $ra
    // 0x80096250: nop

    return;
    // 0x80096250: nop

;}
