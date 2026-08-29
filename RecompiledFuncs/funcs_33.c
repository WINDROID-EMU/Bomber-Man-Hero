#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80090798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090798: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009079C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800907A0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800907A4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800907A8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800907AC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800907B0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800907B4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800907B8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800907BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800907C0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800907C4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800907C8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800907CC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800907D0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800907D4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800907D8: addiu       $a1, $a1, 0x1438
    ctx->r5 = ADD32(ctx->r5, 0X1438);
    // 0x800907DC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800907E0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800907E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800907E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800907EC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800907F0: jal         0x80027464
    // 0x800907F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800907F4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800907F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800907FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090800: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090804: addiu       $a3, $a3, 0x2314
    ctx->r7 = ADD32(ctx->r7, 0X2314);
    // 0x80090808: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009080C: jal         0x8001ABF4
    // 0x80090810: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80090810: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80090814: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090818: addiu       $a3, $a3, 0x2314
    ctx->r7 = ADD32(ctx->r7, 0X2314);
    // 0x8009081C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090820: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80090824: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80090828: jal         0x8001ABF4
    // 0x8009082C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8009082C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80090830: b           L_80090838
    // 0x80090834: nop

        goto L_80090838;
    // 0x80090834: nop

L_80090838:
    // 0x80090838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009083C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090840: jr          $ra
    // 0x80090844: nop

    return;
    // 0x80090844: nop

;}
RECOMP_FUNC void func_800C9E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9E28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9E2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C9E30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C9E34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9E38: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9E3C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9E40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9E44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9E48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9E4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9E50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9E54: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C9E58: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800C9E5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C9E60: bne         $t8, $at, L_800C9ED8
    if (ctx->r24 != ctx->r1) {
        // 0x800C9E64: nop
    
            goto L_800C9ED8;
    }
    // 0x800C9E64: nop

    // 0x800C9E68: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800C9E6C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800C9E70: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800C9E74: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800C9E78: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C9E7C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800C9E80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800C9E84: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800C9E88: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800C9E8C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800C9E90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C9E94: beq         $s0, $at, L_800C9EB0
    if (ctx->r16 == ctx->r1) {
        // 0x800C9E98: nop
    
            goto L_800C9EB0;
    }
    // 0x800C9E98: nop

    // 0x800C9E9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C9EA0: beq         $s0, $at, L_800C9EC0
    if (ctx->r16 == ctx->r1) {
        // 0x800C9EA4: nop
    
            goto L_800C9EC0;
    }
    // 0x800C9EA4: nop

    // 0x800C9EA8: b           L_800C9ED0
    // 0x800C9EAC: nop

        goto L_800C9ED0;
    // 0x800C9EAC: nop

L_800C9EB0:
    // 0x800C9EB0: jal         0x800C9B14
    // 0x800C9EB4: nop

    func_800C9B14(rdram, ctx);
        goto after_0;
    // 0x800C9EB4: nop

    after_0:
    // 0x800C9EB8: b           L_800C9ED8
    // 0x800C9EBC: nop

        goto L_800C9ED8;
    // 0x800C9EBC: nop

L_800C9EC0:
    // 0x800C9EC0: jal         0x800C9DF8
    // 0x800C9EC4: nop

    func_800C9DF8(rdram, ctx);
        goto after_1;
    // 0x800C9EC4: nop

    after_1:
    // 0x800C9EC8: b           L_800C9ED8
    // 0x800C9ECC: nop

        goto L_800C9ED8;
    // 0x800C9ECC: nop

L_800C9ED0:
    // 0x800C9ED0: b           L_800C9ED8
    // 0x800C9ED4: nop

        goto L_800C9ED8;
    // 0x800C9ED4: nop

L_800C9ED8:
    // 0x800C9ED8: b           L_800C9EE0
    // 0x800C9EDC: nop

        goto L_800C9EE0;
    // 0x800C9EDC: nop

L_800C9EE0:
    // 0x800C9EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C9EE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C9EE8: jr          $ra
    // 0x800C9EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C9EEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800C3978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3978: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C397C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3980: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C3984: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C3988: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C398C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C3990: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C3994: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C3998: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C399C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C39A0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C39A4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C39A8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C39AC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C39B0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C39B4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C39B8: addiu       $a1, $a1, 0x3F10
    ctx->r5 = ADD32(ctx->r5, 0X3F10);
    // 0x800C39BC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C39C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C39C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C39C8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C39CC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C39D0: jal         0x80027464
    // 0x800C39D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C39D4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C39D8: b           L_800C39E0
    // 0x800C39DC: nop

        goto L_800C39E0;
    // 0x800C39DC: nop

L_800C39E0:
    // 0x800C39E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C39E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C39E8: jr          $ra
    // 0x800C39EC: nop

    return;
    // 0x800C39EC: nop

;}
RECOMP_FUNC void func_800C0F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C0F18: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800C0F1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800C0F20: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800C0F24: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800C0F28: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C0F2C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C0F30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C0F34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C0F38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C0F3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C0F40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0F44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C0F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C0F4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C0F50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C0F54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C0F58: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800C0F5C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C0F60: nop

    // 0x800C0F64: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C0F68: nop

    // 0x800C0F6C: bne         $t1, $zero, L_800C1080
    if (ctx->r9 != 0) {
        // 0x800C0F70: nop
    
            goto L_800C1080;
    }
    // 0x800C0F70: nop

    // 0x800C0F74: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C0F78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800C0F7C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800C0F80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C0F84: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C0F88: nop

    // 0x800C0F8C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800C0F90: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C0F94: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C0F98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C0F9C: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800C0FA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800C0FA4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C0FA8: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800C0FAC: nop

    // 0x800C0FB0: bc1f        L_800C1008
    if (!c1cs) {
        // 0x800C0FB4: nop
    
            goto L_800C1008;
    }
    // 0x800C0FB4: nop

    // 0x800C0FB8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C0FBC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C0FC0: nop

    // 0x800C0FC4: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x800C0FC8: nop

    // 0x800C0FCC: bc1f        L_800C0FE4
    if (!c1cs) {
        // 0x800C0FD0: nop
    
            goto L_800C0FE4;
    }
    // 0x800C0FD0: nop

    // 0x800C0FD4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C0FD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C0FDC: b           L_800C0FFC
    // 0x800C0FE0: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
        goto L_800C0FFC;
    // 0x800C0FE0: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
L_800C0FE4:
    // 0x800C0FE4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800C0FE8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C0FEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C0FF0: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800C0FF4: nop

    // 0x800C0FF8: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
L_800C0FFC:
    // 0x800C0FFC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1000: b           L_800C1064
    // 0x800C1004: swc1        $f20, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f20.u32l;
        goto L_800C1064;
    // 0x800C1004: swc1        $f20, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f20.u32l;
L_800C1008:
    // 0x800C1008: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C100C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C1010: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C1014: lwc1        $f16, 0x1C($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800C1018: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C101C: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800C1020: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800C1024: nop

    // 0x800C1028: bc1f        L_800C1040
    if (!c1cs) {
        // 0x800C102C: nop
    
            goto L_800C1040;
    }
    // 0x800C102C: nop

    // 0x800C1030: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x800C1034: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C1038: b           L_800C1058
    // 0x800C103C: add.s       $f22, $f16, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f6.fl;
        goto L_800C1058;
    // 0x800C103C: add.s       $f22, $f16, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f6.fl;
L_800C1040:
    // 0x800C1040: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1044: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C1048: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C104C: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800C1050: nop

    // 0x800C1054: add.s       $f22, $f8, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f8.fl + ctx->f18.fl;
L_800C1058:
    // 0x800C1058: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C105C: nop

    // 0x800C1060: swc1        $f22, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f22.u32l;
L_800C1064:
    // 0x800C1064: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1068: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x800C106C: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800C1070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1078: jal         0x80029C40
    // 0x800C107C: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800C107C: nop

    after_0:
L_800C1080:
    // 0x800C1080: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1084: nop

    // 0x800C1088: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C108C: nop

    // 0x800C1090: bgtz        $t4, L_800C10D4
    if (SIGNED(ctx->r12) > 0) {
        // 0x800C1094: nop
    
            goto L_800C10D4;
    }
    // 0x800C1094: nop

    // 0x800C1098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C109C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800C10A0: addiu       $t5, $t5, 0x7F08
    ctx->r13 = ADD32(ctx->r13, 0X7F08);
    // 0x800C10A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C10A8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C10AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C10B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C10B4: jal         0x8001C0EC
    // 0x800C10B8: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C10B8: addiu       $a3, $zero, 0x12B
    ctx->r7 = ADD32(0, 0X12B);
    after_1:
    // 0x800C10BC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800C10C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800C10C4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800C10C8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800C10CC: b           L_800C11D0
    // 0x800C10D0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800C11D0;
    // 0x800C10D0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800C10D4:
    // 0x800C10D4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800C10D8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C10DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C10E0: lwc1        $f10, 0x18($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X18);
    // 0x800C10E4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800C10E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C10EC: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800C10F0: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800C10F4: nop

    // 0x800C10F8: bc1f        L_800C1150
    if (!c1cs) {
        // 0x800C10FC: nop
    
            goto L_800C1150;
    }
    // 0x800C10FC: nop

    // 0x800C1100: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C1104: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C1108: nop

    // 0x800C110C: c.le.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl <= ctx->f16.fl;
    // 0x800C1110: nop

    // 0x800C1114: bc1f        L_800C112C
    if (!c1cs) {
        // 0x800C1118: nop
    
            goto L_800C112C;
    }
    // 0x800C1118: nop

    // 0x800C111C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C1120: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C1124: b           L_800C1144
    // 0x800C1128: sub.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f18.fl;
        goto L_800C1144;
    // 0x800C1128: sub.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f18.fl;
L_800C112C:
    // 0x800C112C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1130: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C1134: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C1138: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x800C113C: nop

    // 0x800C1140: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
L_800C1144:
    // 0x800C1144: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1148: b           L_800C11B8
    // 0x800C114C: swc1        $f20, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f20.u32l;
        goto L_800C11B8;
    // 0x800C114C: swc1        $f20, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f20.u32l;
L_800C1150:
    // 0x800C1150: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1154: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C1158: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C115C: lwc1        $f6, 0x18($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X18);
    // 0x800C1160: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C1164: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C1168: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800C116C: nop

    // 0x800C1170: bc1f        L_800C1194
    if (!c1cs) {
        // 0x800C1174: nop
    
            goto L_800C1194;
    }
    // 0x800C1174: nop

    // 0x800C1178: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800C117C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C1180: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C1184: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C1188: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800C118C: b           L_800C11AC
    // 0x800C1190: add.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f8.fl;
        goto L_800C11AC;
    // 0x800C1190: add.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f4.fl + ctx->f8.fl;
L_800C1194:
    // 0x800C1194: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800C1198: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800C119C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C11A0: lwc1        $f16, 0x18($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X18);
    // 0x800C11A4: nop

    // 0x800C11A8: add.s       $f22, $f16, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f18.fl;
L_800C11AC:
    // 0x800C11AC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800C11B0: nop

    // 0x800C11B4: swc1        $f22, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f22.u32l;
L_800C11B8:
    // 0x800C11B8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800C11BC: nop

    // 0x800C11C0: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800C11C4: nop

    // 0x800C11C8: addiu       $t7, $t6, -0x6
    ctx->r15 = ADD32(ctx->r14, -0X6);
    // 0x800C11CC: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
L_800C11D0:
    // 0x800C11D0: b           L_800C11D8
    // 0x800C11D4: nop

        goto L_800C11D8;
    // 0x800C11D4: nop

L_800C11D8:
    // 0x800C11D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800C11DC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C11E0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C11E4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800C11E8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800C11EC: jr          $ra
    // 0x800C11F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800C11F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800A39D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A39D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A39D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A39D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A39DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A39E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A39E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A39E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A39EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A39F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A39F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A39F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A39FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A3A00: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A3A04: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A3A08: nop

    // 0x800A3A0C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A3A10: nop

    // 0x800A3A14: bne         $t1, $zero, L_800A3A7C
    if (ctx->r9 != 0) {
        // 0x800A3A18: nop
    
            goto L_800A3A7C;
    }
    // 0x800A3A18: nop

    // 0x800A3A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A3A20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A3A24: nop

    // 0x800A3A28: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x800A3A2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A3A30: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A3A34: nop

    // 0x800A3A38: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x800A3A3C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A3A40: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800A3A44: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800A3A48: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A3A4C: nop

    // 0x800A3A50: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800A3A54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3A58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3A5C: jal         0x80029D04
    // 0x800A3A60: nop

    func_80029D04(rdram, ctx);
        goto after_0;
    // 0x800A3A60: nop

    after_0:
    // 0x800A3A64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3A68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3A6C: lui         $a2, 0x3F7A
    ctx->r6 = S32(0X3F7A << 16);
    // 0x800A3A70: ori         $a2, $a2, 0xE148
    ctx->r6 = ctx->r6 | 0XE148;
    // 0x800A3A74: jal         0x80029EF8
    // 0x800A3A78: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800A3A78: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
L_800A3A7C:
    // 0x800A3A7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3A80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3A84: jal         0x80029C40
    // 0x800A3A88: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800A3A88: nop

    after_2:
    // 0x800A3A8C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A3A90: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800A3A94: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A3A98: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800A3A9C: jal         0x80015538
    // 0x800A3AA0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800A3AA0: nop

    after_3:
    // 0x800A3AA4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A3AA8: nop

    // 0x800A3AAC: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800A3AB0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800A3AB4: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x800A3AB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A3ABC: lwc1        $f12, 0x18($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X18);
    // 0x800A3AC0: jal         0x80015538
    // 0x800A3AC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800A3AC4: nop

    after_4:
    // 0x800A3AC8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A3ACC: nop

    // 0x800A3AD0: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x800A3AD4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A3AD8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A3ADC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A3AE0: lwc1        $f8, 0x18($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X18);
    // 0x800A3AE4: nop

    // 0x800A3AE8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800A3AEC: nop

    // 0x800A3AF0: bc1f        L_800A3B20
    if (!c1cs) {
        // 0x800A3AF4: nop
    
            goto L_800A3B20;
    }
    // 0x800A3AF4: nop

    // 0x800A3AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3AFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B00: jal         0x8001BB34
    // 0x800A3B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800A3B04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800A3B08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3B0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B10: jal         0x8002B0E4
    // 0x800A3B14: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800A3B14: nop

    after_6:
    // 0x800A3B18: b           L_800A3BBC
    // 0x800A3B1C: nop

        goto L_800A3BBC;
    // 0x800A3B1C: nop

L_800A3B20:
    // 0x800A3B20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A3B24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3B28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A3B30: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800A3B34: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A3B38: jal         0x80029F58
    // 0x800A3B3C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80029F58(rdram, ctx);
        goto after_7;
    // 0x800A3B3C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800A3B40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A3B44: bne         $v0, $at, L_800A3B74
    if (ctx->r2 != ctx->r1) {
        // 0x800A3B48: nop
    
            goto L_800A3B74;
    }
    // 0x800A3B48: nop

    // 0x800A3B4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3B50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B54: jal         0x8001BB34
    // 0x800A3B58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_8;
    // 0x800A3B58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800A3B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B64: jal         0x8002B0E4
    // 0x800A3B68: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x800A3B68: nop

    after_9:
    // 0x800A3B6C: b           L_800A3BBC
    // 0x800A3B70: nop

        goto L_800A3BBC;
    // 0x800A3B70: nop

L_800A3B74:
    // 0x800A3B74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3B78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B7C: jal         0x80028FA0
    // 0x800A3B80: nop

    func_80028FA0(rdram, ctx);
        goto after_10;
    // 0x800A3B80: nop

    after_10:
    // 0x800A3B84: beq         $v0, $zero, L_800A3BB4
    if (ctx->r2 == 0) {
        // 0x800A3B88: nop
    
            goto L_800A3BB4;
    }
    // 0x800A3B88: nop

    // 0x800A3B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3B90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3B94: jal         0x8001BB34
    // 0x800A3B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_11;
    // 0x800A3B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800A3B9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A3BA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A3BA4: jal         0x8002B0E4
    // 0x800A3BA8: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x800A3BA8: nop

    after_12:
    // 0x800A3BAC: b           L_800A3BBC
    // 0x800A3BB0: nop

        goto L_800A3BBC;
    // 0x800A3BB0: nop

L_800A3BB4:
    // 0x800A3BB4: b           L_800A3BBC
    // 0x800A3BB8: nop

        goto L_800A3BBC;
    // 0x800A3BB8: nop

L_800A3BBC:
    // 0x800A3BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3BC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A3BC4: jr          $ra
    // 0x800A3BC8: nop

    return;
    // 0x800A3BC8: nop

;}
RECOMP_FUNC void func_80100260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80100260: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80100264: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100268: sh          $zero, 0x4734($at)
    MEM_H(0X4734, ctx->r1) = 0;
    // 0x8010026C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100270: sh          $zero, 0x4730($at)
    MEM_H(0X4730, ctx->r1) = 0;
    // 0x80100274: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_80100278:
    // 0x80100278: lh          $t6, 0x6($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6);
    // 0x8010027C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80100280: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80100284: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80100288: sh          $zero, 0x4738($at)
    MEM_H(0X4738, ctx->r1) = 0;
    // 0x8010028C: lh          $t8, 0x6($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X6);
    // 0x80100290: nop

    // 0x80100294: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80100298: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8010029C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x801002A0: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x801002A4: bne         $at, $zero, L_80100278
    if (ctx->r1 != 0) {
        // 0x801002A8: sh          $t9, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r25;
            goto L_80100278;
    }
    // 0x801002A8: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x801002AC: b           L_801002B4
    // 0x801002B0: nop

        goto L_801002B4;
    // 0x801002B0: nop

L_801002B4:
    // 0x801002B4: jr          $ra
    // 0x801002B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x801002B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800CBF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CBF5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800CBF60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CBF64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CBF68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CBF6C: jal         0x8002B0E4
    // 0x800CBF70: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800CBF70: nop

    after_0:
    // 0x800CBF74: b           L_800CBF7C
    // 0x800CBF78: nop

        goto L_800CBF7C;
    // 0x800CBF78: nop

L_800CBF7C:
    // 0x800CBF7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CBF80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800CBF84: jr          $ra
    // 0x800CBF88: nop

    return;
    // 0x800CBF88: nop

;}
RECOMP_FUNC void func_8007A120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007A120: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007A124: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007A128: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007A12C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007A130: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007A134: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A138: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007A13C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007A140: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007A144: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007A148: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007A14C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8007A150: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007A154: addiu       $t0, $zero, 0x24
    ctx->r8 = ADD32(0, 0X24);
    // 0x8007A158: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8007A15C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8007A160: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007A164: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007A168: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8007A16C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007A170: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007A174: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8007A178: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007A17C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007A180: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8007A184: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8007A188: sh          $t4, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r12;
    // 0x8007A18C: nop

    // 0x8007A190: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007A194: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007A198: b           L_8007A1A0
    // 0x8007A19C: nop

        goto L_8007A1A0;
    // 0x8007A19C: nop

L_8007A1A0:
    // 0x8007A1A0: jr          $ra
    // 0x8007A1A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007A1A4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800654AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800654AC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800654B0: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_800654B4:
    // 0x800654B4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800654B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800654BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800654C0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800654C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800654C8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800654CC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800654D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800654D4: lw          $t8, 0x64A8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X64A8);
    // 0x800654D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800654DC: beq         $t8, $at, L_800657C0
    if (ctx->r24 == ctx->r1) {
        // 0x800654E0: nop
    
            goto L_800657C0;
    }
    // 0x800654E0: nop

    // 0x800654E4: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800654E8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800654EC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800654F0: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800654F4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800654F8: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x800654FC: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80065500: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80065504: lw          $t1, 0x64A8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X64A8);
    // 0x80065508: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006550C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80065510: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80065514: lw          $t3, -0x3560($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3560);
    // 0x80065518: nop

    // 0x8006551C: sw          $t3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r11;
    // 0x80065520: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x80065524: nop

    // 0x80065528: lb          $t5, 0x8($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X8);
    // 0x8006552C: nop

    // 0x80065530: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
    // 0x80065534: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x80065538: nop

    // 0x8006553C: lb          $t7, 0xC($t6)
    ctx->r15 = MEM_B(ctx->r14, 0XC);
    // 0x80065540: nop

    // 0x80065544: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x80065548: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8006554C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80065550: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80065554: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80065558: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006555C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80065560: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80065564: addiu       $t0, $t0, 0x6458
    ctx->r8 = ADD32(ctx->r8, 0X6458);
    // 0x80065568: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006556C: lwc1        $f4, 0x40($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X40);
    // 0x80065570: lwc1        $f6, 0x48($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X48);
    // 0x80065574: nop

    // 0x80065578: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006557C: swc1        $f8, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f8.u32l;
    // 0x80065580: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80065584: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065588: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8006558C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80065590: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80065594: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80065598: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8006559C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800655A0: lwc1        $f10, 0x6498($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6498);
    // 0x800655A4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800655A8: nop

    // 0x800655AC: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800655B0: nop

    // 0x800655B4: bc1f        L_80065600
    if (!c1cs) {
        // 0x800655B8: nop
    
            goto L_80065600;
    }
    // 0x800655B8: nop

    // 0x800655BC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800655C0: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x800655C4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800655C8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800655CC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800655D0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800655D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800655D8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800655DC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800655E0: addiu       $t6, $t6, 0x6458
    ctx->r14 = ADD32(ctx->r14, 0X6458);
    // 0x800655E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800655E8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800655EC: lwc1        $f18, 0x40($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X40);
    // 0x800655F0: nop

    // 0x800655F4: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x800655F8: b           L_80065684
    // 0x800655FC: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
        goto L_80065684;
    // 0x800655FC: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
L_80065600:
    // 0x80065600: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80065604: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80065608: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8006560C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x80065610: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80065614: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x80065618: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8006561C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80065620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065624: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80065628: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8006562C: lwc1        $f10, 0x6498($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6498);
    // 0x80065630: nop

    // 0x80065634: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80065638: nop

    // 0x8006563C: bc1f        L_80065684
    if (!c1cs) {
        // 0x80065640: nop
    
            goto L_80065684;
    }
    // 0x80065640: nop

    // 0x80065644: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80065648: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8006564C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80065650: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80065654: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80065658: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8006565C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80065660: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80065664: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80065668: addiu       $t4, $t4, 0x6458
    ctx->r12 = ADD32(ctx->r12, 0X6458);
    // 0x8006566C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80065670: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80065674: lwc1        $f18, 0x40($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X40);
    // 0x80065678: nop

    // 0x8006567C: sub.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80065680: swc1        $f16, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f16.u32l;
L_80065684:
    // 0x80065684: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80065688: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006568C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80065690: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x80065694: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80065698: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x8006569C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800656A0: addiu       $t9, $t9, 0x6458
    ctx->r25 = ADD32(ctx->r25, 0X6458);
    // 0x800656A4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800656A8: lwc1        $f10, 0x44($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800656AC: lwc1        $f4, 0x4C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x800656B0: nop

    // 0x800656B4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800656B8: swc1        $f6, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f6.u32l;
    // 0x800656BC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800656C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800656C4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800656C8: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800656CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800656D0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800656D4: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800656D8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800656DC: lwc1        $f18, 0x649C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X649C);
    // 0x800656E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800656E4: nop

    // 0x800656E8: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x800656EC: nop

    // 0x800656F0: bc1f        L_8006573C
    if (!c1cs) {
        // 0x800656F4: nop
    
            goto L_8006573C;
    }
    // 0x800656F4: nop

    // 0x800656F8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800656FC: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80065700: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80065704: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80065708: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8006570C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80065710: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80065714: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80065718: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x8006571C: addiu       $t6, $t6, 0x6458
    ctx->r14 = ADD32(ctx->r14, 0X6458);
    // 0x80065720: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80065724: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x80065728: lwc1        $f16, 0x44($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X44);
    // 0x8006572C: nop

    // 0x80065730: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80065734: b           L_800657C0
    // 0x80065738: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
        goto L_800657C0;
    // 0x80065738: swc1        $f6, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f6.u32l;
L_8006573C:
    // 0x8006573C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80065740: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x80065744: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80065748: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8006574C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80065750: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80065754: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x80065758: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8006575C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80065760: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80065764: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80065768: lwc1        $f18, 0x649C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X649C);
    // 0x8006576C: nop

    // 0x80065770: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x80065774: nop

    // 0x80065778: bc1f        L_800657C0
    if (!c1cs) {
        // 0x8006577C: nop
    
            goto L_800657C0;
    }
    // 0x8006577C: nop

    // 0x80065780: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80065784: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x80065788: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006578C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80065790: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80065794: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80065798: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006579C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x800657A0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x800657A4: addiu       $t3, $t3, 0x6458
    ctx->r11 = ADD32(ctx->r11, 0X6458);
    // 0x800657A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800657AC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800657B0: lwc1        $f16, 0x44($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800657B4: nop

    // 0x800657B8: sub.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x800657BC: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
L_800657C0:
    // 0x800657C0: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800657C4: nop

    // 0x800657C8: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x800657CC: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x800657D0: bne         $at, $zero, L_800654B4
    if (ctx->r1 != 0) {
        // 0x800657D4: sw          $t5, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r13;
            goto L_800654B4;
    }
    // 0x800657D4: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x800657D8: b           L_800657E0
    // 0x800657DC: nop

        goto L_800657E0;
    // 0x800657DC: nop

L_800657E0:
    // 0x800657E0: jr          $ra
    // 0x800657E4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800657E4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80080638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008063C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080640: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080644: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080648: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008064C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080650: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080654: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080658: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008065C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080660: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080664: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080668: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008066C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80080670: nop

    // 0x80080674: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80080678: nop

    // 0x8008067C: sh          $t1, 0xC0($t0)
    MEM_H(0XC0, ctx->r8) = ctx->r9;
    // 0x80080680: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80080684: nop

    // 0x80080688: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8008068C: nop

    // 0x80080690: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80080694: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x80080698: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8008069C: nop

    // 0x800806A0: lh          $t6, 0xC0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC0);
    // 0x800806A4: nop

    // 0x800806A8: slti        $at, $t6, 0x8
    ctx->r1 = SIGNED(ctx->r14) < 0X8 ? 1 : 0;
    // 0x800806AC: bne         $at, $zero, L_800806C4
    if (ctx->r1 != 0) {
        // 0x800806B0: nop
    
            goto L_800806C4;
    }
    // 0x800806B0: nop

    // 0x800806B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800806B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800806BC: jal         0x8001A928
    // 0x800806C0: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x800806C0: nop

    after_0:
L_800806C4:
    // 0x800806C4: b           L_800806CC
    // 0x800806C8: nop

        goto L_800806CC;
    // 0x800806C8: nop

L_800806CC:
    // 0x800806CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800806D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800806D4: jr          $ra
    // 0x800806D8: nop

    return;
    // 0x800806D8: nop

;}
RECOMP_FUNC void func_8007070C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007070C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80070710: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070714: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80070718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007071C: lb          $t6, 0x7A18($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7A18);
    // 0x80070720: nop

    // 0x80070724: bne         $t6, $zero, L_80070734
    if (ctx->r14 != 0) {
        // 0x80070728: nop
    
            goto L_80070734;
    }
    // 0x80070728: nop

    // 0x8007072C: b           L_80070924
    // 0x80070730: nop

        goto L_80070924;
    // 0x80070730: nop

L_80070734:
    // 0x80070734: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80070738: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8007073C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80070740: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80070744: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80070748: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8007074C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80070750: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80070754: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80070758: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8007075C: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80070760: addiu       $t1, $t1, 0x53D0
    ctx->r9 = ADD32(ctx->r9, 0X53D0);
    // 0x80070764: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80070768: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x8007076C: lb          $s0, 0x7A18($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X7A18);
    // 0x80070770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80070774: beq         $s0, $at, L_800707A8
    if (ctx->r16 == ctx->r1) {
        // 0x80070778: nop
    
            goto L_800707A8;
    }
    // 0x80070778: nop

    // 0x8007077C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80070780: beq         $s0, $at, L_800707D0
    if (ctx->r16 == ctx->r1) {
        // 0x80070784: nop
    
            goto L_800707D0;
    }
    // 0x80070784: nop

    // 0x80070788: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007078C: beq         $s0, $at, L_800707F8
    if (ctx->r16 == ctx->r1) {
        // 0x80070790: nop
    
            goto L_800707F8;
    }
    // 0x80070790: nop

    // 0x80070794: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80070798: beq         $s0, $at, L_80070820
    if (ctx->r16 == ctx->r1) {
        // 0x8007079C: nop
    
            goto L_80070820;
    }
    // 0x8007079C: nop

    // 0x800707A0: b           L_8007091C
    // 0x800707A4: nop

        goto L_8007091C;
    // 0x800707A4: nop

L_800707A8:
    // 0x800707A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800707AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800707B0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x800707B4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x800707B8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x800707BC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800707C0: jal         0x8006F570
    // 0x800707C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8006F570(rdram, ctx);
        goto after_0;
    // 0x800707C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800707C8: b           L_8007091C
    // 0x800707CC: nop

        goto L_8007091C;
    // 0x800707CC: nop

L_800707D0:
    // 0x800707D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800707D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800707D8: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x800707DC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x800707E0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x800707E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800707E8: jal         0x8006F570
    // 0x800707EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8006F570(rdram, ctx);
        goto after_1;
    // 0x800707EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x800707F0: b           L_8007091C
    // 0x800707F4: nop

        goto L_8007091C;
    // 0x800707F4: nop

L_800707F8:
    // 0x800707F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800707FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070800: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    // 0x80070804: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80070808: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8007080C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80070810: jal         0x8006F570
    // 0x80070814: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8006F570(rdram, ctx);
        goto after_2;
    // 0x80070814: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80070818: b           L_8007091C
    // 0x8007081C: nop

        goto L_8007091C;
    // 0x8007081C: nop

L_80070820:
    // 0x80070820: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80070824: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80070828: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8007082C: lh          $t4, 0x7618($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X7618);
    // 0x80070830: nop

    // 0x80070834: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x80070838: bne         $at, $zero, L_80070858
    if (ctx->r1 != 0) {
        // 0x8007083C: nop
    
            goto L_80070858;
    }
    // 0x8007083C: nop

    // 0x80070840: slti        $at, $t4, 0x1F
    ctx->r1 = SIGNED(ctx->r12) < 0X1F ? 1 : 0;
    // 0x80070844: beq         $at, $zero, L_80070858
    if (ctx->r1 == 0) {
        // 0x80070848: nop
    
            goto L_80070858;
    }
    // 0x80070848: nop

    // 0x8007084C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80070850: b           L_800708E4
    // 0x80070854: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
        goto L_800708E4;
    // 0x80070854: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_80070858:
    // 0x80070858: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007085C: lh          $t6, 0x7618($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7618);
    // 0x80070860: nop

    // 0x80070864: slti        $at, $t6, 0x28
    ctx->r1 = SIGNED(ctx->r14) < 0X28 ? 1 : 0;
    // 0x80070868: bne         $at, $zero, L_80070888
    if (ctx->r1 != 0) {
        // 0x8007086C: nop
    
            goto L_80070888;
    }
    // 0x8007086C: nop

    // 0x80070870: slti        $at, $t6, 0x3D
    ctx->r1 = SIGNED(ctx->r14) < 0X3D ? 1 : 0;
    // 0x80070874: beq         $at, $zero, L_80070888
    if (ctx->r1 == 0) {
        // 0x80070878: nop
    
            goto L_80070888;
    }
    // 0x80070878: nop

    // 0x8007087C: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x80070880: b           L_800708E4
    // 0x80070884: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
        goto L_800708E4;
    // 0x80070884: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80070888:
    // 0x80070888: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007088C: lh          $t8, 0x7618($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7618);
    // 0x80070890: nop

    // 0x80070894: slti        $at, $t8, 0x46
    ctx->r1 = SIGNED(ctx->r24) < 0X46 ? 1 : 0;
    // 0x80070898: bne         $at, $zero, L_800708B8
    if (ctx->r1 != 0) {
        // 0x8007089C: nop
    
            goto L_800708B8;
    }
    // 0x8007089C: nop

    // 0x800708A0: slti        $at, $t8, 0x5B
    ctx->r1 = SIGNED(ctx->r24) < 0X5B ? 1 : 0;
    // 0x800708A4: beq         $at, $zero, L_800708B8
    if (ctx->r1 == 0) {
        // 0x800708A8: nop
    
            goto L_800708B8;
    }
    // 0x800708A8: nop

    // 0x800708AC: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x800708B0: b           L_800708E4
    // 0x800708B4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
        goto L_800708E4;
    // 0x800708B4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_800708B8:
    // 0x800708B8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800708BC: lh          $t0, 0x7618($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7618);
    // 0x800708C0: nop

    // 0x800708C4: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x800708C8: bne         $at, $zero, L_800708E4
    if (ctx->r1 != 0) {
        // 0x800708CC: nop
    
            goto L_800708E4;
    }
    // 0x800708CC: nop

    // 0x800708D0: slti        $at, $t0, 0x79
    ctx->r1 = SIGNED(ctx->r8) < 0X79 ? 1 : 0;
    // 0x800708D4: beq         $at, $zero, L_800708E4
    if (ctx->r1 == 0) {
        // 0x800708D8: nop
    
            goto L_800708E4;
    }
    // 0x800708D8: nop

    // 0x800708DC: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x800708E0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_800708E4:
    // 0x800708E4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800708E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800708EC: beq         $t2, $at, L_80070914
    if (ctx->r10 == ctx->r1) {
        // 0x800708F0: nop
    
            goto L_80070914;
    }
    // 0x800708F0: nop

    // 0x800708F4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800708F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800708FC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80070900: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x80070904: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80070908: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x8007090C: jal         0x8006F570
    // 0x80070910: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8006F570(rdram, ctx);
        goto after_3;
    // 0x80070910: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
L_80070914:
    // 0x80070914: b           L_8007091C
    // 0x80070918: nop

        goto L_8007091C;
    // 0x80070918: nop

L_8007091C:
    // 0x8007091C: b           L_80070924
    // 0x80070920: nop

        goto L_80070924;
    // 0x80070920: nop

L_80070924:
    // 0x80070924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80070928: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8007092C: jr          $ra
    // 0x80070930: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80070930: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80090268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80090268: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009026C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80090270: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80090274: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80090278: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009027C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090280: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090284: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80090288: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009028C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090290: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090294: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80090298: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009029C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800902A0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800902A4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800902A8: addiu       $a1, $a1, 0x13CC
    ctx->r5 = ADD32(ctx->r5, 0X13CC);
    // 0x800902AC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800902B0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800902B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800902B8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800902BC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800902C0: jal         0x80027464
    // 0x800902C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800902C4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800902C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800902CC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800902D0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800902D4: addiu       $a3, $a3, 0x21A4
    ctx->r7 = ADD32(ctx->r7, 0X21A4);
    // 0x800902D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800902DC: jal         0x8001ABF4
    // 0x800902E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800902E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800902E4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800902E8: addiu       $a3, $a3, 0x21A4
    ctx->r7 = ADD32(ctx->r7, 0X21A4);
    // 0x800902EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800902F0: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800902F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800902F8: jal         0x8001ABF4
    // 0x800902FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800902FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80090300: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090304: addiu       $a3, $a3, 0x21A4
    ctx->r7 = ADD32(ctx->r7, 0X21A4);
    // 0x80090308: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009030C: addiu       $a3, $a3, 0x70
    ctx->r7 = ADD32(ctx->r7, 0X70);
    // 0x80090310: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80090314: jal         0x8001ABF4
    // 0x80090318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x80090318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8009031C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80090320: addiu       $a3, $a3, 0x21A4
    ctx->r7 = ADD32(ctx->r7, 0X21A4);
    // 0x80090324: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80090328: addiu       $a3, $a3, 0xA8
    ctx->r7 = ADD32(ctx->r7, 0XA8);
    // 0x8009032C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80090330: jal         0x8001ABF4
    // 0x80090334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80090334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80090338: b           L_80090340
    // 0x8009033C: nop

        goto L_80090340;
    // 0x8009033C: nop

L_80090340:
    // 0x80090340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80090344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090348: jr          $ra
    // 0x8009034C: nop

    return;
    // 0x8009034C: nop

;}
RECOMP_FUNC void func_80063200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063200: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80063204: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063208: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006320C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063210: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80063214: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80063218: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8006321C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80063220: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80063224: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80063228: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8006322C: nop

    // 0x80063230: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80063234: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80063238: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8006323C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063240: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80063244: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x80063248: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8006324C: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80063250: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x80063254: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80063258: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8006325C: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x80063260: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x80063264: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80063268: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006326C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80063270: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063274: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80063278: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006327C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80063280: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80063284: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80063288: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006328C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80063290: addiu       $t1, $zero, 0x2204
    ctx->r9 = ADD32(0, 0X2204);
    // 0x80063294: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80063298: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006329C: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x800632A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800632A4: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800632A8: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x800632AC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x800632B0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800632B4: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x800632B8: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x800632BC: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x800632C0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800632C4: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x800632C8: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x800632CC: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x800632D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800632D4: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x800632D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800632DC: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x800632E0: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x800632E4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800632E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800632EC: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x800632F0: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x800632F4: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x800632F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800632FC: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x80063300: ori         $t3, $t3, 0x41C8
    ctx->r11 = ctx->r11 | 0X41C8;
    // 0x80063304: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80063308: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006330C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x80063310: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063314: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x80063318: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8006331C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80063320: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80063324: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x80063328: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8006332C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80063330: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80063334: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x80063338: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x8006333C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80063340: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80063344: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063348: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8006334C: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80063350: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80063354: andi        $t4, $a2, 0x3FF
    ctx->r12 = ctx->r6 & 0X3FF;
    // 0x80063358: sll         $t5, $t4, 14
    ctx->r13 = S32(ctx->r12 << 14);
    // 0x8006335C: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80063360: andi        $t7, $a3, 0x3FF
    ctx->r15 = ctx->r7 & 0X3FF;
    // 0x80063364: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80063368: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8006336C: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80063370: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80063374: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80063378: andi        $t1, $a0, 0x3FF
    ctx->r9 = ctx->r4 & 0X3FF;
    // 0x8006337C: andi        $t3, $a1, 0x3FF
    ctx->r11 = ctx->r5 & 0X3FF;
    // 0x80063380: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80063384: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80063388: sll         $t2, $t1, 14
    ctx->r10 = S32(ctx->r9 << 14);
    // 0x8006338C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80063390: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x80063394: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063398: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006339C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800633A0: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x800633A4: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x800633A8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800633AC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800633B0: lui         $t9, 0xB900
    ctx->r25 = S32(0XB900 << 16);
    // 0x800633B4: ori         $t9, $t9, 0x31D
    ctx->r25 = ctx->r25 | 0X31D;
    // 0x800633B8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800633BC: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x800633C0: lui         $t1, 0x55
    ctx->r9 = S32(0X55 << 16);
    // 0x800633C4: ori         $t1, $t1, 0x2048
    ctx->r9 = ctx->r9 | 0X2048;
    // 0x800633C8: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x800633CC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800633D0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x800633D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800633D8: addiu       $t4, $t2, 0x8
    ctx->r12 = ADD32(ctx->r10, 0X8);
    // 0x800633DC: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x800633E0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x800633E4: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x800633E8: lui         $t5, 0xFA00
    ctx->r13 = S32(0XFA00 << 16);
    // 0x800633EC: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x800633F0: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x800633F4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800633F8: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x800633FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80063400: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80063404: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063408: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8006340C: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80063410: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80063414: andi        $t1, $a2, 0x3FF
    ctx->r9 = ctx->r6 & 0X3FF;
    // 0x80063418: addiu       $t4, $a1, 0x1
    ctx->r12 = ADD32(ctx->r5, 0X1);
    // 0x8006341C: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x80063420: sll         $t3, $t1, 14
    ctx->r11 = S32(ctx->r9 << 14);
    // 0x80063424: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80063428: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x8006342C: or          $t2, $t3, $at
    ctx->r10 = ctx->r11 | ctx->r1;
    // 0x80063430: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80063434: or          $t6, $t2, $t7
    ctx->r14 = ctx->r10 | ctx->r15;
    // 0x80063438: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x8006343C: andi        $t9, $a0, 0x3FF
    ctx->r25 = ctx->r4 & 0X3FF;
    // 0x80063440: andi        $t1, $a1, 0x3FF
    ctx->r9 = ctx->r5 & 0X3FF;
    // 0x80063444: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x80063448: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8006344C: sll         $t0, $t9, 14
    ctx->r8 = S32(ctx->r25 << 14);
    // 0x80063450: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x80063454: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80063458: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006345C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80063460: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063464: addiu       $t7, $t2, 0x8
    ctx->r15 = ADD32(ctx->r10, 0X8);
    // 0x80063468: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8006346C: sw          $t2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r10;
    // 0x80063470: andi        $t6, $a2, 0x3FF
    ctx->r14 = ctx->r6 & 0X3FF;
    // 0x80063474: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x80063478: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x8006347C: andi        $t1, $a3, 0x3FF
    ctx->r9 = ctx->r7 & 0X3FF;
    // 0x80063480: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x80063484: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x80063488: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8006348C: or          $t3, $t9, $t0
    ctx->r11 = ctx->r25 | ctx->r8;
    // 0x80063490: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80063494: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x80063498: andi        $t6, $t7, 0x3FF
    ctx->r14 = ctx->r15 & 0X3FF;
    // 0x8006349C: andi        $t5, $a0, 0x3FF
    ctx->r13 = ctx->r4 & 0X3FF;
    // 0x800634A0: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x800634A4: sll         $t2, $t5, 14
    ctx->r10 = S32(ctx->r13 << 14);
    // 0x800634A8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x800634AC: or          $t1, $t2, $t8
    ctx->r9 = ctx->r10 | ctx->r24;
    // 0x800634B0: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x800634B4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800634B8: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x800634BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800634C0: addiu       $t3, $t0, 0x8
    ctx->r11 = ADD32(ctx->r8, 0X8);
    // 0x800634C4: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x800634C8: sw          $t0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r8;
    // 0x800634CC: addiu       $t4, $a0, 0x1
    ctx->r12 = ADD32(ctx->r4, 0X1);
    // 0x800634D0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x800634D4: sll         $t7, $t5, 14
    ctx->r15 = S32(ctx->r13 << 14);
    // 0x800634D8: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x800634DC: andi        $t2, $a3, 0x3FF
    ctx->r10 = ctx->r7 & 0X3FF;
    // 0x800634E0: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x800634E4: sll         $t8, $t2, 2
    ctx->r24 = S32(ctx->r10 << 2);
    // 0x800634E8: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x800634EC: or          $t1, $t6, $t8
    ctx->r9 = ctx->r14 | ctx->r24;
    // 0x800634F0: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x800634F4: andi        $t0, $a0, 0x3FF
    ctx->r8 = ctx->r4 & 0X3FF;
    // 0x800634F8: andi        $t4, $a1, 0x3FF
    ctx->r12 = ctx->r5 & 0X3FF;
    // 0x800634FC: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80063500: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80063504: sll         $t3, $t0, 14
    ctx->r11 = S32(ctx->r8 << 14);
    // 0x80063508: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x8006350C: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x80063510: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063514: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80063518: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006351C: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x80063520: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x80063524: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80063528: andi        $t1, $a2, 0x3FF
    ctx->r9 = ctx->r6 & 0X3FF;
    // 0x8006352C: sll         $t9, $t1, 14
    ctx->r25 = S32(ctx->r9 << 14);
    // 0x80063530: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x80063534: andi        $t4, $a3, 0x3FF
    ctx->r12 = ctx->r7 & 0X3FF;
    // 0x80063538: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8006353C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80063540: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x80063544: or          $t5, $t0, $t3
    ctx->r13 = ctx->r8 | ctx->r11;
    // 0x80063548: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x8006354C: addiu       $t2, $a2, -0x1
    ctx->r10 = ADD32(ctx->r6, -0X1);
    // 0x80063550: andi        $t6, $t2, 0x3FF
    ctx->r14 = ctx->r10 & 0X3FF;
    // 0x80063554: andi        $t1, $a1, 0x3FF
    ctx->r9 = ctx->r5 & 0X3FF;
    // 0x80063558: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8006355C: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80063560: sll         $t8, $t6, 14
    ctx->r24 = S32(ctx->r14 << 14);
    // 0x80063564: or          $t4, $t8, $t9
    ctx->r12 = ctx->r24 | ctx->r25;
    // 0x80063568: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x8006356C: b           L_80063574
    // 0x80063570: nop

        goto L_80063574;
    // 0x80063570: nop

L_80063574:
    // 0x80063574: jr          $ra
    // 0x80063578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80063578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F4AD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F4AD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F4AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F4ADC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F4AE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F4AE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F4AE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F4AEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4AF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F4AF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F4AF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F4AFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F4B00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F4B04: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F4B08: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B0C: nop

    // 0x800F4B10: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F4B14: nop

    // 0x800F4B18: bne         $t1, $zero, L_800F4B58
    if (ctx->r9 != 0) {
        // 0x800F4B1C: nop
    
            goto L_800F4B58;
    }
    // 0x800F4B1C: nop

    // 0x800F4B20: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B24: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F4B28: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F4B2C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F4B30: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B34: nop

    // 0x800F4B38: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800F4B3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F4B40: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B44: nop

    // 0x800F4B48: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800F4B4C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B50: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x800F4B54: sh          $t6, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = ctx->r14;
L_800F4B58:
    // 0x800F4B58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4B5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4B60: jal         0x80029C40
    // 0x800F4B64: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800F4B64: nop

    after_0:
    // 0x800F4B68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F4B6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F4B70: jal         0x80029D04
    // 0x800F4B74: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800F4B74: nop

    after_1:
    // 0x800F4B78: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B7C: nop

    // 0x800F4B80: lh          $t9, 0xAE($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAE);
    // 0x800F4B84: nop

    // 0x800F4B88: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800F4B8C: sh          $t0, 0xAE($t8)
    MEM_H(0XAE, ctx->r24) = ctx->r8;
    // 0x800F4B90: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4B94: nop

    // 0x800F4B98: lh          $t2, 0xAE($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAE);
    // 0x800F4B9C: nop

    // 0x800F4BA0: bne         $t2, $zero, L_800F4BD0
    if (ctx->r10 != 0) {
        // 0x800F4BA4: nop
    
            goto L_800F4BD0;
    }
    // 0x800F4BA4: nop

    // 0x800F4BA8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4BAC: nop

    // 0x800F4BB0: lh          $t4, 0xB4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB4);
    // 0x800F4BB4: nop

    // 0x800F4BB8: sb          $t4, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r12;
    // 0x800F4BBC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800F4BC0: nop

    // 0x800F4BC4: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800F4BC8: nop

    // 0x800F4BCC: sh          $t6, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r14;
L_800F4BD0:
    // 0x800F4BD0: b           L_800F4BD8
    // 0x800F4BD4: nop

        goto L_800F4BD8;
    // 0x800F4BD4: nop

L_800F4BD8:
    // 0x800F4BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F4BDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F4BE0: jr          $ra
    // 0x800F4BE4: nop

    return;
    // 0x800F4BE4: nop

;}
RECOMP_FUNC void func_8007E058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007E05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007E064: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8007E068: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007E06C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007E070: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007E074: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007E078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007E07C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007E080: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007E084: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007E088: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007E08C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007E090: jal         0x8007DF4C
    // 0x8007E094: nop

    func_8007DF4C(rdram, ctx);
        goto after_0;
    // 0x8007E094: nop

    after_0:
    // 0x8007E098: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007E09C: jal         0x80079778
    // 0x8007E0A0: nop

    func_80079778(rdram, ctx);
        goto after_1;
    // 0x8007E0A0: nop

    after_1:
    // 0x8007E0A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007E0A8: jal         0x800797FC
    // 0x8007E0AC: nop

    func_800797FC(rdram, ctx);
        goto after_2;
    // 0x8007E0AC: nop

    after_2:
    // 0x8007E0B0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E0B4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8007E0B8: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x8007E0BC: nop

    // 0x8007E0C0: bne         $t1, $at, L_8007E0D4
    if (ctx->r9 != ctx->r1) {
        // 0x8007E0C4: nop
    
            goto L_8007E0D4;
    }
    // 0x8007E0C4: nop

    // 0x8007E0C8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E0CC: addiu       $t2, $zero, 0x31
    ctx->r10 = ADD32(0, 0X31);
    // 0x8007E0D0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_8007E0D4:
    // 0x8007E0D4: b           L_8007E0DC
    // 0x8007E0D8: nop

        goto L_8007E0DC;
    // 0x8007E0D8: nop

L_8007E0DC:
    // 0x8007E0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E0E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007E0E4: jr          $ra
    // 0x8007E0E8: nop

    return;
    // 0x8007E0E8: nop

;}
RECOMP_FUNC void func_80079688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079688: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007968C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80079690: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80079694: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80079698: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8007969C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800796A0: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800796A4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800796A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800796AC: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x800796B0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800796B4: nop

    // 0x800796B8: lh          $t0, 0xAA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAA);
    // 0x800796BC: nop

    // 0x800796C0: bne         $t0, $zero, L_8007971C
    if (ctx->r8 != 0) {
        // 0x800796C4: nop
    
            goto L_8007971C;
    }
    // 0x800796C4: nop

    // 0x800796C8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800796CC: nop

    // 0x800796D0: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x800796D4: nop

    // 0x800796D8: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x800796DC: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
    // 0x800796E0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800796E4: nop

    // 0x800796E8: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800796EC: nop

    // 0x800796F0: slti        $at, $t5, 0x5B
    ctx->r1 = SIGNED(ctx->r13) < 0X5B ? 1 : 0;
    // 0x800796F4: beq         $at, $zero, L_80079714
    if (ctx->r1 == 0) {
        // 0x800796F8: nop
    
            goto L_80079714;
    }
    // 0x800796F8: nop

    // 0x800796FC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80079700: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x80079704: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x80079708: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007970C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80079710: sh          $t8, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = ctx->r24;
L_80079714:
    // 0x80079714: b           L_80079768
    // 0x80079718: nop

        goto L_80079768;
    // 0x80079718: nop

L_8007971C:
    // 0x8007971C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80079720: nop

    // 0x80079724: lh          $t2, 0xA8($t0)
    ctx->r10 = MEM_H(ctx->r8, 0XA8);
    // 0x80079728: nop

    // 0x8007972C: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x80079730: sh          $t3, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r11;
    // 0x80079734: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80079738: nop

    // 0x8007973C: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x80079740: nop

    // 0x80079744: slti        $at, $t4, 0x6E
    ctx->r1 = SIGNED(ctx->r12) < 0X6E ? 1 : 0;
    // 0x80079748: bne         $at, $zero, L_80079768
    if (ctx->r1 != 0) {
        // 0x8007974C: nop
    
            goto L_80079768;
    }
    // 0x8007974C: nop

    // 0x80079750: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80079754: addiu       $t5, $zero, 0x6E
    ctx->r13 = ADD32(0, 0X6E);
    // 0x80079758: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x8007975C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80079760: nop

    // 0x80079764: sh          $zero, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = 0;
L_80079768:
    // 0x80079768: b           L_80079770
    // 0x8007976C: nop

        goto L_80079770;
    // 0x8007976C: nop

L_80079770:
    // 0x80079770: jr          $ra
    // 0x80079774: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80079774: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800EC144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800EC148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800EC14C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC150: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC154: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC158: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC15C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC160: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC164: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC168: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC16C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC170: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC174: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800EC178: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC17C: nop

    // 0x800EC180: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EC184: nop

    // 0x800EC188: bne         $t1, $zero, L_800EC1A8
    if (ctx->r9 != 0) {
        // 0x800EC18C: nop
    
            goto L_800EC1A8;
    }
    // 0x800EC18C: nop

    // 0x800EC190: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC194: nop

    // 0x800EC198: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EC19C: nop

    // 0x800EC1A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EC1A4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
L_800EC1A8:
    // 0x800EC1A8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC1AC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800EC1B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800EC1B4: lwc1        $f12, 0x1C($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800EC1B8: jal         0x80015538
    // 0x800EC1BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800EC1BC: nop

    after_0:
    // 0x800EC1C0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC1C4: nop

    // 0x800EC1C8: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x800EC1CC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC1D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800EC1D4: lh          $t8, 0xB2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB2);
    // 0x800EC1D8: nop

    // 0x800EC1DC: bne         $t8, $at, L_800EC248
    if (ctx->r24 != ctx->r1) {
        // 0x800EC1E0: nop
    
            goto L_800EC248;
    }
    // 0x800EC1E0: nop

    // 0x800EC1E4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800EC1E8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800EC1EC: nop

    // 0x800EC1F0: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800EC1F4: nop

    // 0x800EC1F8: beq         $t0, $zero, L_800EC248
    if (ctx->r8 == 0) {
        // 0x800EC1FC: nop
    
            goto L_800EC248;
    }
    // 0x800EC1FC: nop

    // 0x800EC200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC208: jal         0x8002A2EC
    // 0x800EC20C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_1;
    // 0x800EC20C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_1:
    // 0x800EC210: beq         $v0, $zero, L_800EC248
    if (ctx->r2 == 0) {
        // 0x800EC214: nop
    
            goto L_800EC248;
    }
    // 0x800EC214: nop

    // 0x800EC218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC21C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC220: jal         0x8001BBDC
    // 0x800EC224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800EC224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800EC228: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC22C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800EC230: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800EC234: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC238: nop

    // 0x800EC23C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800EC240: jal         0x80284DF8
    // 0x800EC244: nop

    func_80284DF8_code_extra_0(rdram, ctx);
        goto after_3;
    // 0x800EC244: nop

    after_3:
L_800EC248:
    // 0x800EC248: b           L_800EC250
    // 0x800EC24C: nop

        goto L_800EC250;
    // 0x800EC24C: nop

L_800EC250:
    // 0x800EC250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800EC254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800EC258: jr          $ra
    // 0x800EC25C: nop

    return;
    // 0x800EC25C: nop

;}
RECOMP_FUNC void func_8009473C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009473C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80094748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009474C: jal         0x8002B0E4
    // 0x80094750: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80094750: nop

    after_0:
    // 0x80094754: b           L_8009475C
    // 0x80094758: nop

        goto L_8009475C;
    // 0x80094758: nop

L_8009475C:
    // 0x8009475C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80094764: jr          $ra
    // 0x80094768: nop

    return;
    // 0x80094768: nop

;}
RECOMP_FUNC void func_8006BF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BF5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006BF60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006BF64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006BF68: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006BF6C: nop

    // 0x8006BF70: bne         $t6, $zero, L_8006BF80
    if (ctx->r14 != 0) {
        // 0x8006BF74: nop
    
            goto L_8006BF80;
    }
    // 0x8006BF74: nop

    // 0x8006BF78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006BF7C: sh          $zero, 0x794A($at)
    MEM_H(0X794A, ctx->r1) = 0;
L_8006BF80:
    // 0x8006BF80: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8006BF84: lh          $t7, 0x4C22($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4C22);
    // 0x8006BF88: nop

    // 0x8006BF8C: beq         $t7, $zero, L_8006C174
    if (ctx->r15 == 0) {
        // 0x8006BF90: nop
    
            goto L_8006C174;
    }
    // 0x8006BF90: nop

    // 0x8006BF94: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8006BF98: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8006BF9C:
    // 0x8006BF9C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8006BFA0: jal         0x80026E58
    // 0x8006BFA4: addiu       $a0, $zero, 0x281
    ctx->r4 = ADD32(0, 0X281);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_0;
    // 0x8006BFA4: addiu       $a0, $zero, 0x281
    ctx->r4 = ADD32(0, 0X281);
    after_0:
    // 0x8006BFA8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006BFAC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8006BFB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006BFB4: bne         $t9, $at, L_8006BFCC
    if (ctx->r25 != ctx->r1) {
        // 0x8006BFB8: nop
    
            goto L_8006BFCC;
    }
    // 0x8006BFB8: nop

    // 0x8006BFBC: b           L_8006C174
    // 0x8006BFC0: nop

        goto L_8006C174;
    // 0x8006BFC0: nop

    // 0x8006BFC4: b           L_8006C16C
    // 0x8006BFC8: nop

        goto L_8006C16C;
    // 0x8006BFC8: nop

L_8006BFCC:
    // 0x8006BFCC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006BFD0: lhu         $t0, 0x794A($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X794A);
    // 0x8006BFD4: nop

    // 0x8006BFD8: bne         $t0, $zero, L_8006C150
    if (ctx->r8 != 0) {
        // 0x8006BFDC: nop
    
            goto L_8006C150;
    }
    // 0x8006BFDC: nop

    // 0x8006BFE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8006BFE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8006BFE8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8006BFEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8006BFF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8006BFF4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8006BFF8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8006BFFC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8006C000: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8006C004: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006C008: lwc1        $f9, 0x4FA8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4FA8);
    // 0x8006C00C: lwc1        $f8, 0x4FAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4FAC);
    // 0x8006C010: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006C014: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8006C018: jal         0x80034970
    // 0x8006C01C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x8006C01C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x8006C020: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x8006C024: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006C028: nop

    // 0x8006C02C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8006C030: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x8006C034: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8006C038: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8006C03C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006C040: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006C044: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8006C048: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006C04C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8006C050: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8006C054: lwc1        $f4, 0x418C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X418C);
    // 0x8006C058: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006C05C: lwc1        $f9, 0x4FB0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4FB0);
    // 0x8006C060: lwc1        $f8, 0x4FB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4FB4);
    // 0x8006C064: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006C068: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8006C06C: jal         0x80036570
    // 0x8006C070: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x8006C070: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x8006C074: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x8006C078: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006C07C: nop

    // 0x8006C080: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8006C084: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8006C088: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8006C08C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8006C090: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8006C094: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006C098: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8006C09C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8006C0A0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8006C0A4: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8006C0A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8006C0AC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8006C0B0: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8006C0B4: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8006C0B8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006C0BC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006C0C0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8006C0C4: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8006C0C8: jal         0x80067748
    // 0x8006C0CC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_80067748(rdram, ctx);
        goto after_3;
    // 0x8006C0CC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x8006C0D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006C0D4: lbu         $t9, 0x76E0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X76E0);
    // 0x8006C0D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C0DC: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8006C0E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8006C0E4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8006C0E8: lwc1        $f18, 0x7760($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8006C0EC: nop

    // 0x8006C0F0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8006C0F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8006C0F8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8006C0FC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8006C100: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006C104: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8006C108: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8006C10C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8006C110: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8006C114: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8006C118: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8006C11C: lwc1        $f10, 0x8($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8006C120: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006C124: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8006C128: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006C12C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8006C130: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8006C134: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8006C138: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8006C13C: jal         0x80081468
    // 0x8006C140: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    func_80081468(rdram, ctx);
        goto after_4;
    // 0x8006C140: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    after_4:
    // 0x8006C144: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8006C148: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C14C: sh          $t6, 0x794A($at)
    MEM_H(0X794A, ctx->r1) = ctx->r14;
L_8006C150:
    // 0x8006C150: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006C154: lhu         $t7, 0x794A($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X794A);
    // 0x8006C158: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006C15C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006C160: sh          $t8, 0x794A($at)
    MEM_H(0X794A, ctx->r1) = ctx->r24;
    // 0x8006C164: b           L_8006C174
    // 0x8006C168: nop

        goto L_8006C174;
    // 0x8006C168: nop

L_8006C16C:
    // 0x8006C16C: b           L_8006BF9C
    // 0x8006C170: nop

        goto L_8006BF9C;
    // 0x8006C170: nop

L_8006C174:
    // 0x8006C174: b           L_8006C17C
    // 0x8006C178: nop

        goto L_8006C17C;
    // 0x8006C178: nop

L_8006C17C:
    // 0x8006C17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006C180: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006C184: jr          $ra
    // 0x8006C188: nop

    return;
    // 0x8006C188: nop

;}
RECOMP_FUNC void func_8008ED64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ED64: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x8008ED68: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8008ED6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008ED70: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8008ED74: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008ED78: sh          $t6, 0x4CB8($at)
    MEM_H(0X4CB8, ctx->r1) = ctx->r14;
    // 0x8008ED7C: jr          $ra
    // 0x8008ED80: nop

    return;
    // 0x8008ED80: nop

    // 0x8008ED84: jr          $ra
    // 0x8008ED88: nop

    return;
    // 0x8008ED88: nop

;}
RECOMP_FUNC void func_8008E9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E9DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8008E9E0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008E9E4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008E9E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008E9EC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008E9F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008E9F4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008E9F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E9FC: lw          $t7, 0x4D48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4D48);
    // 0x8008EA00: nop

    // 0x8008EA04: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x8008EA08: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8008EA0C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008EA10: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008EA14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008EA18: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008EA1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008EA20: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008EA24: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008EA28: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008EA2C: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8008EA30: lwc1        $f6, 0x5C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X5C);
    // 0x8008EA34: nop

    // 0x8008EA38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008EA3C: swc1        $f8, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f8.u32l;
    // 0x8008EA40: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008EA44: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8008EA48: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008EA4C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008EA50: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008EA54: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008EA58: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008EA5C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8008EA60: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008EA64: lwc1        $f10, 0x44($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X44);
    // 0x8008EA68: lwc1        $f16, 0x60($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X60);
    // 0x8008EA6C: nop

    // 0x8008EA70: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008EA74: swc1        $f18, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f18.u32l;
    // 0x8008EA78: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008EA7C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008EA80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008EA84: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008EA88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008EA8C: lh          $t7, 0x4D54($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4D54);
    // 0x8008EA90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008EA94: bne         $t7, $at, L_8008EAD4
    if (ctx->r15 != ctx->r1) {
        // 0x8008EA98: nop
    
            goto L_8008EAD4;
    }
    // 0x8008EA98: nop

    // 0x8008EA9C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8008EAA0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008EAA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008EAA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008EAAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008EAB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008EAB4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008EAB8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008EABC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008EAC0: lwc1        $f4, 0x5C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X5C);
    // 0x8008EAC4: lwc1        $f6, 0x3C($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8008EAC8: nop

    // 0x8008EACC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008EAD0: swc1        $f8, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f8.u32l;
L_8008EAD4:
    // 0x8008EAD4: b           L_8008EADC
    // 0x8008EAD8: nop

        goto L_8008EADC;
    // 0x8008EAD8: nop

L_8008EADC:
    // 0x8008EADC: jr          $ra
    // 0x8008EAE0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008EAE0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800EE6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EE6F8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800EE6FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EE700: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EE704: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EE708: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EE70C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EE714: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EE718: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EE71C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EE720: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EE724: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800EE728: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800EE72C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800EE730: nop

    // 0x800EE734: bne         $t0, $zero, L_800EE794
    if (ctx->r8 != 0) {
        // 0x800EE738: nop
    
            goto L_800EE794;
    }
    // 0x800EE738: nop

    // 0x800EE73C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800EE740: nop

    // 0x800EE744: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800EE748: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EE74C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800EE750: nop

    // 0x800EE754: swc1        $f4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f4.u32l;
    // 0x800EE758: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800EE75C: nop

    // 0x800EE760: lwc1        $f6, 0x2C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800EE764: nop

    // 0x800EE768: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
    // 0x800EE76C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EE770: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800EE774: nop

    // 0x800EE778: swc1        $f8, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f8.u32l;
    // 0x800EE77C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800EE780: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800EE784: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800EE788: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800EE78C: nop

    // 0x800EE790: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800EE794:
    // 0x800EE794: b           L_800EE79C
    // 0x800EE798: nop

        goto L_800EE79C;
    // 0x800EE798: nop

L_800EE79C:
    // 0x800EE79C: jr          $ra
    // 0x800EE7A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800EE7A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800C08A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C08A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C08AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C08B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C08B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C08B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C08BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C08C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C08C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C08C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C08CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C08D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C08D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C08D8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800C08DC: nop

    // 0x800C08E0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x800C08E4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800C08E8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C08EC: beq         $s0, $at, L_800C0914
    if (ctx->r16 == ctx->r1) {
        // 0x800C08F0: nop
    
            goto L_800C0914;
    }
    // 0x800C08F0: nop

    // 0x800C08F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800C08F8: beq         $s0, $at, L_800C0924
    if (ctx->r16 == ctx->r1) {
        // 0x800C08FC: nop
    
            goto L_800C0924;
    }
    // 0x800C08FC: nop

    // 0x800C0900: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800C0904: beq         $s0, $at, L_800C0934
    if (ctx->r16 == ctx->r1) {
        // 0x800C0908: nop
    
            goto L_800C0934;
    }
    // 0x800C0908: nop

    // 0x800C090C: b           L_800C0944
    // 0x800C0910: nop

        goto L_800C0944;
    // 0x800C0910: nop

L_800C0914:
    // 0x800C0914: jal         0x800C04C4
    // 0x800C0918: nop

    func_800C04C4(rdram, ctx);
        goto after_0;
    // 0x800C0918: nop

    after_0:
    // 0x800C091C: b           L_800C094C
    // 0x800C0920: nop

        goto L_800C094C;
    // 0x800C0920: nop

L_800C0924:
    // 0x800C0924: jal         0x800C0858
    // 0x800C0928: nop

    func_800C0858(rdram, ctx);
        goto after_1;
    // 0x800C0928: nop

    after_1:
    // 0x800C092C: b           L_800C094C
    // 0x800C0930: nop

        goto L_800C094C;
    // 0x800C0930: nop

L_800C0934:
    // 0x800C0934: jal         0x800C0898
    // 0x800C0938: nop

    func_800C0898(rdram, ctx);
        goto after_2;
    // 0x800C0938: nop

    after_2:
    // 0x800C093C: b           L_800C094C
    // 0x800C0940: nop

        goto L_800C094C;
    // 0x800C0940: nop

L_800C0944:
    // 0x800C0944: b           L_800C094C
    // 0x800C0948: nop

        goto L_800C094C;
    // 0x800C0948: nop

L_800C094C:
    // 0x800C094C: b           L_800C0954
    // 0x800C0950: nop

        goto L_800C0954;
    // 0x800C0950: nop

L_800C0954:
    // 0x800C0954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C0958: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C095C: jr          $ra
    // 0x800C0960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C0960: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006B7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B7BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006B7C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006B7C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006B7C8: lb          $t6, 0x75EE($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X75EE);
    // 0x8006B7CC: nop

    // 0x8006B7D0: bne         $t6, $zero, L_8006B7EC
    if (ctx->r14 != 0) {
        // 0x8006B7D4: nop
    
            goto L_8006B7EC;
    }
    // 0x8006B7D4: nop

    // 0x8006B7D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006B7DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B7E0: sb          $t7, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r15;
    // 0x8006B7E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B7E8: sb          $zero, 0x792D($at)
    MEM_B(0X792D, ctx->r1) = 0;
L_8006B7EC:
    // 0x8006B7EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006B7F0: lb          $t8, 0x792D($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X792D);
    // 0x8006B7F4: nop

    // 0x8006B7F8: bne         $t8, $zero, L_8006B8B4
    if (ctx->r24 != 0) {
        // 0x8006B7FC: nop
    
            goto L_8006B8B4;
    }
    // 0x8006B7FC: nop

    // 0x8006B800: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8006B804: lb          $t9, 0x5242($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5242);
    // 0x8006B808: nop

    // 0x8006B80C: slti        $at, $t9, 0x9
    ctx->r1 = SIGNED(ctx->r25) < 0X9 ? 1 : 0;
    // 0x8006B810: bne         $at, $zero, L_8006B8B4
    if (ctx->r1 != 0) {
        // 0x8006B814: nop
    
            goto L_8006B8B4;
    }
    // 0x8006B814: nop

    // 0x8006B818: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8006B81C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006B820: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x8006B824: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8006B828: jal         0x800178D4
    // 0x8006B82C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x8006B82C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8006B830: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x8006B834: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8006B838:
    // 0x8006B838: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8006B83C: jal         0x80026E58
    // 0x8006B840: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_1;
    // 0x8006B840: addiu       $a0, $zero, 0x164
    ctx->r4 = ADD32(0, 0X164);
    after_1:
    // 0x8006B844: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8006B848: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8006B84C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006B850: bne         $t1, $at, L_8006B868
    if (ctx->r9 != ctx->r1) {
        // 0x8006B854: nop
    
            goto L_8006B868;
    }
    // 0x8006B854: nop

    // 0x8006B858: b           L_8006B8B4
    // 0x8006B85C: nop

        goto L_8006B8B4;
    // 0x8006B85C: nop

    // 0x8006B860: b           L_8006B8AC
    // 0x8006B864: nop

        goto L_8006B8AC;
    // 0x8006B864: nop

L_8006B868:
    // 0x8006B868: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8006B86C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8006B870: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8006B874: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006B878: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8006B87C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006B880: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8006B884: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8006B888: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8006B88C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x8006B890: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8006B894: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006B898: sb          $t5, 0x792D($at)
    MEM_B(0X792D, ctx->r1) = ctx->r13;
    // 0x8006B89C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8006B8A0: nop

    // 0x8006B8A4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8006B8A8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8006B8AC:
    // 0x8006B8AC: b           L_8006B838
    // 0x8006B8B0: nop

        goto L_8006B838;
    // 0x8006B8B0: nop

L_8006B8B4:
    // 0x8006B8B4: b           L_8006B8BC
    // 0x8006B8B8: nop

        goto L_8006B8BC;
    // 0x8006B8B8: nop

L_8006B8BC:
    // 0x8006B8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B8C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8006B8C4: jr          $ra
    // 0x8006B8C8: nop

    return;
    // 0x8006B8C8: nop

;}
RECOMP_FUNC void func_80073580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80073580: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80073588: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007358C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073590: swc1        $f4, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f4.u32l;
    // 0x80073594: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80073598: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007359C: swc1        $f6, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f6.u32l;
    // 0x800735A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800735A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800735A8: swc1        $f8, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f8.u32l;
    // 0x800735AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800735B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800735B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800735B8: swc1        $f10, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f10.u32l;
    // 0x800735BC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800735C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800735C4: swc1        $f16, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f16.u32l;
    // 0x800735C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800735CC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800735D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800735D4: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x800735D8: nop

    // 0x800735DC: swc1        $f18, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f18.u32l;
    // 0x800735E0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800735E4: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800735E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800735EC: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800735F0: nop

    // 0x800735F4: swc1        $f4, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f4.u32l;
    // 0x800735F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800735FC: sb          $zero, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = 0;
    // 0x80073600: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073604: sb          $zero, 0x75F4($at)
    MEM_B(0X75F4, ctx->r1) = 0;
    // 0x80073608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007360C: sb          $zero, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = 0;
    // 0x80073610: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80073614: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073618: swc1        $f6, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f6.u32l;
    // 0x8007361C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80073620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073624: swc1        $f8, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f8.u32l;
    // 0x80073628: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007362C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073630: swc1        $f10, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f10.u32l;
    // 0x80073634: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073638: lwc1        $f16, 0x7A58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x8007363C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073640: swc1        $f16, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f16.u32l;
    // 0x80073644: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80073648: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007364C: swc1        $f18, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f18.u32l;
    // 0x80073650: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80073654: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073658: swc1        $f4, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->f4.u32l;
    // 0x8007365C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073660: lwc1        $f6, 0x7A5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7A5C);
    // 0x80073664: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073668: swc1        $f6, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f6.u32l;
    // 0x8007366C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80073670: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073674: swc1        $f8, 0x75E0($at)
    MEM_W(0X75E0, ctx->r1) = ctx->f8.u32l;
    // 0x80073678: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007367C: lw          $t8, -0x1BD8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1BD8);
    // 0x80073680: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80073684: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80073688: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8007368C: lw          $t0, -0x4C04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4C04);
    // 0x80073690: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073694: lh          $t1, 0x30($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X30);
    // 0x80073698: nop

    // 0x8007369C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x800736A0: nop

    // 0x800736A4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800736A8: swc1        $f16, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f16.u32l;
    // 0x800736AC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x800736B0: lwc1        $f18, 0x5630($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5630);
    // 0x800736B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800736B8: swc1        $f18, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f18.u32l;
    // 0x800736BC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x800736C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800736C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800736C8: swc1        $f4, 0x762C($at)
    MEM_W(0X762C, ctx->r1) = ctx->f4.u32l;
    // 0x800736CC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800736D0: lb          $t2, 0x523E($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X523E);
    // 0x800736D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800736D8: bne         $t2, $at, L_800736F4
    if (ctx->r10 != ctx->r1) {
        // 0x800736DC: nop
    
            goto L_800736F4;
    }
    // 0x800736DC: nop

    // 0x800736E0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x800736E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800736E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800736EC: b           L_80073704
    // 0x800736F0: swc1        $f6, 0x7634($at)
    MEM_W(0X7634, ctx->r1) = ctx->f6.u32l;
        goto L_80073704;
    // 0x800736F0: swc1        $f6, 0x7634($at)
    MEM_W(0X7634, ctx->r1) = ctx->f6.u32l;
L_800736F4:
    // 0x800736F4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800736F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800736FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073700: swc1        $f8, 0x7634($at)
    MEM_W(0X7634, ctx->r1) = ctx->f8.u32l;
L_80073704:
    // 0x80073704: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80073708: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007370C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80073710: addiu       $t4, $t4, -0x1EC0
    ctx->r12 = ADD32(ctx->r12, -0X1EC0);
    // 0x80073714: lwc1        $f12, 0x4($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80073718: lwc1        $f14, 0x8($t3)
    ctx->f14.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8007371C: addiu       $t5, $t4, 0x30
    ctx->r13 = ADD32(ctx->r12, 0X30);
    // 0x80073720: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x80073724: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80073728: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8007372C: addiu       $a2, $t4, 0x4
    ctx->r6 = ADD32(ctx->r12, 0X4);
    // 0x80073730: jal         0x80072A08
    // 0x80073734: addiu       $a3, $t4, 0x18
    ctx->r7 = ADD32(ctx->r12, 0X18);
    func_80072A08(rdram, ctx);
        goto after_0;
    // 0x80073734: addiu       $a3, $t4, 0x18
    ctx->r7 = ADD32(ctx->r12, 0X18);
    after_0:
    // 0x80073738: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007373C: lwc1        $f10, -0x1EBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80073740: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073744: swc1        $f10, 0x7614($at)
    MEM_W(0X7614, ctx->r1) = ctx->f10.u32l;
    // 0x80073748: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007374C: lwc1        $f16, -0x1EBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80073750: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073754: swc1        $f16, 0x761C($at)
    MEM_W(0X761C, ctx->r1) = ctx->f16.u32l;
    // 0x80073758: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007375C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80073760: swc1        $f18, 0x7624($at)
    MEM_W(0X7624, ctx->r1) = ctx->f18.u32l;
    // 0x80073764: jal         0x80019B7C
    // 0x80073768: nop

    func_80019B7C(rdram, ctx);
        goto after_1;
    // 0x80073768: nop

    after_1:
    // 0x8007376C: b           L_80073774
    // 0x80073770: nop

        goto L_80073774;
    // 0x80073770: nop

L_80073774:
    // 0x80073774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80073778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007377C: jr          $ra
    // 0x80073780: nop

    return;
    // 0x80073780: nop

;}
RECOMP_FUNC void func_800E515C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E515C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E5160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E5164: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5168: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E516C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E5170: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5174: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5178: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E517C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5180: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5184: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5188: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E518C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E5190: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5194: nop

    // 0x800E5198: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E519C: nop

    // 0x800E51A0: bne         $t1, $zero, L_800E5218
    if (ctx->r9 != 0) {
        // 0x800E51A4: nop
    
            goto L_800E5218;
    }
    // 0x800E51A4: nop

    // 0x800E51A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E51AC: nop

    // 0x800E51B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E51B4: nop

    // 0x800E51B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E51BC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E51C0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E51C4: nop

    // 0x800E51C8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E51CC: nop

    // 0x800E51D0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E51D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E51D8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E51DC: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E51E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E51E4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E51E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E51EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800E51F0: jal         0x8001C0EC
    // 0x800E51F4: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E51F4: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E51F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E51FC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E5200: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E5204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5208: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E520C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E5210: jal         0x8001ABF4
    // 0x800E5214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E5214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E5218:
    // 0x800E5218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E521C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5220: jal         0x8001B4AC
    // 0x800E5224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E5228: beq         $v0, $zero, L_800E5248
    if (ctx->r2 == 0) {
        // 0x800E522C: nop
    
            goto L_800E5248;
    }
    // 0x800E522C: nop

    // 0x800E5230: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5234: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800E5238: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E523C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5240: nop

    // 0x800E5244: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E5248:
    // 0x800E5248: b           L_800E5250
    // 0x800E524C: nop

        goto L_800E5250;
    // 0x800E524C: nop

L_800E5250:
    // 0x800E5250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5254: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E5258: jr          $ra
    // 0x800E525C: nop

    return;
    // 0x800E525C: nop

;}
RECOMP_FUNC void func_8008EB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EB40: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008EB44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008EB48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008EB4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008EB50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008EB54: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008EB58: sh          $zero, 0x4D58($at)
    MEM_H(0X4D58, ctx->r1) = 0;
    // 0x8008EB5C: jr          $ra
    // 0x8008EB60: nop

    return;
    // 0x8008EB60: nop

    // 0x8008EB64: jr          $ra
    // 0x8008EB68: nop

    return;
    // 0x8008EB68: nop

;}
RECOMP_FUNC void func_80076890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80076890: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80076894: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076898: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8007689C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800768A0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800768A4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800768A8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x800768AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800768B0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800768B4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800768B8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800768BC: nop

    // 0x800768C0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800768C4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800768C8: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800768CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800768D0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800768D4: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800768D8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x800768DC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800768E0: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x800768E4: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800768E8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800768EC: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x800768F0: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x800768F4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800768F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800768FC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80076900: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076904: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80076908: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8007690C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80076910: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80076914: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80076918: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8007691C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80076920: addiu       $t1, $zero, 0x2204
    ctx->r9 = ADD32(0, 0X2204);
    // 0x80076924: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80076928: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007692C: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80076930: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076934: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80076938: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8007693C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80076940: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80076944: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x80076948: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x8007694C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80076950: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80076954: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x80076958: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x8007695C: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x80076960: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80076964: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x80076968: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007696C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80076970: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80076974: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80076978: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007697C: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x80076980: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x80076984: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x80076988: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007698C: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x80076990: ori         $t3, $t3, 0x41C8
    ctx->r11 = ctx->r11 | 0X41C8;
    // 0x80076994: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x80076998: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007699C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x800769A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800769A4: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x800769A8: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x800769AC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800769B0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800769B4: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x800769B8: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800769BC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800769C0: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x800769C4: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800769C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800769CC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800769D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800769D4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800769D8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800769DC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800769E0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800769E4: lb          $t3, 0x7916($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X7916);
    // 0x800769E8: lui         $at, 0xF64A
    ctx->r1 = S32(0XF64A << 16);
    // 0x800769EC: addiu       $t4, $t3, 0x78
    ctx->r12 = ADD32(ctx->r11, 0X78);
    // 0x800769F0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x800769F4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800769F8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800769FC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80076A00: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80076A04: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80076A08: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80076A0C: lb          $t9, 0x7916($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7916);
    // 0x80076A10: addiu       $t0, $zero, 0x78
    ctx->r8 = ADD32(0, 0X78);
    // 0x80076A14: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x80076A18: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x80076A1C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80076A20: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80076A24: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80076A28: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80076A2C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80076A30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076A34: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80076A38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076A3C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80076A40: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80076A44: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80076A48: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80076A4C: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80076A50: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x80076A54: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x80076A58: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80076A5C: lui         $t9, 0x55
    ctx->r25 = S32(0X55 << 16);
    // 0x80076A60: ori         $t9, $t9, 0x2048
    ctx->r25 = ctx->r25 | 0X2048;
    // 0x80076A64: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x80076A68: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80076A6C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80076A70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076A74: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80076A78: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80076A7C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80076A80: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80076A84: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x80076A88: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80076A8C: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x80076A90: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80076A94: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80076A98: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80076A9C: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80076AA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076AA4: addiu       $t0, $t8, 0x8
    ctx->r8 = ADD32(ctx->r24, 0X8);
    // 0x80076AA8: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80076AAC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80076AB0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80076AB4: lb          $t9, 0x7916($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7916);
    // 0x80076AB8: addiu       $t1, $zero, 0x79
    ctx->r9 = ADD32(0, 0X79);
    // 0x80076ABC: subu        $t2, $t1, $t9
    ctx->r10 = SUB32(ctx->r9, ctx->r25);
    // 0x80076AC0: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x80076AC4: lui         $at, 0xF64A
    ctx->r1 = S32(0XF64A << 16);
    // 0x80076AC8: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80076ACC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80076AD0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80076AD4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80076AD8: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80076ADC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80076AE0: lb          $t7, 0x7916($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X7916);
    // 0x80076AE4: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x80076AE8: subu        $t0, $t8, $t7
    ctx->r8 = SUB32(ctx->r24, ctx->r15);
    // 0x80076AEC: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x80076AF0: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80076AF4: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x80076AF8: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80076AFC: or          $t2, $t9, $at
    ctx->r10 = ctx->r25 | ctx->r1;
    // 0x80076B00: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80076B04: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80076B08: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x80076B0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076B10: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80076B14: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80076B18: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x80076B1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076B20: lb          $t6, 0x7916($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7916);
    // 0x80076B24: lui         $at, 0xF64A
    ctx->r1 = S32(0XF64A << 16);
    // 0x80076B28: addiu       $t8, $t6, 0x78
    ctx->r24 = ADD32(ctx->r14, 0X78);
    // 0x80076B2C: andi        $t7, $t8, 0x3FF
    ctx->r15 = ctx->r24 & 0X3FF;
    // 0x80076B30: lw          $t9, 0xC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC);
    // 0x80076B34: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80076B38: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80076B3C: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x80076B40: sw          $t1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r9;
    // 0x80076B44: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80076B48: lb          $t2, 0x7916($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X7916);
    // 0x80076B4C: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x80076B50: addiu       $t3, $t2, 0x77
    ctx->r11 = ADD32(ctx->r10, 0X77);
    // 0x80076B54: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80076B58: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80076B5C: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80076B60: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80076B64: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x80076B68: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80076B6C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80076B70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076B74: addiu       $t0, $t7, 0x8
    ctx->r8 = ADD32(ctx->r15, 0X8);
    // 0x80076B78: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x80076B7C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x80076B80: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80076B84: lb          $t1, 0x7916($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X7916);
    // 0x80076B88: lui         $at, 0xF606
    ctx->r1 = S32(0XF606 << 16);
    // 0x80076B8C: addiu       $t9, $t1, 0x78
    ctx->r25 = ADD32(ctx->r9, 0X78);
    // 0x80076B90: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x80076B94: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80076B98: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80076B9C: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x80076BA0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x80076BA4: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x80076BA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80076BAC: lb          $t6, 0x7916($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7916);
    // 0x80076BB0: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x80076BB4: subu        $t7, $t8, $t6
    ctx->r15 = SUB32(ctx->r24, ctx->r14);
    // 0x80076BB8: andi        $t0, $t7, 0x3FF
    ctx->r8 = ctx->r15 & 0X3FF;
    // 0x80076BBC: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x80076BC0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80076BC4: lui         $at, 0x6
    ctx->r1 = S32(0X6 << 16);
    // 0x80076BC8: or          $t9, $t1, $at
    ctx->r25 = ctx->r9 | ctx->r1;
    // 0x80076BCC: sw          $t9, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r25;
    // 0x80076BD0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80076BD4: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80076BD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076BDC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80076BE0: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x80076BE4: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x80076BE8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80076BEC: lb          $t5, 0x7916($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7916);
    // 0x80076BF0: lui         $at, 0xF64A
    ctx->r1 = S32(0XF64A << 16);
    // 0x80076BF4: addiu       $t8, $t5, 0x78
    ctx->r24 = ADD32(ctx->r13, 0X78);
    // 0x80076BF8: andi        $t6, $t8, 0x3FF
    ctx->r14 = ctx->r24 & 0X3FF;
    // 0x80076BFC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80076C00: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80076C04: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80076C08: or          $t0, $t7, $at
    ctx->r8 = ctx->r15 | ctx->r1;
    // 0x80076C0C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80076C10: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80076C14: lb          $t9, 0x7916($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X7916);
    // 0x80076C18: addiu       $t2, $zero, 0x78
    ctx->r10 = ADD32(0, 0X78);
    // 0x80076C1C: subu        $t3, $t2, $t9
    ctx->r11 = SUB32(ctx->r10, ctx->r25);
    // 0x80076C20: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80076C24: lui         $at, 0x4A
    ctx->r1 = S32(0X4A << 16);
    // 0x80076C28: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80076C2C: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x80076C30: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80076C34: or          $t8, $t5, $at
    ctx->r24 = ctx->r13 | ctx->r1;
    // 0x80076C38: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80076C3C: b           L_80076C44
    // 0x80076C40: nop

        goto L_80076C44;
    // 0x80076C40: nop

L_80076C44:
    // 0x80076C44: jr          $ra
    // 0x80076C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80076C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F62BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F62BC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F62C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F62C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F62C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F62CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F62D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F62D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F62D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F62DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F62E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F62E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F62E8: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F62EC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F62F0: nop

    // 0x800F62F4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F62F8: nop

    // 0x800F62FC: bne         $t1, $zero, L_800F6328
    if (ctx->r9 != 0) {
        // 0x800F6300: nop
    
            goto L_800F6328;
    }
    // 0x800F6300: nop

    // 0x800F6304: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800F6308: nop

    // 0x800F630C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F6310: nop

    // 0x800F6314: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F6318: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F631C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F6320: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x800F6324: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
L_800F6328:
    // 0x800F6328: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F632C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F6330: nop

    // 0x800F6334: swc1        $f4, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f4.u32l;
    // 0x800F6338: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F633C: nop

    // 0x800F6340: lwc1        $f12, 0x2C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800F6344: nop

    // 0x800F6348: swc1        $f12, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f12.u32l;
    // 0x800F634C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800F6350: nop

    // 0x800F6354: swc1        $f12, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f12.u32l;
    // 0x800F6358: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F635C: nop

    // 0x800F6360: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800F6364: nop

    // 0x800F6368: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800F636C: sh          $t3, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r11;
    // 0x800F6370: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800F6374: nop

    // 0x800F6378: lh          $t2, 0xAA($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAA);
    // 0x800F637C: nop

    // 0x800F6380: bgtz        $t2, L_800F63A0
    if (SIGNED(ctx->r10) > 0) {
        // 0x800F6384: nop
    
            goto L_800F63A0;
    }
    // 0x800F6384: nop

    // 0x800F6388: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F638C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800F6390: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800F6394: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800F6398: nop

    // 0x800F639C: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_800F63A0:
    // 0x800F63A0: b           L_800F63A8
    // 0x800F63A4: nop

        goto L_800F63A8;
    // 0x800F63A4: nop

L_800F63A8:
    // 0x800F63A8: jr          $ra
    // 0x800F63AC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F63AC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800D90BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D90BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D90C0: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D90C4: nop

    // 0x800D90C8: bne         $t6, $zero, L_800D9124
    if (ctx->r14 != 0) {
        // 0x800D90CC: nop
    
            goto L_800D9124;
    }
    // 0x800D90CC: nop

    // 0x800D90D0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800D90D4: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800D90D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D90DC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800D90E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D90E4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800D90E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800D90EC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800D90F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800D90F4: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800D90F8: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800D90FC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D9100: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D9104: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D9108: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D910C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D9110: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D9114: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D9118: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D911C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D9120: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800D9124:
    // 0x800D9124: jr          $ra
    // 0x800D9128: nop

    return;
    // 0x800D9128: nop

    // 0x800D912C: jr          $ra
    // 0x800D9130: nop

    return;
    // 0x800D9130: nop

;}
RECOMP_FUNC void func_8009C224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C224: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009C228: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009C22C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C230: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009C234: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009C238: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009C23C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C244: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C248: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C24C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009C250: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009C254: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8009C258: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8009C25C: nop

    // 0x8009C260: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009C264: nop

    // 0x8009C268: bne         $t1, $zero, L_8009C2C8
    if (ctx->r9 != 0) {
        // 0x8009C26C: nop
    
            goto L_8009C2C8;
    }
    // 0x8009C26C: nop

    // 0x8009C270: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8009C274: nop

    // 0x8009C278: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009C27C: nop

    // 0x8009C280: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009C284: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009C288: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x8009C28C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009C290: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8009C294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C29C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8009C2A0: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8009C2A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8009C2A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8009C2AC: jal         0x800295C0
    // 0x8009C2B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x8009C2B0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x8009C2B4: beq         $v0, $zero, L_8009C2C8
    if (ctx->r2 == 0) {
        // 0x8009C2B8: nop
    
            goto L_8009C2C8;
    }
    // 0x8009C2B8: nop

    // 0x8009C2BC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8009C2C0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8009C2C4: sb          $t5, 0x13A($t6)
    MEM_B(0X13A, ctx->r14) = ctx->r13;
L_8009C2C8:
    // 0x8009C2C8: b           L_8009C2D0
    // 0x8009C2CC: nop

        goto L_8009C2D0;
    // 0x8009C2CC: nop

L_8009C2D0:
    // 0x8009C2D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C2D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8009C2D8: jr          $ra
    // 0x8009C2DC: nop

    return;
    // 0x8009C2DC: nop

;}
RECOMP_FUNC void func_800F901C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F901C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800F9020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F9024: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9028: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F902C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F9030: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F9034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9038: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F903C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9040: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F9044: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800F9048: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800F904C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9050: bne         $t8, $at, L_800F9070
    if (ctx->r24 != ctx->r1) {
        // 0x800F9054: nop
    
            goto L_800F9070;
    }
    // 0x800F9054: nop

    // 0x800F9058: b           L_800F9060
    // 0x800F905C: nop

        goto L_800F9060;
    // 0x800F905C: nop

L_800F9060:
    // 0x800F9060: jal         0x800F8AC8
    // 0x800F9064: nop

    func_800F8AC8(rdram, ctx);
        goto after_0;
    // 0x800F9064: nop

    after_0:
    // 0x800F9068: b           L_800F9070
    // 0x800F906C: nop

        goto L_800F9070;
    // 0x800F906C: nop

L_800F9070:
    // 0x800F9070: b           L_800F9078
    // 0x800F9074: nop

        goto L_800F9078;
    // 0x800F9074: nop

L_800F9078:
    // 0x800F9078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F907C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800F9080: jr          $ra
    // 0x800F9084: nop

    return;
    // 0x800F9084: nop

;}
RECOMP_FUNC void func_80098E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80098E18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80098E1C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80098E20: nop

    // 0x80098E24: bne         $t6, $zero, L_80098E34
    if (ctx->r14 != 0) {
        // 0x80098E28: nop
    
            goto L_80098E34;
    }
    // 0x80098E28: nop

    // 0x80098E2C: b           L_80098E50
    // 0x80098E30: nop

        goto L_80098E50;
    // 0x80098E30: nop

L_80098E34:
    // 0x80098E34: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80098E38: lw          $t7, 0x7A64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A64);
    // 0x80098E3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80098E40: bne         $t7, $at, L_80098E50
    if (ctx->r15 != ctx->r1) {
        // 0x80098E44: nop
    
            goto L_80098E50;
    }
    // 0x80098E44: nop

    // 0x80098E48: b           L_80098E50
    // 0x80098E4C: nop

        goto L_80098E50;
    // 0x80098E4C: nop

L_80098E50:
    // 0x80098E50: jr          $ra
    // 0x80098E54: nop

    return;
    // 0x80098E54: nop

    // 0x80098E58: jr          $ra
    // 0x80098E5C: nop

    return;
    // 0x80098E5C: nop

;}
RECOMP_FUNC void func_800F7BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F7BF4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800F7BF8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7BFC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7C00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F7C04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F7C08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7C0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7C10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7C14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F7C18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F7C1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F7C20: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800F7C24: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C28: nop

    // 0x800F7C2C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F7C30: nop

    // 0x800F7C34: bne         $t1, $zero, L_800F7C6C
    if (ctx->r9 != 0) {
        // 0x800F7C38: nop
    
            goto L_800F7C6C;
    }
    // 0x800F7C38: nop

    // 0x800F7C3C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C40: nop

    // 0x800F7C44: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F7C48: nop

    // 0x800F7C4C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800F7C50: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800F7C54: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C58: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x800F7C5C: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
    // 0x800F7C60: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C64: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800F7C68: sh          $t7, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r15;
L_800F7C6C:
    // 0x800F7C6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F7C70: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C74: nop

    // 0x800F7C78: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x800F7C7C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C80: nop

    // 0x800F7C84: lwc1        $f12, 0x2C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800F7C88: nop

    // 0x800F7C8C: swc1        $f12, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f12.u32l;
    // 0x800F7C90: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F7C94: nop

    // 0x800F7C98: swc1        $f12, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f12.u32l;
    // 0x800F7C9C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800F7CA0: nop

    // 0x800F7CA4: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800F7CA8: nop

    // 0x800F7CAC: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800F7CB0: sh          $t2, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r10;
    // 0x800F7CB4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800F7CB8: nop

    // 0x800F7CBC: lh          $t6, 0xAA($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAA);
    // 0x800F7CC0: nop

    // 0x800F7CC4: bgtz        $t6, L_800F7CF8
    if (SIGNED(ctx->r14) > 0) {
        // 0x800F7CC8: nop
    
            goto L_800F7CF8;
    }
    // 0x800F7CC8: nop

    // 0x800F7CCC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800F7CD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800F7CD4: sh          $t7, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r15;
    // 0x800F7CD8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800F7CDC: nop

    // 0x800F7CE0: lh          $t0, 0xB0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB0);
    // 0x800F7CE4: nop

    // 0x800F7CE8: sh          $t0, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r8;
    // 0x800F7CEC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800F7CF0: nop

    // 0x800F7CF4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800F7CF8:
    // 0x800F7CF8: b           L_800F7D00
    // 0x800F7CFC: nop

        goto L_800F7D00;
    // 0x800F7CFC: nop

L_800F7D00:
    // 0x800F7D00: jr          $ra
    // 0x800F7D04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800F7D04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80086D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086D50: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x80086D54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80086D58: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086D5C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80086D60: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    // 0x80086D64: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80086D68: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x80086D6C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80086D70: jal         0x80037200
    // 0x80086D74: nop

    guTranslateF(rdram, ctx);
        goto after_0;
    // 0x80086D74: nop

    after_0:
    // 0x80086D78: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80086D7C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80086D80: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x80086D84: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x80086D88: lw          $a2, 0x10($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X10);
    // 0x80086D8C: lw          $a3, 0x14($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X14);
    // 0x80086D90: jal         0x80037490
    // 0x80086D94: nop

    guScaleF(rdram, ctx);
        goto after_1;
    // 0x80086D94: nop

    after_1:
    // 0x80086D98: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086D9C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80086DA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80086DA4: lw          $a1, 0x18($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X18);
    // 0x80086DA8: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x80086DAC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80086DB0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80086DB4: jal         0x800372A0
    // 0x80086DB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_2;
    // 0x80086DB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80086DBC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80086DC0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80086DC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80086DC8: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x80086DCC: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80086DD0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80086DD4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80086DD8: jal         0x800372A0
    // 0x80086DDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x80086DDC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80086DE0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086DE4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80086DE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80086DEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80086DF0: lw          $a1, 0x20($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X20);
    // 0x80086DF4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80086DF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80086DFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80086E00: jal         0x800372A0
    // 0x80086E04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_4;
    // 0x80086E04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80086E08: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x80086E0C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80086E10: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80086E14: jal         0x80036400
    // 0x80086E18: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    guMtxCatF(rdram, ctx);
        goto after_5;
    // 0x80086E18: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x80086E1C: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x80086E20: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80086E24: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80086E28: jal         0x80036400
    // 0x80086E2C: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x80086E2C: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_6:
    // 0x80086E30: addiu       $t3, $sp, 0x20
    ctx->r11 = ADD32(ctx->r29, 0X20);
    // 0x80086E34: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80086E38: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x80086E3C: jal         0x80036400
    // 0x80086E40: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x80086E40: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_7:
    // 0x80086E44: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80086E48: addiu       $a2, $a2, 0x7550
    ctx->r6 = ADD32(ctx->r6, 0X7550);
    // 0x80086E4C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80086E50: jal         0x80036400
    // 0x80086E54: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    guMtxCatF(rdram, ctx);
        goto after_8;
    // 0x80086E54: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    after_8:
    // 0x80086E58: b           L_80086E60
    // 0x80086E5C: nop

        goto L_80086E60;
    // 0x80086E5C: nop

L_80086E60:
    // 0x80086E60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80086E64: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    // 0x80086E68: jr          $ra
    // 0x80086E6C: nop

    return;
    // 0x80086E6C: nop

;}
RECOMP_FUNC void func_800E778C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E778C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7790: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E7794: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7798: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E779C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E77A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E77A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E77A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E77AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E77B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E77B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E77B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E77BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E77C0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E77C4: nop

    // 0x800E77C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E77CC: nop

    // 0x800E77D0: bne         $t1, $zero, L_800E784C
    if (ctx->r9 != 0) {
        // 0x800E77D4: nop
    
            goto L_800E784C;
    }
    // 0x800E77D4: nop

    // 0x800E77D8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E77DC: nop

    // 0x800E77E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E77E4: nop

    // 0x800E77E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E77EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E77F0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E77F4: nop

    // 0x800E77F8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E77FC: nop

    // 0x800E7800: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E7804: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7808: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E780C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E7810: jal         0x80029EF8
    // 0x800E7814: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800E7814: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x800E7818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E781C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E7820: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E7824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7828: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E782C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E7830: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800E7834: jal         0x8001C0EC
    // 0x800E7838: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E7838: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_1:
    // 0x800E783C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7844: jal         0x8001BBDC
    // 0x800E7848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800E7848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_800E784C:
    // 0x800E784C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7850: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7854: jal         0x8002A46C
    // 0x800E7858: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x800E7858: nop

    after_3:
    // 0x800E785C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E7860: nop

    // 0x800E7864: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x800E7868: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E786C: nop

    // 0x800E7870: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x800E7874: nop

    // 0x800E7878: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
    // 0x800E787C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7880: nop

    // 0x800E7884: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800E7888: nop

    // 0x800E788C: bne         $t1, $zero, L_800E78F8
    if (ctx->r9 != 0) {
        // 0x800E7890: nop
    
            goto L_800E78F8;
    }
    // 0x800E7890: nop

    // 0x800E7894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E789C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E78A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E78A4: jal         0x8002A0D0
    // 0x800E78A8: lui         $a3, 0xC2F0
    ctx->r7 = S32(0XC2F0 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_4;
    // 0x800E78A8: lui         $a3, 0xC2F0
    ctx->r7 = S32(0XC2F0 << 16);
    after_4:
    // 0x800E78AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E78B0: bne         $v0, $at, L_800E78F8
    if (ctx->r2 != ctx->r1) {
        // 0x800E78B4: nop
    
            goto L_800E78F8;
    }
    // 0x800E78B4: nop

    // 0x800E78B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E78BC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800E78C0: addiu       $t3, $t3, -0x6878
    ctx->r11 = ADD32(ctx->r11, -0X6878);
    // 0x800E78C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E78C8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800E78CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E78D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800E78D4: jal         0x8001C0EC
    // 0x800E78D8: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800E78D8: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_5:
    // 0x800E78DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E78E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E78E4: jal         0x8001BBDC
    // 0x800E78E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800E78E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800E78EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E78F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800E78F4: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_800E78F8:
    // 0x800E78F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E78FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7900: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800E7904: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800E7908: jal         0x8002A0D0
    // 0x800E790C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8002A0D0(rdram, ctx);
        goto after_7;
    // 0x800E790C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
    // 0x800E7910: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E7914: bne         $v0, $at, L_800E792C
    if (ctx->r2 != ctx->r1) {
        // 0x800E7918: nop
    
            goto L_800E792C;
    }
    // 0x800E7918: nop

    // 0x800E791C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800E7920: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800E7924: nop

    // 0x800E7928: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
L_800E792C:
    // 0x800E792C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7930: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E7934: jal         0x8001B4AC
    // 0x800E7938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_8;
    // 0x800E7938: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800E793C: beq         $v0, $zero, L_800E795C
    if (ctx->r2 == 0) {
        // 0x800E7940: nop
    
            goto L_800E795C;
    }
    // 0x800E7940: nop

    // 0x800E7944: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800E7948: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800E794C: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800E7950: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E7954: nop

    // 0x800E7958: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800E795C:
    // 0x800E795C: b           L_800E7964
    // 0x800E7960: nop

        goto L_800E7964;
    // 0x800E7960: nop

L_800E7964:
    // 0x800E7964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E7968: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E796C: jr          $ra
    // 0x800E7970: nop

    return;
    // 0x800E7970: nop

;}
RECOMP_FUNC void func_8006A388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006A38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A390: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8006A394: addiu       $t6, $t6, 0x4808
    ctx->r14 = ADD32(ctx->r14, 0X4808);
    // 0x8006A398: lbu         $t7, 0x69($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X69);
    // 0x8006A39C: nop

    // 0x8006A3A0: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    // 0x8006A3A4: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A3A8: nop

    // 0x8006A3AC: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8006A3B0: bne         $t9, $zero, L_8006A3EC
    if (ctx->r25 != 0) {
        // 0x8006A3B4: nop
    
            goto L_8006A3EC;
    }
    // 0x8006A3B4: nop

    // 0x8006A3B8: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A3BC: nop

    // 0x8006A3C0: andi        $t1, $t0, 0xF0
    ctx->r9 = ctx->r8 & 0XF0;
    // 0x8006A3C4: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    // 0x8006A3C8: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x8006A3CC: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8006A3D0: addiu       $t4, $t4, 0x4808
    ctx->r12 = ADD32(ctx->r12, 0X4808);
    // 0x8006A3D4: ori         $t3, $t2, 0x6
    ctx->r11 = ctx->r10 | 0X6;
    // 0x8006A3D8: sb          $t3, 0x69($t4)
    MEM_B(0X69, ctx->r12) = ctx->r11;
    // 0x8006A3DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A3E0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A3E4: jal         0x800250A0
    // 0x8006A3E8: nop

    func_800250A0(rdram, ctx);
        goto after_0;
    // 0x8006A3E8: nop

    after_0:
L_8006A3EC:
    // 0x8006A3EC: b           L_8006A3F4
    // 0x8006A3F0: nop

        goto L_8006A3F4;
    // 0x8006A3F0: nop

L_8006A3F4:
    // 0x8006A3F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A3F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006A3FC: jr          $ra
    // 0x8006A400: nop

    return;
    // 0x8006A400: nop

;}
RECOMP_FUNC void func_800772B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800772B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800772BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800772C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800772C4: lw          $t6, 0x7924($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7924);
    // 0x800772C8: nop

    // 0x800772CC: bne         $t6, $zero, L_800772DC
    if (ctx->r14 != 0) {
        // 0x800772D0: nop
    
            goto L_800772DC;
    }
    // 0x800772D0: nop

    // 0x800772D4: b           L_80077448
    // 0x800772D8: nop

        goto L_80077448;
    // 0x800772D8: nop

L_800772DC:
    // 0x800772DC: jal         0x80076890
    // 0x800772E0: nop

    func_80076890(rdram, ctx);
        goto after_0;
    // 0x800772E0: nop

    after_0:
    // 0x800772E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800772E8: lb          $t7, 0x790E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X790E);
    // 0x800772EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800772F0: beq         $t7, $at, L_80077300
    if (ctx->r15 == ctx->r1) {
        // 0x800772F4: nop
    
            goto L_80077300;
    }
    // 0x800772F4: nop

    // 0x800772F8: b           L_80077448
    // 0x800772FC: nop

        goto L_80077448;
    // 0x800772FC: nop

L_80077300:
    // 0x80077300: jal         0x80076C4C
    // 0x80077304: nop

    func_80076C4C(rdram, ctx);
        goto after_1;
    // 0x80077304: nop

    after_1:
    // 0x80077308: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007730C: lbu         $t8, 0x7920($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7920);
    // 0x80077310: nop

    // 0x80077314: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x80077318: beq         $at, $zero, L_8007732C
    if (ctx->r1 == 0) {
        // 0x8007731C: nop
    
            goto L_8007732C;
    }
    // 0x8007731C: nop

    // 0x80077320: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80077324: b           L_80077334
    // 0x80077328: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
        goto L_80077334;
    // 0x80077328: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
L_8007732C:
    // 0x8007732C: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x80077330: sh          $t0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r8;
L_80077334:
    // 0x80077334: lh          $t1, 0x1C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1C);
    // 0x80077338: nop

    // 0x8007733C: sh          $t1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r9;
    // 0x80077340: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x80077344: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x80077348: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007734C: lw          $t3, 0x7924($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7924);
    // 0x80077350: nop

    // 0x80077354: lh          $t4, 0x8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X8);
    // 0x80077358: nop

    // 0x8007735C: sh          $t4, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r12;
    // 0x80077360: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80077364: lw          $t5, 0x7924($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7924);
    // 0x80077368: nop

    // 0x8007736C: addiu       $t6, $t5, 0xA
    ctx->r14 = ADD32(ctx->r13, 0XA);
    // 0x80077370: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80077374:
    // 0x80077374: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80077378: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007737C: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x80077380: nop

    // 0x80077384: bne         $t8, $at, L_800773D0
    if (ctx->r24 != ctx->r1) {
        // 0x80077388: nop
    
            goto L_800773D0;
    }
    // 0x80077388: nop

    // 0x8007738C: lh          $t9, 0x22($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X22);
    // 0x80077390: nop

    // 0x80077394: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80077398: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x8007739C: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x800773A0: nop

    // 0x800773A4: bne         $t1, $zero, L_800773B4
    if (ctx->r9 != 0) {
        // 0x800773A8: nop
    
            goto L_800773B4;
    }
    // 0x800773A8: nop

    // 0x800773AC: b           L_80077440
    // 0x800773B0: nop

        goto L_80077440;
    // 0x800773B0: nop

L_800773B4:
    // 0x800773B4: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x800773B8: nop

    // 0x800773BC: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x800773C0: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
    // 0x800773C4: lh          $t4, 0x1C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1C);
    // 0x800773C8: b           L_80077428
    // 0x800773CC: sh          $t4, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r12;
        goto L_80077428;
    // 0x800773CC: sh          $t4, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r12;
L_800773D0:
    // 0x800773D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800773D4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x800773D8: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x800773DC: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x800773E0: bgez        $t6, L_800773F4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800773E4: andi        $a2, $t6, 0x1F
        ctx->r6 = ctx->r14 & 0X1F;
            goto L_800773F4;
    }
    // 0x800773E4: andi        $a2, $t6, 0x1F
    ctx->r6 = ctx->r14 & 0X1F;
    // 0x800773E8: beq         $a2, $zero, L_800773F4
    if (ctx->r6 == 0) {
        // 0x800773EC: nop
    
            goto L_800773F4;
    }
    // 0x800773EC: nop

    // 0x800773F0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_800773F4:
    // 0x800773F4: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x800773F8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x800773FC: bgez        $t6, L_8007740C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80077400: sra         $a3, $t6, 5
        ctx->r7 = S32(SIGNED(ctx->r14) >> 5);
            goto L_8007740C;
    }
    // 0x80077400: sra         $a3, $t6, 5
    ctx->r7 = S32(SIGNED(ctx->r14) >> 5);
    // 0x80077404: addiu       $at, $t6, 0x1F
    ctx->r1 = ADD32(ctx->r14, 0X1F);
    // 0x80077408: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_8007740C:
    // 0x8007740C: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x80077410: jal         0x80076F6C
    // 0x80077414: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    func_80076F6C(rdram, ctx);
        goto after_2;
    // 0x80077414: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_2:
    // 0x80077418: lh          $t9, 0x20($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X20);
    // 0x8007741C: nop

    // 0x80077420: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80077424: sh          $t0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r8;
L_80077428:
    // 0x80077428: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007742C: nop

    // 0x80077430: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x80077434: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x80077438: b           L_80077374
    // 0x8007743C: nop

        goto L_80077374;
    // 0x8007743C: nop

L_80077440:
    // 0x80077440: b           L_80077448
    // 0x80077444: nop

        goto L_80077448;
    // 0x80077444: nop

L_80077448:
    // 0x80077448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007744C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80077450: jr          $ra
    // 0x80077454: nop

    return;
    // 0x80077454: nop

;}
RECOMP_FUNC void func_800AA2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA2F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AA2F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AA2FC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800AA300: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800AA304: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800AA308: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800AA30C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800AA310: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800AA314: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800AA318: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800AA31C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800AA320: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800AA324: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800AA328: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800AA32C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800AA330: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800AA334: addiu       $a1, $a1, 0x3934
    ctx->r5 = ADD32(ctx->r5, 0X3934);
    // 0x800AA338: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AA33C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800AA340: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800AA344: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800AA348: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800AA34C: jal         0x80027464
    // 0x800AA350: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800AA350: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800AA354: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800AA358: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800AA35C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800AA360: beq         $t1, $at, L_800AA3EC
    if (ctx->r9 == ctx->r1) {
        // 0x800AA364: nop
    
            goto L_800AA3EC;
    }
    // 0x800AA364: nop

    // 0x800AA368: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800AA36C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AA370: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800AA374: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AA378: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800AA37C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800AA380: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800AA384: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800AA388: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x800AA38C: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800AA390: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800AA394: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800AA398: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800AA39C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AA3A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AA3A4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800AA3A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AA3AC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800AA3B0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800AA3B4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800AA3B8: addiu       $t8, $t8, 0x75D0
    ctx->r24 = ADD32(ctx->r24, 0X75D0);
    // 0x800AA3BC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800AA3C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800AA3C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA3C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AA3CC: jal         0x8001C0EC
    // 0x800AA3D0: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800AA3D0: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_1:
    // 0x800AA3D4: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800AA3D8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AA3DC: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800AA3E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA3E4: jal         0x8001ABF4
    // 0x800AA3E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800AA3E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800AA3EC:
    // 0x800AA3EC: b           L_800AA3F4
    // 0x800AA3F0: nop

        goto L_800AA3F4;
    // 0x800AA3F0: nop

L_800AA3F4:
    // 0x800AA3F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA3F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AA3FC: jr          $ra
    // 0x800AA400: nop

    return;
    // 0x800AA400: nop

;}
RECOMP_FUNC void func_800842C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800842C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800842C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800842C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800842CC: lb          $t6, -0x1EF0($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1EF0);
    // 0x800842D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800842D4: bne         $t6, $at, L_8008435C
    if (ctx->r14 != ctx->r1) {
        // 0x800842D8: nop
    
            goto L_8008435C;
    }
    // 0x800842D8: nop

    // 0x800842DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800842E0: lh          $t7, -0x1EEE($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1EEE);
    // 0x800842E4: nop

    // 0x800842E8: beq         $t7, $zero, L_80084304
    if (ctx->r15 == 0) {
        // 0x800842EC: nop
    
            goto L_80084304;
    }
    // 0x800842EC: nop

    // 0x800842F0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800842F4: lh          $t8, -0x1EEE($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1EEE);
    // 0x800842F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800842FC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80084300: sh          $t9, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r25;
L_80084304:
    // 0x80084304: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80084308: lh          $t0, -0x1EEE($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1EEE);
    // 0x8008430C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80084310: beq         $t0, $at, L_8008433C
    if (ctx->r8 == ctx->r1) {
        // 0x80084314: nop
    
            goto L_8008433C;
    }
    // 0x80084314: nop

    // 0x80084318: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8008431C: beq         $t0, $at, L_8008433C
    if (ctx->r8 == ctx->r1) {
        // 0x80084320: nop
    
            goto L_8008433C;
    }
    // 0x80084320: nop

    // 0x80084324: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80084328: beq         $t0, $at, L_8008433C
    if (ctx->r8 == ctx->r1) {
        // 0x8008432C: nop
    
            goto L_8008433C;
    }
    // 0x8008432C: nop

    // 0x80084330: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x80084334: bne         $t0, $at, L_80084354
    if (ctx->r8 != ctx->r1) {
        // 0x80084338: nop
    
            goto L_80084354;
    }
    // 0x80084338: nop

L_8008433C:
    // 0x8008433C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80084340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80084344: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x80084348: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8008434C: jal         0x800178D4
    // 0x80084350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80084350: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_80084354:
    // 0x80084354: b           L_800843B4
    // 0x80084358: nop

        goto L_800843B4;
    // 0x80084358: nop

L_8008435C:
    // 0x8008435C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80084360: lb          $t1, -0x1EF0($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1EF0);
    // 0x80084364: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80084368: bne         $t1, $at, L_800843B4
    if (ctx->r9 != ctx->r1) {
        // 0x8008436C: nop
    
            goto L_800843B4;
    }
    // 0x8008436C: nop

    // 0x80084370: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80084374: lh          $t2, -0x1EEE($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1EEE);
    // 0x80084378: nop

    // 0x8008437C: bne         $t2, $zero, L_800843A0
    if (ctx->r10 != 0) {
        // 0x80084380: nop
    
            goto L_800843A0;
    }
    // 0x80084380: nop

    // 0x80084384: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80084388: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008438C: sb          $t3, -0x1EF0($at)
    MEM_B(-0X1EF0, ctx->r1) = ctx->r11;
    // 0x80084390: addiu       $t4, $zero, 0xB4
    ctx->r12 = ADD32(0, 0XB4);
    // 0x80084394: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80084398: b           L_800843B4
    // 0x8008439C: sh          $t4, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r12;
        goto L_800843B4;
    // 0x8008439C: sh          $t4, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r12;
L_800843A0:
    // 0x800843A0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800843A4: lh          $t5, -0x1EEE($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1EEE);
    // 0x800843A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800843AC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800843B0: sh          $t6, -0x1EEE($at)
    MEM_H(-0X1EEE, ctx->r1) = ctx->r14;
L_800843B4:
    // 0x800843B4: b           L_800843BC
    // 0x800843B8: nop

        goto L_800843BC;
    // 0x800843B8: nop

L_800843BC:
    // 0x800843BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800843C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800843C4: jr          $ra
    // 0x800843C8: nop

    return;
    // 0x800843C8: nop

;}
RECOMP_FUNC void func_800A72C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A72C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800A72C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A72C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A72CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A72D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A72D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A72D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A72DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A72E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A72E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A72E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A72EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A72F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A72F4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800A72F8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800A72FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800A7300: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A7304: nop

    // 0x800A7308: bne         $t1, $at, L_800A73FC
    if (ctx->r9 != ctx->r1) {
        // 0x800A730C: nop
    
            goto L_800A73FC;
    }
    // 0x800A730C: nop

    // 0x800A7310: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7314: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A7318: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A731C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7320: nop

    // 0x800A7324: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x800A7328: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A732C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7330: nop

    // 0x800A7334: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800A7338: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A733C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A7340: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800A7344: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7348: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800A734C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A7350: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800A7354: jal         0x80015538
    // 0x800A7358: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800A7358: nop

    after_0:
    // 0x800A735C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7360: nop

    // 0x800A7364: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x800A7368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A736C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800A7370: addiu       $t0, $t0, 0x71B0
    ctx->r8 = ADD32(ctx->r8, 0X71B0);
    // 0x800A7374: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7378: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A737C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A7380: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800A7384: jal         0x8001C0EC
    // 0x800A7388: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800A7388: addiu       $a3, $zero, 0x76
    ctx->r7 = ADD32(0, 0X76);
    after_1:
    // 0x800A738C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7390: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7394: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A7398: addiu       $a3, $a3, 0x7230
    ctx->r7 = ADD32(ctx->r7, 0X7230);
    // 0x800A739C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A73A0: jal         0x8001ABF4
    // 0x800A73A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800A73A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800A73A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A73AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A73B0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A73B4: addiu       $a3, $a3, 0x724C
    ctx->r7 = ADD32(ctx->r7, 0X724C);
    // 0x800A73B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A73BC: jal         0x8001ABF4
    // 0x800A73C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800A73C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800A73C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A73C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A73CC: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A73D0: addiu       $a3, $a3, 0x7268
    ctx->r7 = ADD32(ctx->r7, 0X7268);
    // 0x800A73D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800A73D8: jal         0x8001ABF4
    // 0x800A73DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x800A73DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x800A73E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A73E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A73E8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A73EC: addiu       $a3, $a3, 0x7284
    ctx->r7 = ADD32(ctx->r7, 0X7284);
    // 0x800A73F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A73F4: jal         0x8001ABF4
    // 0x800A73F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_5;
    // 0x800A73F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800A73FC:
    // 0x800A73FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7400: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7404: jal         0x8002A8B4
    // 0x800A7408: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_6;
    // 0x800A7408: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_6:
    // 0x800A740C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7410: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800A7414: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A7418: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x800A741C: jal         0x80015538
    // 0x800A7420: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800A7420: nop

    after_7:
    // 0x800A7424: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7428: nop

    // 0x800A742C: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x800A7430: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7434: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800A7438: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A743C: lwc1        $f6, 0x44($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X44);
    // 0x800A7440: nop

    // 0x800A7444: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x800A7448: nop

    // 0x800A744C: bc1f        L_800A7470
    if (!c1cs) {
        // 0x800A7450: nop
    
            goto L_800A7470;
    }
    // 0x800A7450: nop

    // 0x800A7454: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7458: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x800A745C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A7460: lwc1        $f10, 0x44($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X44);
    // 0x800A7464: nop

    // 0x800A7468: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800A746C: swc1        $f18, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f18.u32l;
L_800A7470:
    // 0x800A7470: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7474: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7478: jal         0x80029C40
    // 0x800A747C: nop

    func_80029C40(rdram, ctx);
        goto after_8;
    // 0x800A747C: nop

    after_8:
    // 0x800A7480: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7484: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7488: jal         0x80029D04
    // 0x800A748C: nop

    func_80029D04(rdram, ctx);
        goto after_9;
    // 0x800A748C: nop

    after_9:
    // 0x800A7490: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7494: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A7498: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A749C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A74A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A74A4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x800A74A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A74AC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800A74B0: jal         0x80029018
    // 0x800A74B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x800A74B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x800A74B8: beq         $v0, $zero, L_800A74DC
    if (ctx->r2 == 0) {
        // 0x800A74BC: nop
    
            goto L_800A74DC;
    }
    // 0x800A74BC: nop

    // 0x800A74C0: jal         0x800297DC
    // 0x800A74C4: nop

    func_800297DC(rdram, ctx);
        goto after_11;
    // 0x800A74C4: nop

    after_11:
    // 0x800A74C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A74CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A74D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A74D4: jal         0x80029824
    // 0x800A74D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_12;
    // 0x800A74D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
L_800A74DC:
    // 0x800A74DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A74E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A74E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A74E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A74EC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800A74F0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800A74F4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A74F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800A74FC: jal         0x800295C0
    // 0x800A7500: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x800A7500: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x800A7504: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800A7508: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x800A750C: nop

    // 0x800A7510: bne         $t5, $zero, L_800A7580
    if (ctx->r13 != 0) {
        // 0x800A7514: nop
    
            goto L_800A7580;
    }
    // 0x800A7514: nop

    // 0x800A7518: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x800A751C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A7520: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7524: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800A7528: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800A752C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800A7530: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x800A7534: nop

    // 0x800A7538: bc1f        L_800A7578
    if (!c1cs) {
        // 0x800A753C: nop
    
            goto L_800A7578;
    }
    // 0x800A753C: nop

    // 0x800A7540: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800A7544: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7548: nop

    // 0x800A754C: swc1        $f8, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f8.u32l;
    // 0x800A7550: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A7554: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7558: nop

    // 0x800A755C: swc1        $f10, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f10.u32l;
    // 0x800A7560: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7564: nop

    // 0x800A7568: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800A756C: nop

    // 0x800A7570: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800A7574: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
L_800A7578:
    // 0x800A7578: b           L_800A75B8
    // 0x800A757C: nop

        goto L_800A75B8;
    // 0x800A757C: nop

L_800A7580:
    // 0x800A7580: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A7584: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7588: nop

    // 0x800A758C: swc1        $f18, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f18.u32l;
    // 0x800A7590: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A7594: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7598: nop

    // 0x800A759C: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x800A75A0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800A75A4: nop

    // 0x800A75A8: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800A75AC: nop

    // 0x800A75B0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800A75B4: sh          $t6, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r14;
L_800A75B8:
    // 0x800A75B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A75BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A75C0: jal         0x8001B930
    // 0x800A75C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B930(rdram, ctx);
        goto after_14;
    // 0x800A75C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_14:
    // 0x800A75C8: beq         $v0, $zero, L_800A762C
    if (ctx->r2 == 0) {
        // 0x800A75CC: nop
    
            goto L_800A762C;
    }
    // 0x800A75CC: nop

    // 0x800A75D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A75D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A75D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A75DC: jal         0x8001BC84
    // 0x800A75E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001BC84(rdram, ctx);
        goto after_15;
    // 0x800A75E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x800A75E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A75E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A75EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A75F0: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x800A75F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A75F8: jal         0x800175F0
    // 0x800A75FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_16;
    // 0x800A75FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
    // 0x800A7600: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800A7604: lui         $a3, 0x400C
    ctx->r7 = S32(0X400C << 16);
    // 0x800A7608: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800A760C: lwc1        $f14, 0x4($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800A7610: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x800A7614: jal         0x8007EDF4
    // 0x800A7618: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    func_8007EDF4(rdram, ctx);
        goto after_17;
    // 0x800A7618: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    after_17:
    // 0x800A761C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A7620: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A7624: jal         0x8002B114
    // 0x800A7628: nop

    func_8002B114(rdram, ctx);
        goto after_18;
    // 0x800A7628: nop

    after_18:
L_800A762C:
    // 0x800A762C: b           L_800A7634
    // 0x800A7630: nop

        goto L_800A7634;
    // 0x800A7630: nop

L_800A7634:
    // 0x800A7634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A7638: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A763C: jr          $ra
    // 0x800A7640: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800A7640: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800B831C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B831C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B8320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B8324: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800B8328: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800B832C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800B8330: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800B8334: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800B8338: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800B833C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800B8340: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800B8344: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800B8348: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800B834C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800B8350: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800B8354: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800B8358: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800B835C: addiu       $a1, $a1, 0x3A30
    ctx->r5 = ADD32(ctx->r5, 0X3A30);
    // 0x800B8360: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800B8364: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800B8368: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800B836C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800B8370: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800B8374: jal         0x80027464
    // 0x800B8378: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800B8378: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800B837C: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800B8380: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800B8384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B8388: beq         $t1, $at, L_800B83FC
    if (ctx->r9 == ctx->r1) {
        // 0x800B838C: nop
    
            goto L_800B83FC;
    }
    // 0x800B838C: nop

    // 0x800B8390: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800B8394: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B8398: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800B839C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B83A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800B83A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800B83A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800B83AC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800B83B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B83B4: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800B83B8: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800B83BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B83C0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800B83C4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B83C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B83CC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800B83D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B83D4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B83D8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800B83DC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800B83E0: addiu       $t8, $t8, 0x7BC0
    ctx->r24 = ADD32(ctx->r24, 0X7BC0);
    // 0x800B83E4: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800B83E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800B83EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B83F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B83F4: jal         0x8001C0EC
    // 0x800B83F8: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B83F8: addiu       $a3, $zero, 0xEC
    ctx->r7 = ADD32(0, 0XEC);
    after_1:
L_800B83FC:
    // 0x800B83FC: b           L_800B8404
    // 0x800B8400: nop

        goto L_800B8404;
    // 0x800B8400: nop

L_800B8404:
    // 0x800B8404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8408: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800B840C: jr          $ra
    // 0x800B8410: nop

    return;
    // 0x800B8410: nop

;}
RECOMP_FUNC void func_800960B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800960B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800960B8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800960BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800960C0: bne         $t6, $at, L_8009611C
    if (ctx->r14 != ctx->r1) {
        // 0x800960C4: nop
    
            goto L_8009611C;
    }
    // 0x800960C4: nop

    // 0x800960C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800960CC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800960D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800960D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800960D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800960DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800960E0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800960E4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800960E8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800960EC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800960F0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800960F4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800960F8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800960FC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80096100: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80096104: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096108: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009610C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80096110: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80096114: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80096118: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8009611C:
    // 0x8009611C: jr          $ra
    // 0x80096120: nop

    return;
    // 0x80096120: nop

    // 0x80096124: jr          $ra
    // 0x80096128: nop

    return;
    // 0x80096128: nop

;}
RECOMP_FUNC void func_800D6540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D6544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D6548: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D654C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6550: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D6554: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D6558: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D655C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6560: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D6564: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D6568: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D656C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D6570: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D6574: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D6578: beq         $s0, $at, L_800D65AC
    if (ctx->r16 == ctx->r1) {
        // 0x800D657C: nop
    
            goto L_800D65AC;
    }
    // 0x800D657C: nop

    // 0x800D6580: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D6584: beq         $s0, $at, L_800D65BC
    if (ctx->r16 == ctx->r1) {
        // 0x800D6588: nop
    
            goto L_800D65BC;
    }
    // 0x800D6588: nop

    // 0x800D658C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D6590: beq         $s0, $at, L_800D65CC
    if (ctx->r16 == ctx->r1) {
        // 0x800D6594: nop
    
            goto L_800D65CC;
    }
    // 0x800D6594: nop

    // 0x800D6598: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D659C: beq         $s0, $at, L_800D65DC
    if (ctx->r16 == ctx->r1) {
        // 0x800D65A0: nop
    
            goto L_800D65DC;
    }
    // 0x800D65A0: nop

    // 0x800D65A4: b           L_800D65EC
    // 0x800D65A8: nop

        goto L_800D65EC;
    // 0x800D65A8: nop

L_800D65AC:
    // 0x800D65AC: jal         0x800D5938
    // 0x800D65B0: nop

    func_800D5938(rdram, ctx);
        goto after_0;
    // 0x800D65B0: nop

    after_0:
    // 0x800D65B4: b           L_800D65F4
    // 0x800D65B8: nop

        goto L_800D65F4;
    // 0x800D65B8: nop

L_800D65BC:
    // 0x800D65BC: jal         0x800D5AA4
    // 0x800D65C0: nop

    func_800D5AA4(rdram, ctx);
        goto after_1;
    // 0x800D65C0: nop

    after_1:
    // 0x800D65C4: b           L_800D65F4
    // 0x800D65C8: nop

        goto L_800D65F4;
    // 0x800D65C8: nop

L_800D65CC:
    // 0x800D65CC: jal         0x800D613C
    // 0x800D65D0: nop

    func_800D613C(rdram, ctx);
        goto after_2;
    // 0x800D65D0: nop

    after_2:
    // 0x800D65D4: b           L_800D65F4
    // 0x800D65D8: nop

        goto L_800D65F4;
    // 0x800D65D8: nop

L_800D65DC:
    // 0x800D65DC: jal         0x800D63C4
    // 0x800D65E0: nop

    func_800D63C4(rdram, ctx);
        goto after_3;
    // 0x800D65E0: nop

    after_3:
    // 0x800D65E4: b           L_800D65F4
    // 0x800D65E8: nop

        goto L_800D65F4;
    // 0x800D65E8: nop

L_800D65EC:
    // 0x800D65EC: b           L_800D65F4
    // 0x800D65F0: nop

        goto L_800D65F4;
    // 0x800D65F0: nop

L_800D65F4:
    // 0x800D65F4: b           L_800D65FC
    // 0x800D65F8: nop

        goto L_800D65FC;
    // 0x800D65F8: nop

L_800D65FC:
    // 0x800D65FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D6600: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D6604: jr          $ra
    // 0x800D6608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D6608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800FAA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FAA88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FAA8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800FAA90: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800FAA94: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800FAA98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FAA9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FAAA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FAAA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FAAA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAAAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FAAB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FAAB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FAAB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FAABC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FAAC0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800FAAC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAAC8: nop

    // 0x800FAACC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FAAD0: nop

    // 0x800FAAD4: bne         $t1, $zero, L_800FAB88
    if (ctx->r9 != 0) {
        // 0x800FAAD8: nop
    
            goto L_800FAB88;
    }
    // 0x800FAAD8: nop

    // 0x800FAADC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAAE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FAAE4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FAAE8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAAEC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800FAAF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800FAAF4: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800FAAF8: jal         0x80015538
    // 0x800FAAFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x800FAAFC: nop

    after_0:
    // 0x800FAB00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAB04: nop

    // 0x800FAB08: swc1        $f0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f0.u32l;
    // 0x800FAB0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAB10: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x800FAB14: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800FAB18: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAB1C: nop

    // 0x800FAB20: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800FAB24: nop

    // 0x800FAB28: bgez        $t9, L_800FAB38
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800FAB2C: sra         $t0, $t9, 2
        ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
            goto L_800FAB38;
    }
    // 0x800FAB2C: sra         $t0, $t9, 2
    ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
    // 0x800FAB30: addiu       $at, $t9, 0x3
    ctx->r1 = ADD32(ctx->r25, 0X3);
    // 0x800FAB34: sra         $t0, $at, 2
    ctx->r8 = S32(SIGNED(ctx->r1) >> 2);
L_800FAB38:
    // 0x800FAB38: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800FAB3C: nop

    // 0x800FAB40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800FAB44: swc1        $f6, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f6.u32l;
    // 0x800FAB48: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800FAB4C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAB50: nop

    // 0x800FAB54: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x800FAB58: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAB5C: nop

    // 0x800FAB60: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x800FAB64: nop

    // 0x800FAB68: swc1        $f10, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f10.u32l;
    // 0x800FAB6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FAB70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FAB74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FAB78: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x800FAB7C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800FAB80: jal         0x800175F0
    // 0x800FAB84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800FAB84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800FAB88:
    // 0x800FAB88: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800FAB8C: nop

    // 0x800FAB90: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800FAB94: nop

    // 0x800FAB98: bgtz        $t4, L_800FABE8
    if (SIGNED(ctx->r12) > 0) {
        // 0x800FAB9C: nop
    
            goto L_800FABE8;
    }
    // 0x800FAB9C: nop

    // 0x800FABA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800FABA4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FABA8: nop

    // 0x800FABAC: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x800FABB0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FABB4: nop

    // 0x800FABB8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800FABBC: nop

    // 0x800FABC0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800FABC4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800FABC8: nop

    // 0x800FABCC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800FABD0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FABD4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FABD8: jal         0x8002B0E4
    // 0x800FABDC: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800FABDC: nop

    after_2:
    // 0x800FABE0: b           L_800FAC44
    // 0x800FABE4: nop

        goto L_800FAC44;
    // 0x800FABE4: nop

L_800FABE8:
    // 0x800FABE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FABEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FABF0: jal         0x80029D04
    // 0x800FABF4: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800FABF4: nop

    after_3:
    // 0x800FABF8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800FABFC: nop

    // 0x800FAC00: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800FAC04: lwc1        $f6, 0x48($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X48);
    // 0x800FAC08: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x800FAC0C: nop

    // 0x800FAC10: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800FAC14: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800FAC18: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800FAC1C: nop

    // 0x800FAC20: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800FAC24: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800FAC28: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800FAC2C: nop

    // 0x800FAC30: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800FAC34: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x800FAC38: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800FAC3C: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800FAC40: nop

L_800FAC44:
    // 0x800FAC44: b           L_800FAC4C
    // 0x800FAC48: nop

        goto L_800FAC4C;
    // 0x800FAC48: nop

L_800FAC4C:
    // 0x800FAC4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800FAC50: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800FAC54: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800FAC58: jr          $ra
    // 0x800FAC5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800FAC5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A5D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A5D18: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800A5D1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A5D20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A5D24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A5D28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A5D2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5D30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A5D34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A5D38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A5D3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A5D40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A5D44: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800A5D48: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A5D4C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800A5D50: nop

    // 0x800A5D54: bne         $t0, $zero, L_800A5D6C
    if (ctx->r8 != 0) {
        // 0x800A5D58: nop
    
            goto L_800A5D6C;
    }
    // 0x800A5D58: nop

    // 0x800A5D5C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x800A5D60: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800A5D64: b           L_800A5D98
    // 0x800A5D68: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
        goto L_800A5D98;
    // 0x800A5D68: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
L_800A5D6C:
    // 0x800A5D6C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800A5D70: lw          $t3, 0x7A64($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A64);
    // 0x800A5D74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A5D78: bne         $t3, $at, L_800A5D90
    if (ctx->r11 != ctx->r1) {
        // 0x800A5D7C: nop
    
            goto L_800A5D90;
    }
    // 0x800A5D7C: nop

    // 0x800A5D80: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800A5D84: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x800A5D88: b           L_800A5D98
    // 0x800A5D8C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
        goto L_800A5D98;
    // 0x800A5D8C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
L_800A5D90:
    // 0x800A5D90: b           L_800A5DAC
    // 0x800A5D94: nop

        goto L_800A5DAC;
    // 0x800A5D94: nop

L_800A5D98:
    // 0x800A5D98: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800A5D9C: nop

    // 0x800A5DA0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800A5DA4: b           L_800A5DAC
    // 0x800A5DA8: nop

        goto L_800A5DAC;
    // 0x800A5DA8: nop

L_800A5DAC:
    // 0x800A5DAC: jr          $ra
    // 0x800A5DB0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800A5DB0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8009D558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D558: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009D55C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009D560: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009D564: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8009D568: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009D56C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009D570: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009D574: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009D578: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8009D57C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009D580: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009D584: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009D588: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009D58C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009D590: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009D594: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009D598: addiu       $a1, $a1, 0x35BC
    ctx->r5 = ADD32(ctx->r5, 0X35BC);
    // 0x8009D59C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009D5A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009D5A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009D5A8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8009D5AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009D5B0: jal         0x80027464
    // 0x8009D5B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009D5B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009D5B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8009D5BC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009D5C0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009D5C4: addiu       $a3, $a3, 0x6AB8
    ctx->r7 = ADD32(ctx->r7, 0X6AB8);
    // 0x8009D5C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009D5CC: jal         0x8001ABF4
    // 0x8009D5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009D5D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009D5D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8009D5D8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8009D5DC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8009D5E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009D5E4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8009D5E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009D5EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8009D5F0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009D5F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009D5F8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8009D5FC: swc1        $f4, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f4.u32l;
    // 0x8009D600: b           L_8009D608
    // 0x8009D604: nop

        goto L_8009D608;
    // 0x8009D604: nop

L_8009D608:
    // 0x8009D608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D60C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009D610: jr          $ra
    // 0x8009D614: nop

    return;
    // 0x8009D614: nop

;}
RECOMP_FUNC void func_800B271C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B271C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800B2720: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B2724: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B2728: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B272C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B2730: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B2734: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B2738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B273C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B2740: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B2744: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B2748: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B274C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B2750: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x800B2754: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2758: nop

    // 0x800B275C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B2760: nop

    // 0x800B2764: bne         $t1, $zero, L_800B27D0
    if (ctx->r9 != 0) {
        // 0x800B2768: nop
    
            goto L_800B27D0;
    }
    // 0x800B2768: nop

    // 0x800B276C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2770: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B2774: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B2778: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800B277C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B2780: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2784: nop

    // 0x800B2788: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B278C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800B2790: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B2794: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2798: nop

    // 0x800B279C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800B27A0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B27A4: lwc1        $f8, 0x4B50($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4B50);
    // 0x800B27A8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x800B27AC: nop

    // 0x800B27B0: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800B27B4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800B27B8: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x800B27BC: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x800B27C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B27C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B27C8: jal         0x8001BB34
    // 0x800B27CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800B27CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_800B27D0:
    // 0x800B27D0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800B27D4: nop

    // 0x800B27D8: lwc1        $f10, 0x3C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800B27DC: nop

    // 0x800B27E0: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x800B27E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B27E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B27EC: jal         0x80029C40
    // 0x800B27F0: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800B27F0: nop

    after_1:
    // 0x800B27F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B27F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B27FC: jal         0x80029D04
    // 0x800B2800: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B2800: nop

    after_2:
    // 0x800B2804: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B2808: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B280C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2810: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B2818: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B281C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B2820: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800B2824: jal         0x80029018
    // 0x800B2828: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800B2828: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800B282C: beq         $v0, $zero, L_800B28AC
    if (ctx->r2 == 0) {
        // 0x800B2830: nop
    
            goto L_800B28AC;
    }
    // 0x800B2830: nop

    // 0x800B2834: jal         0x800297DC
    // 0x800B2838: nop

    func_800297DC(rdram, ctx);
        goto after_4;
    // 0x800B2838: nop

    after_4:
    // 0x800B283C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2844: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B2848: jal         0x80029824
    // 0x800B284C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_5;
    // 0x800B284C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800B2850: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2854: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2858: jal         0x80029C40
    // 0x800B285C: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800B285C: nop

    after_6:
    // 0x800B2860: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2864: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B2868: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B286C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2870: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B2874: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B2878: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B287C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800B2880: jal         0x80029018
    // 0x800B2884: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x800B2884: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800B2888: beq         $v0, $zero, L_800B28AC
    if (ctx->r2 == 0) {
        // 0x800B288C: nop
    
            goto L_800B28AC;
    }
    // 0x800B288C: nop

    // 0x800B2890: jal         0x800297DC
    // 0x800B2894: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800B2894: nop

    after_8:
    // 0x800B2898: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B289C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B28A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B28A4: jal         0x80029824
    // 0x800B28A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800B28A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_800B28AC:
    // 0x800B28AC: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800B28B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B28B4: lh          $t1, 0xB4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB4);
    // 0x800B28B8: nop

    // 0x800B28BC: bne         $t1, $at, L_800B2928
    if (ctx->r9 != ctx->r1) {
        // 0x800B28C0: nop
    
            goto L_800B2928;
    }
    // 0x800B28C0: nop

    // 0x800B28C4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x800B28C8: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800B28CC: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800B28D0: lwc1        $f10, 0x2C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800B28D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B28D8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800B28DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x800B28E0: nop

    // 0x800B28E4: bc1f        L_800B2928
    if (!c1cs) {
        // 0x800B28E8: nop
    
            goto L_800B2928;
    }
    // 0x800B28E8: nop

    // 0x800B28EC: jal         0x800297DC
    // 0x800B28F0: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800B28F0: nop

    after_10:
    // 0x800B28F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B28F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B28FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B2900: jal         0x80029824
    // 0x800B2904: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800B2904: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800B2908: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B290C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2910: nop

    // 0x800B2914: swc1        $f4, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f4.u32l;
    // 0x800B2918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B291C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2920: nop

    // 0x800B2924: swc1        $f6, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f6.u32l;
L_800B2928:
    // 0x800B2928: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800B292C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B2930: lh          $t6, 0xB4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB4);
    // 0x800B2934: nop

    // 0x800B2938: bne         $t6, $at, L_800B29A4
    if (ctx->r14 != ctx->r1) {
        // 0x800B293C: nop
    
            goto L_800B29A4;
    }
    // 0x800B293C: nop

    // 0x800B2940: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2944: lui         $at, 0xC516
    ctx->r1 = S32(0XC516 << 16);
    // 0x800B2948: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x800B294C: lwc1        $f10, 0x2C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x800B2950: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800B2954: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800B2958: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800B295C: nop

    // 0x800B2960: bc1f        L_800B29A4
    if (!c1cs) {
        // 0x800B2964: nop
    
            goto L_800B29A4;
    }
    // 0x800B2964: nop

    // 0x800B2968: jal         0x800297DC
    // 0x800B296C: nop

    func_800297DC(rdram, ctx);
        goto after_12;
    // 0x800B296C: nop

    after_12:
    // 0x800B2970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2978: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B297C: jal         0x80029824
    // 0x800B2980: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_13;
    // 0x800B2980: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x800B2984: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2988: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800B298C: nop

    // 0x800B2990: swc1        $f4, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f4.u32l;
    // 0x800B2994: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B2998: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800B299C: nop

    // 0x800B29A0: swc1        $f6, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f6.u32l;
L_800B29A4:
    // 0x800B29A4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800B29A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B29AC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B29B0: nop

    // 0x800B29B4: bne         $t1, $at, L_800B2A94
    if (ctx->r9 != ctx->r1) {
        // 0x800B29B8: nop
    
            goto L_800B2A94;
    }
    // 0x800B29B8: nop

    // 0x800B29BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B29C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B29C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B29C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B29CC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800B29D0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800B29D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B29D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B29DC: jal         0x800295C0
    // 0x800B29E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_14;
    // 0x800B29E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x800B29E4: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x800B29E8: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x800B29EC: nop

    // 0x800B29F0: beq         $t2, $zero, L_800B2A94
    if (ctx->r10 == 0) {
        // 0x800B29F4: nop
    
            goto L_800B2A94;
    }
    // 0x800B29F4: nop

    // 0x800B29F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B29FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A00: nop

    // 0x800B2A04: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x800B2A08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800B2A0C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A10: nop

    // 0x800B2A14: swc1        $f18, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f18.u32l;
    // 0x800B2A18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B2A1C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A20: nop

    // 0x800B2A24: swc1        $f4, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f4.u32l;
    // 0x800B2A28: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A2C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x800B2A30: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B2A34: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A38: nop

    // 0x800B2A3C: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
    // 0x800B2A40: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A44: nop

    // 0x800B2A48: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
    // 0x800B2A4C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800B2A50: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800B2A54: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
    // 0x800B2A58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2A5C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800B2A60: addiu       $t2, $t2, 0x7884
    ctx->r10 = ADD32(ctx->r10, 0X7884);
    // 0x800B2A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2A68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800B2A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B2A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B2A74: jal         0x8001C0EC
    // 0x800B2A78: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_15;
    // 0x800B2A78: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_15:
    // 0x800B2A7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B2A80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B2A84: lui         $a1, 0x41C0
    ctx->r5 = S32(0X41C0 << 16);
    // 0x800B2A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B2A8C: jal         0x800296AC
    // 0x800B2A90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800296AC(rdram, ctx);
        goto after_16;
    // 0x800B2A90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
L_800B2A94:
    // 0x800B2A94: b           L_800B2A9C
    // 0x800B2A98: nop

        goto L_800B2A9C;
    // 0x800B2A98: nop

L_800B2A9C:
    // 0x800B2A9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B2AA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B2AA4: jr          $ra
    // 0x800B2AA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800B2AA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800F6A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6A54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F6A58: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800F6A5C: nop

    // 0x800F6A60: bne         $t6, $zero, L_800F6A98
    if (ctx->r14 != 0) {
        // 0x800F6A64: nop
    
            goto L_800F6A98;
    }
    // 0x800F6A64: nop

    // 0x800F6A68: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F6A6C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F6A70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6A74: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F6A78: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F6A7C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F6A80: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F6A84: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F6A88: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F6A8C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800F6A90: b           L_800F6B08
    // 0x800F6A94: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_800F6B08;
    // 0x800F6A94: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_800F6A98:
    // 0x800F6A98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F6A9C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800F6AA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F6AA4: bne         $t0, $at, L_800F6ADC
    if (ctx->r8 != ctx->r1) {
        // 0x800F6AA8: nop
    
            goto L_800F6ADC;
    }
    // 0x800F6AA8: nop

    // 0x800F6AAC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800F6AB0: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800F6AB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6AB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F6ABC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F6AC0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F6AC4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F6AC8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F6ACC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800F6AD0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x800F6AD4: b           L_800F6B08
    // 0x800F6AD8: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_800F6B08;
    // 0x800F6AD8: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_800F6ADC:
    // 0x800F6ADC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800F6AE0: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x800F6AE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6AE8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800F6AEC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F6AF0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F6AF4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800F6AF8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F6AFC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F6B00: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x800F6B04: sh          $t4, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r12;
L_800F6B08:
    // 0x800F6B08: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F6B0C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F6B10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6B14: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x800F6B18: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800F6B1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F6B20: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800F6B24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F6B28: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F6B2C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800F6B30: jr          $ra
    // 0x800F6B34: nop

    return;
    // 0x800F6B34: nop

    // 0x800F6B38: jr          $ra
    // 0x800F6B3C: nop

    return;
    // 0x800F6B3C: nop

;}
RECOMP_FUNC void func_800F69DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F69DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F69E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F69E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F69E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F69EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F69F0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F69F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F69F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F69FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F6A00: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F6A04: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F6A08: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F6A0C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F6A10: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F6A14: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F6A18: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F6A1C: addiu       $a1, $a1, 0x3760
    ctx->r5 = ADD32(ctx->r5, 0X3760);
    // 0x800F6A20: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F6A24: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F6A28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F6A2C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F6A30: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F6A34: jal         0x80027464
    // 0x800F6A38: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F6A38: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F6A3C: b           L_800F6A44
    // 0x800F6A40: nop

        goto L_800F6A44;
    // 0x800F6A40: nop

L_800F6A44:
    // 0x800F6A44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6A48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F6A4C: jr          $ra
    // 0x800F6A50: nop

    return;
    // 0x800F6A50: nop

;}
