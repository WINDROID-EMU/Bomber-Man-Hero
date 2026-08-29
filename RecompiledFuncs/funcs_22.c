#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8009409C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009409C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800940A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800940A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800940A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800940AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800940B0: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800940B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800940B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800940BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800940C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800940C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800940C8: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800940CC: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800940D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800940D4: beq         $s0, $at, L_800940F0
    if (ctx->r16 == ctx->r1) {
        // 0x800940D8: nop
    
            goto L_800940F0;
    }
    // 0x800940D8: nop

    // 0x800940DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800940E0: beq         $s0, $at, L_80094100
    if (ctx->r16 == ctx->r1) {
        // 0x800940E4: nop
    
            goto L_80094100;
    }
    // 0x800940E4: nop

    // 0x800940E8: b           L_80094110
    // 0x800940EC: nop

        goto L_80094110;
    // 0x800940EC: nop

L_800940F0:
    // 0x800940F0: jal         0x80093B64
    // 0x800940F4: nop

    func_80093B64(rdram, ctx);
        goto after_0;
    // 0x800940F4: nop

    after_0:
    // 0x800940F8: b           L_80094110
    // 0x800940FC: nop

        goto L_80094110;
    // 0x800940FC: nop

L_80094100:
    // 0x80094100: jal         0x80093F30
    // 0x80094104: nop

    func_80093F30(rdram, ctx);
        goto after_1;
    // 0x80094104: nop

    after_1:
    // 0x80094108: b           L_80094110
    // 0x8009410C: nop

        goto L_80094110;
    // 0x8009410C: nop

L_80094110:
    // 0x80094110: b           L_80094118
    // 0x80094114: nop

        goto L_80094118;
    // 0x80094114: nop

L_80094118:
    // 0x80094118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009411C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80094120: jr          $ra
    // 0x80094124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80094124: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void Skybox_GetWidthHeight(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C3D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006C3D4: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x8006C3D8: lw          $t7, 0xC0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC0);
    // 0x8006C3DC: nop

    // 0x8006C3E0: lbu         $t9, 0x9($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X9);
    // 0x8006C3E4: lbu         $t8, 0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X8);
    // 0x8006C3E8: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x8006C3EC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8006C3F0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8006C3F4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006C3F8: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x8006C3FC: lw          $t3, 0xC0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XC0);
    // 0x8006C400: nop

    // 0x8006C404: lbu         $t5, 0xD($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0XD);
    // 0x8006C408: lbu         $t4, 0xC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XC);
    // 0x8006C40C: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x8006C410: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8006C414: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8006C418: jr          $ra
    // 0x8006C41C: nop

    return;
    // 0x8006C41C: nop

    // 0x8006C420: jr          $ra
    // 0x8006C424: nop

    return;
    // 0x8006C424: nop

;}
RECOMP_FUNC void func_800925E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800925E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800925E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800925EC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800925F0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800925F4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800925F8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800925FC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092600: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092604: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092608: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009260C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092610: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092614: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092618: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009261C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092620: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092624: addiu       $a1, $a1, 0x16D8
    ctx->r5 = ADD32(ctx->r5, 0X16D8);
    // 0x80092628: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009262C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092630: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092634: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092638: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009263C: jal         0x80027464
    // 0x80092640: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092640: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092644: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092648: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8009264C: addiu       $t1, $t1, 0x3134
    ctx->r9 = ADD32(ctx->r9, 0X3134);
    // 0x80092650: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80092654: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80092658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009265C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80092660: jal         0x8001C0EC
    // 0x80092664: addiu       $a3, $zero, 0x26E
    ctx->r7 = ADD32(0, 0X26E);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80092664: addiu       $a3, $zero, 0x26E
    ctx->r7 = ADD32(0, 0X26E);
    after_1:
    // 0x80092668: b           L_80092670
    // 0x8009266C: nop

        goto L_80092670;
    // 0x8009266C: nop

L_80092670:
    // 0x80092670: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092674: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092678: jr          $ra
    // 0x8009267C: nop

    return;
    // 0x8009267C: nop

;}
RECOMP_FUNC void ByteParser_SetObjectScale(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008EF8C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008EF90: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008EF94: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8008EF98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008EF9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008EFA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008EFA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008EFA8: lw          $t8, 0x4D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4D48);
    // 0x8008EFAC: nop

    // 0x8008EFB0: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8008EFB4: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x8008EFB8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008EFBC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008EFC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008EFC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008EFC8: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008EFCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008EFD0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8008EFD4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008EFD8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008EFDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008EFE0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008EFE4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008EFE8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008EFEC: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x8008EFF0: lh          $t2, 0x4($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X4);
    // 0x8008EFF4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008EFF8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8008EFFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008F000: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008F004: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8008F008: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008F00C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8008F010: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008F014: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008F018: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008F01C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008F020: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8008F024: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8008F028: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x8008F02C: lh          $t5, 0x6($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X6);
    // 0x8008F030: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008F034: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x8008F038: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008F03C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008F040: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8008F044: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8008F048: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8008F04C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008F050: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F054: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008F058: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F05C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008F060: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8008F064: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x8008F068: b           L_8008F070
    // 0x8008F06C: nop

        goto L_8008F070;
    // 0x8008F06C: nop

L_8008F070:
    // 0x8008F070: jr          $ra
    // 0x8008F074: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008F074: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800BA7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BA7C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BA7C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BA7C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BA7CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BA7D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BA7D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BA7D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA7DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BA7E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BA7E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BA7E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BA7EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BA7F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BA7F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BA7F8: nop

    // 0x800BA7FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BA800: nop

    // 0x800BA804: bne         $t1, $zero, L_800BA884
    if (ctx->r9 != 0) {
        // 0x800BA808: nop
    
            goto L_800BA884;
    }
    // 0x800BA808: nop

    // 0x800BA80C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BA810: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BA814: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BA818: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BA81C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BA820: nop

    // 0x800BA824: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BA828: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800BA82C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BA830: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BA834: nop

    // 0x800BA838: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BA83C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800BA840: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BA844: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BA848: nop

    // 0x800BA84C: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800BA850: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA854: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800BA858: addiu       $t7, $t7, 0x7E20
    ctx->r15 = ADD32(ctx->r15, 0X7E20);
    // 0x800BA85C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA860: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800BA864: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800BA868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800BA86C: jal         0x8001C0EC
    // 0x800BA870: addiu       $a3, $zero, 0xF4
    ctx->r7 = ADD32(0, 0XF4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800BA870: addiu       $a3, $zero, 0xF4
    ctx->r7 = ADD32(0, 0XF4);
    after_0:
    // 0x800BA874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA87C: jal         0x800272E8
    // 0x800BA880: nop

    func_800272E8(rdram, ctx);
        goto after_1;
    // 0x800BA880: nop

    after_1:
L_800BA884:
    // 0x800BA884: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA888: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA88C: jal         0x80029C40
    // 0x800BA890: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BA890: nop

    after_2:
    // 0x800BA894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BA898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BA89C: jal         0x80029D04
    // 0x800BA8A0: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800BA8A0: nop

    after_3:
    // 0x800BA8A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BA8A8: nop

    // 0x800BA8AC: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800BA8B0: nop

    // 0x800BA8B4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BA8B8: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
    // 0x800BA8BC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BA8C0: nop

    // 0x800BA8C4: lh          $t2, 0xB2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB2);
    // 0x800BA8C8: nop

    // 0x800BA8CC: bgtz        $t2, L_800BA8EC
    if (SIGNED(ctx->r10) > 0) {
        // 0x800BA8D0: nop
    
            goto L_800BA8EC;
    }
    // 0x800BA8D0: nop

    // 0x800BA8D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BA8D8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800BA8DC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800BA8E0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BA8E4: nop

    // 0x800BA8E8: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800BA8EC:
    // 0x800BA8EC: b           L_800BA8F4
    // 0x800BA8F0: nop

        goto L_800BA8F4;
    // 0x800BA8F0: nop

L_800BA8F4:
    // 0x800BA8F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BA8F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BA8FC: jr          $ra
    // 0x800BA900: nop

    return;
    // 0x800BA900: nop

;}
RECOMP_FUNC void func_800675DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800675DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800675E0: addiu       $t6, $t6, 0x76F0
    ctx->r14 = ADD32(ctx->r14, 0X76F0);
    // 0x800675E4: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x800675E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800675EC: addiu       $t8, $t8, 0x7700
    ctx->r24 = ADD32(ctx->r24, 0X7700);
    // 0x800675F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800675F4: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x800675F8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800675FC: addiu       $t9, $t9, 0x7710
    ctx->r25 = ADD32(ctx->r25, 0X7710);
    // 0x80067600: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80067604: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80067608: addiu       $t1, $t1, 0x7720
    ctx->r9 = ADD32(ctx->r9, 0X7720);
    // 0x8006760C: addiu       $t0, $zero, -0x7530
    ctx->r8 = ADD32(0, -0X7530);
    // 0x80067610: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80067614: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80067618: addiu       $t3, $t3, 0x7730
    ctx->r11 = ADD32(ctx->r11, 0X7730);
    // 0x8006761C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80067620: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x80067624: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80067628: lwc1        $f4, 0x4F70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F70);
    // 0x8006762C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80067630: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x80067634: swc1        $f4, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f4.u32l;
    // 0x80067638: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006763C: addiu       $t6, $t6, 0x7740
    ctx->r14 = ADD32(ctx->r14, 0X7740);
    // 0x80067640: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80067644: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80067648: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006764C: addiu       $t7, $t7, 0x7750
    ctx->r15 = ADD32(ctx->r15, 0X7750);
    // 0x80067650: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80067654: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80067658: addiu       $t9, $t9, 0x7770
    ctx->r25 = ADD32(ctx->r25, 0X7770);
    // 0x8006765C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80067660: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80067664: jr          $ra
    // 0x80067668: nop

    return;
    // 0x80067668: nop

    // 0x8006766C: jr          $ra
    // 0x80067670: nop

    return;
    // 0x80067670: nop

;}
RECOMP_FUNC void func_800F9DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9DE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9DE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F9DE8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F9DEC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F9DF0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F9DF4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F9DF8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9DFC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F9E00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F9E04: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F9E08: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F9E0C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F9E10: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F9E14: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9E18: nop

    // 0x800F9E1C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F9E20: nop

    // 0x800F9E24: bne         $t1, $zero, L_800F9E94
    if (ctx->r9 != 0) {
        // 0x800F9E28: nop
    
            goto L_800F9E94;
    }
    // 0x800F9E28: nop

    // 0x800F9E2C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9E30: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F9E34: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F9E38: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F9E3C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x800F9E40: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x800F9E44: nop

    // 0x800F9E48: bne         $t5, $at, L_800F9E5C
    if (ctx->r13 != ctx->r1) {
        // 0x800F9E4C: nop
    
            goto L_800F9E5C;
    }
    // 0x800F9E4C: nop

    // 0x800F9E50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F9E54: b           L_800F9E60
    // 0x800F9E58: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
        goto L_800F9E60;
    // 0x800F9E58: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_800F9E5C:
    // 0x800F9E5C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_800F9E60:
    // 0x800F9E60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9E64: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F9E68: addiu       $t7, $t7, -0x4574
    ctx->r15 = ADD32(ctx->r15, -0X4574);
    // 0x800F9E6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9E70: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800F9E74: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F9E78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9E7C: jal         0x8001C0EC
    // 0x800F9E80: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F9E80: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    after_0:
    // 0x800F9E84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9E88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9E8C: jal         0x8001BBDC
    // 0x800F9E90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800F9E90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800F9E94:
    // 0x800F9E94: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F9E98: nop

    // 0x800F9E9C: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800F9EA0: nop

    // 0x800F9EA4: bne         $t9, $zero, L_800F9F64
    if (ctx->r25 != 0) {
        // 0x800F9EA8: nop
    
            goto L_800F9F64;
    }
    // 0x800F9EA8: nop

    // 0x800F9EAC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9EB0: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x800F9EB4: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x800F9EB8: nop

    // 0x800F9EBC: bne         $t1, $at, L_800F9F18
    if (ctx->r9 != ctx->r1) {
        // 0x800F9EC0: nop
    
            goto L_800F9F18;
    }
    // 0x800F9EC0: nop

    // 0x800F9EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9ECC: jal         0x8002A1FC
    // 0x800F9ED0: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800F9ED0: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_2:
    // 0x800F9ED4: bne         $v0, $zero, L_800F9F10
    if (ctx->r2 != 0) {
        // 0x800F9ED8: nop
    
            goto L_800F9F10;
    }
    // 0x800F9ED8: nop

    // 0x800F9EDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9EE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F9EE4: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800F9EE8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F9EEC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F9EF0: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x800F9EF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9EF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9F00: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x800F9F04: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F9F08: jal         0x800175F0
    // 0x800F9F0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_3;
    // 0x800F9F0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
L_800F9F10:
    // 0x800F9F10: b           L_800F9F64
    // 0x800F9F14: nop

        goto L_800F9F64;
    // 0x800F9F14: nop

L_800F9F18:
    // 0x800F9F18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9F1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9F20: jal         0x8002A1FC
    // 0x800F9F24: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_4;
    // 0x800F9F24: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_4:
    // 0x800F9F28: beq         $v0, $zero, L_800F9F64
    if (ctx->r2 == 0) {
        // 0x800F9F2C: nop
    
            goto L_800F9F64;
    }
    // 0x800F9F2C: nop

    // 0x800F9F30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F9F34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F9F38: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800F9F3C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F9F40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800F9F44: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800F9F48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9F4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9F54: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x800F9F58: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800F9F5C: jal         0x800175F0
    // 0x800F9F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_5;
    // 0x800F9F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
L_800F9F64:
    // 0x800F9F64: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F9F68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9F6C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800F9F70: nop

    // 0x800F9F74: bne         $t1, $at, L_800F9FEC
    if (ctx->r9 != ctx->r1) {
        // 0x800F9F78: nop
    
            goto L_800F9FEC;
    }
    // 0x800F9F78: nop

    // 0x800F9F7C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F9F80: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800F9F84: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
    // 0x800F9F88: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F9F8C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x800F9F90: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x800F9F94: nop

    // 0x800F9F98: bne         $t5, $at, L_800F9FAC
    if (ctx->r13 != ctx->r1) {
        // 0x800F9F9C: nop
    
            goto L_800F9FAC;
    }
    // 0x800F9F9C: nop

    // 0x800F9FA0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F9FA4: b           L_800F9FB0
    // 0x800F9FA8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
        goto L_800F9FB0;
    // 0x800F9FA8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_800F9FAC:
    // 0x800F9FAC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_800F9FB0:
    // 0x800F9FB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9FB4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800F9FB8: addiu       $t7, $t7, -0x4574
    ctx->r15 = ADD32(ctx->r15, -0X4574);
    // 0x800F9FBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9FC0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800F9FC4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800F9FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F9FCC: jal         0x8001C0EC
    // 0x800F9FD0: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    func_8001C0EC(rdram, ctx);
        goto after_6;
    // 0x800F9FD0: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    after_6:
    // 0x800F9FD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F9FD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F9FDC: jal         0x8001BBDC
    // 0x800F9FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x800F9FE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800F9FE4: b           L_800FA0C4
    // 0x800F9FE8: nop

        goto L_800FA0C4;
    // 0x800F9FE8: nop

L_800F9FEC:
    // 0x800F9FEC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F9FF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F9FF4: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800F9FF8: nop

    // 0x800F9FFC: bne         $t9, $at, L_800FA0C4
    if (ctx->r25 != ctx->r1) {
        // 0x800FA000: nop
    
            goto L_800FA0C4;
    }
    // 0x800FA000: nop

    // 0x800FA004: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA008: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA00C: jal         0x8001B44C
    // 0x800FA010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_8;
    // 0x800FA010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x800FA014: beq         $v0, $zero, L_800FA0C4
    if (ctx->r2 == 0) {
        // 0x800FA018: nop
    
            goto L_800FA0C4;
    }
    // 0x800FA018: nop

    // 0x800FA01C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FA020: nop

    // 0x800FA024: sh          $zero, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = 0;
    // 0x800FA028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA02C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA030: jal         0x8001BBDC
    // 0x800FA034: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_9;
    // 0x800FA034: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x800FA038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA03C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA040: jal         0x800261E8
    // 0x800FA044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800261E8(rdram, ctx);
        goto after_10;
    // 0x800FA044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800FA048: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800FA04C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x800FA050: lh          $t2, 0xE4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE4);
    // 0x800FA054: nop

    // 0x800FA058: bne         $t2, $at, L_800FA094
    if (ctx->r10 != ctx->r1) {
        // 0x800FA05C: nop
    
            goto L_800FA094;
    }
    // 0x800FA05C: nop

    // 0x800FA060: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA064: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800FA068: addiu       $t3, $t3, -0x4574
    ctx->r11 = ADD32(ctx->r11, -0X4574);
    // 0x800FA06C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA070: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800FA074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FA07C: jal         0x8001C0EC
    // 0x800FA080: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    func_8001C0EC(rdram, ctx);
        goto after_11;
    // 0x800FA080: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    after_11:
    // 0x800FA084: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FA088: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x800FA08C: b           L_800FA0C4
    // 0x800FA090: sh          $t4, 0xE4($t5)
    MEM_H(0XE4, ctx->r13) = ctx->r12;
        goto L_800FA0C4;
    // 0x800FA090: sh          $t4, 0xE4($t5)
    MEM_H(0XE4, ctx->r13) = ctx->r12;
L_800FA094:
    // 0x800FA094: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FA098: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800FA09C: addiu       $t6, $t6, -0x4574
    ctx->r14 = ADD32(ctx->r14, -0X4574);
    // 0x800FA0A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FA0A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800FA0A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FA0AC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800FA0B0: jal         0x8001C0EC
    // 0x800FA0B4: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x800FA0B4: addiu       $a3, $zero, 0xBF
    ctx->r7 = ADD32(0, 0XBF);
    after_12:
    // 0x800FA0B8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FA0BC: addiu       $t7, $zero, 0x4F
    ctx->r15 = ADD32(0, 0X4F);
    // 0x800FA0C0: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
L_800FA0C4:
    // 0x800FA0C4: b           L_800FA0CC
    // 0x800FA0C8: nop

        goto L_800FA0CC;
    // 0x800FA0C8: nop

L_800FA0CC:
    // 0x800FA0CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FA0D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FA0D4: jr          $ra
    // 0x800FA0D8: nop

    return;
    // 0x800FA0D8: nop

;}
RECOMP_FUNC void func_800BC2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BC2C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800BC2CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800BC2D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800BC2D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800BC2D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BC2DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BC2E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BC2E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BC2E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC2EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BC2F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BC2F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BC2F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BC2FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BC300: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800BC304: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC308: nop

    // 0x800BC30C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BC310: nop

    // 0x800BC314: bne         $t1, $zero, L_800BC378
    if (ctx->r9 != 0) {
        // 0x800BC318: nop
    
            goto L_800BC378;
    }
    // 0x800BC318: nop

    // 0x800BC31C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC320: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BC324: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BC328: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BC32C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC330: nop

    // 0x800BC334: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BC338: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BC33C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC340: nop

    // 0x800BC344: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BC348: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC34C: nop

    // 0x800BC350: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800BC354: jal         0x800BC86C
    // 0x800BC358: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BC86C(rdram, ctx);
        goto after_0;
    // 0x800BC358: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800BC35C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC360: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BC368: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800BC36C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800BC370: jal         0x800175F0
    // 0x800BC374: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800BC374: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800BC378:
    // 0x800BC378: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC37C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800BC380: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800BC384: nop

    // 0x800BC388: bne         $t8, $at, L_800BC3DC
    if (ctx->r24 != ctx->r1) {
        // 0x800BC38C: nop
    
            goto L_800BC3DC;
    }
    // 0x800BC38C: nop

    // 0x800BC390: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC394: nop

    // 0x800BC398: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x800BC39C: nop

    // 0x800BC3A0: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800BC3A4: nop

    // 0x800BC3A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BC3AC: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
    // 0x800BC3B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC3B4: nop

    // 0x800BC3B8: lh          $t2, 0xB0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB0);
    // 0x800BC3BC: nop

    // 0x800BC3C0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800BC3C4: nop

    // 0x800BC3C8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800BC3CC: swc1        $f18, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f18.u32l;
    // 0x800BC3D0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC3D4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800BC3D8: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_800BC3DC:
    // 0x800BC3DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC3E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC3E4: jal         0x80029C40
    // 0x800BC3E8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BC3E8: nop

    after_2:
    // 0x800BC3EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BC3F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BC3F4: jal         0x80029D04
    // 0x800BC3F8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800BC3F8: nop

    after_3:
    // 0x800BC3FC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC400: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800BC404: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800BC408: nop

    // 0x800BC40C: bne         $t6, $at, L_800BC650
    if (ctx->r14 != ctx->r1) {
        // 0x800BC410: nop
    
            goto L_800BC650;
    }
    // 0x800BC410: nop

    // 0x800BC414: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC418: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BC41C: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800BC420: nop

    // 0x800BC424: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800BC428: nop

    // 0x800BC42C: bc1f        L_800BC488
    if (!c1cs) {
        // 0x800BC430: nop
    
            goto L_800BC488;
    }
    // 0x800BC430: nop

    // 0x800BC434: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC438: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800BC43C: lwc1        $f8, 0xC($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800BC440: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800BC444: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800BC448: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800BC44C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x800BC450: nop

    // 0x800BC454: bc1f        L_800BC480
    if (!c1cs) {
        // 0x800BC458: nop
    
            goto L_800BC480;
    }
    // 0x800BC458: nop

    // 0x800BC45C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC460: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BC464: lwc1        $f18, 0xC($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800BC468: lwc1        $f7, 0x4C80($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4C80);
    // 0x800BC46C: lwc1        $f6, 0x4C84($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4C84);
    // 0x800BC470: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800BC474: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800BC478: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800BC47C: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
L_800BC480:
    // 0x800BC480: b           L_800BC4D4
    // 0x800BC484: nop

        goto L_800BC4D4;
    // 0x800BC484: nop

L_800BC488:
    // 0x800BC488: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC48C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BC490: lwc1        $f16, 0xC($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800BC494: lwc1        $f5, 0x4C88($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4C88);
    // 0x800BC498: lwc1        $f4, 0x4C8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4C8C);
    // 0x800BC49C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800BC4A0: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x800BC4A4: nop

    // 0x800BC4A8: bc1f        L_800BC4D4
    if (!c1cs) {
        // 0x800BC4AC: nop
    
            goto L_800BC4D4;
    }
    // 0x800BC4AC: nop

    // 0x800BC4B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC4B4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800BC4B8: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800BC4BC: lwc1        $f11, 0x4C90($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4C90);
    // 0x800BC4C0: lwc1        $f10, 0x4C94($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4C94);
    // 0x800BC4C4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800BC4C8: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x800BC4CC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800BC4D0: swc1        $f18, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f18.u32l;
L_800BC4D4:
    // 0x800BC4D4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC4D8: nop

    // 0x800BC4DC: lwc1        $f20, 0xC($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0XC);
    // 0x800BC4E0: nop

    // 0x800BC4E4: swc1        $f20, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f20.u32l;
    // 0x800BC4E8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC4EC: nop

    // 0x800BC4F0: swc1        $f20, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f20.u32l;
    // 0x800BC4F4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC4F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800BC4FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800BC500: lwc1        $f12, 0x40($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X40);
    // 0x800BC504: jal         0x80015538
    // 0x800BC508: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800BC508: nop

    after_4:
    // 0x800BC50C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC510: nop

    // 0x800BC514: swc1        $f0, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f0.u32l;
    // 0x800BC518: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC51C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800BC520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800BC524: lwc1        $f4, 0x40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X40);
    // 0x800BC528: nop

    // 0x800BC52C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x800BC530: nop

    // 0x800BC534: bc1f        L_800BC550
    if (!c1cs) {
        // 0x800BC538: nop
    
            goto L_800BC550;
    }
    // 0x800BC538: nop

    // 0x800BC53C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800BC540: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800BC544: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC548: nop

    // 0x800BC54C: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
L_800BC550:
    // 0x800BC550: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC554: nop

    // 0x800BC558: lh          $t0, 0xA6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA6);
    // 0x800BC55C: nop

    // 0x800BC560: slti        $at, $t0, 0x1C
    ctx->r1 = SIGNED(ctx->r8) < 0X1C ? 1 : 0;
    // 0x800BC564: bne         $at, $zero, L_800BC62C
    if (ctx->r1 != 0) {
        // 0x800BC568: nop
    
            goto L_800BC62C;
    }
    // 0x800BC568: nop

    // 0x800BC56C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC570: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x800BC574: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800BC578: lwc1        $f16, 0x54($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X54);
    // 0x800BC57C: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800BC580: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800BC584: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800BC588: nop

    // 0x800BC58C: bc1f        L_800BC5B4
    if (!c1cs) {
        // 0x800BC590: nop
    
            goto L_800BC5B4;
    }
    // 0x800BC590: nop

    // 0x800BC594: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BC598: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC59C: nop

    // 0x800BC5A0: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
    // 0x800BC5A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BC5A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC5AC: nop

    // 0x800BC5B0: swc1        $f8, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f8.u32l;
L_800BC5B4:
    // 0x800BC5B4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC5B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800BC5BC: lwc1        $f16, 0x44($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X44);
    // 0x800BC5C0: nop

    // 0x800BC5C4: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x800BC5C8: nop

    // 0x800BC5CC: bc1f        L_800BC62C
    if (!c1cs) {
        // 0x800BC5D0: nop
    
            goto L_800BC62C;
    }
    // 0x800BC5D0: nop

    // 0x800BC5D4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC5D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BC5DC: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800BC5E0: lwc1        $f4, 0x54($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X54);
    // 0x800BC5E4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800BC5E8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC5EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800BC5F0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800BC5F4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800BC5F8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800BC5FC: lwc1        $f10, 0x4154($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x800BC600: nop

    // 0x800BC604: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x800BC608: nop

    // 0x800BC60C: bc1f        L_800BC62C
    if (!c1cs) {
        // 0x800BC610: nop
    
            goto L_800BC62C;
    }
    // 0x800BC610: nop

    // 0x800BC614: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC618: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800BC61C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800BC620: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC624: nop

    // 0x800BC628: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800BC62C:
    // 0x800BC62C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC630: nop

    // 0x800BC634: lh          $t2, 0xA6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA6);
    // 0x800BC638: nop

    // 0x800BC63C: andi        $t1, $t2, 0x3
    ctx->r9 = ctx->r10 & 0X3;
    // 0x800BC640: bne         $t1, $zero, L_800BC650
    if (ctx->r9 != 0) {
        // 0x800BC644: nop
    
            goto L_800BC650;
    }
    // 0x800BC644: nop

    // 0x800BC648: jal         0x800BC86C
    // 0x800BC64C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BC86C(rdram, ctx);
        goto after_5;
    // 0x800BC64C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
L_800BC650:
    // 0x800BC650: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800BC654: nop

    // 0x800BC658: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x800BC65C: nop

    // 0x800BC660: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800BC664: sh          $t6, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r14;
    // 0x800BC668: b           L_800BC670
    // 0x800BC66C: nop

        goto L_800BC670;
    // 0x800BC66C: nop

L_800BC670:
    // 0x800BC670: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800BC674: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800BC678: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800BC67C: jr          $ra
    // 0x800BC680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800BC680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800A1A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A1A10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A1A14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A1A18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A1A1C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A1A20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1A24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1A28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A1A2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1A30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1A34: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A1A38: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A1A3C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800A1A40: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1A44: nop

    // 0x800A1A48: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A1A4C: nop

    // 0x800A1A50: bne         $t1, $zero, L_800A1AF4
    if (ctx->r9 != 0) {
        // 0x800A1A54: nop
    
            goto L_800A1AF4;
    }
    // 0x800A1A54: nop

    // 0x800A1A58: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1A5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A1A60: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A1A64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A1A68: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1A6C: nop

    // 0x800A1A70: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A1A74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A1A78: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1A7C: nop

    // 0x800A1A80: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A1A84: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1A88: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800A1A8C: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800A1A90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A1A94: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800A1A98: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800A1A9C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A1AA0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800A1AA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800A1AA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A1AAC: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800A1AB0: addiu       $t9, $t8, 0x438
    ctx->r25 = ADD32(ctx->r24, 0X438);
    // 0x800A1AB4: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x800A1AB8: lwc1        $f10, 0x1C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800A1ABC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800A1AC0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800A1AC4: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x800A1AC8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800A1ACC: nop

    // 0x800A1AD0: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800A1AD4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800A1AD8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800A1ADC: nop

    // 0x800A1AE0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800A1AE4: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x800A1AE8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800A1AEC: sh          $t1, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r9;
    // 0x800A1AF0: nop

L_800A1AF4:
    // 0x800A1AF4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1AF8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1AFC: jal         0x80029C40
    // 0x800A1B00: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800A1B00: nop

    after_0:
    // 0x800A1B04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1B08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1B0C: jal         0x80029D04
    // 0x800A1B10: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800A1B10: nop

    after_1:
    // 0x800A1B14: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B18: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800A1B1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A1B20: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800A1B24: jal         0x80015538
    // 0x800A1B28: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800A1B28: nop

    after_2:
    // 0x800A1B2C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B30: nop

    // 0x800A1B34: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x800A1B38: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B3C: nop

    // 0x800A1B40: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800A1B44: nop

    // 0x800A1B48: addiu       $t7, $t5, -0xC
    ctx->r15 = ADD32(ctx->r13, -0XC);
    // 0x800A1B4C: sh          $t7, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r15;
    // 0x800A1B50: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B54: nop

    // 0x800A1B58: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800A1B5C: nop

    // 0x800A1B60: bgtz        $t9, L_800A1B88
    if (SIGNED(ctx->r25) > 0) {
        // 0x800A1B64: nop
    
            goto L_800A1B88;
    }
    // 0x800A1B64: nop

    // 0x800A1B68: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B6C: nop

    // 0x800A1B70: lh          $t1, 0xAA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAA);
    // 0x800A1B74: nop

    // 0x800A1B78: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x800A1B7C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B80: nop

    // 0x800A1B84: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800A1B88:
    // 0x800A1B88: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1B8C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800A1B90: lh          $t3, 0xAA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAA);
    // 0x800A1B94: nop

    // 0x800A1B98: bne         $t3, $at, L_800A1BF4
    if (ctx->r11 != ctx->r1) {
        // 0x800A1B9C: nop
    
            goto L_800A1BF4;
    }
    // 0x800A1B9C: nop

    // 0x800A1BA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1BA4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1BA8: jal         0x8002A2EC
    // 0x800A1BAC: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_3;
    // 0x800A1BAC: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_3:
    // 0x800A1BB0: beq         $v0, $zero, L_800A1BF4
    if (ctx->r2 == 0) {
        // 0x800A1BB4: nop
    
            goto L_800A1BF4;
    }
    // 0x800A1BB4: nop

    // 0x800A1BB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A1BBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A1BC0: jal         0x8002A3A8
    // 0x800A1BC4: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A3A8(rdram, ctx);
        goto after_4;
    // 0x800A1BC4: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_4:
    // 0x800A1BC8: beq         $v0, $zero, L_800A1BF4
    if (ctx->r2 == 0) {
        // 0x800A1BCC: nop
    
            goto L_800A1BF4;
    }
    // 0x800A1BCC: nop

    // 0x800A1BD0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1BD4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800A1BD8: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800A1BDC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1BE0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800A1BE4: sh          $t4, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r12;
    // 0x800A1BE8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1BEC: nop

    // 0x800A1BF0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800A1BF4:
    // 0x800A1BF4: jal         0x800A1DAC
    // 0x800A1BF8: nop

    func_800A1DAC(rdram, ctx);
        goto after_5;
    // 0x800A1BF8: nop

    after_5:
    // 0x800A1BFC: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x800A1C00: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x800A1C04: nop

    // 0x800A1C08: bne         $t1, $zero, L_800A1C28
    if (ctx->r9 != 0) {
        // 0x800A1C0C: nop
    
            goto L_800A1C28;
    }
    // 0x800A1C0C: nop

    // 0x800A1C10: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1C14: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x800A1C18: sh          $t0, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r8;
    // 0x800A1C1C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800A1C20: nop

    // 0x800A1C24: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800A1C28:
    // 0x800A1C28: b           L_800A1C30
    // 0x800A1C2C: nop

        goto L_800A1C30;
    // 0x800A1C2C: nop

L_800A1C30:
    // 0x800A1C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A1C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A1C38: jr          $ra
    // 0x800A1C3C: nop

    return;
    // 0x800A1C3C: nop

;}
RECOMP_FUNC void Debug_PrintXY(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F9EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005F9F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005F9F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005F9F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005F9FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8005FA00:
    // 0x8005FA00: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8005FA04: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8005FA08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8005FA0C: lbu         $t7, -0x1E48($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1E48);
    // 0x8005FA10: nop

    // 0x8005FA14: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
    // 0x8005FA18: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x8005FA1C: nop

    // 0x8005FA20: bne         $t8, $zero, L_8005FA30
    if (ctx->r24 != 0) {
        // 0x8005FA24: nop
    
            goto L_8005FA30;
    }
    // 0x8005FA24: nop

    // 0x8005FA28: b           L_8005FA78
    // 0x8005FA2C: nop

        goto L_8005FA78;
    // 0x8005FA2C: nop

L_8005FA30:
    // 0x8005FA30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005FA34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005FA38: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8005FA3C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8005FA40: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FA44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8005FA48: jal         0x8005F4D4
    // 0x8005FA4C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    Debug_PrintChar(rdram, ctx);
        goto after_0;
    // 0x8005FA4C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8005FA50: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8005FA54: nop

    // 0x8005FA58: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8005FA5C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8005FA60: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8005FA64: nop

    // 0x8005FA68: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8005FA6C: slti        $at, $t2, 0xC8
    ctx->r1 = SIGNED(ctx->r10) < 0XC8 ? 1 : 0;
    // 0x8005FA70: bne         $at, $zero, L_8005FA00
    if (ctx->r1 != 0) {
        // 0x8005FA74: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_8005FA00;
    }
    // 0x8005FA74: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_8005FA78:
    // 0x8005FA78: b           L_8005FA80
    // 0x8005FA7C: nop

        goto L_8005FA80;
    // 0x8005FA7C: nop

L_8005FA80:
    // 0x8005FA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FA84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005FA88: jr          $ra
    // 0x8005FA8C: nop

    return;
    // 0x8005FA8C: nop

;}
RECOMP_FUNC void func_800BDB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BDB8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BDB90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BDB94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BDB98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BDB9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BDBA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BDBA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BDBA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BDBAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BDBB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BDBB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BDBB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BDBBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BDBC0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800BDBC4: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800BDBC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BDBCC: bne         $t0, $at, L_800BDCA4
    if (ctx->r8 != ctx->r1) {
        // 0x800BDBD0: nop
    
            goto L_800BDCA4;
    }
    // 0x800BDBD0: nop

    // 0x800BDBD4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BDBD8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800BDBDC: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x800BDBE0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BDBE4: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x800BDBE8: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800BDBEC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BDBF0: nop

    // 0x800BDBF4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800BDBF8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BDBFC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800BDC00: lh          $t7, 0x106($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X106);
    // 0x800BDC04: nop

    // 0x800BDC08: beq         $t7, $at, L_800BDC1C
    if (ctx->r15 == ctx->r1) {
        // 0x800BDC0C: nop
    
            goto L_800BDC1C;
    }
    // 0x800BDC0C: nop

    // 0x800BDC10: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x800BDC14: bne         $t7, $at, L_800BDCA4
    if (ctx->r15 != ctx->r1) {
        // 0x800BDC18: nop
    
            goto L_800BDCA4;
    }
    // 0x800BDC18: nop

L_800BDC1C:
    // 0x800BDC1C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BDC20: nop

    // 0x800BDC24: lh          $t9, 0x100($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X100);
    // 0x800BDC28: nop

    // 0x800BDC2C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800BDC30: sh          $t0, 0x100($t8)
    MEM_H(0X100, ctx->r24) = ctx->r8;
    // 0x800BDC34: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BDC38: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800BDC3C: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800BDC40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BDC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BDC48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BDC4C: addiu       $a2, $zero, 0x6D
    ctx->r6 = ADD32(0, 0X6D);
    // 0x800BDC50: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800BDC54: jal         0x800175F0
    // 0x800BDC58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800BDC58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800BDC5C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BDC60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800BDC64: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x800BDC68: nop

    // 0x800BDC6C: bne         $t4, $at, L_800BDC90
    if (ctx->r12 != ctx->r1) {
        // 0x800BDC70: nop
    
            goto L_800BDC90;
    }
    // 0x800BDC70: nop

    // 0x800BDC74: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800BDC78: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800BDC7C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800BDC80: jal         0x800BF3A4
    // 0x800BDC84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800BF3A4(rdram, ctx);
        goto after_1;
    // 0x800BDC84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800BDC88: b           L_800BDCA4
    // 0x800BDC8C: nop

        goto L_800BDCA4;
    // 0x800BDC8C: nop

L_800BDC90:
    // 0x800BDC90: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800BDC94: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x800BDC98: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800BDC9C: jal         0x800BF3A4
    // 0x800BDCA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800BF3A4(rdram, ctx);
        goto after_2;
    // 0x800BDCA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_800BDCA4:
    // 0x800BDCA4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800BDCA8: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x800BDCAC: nop

    // 0x800BDCB0: bne         $t5, $zero, L_800BDCDC
    if (ctx->r13 != 0) {
        // 0x800BDCB4: nop
    
            goto L_800BDCDC;
    }
    // 0x800BDCB4: nop

    // 0x800BDCB8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BDCBC: nop

    // 0x800BDCC0: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800BDCC4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BDCC8: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x800BDCCC: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800BDCD0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BDCD4: nop

    // 0x800BDCD8: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800BDCDC:
    // 0x800BDCDC: b           L_800BDCE4
    // 0x800BDCE0: nop

        goto L_800BDCE4;
    // 0x800BDCE0: nop

L_800BDCE4:
    // 0x800BDCE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BDCE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BDCEC: jr          $ra
    // 0x800BDCF0: nop

    return;
    // 0x800BDCF0: nop

;}
RECOMP_FUNC void func_800CA4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA4EC: jr          $ra
    // 0x800CA4F0: nop

    return;
    // 0x800CA4F0: nop

    // 0x800CA4F4: jr          $ra
    // 0x800CA4F8: nop

    return;
    // 0x800CA4F8: nop

;}
RECOMP_FUNC void func_800EFB6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EFB6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800EFB70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EFB74: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800EFB78: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800EFB7C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800EFB80: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800EFB84: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800EFB88: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800EFB8C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800EFB90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800EFB94: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800EFB98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800EFB9C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800EFBA0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800EFBA4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800EFBA8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800EFBAC: addiu       $a1, $a1, 0x43FC
    ctx->r5 = ADD32(ctx->r5, 0X43FC);
    // 0x800EFBB0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800EFBB4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800EFBB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800EFBBC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800EFBC0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800EFBC4: jal         0x80027464
    // 0x800EFBC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800EFBC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800EFBCC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800EFBD0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFBD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800EFBD8: beq         $t1, $at, L_800EFE08
    if (ctx->r9 == ctx->r1) {
        // 0x800EFBDC: nop
    
            goto L_800EFE08;
    }
    // 0x800EFBDC: nop

    // 0x800EFBE0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EFBE4: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800EFBE8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFBEC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800EFBF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EFBF4: jal         0x8001ABF4
    // 0x800EFBF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800EFBF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800EFBFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFC00: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x800EFC04: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EFC08: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EFC0C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EFC10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EFC14: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EFC18: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x800EFC1C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800EFC20: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800EFC24: lh          $a0, 0x4238($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4238);
    // 0x800EFC28: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800EFC2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800EFC30: jal         0x8001ABF4
    // 0x800EFC34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800EFC34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800EFC38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800EFC3C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800EFC40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EFC44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EFC48: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800EFC4C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x800EFC50: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EFC54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800EFC58: jal         0x800295C0
    // 0x800EFC5C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800EFC5C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800EFC60: beq         $v0, $zero, L_800EFC94
    if (ctx->r2 == 0) {
        // 0x800EFC64: nop
    
            goto L_800EFC94;
    }
    // 0x800EFC64: nop

    // 0x800EFC68: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFC6C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800EFC70: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800EFC74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800EFC78: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800EFC7C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800EFC80: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800EFC84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EFC88: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800EFC8C: b           L_800EFCBC
    // 0x800EFC90: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
        goto L_800EFCBC;
    // 0x800EFC90: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
L_800EFC94:
    // 0x800EFC94: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFC98: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800EFC9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EFCA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EFCA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EFCA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EFCAC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EFCB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EFCB4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800EFCB8: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
L_800EFCBC:
    // 0x800EFCBC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFCC0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800EFCC4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800EFCC8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800EFCCC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800EFCD0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800EFCD4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800EFCD8: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800EFCDC: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x800EFCE0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800EFCE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800EFCE8: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800EFCEC: nop

    // 0x800EFCF0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800EFCF4: swc1        $f4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f4.u32l;
    // 0x800EFCF8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFCFC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800EFD00: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EFD04: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EFD08: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EFD0C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EFD10: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EFD14: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800EFD18: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800EFD1C: lh          $t7, 0xE8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XE8);
    // 0x800EFD20: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800EFD24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800EFD28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EFD2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800EFD30: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800EFD34: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800EFD38: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x800EFD3C: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x800EFD40: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFD44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800EFD48: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800EFD4C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EFD50: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800EFD54: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800EFD58: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800EFD5C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800EFD60: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800EFD64: sb          $t6, 0x428A($at)
    MEM_B(0X428A, ctx->r1) = ctx->r14;
    // 0x800EFD68: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFD6C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800EFD70: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800EFD74: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EFD78: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800EFD7C: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800EFD80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800EFD84: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800EFD88: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x800EFD8C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800EFD90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800EFD94: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x800EFD98: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800EFD9C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800EFDA0: nop

    // 0x800EFDA4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800EFDA8: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800EFDAC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800EFDB0: sh          $t4, 0xC0($t7)
    MEM_H(0XC0, ctx->r15) = ctx->r12;
    // 0x800EFDB4: nop

    // 0x800EFDB8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800EFDBC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800EFDC0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800EFDC4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EFDC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800EFDCC: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800EFDD0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800EFDD4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800EFDD8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800EFDDC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800EFDE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800EFDE4: addu        $t1, $t0, $t6
    ctx->r9 = ADD32(ctx->r8, ctx->r14);
    // 0x800EFDE8: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800EFDEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800EFDF0: nop

    // 0x800EFDF4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800EFDF8: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800EFDFC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800EFE00: sh          $t3, 0xC2($t1)
    MEM_H(0XC2, ctx->r9) = ctx->r11;
    // 0x800EFE04: nop

L_800EFE08:
    // 0x800EFE08: b           L_800EFE10
    // 0x800EFE0C: nop

        goto L_800EFE10;
    // 0x800EFE0C: nop

L_800EFE10:
    // 0x800EFE10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EFE14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800EFE18: jr          $ra
    // 0x800EFE1C: nop

    return;
    // 0x800EFE1C: nop

;}
RECOMP_FUNC void func_80092824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092824: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009282C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092830: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092834: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092838: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009283C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092840: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092844: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092848: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009284C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092850: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092854: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092858: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009285C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092860: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092864: addiu       $a1, $a1, 0x1708
    ctx->r5 = ADD32(ctx->r5, 0X1708);
    // 0x80092868: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009286C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092870: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092874: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092878: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009287C: jal         0x80027464
    // 0x80092880: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092880: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092884: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092888: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8009288C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80092890: addiu       $a3, $a3, 0x1D2C
    ctx->r7 = ADD32(ctx->r7, 0X1D2C);
    // 0x80092894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80092898: jal         0x8001ABF4
    // 0x8009289C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009289C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800928A0: b           L_800928A8
    // 0x800928A4: nop

        goto L_800928A8;
    // 0x800928A4: nop

L_800928A8:
    // 0x800928A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800928AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800928B0: jr          $ra
    // 0x800928B4: nop

    return;
    // 0x800928B4: nop

;}
RECOMP_FUNC void func_8009D7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009D7B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009D7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009D7BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009D7C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009D7C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009D7C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009D7CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009D7D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009D7D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009D7D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009D7DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009D7E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009D7E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009D7E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D7EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009D7F0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8009D7F4: nop

    // 0x8009D7F8: bne         $t1, $at, L_8009D9A4
    if (ctx->r9 != ctx->r1) {
        // 0x8009D7FC: nop
    
            goto L_8009D9A4;
    }
    // 0x8009D7FC: nop

    // 0x8009D800: b           L_8009D808
    // 0x8009D804: nop

        goto L_8009D808;
    // 0x8009D804: nop

L_8009D808:
    // 0x8009D808: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D80C: nop

    // 0x8009D810: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009D814: nop

    // 0x8009D818: bne         $t3, $zero, L_8009D894
    if (ctx->r11 != 0) {
        // 0x8009D81C: nop
    
            goto L_8009D894;
    }
    // 0x8009D81C: nop

    // 0x8009D820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D824: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D828: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009D82C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009D830: jal         0x80019448
    // 0x8009D834: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x8009D834: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8009D838: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009D83C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009D840: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D844: nop

    // 0x8009D848: swc1        $f4, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f4.u32l;
    // 0x8009D84C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D850: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8009D854: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x8009D858: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8009D85C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009D860: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D864: nop

    // 0x8009D868: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
    // 0x8009D86C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D870: nop

    // 0x8009D874: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8009D878: nop

    // 0x8009D87C: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
    // 0x8009D880: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x8009D884: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8009D888: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D88C: nop

    // 0x8009D890: swc1        $f10, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f10.u32l;
L_8009D894:
    // 0x8009D894: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D898: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D89C: jal         0x80029D8C
    // 0x8009D8A0: nop

    func_80029D8C(rdram, ctx);
        goto after_1;
    // 0x8009D8A0: nop

    after_1:
    // 0x8009D8A4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D8A8: nop

    // 0x8009D8AC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x8009D8B0: nop

    // 0x8009D8B4: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8009D8B8: bne         $t2, $zero, L_8009D8DC
    if (ctx->r10 != 0) {
        // 0x8009D8BC: nop
    
            goto L_8009D8DC;
    }
    // 0x8009D8BC: nop

    // 0x8009D8C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D8C4: addiu       $a0, $zero, 0x2BD
    ctx->r4 = ADD32(0, 0X2BD);
    // 0x8009D8C8: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x8009D8CC: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x8009D8D0: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x8009D8D4: jal         0x80081468
    // 0x8009D8D8: nop

    func_80081468(rdram, ctx);
        goto after_2;
    // 0x8009D8D8: nop

    after_2:
L_8009D8DC:
    // 0x8009D8DC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D8E0: nop

    // 0x8009D8E4: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x8009D8E8: nop

    // 0x8009D8EC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8009D8F0: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
    // 0x8009D8F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D8F8: lui         $at, 0xC3D2
    ctx->r1 = S32(0XC3D2 << 16);
    // 0x8009D8FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009D900: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8009D904: nop

    // 0x8009D908: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8009D90C: nop

    // 0x8009D910: bc1f        L_8009D99C
    if (!c1cs) {
        // 0x8009D914: nop
    
            goto L_8009D99C;
    }
    // 0x8009D914: nop

    // 0x8009D918: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8009D91C: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x8009D920: lwc1        $f12, 0x0($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8009D924: lwc1        $f14, 0x4($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8009D928: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x8009D92C: jal         0x8007EE40
    // 0x8009D930: nop

    func_8007EE40(rdram, ctx);
        goto after_3;
    // 0x8009D930: nop

    after_3:
    // 0x8009D934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009D938: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009D93C: jal         0x8002B0E4
    // 0x8009D940: nop

    func_8002B0E4(rdram, ctx);
        goto after_4;
    // 0x8009D940: nop

    after_4:
    // 0x8009D944: jal         0x80026DBC
    // 0x8009D948: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    Get_ObjIdx_ById(rdram, ctx);
        goto after_5;
    // 0x8009D948: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    after_5:
    // 0x8009D94C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8009D950: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8009D954: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009D958: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009D95C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009D960: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009D964: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009D968: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009D96C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009D970: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8009D974: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x8009D978: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8009D97C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009D980: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009D984: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009D988: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009D98C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009D990: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009D994: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009D998: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8009D99C:
    // 0x8009D99C: b           L_8009D9A4
    // 0x8009D9A0: nop

        goto L_8009D9A4;
    // 0x8009D9A0: nop

L_8009D9A4:
    // 0x8009D9A4: b           L_8009D9AC
    // 0x8009D9A8: nop

        goto L_8009D9AC;
    // 0x8009D9A8: nop

L_8009D9AC:
    // 0x8009D9AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009D9B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009D9B4: jr          $ra
    // 0x8009D9B8: nop

    return;
    // 0x8009D9B8: nop

;}
RECOMP_FUNC void func_8008C650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C650: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008C654: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008C658: sb          $t6, 0x660A($at)
    MEM_B(0X660A, ctx->r1) = ctx->r14;
    // 0x8008C65C: jr          $ra
    // 0x8008C660: nop

    return;
    // 0x8008C660: nop

    // 0x8008C664: jr          $ra
    // 0x8008C668: nop

    return;
    // 0x8008C668: nop

;}
RECOMP_FUNC void func_8008E074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E074: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008E078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E07C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008E080: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008E084: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8008E088: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008E08C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008E090: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008E094: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E098: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008E09C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008E0A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008E0A4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8008E0A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008E0AC: lwc1        $f4, 0x24($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X24);
    // 0x8008E0B0: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8008E0B4: nop

    // 0x8008E0B8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008E0BC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8008E0C0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008E0C4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x8008E0C8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008E0CC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008E0D0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008E0D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008E0D8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008E0DC: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x8008E0E0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8008E0E4: lwc1        $f10, 0x28($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8008E0E8: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8008E0EC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8008E0F0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008E0F4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8008E0F8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x8008E0FC: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8008E100: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x8008E104: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8008E108: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008E10C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8008E110: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008E114: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8008E118: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x8008E11C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8008E120: lwc1        $f8, 0x2C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x8008E124: lwc1        $f10, 0x8($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8008E128: nop

    // 0x8008E12C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8008E130: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8008E134: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8008E138: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8008E13C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E140: jal         0x80067748
    // 0x8008E144: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x8008E144: nop

    after_0:
    // 0x8008E148: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008E14C: addiu       $t8, $t8, 0x7760
    ctx->r24 = ADD32(ctx->r24, 0X7760);
    // 0x8008E150: lwc1        $f18, 0x4($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8008E154: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E158: nop

    // 0x8008E15C: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
    // 0x8008E160: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8008E164: lbu         $v0, 0x76E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X76E0);
    // 0x8008E168: nop

    // 0x8008E16C: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8008E170: b           L_8008E180
    // 0x8008E174: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8008E180;
    // 0x8008E174: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8008E178: b           L_8008E180
    // 0x8008E17C: nop

        goto L_8008E180;
    // 0x8008E17C: nop

L_8008E180:
    // 0x8008E180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E184: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008E188: jr          $ra
    // 0x8008E18C: nop

    return;
    // 0x8008E18C: nop

;}
RECOMP_FUNC void func_800CC2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC2E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800CC2E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800CC2E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800CC2EC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CC2F0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800CC2F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CC2F8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CC2FC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CC300: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CC304: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC308: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CC30C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC310: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CC314: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CC318: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CC31C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800CC320: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CC324: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CC328: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CC32C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CC330: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CC334: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CC338: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CC33C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CC340: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC344: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CC348: nop

    // 0x800CC34C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x800CC350: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CC354: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CC358: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CC35C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CC360: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC364: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CC368: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC36C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CC370: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CC374: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800CC378: nop

    // 0x800CC37C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x800CC380: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800CC384: nop

    // 0x800CC388: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800CC38C: nop

    // 0x800CC390: bne         $t7, $zero, L_800CC5B8
    if (ctx->r15 != 0) {
        // 0x800CC394: nop
    
            goto L_800CC5B8;
    }
    // 0x800CC394: nop

    // 0x800CC398: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800CC39C: nop

    // 0x800CC3A0: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800CC3A4: nop

    // 0x800CC3A8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800CC3AC: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800CC3B0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800CC3B4: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x800CC3B8: sh          $t1, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r9;
    // 0x800CC3BC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800CC3C0: nop

    // 0x800CC3C4: sh          $zero, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = 0;
    // 0x800CC3C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CC3CC: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800CC3D0: nop

    // 0x800CC3D4: swc1        $f4, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f4.u32l;
    // 0x800CC3D8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800CC3DC: nop

    // 0x800CC3E0: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800CC3E4: nop

    // 0x800CC3E8: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800CC3EC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800CC3F0: nop

    // 0x800CC3F4: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800CC3F8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800CC3FC: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800CC400: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800CC404: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CC408: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800CC40C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CC410: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800CC414: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CC418: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CC41C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CC420: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CC424: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC428: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800CC42C: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800CC430: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CC434: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800CC438: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CC43C: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x800CC440: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800CC444: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800CC448: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC44C: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x800CC450: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x800CC454: nop

    // 0x800CC458: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CC45C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC460: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CC464: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC468: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CC46C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CC470: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CC474: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC478: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC47C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CC480: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CC484: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800CC488: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CC48C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CC490: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CC494: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CC498: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CC49C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CC4A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC4A4: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800CC4A8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800CC4AC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CC4B0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800CC4B4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CC4B8: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x800CC4BC: swc1        $f8, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f8.u32l;
    // 0x800CC4C0: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800CC4C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC4C8: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x800CC4CC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC4D0: nop

    // 0x800CC4D4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800CC4D8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC4DC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CC4E0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC4E4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CC4E8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CC4EC: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CC4F0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC4F4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800CC4F8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CC4FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC500: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CC504: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800CC508: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CC50C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CC510: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC514: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CC518: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x800CC51C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC520: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800CC524: addiu       $t5, $t5, -0x7DA8
    ctx->r13 = ADD32(ctx->r13, -0X7DA8);
    // 0x800CC528: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC52C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800CC530: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CC534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CC538: jal         0x8001C0EC
    // 0x800CC53C: addiu       $a3, $zero, 0x7B
    ctx->r7 = ADD32(0, 0X7B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CC53C: addiu       $a3, $zero, 0x7B
    ctx->r7 = ADD32(0, 0X7B);
    after_0:
    // 0x800CC540: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC544: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC548: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CC54C: addiu       $a3, $a3, -0x7D7C
    ctx->r7 = ADD32(ctx->r7, -0X7D7C);
    // 0x800CC550: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CC554: jal         0x8001ABF4
    // 0x800CC558: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800CC558: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x800CC55C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800CC560: addiu       $t6, $t6, -0x7D44
    ctx->r14 = ADD32(ctx->r14, -0X7D44);
    // 0x800CC564: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800CC568: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800CC56C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CC570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CC574: jal         0x8001C0EC
    // 0x800CC578: addiu       $a3, $zero, 0x7C
    ctx->r7 = ADD32(0, 0X7C);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800CC578: addiu       $a3, $zero, 0x7C
    ctx->r7 = ADD32(0, 0X7C);
    after_2:
    // 0x800CC57C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CC580: addiu       $t7, $t7, -0x7D40
    ctx->r15 = ADD32(ctx->r15, -0X7D40);
    // 0x800CC584: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800CC588: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800CC58C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CC590: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CC594: jal         0x8001C0EC
    // 0x800CC598: addiu       $a3, $zero, 0x7D
    ctx->r7 = ADD32(0, 0X7D);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800CC598: addiu       $a3, $zero, 0x7D
    ctx->r7 = ADD32(0, 0X7D);
    after_3:
    // 0x800CC59C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC5A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC5A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CC5A8: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x800CC5AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800CC5B0: jal         0x800176F4
    // 0x800CC5B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800176F4(rdram, ctx);
        goto after_4;
    // 0x800CC5B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800CC5B8:
    // 0x800CC5B8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800CC5BC: nop

    // 0x800CC5C0: lh          $t0, 0x108($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X108);
    // 0x800CC5C4: nop

    // 0x800CC5C8: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x800CC5CC: bne         $at, $zero, L_800CC604
    if (ctx->r1 != 0) {
        // 0x800CC5D0: nop
    
            goto L_800CC604;
    }
    // 0x800CC5D0: nop

    // 0x800CC5D4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800CC5D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC5DC: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800CC5E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC5E4: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x800CC5E8: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800CC5EC: sltiu       $t2, $s0, 0x1
    ctx->r10 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800CC5F0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800CC5F4: jal         0x8001BB34
    // 0x800CC5F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800CC5F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800CC5FC: b           L_800CC614
    // 0x800CC600: nop

        goto L_800CC614;
    // 0x800CC600: nop

L_800CC604:
    // 0x800CC604: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CC608: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CC60C: jal         0x8001BB34
    // 0x800CC610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x800CC610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_800CC614:
    // 0x800CC614: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800CC618: nop

    // 0x800CC61C: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800CC620: nop

    // 0x800CC624: beq         $t4, $zero, L_800CC65C
    if (ctx->r12 == 0) {
        // 0x800CC628: nop
    
            goto L_800CC65C;
    }
    // 0x800CC628: nop

    // 0x800CC62C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800CC630: nop

    // 0x800CC634: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800CC638: nop

    // 0x800CC63C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800CC640: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x800CC644: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800CC648: nop

    // 0x800CC64C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800CC650: nop

    // 0x800CC654: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x800CC658: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_800CC65C:
    // 0x800CC65C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800CC660: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800CC664: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800CC668: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC66C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CC670: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800CC674: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CC678: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CC67C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC680: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x800CC684: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CC688: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800CC68C: jal         0x80015538
    // 0x800CC690: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800CC690: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_7:
    // 0x800CC694: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800CC698: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CC69C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CC6A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC6A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CC6A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC6AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CC6B0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CC6B4: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x800CC6B8: b           L_800CC6C0
    // 0x800CC6BC: nop

        goto L_800CC6C0;
    // 0x800CC6BC: nop

L_800CC6C0:
    // 0x800CC6C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800CC6C4: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800CC6C8: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800CC6CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800CC6D0: jr          $ra
    // 0x800CC6D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800CC6D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800F1C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F1C28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800F1C2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F1C30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F1C34: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F1C38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F1C3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F1C40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1C44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F1C48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1C4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F1C50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F1C54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F1C58: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800F1C5C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1C60: nop

    // 0x800F1C64: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F1C68: nop

    // 0x800F1C6C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x800F1C70: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1C74: nop

    // 0x800F1C78: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F1C7C: nop

    // 0x800F1C80: bne         $t3, $zero, L_800F1D04
    if (ctx->r11 != 0) {
        // 0x800F1C84: nop
    
            goto L_800F1D04;
    }
    // 0x800F1C84: nop

    // 0x800F1C88: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1C8C: nop

    // 0x800F1C90: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F1C94: nop

    // 0x800F1C98: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F1C9C: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F1CA0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1CA4: nop

    // 0x800F1CA8: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F1CAC: nop

    // 0x800F1CB0: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F1CB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1CB8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800F1CBC: addiu       $t9, $t9, -0x6A88
    ctx->r25 = ADD32(ctx->r25, -0X6A88);
    // 0x800F1CC0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1CC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800F1CC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F1CCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F1CD0: jal         0x8001C0EC
    // 0x800F1CD4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F1CD4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F1CD8: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800F1CDC: addiu       $t0, $t0, -0x69AC
    ctx->r8 = ADD32(ctx->r8, -0X69AC);
    // 0x800F1CE0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800F1CE4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800F1CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F1CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F1CF0: jal         0x8001C0EC
    // 0x800F1CF4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F1CF4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F1CF8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1CFC: nop

    // 0x800F1D00: sb          $zero, 0x13A($t1)
    MEM_B(0X13A, ctx->r9) = 0;
L_800F1D04:
    // 0x800F1D04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1D08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1D0C: jal         0x8001B62C
    // 0x800F1D10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800F1D10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800F1D14: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800F1D18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F1D1C: nop

    // 0x800F1D20: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800F1D24: nop

    // 0x800F1D28: bc1f        L_800F1E68
    if (!c1cs) {
        // 0x800F1D2C: nop
    
            goto L_800F1E68;
    }
    // 0x800F1D2C: nop

    // 0x800F1D30: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1D34: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1D38: lwc1        $f6, 0xC($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0XC);
    // 0x800F1D3C: lwc1        $f11, 0x5658($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X5658);
    // 0x800F1D40: lwc1        $f10, 0x565C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X565C);
    // 0x800F1D44: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800F1D48: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x800F1D4C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800F1D50: swc1        $f18, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f18.u32l;
    // 0x800F1D54: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1D58: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1D5C: lwc1        $f4, 0x10($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X10);
    // 0x800F1D60: lwc1        $f9, 0x5660($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5660);
    // 0x800F1D64: lwc1        $f8, 0x5664($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5664);
    // 0x800F1D68: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800F1D6C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x800F1D70: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800F1D74: swc1        $f16, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->f16.u32l;
    // 0x800F1D78: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1D7C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1D80: lwc1        $f18, 0x14($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X14);
    // 0x800F1D84: lwc1        $f7, 0x5668($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5668);
    // 0x800F1D88: lwc1        $f6, 0x566C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X566C);
    // 0x800F1D8C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800F1D90: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x800F1D94: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800F1D98: swc1        $f10, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f10.u32l;
    // 0x800F1D9C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800F1DA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F1DA4: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x800F1DA8: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F1DAC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F1DB0: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x800F1DB4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F1DB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F1DBC: addu        $t7, $t4, $t8
    ctx->r15 = ADD32(ctx->r12, ctx->r24);
    // 0x800F1DC0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1DC4: lwc1        $f16, 0xC($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800F1DC8: lwc1        $f5, 0x5670($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5670);
    // 0x800F1DCC: lwc1        $f4, 0x5674($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5674);
    // 0x800F1DD0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800F1DD4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800F1DD8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800F1DDC: swc1        $f8, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f8.u32l;
    // 0x800F1DE0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800F1DE4: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800F1DE8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800F1DEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F1DF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F1DF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F1DF8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F1DFC: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800F1E00: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800F1E04: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1E08: lwc1        $f10, 0x10($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X10);
    // 0x800F1E0C: lwc1        $f19, 0x5678($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5678);
    // 0x800F1E10: lwc1        $f18, 0x567C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X567C);
    // 0x800F1E14: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800F1E18: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800F1E1C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800F1E20: swc1        $f6, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f6.u32l;
    // 0x800F1E24: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x800F1E28: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800F1E2C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800F1E30: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F1E34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F1E38: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F1E3C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F1E40: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800F1E44: addu        $t4, $t5, $t6
    ctx->r12 = ADD32(ctx->r13, ctx->r14);
    // 0x800F1E48: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800F1E4C: lwc1        $f8, 0x14($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X14);
    // 0x800F1E50: lwc1        $f17, 0x5680($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5680);
    // 0x800F1E54: lwc1        $f16, 0x5684($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5684);
    // 0x800F1E58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800F1E5C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800F1E60: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800F1E64: swc1        $f4, 0x14($t4)
    MEM_W(0X14, ctx->r12) = ctx->f4.u32l;
L_800F1E68:
    // 0x800F1E68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800F1E6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F1E70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1E74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1E78: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800F1E7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800F1E80: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800F1E84: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800F1E88: jal         0x800295C0
    // 0x800F1E8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x800F1E8C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800F1E90: beq         $v0, $zero, L_800F1EA8
    if (ctx->r2 == 0) {
        // 0x800F1E94: nop
    
            goto L_800F1EA8;
    }
    // 0x800F1E94: nop

    // 0x800F1E98: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800F1E9C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1EA0: b           L_800F1EB8
    // 0x800F1EA4: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
        goto L_800F1EB8;
    // 0x800F1EA4: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
L_800F1EA8:
    // 0x800F1EA8: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800F1EAC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1EB0: nop

    // 0x800F1EB4: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
L_800F1EB8:
    // 0x800F1EB8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1EBC: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F1EC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F1EC4: lwc1        $f18, 0x4($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F1EC8: nop

    // 0x800F1ECC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800F1ED0: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x800F1ED4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x800F1ED8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1EDC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800F1EE0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800F1EE4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800F1EE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800F1EEC: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800F1EF0: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800F1EF4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1EF8: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800F1EFC: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x800F1F00: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1F04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1F08: jal         0x8001B4AC
    // 0x800F1F0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B4AC(rdram, ctx);
        goto after_4;
    // 0x800F1F0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800F1F10: beq         $v0, $zero, L_800F1FF0
    if (ctx->r2 == 0) {
        // 0x800F1F14: nop
    
            goto L_800F1FF0;
    }
    // 0x800F1F14: nop

    // 0x800F1F18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F1F1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800F1F20: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1F24: nop

    // 0x800F1F28: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    // 0x800F1F2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F1F30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F1F34: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1F38: nop

    // 0x800F1F3C: swc1        $f16, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f16.u32l;
    // 0x800F1F40: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F1F44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800F1F48: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1F4C: nop

    // 0x800F1F50: swc1        $f18, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f18.u32l;
    // 0x800F1F54: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x800F1F58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F1F5C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x800F1F60: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F1F64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800F1F68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800F1F6C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x800F1F70: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800F1F74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1F78: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800F1F7C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800F1F80: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800F1F84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F1F88: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800F1F8C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F1F90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F1F94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F1F98: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800F1F9C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F1FA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1FA4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F1FA8: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800F1FAC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x800F1FB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800F1FB4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F1FB8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F1FBC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F1FC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800F1FC4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F1FC8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F1FCC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F1FD0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F1FD4: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x800F1FD8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1FDC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800F1FE0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800F1FE4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800F1FE8: nop

    // 0x800F1FEC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800F1FF0:
    // 0x800F1FF0: b           L_800F1FF8
    // 0x800F1FF4: nop

        goto L_800F1FF8;
    // 0x800F1FF4: nop

L_800F1FF8:
    // 0x800F1FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F1FFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800F2000: jr          $ra
    // 0x800F2004: nop

    return;
    // 0x800F2004: nop

;}
RECOMP_FUNC void func_80096760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096760: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096764: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80096768: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8009676C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80096770: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80096774: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80096778: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8009677C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80096780: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80096784: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80096788: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8009678C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80096790: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80096794: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80096798: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8009679C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800967A0: addiu       $a1, $a1, 0x3424
    ctx->r5 = ADD32(ctx->r5, 0X3424);
    // 0x800967A4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800967A8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800967AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800967B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800967B4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800967B8: jal         0x80027464
    // 0x800967BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800967BC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800967C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800967C4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800967C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800967CC: beq         $t1, $at, L_80096804
    if (ctx->r9 == ctx->r1) {
        // 0x800967D0: nop
    
            goto L_80096804;
    }
    // 0x800967D0: nop

    // 0x800967D4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800967D8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800967DC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800967E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800967E4: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800967E8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800967EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800967F0: lh          $t3, 0xE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE);
    // 0x800967F4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800967F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800967FC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80096800: sh          $t3, 0x41FE($at)
    MEM_H(0X41FE, ctx->r1) = ctx->r11;
L_80096804:
    // 0x80096804: b           L_8009680C
    // 0x80096808: nop

        goto L_8009680C;
    // 0x80096808: nop

L_8009680C:
    // 0x8009680C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096810: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80096814: jr          $ra
    // 0x80096818: nop

    return;
    // 0x80096818: nop

;}
RECOMP_FUNC void func_800B52A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B52A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B52A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B52AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B52B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B52B4: jal         0x8002B114
    // 0x800B52B8: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x800B52B8: nop

    after_0:
    // 0x800B52BC: b           L_800B52C4
    // 0x800B52C0: nop

        goto L_800B52C4;
    // 0x800B52C0: nop

L_800B52C4:
    // 0x800B52C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B52C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B52CC: jr          $ra
    // 0x800B52D0: nop

    return;
    // 0x800B52D0: nop

;}
RECOMP_FUNC void func_8007B004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B004: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8007B008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B00C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8007B010: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B014: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007B018: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007B01C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007B024: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B028: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007B02C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007B030: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007B034: sw          $t9, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r25;
    // 0x8007B038: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007B03C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8007B040: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8007B044: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x8007B048: nop

    // 0x8007B04C: bne         $t1, $at, L_8007B130
    if (ctx->r9 != ctx->r1) {
        // 0x8007B050: nop
    
            goto L_8007B130;
    }
    // 0x8007B050: nop

    // 0x8007B054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007B058: jal         0x8001B62C
    // 0x8007B05C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x8007B05C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8007B060: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007B064: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007B068: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007B06C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x8007B070: nop

    // 0x8007B074: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007B078: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8007B07C: nop

    // 0x8007B080: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8007B084: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007B088: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007B08C: nop

    // 0x8007B090: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8007B094: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x8007B098: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8007B09C: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x8007B0A0: nop

    // 0x8007B0A4: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x8007B0A8: nop

    // 0x8007B0AC: bgez        $t4, L_8007B0FC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8007B0B0: nop
    
            goto L_8007B0FC;
    }
    // 0x8007B0B0: nop

    // 0x8007B0B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007B0B8: jal         0x8001B580
    // 0x8007B0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_1;
    // 0x8007B0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007B0C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007B0C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007B0C8: nop

    // 0x8007B0CC: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8007B0D0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8007B0D4: nop

    // 0x8007B0D8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8007B0DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007B0E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007B0E4: nop

    // 0x8007B0E8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8007B0EC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8007B0F0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8007B0F4: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    // 0x8007B0F8: nop

L_8007B0FC:
    // 0x8007B0FC: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8007B100: nop

    // 0x8007B104: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x8007B108: beq         $at, $zero, L_8007B128
    if (ctx->r1 == 0) {
        // 0x8007B10C: nop
    
            goto L_8007B128;
    }
    // 0x8007B10C: nop

    // 0x8007B110: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B114: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x8007B118: lui         $a2, 0x8011
    ctx->r6 = S32(0X8011 << 16);
    // 0x8007B11C: addiu       $a2, $a2, -0x3BE4
    ctx->r6 = ADD32(ctx->r6, -0X3BE4);
    // 0x8007B120: jal         0x80079BEC
    // 0x8007B124: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    func_80079BEC(rdram, ctx);
        goto after_2;
    // 0x8007B124: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_2:
L_8007B128:
    // 0x8007B128: b           L_8007B138
    // 0x8007B12C: nop

        goto L_8007B138;
    // 0x8007B12C: nop

L_8007B130:
    // 0x8007B130: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8007B134: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
L_8007B138:
    // 0x8007B138: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B13C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007B140: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007B144: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8007B148: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8007B14C: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x8007B150: jal         0x80067748
    // 0x8007B154: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_80067748(rdram, ctx);
        goto after_3;
    // 0x8007B154: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_3:
    // 0x8007B158: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007B15C: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x8007B160: nop

    // 0x8007B164: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8007B168: beq         $t1, $zero, L_8007B1A0
    if (ctx->r9 == 0) {
        // 0x8007B16C: nop
    
            goto L_8007B1A0;
    }
    // 0x8007B16C: nop

    // 0x8007B170: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007B174: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x8007B178: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B17C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8007B180: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8007B184: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8007B188: lwc1        $f16, 0x7760($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8007B18C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007B190: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007B194: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B198: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8007B19C: swc1        $f4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f4.u32l;
L_8007B1A0:
    // 0x8007B1A0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B1A4: jal         0x80079778
    // 0x8007B1A8: nop

    func_80079778(rdram, ctx);
        goto after_4;
    // 0x8007B1A8: nop

    after_4:
    // 0x8007B1AC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B1B0: jal         0x800797FC
    // 0x8007B1B4: nop

    func_800797FC(rdram, ctx);
        goto after_5;
    // 0x8007B1B4: nop

    after_5:
    // 0x8007B1B8: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x8007B1BC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8007B1C0: bne         $t6, $at, L_8007B250
    if (ctx->r14 != ctx->r1) {
        // 0x8007B1C4: nop
    
            goto L_8007B250;
    }
    // 0x8007B1C4: nop

    // 0x8007B1C8: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B1CC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x8007B1D0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x8007B1D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007B1D8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8007B1DC: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B1E0: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8007B1E4: nop

    // 0x8007B1E8: swc1        $f6, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f6.u32l;
    // 0x8007B1EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007B1F0: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B1F4: nop

    // 0x8007B1F8: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x8007B1FC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007B200: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007B204: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B208: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8007B20C: nop

    // 0x8007B210: swc1        $f10, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f10.u32l;
    // 0x8007B214: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007B218: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B21C: nop

    // 0x8007B220: swc1        $f16, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f16.u32l;
    // 0x8007B224: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B228: jal         0x800799A8
    // 0x8007B22C: nop

    func_800799A8(rdram, ctx);
        goto after_6;
    // 0x8007B22C: nop

    after_6:
    // 0x8007B230: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x8007B234: jal         0x80079AD8
    // 0x8007B238: nop

    func_80079AD8(rdram, ctx);
        goto after_7;
    // 0x8007B238: nop

    after_7:
    // 0x8007B23C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8007B240: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007B244: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x8007B248: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B24C: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
L_8007B250:
    // 0x8007B250: b           L_8007B258
    // 0x8007B254: nop

        goto L_8007B258;
    // 0x8007B254: nop

L_8007B258:
    // 0x8007B258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B25C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8007B260: jr          $ra
    // 0x8007B264: nop

    return;
    // 0x8007B264: nop

;}
RECOMP_FUNC void Skybox_MoveX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DB7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006DB80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006DB84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DB88: lwc1        $f4, -0x1EC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EC0);
    // 0x8006DB8C: nop

    // 0x8006DB90: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x8006DB94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006DB98: lh          $t6, 0x77E8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X77E8);
    // 0x8006DB9C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006DBA0: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8006DBA4: nop

    // 0x8006DBA8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006DBAC: c.le.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl <= ctx->f10.fl;
    // 0x8006DBB0: nop

    // 0x8006DBB4: bc1f        L_8006DBDC
    if (!c1cs) {
        // 0x8006DBB8: nop
    
            goto L_8006DBDC;
    }
    // 0x8006DBB8: nop

    // 0x8006DBBC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006DBC0: lh          $t7, 0x77E8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X77E8);
    // 0x8006DBC4: nop

    // 0x8006DBC8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8006DBCC: nop

    // 0x8006DBD0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8006DBD4: b           L_8006DC20
    // 0x8006DBD8: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
        goto L_8006DC20;
    // 0x8006DBD8: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
L_8006DBDC:
    // 0x8006DBDC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006DBE0: lh          $t8, 0x7900($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7900);
    // 0x8006DBE4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006DBE8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8006DBEC: nop

    // 0x8006DBF0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006DBF4: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8006DBF8: nop

    // 0x8006DBFC: bc1f        L_8006DC20
    if (!c1cs) {
        // 0x8006DC00: nop
    
            goto L_8006DC20;
    }
    // 0x8006DC00: nop

    // 0x8006DC04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006DC08: lh          $t9, 0x7900($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7900);
    // 0x8006DC0C: nop

    // 0x8006DC10: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8006DC14: nop

    // 0x8006DC18: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006DC1C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
L_8006DC20:
    // 0x8006DC20: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006DC24: lh          $t0, 0x77E8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X77E8);
    // 0x8006DC28: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006DC2C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8006DC30: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8006DC34: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006DC38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006DC3C: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x8006DC40: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8006DC44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DC48: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8006DC4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DC50: div.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8006DC54: swc1        $f18, 0x759C($at)
    MEM_W(0X759C, ctx->r1) = ctx->f18.u32l;
    // 0x8006DC58: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8006DC5C: jal         0x8006C3D0
    // 0x8006DC60: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    Skybox_GetWidthHeight(rdram, ctx);
        goto after_0;
    // 0x8006DC60: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8006DC64: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006DC68: lh          $t1, 0x78F0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X78F0);
    // 0x8006DC6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DC70: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8006DC74: lwc1        $f4, -0x1EBC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x8006DC78: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006DC7C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DC80: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8006DC84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DC88: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8006DC8C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8006DC90: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8006DC94: addiu       $t4, $t3, -0x12C
    ctx->r12 = ADD32(ctx->r11, -0X12C);
    // 0x8006DC98: lui         $at, 0x4470
    ctx->r1 = S32(0X4470 << 16);
    // 0x8006DC9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006DCA0: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8006DCA4: div.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8006DCA8: bgez        $t4, L_8006DCC0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8006DCAC: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8006DCC0;
    }
    // 0x8006DCAC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006DCB0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8006DCB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8006DCB8: nop

    // 0x8006DCBC: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_8006DCC0:
    // 0x8006DCC0: sub.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8006DCC4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x8006DCC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DCCC: lwc1        $f6, -0x1EA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8006DCD0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8006DCD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006DCD8: nop

    // 0x8006DCDC: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x8006DCE0: nop

    // 0x8006DCE4: bc1f        L_8006DD0C
    if (!c1cs) {
        // 0x8006DCE8: nop
    
            goto L_8006DD0C;
    }
    // 0x8006DCE8: nop

    // 0x8006DCEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DCF0: lwc1        $f16, -0x1EA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8006DCF4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8006DCF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DCFC: nop

    // 0x8006DD00: sub.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8006DD04: b           L_8006DD1C
    // 0x8006DD08: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
        goto L_8006DD1C;
    // 0x8006DD08: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8006DD0C:
    // 0x8006DD0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DD10: lwc1        $f18, -0x1EA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1EA8);
    // 0x8006DD14: nop

    // 0x8006DD18: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
L_8006DD1C:
    // 0x8006DD1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DD20: lwc1        $f10, 0x7A58($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7A58);
    // 0x8006DD24: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DD28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006DD2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DD30: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8006DD34: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8006DD38: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8006DD3C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8006DD40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006DD44: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DD48: nop

    // 0x8006DD4C: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x8006DD50: nop

    // 0x8006DD54: bc1f        L_8006DD6C
    if (!c1cs) {
        // 0x8006DD58: nop
    
            goto L_8006DD6C;
    }
    // 0x8006DD58: nop

    // 0x8006DD5C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8006DD60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006DD64: b           L_8006DD9C
    // 0x8006DD68: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
        goto L_8006DD9C;
    // 0x8006DD68: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8006DD6C:
    // 0x8006DD6C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x8006DD70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DD74: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DD78: nop

    // 0x8006DD7C: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x8006DD80: nop

    // 0x8006DD84: bc1f        L_8006DD9C
    if (!c1cs) {
        // 0x8006DD88: nop
    
            goto L_8006DD9C;
    }
    // 0x8006DD88: nop

    // 0x8006DD8C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x8006DD90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006DD94: nop

    // 0x8006DD98: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_8006DD9C:
    // 0x8006DD9C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8006DDA0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006DDA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DDA8: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8006DDAC: swc1        $f10, 0x75A4($at)
    MEM_W(0X75A4, ctx->r1) = ctx->f10.u32l;
    // 0x8006DDB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DDB4: lwc1        $f16, 0x75A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75A4);
    // 0x8006DDB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006DDBC: nop

    // 0x8006DDC0: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x8006DDC4: nop

    // 0x8006DDC8: bc1f        L_8006DDDC
    if (!c1cs) {
        // 0x8006DDCC: nop
    
            goto L_8006DDDC;
    }
    // 0x8006DDCC: nop

    // 0x8006DDD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006DDD4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006DDD8: swc1        $f4, 0x75A4($at)
    MEM_W(0X75A4, ctx->r1) = ctx->f4.u32l;
L_8006DDDC:
    // 0x8006DDDC: b           L_8006DDE4
    // 0x8006DDE0: nop

        goto L_8006DDE4;
    // 0x8006DDE0: nop

L_8006DDE4:
    // 0x8006DDE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006DDE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8006DDEC: jr          $ra
    // 0x8006DDF0: nop

    return;
    // 0x8006DDF0: nop

;}
RECOMP_FUNC void func_800FBCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBCB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800FBCB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FBCB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FBCBC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FBCC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FBCC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FBCC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FBCCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FBCD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FBCD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FBCD8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FBCDC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FBCE0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800FBCE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBCE8: nop

    // 0x800FBCEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FBCF0: nop

    // 0x800FBCF4: bne         $t1, $zero, L_800FBD38
    if (ctx->r9 != 0) {
        // 0x800FBCF8: nop
    
            goto L_800FBD38;
    }
    // 0x800FBCF8: nop

    // 0x800FBCFC: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBD00: nop

    // 0x800FBD04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FBD08: nop

    // 0x800FBD0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FBD10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FBD14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBD18: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800FBD1C: addiu       $t5, $t5, 0x5808
    ctx->r13 = ADD32(ctx->r13, 0X5808);
    // 0x800FBD20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBD24: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800FBD28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FBD2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800FBD30: jal         0x8001C0EC
    // 0x800FBD34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800FBD34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
L_800FBD38:
    // 0x800FBD38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FBD3C: jal         0x8001B880
    // 0x800FBD40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_1;
    // 0x800FBD40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800FBD44: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800FBD48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800FBD4C: jal         0x8001B62C
    // 0x800FBD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800FBD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800FBD54: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x800FBD58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBD5C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800FBD60: addiu       $t6, $t6, 0x5808
    ctx->r14 = ADD32(ctx->r14, 0X5808);
    // 0x800FBD64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBD68: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800FBD6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800FBD70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FBD74: jal         0x8001C0EC
    // 0x800FBD78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800FBD78: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x800FBD7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBD80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBD84: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800FBD88: jal         0x8001B6BC
    // 0x800FBD8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B6BC(rdram, ctx);
        goto after_4;
    // 0x800FBD8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800FBD90: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FBD94: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800FBD98: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBD9C: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800FBDA0: nop

    // 0x800FBDA4: swc1        $f4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f4.u32l;
    // 0x800FBDA8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800FBDAC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800FBDB0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBDB4: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800FBDB8: nop

    // 0x800FBDBC: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x800FBDC0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800FBDC4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x800FBDC8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FBDCC: lwc1        $f8, 0x57B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X57B8);
    // 0x800FBDD0: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800FBDD4: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBDD8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800FBDDC: swc1        $f16, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f16.u32l;
    // 0x800FBDE0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800FBDE4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x800FBDE8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800FBDEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FBDF0: lwc1        $f4, 0x1C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800FBDF4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBDF8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800FBDFC: swc1        $f6, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f6.u32l;
    // 0x800FBE00: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBE04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800FBE08: lwc1        $f8, 0x1C($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800FBE0C: nop

    // 0x800FBE10: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800FBE14: nop

    // 0x800FBE18: bc1f        L_800FBE3C
    if (!c1cs) {
        // 0x800FBE1C: nop
    
            goto L_800FBE3C;
    }
    // 0x800FBE1C: nop

    // 0x800FBE20: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800FBE24: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800FBE28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800FBE2C: lwc1        $f16, 0x1C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800FBE30: nop

    // 0x800FBE34: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800FBE38: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
L_800FBE3C:
    // 0x800FBE3C: b           L_800FBE44
    // 0x800FBE40: nop

        goto L_800FBE44;
    // 0x800FBE40: nop

L_800FBE44:
    // 0x800FBE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FBE48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800FBE4C: jr          $ra
    // 0x800FBE50: nop

    return;
    // 0x800FBE50: nop

;}
RECOMP_FUNC void func_800CA63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA63C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA640: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800CA644: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CA648: bne         $t6, $at, L_800CA6CC
    if (ctx->r14 != ctx->r1) {
        // 0x800CA64C: nop
    
            goto L_800CA6CC;
    }
    // 0x800CA64C: nop

    // 0x800CA650: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800CA654: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800CA658: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CA65C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CA660: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CA664: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CA668: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CA66C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CA670: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CA674: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x800CA678: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CA67C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CA680: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CA684: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CA688: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CA68C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CA690: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CA694: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CA698: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CA69C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800CA6A0: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
    // 0x800CA6A4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800CA6A8: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800CA6AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CA6B0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800CA6B4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CA6B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CA6BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CA6C0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CA6C4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CA6C8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800CA6CC:
    // 0x800CA6CC: jr          $ra
    // 0x800CA6D0: nop

    return;
    // 0x800CA6D0: nop

    // 0x800CA6D4: jr          $ra
    // 0x800CA6D8: nop

    return;
    // 0x800CA6D8: nop

;}
RECOMP_FUNC void func_800DCD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DCD50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800DCD54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800DCD58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800DCD5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DCD60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DCD64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DCD68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DCD6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCD70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DCD74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DCD78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DCD7C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DCD80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DCD84: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800DCD88: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800DCD8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DCD90: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x800DCD94: nop

    // 0x800DCD98: beq         $s0, $at, L_800DCDCC
    if (ctx->r16 == ctx->r1) {
        // 0x800DCD9C: nop
    
            goto L_800DCDCC;
    }
    // 0x800DCD9C: nop

    // 0x800DCDA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800DCDA4: beq         $s0, $at, L_800DCDDC
    if (ctx->r16 == ctx->r1) {
        // 0x800DCDA8: nop
    
            goto L_800DCDDC;
    }
    // 0x800DCDA8: nop

    // 0x800DCDAC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800DCDB0: beq         $s0, $at, L_800DCDEC
    if (ctx->r16 == ctx->r1) {
        // 0x800DCDB4: nop
    
            goto L_800DCDEC;
    }
    // 0x800DCDB4: nop

    // 0x800DCDB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800DCDBC: beq         $s0, $at, L_800DCDFC
    if (ctx->r16 == ctx->r1) {
        // 0x800DCDC0: nop
    
            goto L_800DCDFC;
    }
    // 0x800DCDC0: nop

    // 0x800DCDC4: b           L_800DCE0C
    // 0x800DCDC8: nop

        goto L_800DCE0C;
    // 0x800DCDC8: nop

L_800DCDCC:
    // 0x800DCDCC: jal         0x800DC6D0
    // 0x800DCDD0: nop

    func_800DC6D0(rdram, ctx);
        goto after_0;
    // 0x800DCDD0: nop

    after_0:
    // 0x800DCDD4: b           L_800DCE14
    // 0x800DCDD8: nop

        goto L_800DCE14;
    // 0x800DCDD8: nop

L_800DCDDC:
    // 0x800DCDDC: jal         0x800DC984
    // 0x800DCDE0: nop

    func_800DC984(rdram, ctx);
        goto after_1;
    // 0x800DCDE0: nop

    after_1:
    // 0x800DCDE4: b           L_800DCE14
    // 0x800DCDE8: nop

        goto L_800DCE14;
    // 0x800DCDE8: nop

L_800DCDEC:
    // 0x800DCDEC: jal         0x800DCAFC
    // 0x800DCDF0: nop

    func_800DCAFC(rdram, ctx);
        goto after_2;
    // 0x800DCDF0: nop

    after_2:
    // 0x800DCDF4: b           L_800DCE14
    // 0x800DCDF8: nop

        goto L_800DCE14;
    // 0x800DCDF8: nop

L_800DCDFC:
    // 0x800DCDFC: jal         0x800DCD20
    // 0x800DCE00: nop

    func_800DCD20(rdram, ctx);
        goto after_3;
    // 0x800DCE00: nop

    after_3:
    // 0x800DCE04: b           L_800DCE14
    // 0x800DCE08: nop

        goto L_800DCE14;
    // 0x800DCE08: nop

L_800DCE0C:
    // 0x800DCE0C: b           L_800DCE14
    // 0x800DCE10: nop

        goto L_800DCE14;
    // 0x800DCE10: nop

L_800DCE14:
    // 0x800DCE14: b           L_800DCE1C
    // 0x800DCE18: nop

        goto L_800DCE1C;
    // 0x800DCE18: nop

L_800DCE1C:
    // 0x800DCE1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800DCE20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800DCE24: jr          $ra
    // 0x800DCE28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800DCE28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D5848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D584C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D5850: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D5854: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D5858: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D585C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D5860: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D5864: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D5868: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D586C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D5870: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D5874: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D5878: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D587C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D5880: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D5884: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D5888: addiu       $a1, $a1, 0x415C
    ctx->r5 = ADD32(ctx->r5, 0X415C);
    // 0x800D588C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D5890: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D5894: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D5898: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D589C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D58A0: jal         0x80027464
    // 0x800D58A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D58A4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D58A8: b           L_800D58B0
    // 0x800D58AC: nop

        goto L_800D58B0;
    // 0x800D58AC: nop

L_800D58B0:
    // 0x800D58B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D58B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D58B8: jr          $ra
    // 0x800D58BC: nop

    return;
    // 0x800D58BC: nop

;}
RECOMP_FUNC void func_800F6F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F6F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F6FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F6FA4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F6FA8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F6FAC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F6FB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F6FB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6FB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F6FBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F6FC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F6FC4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F6FC8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F6FCC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F6FD0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6FD4: nop

    // 0x800F6FD8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F6FDC: nop

    // 0x800F6FE0: bne         $t1, $zero, L_800F7000
    if (ctx->r9 != 0) {
        // 0x800F6FE4: nop
    
            goto L_800F7000;
    }
    // 0x800F6FE4: nop

    // 0x800F6FE8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6FEC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F6FF0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F6FF4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800F6FF8: nop

    // 0x800F6FFC: sh          $zero, 0x108($t4)
    MEM_H(0X108, ctx->r12) = 0;
L_800F7000:
    // 0x800F7000: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F7004: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F7008: jal         0x8002B0E4
    // 0x800F700C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800F700C: nop

    after_0:
    // 0x800F7010: b           L_800F7018
    // 0x800F7014: nop

        goto L_800F7018;
    // 0x800F7014: nop

L_800F7018:
    // 0x800F7018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F701C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F7020: jr          $ra
    // 0x800F7024: nop

    return;
    // 0x800F7024: nop

;}
RECOMP_FUNC void func_800C156C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C156C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C1570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C1574: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C1578: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C157C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C1580: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C1584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C158C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C1590: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C1594: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C1598: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C159C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C15A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C15A4: nop

    // 0x800C15A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C15AC: nop

    // 0x800C15B0: bne         $t1, $zero, L_800C1674
    if (ctx->r9 != 0) {
        // 0x800C15B4: nop
    
            goto L_800C1674;
    }
    // 0x800C15B4: nop

    // 0x800C15B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C15BC: nop

    // 0x800C15C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C15C4: nop

    // 0x800C15C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C15CC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C15D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C15D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C15D8: nop

    // 0x800C15DC: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800C15E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C15E4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C15E8: nop

    // 0x800C15EC: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800C15F0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C15F4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C15F8: nop

    // 0x800C15FC: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800C1600: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C1604: nop

    // 0x800C1608: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
    // 0x800C160C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1614: jal         0x8001BBDC
    // 0x800C1618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C1618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800C161C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1620: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800C1624: addiu       $t9, $t9, 0x7FF0
    ctx->r25 = ADD32(ctx->r25, 0X7FF0);
    // 0x800C1628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C162C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800C1630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C1634: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C1638: jal         0x8001C0EC
    // 0x800C163C: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800C163C: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    after_1:
    // 0x800C1640: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C1644: nop

    // 0x800C1648: lh          $t1, 0xB6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB6);
    // 0x800C164C: nop

    // 0x800C1650: bne         $t1, $zero, L_800C1674
    if (ctx->r9 != 0) {
        // 0x800C1654: nop
    
            goto L_800C1674;
    }
    // 0x800C1654: nop

    // 0x800C1658: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C165C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1660: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C1664: addiu       $a3, $a3, -0x7FBC
    ctx->r7 = ADD32(ctx->r7, -0X7FBC);
    // 0x800C1668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C166C: jal         0x8001ABF4
    // 0x800C1670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800C1670: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800C1674:
    // 0x800C1674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C167C: jal         0x8002A1FC
    // 0x800C1680: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_3;
    // 0x800C1680: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_3:
    // 0x800C1684: beq         $v0, $zero, L_800C16A4
    if (ctx->r2 == 0) {
        // 0x800C1688: nop
    
            goto L_800C16A4;
    }
    // 0x800C1688: nop

    // 0x800C168C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C1690: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800C1694: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800C1698: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C169C: nop

    // 0x800C16A0: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800C16A4:
    // 0x800C16A4: b           L_800C16AC
    // 0x800C16A8: nop

        goto L_800C16AC;
    // 0x800C16A8: nop

L_800C16AC:
    // 0x800C16AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C16B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C16B4: jr          $ra
    // 0x800C16B8: nop

    return;
    // 0x800C16B8: nop

;}
RECOMP_FUNC void func_800C9420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9420: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800C9424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9428: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C942C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C9430: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9434: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9438: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C943C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9440: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9444: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C944C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9450: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C9454: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C9458: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800C945C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800C9460: nop

    // 0x800C9464: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C9468: nop

    // 0x800C946C: bne         $t1, $zero, L_800C94CC
    if (ctx->r9 != 0) {
        // 0x800C9470: nop
    
            goto L_800C94CC;
    }
    // 0x800C9470: nop

    // 0x800C9474: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800C9478: nop

    // 0x800C947C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C9480: nop

    // 0x800C9484: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C9488: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C948C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9490: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800C9494: addiu       $t5, $t5, -0x7E84
    ctx->r13 = ADD32(ctx->r13, -0X7E84);
    // 0x800C9498: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C949C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800C94A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C94A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800C94A8: jal         0x8001C0EC
    // 0x800C94AC: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C94AC: addiu       $a3, $zero, 0x5B
    ctx->r7 = ADD32(0, 0X5B);
    after_0:
    // 0x800C94B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C94B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C94B8: jal         0x8001BBDC
    // 0x800C94BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C94BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800C94C0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800C94C4: nop

    // 0x800C94C8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_800C94CC:
    // 0x800C94CC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800C94D0: nop

    // 0x800C94D4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800C94D8: nop

    // 0x800C94DC: bne         $t8, $zero, L_800C97A8
    if (ctx->r24 != 0) {
        // 0x800C94E0: nop
    
            goto L_800C97A8;
    }
    // 0x800C94E0: nop

    // 0x800C94E4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800C94E8: nop

    // 0x800C94EC: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800C94F0: nop

    // 0x800C94F4: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x800C94F8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800C94FC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800C9500: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C9504: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800C9508: nop

    // 0x800C950C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800C9510: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x800C9514: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800C9518: nop

    // 0x800C951C: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800C9520: nop

    // 0x800C9524: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x800C9528: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800C952C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C9530: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C9534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C9538: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C953C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800C9540: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C9544: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800C9548: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800C954C: lwc1        $f18, 0x1C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800C9550: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800C9554: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C9558: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800C955C: addiu       $a1, $a1, 0x3F94
    ctx->r5 = ADD32(ctx->r5, 0X3F94);
    // 0x800C9560: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C9564: jal         0x80027464
    // 0x800C9568: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_2;
    // 0x800C9568: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x800C956C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800C9570: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800C9574: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C9578: beq         $t4, $at, L_800C9600
    if (ctx->r12 == ctx->r1) {
        // 0x800C957C: nop
    
            goto L_800C9600;
    }
    // 0x800C957C: nop

    // 0x800C9580: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800C9584: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C9588: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800C958C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C9590: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9594: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C9598: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C959C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C95A0: lwc1        $f4, 0x4F40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F40);
    // 0x800C95A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C95A8: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C95AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C95B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C95B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C95B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C95BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C95C0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C95C4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C95C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C95CC: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x800C95D0: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x800C95D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C95D8: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x800C95DC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800C95E0: nop

    // 0x800C95E4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C95E8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C95EC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C95F0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C95F4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C95F8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C95FC: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800C9600:
    // 0x800C9600: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C9604: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C9608: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800C960C: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800C9610: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C9614: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800C9618: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800C961C: addiu       $a1, $a1, 0x3F94
    ctx->r5 = ADD32(ctx->r5, 0X3F94);
    // 0x800C9620: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C9624: jal         0x80027464
    // 0x800C9628: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x800C9628: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x800C962C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800C9630: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800C9634: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C9638: beq         $t4, $at, L_800C96C0
    if (ctx->r12 == ctx->r1) {
        // 0x800C963C: nop
    
            goto L_800C96C0;
    }
    // 0x800C963C: nop

    // 0x800C9640: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800C9644: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C9648: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800C964C: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C9650: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9654: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C9658: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C965C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9660: lwc1        $f10, 0x4F44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4F44);
    // 0x800C9664: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9668: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C966C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C9670: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C9674: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9678: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C967C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9680: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C9684: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C9688: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C968C: swc1        $f10, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f10.u32l;
    // 0x800C9690: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x800C9694: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C9698: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x800C969C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800C96A0: nop

    // 0x800C96A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C96A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C96AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C96B0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C96B4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C96B8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C96BC: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800C96C0:
    // 0x800C96C0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800C96C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C96C8: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800C96CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800C96D0: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800C96D4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800C96D8: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800C96DC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800C96E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C96E4: lwc1        $f16, 0x1C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800C96E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C96EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C96F0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x800C96F4: addiu       $a1, $a1, 0x3F94
    ctx->r5 = ADD32(ctx->r5, 0X3F94);
    // 0x800C96F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C96FC: jal         0x80027464
    // 0x800C9700: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_4;
    // 0x800C9700: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x800C9704: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800C9708: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800C970C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C9710: beq         $t4, $at, L_800C9798
    if (ctx->r12 == ctx->r1) {
        // 0x800C9714: nop
    
            goto L_800C9798;
    }
    // 0x800C9714: nop

    // 0x800C9718: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800C971C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800C9720: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800C9724: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C9728: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C972C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C9730: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9734: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9738: lwc1        $f18, 0x4F48($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F48);
    // 0x800C973C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9740: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800C9744: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C9748: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C974C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9750: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9754: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9758: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C975C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C9760: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C9764: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x800C9768: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x800C976C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C9770: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x800C9774: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800C9778: nop

    // 0x800C977C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C9780: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C9784: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C9788: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C978C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C9790: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800C9794: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800C9798:
    // 0x800C9798: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800C979C: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x800C97A0: b           L_800C97C0
    // 0x800C97A4: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
        goto L_800C97C0;
    // 0x800C97A4: sh          $t3, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r11;
L_800C97A8:
    // 0x800C97A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800C97AC: nop

    // 0x800C97B0: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800C97B4: nop

    // 0x800C97B8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800C97BC: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
L_800C97C0:
    // 0x800C97C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C97C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C97C8: jal         0x8002A1FC
    // 0x800C97CC: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x800C97CC: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_5:
    // 0x800C97D0: bne         $v0, $zero, L_800C97F0
    if (ctx->r2 != 0) {
        // 0x800C97D4: nop
    
            goto L_800C97F0;
    }
    // 0x800C97D4: nop

    // 0x800C97D8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800C97DC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800C97E0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800C97E4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800C97E8: nop

    // 0x800C97EC: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800C97F0:
    // 0x800C97F0: b           L_800C97F8
    // 0x800C97F4: nop

        goto L_800C97F8;
    // 0x800C97F4: nop

L_800C97F8:
    // 0x800C97F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C97FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C9800: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C9804: jr          $ra
    // 0x800C9808: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800C9808: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8008ABC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008ABC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008ABC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008ABCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008ABD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8008ABD4: jal         0x80069E00
    // 0x8008ABD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069E00(rdram, ctx);
        goto after_0;
    // 0x8008ABD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8008ABDC: b           L_8008ABE4
    // 0x8008ABE0: nop

        goto L_8008ABE4;
    // 0x8008ABE0: nop

L_8008ABE4:
    // 0x8008ABE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008ABE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008ABEC: jr          $ra
    // 0x8008ABF0: nop

    return;
    // 0x8008ABF0: nop

;}
RECOMP_FUNC void func_800CD808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CD808: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800CD80C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800CD810: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800CD814: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800CD818: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x800CD81C: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800CD820: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800CD824: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CD828: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CD82C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CD830: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD83C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD840: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD844: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CD848: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CD84C: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x800CD850: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CD854: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CD858: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800CD85C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CD860: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CD864: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CD868: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CD86C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CD870: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CD874: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800CD878: nop

    // 0x800CD87C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x800CD880: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800CD884: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800CD888: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800CD88C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800CD890: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CD894: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CD898: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CD89C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CD8A0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800CD8A4: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800CD8A8: nop

    // 0x800CD8AC: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x800CD8B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CD8B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CD8B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CD8BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CD8C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD8C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CD8C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CD8CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CD8D0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CD8D4: lh          $t8, 0x423C($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423C);
    // 0x800CD8D8: nop

    // 0x800CD8DC: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x800CD8E0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD8E4: nop

    // 0x800CD8E8: lbu         $t0, 0x132($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X132);
    // 0x800CD8EC: nop

    // 0x800CD8F0: bne         $t0, $zero, L_800CD9F4
    if (ctx->r8 != 0) {
        // 0x800CD8F4: nop
    
            goto L_800CD9F4;
    }
    // 0x800CD8F4: nop

    // 0x800CD8F8: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD8FC: nop

    // 0x800CD900: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800CD904: nop

    // 0x800CD908: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800CD90C: sb          $t3, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r11;
    // 0x800CD910: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD914: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x800CD918: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800CD91C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800CD920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CD924: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD928: nop

    // 0x800CD92C: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800CD930: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CD934: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD938: nop

    // 0x800CD93C: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x800CD940: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x800CD944: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800CD948: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CD94C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CD950: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CD954: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CD958: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD95C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CD960: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800CD964: addu        $t2, $t9, $t0
    ctx->r10 = ADD32(ctx->r25, ctx->r8);
    // 0x800CD968: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800CD96C: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800CD970: nop

    // 0x800CD974: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800CD978: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800CD97C: nop

    // 0x800CD980: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800CD984: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800CD988: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800CD98C: nop

    // 0x800CD990: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800CD994: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800CD998: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800CD99C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x800CD9A0: nop

    // 0x800CD9A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD9A8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800CD9AC: addiu       $t5, $t5, -0x7D2C
    ctx->r13 = ADD32(ctx->r13, -0X7D2C);
    // 0x800CD9B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD9B4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800CD9B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD9BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CD9C0: jal         0x8001C0EC
    // 0x800CD9C4: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CD9C4: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_0:
    // 0x800CD9C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD9CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD9D0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CD9D4: addiu       $a3, $a3, -0x7CF4
    ctx->r7 = ADD32(ctx->r7, -0X7CF4);
    // 0x800CD9D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CD9DC: jal         0x8001ABF4
    // 0x800CD9E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800CD9E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800CD9E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CD9E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CD9EC: jal         0x8001BBDC
    // 0x800CD9F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x800CD9F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_800CD9F4:
    // 0x800CD9F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CD9F8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CD9FC: nop

    // 0x800CDA00: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
    // 0x800CDA04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDA08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDA0C: jal         0x80029C40
    // 0x800CDA10: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800CDA10: nop

    after_3:
    // 0x800CDA14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CDA18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CDA1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDA20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDA24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800CDA28: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800CDA2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CDA30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x800CDA34: jal         0x80029018
    // 0x800CDA38: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800CDA38: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800CDA3C: beq         $v0, $zero, L_800CDA60
    if (ctx->r2 == 0) {
        // 0x800CDA40: nop
    
            goto L_800CDA60;
    }
    // 0x800CDA40: nop

    // 0x800CDA44: jal         0x800297DC
    // 0x800CDA48: nop

    func_800297DC(rdram, ctx);
        goto after_5;
    // 0x800CDA48: nop

    after_5:
    // 0x800CDA4C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDA50: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDA54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800CDA58: jal         0x80029824
    // 0x800CDA5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_6;
    // 0x800CDA5C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800CDA60:
    // 0x800CDA60: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CDA64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CDA68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDA6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDA70: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800CDA74: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x800CDA78: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CDA7C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CDA80: jal         0x800295C0
    // 0x800CDA84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800295C0(rdram, ctx);
        goto after_7;
    // 0x800CDA84: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x800CDA88: beq         $v0, $zero, L_800CDAA0
    if (ctx->r2 == 0) {
        // 0x800CDA8C: nop
    
            goto L_800CDAA0;
    }
    // 0x800CDA8C: nop

    // 0x800CDA90: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800CDA94: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDA98: b           L_800CDAB0
    // 0x800CDA9C: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
        goto L_800CDAB0;
    // 0x800CDA9C: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
L_800CDAA0:
    // 0x800CDAA0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800CDAA4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDAA8: nop

    // 0x800CDAAC: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
L_800CDAB0:
    // 0x800CDAB0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800CDAB4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x800CDAB8: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CDABC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDAC0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDAC4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CDAC8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDACC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x800CDAD0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x800CDAD4: lwc1        $f22, 0x0($t9)
    ctx->f22.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800CDAD8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CDADC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDAE0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800CDAE4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800CDAE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CDAEC: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x800CDAF0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800CDAF4: swc1        $f22, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f22.u32l;
    // 0x800CDAF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDAFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800CDB00: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800CDB04: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800CDB08: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800CDB0C: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CDB10: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x800CDB14: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800CDB18: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800CDB1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDB20: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800CDB24: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x800CDB28: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x800CDB2C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CDB30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CDB34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDB38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CDB3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDB40: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CDB44: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CDB48: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CDB4C: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800CDB50: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDB54: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x800CDB58: lwc1        $f10, 0x4($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800CDB5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CDB60: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800CDB64: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x800CDB68: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x800CDB6C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDB70: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CDB74: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800CDB78: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDB7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CDB80: lwc1        $f18, 0x4($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800CDB84: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CDB88: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDB8C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800CDB90: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CDB94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDB98: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CDB9C: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800CDBA0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800CDBA4: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDBA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CDBAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDBB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CDBB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDBB8: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800CDBBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CDBC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDBC4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CDBC8: swc1        $f8, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f8.u32l;
    // 0x800CDBCC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800CDBD0: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800CDBD4: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CDBD8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDBDC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDBE0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CDBE4: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDBE8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800CDBEC: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800CDBF0: lwc1        $f22, 0x8($t8)
    ctx->f22.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800CDBF4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CDBF8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDBFC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CDC00: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CDC04: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CDC08: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CDC0C: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CDC10: swc1        $f22, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f22.u32l;
    // 0x800CDC14: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDC18: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CDC1C: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDC20: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CDC24: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CDC28: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CDC2C: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x800CDC30: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDC34: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CDC38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDC3C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CDC40: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x800CDC44: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800CDC48: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800CDC4C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CDC50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDC54: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDC58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CDC5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CDC60: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800CDC64: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x800CDC68: lwc1        $f22, 0x1C($t5)
    ctx->f22.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800CDC6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CDC70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDC74: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800CDC78: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800CDC7C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CDC80: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800CDC84: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x800CDC88: swc1        $f22, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f22.u32l;
    // 0x800CDC8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDC90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800CDC94: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x800CDC98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CDC9C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800CDCA0: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CDCA4: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800CDCA8: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x800CDCAC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CDCB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDCB4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CDCB8: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x800CDCBC: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800CDCC0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800CDCC4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CDCC8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDCCC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDCD0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CDCD4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDCD8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CDCDC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800CDCE0: lwc1        $f22, 0x3C($t1)
    ctx->f22.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x800CDCE4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CDCE8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDCEC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CDCF0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CDCF4: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CDCF8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CDCFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CDD00: swc1        $f22, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f22.u32l;
    // 0x800CDD04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDD08: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CDD0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CDD10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CDD14: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CDD18: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x800CDD1C: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800CDD20: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CDD24: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CDD28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDD2C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CDD30: swc1        $f20, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f20.u32l;
    // 0x800CDD34: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDD38: nop

    // 0x800CDD3C: lh          $t3, 0xA6($t0)
    ctx->r11 = MEM_H(ctx->r8, 0XA6);
    // 0x800CDD40: lh          $t9, 0xBA($t0)
    ctx->r25 = MEM_H(ctx->r8, 0XBA);
    // 0x800CDD44: nop

    // 0x800CDD48: subu        $t1, $t3, $t9
    ctx->r9 = SUB32(ctx->r11, ctx->r25);
    // 0x800CDD4C: bne         $t1, $zero, L_800CDF94
    if (ctx->r9 != 0) {
        // 0x800CDD50: nop
    
            goto L_800CDF94;
    }
    // 0x800CDD50: nop

    // 0x800CDD54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CDD58: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDD5C: nop

    // 0x800CDD60: swc1        $f10, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f10.u32l;
    // 0x800CDD64: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CDD68: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDD6C: nop

    // 0x800CDD70: swc1        $f16, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f16.u32l;
    // 0x800CDD74: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDD78: nop

    // 0x800CDD7C: lwc1        $f20, 0x2C($t5)
    ctx->f20.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x800CDD80: nop

    // 0x800CDD84: swc1        $f20, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f20.u32l;
    // 0x800CDD88: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDD8C: nop

    // 0x800CDD90: swc1        $f20, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f20.u32l;
    // 0x800CDD94: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x800CDD98: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x800CDD9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CDDA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CDDA4: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CDDA8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CDDAC: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDDB0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CDDB4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CDDB8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CDDBC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CDDC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDDC4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800CDDC8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDDCC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CDDD0: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x800CDDD4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800CDDD8: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x800CDDDC: swc1        $f18, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f18.u32l;
    // 0x800CDDE0: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800CDDE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDDE8: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x800CDDEC: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x800CDDF0: nop

    // 0x800CDDF4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CDDF8: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDDFC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CDE00: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDE04: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CDE08: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CDE0C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CDE10: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x800CDE14: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800CDE18: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CDE1C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CDE20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800CDE24: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CDE28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CDE2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800CDE30: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CDE34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800CDE38: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CDE3C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDE40: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800CDE44: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800CDE48: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800CDE4C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800CDE50: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800CDE54: addu        $t3, $t8, $t0
    ctx->r11 = ADD32(ctx->r24, ctx->r8);
    // 0x800CDE58: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x800CDE5C: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800CDE60: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDE64: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800CDE68: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800CDE6C: nop

    // 0x800CDE70: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800CDE74: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CDE78: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CDE7C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800CDE80: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CDE84: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CDE88: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CDE8C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x800CDE90: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800CDE94: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x800CDE98: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDE9C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800CDEA0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CDEA4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CDEA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800CDEAC: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x800CDEB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CDEB4: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CDEB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDEBC: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800CDEC0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800CDEC4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800CDEC8: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800CDECC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CDED0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800CDED4: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800CDED8: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x800CDEDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CDEE0: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x800CDEE4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x800CDEE8: nop

    // 0x800CDEEC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800CDEF0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDEF4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CDEF8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800CDEFC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CDF00: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800CDF04: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800CDF08: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDF0C: nop

    // 0x800CDF10: sh          $zero, 0xBA($t9)
    MEM_H(0XBA, ctx->r25) = 0;
    // 0x800CDF14: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDF18: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800CDF1C: sh          $t1, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r9;
    // 0x800CDF20: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDF24: nop

    // 0x800CDF28: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800CDF2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDF30: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800CDF34: addiu       $t5, $t5, -0x7D2C
    ctx->r13 = ADD32(ctx->r13, -0X7D2C);
    // 0x800CDF38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDF3C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800CDF40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CDF44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800CDF48: jal         0x8001C0EC
    // 0x800CDF4C: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800CDF4C: addiu       $a3, $zero, 0x8C
    ctx->r7 = ADD32(0, 0X8C);
    after_8:
    // 0x800CDF50: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDF54: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CDF58: addiu       $a3, $a3, -0x7CF4
    ctx->r7 = ADD32(ctx->r7, -0X7CF4);
    // 0x800CDF5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDF60: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800CDF64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CDF68: jal         0x8001ABF4
    // 0x800CDF6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800CDF6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800CDF70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CDF74: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CDF78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CDF7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CDF80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800CDF84: jal         0x800175F0
    // 0x800CDF88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_10;
    // 0x800CDF88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x800CDF8C: b           L_800CDFAC
    // 0x800CDF90: nop

        goto L_800CDFAC;
    // 0x800CDF90: nop

L_800CDF94:
    // 0x800CDF94: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x800CDF98: nop

    // 0x800CDF9C: lh          $t7, 0xBA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XBA);
    // 0x800CDFA0: nop

    // 0x800CDFA4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800CDFA8: sh          $t8, 0xBA($t6)
    MEM_H(0XBA, ctx->r14) = ctx->r24;
L_800CDFAC:
    // 0x800CDFAC: b           L_800CDFB4
    // 0x800CDFB0: nop

        goto L_800CDFB4;
    // 0x800CDFB0: nop

L_800CDFB4:
    // 0x800CDFB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800CDFB8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800CDFBC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800CDFC0: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800CDFC4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800CDFC8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800CDFCC: jr          $ra
    // 0x800CDFD0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800CDFD0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800D375C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D375C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800D3760: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D3764: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D3768: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D376C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D3770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3774: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D377C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D3780: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D3784: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D3788: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800D378C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D3790: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800D3794: nop

    // 0x800D3798: bne         $t0, $zero, L_800D37D0
    if (ctx->r8 != 0) {
        // 0x800D379C: nop
    
            goto L_800D37D0;
    }
    // 0x800D379C: nop

    // 0x800D37A0: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800D37A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D37A8: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x800D37AC: nop

    // 0x800D37B0: bne         $t2, $at, L_800D37D0
    if (ctx->r10 != ctx->r1) {
        // 0x800D37B4: nop
    
            goto L_800D37D0;
    }
    // 0x800D37B4: nop

    // 0x800D37B8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800D37BC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800D37C0: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800D37C4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800D37C8: b           L_800D3814
    // 0x800D37CC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_800D3814;
    // 0x800D37CC: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800D37D0:
    // 0x800D37D0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D37D4: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D37D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D37DC: bne         $t6, $at, L_800D3814
    if (ctx->r14 != ctx->r1) {
        // 0x800D37E0: nop
    
            goto L_800D3814;
    }
    // 0x800D37E0: nop

    // 0x800D37E4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800D37E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D37EC: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800D37F0: nop

    // 0x800D37F4: bne         $t8, $at, L_800D3814
    if (ctx->r24 != ctx->r1) {
        // 0x800D37F8: nop
    
            goto L_800D3814;
    }
    // 0x800D37F8: nop

    // 0x800D37FC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x800D3800: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800D3804: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800D3808: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800D380C: nop

    // 0x800D3810: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800D3814:
    // 0x800D3814: b           L_800D381C
    // 0x800D3818: nop

        goto L_800D381C;
    // 0x800D3818: nop

L_800D381C:
    // 0x800D381C: jr          $ra
    // 0x800D3820: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800D3820: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A8580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8580: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800A8584: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800A8588: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800A858C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A8590: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A8594: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A8598: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A859C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A85A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A85A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A85A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A85AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A85B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A85B4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800A85B8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800A85BC: nop

    // 0x800A85C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A85C4: nop

    // 0x800A85C8: bne         $t1, $zero, L_800A8664
    if (ctx->r9 != 0) {
        // 0x800A85CC: nop
    
            goto L_800A8664;
    }
    // 0x800A85CC: nop

    // 0x800A85D0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800A85D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A85D8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A85DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A85E0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800A85E4: nop

    // 0x800A85E8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A85EC: jal         0x80014E80
    // 0x800A85F0: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x800A85F0: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_0:
    // 0x800A85F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A85F8: addiu       $t5, $s0, 0x1
    ctx->r13 = ADD32(ctx->r16, 0X1);
    // 0x800A85FC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800A8600: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800A8604: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A8608: jal         0x80015538
    // 0x800A860C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800A860C: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x800A8610: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800A8614: nop

    // 0x800A8618: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x800A861C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800A8620: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A8624: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800A8628: nop

    // 0x800A862C: swc1        $f8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f8.u32l;
    // 0x800A8630: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800A8634: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800A8638: nop

    // 0x800A863C: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x800A8640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8648: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A864C: jal         0x80029EF8
    // 0x800A8650: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800A8650: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_2:
    // 0x800A8654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A865C: jal         0x800272E8
    // 0x800A8660: nop

    func_800272E8(rdram, ctx);
        goto after_3;
    // 0x800A8660: nop

    after_3:
L_800A8664:
    // 0x800A8664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A866C: jal         0x80028FA0
    // 0x800A8670: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x800A8670: nop

    after_4:
    // 0x800A8674: beq         $v0, $zero, L_800A86A0
    if (ctx->r2 == 0) {
        // 0x800A8678: nop
    
            goto L_800A86A0;
    }
    // 0x800A8678: nop

    // 0x800A867C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8680: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8684: jal         0x80029B60
    // 0x800A8688: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x800A8688: nop

    after_5:
    // 0x800A868C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800A8690: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800A8694: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800A8698: nop

    // 0x800A869C: swc1        $f16, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f16.u32l;
L_800A86A0:
    // 0x800A86A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A86A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A86A8: jal         0x80029C40
    // 0x800A86AC: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x800A86AC: nop

    after_6:
    // 0x800A86B0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800A86B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800A86B8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800A86BC: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800A86C0: jal         0x80015538
    // 0x800A86C4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x800A86C4: nop

    after_7:
    // 0x800A86C8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800A86CC: nop

    // 0x800A86D0: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x800A86D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800A86D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A86DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A86E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A86E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800A86E8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800A86EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A86F0: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800A86F4: jal         0x80029018
    // 0x800A86F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x800A86F8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800A86FC: beq         $v0, $zero, L_800A8750
    if (ctx->r2 == 0) {
        // 0x800A8700: nop
    
            goto L_800A8750;
    }
    // 0x800A8700: nop

    // 0x800A8704: jal         0x800297DC
    // 0x800A8708: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800A8708: nop

    after_9:
    // 0x800A870C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A8710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8714: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800A8718: jal         0x80029824
    // 0x800A871C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800A871C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800A8720: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800A8724: lh          $t2, 0x51A0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X51A0);
    // 0x800A8728: nop

    // 0x800A872C: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x800A8730: beq         $t3, $zero, L_800A8750
    if (ctx->r11 == 0) {
        // 0x800A8734: nop
    
            goto L_800A8750;
    }
    // 0x800A8734: nop

    // 0x800A8738: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A873C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8740: jal         0x8002B0E4
    // 0x800A8744: nop

    func_8002B0E4(rdram, ctx);
        goto after_11;
    // 0x800A8744: nop

    after_11:
    // 0x800A8748: b           L_800A8848
    // 0x800A874C: nop

        goto L_800A8848;
    // 0x800A874C: nop

L_800A8750:
    // 0x800A8750: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800A8754: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800A8758: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A875C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8760: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800A8764: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x800A8768: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800A876C: jal         0x80029F58
    // 0x800A8770: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_12;
    // 0x800A8770: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x800A8774: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A8778: bne         $v0, $at, L_800A8840
    if (ctx->r2 != ctx->r1) {
        // 0x800A877C: nop
    
            goto L_800A8840;
    }
    // 0x800A877C: nop

    // 0x800A8780: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800A8784: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800A8788: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800A878C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800A8790: nop

    // 0x800A8794: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x800A8798: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800A879C: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x800A87A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800A87A4: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x800A87A8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A87AC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800A87B0: lw          $t0, 0x7740($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7740);
    // 0x800A87B4: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x800A87B8: bne         $t0, $at, L_800A87D8
    if (ctx->r8 != ctx->r1) {
        // 0x800A87BC: nop
    
            goto L_800A87D8;
    }
    // 0x800A87BC: nop

    // 0x800A87C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A87C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A87C8: jal         0x8002B0E4
    // 0x800A87CC: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x800A87CC: nop

    after_13:
    // 0x800A87D0: b           L_800A8848
    // 0x800A87D4: nop

        goto L_800A8848;
    // 0x800A87D4: nop

L_800A87D8:
    // 0x800A87D8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800A87DC: addiu       $t2, $sp, 0x3C
    ctx->r10 = ADD32(ctx->r29, 0X3C);
    // 0x800A87E0: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x800A87E4: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x800A87E8: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x800A87EC: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x800A87F0: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x800A87F4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x800A87F8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x800A87FC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A8800: jal         0x80016C54
    // 0x800A8804: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    func_80016C54(rdram, ctx);
        goto after_14;
    // 0x800A8804: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    after_14:
    // 0x800A8808: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800A880C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A8810: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800A8814: nop

    // 0x800A8818: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x800A881C: nop

    // 0x800A8820: bc1f        L_800A8840
    if (!c1cs) {
        // 0x800A8824: nop
    
            goto L_800A8840;
    }
    // 0x800A8824: nop

    // 0x800A8828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A882C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A8830: jal         0x8002B0E4
    // 0x800A8834: nop

    func_8002B0E4(rdram, ctx);
        goto after_15;
    // 0x800A8834: nop

    after_15:
    // 0x800A8838: b           L_800A8848
    // 0x800A883C: nop

        goto L_800A8848;
    // 0x800A883C: nop

L_800A8840:
    // 0x800A8840: b           L_800A8848
    // 0x800A8844: nop

        goto L_800A8848;
    // 0x800A8844: nop

L_800A8848:
    // 0x800A8848: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800A884C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800A8850: jr          $ra
    // 0x800A8854: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800A8854: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800D7F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D7F08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D7F0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D7F10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D7F14: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D7F18: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D7F1C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D7F20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D7F24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7F28: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D7F2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D7F30: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D7F34: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D7F38: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D7F3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D7F40: beq         $s0, $at, L_800D7F5C
    if (ctx->r16 == ctx->r1) {
        // 0x800D7F44: nop
    
            goto L_800D7F5C;
    }
    // 0x800D7F44: nop

    // 0x800D7F48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D7F4C: beq         $s0, $at, L_800D7F6C
    if (ctx->r16 == ctx->r1) {
        // 0x800D7F50: nop
    
            goto L_800D7F6C;
    }
    // 0x800D7F50: nop

    // 0x800D7F54: b           L_800D7F7C
    // 0x800D7F58: nop

        goto L_800D7F7C;
    // 0x800D7F58: nop

L_800D7F5C:
    // 0x800D7F5C: jal         0x800D7704
    // 0x800D7F60: nop

    func_800D7704(rdram, ctx);
        goto after_0;
    // 0x800D7F60: nop

    after_0:
    // 0x800D7F64: b           L_800D7F84
    // 0x800D7F68: nop

        goto L_800D7F84;
    // 0x800D7F68: nop

L_800D7F6C:
    // 0x800D7F6C: jal         0x800D7CD0
    // 0x800D7F70: nop

    func_800D7CD0(rdram, ctx);
        goto after_1;
    // 0x800D7F70: nop

    after_1:
    // 0x800D7F74: b           L_800D7F84
    // 0x800D7F78: nop

        goto L_800D7F84;
    // 0x800D7F78: nop

L_800D7F7C:
    // 0x800D7F7C: b           L_800D7F84
    // 0x800D7F80: nop

        goto L_800D7F84;
    // 0x800D7F80: nop

L_800D7F84:
    // 0x800D7F84: b           L_800D7F8C
    // 0x800D7F88: nop

        goto L_800D7F8C;
    // 0x800D7F88: nop

L_800D7F8C:
    // 0x800D7F8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D7F90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D7F94: jr          $ra
    // 0x800D7F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D7F98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009CC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009CC78: jr          $ra
    // 0x8009CC7C: nop

    return;
    // 0x8009CC7C: nop

    // 0x8009CC80: jr          $ra
    // 0x8009CC84: nop

    return;
    // 0x8009CC84: nop

;}
RECOMP_FUNC void func_800E5058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E5058: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800E505C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E5060: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E5064: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E5068: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E506C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E5070: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E5074: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E5078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E507C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E5080: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E5084: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E5088: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800E508C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5090: nop

    // 0x800E5094: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E5098: nop

    // 0x800E509C: bne         $t1, $zero, L_800E5114
    if (ctx->r9 != 0) {
        // 0x800E50A0: nop
    
            goto L_800E5114;
    }
    // 0x800E50A0: nop

    // 0x800E50A4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800E50A8: nop

    // 0x800E50AC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E50B0: nop

    // 0x800E50B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E50B8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E50BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800E50C0: nop

    // 0x800E50C4: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E50C8: nop

    // 0x800E50CC: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E50D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E50D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E50D8: addiu       $t7, $t7, -0x6BD8
    ctx->r15 = ADD32(ctx->r15, -0X6BD8);
    // 0x800E50DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E50E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E50E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E50E8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x800E50EC: jal         0x8001C0EC
    // 0x800E50F0: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E50F0: addiu       $a3, $zero, 0x7E
    ctx->r7 = ADD32(0, 0X7E);
    after_0:
    // 0x800E50F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E50F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E50FC: addiu       $a3, $a3, -0x6B6C
    ctx->r7 = ADD32(ctx->r7, -0X6B6C);
    // 0x800E5100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E5104: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x800E5108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E510C: jal         0x8001ABF4
    // 0x800E5110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800E5110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800E5114:
    // 0x800E5114: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E5118: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E511C: jal         0x8001B4AC
    // 0x800E5120: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E5120: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E5124: beq         $v0, $zero, L_800E5144
    if (ctx->r2 == 0) {
        // 0x800E5128: nop
    
            goto L_800E5144;
    }
    // 0x800E5128: nop

    // 0x800E512C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800E5130: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x800E5134: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E5138: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800E513C: nop

    // 0x800E5140: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E5144:
    // 0x800E5144: b           L_800E514C
    // 0x800E5148: nop

        goto L_800E514C;
    // 0x800E5148: nop

L_800E514C:
    // 0x800E514C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E5150: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800E5154: jr          $ra
    // 0x800E5158: nop

    return;
    // 0x800E5158: nop

;}
RECOMP_FUNC void func_800CF968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF968: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CF96C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CF970: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF974: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF978: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF97C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF984: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF98C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF990: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CF994: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CF998: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800CF99C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CF9A0: nop

    // 0x800CF9A4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CF9A8: nop

    // 0x800CF9AC: bne         $t1, $zero, L_800CF9EC
    if (ctx->r9 != 0) {
        // 0x800CF9B0: nop
    
            goto L_800CF9EC;
    }
    // 0x800CF9B0: nop

    // 0x800CF9B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CF9B8: nop

    // 0x800CF9BC: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CF9C0: nop

    // 0x800CF9C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CF9C8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CF9CC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CF9D0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x800CF9D4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CF9D8: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x800CF9DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CF9E0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CF9E4: nop

    // 0x800CF9E8: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_800CF9EC:
    // 0x800CF9EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF9F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF9F4: jal         0x80028FA0
    // 0x800CF9F8: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x800CF9F8: nop

    after_0:
    // 0x800CF9FC: beq         $v0, $zero, L_800CFA1C
    if (ctx->r2 == 0) {
        // 0x800CFA00: nop
    
            goto L_800CFA1C;
    }
    // 0x800CFA00: nop

    // 0x800CFA04: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA08: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800CFA0C: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800CFA10: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA14: nop

    // 0x800CFA18: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800CFA1C:
    // 0x800CFA1C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA20: nop

    // 0x800CFA24: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800CFA28: nop

    // 0x800CFA2C: bne         $t3, $zero, L_800CFA9C
    if (ctx->r11 != 0) {
        // 0x800CFA30: nop
    
            goto L_800CFA9C;
    }
    // 0x800CFA30: nop

    // 0x800CFA34: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFA38: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFA3C: jal         0x8002A640
    // 0x800CFA40: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_1;
    // 0x800CFA40: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x800CFA44: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800CFA48: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800CFA4C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA50: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800CFA54: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800CFA58: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800CFA5C: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800CFA60: lwc1        $f12, 0x1C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x800CFA64: jal         0x80015538
    // 0x800CFA68: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800CFA68: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_2:
    // 0x800CFA6C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA70: nop

    // 0x800CFA74: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x800CFA78: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA7C: nop

    // 0x800CFA80: lwc1        $f8, 0x1C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800CFA84: nop

    // 0x800CFA88: swc1        $f8, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f8.u32l;
    // 0x800CFA8C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFA90: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800CFA94: b           L_800CFAB4
    // 0x800CFA98: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
        goto L_800CFAB4;
    // 0x800CFA98: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
L_800CFA9C:
    // 0x800CFA9C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFAA0: nop

    // 0x800CFAA4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800CFAA8: nop

    // 0x800CFAAC: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800CFAB0: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_800CFAB4:
    // 0x800CFAB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CFAB8: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFABC: nop

    // 0x800CFAC0: swc1        $f10, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f10.u32l;
    // 0x800CFAC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFAC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFACC: jal         0x80029C40
    // 0x800CFAD0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800CFAD0: nop

    after_3:
    // 0x800CFAD4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800CFAD8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800CFADC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CFAE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CFAE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CFAE8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800CFAEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CFAF0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800CFAF4: jal         0x80029018
    // 0x800CFAF8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x800CFAF8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x800CFAFC: beq         $v0, $zero, L_800CFB1C
    if (ctx->r2 == 0) {
        // 0x800CFB00: nop
    
            goto L_800CFB1C;
    }
    // 0x800CFB00: nop

    // 0x800CFB04: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFB08: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x800CFB0C: sh          $t2, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r10;
    // 0x800CFB10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CFB14: nop

    // 0x800CFB18: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800CFB1C:
    // 0x800CFB1C: b           L_800CFB24
    // 0x800CFB20: nop

        goto L_800CFB24;
    // 0x800CFB20: nop

L_800CFB24:
    // 0x800CFB24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFB28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800CFB2C: jr          $ra
    // 0x800CFB30: nop

    return;
    // 0x800CFB30: nop

;}
RECOMP_FUNC void func_800C9B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9B14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C9B18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C9B1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800C9B20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9B24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9B28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9B2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9B30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9B34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9B38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9B3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9B40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C9B44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C9B48: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C9B4C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800C9B50: nop

    // 0x800C9B54: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C9B58: nop

    // 0x800C9B5C: bne         $t1, $zero, L_800C9C7C
    if (ctx->r9 != 0) {
        // 0x800C9B60: nop
    
            goto L_800C9C7C;
    }
    // 0x800C9B60: nop

    // 0x800C9B64: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C9B68: nop

    // 0x800C9B6C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C9B70: nop

    // 0x800C9B74: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C9B78: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C9B7C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x800C9B80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C9B84: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C9B88: nop

    // 0x800C9B8C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C9B90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9B94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9B98: jal         0x8002A46C
    // 0x800C9B9C: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800C9B9C: nop

    after_0:
    // 0x800C9BA0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800C9BA4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C9BA8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800C9BAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800C9BB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800C9BB4: nop

    // 0x800C9BB8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800C9BBC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800C9BC0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800C9BC4: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x800C9BC8: nop

    // 0x800C9BCC: jal         0x80014E80
    // 0x800C9BD0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x800C9BD0: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_1:
    // 0x800C9BD4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C9BD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C9BDC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800C9BE0: nop

    // 0x800C9BE4: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x800C9BE8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800C9BEC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C9BF0: nop

    // 0x800C9BF4: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C9BF8: nop

    // 0x800C9BFC: slti        $at, $t4, 0x168
    ctx->r1 = SIGNED(ctx->r12) < 0X168 ? 1 : 0;
    // 0x800C9C00: bne         $at, $zero, L_800C9C20
    if (ctx->r1 != 0) {
        // 0x800C9C04: nop
    
            goto L_800C9C20;
    }
    // 0x800C9C04: nop

    // 0x800C9C08: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C9C0C: nop

    // 0x800C9C10: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800C9C14: nop

    // 0x800C9C18: addiu       $t6, $t5, -0x168
    ctx->r14 = ADD32(ctx->r13, -0X168);
    // 0x800C9C1C: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
L_800C9C20:
    // 0x800C9C20: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C9C24: nop

    // 0x800C9C28: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800C9C2C: nop

    // 0x800C9C30: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800C9C34: nop

    // 0x800C9C38: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C9C3C: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
    // 0x800C9C40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9C48: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x800C9C4C: jal         0x80029EF8
    // 0x800C9C50: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800C9C50: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_2:
    // 0x800C9C54: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C9C58: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x800C9C5C: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x800C9C60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9C64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9C68: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800C9C6C: addiu       $a3, $a3, 0x77F4
    ctx->r7 = ADD32(ctx->r7, 0X77F4);
    // 0x800C9C70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C9C74: jal         0x8001ABF4
    // 0x800C9C78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800C9C78: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
L_800C9C7C:
    // 0x800C9C7C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800C9C80: nop

    // 0x800C9C84: lh          $t3, 0xA8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XA8);
    // 0x800C9C88: nop

    // 0x800C9C8C: beq         $t3, $zero, L_800C9D00
    if (ctx->r11 == 0) {
        // 0x800C9C90: nop
    
            goto L_800C9D00;
    }
    // 0x800C9C90: nop

    // 0x800C9C94: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C9C98: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9C9C: lwc1        $f16, 0xC($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800C9CA0: lwc1        $f5, 0x4F80($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4F80);
    // 0x800C9CA4: lwc1        $f4, 0x4F84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F84);
    // 0x800C9CA8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C9CAC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x800C9CB0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C9CB4: swc1        $f8, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f8.u32l;
    // 0x800C9CB8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C9CBC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9CC0: lwc1        $f10, 0x10($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X10);
    // 0x800C9CC4: lwc1        $f19, 0x4F88($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X4F88);
    // 0x800C9CC8: lwc1        $f18, 0x4F8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F8C);
    // 0x800C9CCC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x800C9CD0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x800C9CD4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800C9CD8: swc1        $f6, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f6.u32l;
    // 0x800C9CDC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C9CE0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C9CE4: lwc1        $f8, 0x14($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X14);
    // 0x800C9CE8: lwc1        $f17, 0x4F90($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X4F90);
    // 0x800C9CEC: lwc1        $f16, 0x4F94($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F94);
    // 0x800C9CF0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800C9CF4: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800C9CF8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800C9CFC: swc1        $f4, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f4.u32l;
L_800C9D00:
    // 0x800C9D00: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800C9D04: nop

    // 0x800C9D08: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800C9D0C: nop

    // 0x800C9D10: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x800C9D14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C9D18: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C9D1C: nop

    // 0x800C9D20: swc1        $f8, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f8.u32l;
    // 0x800C9D24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9D28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9D2C: jal         0x80029C40
    // 0x800C9D30: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800C9D30: nop

    after_4:
    // 0x800C9D34: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C9D38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C9D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9D40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9D44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800C9D48: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800C9D4C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C9D50: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C9D54: jal         0x80029018
    // 0x800C9D58: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800C9D58: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x800C9D5C: beq         $v0, $zero, L_800C9D80
    if (ctx->r2 == 0) {
        // 0x800C9D60: nop
    
            goto L_800C9D80;
    }
    // 0x800C9D60: nop

    // 0x800C9D64: jal         0x800297DC
    // 0x800C9D68: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800C9D68: nop

    after_6:
    // 0x800C9D6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9D70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9D74: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800C9D78: jal         0x80029824
    // 0x800C9D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800C9D7C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800C9D80:
    // 0x800C9D80: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800C9D84: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C9D88: nop

    // 0x800C9D8C: swc1        $f18, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f18.u32l;
    // 0x800C9D90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C9D94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9D98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9D9C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C9DA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C9DA4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C9DA8: jal         0x80029F58
    // 0x800C9DAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80029F58(rdram, ctx);
        goto after_8;
    // 0x800C9DAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x800C9DB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C9DB4: bne         $v0, $at, L_800C9DE0
    if (ctx->r2 != ctx->r1) {
        // 0x800C9DB8: nop
    
            goto L_800C9DE0;
    }
    // 0x800C9DB8: nop

    // 0x800C9DBC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C9DC0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800C9DC4: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
    // 0x800C9DC8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C9DCC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800C9DD0: sh          $t9, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r25;
    // 0x800C9DD4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C9DD8: nop

    // 0x800C9DDC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800C9DE0:
    // 0x800C9DE0: b           L_800C9DE8
    // 0x800C9DE4: nop

        goto L_800C9DE8;
    // 0x800C9DE4: nop

L_800C9DE8:
    // 0x800C9DE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C9DEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800C9DF0: jr          $ra
    // 0x800C9DF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C9DF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8009C50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C50C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009C510: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009C514: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009C518: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C51C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009C520: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8009C524: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009C528: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C52C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C530: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C534: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C538: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8009C53C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8009C540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009C544: beq         $s0, $at, L_8009C560
    if (ctx->r16 == ctx->r1) {
        // 0x8009C548: nop
    
            goto L_8009C560;
    }
    // 0x8009C548: nop

    // 0x8009C54C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009C550: beq         $s0, $at, L_8009C570
    if (ctx->r16 == ctx->r1) {
        // 0x8009C554: nop
    
            goto L_8009C570;
    }
    // 0x8009C554: nop

    // 0x8009C558: b           L_8009C580
    // 0x8009C55C: nop

        goto L_8009C580;
    // 0x8009C55C: nop

L_8009C560:
    // 0x8009C560: jal         0x8009C224
    // 0x8009C564: nop

    func_8009C224(rdram, ctx);
        goto after_0;
    // 0x8009C564: nop

    after_0:
    // 0x8009C568: b           L_8009C580
    // 0x8009C56C: nop

        goto L_8009C580;
    // 0x8009C56C: nop

L_8009C570:
    // 0x8009C570: jal         0x8009C2E0
    // 0x8009C574: nop

    func_8009C2E0(rdram, ctx);
        goto after_1;
    // 0x8009C574: nop

    after_1:
    // 0x8009C578: b           L_8009C580
    // 0x8009C57C: nop

        goto L_8009C580;
    // 0x8009C57C: nop

L_8009C580:
    // 0x8009C580: b           L_8009C588
    // 0x8009C584: nop

        goto L_8009C588;
    // 0x8009C584: nop

L_8009C588:
    // 0x8009C588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C58C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009C590: jr          $ra
    // 0x8009C594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009C594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800DAC3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DAC3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DAC40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DAC44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800DAC48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800DAC4C: jal         0x8002B0E4
    // 0x800DAC50: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800DAC50: nop

    after_0:
    // 0x800DAC54: b           L_800DAC5C
    // 0x800DAC58: nop

        goto L_800DAC5C;
    // 0x800DAC58: nop

L_800DAC5C:
    // 0x800DAC5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DAC60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DAC64: jr          $ra
    // 0x800DAC68: nop

    return;
    // 0x800DAC68: nop

;}
RECOMP_FUNC void func_800AA8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA8B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AA8B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AA8BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AA8C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AA8C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AA8C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA8D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AA8D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA8D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AA8DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AA8E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA8E4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AA8E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AA8EC: nop

    // 0x800AA8F0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AA8F4: nop

    // 0x800AA8F8: bne         $t1, $zero, L_800AA9AC
    if (ctx->r9 != 0) {
        // 0x800AA8FC: nop
    
            goto L_800AA9AC;
    }
    // 0x800AA8FC: nop

    // 0x800AA900: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AA904: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AA908: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AA90C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AA910: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AA914: nop

    // 0x800AA918: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AA91C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AA920: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AA924: nop

    // 0x800AA928: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AA92C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA930: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA938: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800AA93C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AA940: jal         0x800175F0
    // 0x800AA944: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800AA944: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800AA948: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AA94C: nop

    // 0x800AA950: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800AA954: nop

    // 0x800AA958: bne         $t7, $zero, L_800AA9AC
    if (ctx->r15 != 0) {
        // 0x800AA95C: nop
    
            goto L_800AA9AC;
    }
    // 0x800AA95C: nop

    // 0x800AA960: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AA964: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800AA968: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800AA96C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA970: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800AA974: addiu       $t0, $t0, 0x75D0
    ctx->r8 = ADD32(ctx->r8, 0X75D0);
    // 0x800AA978: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA97C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800AA980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA984: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800AA988: jal         0x8001C0EC
    // 0x800AA98C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800AA98C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_1:
    // 0x800AA990: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA994: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA998: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AA99C: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800AA9A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA9A4: jal         0x8001ABF4
    // 0x800AA9A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800AA9A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800AA9AC:
    // 0x800AA9AC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AA9B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AA9B4: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800AA9B8: nop

    // 0x800AA9BC: bne         $t2, $at, L_800AAA0C
    if (ctx->r10 != ctx->r1) {
        // 0x800AA9C0: nop
    
            goto L_800AAA0C;
    }
    // 0x800AA9C0: nop

    // 0x800AA9C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA9C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA9CC: jal         0x8001B44C
    // 0x800AA9D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800AA9D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800AA9D4: beq         $v0, $zero, L_800AAA0C
    if (ctx->r2 == 0) {
        // 0x800AA9D8: nop
    
            goto L_800AAA0C;
    }
    // 0x800AA9D8: nop

    // 0x800AA9DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA9E0: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800AA9E4: addiu       $t3, $t3, 0x75D0
    ctx->r11 = ADD32(ctx->r11, 0X75D0);
    // 0x800AA9E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA9EC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800AA9F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA9F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800AA9F8: jal         0x8001C0EC
    // 0x800AA9FC: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x800AA9FC: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_4:
    // 0x800AAA00: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AAA04: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800AAA08: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
L_800AAA0C:
    // 0x800AAA0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAA10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAA14: jal         0x80029C40
    // 0x800AAA18: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x800AAA18: nop

    after_5:
    // 0x800AAA1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAA20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAA24: jal         0x80029D04
    // 0x800AAA28: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x800AAA28: nop

    after_6:
    // 0x800AAA2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AAA30: nop

    // 0x800AAA34: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800AAA38: nop

    // 0x800AAA3C: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x800AAA40: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800AAA44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AAA48: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x800AAA4C: nop

    // 0x800AAA50: bne         $t8, $at, L_800AAA88
    if (ctx->r24 != ctx->r1) {
        // 0x800AAA54: nop
    
            goto L_800AAA88;
    }
    // 0x800AAA54: nop

    // 0x800AAA58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAA5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAA60: jal         0x8001B44C
    // 0x800AAA64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_7;
    // 0x800AAA64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x800AAA68: beq         $v0, $zero, L_800AAA88
    if (ctx->r2 == 0) {
        // 0x800AAA6C: nop
    
            goto L_800AAA88;
    }
    // 0x800AAA6C: nop

    // 0x800AAA70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AAA74: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800AAA78: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800AAA7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800AAA80: nop

    // 0x800AAA84: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800AAA88:
    // 0x800AAA88: b           L_800AAA90
    // 0x800AAA8C: nop

        goto L_800AAA90;
    // 0x800AAA8C: nop

L_800AAA90:
    // 0x800AAA90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AAA94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AAA98: jr          $ra
    // 0x800AAA9C: nop

    return;
    // 0x800AAA9C: nop

;}
RECOMP_FUNC void func_800BF75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BF75C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800BF760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BF764: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BF768: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BF76C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BF770: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BF774: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF778: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BF77C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BF780: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BF784: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BF788: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BF78C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800BF790: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF794: nop

    // 0x800BF798: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BF79C: nop

    // 0x800BF7A0: bne         $t1, $zero, L_800BF7E0
    if (ctx->r9 != 0) {
        // 0x800BF7A4: nop
    
            goto L_800BF7E0;
    }
    // 0x800BF7A4: nop

    // 0x800BF7A8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF7AC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BF7B0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BF7B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800BF7B8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF7BC: nop

    // 0x800BF7C0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BF7C4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BF7C8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF7CC: nop

    // 0x800BF7D0: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BF7D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF7D8: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x800BF7DC: sh          $t6, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r14;
L_800BF7E0:
    // 0x800BF7E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF7E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF7E8: jal         0x80029C40
    // 0x800BF7EC: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x800BF7EC: nop

    after_0:
    // 0x800BF7F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF7F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF7F8: jal         0x80029D04
    // 0x800BF7FC: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x800BF7FC: nop

    after_1:
    // 0x800BF800: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF804: nop

    // 0x800BF808: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800BF80C: nop

    // 0x800BF810: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800BF814: sh          $t0, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = ctx->r8;
    // 0x800BF818: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF81C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BF820: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x800BF824: nop

    // 0x800BF828: bne         $t2, $at, L_800BF864
    if (ctx->r10 != ctx->r1) {
        // 0x800BF82C: nop
    
            goto L_800BF864;
    }
    // 0x800BF82C: nop

    // 0x800BF830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF834: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF838: jal         0x8001B44C
    // 0x800BF83C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800BF83C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x800BF840: beq         $v0, $zero, L_800BF864
    if (ctx->r2 == 0) {
        // 0x800BF844: nop
    
            goto L_800BF864;
    }
    // 0x800BF844: nop

    // 0x800BF848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BF84C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BF850: jal         0x8001BBDC
    // 0x800BF854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800BF854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x800BF858: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF85C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x800BF860: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_800BF864:
    // 0x800BF864: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF868: nop

    // 0x800BF86C: lh          $t6, 0xB2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XB2);
    // 0x800BF870: nop

    // 0x800BF874: bgtz        $t6, L_800BF894
    if (SIGNED(ctx->r14) > 0) {
        // 0x800BF878: nop
    
            goto L_800BF894;
    }
    // 0x800BF878: nop

    // 0x800BF87C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF880: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800BF884: sh          $t7, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r15;
    // 0x800BF888: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800BF88C: nop

    // 0x800BF890: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800BF894:
    // 0x800BF894: b           L_800BF89C
    // 0x800BF898: nop

        goto L_800BF89C;
    // 0x800BF898: nop

L_800BF89C:
    // 0x800BF89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BF8A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800BF8A4: jr          $ra
    // 0x800BF8A8: nop

    return;
    // 0x800BF8A8: nop

;}
RECOMP_FUNC void func_800FB548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB548: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800FB54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FB550: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FB554: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FB558: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FB55C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FB560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB564: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FB568: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB56C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FB570: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FB574: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FB578: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800FB57C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB580: nop

    // 0x800FB584: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FB588: nop

    // 0x800FB58C: bne         $t1, $zero, L_800FB5B8
    if (ctx->r9 != 0) {
        // 0x800FB590: nop
    
            goto L_800FB5B8;
    }
    // 0x800FB590: nop

    // 0x800FB594: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB598: nop

    // 0x800FB59C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FB5A0: nop

    // 0x800FB5A4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FB5A8: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FB5AC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB5B0: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800FB5B4: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_800FB5B8:
    // 0x800FB5B8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB5BC: nop

    // 0x800FB5C0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800FB5C4: nop

    // 0x800FB5C8: bne         $t8, $zero, L_800FB5F8
    if (ctx->r24 != 0) {
        // 0x800FB5CC: nop
    
            goto L_800FB5F8;
    }
    // 0x800FB5CC: nop

    // 0x800FB5D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB5D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB5D8: jal         0x8001BB34
    // 0x800FB5DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800FB5DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800FB5E0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB5E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800FB5E8: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800FB5EC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB5F0: b           L_800FB67C
    // 0x800FB5F4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800FB67C;
    // 0x800FB5F4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800FB5F8:
    // 0x800FB5F8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB5FC: nop

    // 0x800FB600: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800FB604: nop

    // 0x800FB608: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800FB60C: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800FB610: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB614: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB618: lwc1        $f4, 0xC($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800FB61C: lwc1        $f9, 0x5770($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5770);
    // 0x800FB620: lwc1        $f8, 0x5774($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5774);
    // 0x800FB624: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800FB628: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x800FB62C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800FB630: swc1        $f16, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f16.u32l;
    // 0x800FB634: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB638: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB63C: lwc1        $f18, 0x10($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X10);
    // 0x800FB640: lwc1        $f7, 0x5778($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5778);
    // 0x800FB644: lwc1        $f6, 0x577C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X577C);
    // 0x800FB648: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800FB64C: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x800FB650: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800FB654: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x800FB658: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800FB65C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB660: lwc1        $f16, 0x14($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800FB664: lwc1        $f5, 0x5780($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5780);
    // 0x800FB668: lwc1        $f4, 0x5784($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5784);
    // 0x800FB66C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800FB670: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x800FB674: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800FB678: swc1        $f8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f8.u32l;
L_800FB67C:
    // 0x800FB67C: b           L_800FB684
    // 0x800FB680: nop

        goto L_800FB684;
    // 0x800FB680: nop

L_800FB684:
    // 0x800FB684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FB688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800FB68C: jr          $ra
    // 0x800FB690: nop

    return;
    // 0x800FB690: nop

;}
RECOMP_FUNC void func_8007B928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007B928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007B92C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B930: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007B934: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8007B938: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007B93C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007B940: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B944: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007B948: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007B94C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007B950: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007B954: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007B958: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007B95C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B960: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8007B964: jal         0x800682E0
    // 0x8007B968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800682E0(rdram, ctx);
        goto after_0;
    // 0x8007B968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8007B96C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007B970: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B974: sw          $t0, -0x1DC8($at)
    MEM_W(-0X1DC8, ctx->r1) = ctx->r8;
    // 0x8007B978: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8007B97C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007B980: sw          $t1, -0x1DC0($at)
    MEM_W(-0X1DC0, ctx->r1) = ctx->r9;
    // 0x8007B984: jal         0x80085884
    // 0x8007B988: nop

    func_80085884(rdram, ctx);
        goto after_1;
    // 0x8007B988: nop

    after_1:
    // 0x8007B98C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B990: jal         0x8007897C
    // 0x8007B994: nop

    func_8007897C(rdram, ctx);
        goto after_2;
    // 0x8007B994: nop

    after_2:
    // 0x8007B998: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B99C: jal         0x80079688
    // 0x8007B9A0: nop

    func_80079688(rdram, ctx);
        goto after_3;
    // 0x8007B9A0: nop

    after_3:
    // 0x8007B9A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B9A8: jal         0x800797FC
    // 0x8007B9AC: nop

    func_800797FC(rdram, ctx);
        goto after_4;
    // 0x8007B9AC: nop

    after_4:
    // 0x8007B9B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B9B4: jal         0x80079B60
    // 0x8007B9B8: nop

    func_80079B60(rdram, ctx);
        goto after_5;
    // 0x8007B9B8: nop

    after_5:
    // 0x8007B9BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007B9C0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8007B9C4: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x8007B9C8: nop

    // 0x8007B9CC: bne         $t3, $at, L_8007BB5C
    if (ctx->r11 != ctx->r1) {
        // 0x8007B9D0: nop
    
            goto L_8007BB5C;
    }
    // 0x8007B9D0: nop

    // 0x8007B9D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B9D8: jal         0x80078AEC
    // 0x8007B9DC: nop

    func_80078AEC(rdram, ctx);
        goto after_6;
    // 0x8007B9DC: nop

    after_6:
    // 0x8007B9E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007B9E4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B9E8: nop

    // 0x8007B9EC: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x8007B9F0: beq         $t5, $zero, L_8007BA14
    if (ctx->r13 == 0) {
        // 0x8007B9F4: nop
    
            goto L_8007BA14;
    }
    // 0x8007B9F4: nop

    // 0x8007B9F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007B9FC: jal         0x800795C8
    // 0x8007BA00: nop

    func_800795C8(rdram, ctx);
        goto after_7;
    // 0x8007BA00: nop

    after_7:
    // 0x8007BA04: b           L_8007BBC8
    // 0x8007BA08: nop

        goto L_8007BBC8;
    // 0x8007BA08: nop

    // 0x8007BA0C: b           L_8007BA64
    // 0x8007BA10: nop

        goto L_8007BA64;
    // 0x8007BA10: nop

L_8007BA14:
    // 0x8007BA14: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007BA18: nop

    // 0x8007BA1C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8007BA20: beq         $t7, $zero, L_8007BA64
    if (ctx->r15 == 0) {
        // 0x8007BA24: nop
    
            goto L_8007BA64;
    }
    // 0x8007BA24: nop

    // 0x8007BA28: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007BA2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007BA30: sh          $t8, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r24;
    // 0x8007BA34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8007BA38: nop

    // 0x8007BA3C: lwc1        $f4, 0x24($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X24);
    // 0x8007BA40: nop

    // 0x8007BA44: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8007BA48: swc1        $f6, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f6.u32l;
    // 0x8007BA4C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8007BA50: nop

    // 0x8007BA54: lwc1        $f8, 0x2C($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x8007BA58: nop

    // 0x8007BA5C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8007BA60: swc1        $f10, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f10.u32l;
L_8007BA64:
    // 0x8007BA64: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8007BA68: nop

    // 0x8007BA6C: lh          $t3, 0xB6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB6);
    // 0x8007BA70: nop

    // 0x8007BA74: beq         $t3, $zero, L_8007BB54
    if (ctx->r11 == 0) {
        // 0x8007BA78: nop
    
            goto L_8007BB54;
    }
    // 0x8007BA78: nop

    // 0x8007BA7C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8007BA80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007BA84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007BA88: lwc1        $f16, 0x24($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X24);
    // 0x8007BA8C: nop

    // 0x8007BA90: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8007BA94: swc1        $f4, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->f4.u32l;
    // 0x8007BA98: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8007BA9C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007BAA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007BAA4: lwc1        $f6, 0x2C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X2C);
    // 0x8007BAA8: nop

    // 0x8007BAAC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007BAB0: swc1        $f10, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f10.u32l;
    // 0x8007BAB4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8007BAB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007BABC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007BAC0: lwc1        $f16, 0x24($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X24);
    // 0x8007BAC4: nop

    // 0x8007BAC8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8007BACC: nop

    // 0x8007BAD0: bc1f        L_8007BB04
    if (!c1cs) {
        // 0x8007BAD4: nop
    
            goto L_8007BB04;
    }
    // 0x8007BAD4: nop

    // 0x8007BAD8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007BADC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007BAE0: nop

    // 0x8007BAE4: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x8007BAE8: nop

    // 0x8007BAEC: bc1f        L_8007BB04
    if (!c1cs) {
        // 0x8007BAF0: nop
    
            goto L_8007BB04;
    }
    // 0x8007BAF0: nop

    // 0x8007BAF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007BAF8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007BAFC: nop

    // 0x8007BB00: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
L_8007BB04:
    // 0x8007BB04: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007BB08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007BB0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007BB10: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x8007BB14: nop

    // 0x8007BB18: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8007BB1C: nop

    // 0x8007BB20: bc1f        L_8007BB54
    if (!c1cs) {
        // 0x8007BB24: nop
    
            goto L_8007BB54;
    }
    // 0x8007BB24: nop

    // 0x8007BB28: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007BB2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007BB30: nop

    // 0x8007BB34: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x8007BB38: nop

    // 0x8007BB3C: bc1f        L_8007BB54
    if (!c1cs) {
        // 0x8007BB40: nop
    
            goto L_8007BB54;
    }
    // 0x8007BB40: nop

    // 0x8007BB44: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007BB48: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007BB4C: nop

    // 0x8007BB50: swc1        $f16, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f16.u32l;
L_8007BB54:
    // 0x8007BB54: b           L_8007BB88
    // 0x8007BB58: nop

        goto L_8007BB88;
    // 0x8007BB58: nop

L_8007BB5C:
    // 0x8007BB5C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007BB60: jal         0x80078AEC
    // 0x8007BB64: nop

    func_80078AEC(rdram, ctx);
        goto after_8;
    // 0x8007BB64: nop

    after_8:
    // 0x8007BB68: andi        $t0, $v0, 0xC
    ctx->r8 = ctx->r2 & 0XC;
    // 0x8007BB6C: beq         $t0, $zero, L_8007BB88
    if (ctx->r8 == 0) {
        // 0x8007BB70: nop
    
            goto L_8007BB88;
    }
    // 0x8007BB70: nop

    // 0x8007BB74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007BB78: jal         0x800795C8
    // 0x8007BB7C: nop

    func_800795C8(rdram, ctx);
        goto after_9;
    // 0x8007BB7C: nop

    after_9:
    // 0x8007BB80: b           L_8007BBC8
    // 0x8007BB84: nop

        goto L_8007BBC8;
    // 0x8007BB84: nop

L_8007BB88:
    // 0x8007BB88: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007BB8C: jal         0x80079D48
    // 0x8007BB90: nop

    func_80079D48(rdram, ctx);
        goto after_10;
    // 0x8007BB90: nop

    after_10:
    // 0x8007BB94: beq         $v0, $zero, L_8007BBA4
    if (ctx->r2 == 0) {
        // 0x8007BB98: nop
    
            goto L_8007BBA4;
    }
    // 0x8007BB98: nop

    // 0x8007BB9C: b           L_8007BBC8
    // 0x8007BBA0: nop

        goto L_8007BBC8;
    // 0x8007BBA0: nop

L_8007BBA4:
    // 0x8007BBA4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8007BBA8: jal         0x8007B4BC
    // 0x8007BBAC: nop

    func_8007B4BC(rdram, ctx);
        goto after_11;
    // 0x8007BBAC: nop

    after_11:
    // 0x8007BBB0: beq         $v0, $zero, L_8007BBC0
    if (ctx->r2 == 0) {
        // 0x8007BBB4: nop
    
            goto L_8007BBC0;
    }
    // 0x8007BBB4: nop

    // 0x8007BBB8: b           L_8007BBC8
    // 0x8007BBBC: nop

        goto L_8007BBC8;
    // 0x8007BBBC: nop

L_8007BBC0:
    // 0x8007BBC0: b           L_8007BBC8
    // 0x8007BBC4: nop

        goto L_8007BBC8;
    // 0x8007BBC4: nop

L_8007BBC8:
    // 0x8007BBC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007BBCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007BBD0: jr          $ra
    // 0x8007BBD4: nop

    return;
    // 0x8007BBD4: nop

;}
RECOMP_FUNC void func_8008C61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C61C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008C620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008C624: sb          $t6, 0x6606($at)
    MEM_B(0X6606, ctx->r1) = ctx->r14;
    // 0x8008C628: jr          $ra
    // 0x8008C62C: nop

    return;
    // 0x8008C62C: nop

    // 0x8008C630: jr          $ra
    // 0x8008C634: nop

    return;
    // 0x8008C634: nop

;}
RECOMP_FUNC void func_8007CEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CEB8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007CEBC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007CEC0: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007CEC4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007CEC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007CECC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007CED0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007CED4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007CED8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007CEDC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007CEE0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007CEE4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8007CEE8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007CEEC: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
    // 0x8007CEF0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8007CEF4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007CEF8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007CEFC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF00: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007CF04: nop

    // 0x8007CF08: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
    // 0x8007CF0C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8007CF10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007CF14: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF18: nop

    // 0x8007CF1C: swc1        $f6, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f6.u32l;
    // 0x8007CF20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007CF24: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF28: nop

    // 0x8007CF2C: swc1        $f8, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f8.u32l;
    // 0x8007CF30: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8007CF34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007CF38: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF3C: nop

    // 0x8007CF40: swc1        $f10, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f10.u32l;
    // 0x8007CF44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007CF48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007CF4C: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF50: nop

    // 0x8007CF54: swc1        $f16, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f16.u32l;
    // 0x8007CF58: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF5C: nop

    // 0x8007CF60: lwc1        $f12, 0x14($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8007CF64: nop

    // 0x8007CF68: swc1        $f12, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f12.u32l;
    // 0x8007CF6C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007CF70: nop

    // 0x8007CF74: swc1        $f12, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f12.u32l;
    // 0x8007CF78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007CF7C: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007CF80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007CF84: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8007CF88: b           L_8007CF90
    // 0x8007CF8C: nop

        goto L_8007CF90;
    // 0x8007CF8C: nop

L_8007CF90:
    // 0x8007CF90: jr          $ra
    // 0x8007CF94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007CF94: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800B7F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7F90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800B7F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B7F98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B7F9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B7FA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B7FA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B7FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7FAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B7FB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7FB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7FB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B7FBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B7FC0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800B7FC4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7FC8: nop

    // 0x800B7FCC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B7FD0: nop

    // 0x800B7FD4: bne         $t1, $zero, L_800B8058
    if (ctx->r9 != 0) {
        // 0x800B7FD8: nop
    
            goto L_800B8058;
    }
    // 0x800B7FD8: nop

    // 0x800B7FDC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7FE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B7FE4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B7FE8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B7FEC: lwc1        $f4, 0x4C00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4C00);
    // 0x800B7FF0: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B7FF4: nop

    // 0x800B7FF8: swc1        $f4, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f4.u32l;
    // 0x800B7FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8004: jal         0x8001BBDC
    // 0x800B8008: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B8008: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800B800C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8010: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8014: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B8018: addiu       $a3, $a3, 0x7B84
    ctx->r7 = ADD32(ctx->r7, 0X7B84);
    // 0x800B801C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B8020: jal         0x8001ABF4
    // 0x800B8024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800B8024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800B8028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B802C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8030: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800B8034: addiu       $a3, $a3, 0x7BA0
    ctx->r7 = ADD32(ctx->r7, 0X7BA0);
    // 0x800B8038: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800B803C: jal         0x8001ABF4
    // 0x800B8040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800B8040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800B8044: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8048: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B804C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x800B8050: jal         0x80029EF8
    // 0x800B8054: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_80029EF8(rdram, ctx);
        goto after_3;
    // 0x800B8054: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
L_800B8058:
    // 0x800B8058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B805C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8060: jal         0x80029C40
    // 0x800B8064: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B8064: nop

    after_4:
    // 0x800B8068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B806C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8070: jal         0x80029D04
    // 0x800B8074: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800B8074: nop

    after_5:
    // 0x800B8078: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800B807C: nop

    // 0x800B8080: lwc1        $f6, 0x3C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x800B8084: nop

    // 0x800B8088: swc1        $f6, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f6.u32l;
    // 0x800B808C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B8094: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800B8098: nop

    // 0x800B809C: bne         $t7, $at, L_800B813C
    if (ctx->r15 != ctx->r1) {
        // 0x800B80A0: nop
    
            goto L_800B813C;
    }
    // 0x800B80A0: nop

    // 0x800B80A4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x800B80A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B80AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B80B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B80B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800B80B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800B80BC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B80C0: jal         0x80029F58
    // 0x800B80C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_6;
    // 0x800B80C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x800B80C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B80CC: bne         $v0, $at, L_800B8134
    if (ctx->r2 != ctx->r1) {
        // 0x800B80D0: nop
    
            goto L_800B8134;
    }
    // 0x800B80D0: nop

    // 0x800B80D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800B80D8: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800B80DC: sb          $t8, 0x132($t9)
    MEM_B(0X132, ctx->r25) = ctx->r24;
    // 0x800B80E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B80E4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800B80E8: nop

    // 0x800B80EC: swc1        $f10, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f10.u32l;
    // 0x800B80F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B80F4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B80F8: nop

    // 0x800B80FC: swc1        $f16, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f16.u32l;
    // 0x800B8100: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8104: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800B8108: addiu       $t2, $t2, 0x7AA0
    ctx->r10 = ADD32(ctx->r10, 0X7AA0);
    // 0x800B810C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8110: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800B8114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B8118: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800B811C: jal         0x8001C0EC
    // 0x800B8120: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x800B8120: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_7:
    // 0x800B8124: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8128: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B812C: jal         0x8001BBDC
    // 0x800B8130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_8;
    // 0x800B8130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_800B8134:
    // 0x800B8134: b           L_800B819C
    // 0x800B8138: nop

        goto L_800B819C;
    // 0x800B8138: nop

L_800B813C:
    // 0x800B813C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8140: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B8144: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x800B8148: nop

    // 0x800B814C: bne         $t4, $at, L_800B819C
    if (ctx->r12 != ctx->r1) {
        // 0x800B8150: nop
    
            goto L_800B819C;
    }
    // 0x800B8150: nop

    // 0x800B8154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B8158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B815C: jal         0x8001B44C
    // 0x800B8160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_9;
    // 0x800B8160: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800B8164: beq         $v0, $zero, L_800B819C
    if (ctx->r2 == 0) {
        // 0x800B8168: nop
    
            goto L_800B819C;
    }
    // 0x800B8168: nop

    // 0x800B816C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800B8170: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800B8174: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x800B8178: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B817C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800B8180: addiu       $t7, $t7, 0x7AA0
    ctx->r15 = ADD32(ctx->r15, 0X7AA0);
    // 0x800B8184: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B8188: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800B818C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B8190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800B8194: jal         0x8001C0EC
    // 0x800B8198: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x800B8198: addiu       $a3, $zero, 0xB9
    ctx->r7 = ADD32(0, 0XB9);
    after_10:
L_800B819C:
    // 0x800B819C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800B81A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800B81A4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800B81A8: nop

    // 0x800B81AC: bne         $t9, $at, L_800B81D8
    if (ctx->r25 != ctx->r1) {
        // 0x800B81B0: nop
    
            goto L_800B81D8;
    }
    // 0x800B81B0: nop

    // 0x800B81B4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800B81B8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x800B81BC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800B81C0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800B81C4: nop

    // 0x800B81C8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800B81CC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800B81D0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800B81D4: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_800B81D8:
    // 0x800B81D8: b           L_800B81E0
    // 0x800B81DC: nop

        goto L_800B81E0;
    // 0x800B81DC: nop

L_800B81E0:
    // 0x800B81E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B81E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800B81E8: jr          $ra
    // 0x800B81EC: nop

    return;
    // 0x800B81EC: nop

;}
RECOMP_FUNC void func_800FB05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FB05C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x800FB060: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800FB064: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800FB068: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800FB06C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FB070: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FB074: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FB078: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FB07C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FB084: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FB088: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FB08C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FB090: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FB094: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x800FB098: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800FB09C: nop

    // 0x800FB0A0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FB0A4: nop

    // 0x800FB0A8: bne         $t1, $zero, L_800FB0FC
    if (ctx->r9 != 0) {
        // 0x800FB0AC: nop
    
            goto L_800FB0FC;
    }
    // 0x800FB0AC: nop

    // 0x800FB0B0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x800FB0B4: nop

    // 0x800FB0B8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800FB0BC: nop

    // 0x800FB0C0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800FB0C4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800FB0C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB0CC: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800FB0D0: addiu       $t5, $t5, 0x6EC4
    ctx->r13 = ADD32(ctx->r13, 0X6EC4);
    // 0x800FB0D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB0D8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800FB0DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800FB0E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800FB0E4: jal         0x8001C0EC
    // 0x800FB0E8: addiu       $a3, $zero, 0x19E
    ctx->r7 = ADD32(0, 0X19E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800FB0E8: addiu       $a3, $zero, 0x19E
    ctx->r7 = ADD32(0, 0X19E);
    after_0:
    // 0x800FB0EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB0F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB0F4: jal         0x8001BBDC
    // 0x800FB0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800FB0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800FB0FC:
    // 0x800FB0FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB104: jal         0x8002A640
    // 0x800FB108: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8002A640(rdram, ctx);
        goto after_2;
    // 0x800FB108: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x800FB10C: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x800FB110: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x800FB114: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800FB118: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FB11C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FB120: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x800FB124: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800FB128: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x800FB12C: jal         0x80015538
    // 0x800FB130: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800FB130: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_3:
    // 0x800FB134: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FB138: nop

    // 0x800FB13C: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x800FB140: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x800FB144: nop

    // 0x800FB148: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800FB14C: nop

    // 0x800FB150: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
    // 0x800FB154: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB158: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB15C: jal         0x8001B62C
    // 0x800FB160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x800FB160: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x800FB164: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800FB168: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800FB16C: nop

    // 0x800FB170: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x800FB174: nop

    // 0x800FB178: bc1f        L_800FB2E8
    if (!c1cs) {
        // 0x800FB17C: nop
    
            goto L_800FB2E8;
    }
    // 0x800FB17C: nop

    // 0x800FB180: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FB184: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800FB188: lw          $a1, 0x1C($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X1C);
    // 0x800FB18C: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x800FB190: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800FB194: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800FB198: jal         0x800372A0
    // 0x800FB19C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    guRotateF(rdram, ctx);
        goto after_5;
    // 0x800FB19C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800FB1A0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800FB1A4: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x800FB1A8: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x800FB1AC: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x800FB1B0: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x800FB1B4: jal         0x80037200
    // 0x800FB1B8: nop

    guTranslateF(rdram, ctx);
        goto after_6;
    // 0x800FB1B8: nop

    after_6:
    // 0x800FB1BC: addiu       $t4, $sp, 0x7C
    ctx->r12 = ADD32(ctx->r29, 0X7C);
    // 0x800FB1C0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x800FB1C4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x800FB1C8: jal         0x80036400
    // 0x800FB1CC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x800FB1CC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_7:
    // 0x800FB1D0: addiu       $t2, $sp, 0xC4
    ctx->r10 = ADD32(ctx->r29, 0XC4);
    // 0x800FB1D4: addiu       $t5, $sp, 0xC0
    ctx->r13 = ADD32(ctx->r29, 0XC0);
    // 0x800FB1D8: addiu       $t6, $sp, 0xBC
    ctx->r14 = ADD32(ctx->r29, 0XBC);
    // 0x800FB1DC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800FB1E0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800FB1E4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800FB1E8: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x800FB1EC: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x800FB1F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800FB1F4: jal         0x80036360
    // 0x800FB1F8: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_8;
    // 0x800FB1F8: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_8:
    // 0x800FB1FC: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x800FB200: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800FB204: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800FB208: lwc1        $f18, 0x1C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x800FB20C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800FB210: lw          $a2, 0xC4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC4);
    // 0x800FB214: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x800FB218: addiu       $a1, $a1, 0x36DC
    ctx->r5 = ADD32(ctx->r5, 0X36DC);
    // 0x800FB21C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800FB220: jal         0x80027464
    // 0x800FB224: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_9;
    // 0x800FB224: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x800FB228: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    // 0x800FB22C: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x800FB230: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FB234: beq         $t8, $at, L_800FB2E8
    if (ctx->r24 == ctx->r1) {
        // 0x800FB238: nop
    
            goto L_800FB2E8;
    }
    // 0x800FB238: nop

    // 0x800FB23C: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x800FB240: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x800FB244: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800FB248: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800FB24C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800FB250: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800FB254: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800FB258: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800FB25C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FB260: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800FB264: swc1        $f4, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f4.u32l;
    // 0x800FB268: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x800FB26C: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x800FB270: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800FB274: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800FB278: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x800FB27C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800FB280: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FB284: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800FB288: lwc1        $f6, 0x5768($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5768);
    // 0x800FB28C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800FB290: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800FB294: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800FB298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FB29C: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x800FB2A0: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x800FB2A4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800FB2A8: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x800FB2AC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800FB2B0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800FB2B4: swc1        $f6, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f6.u32l;
    // 0x800FB2B8: lwc1        $f20, 0x14($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X14);
    // 0x800FB2BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800FB2C0: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x800FB2C4: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x800FB2C8: nop

    // 0x800FB2CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800FB2D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FB2D4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800FB2D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FB2DC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800FB2E0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800FB2E4: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
L_800FB2E8:
    // 0x800FB2E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB2EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB2F0: jal         0x8001B44C
    // 0x800FB2F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_10;
    // 0x800FB2F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x800FB2F8: beq         $v0, $zero, L_800FB328
    if (ctx->r2 == 0) {
        // 0x800FB2FC: nop
    
            goto L_800FB328;
    }
    // 0x800FB2FC: nop

    // 0x800FB300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FB304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FB308: jal         0x8001BBDC
    // 0x800FB30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x800FB30C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x800FB310: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x800FB314: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800FB318: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800FB31C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800FB320: nop

    // 0x800FB324: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800FB328:
    // 0x800FB328: b           L_800FB330
    // 0x800FB32C: nop

        goto L_800FB330;
    // 0x800FB32C: nop

L_800FB330:
    // 0x800FB330: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800FB334: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800FB338: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800FB33C: jr          $ra
    // 0x800FB340: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x800FB340: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_800DA648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DA64C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DA650: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA654: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA658: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA65C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA660: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA664: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA668: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA66C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA670: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800DA674: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800DA678: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DA67C: bne         $t8, $at, L_800DA69C
    if (ctx->r24 != ctx->r1) {
        // 0x800DA680: nop
    
            goto L_800DA69C;
    }
    // 0x800DA680: nop

    // 0x800DA684: b           L_800DA68C
    // 0x800DA688: nop

        goto L_800DA68C;
    // 0x800DA688: nop

L_800DA68C:
    // 0x800DA68C: jal         0x800DA5E4
    // 0x800DA690: nop

    func_800DA5E4(rdram, ctx);
        goto after_0;
    // 0x800DA690: nop

    after_0:
    // 0x800DA694: b           L_800DA6A4
    // 0x800DA698: nop

        goto L_800DA6A4;
    // 0x800DA698: nop

L_800DA69C:
    // 0x800DA69C: b           L_800DA6A4
    // 0x800DA6A0: nop

        goto L_800DA6A4;
    // 0x800DA6A0: nop

L_800DA6A4:
    // 0x800DA6A4: b           L_800DA6AC
    // 0x800DA6A8: nop

        goto L_800DA6AC;
    // 0x800DA6A8: nop

L_800DA6AC:
    // 0x800DA6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DA6B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DA6B4: jr          $ra
    // 0x800DA6B8: nop

    return;
    // 0x800DA6B8: nop

;}
